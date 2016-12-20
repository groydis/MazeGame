struct ClassRegistrationContext;
void InvokeRegisterStaticallyLinkedModuleClasses(ClassRegistrationContext& context)
{
	// Do nothing (we're in stripping mode)
}

void RegisterStaticallyLinkedModulesGranular()
{
	void RegisterModule_Animation();
	RegisterModule_Animation();

	void RegisterModule_Audio();
	RegisterModule_Audio();

	void RegisterModule_CloudWebServices();
	RegisterModule_CloudWebServices();

	void RegisterModule_Physics();
	RegisterModule_Physics();

	void RegisterModule_UnityConnect();
	RegisterModule_UnityConnect();

	void RegisterModule_UnityWebRequest();
	RegisterModule_UnityWebRequest();

}

void RegisterAllClasses()
{
	//Total: 65 classes
	//0. GUILayer
	void RegisterClass_GUILayer();
	RegisterClass_GUILayer();

	//1. Behaviour
	void RegisterClass_Behaviour();
	RegisterClass_Behaviour();

	//2. Component
	void RegisterClass_Component();
	RegisterClass_Component();

	//3. EditorExtension
	void RegisterClass_EditorExtension();
	RegisterClass_EditorExtension();

	//4. Texture
	void RegisterClass_Texture();
	RegisterClass_Texture();

	//5. NamedObject
	void RegisterClass_NamedObject();
	RegisterClass_NamedObject();

	//6. Texture2D
	void RegisterClass_Texture2D();
	RegisterClass_Texture2D();

	//7. NetworkView
	void RegisterClass_NetworkView();
	RegisterClass_NetworkView();

	//8. RectTransform
	void RegisterClass_RectTransform();
	RegisterClass_RectTransform();

	//9. Transform
	void RegisterClass_Transform();
	RegisterClass_Transform();

	//10. Camera
	void RegisterClass_Camera();
	RegisterClass_Camera();

	//11. MonoBehaviour
	void RegisterClass_MonoBehaviour();
	RegisterClass_MonoBehaviour();

	//12. Light
	void RegisterClass_Light();
	RegisterClass_Light();

	//13. GameObject
	void RegisterClass_GameObject();
	RegisterClass_GameObject();

	//14. Rigidbody
	void RegisterClass_Rigidbody();
	RegisterClass_Rigidbody();

	//15. Collider
	void RegisterClass_Collider();
	RegisterClass_Collider();

	//16. AudioClip
	void RegisterClass_AudioClip();
	RegisterClass_AudioClip();

	//17. SampleClip
	void RegisterClass_SampleClip();
	RegisterClass_SampleClip();

	//18. Animator
	void RegisterClass_Animator();
	RegisterClass_Animator();

	//19. DirectorPlayer
	void RegisterClass_DirectorPlayer();
	RegisterClass_DirectorPlayer();

	//20. PreloadData
	void RegisterClass_PreloadData();
	RegisterClass_PreloadData();

	//21. Material
	void RegisterClass_Material();
	RegisterClass_Material();

	//22. Cubemap
	void RegisterClass_Cubemap();
	RegisterClass_Cubemap();

	//23. Texture3D
	void RegisterClass_Texture3D();
	RegisterClass_Texture3D();

	//24. Texture2DArray
	void RegisterClass_Texture2DArray();
	RegisterClass_Texture2DArray();

	//25. RenderTexture
	void RegisterClass_RenderTexture();
	RegisterClass_RenderTexture();

	//26. Mesh
	void RegisterClass_Mesh();
	RegisterClass_Mesh();

	//27. LevelGameManager
	void RegisterClass_LevelGameManager();
	RegisterClass_LevelGameManager();

	//28. GameManager
	void RegisterClass_GameManager();
	RegisterClass_GameManager();

	//29. TimeManager
	void RegisterClass_TimeManager();
	RegisterClass_TimeManager();

	//30. GlobalGameManager
	void RegisterClass_GlobalGameManager();
	RegisterClass_GlobalGameManager();

	//31. AudioManager
	void RegisterClass_AudioManager();
	RegisterClass_AudioManager();

	//32. InputManager
	void RegisterClass_InputManager();
	RegisterClass_InputManager();

	//33. MeshRenderer
	void RegisterClass_MeshRenderer();
	RegisterClass_MeshRenderer();

	//34. Renderer
	void RegisterClass_Renderer();
	RegisterClass_Renderer();

	//35. GraphicsSettings
	void RegisterClass_GraphicsSettings();
	RegisterClass_GraphicsSettings();

	//36. MeshFilter
	void RegisterClass_MeshFilter();
	RegisterClass_MeshFilter();

	//37. QualitySettings
	void RegisterClass_QualitySettings();
	RegisterClass_QualitySettings();

	//38. Shader
	void RegisterClass_Shader();
	RegisterClass_Shader();

	//39. TextAsset
	void RegisterClass_TextAsset();
	RegisterClass_TextAsset();

	//40. PhysicsManager
	void RegisterClass_PhysicsManager();
	RegisterClass_PhysicsManager();

	//41. MeshCollider
	void RegisterClass_MeshCollider();
	RegisterClass_MeshCollider();

	//42. BoxCollider
	void RegisterClass_BoxCollider();
	RegisterClass_BoxCollider();

	//43. AnimationClip
	void RegisterClass_AnimationClip();
	RegisterClass_AnimationClip();

	//44. Motion
	void RegisterClass_Motion();
	RegisterClass_Motion();

	//45. TagManager
	void RegisterClass_TagManager();
	RegisterClass_TagManager();

	//46. AudioListener
	void RegisterClass_AudioListener();
	RegisterClass_AudioListener();

	//47. AudioBehaviour
	void RegisterClass_AudioBehaviour();
	RegisterClass_AudioBehaviour();

	//48. ScriptMapper
	void RegisterClass_ScriptMapper();
	RegisterClass_ScriptMapper();

	//49. DelayedCallManager
	void RegisterClass_DelayedCallManager();
	RegisterClass_DelayedCallManager();

	//50. RenderSettings
	void RegisterClass_RenderSettings();
	RegisterClass_RenderSettings();

	//51. Animation
	void RegisterClass_Animation();
	RegisterClass_Animation();

	//52. MonoScript
	void RegisterClass_MonoScript();
	RegisterClass_MonoScript();

	//53. MonoManager
	void RegisterClass_MonoManager();
	RegisterClass_MonoManager();

	//54. FlareLayer
	void RegisterClass_FlareLayer();
	RegisterClass_FlareLayer();

	//55. PlayerSettings
	void RegisterClass_PlayerSettings();
	RegisterClass_PlayerSettings();

	//56. BuildSettings
	void RegisterClass_BuildSettings();
	RegisterClass_BuildSettings();

	//57. ResourceManager
	void RegisterClass_ResourceManager();
	RegisterClass_ResourceManager();

	//58. NetworkManager
	void RegisterClass_NetworkManager();
	RegisterClass_NetworkManager();

	//59. MasterServerInterface
	void RegisterClass_MasterServerInterface();
	RegisterClass_MasterServerInterface();

	//60. LightmapSettings
	void RegisterClass_LightmapSettings();
	RegisterClass_LightmapSettings();

	//61. LightProbes
	void RegisterClass_LightProbes();
	RegisterClass_LightProbes();

	//62. RuntimeInitializeOnLoadManager
	void RegisterClass_RuntimeInitializeOnLoadManager();
	RegisterClass_RuntimeInitializeOnLoadManager();

	//63. CloudWebServicesManager
	void RegisterClass_CloudWebServicesManager();
	RegisterClass_CloudWebServicesManager();

	//64. UnityConnectSettings
	void RegisterClass_UnityConnectSettings();
	RegisterClass_UnityConnectSettings();

}
