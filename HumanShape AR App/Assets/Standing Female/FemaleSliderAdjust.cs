using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System;
using UnityEngine.UI;
using TMPro;

public class FemaleSliderAdjust : MonoBehaviour
{

    public GameObject model;
    [Header("Model Datasets")]
    [SerializeField] TextAsset pcaDataAsset;
    [SerializeField] TextAsset meanLandmarkDataAsset;
    [SerializeField] TextAsset correctVertexOrderDataAsset;


    [Header("UI Elements")]
    [SerializeField] Slider sliderBMI;
    [SerializeField] Slider sliderStature;
    [SerializeField] Slider sliderSittingHeightStat;
    [SerializeField] Slider sliderAge;
    [SerializeField] Slider sliderRotation;
    [SerializeField] TextMeshProUGUI lbBMI;
    [SerializeField] TextMeshProUGUI lbStature;
    [SerializeField] TextMeshProUGUI lbSittingHeightStat;
    [SerializeField] TextMeshProUGUI lbAge;
    [SerializeField] TextMeshProUGUI lbRotation;
    [SerializeField] Text landmarkButtonText;

    [SerializeField] bool areLandmarksDisplayed = false;

    List<double[]> pcaData = new List<double[]>();
    List<double[]> landmarkData = new List<double[]>();

    // maps vertices to their index in the vertices array
    // obtained from the meshfilter component by Unity
    Dictionary<string, int> indexMap = new Dictionary<string, int>();

    Mesh mesh;
    Vector3[] vertices;
    Vector3[] correctVertices;
    Vector3[] meanVertices;


    int predAnthNum = 51;
    int predLandmarkNum = 93;

    // gets vertices in the correct order for performing calculations from the dataset
    Vector3[] getCorrectVertices()
    {
        string[] data = correctVertexOrderDataAsset.text.Split(new String[] { ",", "\n" }, StringSplitOptions.None);
        int numCols = 3;
        int numRows = (data.Length - 1) / numCols;
        Vector3[] correctOrderVertices = new Vector3[numRows];
        for (int i = 0, k = 0; i < data.Length - 1; i+= numCols, k++)
        {
            Vector3 curr = new Vector3();
            curr.x = (float)Convert.ToDouble(data[i]);
            curr.y = (float)Convert.ToDouble(data[i + 1]);
            curr.z = (float)Convert.ToDouble(data[i + 2]);
            correctOrderVertices[k] = curr;
  
        }
        return correctOrderVertices;
    }
    
    // Initialization
    void Start()
    {
        // get PCAData
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

        mesh = model.GetComponent<MeshFilter>().mesh;
        mesh.MarkDynamic();
        vertices = mesh.vertices;

        // get vertices in the correct order
        correctVertices = getCorrectVertices();

        // map each vertex to its index
        for(int i = 0; i < vertices.Length; i++)
        {
            indexMap[vertices[i].x.ToString() + " " + vertices[i].y.ToString() + " " + vertices[i].z.ToString()] = i;
        }

        // get landmark data
        var landmarkStr = meanLandmarkDataAsset.text.Split(new char[] { '\n' });

        for (int ncnt = 0; ncnt < predLandmarkNum * 3; ncnt++)
        {
            List<double> adata = new List<double>();
            adata.Add(Convert.ToDouble(landmarkStr[ncnt]));
            landmarkData.Add(adata.ToArray());
        }

        meanVertices = correctVertices;
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
        // iterate through vertices in correct order
        for (int i = 0; i < correctVertices.Length; i++)
        {
            // find the correct index of this vertex in Unity's vertices array 
            int idx = indexMap[correctVertices[i].x.ToString() + " " +
                               correctVertices[i].y.ToString() + " " + 
                               correctVertices[i].z.ToString()];

         
            var diffx = calcCoords(Anths, pcaData[skipNum + i * 3 + 0]);
            var diffy = calcCoords(Anths, pcaData[skipNum + i * 3 + 1]);
            var diffz = calcCoords(Anths, pcaData[skipNum + i * 3 + 2]);

            vertices[idx].x = meanVertices[i].x - diffx;
            vertices[idx].y = meanVertices[i].y + diffy;
            vertices[idx].z = meanVertices[i].z + diffz;
        }

        // assign the local vertices array into the vertices array of the mesh
        mesh.vertices = vertices;
        mesh.RecalculateBounds();
        mesh.RecalculateNormals();
 
        // If landmarks are displayed, update them according to the new slider values.
        if(areLandmarksDisplayed)
        {
            model.transform.DetachChildren();
            GameObject.Destroy(GameObject.Find("landmarks"));
            CreateLandmarks();
        }

        lbStature.text = "Stature: " + sliderStature.value.ToString() + " mm";
        lbBMI.text = "BMI: " + sliderBMI.value.ToString() + " kg/m^2";
        lbSittingHeightStat.text = "Sitting Height / Stature: " + 
                                  Truncate((float)sliderSittingHeightStat.value, 6).ToString();
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
            landmarkButtonText.text = "HIDE LANDMARKS";
            CreateLandmarks();
        }
        else
        {
            areLandmarksDisplayed = false;
            landmarkButtonText.text = "SHOW LANDMARKS";
            model.transform.DetachChildren();
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

        landmarks.transform.position = model.transform.position;
        landmarks.transform.localScale = new Vector3((float)0.001, (float)0.001, (float)0.001);
        // Make landmark point cloud child of the model
        landmarks.transform.parent = model.transform;
        landmarks.transform.localRotation = Quaternion.Euler(0, 0, -180);
    }

    public void rotate()
    {
        model.transform.Rotate(new Vector3(0, 0, 1), sliderRotation.value);
        lbRotation.text = "Rotation: " + Truncate(sliderRotation.value, 2).ToString() + " degrees";
    }

    public static float Truncate(float value, int digits)
    {
        double mult = Math.Pow(10.0, digits);
        double result = Math.Truncate(mult * value) / mult;
        return (float)result;
    }
}