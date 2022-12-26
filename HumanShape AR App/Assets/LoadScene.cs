using UnityEngine;
using UnityEngine.SceneManagement;

public class LoadScene : MonoBehaviour
{
    [SerializeField] string SceneToLoad;
    public void LoadGivenScene()
    {
        // Close all current loaded Scenes and loads SceneToLoad
        SceneManager.LoadScene(SceneToLoad, LoadSceneMode.Single);
    }
}