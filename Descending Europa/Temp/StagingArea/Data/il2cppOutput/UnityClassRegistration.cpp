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

	void RegisterModule_ParticleSystem();
	RegisterModule_ParticleSystem();

	void RegisterModule_ParticlesLegacy();
	RegisterModule_ParticlesLegacy();

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
	//Total: 78 classes
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

	//5. Renderer
	void RegisterClass_Renderer();
	RegisterClass_Renderer();

	//6. Component
	void RegisterClass_Component();
	RegisterClass_Component();

	//7. EditorExtension
	void RegisterClass_EditorExtension();
	RegisterClass_EditorExtension();

	//8. GUITexture
	void RegisterClass_GUITexture();
	RegisterClass_GUITexture();

	//9. GUIElement
	void RegisterClass_GUIElement();
	RegisterClass_GUIElement();

	//10. Behaviour
	void RegisterClass_Behaviour();
	RegisterClass_Behaviour();

	//11. GUILayer
	void RegisterClass_GUILayer();
	RegisterClass_GUILayer();

	//12. Texture
	void RegisterClass_Texture();
	RegisterClass_Texture();

	//13. NamedObject
	void RegisterClass_NamedObject();
	RegisterClass_NamedObject();

	//14. Texture2D
	void RegisterClass_Texture2D();
	RegisterClass_Texture2D();

	//15. Texture3D
	void RegisterClass_Texture3D();
	RegisterClass_Texture3D();

	//16. RenderTexture
	void RegisterClass_RenderTexture();
	RegisterClass_RenderTexture();

	//17. Mesh
	void RegisterClass_Mesh();
	RegisterClass_Mesh();

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

	//24. Camera
	void RegisterClass_Camera();
	RegisterClass_Camera();

	//25. MonoBehaviour
	void RegisterClass_MonoBehaviour();
	RegisterClass_MonoBehaviour();

	//26. Light
	void RegisterClass_Light();
	RegisterClass_Light();

	//27. GameObject
	void RegisterClass_GameObject();
	RegisterClass_GameObject();

	//28. Rigidbody
	void RegisterClass_Rigidbody();
	RegisterClass_Rigidbody();

	//29. Collider
	void RegisterClass_Collider();
	RegisterClass_Collider();

	//30. Collider2D
	void RegisterClass_Collider2D();
	RegisterClass_Collider2D();

	//31. AudioClip
	void RegisterClass_AudioClip();
	RegisterClass_AudioClip();

	//32. SampleClip
	void RegisterClass_SampleClip();
	RegisterClass_SampleClip();

	//33. AudioSource
	void RegisterClass_AudioSource();
	RegisterClass_AudioSource();

	//34. AudioBehaviour
	void RegisterClass_AudioBehaviour();
	RegisterClass_AudioBehaviour();

	//35. Animator
	void RegisterClass_Animator();
	RegisterClass_Animator();

	//36. DirectorPlayer
	void RegisterClass_DirectorPlayer();
	RegisterClass_DirectorPlayer();

	//37. GUIText
	void RegisterClass_GUIText();
	RegisterClass_GUIText();

	//38. TextMesh
	void RegisterClass_TextMesh();
	RegisterClass_TextMesh();

	//39. Font
	void RegisterClass_Font();
	RegisterClass_Font();

	//40. Canvas
	void RegisterClass_Canvas();
	RegisterClass_Canvas();

	//41. CanvasGroup
	void RegisterClass_CanvasGroup();
	RegisterClass_CanvasGroup();

	//42. CanvasRenderer
	void RegisterClass_CanvasRenderer();
	RegisterClass_CanvasRenderer();

	//43. TrailRenderer
	void RegisterClass_TrailRenderer();
	RegisterClass_TrailRenderer();

	//44. ParticleRenderer
	void RegisterClass_ParticleRenderer();
	RegisterClass_ParticleRenderer();

	//45. ParticleSystemRenderer
	void RegisterClass_ParticleSystemRenderer();
	RegisterClass_ParticleSystemRenderer();

	//46. SpriteRenderer
	void RegisterClass_SpriteRenderer();
	RegisterClass_SpriteRenderer();

	//47. RuntimeAnimatorController
	void RegisterClass_RuntimeAnimatorController();
	RegisterClass_RuntimeAnimatorController();

	//48. PreloadData
	void RegisterClass_PreloadData();
	RegisterClass_PreloadData();

	//49. Cubemap
	void RegisterClass_Cubemap();
	RegisterClass_Cubemap();

	//50. Texture2DArray
	void RegisterClass_Texture2DArray();
	RegisterClass_Texture2DArray();

	//51. ParticleSystem
	void RegisterClass_ParticleSystem();
	RegisterClass_ParticleSystem();

	//52. TimeManager
	void RegisterClass_TimeManager();
	RegisterClass_TimeManager();

	//53. AudioManager
	void RegisterClass_AudioManager();
	RegisterClass_AudioManager();

	//54. InputManager
	void RegisterClass_InputManager();
	RegisterClass_InputManager();

	//55. Physics2DSettings
	void RegisterClass_Physics2DSettings();
	RegisterClass_Physics2DSettings();

	//56. MeshRenderer
	void RegisterClass_MeshRenderer();
	RegisterClass_MeshRenderer();

	//57. GraphicsSettings
	void RegisterClass_GraphicsSettings();
	RegisterClass_GraphicsSettings();

	//58. MeshFilter
	void RegisterClass_MeshFilter();
	RegisterClass_MeshFilter();

	//59. PhysicsManager
	void RegisterClass_PhysicsManager();
	RegisterClass_PhysicsManager();

	//60. MeshCollider
	void RegisterClass_MeshCollider();
	RegisterClass_MeshCollider();

	//61. BoxCollider
	void RegisterClass_BoxCollider();
	RegisterClass_BoxCollider();

	//62. TagManager
	void RegisterClass_TagManager();
	RegisterClass_TagManager();

	//63. AudioListener
	void RegisterClass_AudioListener();
	RegisterClass_AudioListener();

	//64. ScriptMapper
	void RegisterClass_ScriptMapper();
	RegisterClass_ScriptMapper();

	//65. DelayedCallManager
	void RegisterClass_DelayedCallManager();
	RegisterClass_DelayedCallManager();

	//66. MonoScript
	void RegisterClass_MonoScript();
	RegisterClass_MonoScript();

	//67. MonoManager
	void RegisterClass_MonoManager();
	RegisterClass_MonoManager();

	//68. FlareLayer
	void RegisterClass_FlareLayer();
	RegisterClass_FlareLayer();

	//69. PlayerSettings
	void RegisterClass_PlayerSettings();
	RegisterClass_PlayerSettings();

	//70. SphereCollider
	void RegisterClass_SphereCollider();
	RegisterClass_SphereCollider();

	//71. BuildSettings
	void RegisterClass_BuildSettings();
	RegisterClass_BuildSettings();

	//72. ResourceManager
	void RegisterClass_ResourceManager();
	RegisterClass_ResourceManager();

	//73. LightmapSettings
	void RegisterClass_LightmapSettings();
	RegisterClass_LightmapSettings();

	//74. LightProbes
	void RegisterClass_LightProbes();
	RegisterClass_LightProbes();

	//75. RuntimeInitializeOnLoadManager
	void RegisterClass_RuntimeInitializeOnLoadManager();
	RegisterClass_RuntimeInitializeOnLoadManager();

	//76. CloudWebServicesManager
	void RegisterClass_CloudWebServicesManager();
	RegisterClass_CloudWebServicesManager();

	//77. UnityConnectSettings
	void RegisterClass_UnityConnectSettings();
	RegisterClass_UnityConnectSettings();

}
