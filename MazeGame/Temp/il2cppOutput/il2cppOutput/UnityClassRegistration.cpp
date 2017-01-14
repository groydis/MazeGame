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

	void RegisterModule_Physics2D();
	RegisterModule_Physics2D();

	void RegisterModule_TextRendering();
	RegisterModule_TextRendering();

	void RegisterModule_UI();
	RegisterModule_UI();

	void RegisterModule_UnityConnect();
	RegisterModule_UnityConnect();

	void RegisterModule_IMGUI();
	RegisterModule_IMGUI();

	void RegisterModule_UnityWebRequest();
	RegisterModule_UnityWebRequest();

}

void RegisterAllClasses()
{
	//Total: 81 classes
	//0. RenderSettings
	void RegisterClass_RenderSettings();
	RegisterClass_RenderSettings();

	//1. LevelGameManager
	void RegisterClass_LevelGameManager();
	RegisterClass_LevelGameManager();

	//2. GameManager
	void RegisterClass_GameManager();
	RegisterClass_GameManager();

	//3. QualitySettings
	void RegisterClass_QualitySettings();
	RegisterClass_QualitySettings();

	//4. GlobalGameManager
	void RegisterClass_GlobalGameManager();
	RegisterClass_GlobalGameManager();

	//5. MeshFilter
	void RegisterClass_MeshFilter();
	RegisterClass_MeshFilter();

	//6. Component
	void RegisterClass_Component();
	RegisterClass_Component();

	//7. EditorExtension
	void RegisterClass_EditorExtension();
	RegisterClass_EditorExtension();

	//8. Renderer
	void RegisterClass_Renderer();
	RegisterClass_Renderer();

	//9. GUILayer
	void RegisterClass_GUILayer();
	RegisterClass_GUILayer();

	//10. Behaviour
	void RegisterClass_Behaviour();
	RegisterClass_Behaviour();

	//11. Texture
	void RegisterClass_Texture();
	RegisterClass_Texture();

	//12. NamedObject
	void RegisterClass_NamedObject();
	RegisterClass_NamedObject();

	//13. Texture2D
	void RegisterClass_Texture2D();
	RegisterClass_Texture2D();

	//14. Texture3D
	void RegisterClass_Texture3D();
	RegisterClass_Texture3D();

	//15. RenderTexture
	void RegisterClass_RenderTexture();
	RegisterClass_RenderTexture();

	//16. Mesh
	void RegisterClass_Mesh();
	RegisterClass_Mesh();

	//17. NetworkView
	void RegisterClass_NetworkView();
	RegisterClass_NetworkView();

	//18. RectTransform
	void RegisterClass_RectTransform();
	RegisterClass_RectTransform();

	//19. Transform
	void RegisterClass_Transform();
	RegisterClass_Transform();

	//20. Shader
	void RegisterClass_Shader();
	RegisterClass_Shader();

	//21. TextAsset
	void RegisterClass_TextAsset();
	RegisterClass_TextAsset();

	//22. Material
	void RegisterClass_Material();
	RegisterClass_Material();

	//23. Sprite
	void RegisterClass_Sprite();
	RegisterClass_Sprite();

	//24. SpriteRenderer
	void RegisterClass_SpriteRenderer();
	RegisterClass_SpriteRenderer();

	//25. Camera
	void RegisterClass_Camera();
	RegisterClass_Camera();

	//26. MonoBehaviour
	void RegisterClass_MonoBehaviour();
	RegisterClass_MonoBehaviour();

	//27. Light
	void RegisterClass_Light();
	RegisterClass_Light();

	//28. GameObject
	void RegisterClass_GameObject();
	RegisterClass_GameObject();

	//29. Rigidbody
	void RegisterClass_Rigidbody();
	RegisterClass_Rigidbody();

	//30. Collider
	void RegisterClass_Collider();
	RegisterClass_Collider();

	//31. Collider2D
	void RegisterClass_Collider2D();
	RegisterClass_Collider2D();

	//32. AudioClip
	void RegisterClass_AudioClip();
	RegisterClass_AudioClip();

	//33. SampleClip
	void RegisterClass_SampleClip();
	RegisterClass_SampleClip();

	//34. AudioListener
	void RegisterClass_AudioListener();
	RegisterClass_AudioListener();

	//35. AudioBehaviour
	void RegisterClass_AudioBehaviour();
	RegisterClass_AudioBehaviour();

	//36. AudioSource
	void RegisterClass_AudioSource();
	RegisterClass_AudioSource();

	//37. Animation
	void RegisterClass_Animation();
	RegisterClass_Animation();

	//38. Animator
	void RegisterClass_Animator();
	RegisterClass_Animator();

	//39. DirectorPlayer
	void RegisterClass_DirectorPlayer();
	RegisterClass_DirectorPlayer();

	//40. Font
	void RegisterClass_Font();
	RegisterClass_Font();

	//41. Canvas
	void RegisterClass_Canvas();
	RegisterClass_Canvas();

	//42. CanvasGroup
	void RegisterClass_CanvasGroup();
	RegisterClass_CanvasGroup();

	//43. CanvasRenderer
	void RegisterClass_CanvasRenderer();
	RegisterClass_CanvasRenderer();

	//44. BoxCollider
	void RegisterClass_BoxCollider();
	RegisterClass_BoxCollider();

	//45. MeshRenderer
	void RegisterClass_MeshRenderer();
	RegisterClass_MeshRenderer();

	//46. RuntimeAnimatorController
	void RegisterClass_RuntimeAnimatorController();
	RegisterClass_RuntimeAnimatorController();

	//47. PreloadData
	void RegisterClass_PreloadData();
	RegisterClass_PreloadData();

	//48. Cubemap
	void RegisterClass_Cubemap();
	RegisterClass_Cubemap();

	//49. Texture2DArray
	void RegisterClass_Texture2DArray();
	RegisterClass_Texture2DArray();

	//50. TimeManager
	void RegisterClass_TimeManager();
	RegisterClass_TimeManager();

	//51. AudioManager
	void RegisterClass_AudioManager();
	RegisterClass_AudioManager();

	//52. InputManager
	void RegisterClass_InputManager();
	RegisterClass_InputManager();

	//53. Physics2DSettings
	void RegisterClass_Physics2DSettings();
	RegisterClass_Physics2DSettings();

	//54. GraphicsSettings
	void RegisterClass_GraphicsSettings();
	RegisterClass_GraphicsSettings();

	//55. PhysicsManager
	void RegisterClass_PhysicsManager();
	RegisterClass_PhysicsManager();

	//56. MeshCollider
	void RegisterClass_MeshCollider();
	RegisterClass_MeshCollider();

	//57. AnimationClip
	void RegisterClass_AnimationClip();
	RegisterClass_AnimationClip();

	//58. Motion
	void RegisterClass_Motion();
	RegisterClass_Motion();

	//59. TagManager
	void RegisterClass_TagManager();
	RegisterClass_TagManager();

	//60. AnimatorController
	void RegisterClass_AnimatorController();
	RegisterClass_AnimatorController();

	//61. ScriptMapper
	void RegisterClass_ScriptMapper();
	RegisterClass_ScriptMapper();

	//62. DelayedCallManager
	void RegisterClass_DelayedCallManager();
	RegisterClass_DelayedCallManager();

	//63. MonoScript
	void RegisterClass_MonoScript();
	RegisterClass_MonoScript();

	//64. MonoManager
	void RegisterClass_MonoManager();
	RegisterClass_MonoManager();

	//65. FlareLayer
	void RegisterClass_FlareLayer();
	RegisterClass_FlareLayer();

	//66. PlayerSettings
	void RegisterClass_PlayerSettings();
	RegisterClass_PlayerSettings();

	//67. PhysicMaterial
	void RegisterClass_PhysicMaterial();
	RegisterClass_PhysicMaterial();

	//68. SphereCollider
	void RegisterClass_SphereCollider();
	RegisterClass_SphereCollider();

	//69. BuildSettings
	void RegisterClass_BuildSettings();
	RegisterClass_BuildSettings();

	//70. ResourceManager
	void RegisterClass_ResourceManager();
	RegisterClass_ResourceManager();

	//71. NetworkManager
	void RegisterClass_NetworkManager();
	RegisterClass_NetworkManager();

	//72. MasterServerInterface
	void RegisterClass_MasterServerInterface();
	RegisterClass_MasterServerInterface();

	//73. LightmapSettings
	void RegisterClass_LightmapSettings();
	RegisterClass_LightmapSettings();

	//74. AudioMixer
	void RegisterClass_AudioMixer();
	RegisterClass_AudioMixer();

	//75. LightProbes
	void RegisterClass_LightProbes();
	RegisterClass_LightProbes();

	//76. AudioMixerSnapshot
	void RegisterClass_AudioMixerSnapshot();
	RegisterClass_AudioMixerSnapshot();

	//77. AudioMixerGroup
	void RegisterClass_AudioMixerGroup();
	RegisterClass_AudioMixerGroup();

	//78. RuntimeInitializeOnLoadManager
	void RegisterClass_RuntimeInitializeOnLoadManager();
	RegisterClass_RuntimeInitializeOnLoadManager();

	//79. CloudWebServicesManager
	void RegisterClass_CloudWebServicesManager();
	RegisterClass_CloudWebServicesManager();

	//80. UnityConnectSettings
	void RegisterClass_UnityConnectSettings();
	RegisterClass_UnityConnectSettings();

}
