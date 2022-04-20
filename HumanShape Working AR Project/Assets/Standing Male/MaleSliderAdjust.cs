using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System;
using UnityEngine.UI;

public class MaleSliderAdjust : MonoBehaviour
{
    public TextAsset pcaDataAsset;
    public TextAsset meanLandmarkDataAsset;

    public bool areLandmarksDisplayed = false;
    public Text landmarkButtonText;

    public Slider sliderBMI;
    public Slider sliderStature;
    public Slider sliderSittingHeightStat;
    public Slider sliderAge;
    public Slider sliderRotation;

    public Text lbBMI;
    public Text lbStature;
    public Text lbSittingHeightStat;
    public Text lbAge;
    public Text lbRotation;

    List<double[]> pcaData = new List<double[]>();
    List<double[]> landmarkData = new List<double[]>();

    Mesh mesh;
    Vector3[] vertices;
    double[][] meanVertices;

    int predAnthNum = 49;
    int predLandmarkNum = 93;
    
    // Initialization
    void Start()
    {
        var pcaDataStr = pcaDataAsset.text.Split(new char[] { '\n' });

        for (int ncnt = 0; ncnt < pcaDataStr.Length; ncnt++)
        {
            var aline = pcaDataStr[ncnt];
            string[] linedata = aline.Split(new char[] { ',' });

            if (aline == "") continue;
            List<double> adata = new List<double>();
            for (int i = 0; i < linedata.Length; i++)
            {
                if (linedata[i].Contains("\r"))
                    linedata[i] = linedata[i].Replace("\r", string.Empty);

                adata.Add(Convert.ToDouble(linedata[i]));
            }

            pcaData.Add(adata.ToArray());
        }

        mesh = GetComponent<MeshFilter>().mesh;
        vertices = mesh.vertices;
        mesh.MarkDynamic();

        var landmarkStr = meanLandmarkDataAsset.text.Split(new char[] { '\n' });

        for (int ncnt = 0; ncnt < predLandmarkNum * 3; ncnt++)
        {
            List<double> adata = new List<double>();
            adata.Add(Convert.ToDouble(landmarkStr[ncnt]));
            landmarkData.Add(adata.ToArray());
        }

        List<double[]> verts = new List<double[]>();
        for (int i = 0; i < mesh.vertices.Length; i++)
        {
            verts.Add(new double[] { mesh.vertices[i].x, mesh.vertices[i].y, mesh.vertices[i].z });
        }
        meanVertices = verts.ToArray();
    }

    void Update()
    {
    }

    public void ModelAnthroUpdate()
    {
        var Anths = new double[] {
            sliderStature.value,
            sliderBMI.value,
            sliderSittingHeightStat.value,
            sliderAge.value,
            sliderBMI.value*sliderAge.value,
            1.0
        };

        var skipNum = predAnthNum + predLandmarkNum * 3;
        for (int i = 0; i < meanVertices.Length; i++)
        {
            var diffx = calcCoords(Anths, pcaData[skipNum + i * 3 + 0]);
            var diffy = calcCoords(Anths, pcaData[skipNum + i * 3 + 1]);
            var diffz = calcCoords(Anths, pcaData[skipNum + i * 3 + 2]);

            vertices[i].x = (float)meanVertices[i][0] + diffx;
            vertices[i].y = (float)meanVertices[i][1] + diffy;
            vertices[i].z = (float)meanVertices[i][2] + diffz;
        }

        // assign the local vertices array into the vertices array of the Mesh.
        mesh.vertices = vertices;
        mesh.RecalculateBounds();
        mesh.RecalculateNormals();
 
        // If landmarks are displayed, update them according to the new slider values.
        if(areLandmarksDisplayed)
        {
            gameObject.transform.DetachChildren();
            GameObject.Destroy(GameObject.Find("landmarks"));
            CreateLandmarks();
        }

        lbStature.text = "Stature: " + sliderStature.value.ToString() + " mm";
        lbBMI.text = "BMI: " + sliderBMI.value.ToString() + " kg/m^2";
        lbSittingHeightStat.text = "Sitting Height / Stature: " + Truncate((float)sliderSittingHeightStat.value, 6).ToString();
        lbAge.text = "Age: " + sliderAge.value.ToString() + " years";

    }


    private float calcCoords(double[] diffAnths, double[] onePCAdata)
    
    {   var diffCoords = 0.0;
        
        for (int k = 0; k < diffAnths.Length; k++)
        {
            diffCoords += onePCAdata[k] * diffAnths[k];
        
        }
        
        return ((float)diffCoords);
    }


    public void ShowLandmarks()
    {
        if (!areLandmarksDisplayed)
        {
            areLandmarksDisplayed = true;
            landmarkButtonText.text = "Hide Landmarks";
            CreateLandmarks();
        }
        else
        {
            areLandmarksDisplayed = false;
            landmarkButtonText.text = "Show Landmarks";
            gameObject.transform.DetachChildren();
            GameObject.Destroy(GameObject.Find("landmarks"));
        }
    }


    void CreateLandmarks()
    {
        var Anths = new double[] {
              sliderStature.value,
              sliderBMI.value,
              sliderSittingHeightStat.value,
              sliderAge.value,
              sliderBMI.value*sliderAge.value,
              1.0
        };

        GameObject landmarks = new GameObject("landmarks");

        for (int i = 0; i < predLandmarkNum; i++)
        {
            var xcoord = landmarkData[i * 3 + 0][0] + calcCoords(Anths, pcaData[predAnthNum + i * 3 + 0]);
            var ycoord = landmarkData[i * 3 + 1][0] + calcCoords(Anths, pcaData[predAnthNum + i * 3 + 1]);
            var zcoord = landmarkData[i * 3 + 2][0] + calcCoords(Anths, pcaData[predAnthNum + i * 3 + 2]);

            // Create a sphere
            GameObject sphere = GameObject.CreatePrimitive(PrimitiveType.Sphere);

            // Assign calculated position
            sphere.transform.position = new Vector3((float)xcoord, (float)ycoord, (float)zcoord);

            // Give it color and prevent it from casting shadows on the model
            sphere.GetComponent<Renderer>().material.color = Color.green;
            sphere.GetComponent<MeshRenderer>().shadowCastingMode = UnityEngine.Rendering.ShadowCastingMode.Off;

            // Increase its scale factor to 20
            sphere.transform.localScale += new Vector3(20, 20, 20);

            // Make it a child of the "landmarks" gameObject
            sphere.transform.parent = landmarks.transform;
        }

        landmarks.transform.position = gameObject.transform.position;
        landmarks.transform.localScale = new Vector3((float)0.00127001, (float)0.00127001, (float)0.00127001);
        // Make landmark point cloud child of the model
        landmarks.transform.parent = gameObject.transform;
        landmarks.transform.localRotation = Quaternion.Euler(0, 0, -180);
    }

    public void rotate()
    {
        gameObject.transform.Rotate(new Vector3(0, 0, 1), sliderRotation.value);
        lbRotation.text = "Rotation: " + Truncate(sliderRotation.value, 2).ToString() + " degrees";
    }

    public static float Truncate(float value, int digits)
    {
        double mult = Math.Pow(10.0, digits);
        double result = Math.Truncate(mult * value) / mult;
        return (float)result;
    }

}