#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


template <typename T1>
struct VirtualActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R>
struct VirtualFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R>
struct InterfaceFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
struct InvokerActionInvoker0
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj)
	{
		method->invoker_method(methodPtr, method, obj, NULL, NULL);
	}
};
template <typename T1>
struct InvokerActionInvoker1;
template <typename T1>
struct InvokerActionInvoker1<T1*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1)
	{
		void* params[1] = { p1 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};

// System.Action`1<System.Boolean>
struct Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C;
// System.Action`1<System.Int32Enum>
struct Action_1_tC926860F20D428DA3E93D6FBA36420E904DD903B;
// System.Action`1<Vuforia.ObserverBehaviour>
struct Action_1_t49AD19663F9D6070EBF5FD37F8BEA43810805799;
// System.Action`1<TMPro.TMP_TextInfo>
struct Action_1_tB93AB717F9D419A1BEC832FF76E74EAA32184CC1;
// System.Action`1<Vuforia.VuforiaInitError>
struct Action_1_tF4CAAB52A69FEBB4D629E2D59C8EE77A263FEE43;
// System.Action`2<System.Object,Vuforia.TargetStatus>
struct Action_2_t6E267C40DBCE33187D9AAAD4FFFB2BAE8A6B220E;
// System.Action`2<Vuforia.ObserverBehaviour,Vuforia.TargetStatus>
struct Action_2_tAC0AA9B652075EE1CE661500AC3373C7008D598F;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>
struct Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180;
// System.Collections.Generic.Dictionary`2<System.Object,System.Int32>
struct Dictionary_2_t5C96F4B6841710A9013966F76224BAE01FB4B4D1;
// System.Collections.Generic.Dictionary`2<System.String,System.Int32>
struct Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588;
// System.Func`3<System.Int32,System.String,TMPro.TMP_FontAsset>
struct Func_3_tC721DF8CDD07ED66A4833A19A2ED2302608C906C;
// System.Func`3<System.Int32,System.String,TMPro.TMP_SpriteAsset>
struct Func_3_t6F6D9932638EA1A5A45303C6626C818C25D164E5;
// System.Collections.Generic.IEqualityComparer`1<System.String>
struct IEqualityComparer_1_tAE94C8F24AD5B94D4EE85CA9FC59E3409D41CAF7;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.Int32>
struct KeyCollection_tCC15D033281A6593E2488FAF5B205812A152AC03;
// System.Collections.Generic.List`1<System.Double[]>
struct List_1_t64FC2174A52DBC518FB499976FF0BA043E643411;
// System.Collections.Generic.List`1<UnityEngine.CanvasGroup>
struct List_1_t2CDCA768E7F493F5EDEBC75AEB200FD621354E35;
// System.Collections.Generic.List`1<System.Double>
struct List_1_t495F03F47D827883530F951D563C0BB7340E5995;
// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D;
// System.Collections.Generic.List`1<TMPro.TMP_Dropdown/DropdownItem>
struct List_1_tA7EEECF976A6B4957450A4D235070C9324ED1A97;
// TMPro.TweenRunner`1<TMPro.FloatTween>
struct TweenRunner_1_tF277B20625C8B1939DC85508C4679C690757395E;
// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>
struct TweenRunner_1_t5BB0582F926E75E2FE795492679A6CF55A4B4BC4;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Int32>
struct ValueCollection_tCE6BD704B9571C131E2D8C8CED569DDEC4AE042B;
// System.Collections.Generic.Dictionary`2/Entry<System.String,System.Int32>[]
struct EntryU5BU5D_tEA0133B78B9FF7045128C508FA50247E525A94D6;
// TMPro.TMP_TextProcessingStack`1<System.Int32>[]
struct TMP_TextProcessingStack_1U5BU5D_t08293E0BB072311BB96170F351D1083BCA97B9B2;
// System.Double[][]
struct DoubleU5BU5DU5BU5D_t9D0B504F1F6C6D8C3DC912FFA38783B9CF0FC076;
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
// System.Char[]
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
// UnityEngine.Color32[]
struct Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259;
// System.Decimal[]
struct DecimalU5BU5D_t93BA0C88FA80728F73B792EE1A5199D0C060B615;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// System.Double[]
struct DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE;
// TMPro.FontWeight[]
struct FontWeightU5BU5D_t2A406B5BAB0DD0F06E7F1773DB062E4AF98067BA;
// TMPro.HighlightState[]
struct HighlightStateU5BU5D_tA878A0AF1F4F52882ACD29515AADC277EE135622;
// TMPro.HorizontalAlignmentOptions[]
struct HorizontalAlignmentOptionsU5BU5D_t4D185662282BFB910D8B9A8199E91578E9422658;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// UnityEngine.Material[]
struct MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D;
// TMPro.MaterialReference[]
struct MaterialReferenceU5BU5D_t7491D335AB3E3E13CE9C0F5E931F396F6A02E1F2;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// TMPro.RichTextTagAttribute[]
struct RichTextTagAttributeU5BU5D_t5816316EFD8F59DBC30B9F88E15828C564E47B6D;
// UnityEngine.UI.Selectable[]
struct SelectableU5BU5D_t4160E135F02A40F75A63F787D36F31FEC6FE91A9;
// System.Single[]
struct SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C;
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
// TMPro.TMP_CharacterInfo[]
struct TMP_CharacterInfoU5BU5D_t297D56FCF66DAA99D8FEA7C30F9F3926902C5B99;
// TMPro.TMP_ColorGradient[]
struct TMP_ColorGradientU5BU5D_t2F65E8C42F268DFF33BB1392D94BCF5B5087308A;
// TMPro.TMP_SubMeshUI[]
struct TMP_SubMeshUIU5BU5D_tC77B263183A59A75345C26152457207EAC3BBF29;
// UnityEngine.UI.Text[]
struct TextU5BU5D_t1D476A037C4542F053D17ADAFA2723F311F9A353;
// UnityEngine.Touch[]
struct TouchU5BU5D_t242545870BFCA81F368CCF82E00F9E2A7FB523B3;
// UnityEngine.UIVertex[]
struct UIVertexU5BU5D_tBC532486B45D071A520751A90E819C77BA4E3D2F;
// System.UInt32[]
struct UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C;
// TMPro.WordWrapState[]
struct WordWrapStateU5BU5D_t473D59C9DBCC949CE72EF1EB471CBA152A6CEAC9;
// TMPro.TMP_Text/UnicodeChar[]
struct UnicodeCharU5BU5D_t67F27D09F8EB28D2C42DFF16FE60054F157012F5;
// System.Action
struct Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07;
// AmbientLightManager
struct AmbientLightManager_tF2645E65EF2967DB6BE884BC67C6C761A0F0852E;
// Vuforia.AnchorBehaviour
struct AnchorBehaviour_t81952CE5FBF39AD5C2F0C5E2FE109B0B10A2824F;
// Vuforia.AnchorPreview
struct AnchorPreview_t2BCEF439B9CBCCA77D1B5971C38EEA72D0C35384;
// UnityEngine.UI.AnimationTriggers
struct AnimationTriggers_tA0DC06F89C5280C6DD972F6F4C8A56D7F4F79074;
// System.AsyncCallback
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C;
// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA;
// UnityEngine.UI.Button
struct Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098;
// UnityEngine.Camera
struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184;
// Vuforia.CameraDevice
struct CameraDevice_t34ADAC91596592865E992E89542B1B6F88EAAB27;
// UnityEngine.Canvas
struct Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26;
// UnityEngine.CanvasRenderer
struct CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860;
// ChildSliderAdjust
struct ChildSliderAdjust_tC0DEE6A2D001C242F02023FEB35AADEE22C4808D;
// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3;
// UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// Vuforia.Internal.Observers.DeviceObserver
struct DeviceObserver_t567C44DCB098882C1CB8B95C15B7523E7D1D1556;
// Vuforia.DevicePoseBehaviour
struct DevicePoseBehaviour_tB66D2A5B7C7DA1929EC742544831049B124BD642;
// DevicePoseManager
struct DevicePoseManager_t6DB16271316039E99F4EBFD596A637CEB4439F90;
// System.Timers.ElapsedEventArgs
struct ElapsedEventArgs_t74C1E2D692A82825805E5EC84EE73F5B053027C1;
// System.Timers.ElapsedEventHandler
struct ElapsedEventHandler_tCA26B9E70A5EDB91678F46BCD15547D752D2BA51;
// System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2;
// System.ComponentModel.EventHandlerList
struct EventHandlerList_t057D7531265C1DF014C8C83AF251E908D1A0B1C8;
// FemaleSliderAdjust
struct FemaleSliderAdjust_t6CC4FA9B9643A8D49EE97BE27C96A8348113D837;
// UnityEngine.UI.FontData
struct FontData_tB8E562846C6CB59C43260F69AE346B9BF3157224;
// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F;
// UnityEngine.UI.Graphic
struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931;
// Vuforia.HitTestEvent
struct HitTestEvent_t549C8121F2017A01FF40B8E5A2930245B770DA10;
// Vuforia.HitTestResult
struct HitTestResult_t623F1DB9A0AAD8416652DFFE1842F908250D44D9;
// Vuforia.IAnchorProvider
struct IAnchorProvider_tA9B4CA01ECE6B5B05C97148D717B4FEA6FE351E8;
// System.IAsyncResult
struct IAsyncResult_t7B9B5A0ECB35DCEC31B8A8122C37D687369253B5;
// Vuforia.Internal.Core.IEngine
struct IEngine_t1840136F87C8826E605686CEB7FDA35D257A8C0C;
// Vuforia.IHitTestProvider
struct IHitTestProvider_tF44E562823A50A24916C1F67EE3464366541DA01;
// Vuforia.Internal.Observers.IObserver
struct IObserver_tF96DF70DC62190F4AAF66B7DA6053BB7C714503C;
// Vuforia.IObserverRegistry
struct IObserverRegistry_tF348538635CECA2D834952442BB63123A2C411A1;
// System.ComponentModel.ISite
struct ISite_t4BB2A7E2B477FC6B1AF9D0554FF8B07204356E93;
// System.ComponentModel.ISynchronizeInvoke
struct ISynchronizeInvoke_t94542FC52B3B1FCA7BC4D8CC518FC2EF9870861F;
// TMPro.ITextPreprocessor
struct ITextPreprocessor_tDBB49C8B68D7B80E8D233B9D9666C43981EFAAB9;
// Vuforia.UnityRuntimeCompiled.IUnityRuntimeCompiledFacade
struct IUnityRuntimeCompiledFacade_t8A7BC7E50A934EC81E388AE86047FBC79665B559;
// Vuforia.IVuHitTest
struct IVuHitTest_t2D5BB78FCECD172E4373E7355083101E88B00EB6;
// Vuforia.IlluminationData
struct IlluminationData_t907CE8A9106AC295312099ACA9EF74970E3AE7D4;
// Vuforia.Internal.Observers.IlluminationObserver
struct IlluminationObserver_tA729E3319116926147EBF12E4BD612A190A81BC4;
// UnityEngine.UI.Image
struct Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E;
// UnityEngine.Events.InvokableCallList
struct InvokableCallList_t309E1C8C7CE885A0D2F98C84CEA77A8935688382;
// UnityEngine.UI.LayoutElement
struct LayoutElement_tB1F24CC11AF4AA87015C8D8EE06D22349C5BF40A;
// UnityEngine.Light
struct Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3;
// LoadScene
struct LoadScene_t13789E834A08B06FF59FCCEA1BA366FC2965E335;
// MaleSliderAdjust
struct MaleSliderAdjust_tA7DA9AE649A08FBB56C79BDAD0CD6D563D1776F4;
// UnityEngine.Material
struct Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3;
// UnityEngine.Mesh
struct Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4;
// UnityEngine.MeshFilter
struct MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5;
// UnityEngine.MeshRenderer
struct MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE;
// MessageBox
struct MessageBox_t4E1C9DA3FBC7BAE7E61037CFCD99B2B5ED88EA3F;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// ModelPlacement
struct ModelPlacement_tEBA347DB86CB0A00DC780800C2CA5E1E438F7C8D;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71;
// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
// Vuforia.ObserverBehaviour
struct ObserverBehaviour_t5523404662BA53BE6118C49F6FFA9E19719115DB;
// Vuforia.ObserverFactory
struct ObserverFactory_t15303B50E9714D21517E15020805420A68418285;
// UnityEngine.Events.PersistentCallGroup
struct PersistentCallGroup_tB826EDF15DC80F71BCBCD8E410FD959A04C33F25;
// Vuforia.PlaneFinderBehaviour
struct PlaneFinderBehaviour_t23E09D9522086A00933FFF43F29F9D4CEE1578F5;
// UnityEngine.EventSystems.PointerEventData
struct PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB;
// UnityEngine.UI.RectMask2D
struct RectMask2D_tACF92BE999C791A665BD1ADEABF5BCEB82846670;
// UnityEngine.RectTransform
struct RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5;
// UnityEngine.Renderer
struct Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF;
// SeatedAdultSliderAdjust
struct SeatedAdultSliderAdjust_tD13DF139016030F050F1A488125C2796C6DA9842;
// UnityEngine.UI.Selectable
struct Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712;
// SetParametersBttn
struct SetParametersBttn_t24DC16BB4CC551114C40E91C3E2CC43AF5CFF8AC;
// SetParametersBttn2D
struct SetParametersBttn2D_tC3C6EE0BF7080778A4172D82F865A7AB1E65E0E5;
// UnityEngine.UI.Slider
struct Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F;
// UnityEngine.Sprite
struct Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99;
// System.String
struct String_t;
// TMPro.TMP_Character
struct TMP_Character_t7D37A55EF1A9FF6D0BFE6D50E86A00F80E7FAF35;
// TMPro.TMP_ColorGradient
struct TMP_ColorGradient_t17B51752B4E9499A1FF7D875DCEC1D15A0F4AEBB;
// TMPro.TMP_Dropdown
struct TMP_Dropdown_t73B37BFDA0D005451C7B750938AFB1748E5EA504;
// TMPro.TMP_FontAsset
struct TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160;
// TMPro.TMP_SpriteAnimator
struct TMP_SpriteAnimator_t2E0F016A61CA343E3222FF51E7CF0E53F9F256E4;
// TMPro.TMP_SpriteAsset
struct TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39;
// TMPro.TMP_Style
struct TMP_Style_tA9E5B1B35EBFE24EF980CEA03251B638282E120C;
// TMPro.TMP_StyleSheet
struct TMP_StyleSheet_t70C71699F5CB2D855C361DBB78A44C901236C859;
// TMPro.TMP_Text
struct TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9;
// TMPro.TMP_TextElement
struct TMP_TextElement_t262A55214F712D4274485ABE5676E5254B84D0A5;
// TMPro.TMP_TextInfo
struct TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D;
// UnityEngine.UI.Text
struct Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62;
// UnityEngine.TextAsset
struct TextAsset_t2C64E93DA366D9DE5A8209E1802FA4884AC1BD69;
// UnityEngine.TextGenerator
struct TextGenerator_t85D00417640A53953556C01F9D4E7DDE1ABD8FEC;
// TMPro.TextMeshProUGUI
struct TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957;
// UnityEngine.Texture2D
struct Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4;
// System.Threading.Timer
struct Timer_t763C1D5F5A36087DC92C7DA4D1F8AB578F83AB00;
// System.Timers.Timer
struct Timer_t10D85D58F4AC0CF80C625D0124B12098CE540A8B;
// System.Threading.TimerCallback
struct TimerCallback_t7455CAFACC7054E62879920AFC84C5DA98B8C7CD;
// TouchHandler
struct TouchHandler_tB817ACADDBAF3E5E6625F3D541FE580091B9758D;
// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1;
// UIManager
struct UIManager_t16825A2483574F37D7D47AB939A6FA639678B1F3;
// UnityEngine.Events.UnityAction
struct UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7;
// UnityEngine.Events.UnityEvent
struct UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977;
// UnityEngine.UI.VertexHelper
struct VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE;
// Vuforia.VideoBackground
struct VideoBackground_tC65F4B5FBE6A45691D21DBA8F7C5DB23CC4ED7F1;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// Vuforia.VuforiaApplication
struct VuforiaApplication_t84202EE6AE3488947F9398AA46BAB1D6F7CCDA46;
// Vuforia.VuforiaBehaviour
struct VuforiaBehaviour_t53608E2BEC77029C0140CB1E88A0B186FC5E76C6;
// Vuforia.World
struct World_t0332C3F77BBFBA826A13D263DAED199D01BCE050;
// UnityEngine.UI.Button/ButtonClickedEvent
struct ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C;
// UnityEngine.Camera/CameraCallback
struct CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD;
// DevicePoseManager/DevicePoseResetEvent
struct DevicePoseResetEvent_tAC0B6D678A899DFD6B5422B6A574C27C60C9280C;
// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent
struct CullStateChangedEvent_t6073CD0D951EC1256BF74B8F9107D68FC89B99B8;
// MessageBox/DelegateMessageBoxButtonAction
struct DelegateMessageBoxButtonAction_tF92662C8A304ECF3D687E8AEB65D739E3FA46DC8;
// UnityEngine.UI.Slider/SliderEvent
struct SliderEvent_t92A82EF6C62E15AF92B640FE2D960E877E8C6555;
// TMPro.TMP_Dropdown/DropdownEvent
struct DropdownEvent_tFD4609E80240BC887A6D31F9F3C252A8A6843E91;
// TMPro.TMP_Dropdown/OptionData
struct OptionData_tFDFBCB4A5FB860E95AE46FDAC112DB4140A8525E;
// TMPro.TMP_Dropdown/OptionDataList
struct OptionDataList_tF66EA4801BFA499F010E6EFF89ED760BF4F0BEE1;

IL2CPP_EXTERN_C RuntimeClass* Action_1_tF4CAAB52A69FEBB4D629E2D59C8EE77A263FEE43_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_2_tAC0AA9B652075EE1CE661500AC3373C7008D598F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DelegateMessageBoxButtonAction_tF92662C8A304ECF3D687E8AEB65D739E3FA46DC8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ElapsedEventHandler_tCA26B9E70A5EDB91678F46BCD15547D752D2BA51_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IUnityRuntimeCompiledFacade_t8A7BC7E50A934EC81E388AE86047FBC79665B559_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t495F03F47D827883530F951D563C0BB7340E5995_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t64FC2174A52DBC518FB499976FF0BA043E643411_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StatusInfo_t6EEEAE24754AB13B2945AD3DB790DFC5A3872195_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Status_tF1F7D6087AB6A32AF3BDDD41F4BAE7ED3E596223_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* String_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Timer_t10D85D58F4AC0CF80C625D0124B12098CE540A8B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TouchHandler_tB817ACADDBAF3E5E6625F3D541FE580091B9758D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* VuforiaRuntimeUtilities_t4716EE5DA1261C73F58EBBF0159D4AFC227721C8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral00B28FF06B788B9B67C6B259800F404F9F3761FD;
IL2CPP_EXTERN_C String_t* _stringLiteral0487849E743EE7A8A4466475F43E21864F0F1F48;
IL2CPP_EXTERN_C String_t* _stringLiteral04D08DE663794C0DECE4664FFD5B9FE4A5FB7347;
IL2CPP_EXTERN_C String_t* _stringLiteral0ACC50305159B4342D208A51935C53EA2E7F9085;
IL2CPP_EXTERN_C String_t* _stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745;
IL2CPP_EXTERN_C String_t* _stringLiteral303F9406787F3EDF01DD5EAB02D9775C12EF01C2;
IL2CPP_EXTERN_C String_t* _stringLiteral398F77A4A6F19B34322883912E92D9CD3D4CEB69;
IL2CPP_EXTERN_C String_t* _stringLiteral4124CAF019C8342178370077D0EF515E65FBE9D6;
IL2CPP_EXTERN_C String_t* _stringLiteral59DC65EE0B6710365B6D4795294C298C2B64FE45;
IL2CPP_EXTERN_C String_t* _stringLiteral5B2D0D1839F6E563813543D768A5FB707647FBCE;
IL2CPP_EXTERN_C String_t* _stringLiteral6E1CE004DBBF4E6D83804FAD4823454546E65F9D;
IL2CPP_EXTERN_C String_t* _stringLiteral72B6B2AFB007B7EFF933E2421DF01F832D40625B;
IL2CPP_EXTERN_C String_t* _stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D;
IL2CPP_EXTERN_C String_t* _stringLiteral7B4264F4BD0983833238F00348CA2152EA160369;
IL2CPP_EXTERN_C String_t* _stringLiteral7BE9DF4FBCD8BB3BC9BC23AED208E15808A7DDF0;
IL2CPP_EXTERN_C String_t* _stringLiteral7CE25448A2EB4AE0BD52ACCE03D1D5F01C5C3F99;
IL2CPP_EXTERN_C String_t* _stringLiteral7E7E160F63533EC193A01B85C3AE2870A5CAB5D5;
IL2CPP_EXTERN_C String_t* _stringLiteral8259EC51929AE1346DBA3182C15C05E79A7544EB;
IL2CPP_EXTERN_C String_t* _stringLiteral877D9A2697B4BA1DB43EBA126A7B4E5652418259;
IL2CPP_EXTERN_C String_t* _stringLiteral8A0FEFCF616268A7D2AEEE23BA07B44ADB72452E;
IL2CPP_EXTERN_C String_t* _stringLiteral8F5C21509BF8EE7093C4E7CD6EEAF3FFCD7B0995;
IL2CPP_EXTERN_C String_t* _stringLiteral931018A69BAE325939AFC4A7E983ED54CB0E60AC;
IL2CPP_EXTERN_C String_t* _stringLiteralA707D1D4AF87E486B7A7E675DB6F5147B4F0D2D6;
IL2CPP_EXTERN_C String_t* _stringLiteralB281D5412E3C8F31FEC213B8C136C5EFC40702AB;
IL2CPP_EXTERN_C String_t* _stringLiteralB3F14BF976EFD974E34846B742502C802FABAE9D;
IL2CPP_EXTERN_C String_t* _stringLiteralB4B06D7DF687F527DFCE1303D9CA96371C21AAA4;
IL2CPP_EXTERN_C String_t* _stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB;
IL2CPP_EXTERN_C String_t* _stringLiteralD17806780ED4EC8A606CD8433E3ED0E1DD9C873A;
IL2CPP_EXTERN_C String_t* _stringLiteralD7C5DE2E045FED192C54560BB529C5118544CDFE;
IL2CPP_EXTERN_C String_t* _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
IL2CPP_EXTERN_C String_t* _stringLiteralDB5B55A9B215F744DB82517864984D073F2E8F8C;
IL2CPP_EXTERN_C String_t* _stringLiteralDB81FEF0286C64E4137586C08428BE38969C7CF7;
IL2CPP_EXTERN_C String_t* _stringLiteralE1813766CECEAE59699FB571E548382CD8AF1752;
IL2CPP_EXTERN_C String_t* _stringLiteralEF9AA825E2BF1AA80FEE50E865D31D82FAE268D4;
IL2CPP_EXTERN_C String_t* _stringLiteralF0A265B5C4EFB991FCC9024BE54A90F0BCF065C2;
IL2CPP_EXTERN_C String_t* _stringLiteralF511102AF85AA2E3EFF8375103C2269E3633C128;
IL2CPP_EXTERN_C String_t* _stringLiteralFE3FF821D1E3915EBA26D5188851F3D38D056276;
IL2CPP_EXTERN_C const RuntimeMethod* Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AmbientLightManager_OnVuforiaStarted_mE7202223515866CAB2CFB1E54AE25540C21855E6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponentInChildren_TisButton_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098_m16CFA6B8AD1C67BA8A7BCB3465E5C20064DEE5DB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisCamera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_m64AC6C06DD93C5FB249091FEC84FA8475457CCC4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisLight_t1E68479B7782AF2050FAA02A5DC612FD034F18F3_mF4816FA12B6F220CA55D47D669D7E50DC118B9E9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponentsInChildren_TisText_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_m3FC915DEC37CE1CE6E48A26D44655BAE36FD140E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DevicePoseManager_OnTargetStatusChanged_mC249B817F77C0A7F7FEB0F958D2EA45AFEB9340D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DevicePoseManager_OnVuforiaInitialized_m39CC7EF7840915A6931A6FDCBDE1A07A89395003_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DevicePoseManager_TimerFinished_m1AA848382ED4DE3EFD36D471216C4D2C5293E631_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_mA3C3860EDE2CDD08BBD68C389377BC89D029D968_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Item_mE01750B88D9A581E9196F3444952F7592E862592_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_set_Item_m038480C0EC13713DBD89A53BE69FF0359501B4C2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisMeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5_mDF6525BCE37B444313BE0AA2305BDF4EB8B92FE8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_m7FF948365C38BC39333D82B235A7C4EAD219960D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisMessageBox_t4E1C9DA3FBC7BAE7E61037CFCD99B2B5ED88EA3F_mF4A1EFD01DFE543E3626CE8C1A025ECBF6483C1D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_m026EB44DB6238F13E2AFBECF1FBBE924CB1B040A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m5D83C79B12616961D8147BB59AD5E55683361E85_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_mC19C5EEC6894CA8390C854EDC3428C93A0BD59F3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_ToArray_m91B6A76F83EF0F01FE14A5BAD9D99BDDFC9499F3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m4F495AFEC1141AA7E02729E3105CB569F2CEAD34_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mF1433DDB1AE70FFD55B9A5791233ED33F24D45A9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_mBCF1516ECF7285668A96B426CD6C201113395AB2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1_get_HasValue_mC149B1C717AF506BBE8932F2C1DC86C378D17EA8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1_get_Value_mE3B978271FFA8D9DEE17BFB34320A3C67BE148EA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_FindObjectOfType_TisDevicePoseManager_t6DB16271316039E99F4EBFD596A637CEB4439F90_m17833F94FADA4C714BF98E476AE2696DE26BB69A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_FindObjectOfType_TisModelPlacement_tEBA347DB86CB0A00DC780800C2CA5E1E438F7C8D_m5C56B162E3EF09F1181D523AE95E243115E6BFD9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_FindObjectOfType_TisPlaneFinderBehaviour_t23E09D9522086A00933FFF43F29F9D4CEE1578F5_m4DD25D2D331B6D313210CB50CDD7F3AE401EBE8E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_Instantiate_TisMessageBox_t4E1C9DA3FBC7BAE7E61037CFCD99B2B5ED88EA3F_m5740B252EAD2EDF092600A1E41AEB6032D1064EA_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;

struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
struct DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
struct TextU5BU5D_t1D476A037C4542F053D17ADAFA2723F311F9A353;
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_tBB65183F1134474D09FF49B95625D25472B9BA8B 
{
};

// System.Collections.Generic.Dictionary`2<System.String,System.Int32>
struct Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_tEA0133B78B9FF7045128C508FA50247E525A94D6* ____entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::_count
	int32_t ____count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeList
	int32_t ____freeList_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeCount
	int32_t ____freeCount_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::_version
	int32_t ____version_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::_comparer
	RuntimeObject* ____comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_keys
	KeyCollection_tCC15D033281A6593E2488FAF5B205812A152AC03* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_tCE6BD704B9571C131E2D8C8CED569DDEC4AE042B* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.Collections.Generic.List`1<System.Double[]>
struct List_1_t64FC2174A52DBC518FB499976FF0BA043E643411  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	DoubleU5BU5DU5BU5D_t9D0B504F1F6C6D8C3DC912FFA38783B9CF0FC076* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t64FC2174A52DBC518FB499976FF0BA043E643411_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	DoubleU5BU5DU5BU5D_t9D0B504F1F6C6D8C3DC912FFA38783B9CF0FC076* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<System.Double>
struct List_1_t495F03F47D827883530F951D563C0BB7340E5995  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t495F03F47D827883530F951D563C0BB7340E5995_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___s_emptyArray_5;
};
struct Il2CppArrayBounds;

// System.EventArgs
struct EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377  : public RuntimeObject
{
};

struct EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377_StaticFields
{
	// System.EventArgs System.EventArgs::Empty
	EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377* ___Empty_0;
};

// System.MarshalByRefObject
struct MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE  : public RuntimeObject
{
	// System.Object System.MarshalByRefObject::_identity
	RuntimeObject* ____identity_0;
};
// Native definition for P/Invoke marshalling of System.MarshalByRefObject
struct MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE_marshaled_pinvoke
{
	Il2CppIUnknown* ____identity_0;
};
// Native definition for COM marshalling of System.MarshalByRefObject
struct MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE_marshaled_com
{
	Il2CppIUnknown* ____identity_0;
};

// System.String
struct String_t  : public RuntimeObject
{
	// System.Int32 System.String::_stringLength
	int32_t ____stringLength_4;
	// System.Char System.String::_firstChar
	Il2CppChar ____firstChar_5;
};

struct String_t_StaticFields
{
	// System.String System.String::Empty
	String_t* ___Empty_6;
};

// TargetStatusExtension
struct TargetStatusExtension_t69D7B0BC6AB16D75F1FB54A43B5956164954F1A6  : public RuntimeObject
{
};

// UnityEngine.Events.UnityEventBase
struct UnityEventBase_t4968A4C72559F35C0923E4BD9C042C3A842E1DB8  : public RuntimeObject
{
	// UnityEngine.Events.InvokableCallList UnityEngine.Events.UnityEventBase::m_Calls
	InvokableCallList_t309E1C8C7CE885A0D2F98C84CEA77A8935688382* ___m_Calls_0;
	// UnityEngine.Events.PersistentCallGroup UnityEngine.Events.UnityEventBase::m_PersistentCalls
	PersistentCallGroup_tB826EDF15DC80F71BCBCD8E410FD959A04C33F25* ___m_PersistentCalls_1;
	// System.Boolean UnityEngine.Events.UnityEventBase::m_CallsDirty
	bool ___m_CallsDirty_2;
};

// System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F  : public RuntimeObject
{
};
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_com
{
};

// Vuforia.VuforiaApplication
struct VuforiaApplication_t84202EE6AE3488947F9398AA46BAB1D6F7CCDA46  : public RuntimeObject
{
	// System.Action Vuforia.VuforiaApplication::mOnBeforeVuforiaInitialized
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___mOnBeforeVuforiaInitialized_0;
	// System.Action`1<Vuforia.VuforiaInitError> Vuforia.VuforiaApplication::mOnVuforiaInitialized
	Action_1_tF4CAAB52A69FEBB4D629E2D59C8EE77A263FEE43* ___mOnVuforiaInitialized_1;
	// System.Action Vuforia.VuforiaApplication::mOnVuforiaStarted
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___mOnVuforiaStarted_2;
	// Vuforia.VuforiaInitError Vuforia.VuforiaApplication::mInitError
	int32_t ___mInitError_3;
	// System.Action`1<System.Boolean> Vuforia.VuforiaApplication::OnVuforiaPaused
	Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* ___OnVuforiaPaused_5;
	// System.Action Vuforia.VuforiaApplication::OnVuforiaStopped
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___OnVuforiaStopped_6;
	// System.Action Vuforia.VuforiaApplication::OnVuforiaDeinitialized
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___OnVuforiaDeinitialized_7;
};

struct VuforiaApplication_t84202EE6AE3488947F9398AA46BAB1D6F7CCDA46_StaticFields
{
	// Vuforia.VuforiaApplication Vuforia.VuforiaApplication::sInstance
	VuforiaApplication_t84202EE6AE3488947F9398AA46BAB1D6F7CCDA46* ___sInstance_4;
};

// Vuforia.World
struct World_t0332C3F77BBFBA826A13D263DAED199D01BCE050  : public RuntimeObject
{
	// Vuforia.Internal.Core.IEngine Vuforia.World::mEngine
	RuntimeObject* ___mEngine_0;
	// Vuforia.IObserverRegistry Vuforia.World::mObserverRegistry
	RuntimeObject* ___mObserverRegistry_1;
	// Vuforia.Internal.Observers.IlluminationObserver Vuforia.World::mIlluminationObserver
	IlluminationObserver_tA729E3319116926147EBF12E4BD612A190A81BC4* ___mIlluminationObserver_2;
	// Vuforia.IAnchorProvider Vuforia.World::<AnchorProvider>k__BackingField
	RuntimeObject* ___U3CAnchorProviderU3Ek__BackingField_3;
	// Vuforia.IHitTestProvider Vuforia.World::<HitTestProvider>k__BackingField
	RuntimeObject* ___U3CHitTestProviderU3Ek__BackingField_4;
	// System.Action Vuforia.World::OnStateUpdated
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___OnStateUpdated_5;
	// System.Action`1<Vuforia.ObserverBehaviour> Vuforia.World::OnObserverCreated
	Action_1_t49AD19663F9D6070EBF5FD37F8BEA43810805799* ___OnObserverCreated_6;
	// System.Action`1<Vuforia.ObserverBehaviour> Vuforia.World::OnObserverDestroyed
	Action_1_t49AD19663F9D6070EBF5FD37F8BEA43810805799* ___OnObserverDestroyed_7;
	// Vuforia.IlluminationData Vuforia.World::<IlluminationData>k__BackingField
	IlluminationData_t907CE8A9106AC295312099ACA9EF74970E3AE7D4* ___U3CIlluminationDataU3Ek__BackingField_8;
};

// System.Nullable`1<System.Int32>
struct Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	int32_t ___value_1;
};

// System.Nullable`1<System.Single>
struct Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	float ___value_1;
};

// TMPro.TMP_TextProcessingStack`1<TMPro.FontWeight>
struct TMP_TextProcessingStack_1_tA5C8CED87DD9E73F6359E23B334FFB5B6F813FD4 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	FontWeightU5BU5D_t2A406B5BAB0DD0F06E7F1773DB062E4AF98067BA* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	int32_t ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// TMPro.TMP_TextProcessingStack`1<TMPro.HorizontalAlignmentOptions>
struct TMP_TextProcessingStack_1_t243EA1B5D7FD2295D6533B953F0BBE8F52EFB8A0 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	HorizontalAlignmentOptionsU5BU5D_t4D185662282BFB910D8B9A8199E91578E9422658* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	int32_t ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// TMPro.TMP_TextProcessingStack`1<System.Int32>
struct TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	int32_t ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// TMPro.TMP_TextProcessingStack`1<System.Single>
struct TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	float ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// TMPro.TMP_TextProcessingStack`1<TMPro.TMP_ColorGradient>
struct TMP_TextProcessingStack_1_tC8FAEB17246D3B171EFD11165A5761AE39B40D0C 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	TMP_ColorGradientU5BU5D_t2F65E8C42F268DFF33BB1392D94BCF5B5087308A* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	TMP_ColorGradient_t17B51752B4E9499A1FF7D875DCEC1D15A0F4AEBB* ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;
};

struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;
};

// System.Char
struct Char_t521A6F19B456D956AF452D926C32709DC03D6B17 
{
	// System.Char System.Char::m_value
	Il2CppChar ___m_value_0;
};

struct Char_t521A6F19B456D956AF452D926C32709DC03D6B17_StaticFields
{
	// System.Byte[] System.Char::s_categoryForLatin1
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___s_categoryForLatin1_3;
};

// UnityEngine.Color
struct Color_tD001788D726C3A7F1379BEED0260B9591F440C1F 
{
	// System.Single UnityEngine.Color::r
	float ___r_0;
	// System.Single UnityEngine.Color::g
	float ___g_1;
	// System.Single UnityEngine.Color::b
	float ___b_2;
	// System.Single UnityEngine.Color::a
	float ___a_3;
};

// UnityEngine.Color32
struct Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B 
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Int32 UnityEngine.Color32::rgba
			int32_t ___rgba_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___rgba_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Byte UnityEngine.Color32::r
			uint8_t ___r_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint8_t ___r_1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___g_2_OffsetPadding[1];
			// System.Byte UnityEngine.Color32::g
			uint8_t ___g_2;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___g_2_OffsetPadding_forAlignmentOnly[1];
			uint8_t ___g_2_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___b_3_OffsetPadding[2];
			// System.Byte UnityEngine.Color32::b
			uint8_t ___b_3;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___b_3_OffsetPadding_forAlignmentOnly[2];
			uint8_t ___b_3_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___a_4_OffsetPadding[3];
			// System.Byte UnityEngine.Color32::a
			uint8_t ___a_4;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___a_4_OffsetPadding_forAlignmentOnly[3];
			uint8_t ___a_4_forAlignmentOnly;
		};
	};
};

// System.ComponentModel.Component
struct Component_t7DA251DAA9E59801CC5FE8E27F37027143BED083  : public MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE
{
	// System.ComponentModel.ISite System.ComponentModel.Component::site
	RuntimeObject* ___site_2;
	// System.ComponentModel.EventHandlerList System.ComponentModel.Component::events
	EventHandlerList_t057D7531265C1DF014C8C83AF251E908D1A0B1C8* ___events_3;
};

struct Component_t7DA251DAA9E59801CC5FE8E27F37027143BED083_StaticFields
{
	// System.Object System.ComponentModel.Component::EventDisposed
	RuntimeObject* ___EventDisposed_1;
};

// System.DateTime
struct DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D 
{
	// System.UInt64 System.DateTime::_dateData
	uint64_t ____dateData_46;
};

struct DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_StaticFields
{
	// System.Int32[] System.DateTime::s_daysToMonth365
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___s_daysToMonth365_30;
	// System.Int32[] System.DateTime::s_daysToMonth366
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___s_daysToMonth366_31;
	// System.DateTime System.DateTime::MinValue
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___MinValue_32;
	// System.DateTime System.DateTime::MaxValue
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___MaxValue_33;
	// System.DateTime System.DateTime::UnixEpoch
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___UnixEpoch_34;
};

// System.Double
struct Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F 
{
	// System.Double System.Double::m_value
	double ___m_value_0;
};

// UnityEngine.DrivenRectTransformTracker
struct DrivenRectTransformTracker_tFB0706C933E3C68E4F377C204FCEEF091F1EE0B1 
{
	union
	{
		struct
		{
		};
		uint8_t DrivenRectTransformTracker_tFB0706C933E3C68E4F377C204FCEEF091F1EE0B1__padding[1];
	};
};

// System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2  : public ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F
{
};

struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_StaticFields
{
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___enumSeperatorCharArray_0;
};
// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshaled_com
{
};

// System.Int32
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;
};

// System.IntPtr
struct IntPtr_t 
{
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;
};

struct IntPtr_t_StaticFields
{
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;
};

// TMPro.MaterialReference
struct MaterialReference_tFD98FFFBBDF168028E637446C6676507186F4D0B 
{
	// System.Int32 TMPro.MaterialReference::index
	int32_t ___index_0;
	// TMPro.TMP_FontAsset TMPro.MaterialReference::fontAsset
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	// TMPro.TMP_SpriteAsset TMPro.MaterialReference::spriteAsset
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___spriteAsset_2;
	// UnityEngine.Material TMPro.MaterialReference::material
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_3;
	// System.Boolean TMPro.MaterialReference::isDefaultMaterial
	bool ___isDefaultMaterial_4;
	// System.Boolean TMPro.MaterialReference::isFallbackMaterial
	bool ___isFallbackMaterial_5;
	// UnityEngine.Material TMPro.MaterialReference::fallbackMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___fallbackMaterial_6;
	// System.Single TMPro.MaterialReference::padding
	float ___padding_7;
	// System.Int32 TMPro.MaterialReference::referenceCount
	int32_t ___referenceCount_8;
};
// Native definition for P/Invoke marshalling of TMPro.MaterialReference
struct MaterialReference_tFD98FFFBBDF168028E637446C6676507186F4D0B_marshaled_pinvoke
{
	int32_t ___index_0;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___spriteAsset_2;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_3;
	int32_t ___isDefaultMaterial_4;
	int32_t ___isFallbackMaterial_5;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___fallbackMaterial_6;
	float ___padding_7;
	int32_t ___referenceCount_8;
};
// Native definition for COM marshalling of TMPro.MaterialReference
struct MaterialReference_tFD98FFFBBDF168028E637446C6676507186F4D0B_marshaled_com
{
	int32_t ___index_0;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___spriteAsset_2;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_3;
	int32_t ___isDefaultMaterial_4;
	int32_t ___isFallbackMaterial_5;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___fallbackMaterial_6;
	float ___padding_7;
	int32_t ___referenceCount_8;
};

// UnityEngine.Matrix4x4
struct Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 
{
	// System.Single UnityEngine.Matrix4x4::m00
	float ___m00_0;
	// System.Single UnityEngine.Matrix4x4::m10
	float ___m10_1;
	// System.Single UnityEngine.Matrix4x4::m20
	float ___m20_2;
	// System.Single UnityEngine.Matrix4x4::m30
	float ___m30_3;
	// System.Single UnityEngine.Matrix4x4::m01
	float ___m01_4;
	// System.Single UnityEngine.Matrix4x4::m11
	float ___m11_5;
	// System.Single UnityEngine.Matrix4x4::m21
	float ___m21_6;
	// System.Single UnityEngine.Matrix4x4::m31
	float ___m31_7;
	// System.Single UnityEngine.Matrix4x4::m02
	float ___m02_8;
	// System.Single UnityEngine.Matrix4x4::m12
	float ___m12_9;
	// System.Single UnityEngine.Matrix4x4::m22
	float ___m22_10;
	// System.Single UnityEngine.Matrix4x4::m32
	float ___m32_11;
	// System.Single UnityEngine.Matrix4x4::m03
	float ___m03_12;
	// System.Single UnityEngine.Matrix4x4::m13
	float ___m13_13;
	// System.Single UnityEngine.Matrix4x4::m23
	float ___m23_14;
	// System.Single UnityEngine.Matrix4x4::m33
	float ___m33_15;
};

struct Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_StaticFields
{
	// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::zeroMatrix
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___zeroMatrix_16;
	// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::identityMatrix
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___identityMatrix_17;
};

// UnityEngine.UI.Navigation
struct Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C 
{
	// UnityEngine.UI.Navigation/Mode UnityEngine.UI.Navigation::m_Mode
	int32_t ___m_Mode_0;
	// System.Boolean UnityEngine.UI.Navigation::m_WrapAround
	bool ___m_WrapAround_1;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnUp
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnUp_2;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnDown
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnDown_3;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnLeft
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnLeft_4;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnRight
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnRight_5;
};
// Native definition for P/Invoke marshalling of UnityEngine.UI.Navigation
struct Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C_marshaled_pinvoke
{
	int32_t ___m_Mode_0;
	int32_t ___m_WrapAround_1;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnUp_2;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnDown_3;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnLeft_4;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnRight_5;
};
// Native definition for COM marshalling of UnityEngine.UI.Navigation
struct Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C_marshaled_com
{
	int32_t ___m_Mode_0;
	int32_t ___m_WrapAround_1;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnUp_2;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnDown_3;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnLeft_4;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnRight_5;
};

// UnityEngine.Quaternion
struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 
{
	// System.Single UnityEngine.Quaternion::x
	float ___x_0;
	// System.Single UnityEngine.Quaternion::y
	float ___y_1;
	// System.Single UnityEngine.Quaternion::z
	float ___z_2;
	// System.Single UnityEngine.Quaternion::w
	float ___w_3;
};

struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_StaticFields
{
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___identityQuaternion_4;
};

// UnityEngine.Rect
struct Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D 
{
	// System.Single UnityEngine.Rect::m_XMin
	float ___m_XMin_0;
	// System.Single UnityEngine.Rect::m_YMin
	float ___m_YMin_1;
	// System.Single UnityEngine.Rect::m_Width
	float ___m_Width_2;
	// System.Single UnityEngine.Rect::m_Height
	float ___m_Height_3;
};

// System.Single
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	// System.Single System.Single::m_value
	float ___m_value_0;
};

// UnityEngine.UI.SpriteState
struct SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD 
{
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_HighlightedSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_HighlightedSprite_0;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_PressedSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_PressedSprite_1;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_SelectedSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_SelectedSprite_2;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_DisabledSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_DisabledSprite_3;
};
// Native definition for P/Invoke marshalling of UnityEngine.UI.SpriteState
struct SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD_marshaled_pinvoke
{
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_HighlightedSprite_0;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_PressedSprite_1;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_SelectedSprite_2;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_DisabledSprite_3;
};
// Native definition for COM marshalling of UnityEngine.UI.SpriteState
struct SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD_marshaled_com
{
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_HighlightedSprite_0;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_PressedSprite_1;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_SelectedSprite_2;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_DisabledSprite_3;
};

// TMPro.TMP_FontStyleStack
struct TMP_FontStyleStack_t52885F172FADBC21346C835B5302167BDA8020DC 
{
	// System.Byte TMPro.TMP_FontStyleStack::bold
	uint8_t ___bold_0;
	// System.Byte TMPro.TMP_FontStyleStack::italic
	uint8_t ___italic_1;
	// System.Byte TMPro.TMP_FontStyleStack::underline
	uint8_t ___underline_2;
	// System.Byte TMPro.TMP_FontStyleStack::strikethrough
	uint8_t ___strikethrough_3;
	// System.Byte TMPro.TMP_FontStyleStack::highlight
	uint8_t ___highlight_4;
	// System.Byte TMPro.TMP_FontStyleStack::superscript
	uint8_t ___superscript_5;
	// System.Byte TMPro.TMP_FontStyleStack::subscript
	uint8_t ___subscript_6;
	// System.Byte TMPro.TMP_FontStyleStack::uppercase
	uint8_t ___uppercase_7;
	// System.Byte TMPro.TMP_FontStyleStack::lowercase
	uint8_t ___lowercase_8;
	// System.Byte TMPro.TMP_FontStyleStack::smallcaps
	uint8_t ___smallcaps_9;
};

// TMPro.TMP_Offset
struct TMP_Offset_t2262BE4E87D9662487777FF8FFE1B17B0E4438C6 
{
	// System.Single TMPro.TMP_Offset::m_Left
	float ___m_Left_0;
	// System.Single TMPro.TMP_Offset::m_Right
	float ___m_Right_1;
	// System.Single TMPro.TMP_Offset::m_Top
	float ___m_Top_2;
	// System.Single TMPro.TMP_Offset::m_Bottom
	float ___m_Bottom_3;
};

struct TMP_Offset_t2262BE4E87D9662487777FF8FFE1B17B0E4438C6_StaticFields
{
	// TMPro.TMP_Offset TMPro.TMP_Offset::k_ZeroOffset
	TMP_Offset_t2262BE4E87D9662487777FF8FFE1B17B0E4438C6 ___k_ZeroOffset_4;
};

// Vuforia.TargetStatus
struct TargetStatus_t5D866F1CAA9D70E5B66D532E69B190EA3BAAC4B0 
{
	// Vuforia.Status Vuforia.TargetStatus::<Status>k__BackingField
	int32_t ___U3CStatusU3Ek__BackingField_0;
	// Vuforia.StatusInfo Vuforia.TargetStatus::<StatusInfo>k__BackingField
	int32_t ___U3CStatusInfoU3Ek__BackingField_1;
};

// UnityEngine.Events.UnityEvent
struct UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977  : public UnityEventBase_t4968A4C72559F35C0923E4BD9C042C3A842E1DB8
{
	// System.Object[] UnityEngine.Events.UnityEvent::m_InvokeArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___m_InvokeArray_3;
};

// UnityEngine.Vector2
struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 
{
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;
};

struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_StaticFields
{
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___negativeInfinityVector_9;
};

// UnityEngine.Vector3
struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 
{
	// System.Single UnityEngine.Vector3::x
	float ___x_2;
	// System.Single UnityEngine.Vector3::y
	float ___y_3;
	// System.Single UnityEngine.Vector3::z
	float ___z_4;
};

struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields
{
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___zeroVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___oneVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___upVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___downVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___leftVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rightVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___forwardVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___backVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___positiveInfinityVector_13;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___negativeInfinityVector_14;
};

// UnityEngine.Vector4
struct Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 
{
	// System.Single UnityEngine.Vector4::x
	float ___x_1;
	// System.Single UnityEngine.Vector4::y
	float ___y_2;
	// System.Single UnityEngine.Vector4::z
	float ___z_3;
	// System.Single UnityEngine.Vector4::w
	float ___w_4;
};

struct Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_StaticFields
{
	// UnityEngine.Vector4 UnityEngine.Vector4::zeroVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___zeroVector_5;
	// UnityEngine.Vector4 UnityEngine.Vector4::oneVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___oneVector_6;
	// UnityEngine.Vector4 UnityEngine.Vector4::positiveInfinityVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___positiveInfinityVector_7;
	// UnityEngine.Vector4 UnityEngine.Vector4::negativeInfinityVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___negativeInfinityVector_8;
};

// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915 
{
	union
	{
		struct
		{
		};
		uint8_t Void_t4861ACF8F4594C3437BB48B6E56783494B843915__padding[1];
	};
};

// TMPro.TMP_Text/SpecialCharacter
struct SpecialCharacter_t6C1DBE8C490706D1620899BAB7F0B8091AD26777 
{
	// TMPro.TMP_Character TMPro.TMP_Text/SpecialCharacter::character
	TMP_Character_t7D37A55EF1A9FF6D0BFE6D50E86A00F80E7FAF35* ___character_0;
	// TMPro.TMP_FontAsset TMPro.TMP_Text/SpecialCharacter::fontAsset
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	// UnityEngine.Material TMPro.TMP_Text/SpecialCharacter::material
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_2;
	// System.Int32 TMPro.TMP_Text/SpecialCharacter::materialIndex
	int32_t ___materialIndex_3;
};
// Native definition for P/Invoke marshalling of TMPro.TMP_Text/SpecialCharacter
struct SpecialCharacter_t6C1DBE8C490706D1620899BAB7F0B8091AD26777_marshaled_pinvoke
{
	TMP_Character_t7D37A55EF1A9FF6D0BFE6D50E86A00F80E7FAF35* ___character_0;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_2;
	int32_t ___materialIndex_3;
};
// Native definition for COM marshalling of TMPro.TMP_Text/SpecialCharacter
struct SpecialCharacter_t6C1DBE8C490706D1620899BAB7F0B8091AD26777_marshaled_com
{
	TMP_Character_t7D37A55EF1A9FF6D0BFE6D50E86A00F80E7FAF35* ___character_0;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_2;
	int32_t ___materialIndex_3;
};

// TMPro.TMP_Text/TextBackingContainer
struct TextBackingContainer_t33D1CE628E7B26C45EDAC1D87BEF2DD22A5C6361 
{
	// System.UInt32[] TMPro.TMP_Text/TextBackingContainer::m_Array
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___m_Array_0;
	// System.Int32 TMPro.TMP_Text/TextBackingContainer::m_Count
	int32_t ___m_Count_1;
};
// Native definition for P/Invoke marshalling of TMPro.TMP_Text/TextBackingContainer
struct TextBackingContainer_t33D1CE628E7B26C45EDAC1D87BEF2DD22A5C6361_marshaled_pinvoke
{
	Il2CppSafeArray/*NONE*/* ___m_Array_0;
	int32_t ___m_Count_1;
};
// Native definition for COM marshalling of TMPro.TMP_Text/TextBackingContainer
struct TextBackingContainer_t33D1CE628E7B26C45EDAC1D87BEF2DD22A5C6361_marshaled_com
{
	Il2CppSafeArray/*NONE*/* ___m_Array_0;
	int32_t ___m_Count_1;
};

// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32>
struct TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// TMPro.TMP_TextProcessingStack`1<TMPro.MaterialReference>
struct TMP_TextProcessingStack_1_tB03E08F69415B281A5A81138F09E49EE58402DF9 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	MaterialReferenceU5BU5D_t7491D335AB3E3E13CE9C0F5E931F396F6A02E1F2* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	MaterialReference_tFD98FFFBBDF168028E637446C6676507186F4D0B ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// UnityEngine.UI.ColorBlock
struct ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11 
{
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_NormalColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_NormalColor_0;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_HighlightedColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_HighlightedColor_1;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_PressedColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_PressedColor_2;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_SelectedColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_SelectedColor_3;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_DisabledColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_DisabledColor_4;
	// System.Single UnityEngine.UI.ColorBlock::m_ColorMultiplier
	float ___m_ColorMultiplier_5;
	// System.Single UnityEngine.UI.ColorBlock::m_FadeDuration
	float ___m_FadeDuration_6;
};

struct ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11_StaticFields
{
	// UnityEngine.UI.ColorBlock UnityEngine.UI.ColorBlock::defaultColorBlock
	ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11 ___defaultColorBlock_7;
};

// System.Delegate
struct Delegate_t  : public RuntimeObject
{
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject* ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::extra_arg
	intptr_t ___extra_arg_5;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_6;
	// System.IntPtr System.Delegate::interp_method
	intptr_t ___interp_method_7;
	// System.IntPtr System.Delegate::interp_invoke_impl
	intptr_t ___interp_invoke_impl_8;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t* ___method_info_9;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t* ___original_method_info_10;
	// System.DelegateData System.Delegate::data
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_12;
};
// Native definition for P/Invoke marshalling of System.Delegate
struct Delegate_t_marshaled_pinvoke
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
};
// Native definition for COM marshalling of System.Delegate
struct Delegate_t_marshaled_com
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
};

// System.Timers.ElapsedEventArgs
struct ElapsedEventArgs_t74C1E2D692A82825805E5EC84EE73F5B053027C1  : public EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377
{
	// System.DateTime System.Timers.ElapsedEventArgs::time
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___time_1;
};

// TMPro.Extents
struct Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 
{
	// UnityEngine.Vector2 TMPro.Extents::min
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___min_2;
	// UnityEngine.Vector2 TMPro.Extents::max
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___max_3;
};

struct Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8_StaticFields
{
	// TMPro.Extents TMPro.Extents::zero
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___zero_0;
	// TMPro.Extents TMPro.Extents::uninitialized
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___uninitialized_1;
};

// TMPro.HighlightState
struct HighlightState_tE4F50287E5E2E91D42AB77DEA281D88D3AD6A28B 
{
	// UnityEngine.Color32 TMPro.HighlightState::color
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___color_0;
	// TMPro.TMP_Offset TMPro.HighlightState::padding
	TMP_Offset_t2262BE4E87D9662487777FF8FFE1B17B0E4438C6 ___padding_1;
};

// Vuforia.HitTestResult
struct HitTestResult_t623F1DB9A0AAD8416652DFFE1842F908250D44D9  : public RuntimeObject
{
	// Vuforia.IVuHitTest Vuforia.HitTestResult::mVuHitTest
	RuntimeObject* ___mVuHitTest_0;
	// UnityEngine.Vector3 Vuforia.HitTestResult::mPosition
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___mPosition_1;
	// UnityEngine.Quaternion Vuforia.HitTestResult::mOrientation
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___mOrientation_2;
};

// Vuforia.Internal.Core.IlluminationInfo
struct IlluminationInfo_tF030686AD6381654CA2F9C81B832DC99613C0035 
{
	// System.Nullable`1<System.Int32> Vuforia.Internal.Core.IlluminationInfo::AmbientIntensity
	Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 ___AmbientIntensity_0;
	// System.Nullable`1<System.Int32> Vuforia.Internal.Core.IlluminationInfo::AmbientColorTemperature
	Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 ___AmbientColorTemperature_1;
	// System.Single Vuforia.Internal.Core.IlluminationInfo::IntensityCorrection
	float ___IntensityCorrection_2;
	// UnityEngine.Vector4 Vuforia.Internal.Core.IlluminationInfo::ColorCorrection
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___ColorCorrection_3;
};
// Native definition for P/Invoke marshalling of Vuforia.Internal.Core.IlluminationInfo
struct IlluminationInfo_tF030686AD6381654CA2F9C81B832DC99613C0035_marshaled_pinvoke
{
	Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 ___AmbientIntensity_0;
	Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 ___AmbientColorTemperature_1;
	float ___IntensityCorrection_2;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___ColorCorrection_3;
};
// Native definition for COM marshalling of Vuforia.Internal.Core.IlluminationInfo
struct IlluminationInfo_tF030686AD6381654CA2F9C81B832DC99613C0035_marshaled_com
{
	Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 ___AmbientIntensity_0;
	Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 ___AmbientColorTemperature_1;
	float ___IntensityCorrection_2;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___ColorCorrection_3;
};

// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C  : public RuntimeObject
{
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;
};

struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_StaticFields
{
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;
};
// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// Unity.Profiling.ProfilerMarker
struct ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD 
{
	// System.IntPtr Unity.Profiling.ProfilerMarker::m_Ptr
	intptr_t ___m_Ptr_0;
};

// UnityEngine.Ray
struct Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 
{
	// UnityEngine.Vector3 UnityEngine.Ray::m_Origin
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Origin_0;
	// UnityEngine.Vector3 UnityEngine.Ray::m_Direction
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Direction_1;
};

// UnityEngine.RaycastHit
struct RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5 
{
	// UnityEngine.Vector3 UnityEngine.RaycastHit::m_Point
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Point_0;
	// UnityEngine.Vector3 UnityEngine.RaycastHit::m_Normal
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Normal_1;
	// System.UInt32 UnityEngine.RaycastHit::m_FaceID
	uint32_t ___m_FaceID_2;
	// System.Single UnityEngine.RaycastHit::m_Distance
	float ___m_Distance_3;
	// UnityEngine.Vector2 UnityEngine.RaycastHit::m_UV
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_UV_4;
	// System.Int32 UnityEngine.RaycastHit::m_Collider
	int32_t ___m_Collider_5;
};

// System.Timers.Timer
struct Timer_t10D85D58F4AC0CF80C625D0124B12098CE540A8B  : public Component_t7DA251DAA9E59801CC5FE8E27F37027143BED083
{
	// System.Double System.Timers.Timer::interval
	double ___interval_4;
	// System.Boolean System.Timers.Timer::enabled
	bool ___enabled_5;
	// System.Boolean System.Timers.Timer::initializing
	bool ___initializing_6;
	// System.Boolean System.Timers.Timer::delayedEnable
	bool ___delayedEnable_7;
	// System.Timers.ElapsedEventHandler System.Timers.Timer::onIntervalElapsed
	ElapsedEventHandler_tCA26B9E70A5EDB91678F46BCD15547D752D2BA51* ___onIntervalElapsed_8;
	// System.Boolean System.Timers.Timer::autoReset
	bool ___autoReset_9;
	// System.ComponentModel.ISynchronizeInvoke System.Timers.Timer::synchronizingObject
	RuntimeObject* ___synchronizingObject_10;
	// System.Boolean System.Timers.Timer::disposed
	bool ___disposed_11;
	// System.Threading.Timer System.Timers.Timer::timer
	Timer_t763C1D5F5A36087DC92C7DA4D1F8AB578F83AB00* ___timer_12;
	// System.Threading.TimerCallback System.Timers.Timer::callback
	TimerCallback_t7455CAFACC7054E62879920AFC84C5DA98B8C7CD* ___callback_13;
	// System.Object System.Timers.Timer::cookie
	RuntimeObject* ___cookie_14;
};

// UnityEngine.Touch
struct Touch_t03E51455ED508492B3F278903A0114FA0E87B417 
{
	// System.Int32 UnityEngine.Touch::m_FingerId
	int32_t ___m_FingerId_0;
	// UnityEngine.Vector2 UnityEngine.Touch::m_Position
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_Position_1;
	// UnityEngine.Vector2 UnityEngine.Touch::m_RawPosition
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_RawPosition_2;
	// UnityEngine.Vector2 UnityEngine.Touch::m_PositionDelta
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_PositionDelta_3;
	// System.Single UnityEngine.Touch::m_TimeDelta
	float ___m_TimeDelta_4;
	// System.Int32 UnityEngine.Touch::m_TapCount
	int32_t ___m_TapCount_5;
	// UnityEngine.TouchPhase UnityEngine.Touch::m_Phase
	int32_t ___m_Phase_6;
	// UnityEngine.TouchType UnityEngine.Touch::m_Type
	int32_t ___m_Type_7;
	// System.Single UnityEngine.Touch::m_Pressure
	float ___m_Pressure_8;
	// System.Single UnityEngine.Touch::m_maximumPossiblePressure
	float ___m_maximumPossiblePressure_9;
	// System.Single UnityEngine.Touch::m_Radius
	float ___m_Radius_10;
	// System.Single UnityEngine.Touch::m_RadiusVariance
	float ___m_RadiusVariance_11;
	// System.Single UnityEngine.Touch::m_AltitudeAngle
	float ___m_AltitudeAngle_12;
	// System.Single UnityEngine.Touch::m_AzimuthAngle
	float ___m_AzimuthAngle_13;
};

// TMPro.VertexGradient
struct VertexGradient_t2C057B53C0EA6E987C2B7BAB0305E686DA1C9A8F 
{
	// UnityEngine.Color TMPro.VertexGradient::topLeft
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___topLeft_0;
	// UnityEngine.Color TMPro.VertexGradient::topRight
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___topRight_1;
	// UnityEngine.Color TMPro.VertexGradient::bottomLeft
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___bottomLeft_2;
	// UnityEngine.Color TMPro.VertexGradient::bottomRight
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___bottomRight_3;
};

// DevicePoseManager/DevicePoseResetEvent
struct DevicePoseResetEvent_tAC0B6D678A899DFD6B5422B6A574C27C60C9280C  : public UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977
{
};

// TMPro.TMP_TextProcessingStack`1<TMPro.HighlightState>
struct TMP_TextProcessingStack_1_t57AECDCC936A7FF1D6CF66CA11560B28A675648D 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	HighlightStateU5BU5D_tA878A0AF1F4F52882ACD29515AADC277EE135622* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	HighlightState_tE4F50287E5E2E91D42AB77DEA281D88D3AD6A28B ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// Vuforia.IlluminationData
struct IlluminationData_t907CE8A9106AC295312099ACA9EF74970E3AE7D4  : public RuntimeObject
{
	// Vuforia.Internal.Core.IlluminationInfo Vuforia.IlluminationData::mIlluminationInfo
	IlluminationInfo_tF030686AD6381654CA2F9C81B832DC99613C0035 ___mIlluminationInfo_2;
};

// UnityEngine.Material
struct Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.Mesh
struct Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// System.MulticastDelegate
struct MulticastDelegate_t  : public Delegate_t
{
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771* ___delegates_13;
};
// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates_13;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates_13;
};

// TMPro.TMP_LineInfo
struct TMP_LineInfo_tB75C1965B58DB7B3A046C8CA55AD6AB92B6B17B3 
{
	// System.Int32 TMPro.TMP_LineInfo::controlCharacterCount
	int32_t ___controlCharacterCount_0;
	// System.Int32 TMPro.TMP_LineInfo::characterCount
	int32_t ___characterCount_1;
	// System.Int32 TMPro.TMP_LineInfo::visibleCharacterCount
	int32_t ___visibleCharacterCount_2;
	// System.Int32 TMPro.TMP_LineInfo::spaceCount
	int32_t ___spaceCount_3;
	// System.Int32 TMPro.TMP_LineInfo::wordCount
	int32_t ___wordCount_4;
	// System.Int32 TMPro.TMP_LineInfo::firstCharacterIndex
	int32_t ___firstCharacterIndex_5;
	// System.Int32 TMPro.TMP_LineInfo::firstVisibleCharacterIndex
	int32_t ___firstVisibleCharacterIndex_6;
	// System.Int32 TMPro.TMP_LineInfo::lastCharacterIndex
	int32_t ___lastCharacterIndex_7;
	// System.Int32 TMPro.TMP_LineInfo::lastVisibleCharacterIndex
	int32_t ___lastVisibleCharacterIndex_8;
	// System.Single TMPro.TMP_LineInfo::length
	float ___length_9;
	// System.Single TMPro.TMP_LineInfo::lineHeight
	float ___lineHeight_10;
	// System.Single TMPro.TMP_LineInfo::ascender
	float ___ascender_11;
	// System.Single TMPro.TMP_LineInfo::baseline
	float ___baseline_12;
	// System.Single TMPro.TMP_LineInfo::descender
	float ___descender_13;
	// System.Single TMPro.TMP_LineInfo::maxAdvance
	float ___maxAdvance_14;
	// System.Single TMPro.TMP_LineInfo::width
	float ___width_15;
	// System.Single TMPro.TMP_LineInfo::marginLeft
	float ___marginLeft_16;
	// System.Single TMPro.TMP_LineInfo::marginRight
	float ___marginRight_17;
	// TMPro.HorizontalAlignmentOptions TMPro.TMP_LineInfo::alignment
	int32_t ___alignment_18;
	// TMPro.Extents TMPro.TMP_LineInfo::lineExtents
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___lineExtents_19;
};

// UnityEngine.TextAsset
struct TextAsset_t2C64E93DA366D9DE5A8209E1802FA4884AC1BD69  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// System.Action`1<Vuforia.VuforiaInitError>
struct Action_1_tF4CAAB52A69FEBB4D629E2D59C8EE77A263FEE43  : public MulticastDelegate_t
{
};

// System.Action`2<Vuforia.ObserverBehaviour,Vuforia.TargetStatus>
struct Action_2_tAC0AA9B652075EE1CE661500AC3373C7008D598F  : public MulticastDelegate_t
{
};

// System.Action
struct Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07  : public MulticastDelegate_t
{
};

// System.AsyncCallback
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C  : public MulticastDelegate_t
{
};

// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// System.Timers.ElapsedEventHandler
struct ElapsedEventHandler_tCA26B9E70A5EDB91678F46BCD15547D752D2BA51  : public MulticastDelegate_t
{
};

// UnityEngine.MeshFilter
struct MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Renderer
struct Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// TMPro.WordWrapState
struct WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A 
{
	// System.Int32 TMPro.WordWrapState::previous_WordBreak
	int32_t ___previous_WordBreak_0;
	// System.Int32 TMPro.WordWrapState::total_CharacterCount
	int32_t ___total_CharacterCount_1;
	// System.Int32 TMPro.WordWrapState::visible_CharacterCount
	int32_t ___visible_CharacterCount_2;
	// System.Int32 TMPro.WordWrapState::visible_SpriteCount
	int32_t ___visible_SpriteCount_3;
	// System.Int32 TMPro.WordWrapState::visible_LinkCount
	int32_t ___visible_LinkCount_4;
	// System.Int32 TMPro.WordWrapState::firstCharacterIndex
	int32_t ___firstCharacterIndex_5;
	// System.Int32 TMPro.WordWrapState::firstVisibleCharacterIndex
	int32_t ___firstVisibleCharacterIndex_6;
	// System.Int32 TMPro.WordWrapState::lastCharacterIndex
	int32_t ___lastCharacterIndex_7;
	// System.Int32 TMPro.WordWrapState::lastVisibleCharIndex
	int32_t ___lastVisibleCharIndex_8;
	// System.Int32 TMPro.WordWrapState::lineNumber
	int32_t ___lineNumber_9;
	// System.Single TMPro.WordWrapState::maxCapHeight
	float ___maxCapHeight_10;
	// System.Single TMPro.WordWrapState::maxAscender
	float ___maxAscender_11;
	// System.Single TMPro.WordWrapState::maxDescender
	float ___maxDescender_12;
	// System.Single TMPro.WordWrapState::startOfLineAscender
	float ___startOfLineAscender_13;
	// System.Single TMPro.WordWrapState::maxLineAscender
	float ___maxLineAscender_14;
	// System.Single TMPro.WordWrapState::maxLineDescender
	float ___maxLineDescender_15;
	// System.Single TMPro.WordWrapState::pageAscender
	float ___pageAscender_16;
	// TMPro.HorizontalAlignmentOptions TMPro.WordWrapState::horizontalAlignment
	int32_t ___horizontalAlignment_17;
	// System.Single TMPro.WordWrapState::marginLeft
	float ___marginLeft_18;
	// System.Single TMPro.WordWrapState::marginRight
	float ___marginRight_19;
	// System.Single TMPro.WordWrapState::xAdvance
	float ___xAdvance_20;
	// System.Single TMPro.WordWrapState::preferredWidth
	float ___preferredWidth_21;
	// System.Single TMPro.WordWrapState::preferredHeight
	float ___preferredHeight_22;
	// System.Single TMPro.WordWrapState::previousLineScale
	float ___previousLineScale_23;
	// System.Int32 TMPro.WordWrapState::wordCount
	int32_t ___wordCount_24;
	// TMPro.FontStyles TMPro.WordWrapState::fontStyle
	int32_t ___fontStyle_25;
	// System.Int32 TMPro.WordWrapState::italicAngle
	int32_t ___italicAngle_26;
	// System.Single TMPro.WordWrapState::fontScaleMultiplier
	float ___fontScaleMultiplier_27;
	// System.Single TMPro.WordWrapState::currentFontSize
	float ___currentFontSize_28;
	// System.Single TMPro.WordWrapState::baselineOffset
	float ___baselineOffset_29;
	// System.Single TMPro.WordWrapState::lineOffset
	float ___lineOffset_30;
	// System.Boolean TMPro.WordWrapState::isDrivenLineSpacing
	bool ___isDrivenLineSpacing_31;
	// System.Single TMPro.WordWrapState::glyphHorizontalAdvanceAdjustment
	float ___glyphHorizontalAdvanceAdjustment_32;
	// System.Single TMPro.WordWrapState::cSpace
	float ___cSpace_33;
	// System.Single TMPro.WordWrapState::mSpace
	float ___mSpace_34;
	// TMPro.TMP_TextInfo TMPro.WordWrapState::textInfo
	TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* ___textInfo_35;
	// TMPro.TMP_LineInfo TMPro.WordWrapState::lineInfo
	TMP_LineInfo_tB75C1965B58DB7B3A046C8CA55AD6AB92B6B17B3 ___lineInfo_36;
	// UnityEngine.Color32 TMPro.WordWrapState::vertexColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___vertexColor_37;
	// UnityEngine.Color32 TMPro.WordWrapState::underlineColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___underlineColor_38;
	// UnityEngine.Color32 TMPro.WordWrapState::strikethroughColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___strikethroughColor_39;
	// UnityEngine.Color32 TMPro.WordWrapState::highlightColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___highlightColor_40;
	// TMPro.TMP_FontStyleStack TMPro.WordWrapState::basicStyleStack
	TMP_FontStyleStack_t52885F172FADBC21346C835B5302167BDA8020DC ___basicStyleStack_41;
	// TMPro.TMP_TextProcessingStack`1<System.Int32> TMPro.WordWrapState::italicAngleStack
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___italicAngleStack_42;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.WordWrapState::colorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___colorStack_43;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.WordWrapState::underlineColorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___underlineColorStack_44;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.WordWrapState::strikethroughColorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___strikethroughColorStack_45;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.WordWrapState::highlightColorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___highlightColorStack_46;
	// TMPro.TMP_TextProcessingStack`1<TMPro.HighlightState> TMPro.WordWrapState::highlightStateStack
	TMP_TextProcessingStack_1_t57AECDCC936A7FF1D6CF66CA11560B28A675648D ___highlightStateStack_47;
	// TMPro.TMP_TextProcessingStack`1<TMPro.TMP_ColorGradient> TMPro.WordWrapState::colorGradientStack
	TMP_TextProcessingStack_1_tC8FAEB17246D3B171EFD11165A5761AE39B40D0C ___colorGradientStack_48;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.WordWrapState::sizeStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___sizeStack_49;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.WordWrapState::indentStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___indentStack_50;
	// TMPro.TMP_TextProcessingStack`1<TMPro.FontWeight> TMPro.WordWrapState::fontWeightStack
	TMP_TextProcessingStack_1_tA5C8CED87DD9E73F6359E23B334FFB5B6F813FD4 ___fontWeightStack_51;
	// TMPro.TMP_TextProcessingStack`1<System.Int32> TMPro.WordWrapState::styleStack
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___styleStack_52;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.WordWrapState::baselineStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___baselineStack_53;
	// TMPro.TMP_TextProcessingStack`1<System.Int32> TMPro.WordWrapState::actionStack
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___actionStack_54;
	// TMPro.TMP_TextProcessingStack`1<TMPro.MaterialReference> TMPro.WordWrapState::materialReferenceStack
	TMP_TextProcessingStack_1_tB03E08F69415B281A5A81138F09E49EE58402DF9 ___materialReferenceStack_55;
	// TMPro.TMP_TextProcessingStack`1<TMPro.HorizontalAlignmentOptions> TMPro.WordWrapState::lineJustificationStack
	TMP_TextProcessingStack_1_t243EA1B5D7FD2295D6533B953F0BBE8F52EFB8A0 ___lineJustificationStack_56;
	// System.Int32 TMPro.WordWrapState::spriteAnimationID
	int32_t ___spriteAnimationID_57;
	// TMPro.TMP_FontAsset TMPro.WordWrapState::currentFontAsset
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___currentFontAsset_58;
	// TMPro.TMP_SpriteAsset TMPro.WordWrapState::currentSpriteAsset
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___currentSpriteAsset_59;
	// UnityEngine.Material TMPro.WordWrapState::currentMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___currentMaterial_60;
	// System.Int32 TMPro.WordWrapState::currentMaterialIndex
	int32_t ___currentMaterialIndex_61;
	// TMPro.Extents TMPro.WordWrapState::meshExtents
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___meshExtents_62;
	// System.Boolean TMPro.WordWrapState::tagNoParsing
	bool ___tagNoParsing_63;
	// System.Boolean TMPro.WordWrapState::isNonBreakingSpace
	bool ___isNonBreakingSpace_64;
};
// Native definition for P/Invoke marshalling of TMPro.WordWrapState
struct WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A_marshaled_pinvoke
{
	int32_t ___previous_WordBreak_0;
	int32_t ___total_CharacterCount_1;
	int32_t ___visible_CharacterCount_2;
	int32_t ___visible_SpriteCount_3;
	int32_t ___visible_LinkCount_4;
	int32_t ___firstCharacterIndex_5;
	int32_t ___firstVisibleCharacterIndex_6;
	int32_t ___lastCharacterIndex_7;
	int32_t ___lastVisibleCharIndex_8;
	int32_t ___lineNumber_9;
	float ___maxCapHeight_10;
	float ___maxAscender_11;
	float ___maxDescender_12;
	float ___startOfLineAscender_13;
	float ___maxLineAscender_14;
	float ___maxLineDescender_15;
	float ___pageAscender_16;
	int32_t ___horizontalAlignment_17;
	float ___marginLeft_18;
	float ___marginRight_19;
	float ___xAdvance_20;
	float ___preferredWidth_21;
	float ___preferredHeight_22;
	float ___previousLineScale_23;
	int32_t ___wordCount_24;
	int32_t ___fontStyle_25;
	int32_t ___italicAngle_26;
	float ___fontScaleMultiplier_27;
	float ___currentFontSize_28;
	float ___baselineOffset_29;
	float ___lineOffset_30;
	int32_t ___isDrivenLineSpacing_31;
	float ___glyphHorizontalAdvanceAdjustment_32;
	float ___cSpace_33;
	float ___mSpace_34;
	TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* ___textInfo_35;
	TMP_LineInfo_tB75C1965B58DB7B3A046C8CA55AD6AB92B6B17B3 ___lineInfo_36;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___vertexColor_37;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___underlineColor_38;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___strikethroughColor_39;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___highlightColor_40;
	TMP_FontStyleStack_t52885F172FADBC21346C835B5302167BDA8020DC ___basicStyleStack_41;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___italicAngleStack_42;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___colorStack_43;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___underlineColorStack_44;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___strikethroughColorStack_45;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___highlightColorStack_46;
	TMP_TextProcessingStack_1_t57AECDCC936A7FF1D6CF66CA11560B28A675648D ___highlightStateStack_47;
	TMP_TextProcessingStack_1_tC8FAEB17246D3B171EFD11165A5761AE39B40D0C ___colorGradientStack_48;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___sizeStack_49;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___indentStack_50;
	TMP_TextProcessingStack_1_tA5C8CED87DD9E73F6359E23B334FFB5B6F813FD4 ___fontWeightStack_51;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___styleStack_52;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___baselineStack_53;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___actionStack_54;
	TMP_TextProcessingStack_1_tB03E08F69415B281A5A81138F09E49EE58402DF9 ___materialReferenceStack_55;
	TMP_TextProcessingStack_1_t243EA1B5D7FD2295D6533B953F0BBE8F52EFB8A0 ___lineJustificationStack_56;
	int32_t ___spriteAnimationID_57;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___currentFontAsset_58;
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___currentSpriteAsset_59;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___currentMaterial_60;
	int32_t ___currentMaterialIndex_61;
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___meshExtents_62;
	int32_t ___tagNoParsing_63;
	int32_t ___isNonBreakingSpace_64;
};
// Native definition for COM marshalling of TMPro.WordWrapState
struct WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A_marshaled_com
{
	int32_t ___previous_WordBreak_0;
	int32_t ___total_CharacterCount_1;
	int32_t ___visible_CharacterCount_2;
	int32_t ___visible_SpriteCount_3;
	int32_t ___visible_LinkCount_4;
	int32_t ___firstCharacterIndex_5;
	int32_t ___firstVisibleCharacterIndex_6;
	int32_t ___lastCharacterIndex_7;
	int32_t ___lastVisibleCharIndex_8;
	int32_t ___lineNumber_9;
	float ___maxCapHeight_10;
	float ___maxAscender_11;
	float ___maxDescender_12;
	float ___startOfLineAscender_13;
	float ___maxLineAscender_14;
	float ___maxLineDescender_15;
	float ___pageAscender_16;
	int32_t ___horizontalAlignment_17;
	float ___marginLeft_18;
	float ___marginRight_19;
	float ___xAdvance_20;
	float ___preferredWidth_21;
	float ___preferredHeight_22;
	float ___previousLineScale_23;
	int32_t ___wordCount_24;
	int32_t ___fontStyle_25;
	int32_t ___italicAngle_26;
	float ___fontScaleMultiplier_27;
	float ___currentFontSize_28;
	float ___baselineOffset_29;
	float ___lineOffset_30;
	int32_t ___isDrivenLineSpacing_31;
	float ___glyphHorizontalAdvanceAdjustment_32;
	float ___cSpace_33;
	float ___mSpace_34;
	TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* ___textInfo_35;
	TMP_LineInfo_tB75C1965B58DB7B3A046C8CA55AD6AB92B6B17B3 ___lineInfo_36;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___vertexColor_37;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___underlineColor_38;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___strikethroughColor_39;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___highlightColor_40;
	TMP_FontStyleStack_t52885F172FADBC21346C835B5302167BDA8020DC ___basicStyleStack_41;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___italicAngleStack_42;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___colorStack_43;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___underlineColorStack_44;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___strikethroughColorStack_45;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___highlightColorStack_46;
	TMP_TextProcessingStack_1_t57AECDCC936A7FF1D6CF66CA11560B28A675648D ___highlightStateStack_47;
	TMP_TextProcessingStack_1_tC8FAEB17246D3B171EFD11165A5761AE39B40D0C ___colorGradientStack_48;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___sizeStack_49;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___indentStack_50;
	TMP_TextProcessingStack_1_tA5C8CED87DD9E73F6359E23B334FFB5B6F813FD4 ___fontWeightStack_51;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___styleStack_52;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___baselineStack_53;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___actionStack_54;
	TMP_TextProcessingStack_1_tB03E08F69415B281A5A81138F09E49EE58402DF9 ___materialReferenceStack_55;
	TMP_TextProcessingStack_1_t243EA1B5D7FD2295D6533B953F0BBE8F52EFB8A0 ___lineJustificationStack_56;
	int32_t ___spriteAnimationID_57;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___currentFontAsset_58;
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___currentSpriteAsset_59;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___currentMaterial_60;
	int32_t ___currentMaterialIndex_61;
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___meshExtents_62;
	int32_t ___tagNoParsing_63;
	int32_t ___isNonBreakingSpace_64;
};

// MessageBox/DelegateMessageBoxButtonAction
struct DelegateMessageBoxButtonAction_tF92662C8A304ECF3D687E8AEB65D739E3FA46DC8  : public MulticastDelegate_t
{
};

// TMPro.TMP_TextProcessingStack`1<TMPro.WordWrapState>
struct TMP_TextProcessingStack_1_t2DDA00FFC64AF6E3AFD475AB2086D16C34787E0F 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	WordWrapStateU5BU5D_t473D59C9DBCC949CE72EF1EB471CBA152A6CEAC9* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// UnityEngine.Camera
struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_StaticFields
{
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreCull
	CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD* ___onPreCull_4;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreRender
	CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD* ___onPreRender_5;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPostRender
	CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD* ___onPostRender_6;
};

// UnityEngine.Light
struct Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
	// System.Int32 UnityEngine.Light::m_BakedIndex
	int32_t ___m_BakedIndex_4;
};

// UnityEngine.MeshRenderer
struct MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE  : public Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF
{
};

// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// AmbientLightManager
struct AmbientLightManager_tF2645E65EF2967DB6BE884BC67C6C761A0F0852E  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Light AmbientLightManager::mSceneLight
	Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* ___mSceneLight_4;
	// System.Single AmbientLightManager::mMaxIntensity
	float ___mMaxIntensity_5;
	// Vuforia.World AmbientLightManager::mVuforiaWorld
	World_t0332C3F77BBFBA826A13D263DAED199D01BCE050* ___mVuforiaWorld_6;
};

// ChildSliderAdjust
struct ChildSliderAdjust_tC0DEE6A2D001C242F02023FEB35AADEE22C4808D  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.GameObject ChildSliderAdjust::model
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___model_4;
	// UnityEngine.TextAsset ChildSliderAdjust::pcaDataAsset
	TextAsset_t2C64E93DA366D9DE5A8209E1802FA4884AC1BD69* ___pcaDataAsset_5;
	// UnityEngine.TextAsset ChildSliderAdjust::meanLandmarkDataAsset
	TextAsset_t2C64E93DA366D9DE5A8209E1802FA4884AC1BD69* ___meanLandmarkDataAsset_6;
	// UnityEngine.TextAsset ChildSliderAdjust::correctVertexOrderDataAsset
	TextAsset_t2C64E93DA366D9DE5A8209E1802FA4884AC1BD69* ___correctVertexOrderDataAsset_7;
	// UnityEngine.UI.Slider ChildSliderAdjust::sliderBMI
	Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* ___sliderBMI_8;
	// UnityEngine.UI.Slider ChildSliderAdjust::sliderStature
	Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* ___sliderStature_9;
	// UnityEngine.UI.Slider ChildSliderAdjust::sliderSittingHeightStat
	Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* ___sliderSittingHeightStat_10;
	// UnityEngine.UI.Slider ChildSliderAdjust::sliderRotation
	Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* ___sliderRotation_11;
	// TMPro.TextMeshProUGUI ChildSliderAdjust::lbBMI
	TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* ___lbBMI_12;
	// TMPro.TextMeshProUGUI ChildSliderAdjust::lbStature
	TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* ___lbStature_13;
	// TMPro.TextMeshProUGUI ChildSliderAdjust::lbSittingHeightStat
	TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* ___lbSittingHeightStat_14;
	// TMPro.TextMeshProUGUI ChildSliderAdjust::lbRotation
	TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* ___lbRotation_15;
	// TMPro.TextMeshProUGUI ChildSliderAdjust::landmarkButtonText
	TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* ___landmarkButtonText_16;
	// TMPro.TMP_Dropdown ChildSliderAdjust::sex
	TMP_Dropdown_t73B37BFDA0D005451C7B750938AFB1748E5EA504* ___sex_17;
	// System.Boolean ChildSliderAdjust::areLandmarksDisplayed
	bool ___areLandmarksDisplayed_18;
	// System.Collections.Generic.List`1<System.Double[]> ChildSliderAdjust::pcaData
	List_1_t64FC2174A52DBC518FB499976FF0BA043E643411* ___pcaData_19;
	// System.Collections.Generic.List`1<System.Double[]> ChildSliderAdjust::landmarkData
	List_1_t64FC2174A52DBC518FB499976FF0BA043E643411* ___landmarkData_20;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> ChildSliderAdjust::indexMap
	Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588* ___indexMap_21;
	// UnityEngine.Mesh ChildSliderAdjust::mesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___mesh_22;
	// UnityEngine.Vector3[] ChildSliderAdjust::vertices
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___vertices_23;
	// UnityEngine.Vector3[] ChildSliderAdjust::correctVertices
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___correctVertices_24;
	// UnityEngine.Vector3[] ChildSliderAdjust::meanVertices
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___meanVertices_25;
	// System.Int32 ChildSliderAdjust::predAnthNum
	int32_t ___predAnthNum_26;
	// System.Int32 ChildSliderAdjust::predLandmarkNum
	int32_t ___predLandmarkNum_27;
};

// DevicePoseManager
struct DevicePoseManager_t6DB16271316039E99F4EBFD596A637CEB4439F90  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// Vuforia.AnchorBehaviour DevicePoseManager::AnchorBehaviour
	AnchorBehaviour_t81952CE5FBF39AD5C2F0C5E2FE109B0B10A2824F* ___AnchorBehaviour_4;
	// DevicePoseManager/DevicePoseResetEvent DevicePoseManager::DevicePoseReset
	DevicePoseResetEvent_tAC0B6D678A899DFD6B5422B6A574C27C60C9280C* ___DevicePoseReset_5;
	// Vuforia.TargetStatus DevicePoseManager::TargetStatus
	TargetStatus_t5D866F1CAA9D70E5B66D532E69B190EA3BAAC4B0 ___TargetStatus_6;
	// System.Timers.Timer DevicePoseManager::mTimer
	Timer_t10D85D58F4AC0CF80C625D0124B12098CE540A8B* ___mTimer_10;
	// System.Boolean DevicePoseManager::mTimerFinished
	bool ___mTimerFinished_11;
};

// FemaleSliderAdjust
struct FemaleSliderAdjust_t6CC4FA9B9643A8D49EE97BE27C96A8348113D837  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.GameObject FemaleSliderAdjust::model
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___model_4;
	// UnityEngine.TextAsset FemaleSliderAdjust::pcaDataAsset
	TextAsset_t2C64E93DA366D9DE5A8209E1802FA4884AC1BD69* ___pcaDataAsset_5;
	// UnityEngine.TextAsset FemaleSliderAdjust::meanLandmarkDataAsset
	TextAsset_t2C64E93DA366D9DE5A8209E1802FA4884AC1BD69* ___meanLandmarkDataAsset_6;
	// UnityEngine.TextAsset FemaleSliderAdjust::correctVertexOrderDataAsset
	TextAsset_t2C64E93DA366D9DE5A8209E1802FA4884AC1BD69* ___correctVertexOrderDataAsset_7;
	// UnityEngine.UI.Slider FemaleSliderAdjust::sliderBMI
	Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* ___sliderBMI_8;
	// UnityEngine.UI.Slider FemaleSliderAdjust::sliderStature
	Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* ___sliderStature_9;
	// UnityEngine.UI.Slider FemaleSliderAdjust::sliderSittingHeightStat
	Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* ___sliderSittingHeightStat_10;
	// UnityEngine.UI.Slider FemaleSliderAdjust::sliderAge
	Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* ___sliderAge_11;
	// UnityEngine.UI.Slider FemaleSliderAdjust::sliderRotation
	Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* ___sliderRotation_12;
	// TMPro.TextMeshProUGUI FemaleSliderAdjust::lbBMI
	TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* ___lbBMI_13;
	// TMPro.TextMeshProUGUI FemaleSliderAdjust::lbStature
	TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* ___lbStature_14;
	// TMPro.TextMeshProUGUI FemaleSliderAdjust::lbSittingHeightStat
	TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* ___lbSittingHeightStat_15;
	// TMPro.TextMeshProUGUI FemaleSliderAdjust::lbAge
	TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* ___lbAge_16;
	// TMPro.TextMeshProUGUI FemaleSliderAdjust::lbRotation
	TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* ___lbRotation_17;
	// UnityEngine.UI.Text FemaleSliderAdjust::landmarkButtonText
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___landmarkButtonText_18;
	// System.Boolean FemaleSliderAdjust::areLandmarksDisplayed
	bool ___areLandmarksDisplayed_19;
	// System.Collections.Generic.List`1<System.Double[]> FemaleSliderAdjust::pcaData
	List_1_t64FC2174A52DBC518FB499976FF0BA043E643411* ___pcaData_20;
	// System.Collections.Generic.List`1<System.Double[]> FemaleSliderAdjust::landmarkData
	List_1_t64FC2174A52DBC518FB499976FF0BA043E643411* ___landmarkData_21;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> FemaleSliderAdjust::indexMap
	Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588* ___indexMap_22;
	// UnityEngine.Mesh FemaleSliderAdjust::mesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___mesh_23;
	// UnityEngine.Vector3[] FemaleSliderAdjust::vertices
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___vertices_24;
	// UnityEngine.Vector3[] FemaleSliderAdjust::correctVertices
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___correctVertices_25;
	// UnityEngine.Vector3[] FemaleSliderAdjust::meanVertices
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___meanVertices_26;
	// System.Int32 FemaleSliderAdjust::predAnthNum
	int32_t ___predAnthNum_27;
	// System.Int32 FemaleSliderAdjust::predLandmarkNum
	int32_t ___predLandmarkNum_28;
};

// LoadScene
struct LoadScene_t13789E834A08B06FF59FCCEA1BA366FC2965E335  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.String LoadScene::SceneToLoad
	String_t* ___SceneToLoad_4;
};

// MaleSliderAdjust
struct MaleSliderAdjust_tA7DA9AE649A08FBB56C79BDAD0CD6D563D1776F4  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.GameObject MaleSliderAdjust::model
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___model_4;
	// UnityEngine.TextAsset MaleSliderAdjust::pcaDataAsset
	TextAsset_t2C64E93DA366D9DE5A8209E1802FA4884AC1BD69* ___pcaDataAsset_5;
	// UnityEngine.TextAsset MaleSliderAdjust::meanLandmarkDataAsset
	TextAsset_t2C64E93DA366D9DE5A8209E1802FA4884AC1BD69* ___meanLandmarkDataAsset_6;
	// UnityEngine.TextAsset MaleSliderAdjust::correctVertexOrderDataAsset
	TextAsset_t2C64E93DA366D9DE5A8209E1802FA4884AC1BD69* ___correctVertexOrderDataAsset_7;
	// UnityEngine.UI.Slider MaleSliderAdjust::sliderBMI
	Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* ___sliderBMI_8;
	// UnityEngine.UI.Slider MaleSliderAdjust::sliderStature
	Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* ___sliderStature_9;
	// UnityEngine.UI.Slider MaleSliderAdjust::sliderSittingHeightStat
	Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* ___sliderSittingHeightStat_10;
	// UnityEngine.UI.Slider MaleSliderAdjust::sliderAge
	Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* ___sliderAge_11;
	// UnityEngine.UI.Slider MaleSliderAdjust::sliderRotation
	Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* ___sliderRotation_12;
	// TMPro.TextMeshProUGUI MaleSliderAdjust::lbBMI
	TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* ___lbBMI_13;
	// TMPro.TextMeshProUGUI MaleSliderAdjust::lbStature
	TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* ___lbStature_14;
	// TMPro.TextMeshProUGUI MaleSliderAdjust::lbSittingHeightStat
	TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* ___lbSittingHeightStat_15;
	// TMPro.TextMeshProUGUI MaleSliderAdjust::lbAge
	TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* ___lbAge_16;
	// TMPro.TextMeshProUGUI MaleSliderAdjust::lbRotation
	TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* ___lbRotation_17;
	// TMPro.TextMeshProUGUI MaleSliderAdjust::landmarkButtonText
	TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* ___landmarkButtonText_18;
	// System.Boolean MaleSliderAdjust::areLandmarksDisplayed
	bool ___areLandmarksDisplayed_19;
	// System.Collections.Generic.List`1<System.Double[]> MaleSliderAdjust::pcaData
	List_1_t64FC2174A52DBC518FB499976FF0BA043E643411* ___pcaData_20;
	// System.Collections.Generic.List`1<System.Double[]> MaleSliderAdjust::landmarkData
	List_1_t64FC2174A52DBC518FB499976FF0BA043E643411* ___landmarkData_21;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> MaleSliderAdjust::indexMap
	Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588* ___indexMap_22;
	// UnityEngine.Mesh MaleSliderAdjust::mesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___mesh_23;
	// UnityEngine.Vector3[] MaleSliderAdjust::vertices
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___vertices_24;
	// UnityEngine.Vector3[] MaleSliderAdjust::correctVertices
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___correctVertices_25;
	// UnityEngine.Vector3[] MaleSliderAdjust::meanVertices
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___meanVertices_26;
	// System.Int32 MaleSliderAdjust::predAnthNum
	int32_t ___predAnthNum_27;
	// System.Int32 MaleSliderAdjust::predLandmarkNum
	int32_t ___predLandmarkNum_28;
};

// MessageBox
struct MessageBox_t4E1C9DA3FBC7BAE7E61037CFCD99B2B5ED88EA3F  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.UI.Text[] MessageBox::mTextComponents
	TextU5BU5D_t1D476A037C4542F053D17ADAFA2723F311F9A353* ___mTextComponents_4;
	// MessageBox/DelegateMessageBoxButtonAction MessageBox::mDelegateMessageBoxAction
	DelegateMessageBoxButtonAction_tF92662C8A304ECF3D687E8AEB65D739E3FA46DC8* ___mDelegateMessageBoxAction_5;
};

// ModelPlacement
struct ModelPlacement_tEBA347DB86CB0A00DC780800C2CA5E1E438F7C8D  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Boolean ModelPlacement::<GroundPlaneHitReceived>k__BackingField
	bool ___U3CGroundPlaneHitReceivedU3Ek__BackingField_4;
	// UnityEngine.GameObject ModelPlacement::Model
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___Model_5;
	// UnityEngine.Camera ModelPlacement::mMainCamera
	Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ___mMainCamera_6;
	// System.Boolean ModelPlacement::mIsPlaced
	bool ___mIsPlaced_7;
	// System.Int32 ModelPlacement::mAutomaticHitTestFrameCount
	int32_t ___mAutomaticHitTestFrameCount_8;
	// UnityEngine.MeshRenderer ModelPlacement::mModelRenderer
	MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* ___mModelRenderer_9;
};

// SeatedAdultSliderAdjust
struct SeatedAdultSliderAdjust_tD13DF139016030F050F1A488125C2796C6DA9842  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.GameObject SeatedAdultSliderAdjust::model
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___model_4;
	// UnityEngine.TextAsset SeatedAdultSliderAdjust::pcaDataAsset
	TextAsset_t2C64E93DA366D9DE5A8209E1802FA4884AC1BD69* ___pcaDataAsset_5;
	// UnityEngine.TextAsset SeatedAdultSliderAdjust::meanLandmarkDataAsset
	TextAsset_t2C64E93DA366D9DE5A8209E1802FA4884AC1BD69* ___meanLandmarkDataAsset_6;
	// UnityEngine.TextAsset SeatedAdultSliderAdjust::correctVertexOrderDataAsset
	TextAsset_t2C64E93DA366D9DE5A8209E1802FA4884AC1BD69* ___correctVertexOrderDataAsset_7;
	// UnityEngine.UI.Slider SeatedAdultSliderAdjust::sliderBMI
	Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* ___sliderBMI_8;
	// UnityEngine.UI.Slider SeatedAdultSliderAdjust::sliderStature
	Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* ___sliderStature_9;
	// UnityEngine.UI.Slider SeatedAdultSliderAdjust::sliderSittingHeightStat
	Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* ___sliderSittingHeightStat_10;
	// UnityEngine.UI.Slider SeatedAdultSliderAdjust::sliderRotation
	Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* ___sliderRotation_11;
	// UnityEngine.UI.Slider SeatedAdultSliderAdjust::sliderAge
	Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* ___sliderAge_12;
	// TMPro.TextMeshProUGUI SeatedAdultSliderAdjust::lbAge
	TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* ___lbAge_13;
	// TMPro.TextMeshProUGUI SeatedAdultSliderAdjust::lbBMI
	TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* ___lbBMI_14;
	// TMPro.TextMeshProUGUI SeatedAdultSliderAdjust::lbStature
	TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* ___lbStature_15;
	// TMPro.TextMeshProUGUI SeatedAdultSliderAdjust::lbSittingHeightStat
	TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* ___lbSittingHeightStat_16;
	// TMPro.TextMeshProUGUI SeatedAdultSliderAdjust::lbRotation
	TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* ___lbRotation_17;
	// TMPro.TextMeshProUGUI SeatedAdultSliderAdjust::landmarkButtonText
	TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* ___landmarkButtonText_18;
	// TMPro.TMP_Dropdown SeatedAdultSliderAdjust::sex
	TMP_Dropdown_t73B37BFDA0D005451C7B750938AFB1748E5EA504* ___sex_19;
	// TMPro.TMP_Dropdown SeatedAdultSliderAdjust::study
	TMP_Dropdown_t73B37BFDA0D005451C7B750938AFB1748E5EA504* ___study_20;
	// System.Boolean SeatedAdultSliderAdjust::areLandmarksDisplayed
	bool ___areLandmarksDisplayed_21;
	// System.Collections.Generic.List`1<System.Double[]> SeatedAdultSliderAdjust::pcaData
	List_1_t64FC2174A52DBC518FB499976FF0BA043E643411* ___pcaData_22;
	// System.Collections.Generic.List`1<System.Double[]> SeatedAdultSliderAdjust::landmarkData
	List_1_t64FC2174A52DBC518FB499976FF0BA043E643411* ___landmarkData_23;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> SeatedAdultSliderAdjust::indexMap
	Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588* ___indexMap_24;
	// UnityEngine.Mesh SeatedAdultSliderAdjust::mesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___mesh_25;
	// UnityEngine.Vector3[] SeatedAdultSliderAdjust::vertices
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___vertices_26;
	// UnityEngine.Vector3[] SeatedAdultSliderAdjust::correctVertices
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___correctVertices_27;
	// UnityEngine.Vector3[] SeatedAdultSliderAdjust::meanVertices
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___meanVertices_28;
	// System.Int32 SeatedAdultSliderAdjust::predAnthNum
	int32_t ___predAnthNum_29;
	// System.Int32 SeatedAdultSliderAdjust::predLandmarkNum
	int32_t ___predLandmarkNum_30;
};

// SetParametersBttn
struct SetParametersBttn_t24DC16BB4CC551114C40E91C3E2CC43AF5CFF8AC  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.GameObject SetParametersBttn::planefinder
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___planefinder_4;
	// UnityEngine.GameObject SetParametersBttn::panel
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___panel_5;
	// UnityEngine.UI.Text SetParametersBttn::buttonText
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___buttonText_6;
};

// SetParametersBttn2D
struct SetParametersBttn2D_tC3C6EE0BF7080778A4172D82F865A7AB1E65E0E5  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.GameObject SetParametersBttn2D::panel
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___panel_4;
	// UnityEngine.UI.Text SetParametersBttn2D::buttonText
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___buttonText_5;
};

// TouchHandler
struct TouchHandler_tB817ACADDBAF3E5E6625F3D541FE580091B9758D  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Transform TouchHandler::AugmentationObject
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___AugmentationObject_4;
	// UnityEngine.Touch[] TouchHandler::mTouches
	TouchU5BU5D_t242545870BFCA81F368CCF82E00F9E2A7FB523B3* ___mTouches_8;
	// System.Boolean TouchHandler::mIsFirstFrameWithTwoTouches
	bool ___mIsFirstFrameWithTwoTouches_9;
	// System.Single TouchHandler::mCachedTouchAngle
	float ___mCachedTouchAngle_10;
	// System.Single TouchHandler::mCachedTouchDistance
	float ___mCachedTouchDistance_11;
	// System.Single TouchHandler::mCachedAugmentationScale
	float ___mCachedAugmentationScale_12;
	// UnityEngine.Vector3 TouchHandler::mCachedAugmentationRotation
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___mCachedAugmentationRotation_13;
};

struct TouchHandler_tB817ACADDBAF3E5E6625F3D541FE580091B9758D_StaticFields
{
	// System.Int32 TouchHandler::sLastTouchCount
	int32_t ___sLastTouchCount_5;
};

// UnityEngine.EventSystems.UIBehaviour
struct UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// UIManager
struct UIManager_t16825A2483574F37D7D47AB939A6FA639678B1F3  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.GameObject UIManager::panel
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___panel_4;
	// UnityEngine.UI.Text UIManager::Instructions
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___Instructions_5;
	// UnityEngine.EventSystems.PointerEventData UIManager::mPointerEventData
	PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* ___mPointerEventData_11;
	// DevicePoseManager UIManager::mDevicePoseManager
	DevicePoseManager_t6DB16271316039E99F4EBFD596A637CEB4439F90* ___mDevicePoseManager_12;
	// ModelPlacement UIManager::mModelPlacement
	ModelPlacement_tEBA347DB86CB0A00DC780800C2CA5E1E438F7C8D* ___mModelPlacement_13;
	// Vuforia.PlaneFinderBehaviour UIManager::mPlaneFinder
	PlaneFinderBehaviour_t23E09D9522086A00933FFF43F29F9D4CEE1578F5* ___mPlaneFinder_14;
	// System.Boolean UIManager::mIsAnchorTracking
	bool ___mIsAnchorTracking_15;
};

// Vuforia.VuforiaMonoBehaviour
struct VuforiaMonoBehaviour_tA15D7FADFFC01834965106EC085F8D90177AB89D  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// UnityEngine.UI.Graphic
struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931  : public UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D
{
	// UnityEngine.Material UnityEngine.UI.Graphic::m_Material
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_Material_6;
	// UnityEngine.Color UnityEngine.UI.Graphic::m_Color
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_Color_7;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipLayoutUpdate
	bool ___m_SkipLayoutUpdate_8;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipMaterialUpdate
	bool ___m_SkipMaterialUpdate_9;
	// System.Boolean UnityEngine.UI.Graphic::m_RaycastTarget
	bool ___m_RaycastTarget_10;
	// UnityEngine.Vector4 UnityEngine.UI.Graphic::m_RaycastPadding
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___m_RaycastPadding_11;
	// UnityEngine.RectTransform UnityEngine.UI.Graphic::m_RectTransform
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_RectTransform_12;
	// UnityEngine.CanvasRenderer UnityEngine.UI.Graphic::m_CanvasRenderer
	CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860* ___m_CanvasRenderer_13;
	// UnityEngine.Canvas UnityEngine.UI.Graphic::m_Canvas
	Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* ___m_Canvas_14;
	// System.Boolean UnityEngine.UI.Graphic::m_VertsDirty
	bool ___m_VertsDirty_15;
	// System.Boolean UnityEngine.UI.Graphic::m_MaterialDirty
	bool ___m_MaterialDirty_16;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyLayoutCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyLayoutCallback_17;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyVertsCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyVertsCallback_18;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyMaterialCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyMaterialCallback_19;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::m_CachedMesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___m_CachedMesh_22;
	// UnityEngine.Vector2[] UnityEngine.UI.Graphic::m_CachedUvs
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___m_CachedUvs_23;
	// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween> UnityEngine.UI.Graphic::m_ColorTweenRunner
	TweenRunner_1_t5BB0582F926E75E2FE795492679A6CF55A4B4BC4* ___m_ColorTweenRunner_24;
	// System.Boolean UnityEngine.UI.Graphic::<useLegacyMeshGeneration>k__BackingField
	bool ___U3CuseLegacyMeshGenerationU3Ek__BackingField_25;
};

struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931_StaticFields
{
	// UnityEngine.Material UnityEngine.UI.Graphic::s_DefaultUI
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___s_DefaultUI_4;
	// UnityEngine.Texture2D UnityEngine.UI.Graphic::s_WhiteTexture
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___s_WhiteTexture_5;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::s_Mesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___s_Mesh_20;
	// UnityEngine.UI.VertexHelper UnityEngine.UI.Graphic::s_VertexHelper
	VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE* ___s_VertexHelper_21;
};

// Vuforia.ObserverBehaviour
struct ObserverBehaviour_t5523404662BA53BE6118C49F6FFA9E19719115DB  : public VuforiaMonoBehaviour_tA15D7FADFFC01834965106EC085F8D90177AB89D
{
	// System.Boolean Vuforia.ObserverBehaviour::PreviewVisible
	bool ___PreviewVisible_4;
	// System.Boolean Vuforia.ObserverBehaviour::RuntimeOcclusion
	bool ___RuntimeOcclusion_5;
	// System.String Vuforia.ObserverBehaviour::mTrackableName
	String_t* ___mTrackableName_6;
	// System.Boolean Vuforia.ObserverBehaviour::mInitializedInEditor
	bool ___mInitializedInEditor_7;
	// System.Action`2<Vuforia.ObserverBehaviour,Vuforia.TargetStatus> Vuforia.ObserverBehaviour::OnTargetStatusChanged
	Action_2_tAC0AA9B652075EE1CE661500AC3373C7008D598F* ___OnTargetStatusChanged_8;
	// System.Action`1<Vuforia.ObserverBehaviour> Vuforia.ObserverBehaviour::OnBehaviourDestroyed
	Action_1_t49AD19663F9D6070EBF5FD37F8BEA43810805799* ___OnBehaviourDestroyed_9;
	// Vuforia.Internal.Observers.IObserver Vuforia.ObserverBehaviour::mObserver
	RuntimeObject* ___mObserver_10;
	// Vuforia.TargetStatus Vuforia.ObserverBehaviour::<TargetStatus>k__BackingField
	TargetStatus_t5D866F1CAA9D70E5B66D532E69B190EA3BAAC4B0 ___U3CTargetStatusU3Ek__BackingField_11;
};

// UnityEngine.UI.Selectable
struct Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712  : public UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D
{
	// System.Boolean UnityEngine.UI.Selectable::m_EnableCalled
	bool ___m_EnableCalled_6;
	// UnityEngine.UI.Navigation UnityEngine.UI.Selectable::m_Navigation
	Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C ___m_Navigation_7;
	// UnityEngine.UI.Selectable/Transition UnityEngine.UI.Selectable::m_Transition
	int32_t ___m_Transition_8;
	// UnityEngine.UI.ColorBlock UnityEngine.UI.Selectable::m_Colors
	ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11 ___m_Colors_9;
	// UnityEngine.UI.SpriteState UnityEngine.UI.Selectable::m_SpriteState
	SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD ___m_SpriteState_10;
	// UnityEngine.UI.AnimationTriggers UnityEngine.UI.Selectable::m_AnimationTriggers
	AnimationTriggers_tA0DC06F89C5280C6DD972F6F4C8A56D7F4F79074* ___m_AnimationTriggers_11;
	// System.Boolean UnityEngine.UI.Selectable::m_Interactable
	bool ___m_Interactable_12;
	// UnityEngine.UI.Graphic UnityEngine.UI.Selectable::m_TargetGraphic
	Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931* ___m_TargetGraphic_13;
	// System.Boolean UnityEngine.UI.Selectable::m_GroupsAllowInteraction
	bool ___m_GroupsAllowInteraction_14;
	// System.Int32 UnityEngine.UI.Selectable::m_CurrentIndex
	int32_t ___m_CurrentIndex_15;
	// System.Boolean UnityEngine.UI.Selectable::<isPointerInside>k__BackingField
	bool ___U3CisPointerInsideU3Ek__BackingField_16;
	// System.Boolean UnityEngine.UI.Selectable::<isPointerDown>k__BackingField
	bool ___U3CisPointerDownU3Ek__BackingField_17;
	// System.Boolean UnityEngine.UI.Selectable::<hasSelection>k__BackingField
	bool ___U3ChasSelectionU3Ek__BackingField_18;
	// System.Collections.Generic.List`1<UnityEngine.CanvasGroup> UnityEngine.UI.Selectable::m_CanvasGroupCache
	List_1_t2CDCA768E7F493F5EDEBC75AEB200FD621354E35* ___m_CanvasGroupCache_19;
};

struct Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712_StaticFields
{
	// UnityEngine.UI.Selectable[] UnityEngine.UI.Selectable::s_Selectables
	SelectableU5BU5D_t4160E135F02A40F75A63F787D36F31FEC6FE91A9* ___s_Selectables_4;
	// System.Int32 UnityEngine.UI.Selectable::s_SelectableCount
	int32_t ___s_SelectableCount_5;
};

// Vuforia.SmartTerrainBehaviour
struct SmartTerrainBehaviour_t93ADE8459EF8E417847C0358E2E2F614740AC287  : public VuforiaMonoBehaviour_tA15D7FADFFC01834965106EC085F8D90177AB89D
{
};

// Vuforia.VuforiaBehaviour
struct VuforiaBehaviour_t53608E2BEC77029C0140CB1E88A0B186FC5E76C6  : public VuforiaMonoBehaviour_tA15D7FADFFC01834965106EC085F8D90177AB89D
{
	// Vuforia.Internal.Core.IEngine Vuforia.VuforiaBehaviour::mEngine
	RuntimeObject* ___mEngine_5;
	// Vuforia.IObserverRegistry Vuforia.VuforiaBehaviour::mObserversRegistry
	RuntimeObject* ___mObserversRegistry_6;
	// Vuforia.WorldCenterMode Vuforia.VuforiaBehaviour::mWorldCenterMode
	int32_t ___mWorldCenterMode_7;
	// Vuforia.ObserverBehaviour Vuforia.VuforiaBehaviour::mWorldCenter
	ObserverBehaviour_t5523404662BA53BE6118C49F6FFA9E19719115DB* ___mWorldCenter_8;
	// Vuforia.CameraDevice Vuforia.VuforiaBehaviour::<CameraDevice>k__BackingField
	CameraDevice_t34ADAC91596592865E992E89542B1B6F88EAAB27* ___U3CCameraDeviceU3Ek__BackingField_9;
	// Vuforia.ObserverFactory Vuforia.VuforiaBehaviour::<ObserverFactory>k__BackingField
	ObserverFactory_t15303B50E9714D21517E15020805420A68418285* ___U3CObserverFactoryU3Ek__BackingField_10;
	// Vuforia.DevicePoseBehaviour Vuforia.VuforiaBehaviour::<DevicePoseBehaviour>k__BackingField
	DevicePoseBehaviour_tB66D2A5B7C7DA1929EC742544831049B124BD642* ___U3CDevicePoseBehaviourU3Ek__BackingField_11;
	// Vuforia.VideoBackground Vuforia.VuforiaBehaviour::<VideoBackground>k__BackingField
	VideoBackground_tC65F4B5FBE6A45691D21DBA8F7C5DB23CC4ED7F1* ___U3CVideoBackgroundU3Ek__BackingField_12;
	// Vuforia.World Vuforia.VuforiaBehaviour::<World>k__BackingField
	World_t0332C3F77BBFBA826A13D263DAED199D01BCE050* ___U3CWorldU3Ek__BackingField_13;
};

struct VuforiaBehaviour_t53608E2BEC77029C0140CB1E88A0B186FC5E76C6_StaticFields
{
	// Vuforia.VuforiaBehaviour Vuforia.VuforiaBehaviour::sInstance
	VuforiaBehaviour_t53608E2BEC77029C0140CB1E88A0B186FC5E76C6* ___sInstance_4;
};

// Vuforia.AnchorBehaviour
struct AnchorBehaviour_t81952CE5FBF39AD5C2F0C5E2FE109B0B10A2824F  : public ObserverBehaviour_t5523404662BA53BE6118C49F6FFA9E19719115DB
{
	// Vuforia.StageType Vuforia.AnchorBehaviour::mSelectedStageType
	int32_t ___mSelectedStageType_12;
	// UnityEngine.GameObject Vuforia.AnchorBehaviour::mPlaneReference
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___mPlaneReference_13;
	// UnityEngine.GameObject Vuforia.AnchorBehaviour::mMidAirReference
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___mMidAirReference_14;
	// Vuforia.AnchorPreview Vuforia.AnchorBehaviour::mPreview
	AnchorPreview_t2BCEF439B9CBCCA77D1B5971C38EEA72D0C35384* ___mPreview_15;
};

// UnityEngine.UI.Button
struct Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098  : public Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712
{
	// UnityEngine.UI.Button/ButtonClickedEvent UnityEngine.UI.Button::m_OnClick
	ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C* ___m_OnClick_20;
};

// Vuforia.DevicePoseBehaviour
struct DevicePoseBehaviour_tB66D2A5B7C7DA1929EC742544831049B124BD642  : public ObserverBehaviour_t5523404662BA53BE6118C49F6FFA9E19719115DB
{
	// Vuforia.Internal.Observers.DeviceObserver Vuforia.DevicePoseBehaviour::mDeviceObserver
	DeviceObserver_t567C44DCB098882C1CB8B95C15B7523E7D1D1556* ___mDeviceObserver_12;
};

// UnityEngine.UI.MaskableGraphic
struct MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E  : public Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931
{
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculateStencil
	bool ___m_ShouldRecalculateStencil_26;
	// UnityEngine.Material UnityEngine.UI.MaskableGraphic::m_MaskMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_MaskMaterial_27;
	// UnityEngine.UI.RectMask2D UnityEngine.UI.MaskableGraphic::m_ParentMask
	RectMask2D_tACF92BE999C791A665BD1ADEABF5BCEB82846670* ___m_ParentMask_28;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_Maskable
	bool ___m_Maskable_29;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IsMaskingGraphic
	bool ___m_IsMaskingGraphic_30;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IncludeForMasking
	bool ___m_IncludeForMasking_31;
	// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent UnityEngine.UI.MaskableGraphic::m_OnCullStateChanged
	CullStateChangedEvent_t6073CD0D951EC1256BF74B8F9107D68FC89B99B8* ___m_OnCullStateChanged_32;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculate
	bool ___m_ShouldRecalculate_33;
	// System.Int32 UnityEngine.UI.MaskableGraphic::m_StencilValue
	int32_t ___m_StencilValue_34;
	// UnityEngine.Vector3[] UnityEngine.UI.MaskableGraphic::m_Corners
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___m_Corners_35;
};

// Vuforia.PlaneFinderBehaviour
struct PlaneFinderBehaviour_t23E09D9522086A00933FFF43F29F9D4CEE1578F5  : public SmartTerrainBehaviour_t93ADE8459EF8E417847C0358E2E2F614740AC287
{
	// UnityEngine.GameObject Vuforia.PlaneFinderBehaviour::PlaneIndicator
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___PlaneIndicator_4;
	// System.Single Vuforia.PlaneFinderBehaviour::Height
	float ___Height_5;
	// Vuforia.HitTestEvent Vuforia.PlaneFinderBehaviour::OnInteractiveHitTest
	HitTestEvent_t549C8121F2017A01FF40B8E5A2930245B770DA10* ___OnInteractiveHitTest_6;
	// Vuforia.HitTestEvent Vuforia.PlaneFinderBehaviour::OnAutomaticHitTest
	HitTestEvent_t549C8121F2017A01FF40B8E5A2930245B770DA10* ___OnAutomaticHitTest_7;
	// System.Boolean Vuforia.PlaneFinderBehaviour::mDisplayAdvanced
	bool ___mDisplayAdvanced_8;
	// Vuforia.HitTestMode Vuforia.PlaneFinderBehaviour::mHitTestMode
	int32_t ___mHitTestMode_9;
	// Vuforia.Internal.Observers.DeviceObserver Vuforia.PlaneFinderBehaviour::mDeviceObserver
	DeviceObserver_t567C44DCB098882C1CB8B95C15B7523E7D1D1556* ___mDeviceObserver_10;
	// Vuforia.IAnchorProvider Vuforia.PlaneFinderBehaviour::mAnchorProvider
	RuntimeObject* ___mAnchorProvider_11;
	// System.Single Vuforia.PlaneFinderBehaviour::mLastUpdate
	float ___mLastUpdate_12;
	// System.Boolean Vuforia.PlaneFinderBehaviour::mPreviouslyVisible
	bool ___mPreviouslyVisible_13;
};

struct PlaneFinderBehaviour_t23E09D9522086A00933FFF43F29F9D4CEE1578F5_StaticFields
{
	// UnityEngine.Vector2 Vuforia.PlaneFinderBehaviour::VIEWPORT_CENTER
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___VIEWPORT_CENTER_14;
};

// UnityEngine.UI.Slider
struct Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F  : public Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712
{
	// UnityEngine.RectTransform UnityEngine.UI.Slider::m_FillRect
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_FillRect_20;
	// UnityEngine.RectTransform UnityEngine.UI.Slider::m_HandleRect
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_HandleRect_21;
	// UnityEngine.UI.Slider/Direction UnityEngine.UI.Slider::m_Direction
	int32_t ___m_Direction_22;
	// System.Single UnityEngine.UI.Slider::m_MinValue
	float ___m_MinValue_23;
	// System.Single UnityEngine.UI.Slider::m_MaxValue
	float ___m_MaxValue_24;
	// System.Boolean UnityEngine.UI.Slider::m_WholeNumbers
	bool ___m_WholeNumbers_25;
	// System.Single UnityEngine.UI.Slider::m_Value
	float ___m_Value_26;
	// UnityEngine.UI.Slider/SliderEvent UnityEngine.UI.Slider::m_OnValueChanged
	SliderEvent_t92A82EF6C62E15AF92B640FE2D960E877E8C6555* ___m_OnValueChanged_27;
	// UnityEngine.UI.Image UnityEngine.UI.Slider::m_FillImage
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* ___m_FillImage_28;
	// UnityEngine.Transform UnityEngine.UI.Slider::m_FillTransform
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___m_FillTransform_29;
	// UnityEngine.RectTransform UnityEngine.UI.Slider::m_FillContainerRect
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_FillContainerRect_30;
	// UnityEngine.Transform UnityEngine.UI.Slider::m_HandleTransform
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___m_HandleTransform_31;
	// UnityEngine.RectTransform UnityEngine.UI.Slider::m_HandleContainerRect
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_HandleContainerRect_32;
	// UnityEngine.Vector2 UnityEngine.UI.Slider::m_Offset
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_Offset_33;
	// UnityEngine.DrivenRectTransformTracker UnityEngine.UI.Slider::m_Tracker
	DrivenRectTransformTracker_tFB0706C933E3C68E4F377C204FCEEF091F1EE0B1 ___m_Tracker_34;
	// System.Boolean UnityEngine.UI.Slider::m_DelayedUpdateVisuals
	bool ___m_DelayedUpdateVisuals_35;
};

// TMPro.TMP_Dropdown
struct TMP_Dropdown_t73B37BFDA0D005451C7B750938AFB1748E5EA504  : public Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712
{
	// UnityEngine.RectTransform TMPro.TMP_Dropdown::m_Template
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_Template_20;
	// TMPro.TMP_Text TMPro.TMP_Dropdown::m_CaptionText
	TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* ___m_CaptionText_21;
	// UnityEngine.UI.Image TMPro.TMP_Dropdown::m_CaptionImage
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* ___m_CaptionImage_22;
	// UnityEngine.UI.Graphic TMPro.TMP_Dropdown::m_Placeholder
	Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931* ___m_Placeholder_23;
	// TMPro.TMP_Text TMPro.TMP_Dropdown::m_ItemText
	TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* ___m_ItemText_24;
	// UnityEngine.UI.Image TMPro.TMP_Dropdown::m_ItemImage
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* ___m_ItemImage_25;
	// System.Int32 TMPro.TMP_Dropdown::m_Value
	int32_t ___m_Value_26;
	// TMPro.TMP_Dropdown/OptionDataList TMPro.TMP_Dropdown::m_Options
	OptionDataList_tF66EA4801BFA499F010E6EFF89ED760BF4F0BEE1* ___m_Options_27;
	// TMPro.TMP_Dropdown/DropdownEvent TMPro.TMP_Dropdown::m_OnValueChanged
	DropdownEvent_tFD4609E80240BC887A6D31F9F3C252A8A6843E91* ___m_OnValueChanged_28;
	// System.Single TMPro.TMP_Dropdown::m_AlphaFadeSpeed
	float ___m_AlphaFadeSpeed_29;
	// UnityEngine.GameObject TMPro.TMP_Dropdown::m_Dropdown
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_Dropdown_30;
	// UnityEngine.GameObject TMPro.TMP_Dropdown::m_Blocker
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_Blocker_31;
	// System.Collections.Generic.List`1<TMPro.TMP_Dropdown/DropdownItem> TMPro.TMP_Dropdown::m_Items
	List_1_tA7EEECF976A6B4957450A4D235070C9324ED1A97* ___m_Items_32;
	// TMPro.TweenRunner`1<TMPro.FloatTween> TMPro.TMP_Dropdown::m_AlphaTweenRunner
	TweenRunner_1_tF277B20625C8B1939DC85508C4679C690757395E* ___m_AlphaTweenRunner_33;
	// System.Boolean TMPro.TMP_Dropdown::validTemplate
	bool ___validTemplate_34;
	// UnityEngine.Coroutine TMPro.TMP_Dropdown::m_Coroutine
	Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* ___m_Coroutine_35;
};

struct TMP_Dropdown_t73B37BFDA0D005451C7B750938AFB1748E5EA504_StaticFields
{
	// TMPro.TMP_Dropdown/OptionData TMPro.TMP_Dropdown::s_NoOptionData
	OptionData_tFDFBCB4A5FB860E95AE46FDAC112DB4140A8525E* ___s_NoOptionData_36;
};

// TMPro.TMP_Text
struct TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9  : public MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E
{
	// System.String TMPro.TMP_Text::m_text
	String_t* ___m_text_36;
	// System.Boolean TMPro.TMP_Text::m_IsTextBackingStringDirty
	bool ___m_IsTextBackingStringDirty_37;
	// TMPro.ITextPreprocessor TMPro.TMP_Text::m_TextPreprocessor
	RuntimeObject* ___m_TextPreprocessor_38;
	// System.Boolean TMPro.TMP_Text::m_isRightToLeft
	bool ___m_isRightToLeft_39;
	// TMPro.TMP_FontAsset TMPro.TMP_Text::m_fontAsset
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___m_fontAsset_40;
	// TMPro.TMP_FontAsset TMPro.TMP_Text::m_currentFontAsset
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___m_currentFontAsset_41;
	// System.Boolean TMPro.TMP_Text::m_isSDFShader
	bool ___m_isSDFShader_42;
	// UnityEngine.Material TMPro.TMP_Text::m_sharedMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_sharedMaterial_43;
	// UnityEngine.Material TMPro.TMP_Text::m_currentMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_currentMaterial_44;
	// System.Int32 TMPro.TMP_Text::m_currentMaterialIndex
	int32_t ___m_currentMaterialIndex_48;
	// UnityEngine.Material[] TMPro.TMP_Text::m_fontSharedMaterials
	MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D* ___m_fontSharedMaterials_49;
	// UnityEngine.Material TMPro.TMP_Text::m_fontMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_fontMaterial_50;
	// UnityEngine.Material[] TMPro.TMP_Text::m_fontMaterials
	MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D* ___m_fontMaterials_51;
	// System.Boolean TMPro.TMP_Text::m_isMaterialDirty
	bool ___m_isMaterialDirty_52;
	// UnityEngine.Color32 TMPro.TMP_Text::m_fontColor32
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_fontColor32_53;
	// UnityEngine.Color TMPro.TMP_Text::m_fontColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_fontColor_54;
	// UnityEngine.Color32 TMPro.TMP_Text::m_underlineColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_underlineColor_56;
	// UnityEngine.Color32 TMPro.TMP_Text::m_strikethroughColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_strikethroughColor_57;
	// System.Boolean TMPro.TMP_Text::m_enableVertexGradient
	bool ___m_enableVertexGradient_58;
	// TMPro.ColorMode TMPro.TMP_Text::m_colorMode
	int32_t ___m_colorMode_59;
	// TMPro.VertexGradient TMPro.TMP_Text::m_fontColorGradient
	VertexGradient_t2C057B53C0EA6E987C2B7BAB0305E686DA1C9A8F ___m_fontColorGradient_60;
	// TMPro.TMP_ColorGradient TMPro.TMP_Text::m_fontColorGradientPreset
	TMP_ColorGradient_t17B51752B4E9499A1FF7D875DCEC1D15A0F4AEBB* ___m_fontColorGradientPreset_61;
	// TMPro.TMP_SpriteAsset TMPro.TMP_Text::m_spriteAsset
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___m_spriteAsset_62;
	// System.Boolean TMPro.TMP_Text::m_tintAllSprites
	bool ___m_tintAllSprites_63;
	// System.Boolean TMPro.TMP_Text::m_tintSprite
	bool ___m_tintSprite_64;
	// UnityEngine.Color32 TMPro.TMP_Text::m_spriteColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_spriteColor_65;
	// TMPro.TMP_StyleSheet TMPro.TMP_Text::m_StyleSheet
	TMP_StyleSheet_t70C71699F5CB2D855C361DBB78A44C901236C859* ___m_StyleSheet_66;
	// TMPro.TMP_Style TMPro.TMP_Text::m_TextStyle
	TMP_Style_tA9E5B1B35EBFE24EF980CEA03251B638282E120C* ___m_TextStyle_67;
	// System.Int32 TMPro.TMP_Text::m_TextStyleHashCode
	int32_t ___m_TextStyleHashCode_68;
	// System.Boolean TMPro.TMP_Text::m_overrideHtmlColors
	bool ___m_overrideHtmlColors_69;
	// UnityEngine.Color32 TMPro.TMP_Text::m_faceColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_faceColor_70;
	// UnityEngine.Color32 TMPro.TMP_Text::m_outlineColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_outlineColor_71;
	// System.Single TMPro.TMP_Text::m_outlineWidth
	float ___m_outlineWidth_72;
	// System.Single TMPro.TMP_Text::m_fontSize
	float ___m_fontSize_73;
	// System.Single TMPro.TMP_Text::m_currentFontSize
	float ___m_currentFontSize_74;
	// System.Single TMPro.TMP_Text::m_fontSizeBase
	float ___m_fontSizeBase_75;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.TMP_Text::m_sizeStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___m_sizeStack_76;
	// TMPro.FontWeight TMPro.TMP_Text::m_fontWeight
	int32_t ___m_fontWeight_77;
	// TMPro.FontWeight TMPro.TMP_Text::m_FontWeightInternal
	int32_t ___m_FontWeightInternal_78;
	// TMPro.TMP_TextProcessingStack`1<TMPro.FontWeight> TMPro.TMP_Text::m_FontWeightStack
	TMP_TextProcessingStack_1_tA5C8CED87DD9E73F6359E23B334FFB5B6F813FD4 ___m_FontWeightStack_79;
	// System.Boolean TMPro.TMP_Text::m_enableAutoSizing
	bool ___m_enableAutoSizing_80;
	// System.Single TMPro.TMP_Text::m_maxFontSize
	float ___m_maxFontSize_81;
	// System.Single TMPro.TMP_Text::m_minFontSize
	float ___m_minFontSize_82;
	// System.Int32 TMPro.TMP_Text::m_AutoSizeIterationCount
	int32_t ___m_AutoSizeIterationCount_83;
	// System.Int32 TMPro.TMP_Text::m_AutoSizeMaxIterationCount
	int32_t ___m_AutoSizeMaxIterationCount_84;
	// System.Boolean TMPro.TMP_Text::m_IsAutoSizePointSizeSet
	bool ___m_IsAutoSizePointSizeSet_85;
	// System.Single TMPro.TMP_Text::m_fontSizeMin
	float ___m_fontSizeMin_86;
	// System.Single TMPro.TMP_Text::m_fontSizeMax
	float ___m_fontSizeMax_87;
	// TMPro.FontStyles TMPro.TMP_Text::m_fontStyle
	int32_t ___m_fontStyle_88;
	// TMPro.FontStyles TMPro.TMP_Text::m_FontStyleInternal
	int32_t ___m_FontStyleInternal_89;
	// TMPro.TMP_FontStyleStack TMPro.TMP_Text::m_fontStyleStack
	TMP_FontStyleStack_t52885F172FADBC21346C835B5302167BDA8020DC ___m_fontStyleStack_90;
	// System.Boolean TMPro.TMP_Text::m_isUsingBold
	bool ___m_isUsingBold_91;
	// TMPro.HorizontalAlignmentOptions TMPro.TMP_Text::m_HorizontalAlignment
	int32_t ___m_HorizontalAlignment_92;
	// TMPro.VerticalAlignmentOptions TMPro.TMP_Text::m_VerticalAlignment
	int32_t ___m_VerticalAlignment_93;
	// TMPro.TextAlignmentOptions TMPro.TMP_Text::m_textAlignment
	int32_t ___m_textAlignment_94;
	// TMPro.HorizontalAlignmentOptions TMPro.TMP_Text::m_lineJustification
	int32_t ___m_lineJustification_95;
	// TMPro.TMP_TextProcessingStack`1<TMPro.HorizontalAlignmentOptions> TMPro.TMP_Text::m_lineJustificationStack
	TMP_TextProcessingStack_1_t243EA1B5D7FD2295D6533B953F0BBE8F52EFB8A0 ___m_lineJustificationStack_96;
	// UnityEngine.Vector3[] TMPro.TMP_Text::m_textContainerLocalCorners
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___m_textContainerLocalCorners_97;
	// System.Single TMPro.TMP_Text::m_characterSpacing
	float ___m_characterSpacing_98;
	// System.Single TMPro.TMP_Text::m_cSpacing
	float ___m_cSpacing_99;
	// System.Single TMPro.TMP_Text::m_monoSpacing
	float ___m_monoSpacing_100;
	// System.Single TMPro.TMP_Text::m_wordSpacing
	float ___m_wordSpacing_101;
	// System.Single TMPro.TMP_Text::m_lineSpacing
	float ___m_lineSpacing_102;
	// System.Single TMPro.TMP_Text::m_lineSpacingDelta
	float ___m_lineSpacingDelta_103;
	// System.Single TMPro.TMP_Text::m_lineHeight
	float ___m_lineHeight_104;
	// System.Boolean TMPro.TMP_Text::m_IsDrivenLineSpacing
	bool ___m_IsDrivenLineSpacing_105;
	// System.Single TMPro.TMP_Text::m_lineSpacingMax
	float ___m_lineSpacingMax_106;
	// System.Single TMPro.TMP_Text::m_paragraphSpacing
	float ___m_paragraphSpacing_107;
	// System.Single TMPro.TMP_Text::m_charWidthMaxAdj
	float ___m_charWidthMaxAdj_108;
	// System.Single TMPro.TMP_Text::m_charWidthAdjDelta
	float ___m_charWidthAdjDelta_109;
	// System.Boolean TMPro.TMP_Text::m_enableWordWrapping
	bool ___m_enableWordWrapping_110;
	// System.Boolean TMPro.TMP_Text::m_isCharacterWrappingEnabled
	bool ___m_isCharacterWrappingEnabled_111;
	// System.Boolean TMPro.TMP_Text::m_isNonBreakingSpace
	bool ___m_isNonBreakingSpace_112;
	// System.Boolean TMPro.TMP_Text::m_isIgnoringAlignment
	bool ___m_isIgnoringAlignment_113;
	// System.Single TMPro.TMP_Text::m_wordWrappingRatios
	float ___m_wordWrappingRatios_114;
	// TMPro.TextOverflowModes TMPro.TMP_Text::m_overflowMode
	int32_t ___m_overflowMode_115;
	// System.Int32 TMPro.TMP_Text::m_firstOverflowCharacterIndex
	int32_t ___m_firstOverflowCharacterIndex_116;
	// TMPro.TMP_Text TMPro.TMP_Text::m_linkedTextComponent
	TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* ___m_linkedTextComponent_117;
	// TMPro.TMP_Text TMPro.TMP_Text::parentLinkedComponent
	TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* ___parentLinkedComponent_118;
	// System.Boolean TMPro.TMP_Text::m_isTextTruncated
	bool ___m_isTextTruncated_119;
	// System.Boolean TMPro.TMP_Text::m_enableKerning
	bool ___m_enableKerning_120;
	// System.Single TMPro.TMP_Text::m_GlyphHorizontalAdvanceAdjustment
	float ___m_GlyphHorizontalAdvanceAdjustment_121;
	// System.Boolean TMPro.TMP_Text::m_enableExtraPadding
	bool ___m_enableExtraPadding_122;
	// System.Boolean TMPro.TMP_Text::checkPaddingRequired
	bool ___checkPaddingRequired_123;
	// System.Boolean TMPro.TMP_Text::m_isRichText
	bool ___m_isRichText_124;
	// System.Boolean TMPro.TMP_Text::m_parseCtrlCharacters
	bool ___m_parseCtrlCharacters_125;
	// System.Boolean TMPro.TMP_Text::m_isOverlay
	bool ___m_isOverlay_126;
	// System.Boolean TMPro.TMP_Text::m_isOrthographic
	bool ___m_isOrthographic_127;
	// System.Boolean TMPro.TMP_Text::m_isCullingEnabled
	bool ___m_isCullingEnabled_128;
	// System.Boolean TMPro.TMP_Text::m_isMaskingEnabled
	bool ___m_isMaskingEnabled_129;
	// System.Boolean TMPro.TMP_Text::isMaskUpdateRequired
	bool ___isMaskUpdateRequired_130;
	// System.Boolean TMPro.TMP_Text::m_ignoreCulling
	bool ___m_ignoreCulling_131;
	// TMPro.TextureMappingOptions TMPro.TMP_Text::m_horizontalMapping
	int32_t ___m_horizontalMapping_132;
	// TMPro.TextureMappingOptions TMPro.TMP_Text::m_verticalMapping
	int32_t ___m_verticalMapping_133;
	// System.Single TMPro.TMP_Text::m_uvLineOffset
	float ___m_uvLineOffset_134;
	// TMPro.TextRenderFlags TMPro.TMP_Text::m_renderMode
	int32_t ___m_renderMode_135;
	// TMPro.VertexSortingOrder TMPro.TMP_Text::m_geometrySortingOrder
	int32_t ___m_geometrySortingOrder_136;
	// System.Boolean TMPro.TMP_Text::m_IsTextObjectScaleStatic
	bool ___m_IsTextObjectScaleStatic_137;
	// System.Boolean TMPro.TMP_Text::m_VertexBufferAutoSizeReduction
	bool ___m_VertexBufferAutoSizeReduction_138;
	// System.Int32 TMPro.TMP_Text::m_firstVisibleCharacter
	int32_t ___m_firstVisibleCharacter_139;
	// System.Int32 TMPro.TMP_Text::m_maxVisibleCharacters
	int32_t ___m_maxVisibleCharacters_140;
	// System.Int32 TMPro.TMP_Text::m_maxVisibleWords
	int32_t ___m_maxVisibleWords_141;
	// System.Int32 TMPro.TMP_Text::m_maxVisibleLines
	int32_t ___m_maxVisibleLines_142;
	// System.Boolean TMPro.TMP_Text::m_useMaxVisibleDescender
	bool ___m_useMaxVisibleDescender_143;
	// System.Int32 TMPro.TMP_Text::m_pageToDisplay
	int32_t ___m_pageToDisplay_144;
	// System.Boolean TMPro.TMP_Text::m_isNewPage
	bool ___m_isNewPage_145;
	// UnityEngine.Vector4 TMPro.TMP_Text::m_margin
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___m_margin_146;
	// System.Single TMPro.TMP_Text::m_marginLeft
	float ___m_marginLeft_147;
	// System.Single TMPro.TMP_Text::m_marginRight
	float ___m_marginRight_148;
	// System.Single TMPro.TMP_Text::m_marginWidth
	float ___m_marginWidth_149;
	// System.Single TMPro.TMP_Text::m_marginHeight
	float ___m_marginHeight_150;
	// System.Single TMPro.TMP_Text::m_width
	float ___m_width_151;
	// TMPro.TMP_TextInfo TMPro.TMP_Text::m_textInfo
	TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* ___m_textInfo_152;
	// System.Boolean TMPro.TMP_Text::m_havePropertiesChanged
	bool ___m_havePropertiesChanged_153;
	// System.Boolean TMPro.TMP_Text::m_isUsingLegacyAnimationComponent
	bool ___m_isUsingLegacyAnimationComponent_154;
	// UnityEngine.Transform TMPro.TMP_Text::m_transform
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___m_transform_155;
	// UnityEngine.RectTransform TMPro.TMP_Text::m_rectTransform
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_rectTransform_156;
	// UnityEngine.Vector2 TMPro.TMP_Text::m_PreviousRectTransformSize
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_PreviousRectTransformSize_157;
	// UnityEngine.Vector2 TMPro.TMP_Text::m_PreviousPivotPosition
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_PreviousPivotPosition_158;
	// System.Boolean TMPro.TMP_Text::<autoSizeTextContainer>k__BackingField
	bool ___U3CautoSizeTextContainerU3Ek__BackingField_159;
	// System.Boolean TMPro.TMP_Text::m_autoSizeTextContainer
	bool ___m_autoSizeTextContainer_160;
	// UnityEngine.Mesh TMPro.TMP_Text::m_mesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___m_mesh_161;
	// System.Boolean TMPro.TMP_Text::m_isVolumetricText
	bool ___m_isVolumetricText_162;
	// System.Action`1<TMPro.TMP_TextInfo> TMPro.TMP_Text::OnPreRenderText
	Action_1_tB93AB717F9D419A1BEC832FF76E74EAA32184CC1* ___OnPreRenderText_165;
	// TMPro.TMP_SpriteAnimator TMPro.TMP_Text::m_spriteAnimator
	TMP_SpriteAnimator_t2E0F016A61CA343E3222FF51E7CF0E53F9F256E4* ___m_spriteAnimator_166;
	// System.Single TMPro.TMP_Text::m_flexibleHeight
	float ___m_flexibleHeight_167;
	// System.Single TMPro.TMP_Text::m_flexibleWidth
	float ___m_flexibleWidth_168;
	// System.Single TMPro.TMP_Text::m_minWidth
	float ___m_minWidth_169;
	// System.Single TMPro.TMP_Text::m_minHeight
	float ___m_minHeight_170;
	// System.Single TMPro.TMP_Text::m_maxWidth
	float ___m_maxWidth_171;
	// System.Single TMPro.TMP_Text::m_maxHeight
	float ___m_maxHeight_172;
	// UnityEngine.UI.LayoutElement TMPro.TMP_Text::m_LayoutElement
	LayoutElement_tB1F24CC11AF4AA87015C8D8EE06D22349C5BF40A* ___m_LayoutElement_173;
	// System.Single TMPro.TMP_Text::m_preferredWidth
	float ___m_preferredWidth_174;
	// System.Single TMPro.TMP_Text::m_renderedWidth
	float ___m_renderedWidth_175;
	// System.Boolean TMPro.TMP_Text::m_isPreferredWidthDirty
	bool ___m_isPreferredWidthDirty_176;
	// System.Single TMPro.TMP_Text::m_preferredHeight
	float ___m_preferredHeight_177;
	// System.Single TMPro.TMP_Text::m_renderedHeight
	float ___m_renderedHeight_178;
	// System.Boolean TMPro.TMP_Text::m_isPreferredHeightDirty
	bool ___m_isPreferredHeightDirty_179;
	// System.Boolean TMPro.TMP_Text::m_isCalculatingPreferredValues
	bool ___m_isCalculatingPreferredValues_180;
	// System.Int32 TMPro.TMP_Text::m_layoutPriority
	int32_t ___m_layoutPriority_181;
	// System.Boolean TMPro.TMP_Text::m_isLayoutDirty
	bool ___m_isLayoutDirty_182;
	// System.Boolean TMPro.TMP_Text::m_isAwake
	bool ___m_isAwake_183;
	// System.Boolean TMPro.TMP_Text::m_isWaitingOnResourceLoad
	bool ___m_isWaitingOnResourceLoad_184;
	// TMPro.TMP_Text/TextInputSources TMPro.TMP_Text::m_inputSource
	int32_t ___m_inputSource_185;
	// System.Single TMPro.TMP_Text::m_fontScaleMultiplier
	float ___m_fontScaleMultiplier_186;
	// System.Single TMPro.TMP_Text::tag_LineIndent
	float ___tag_LineIndent_190;
	// System.Single TMPro.TMP_Text::tag_Indent
	float ___tag_Indent_191;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.TMP_Text::m_indentStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___m_indentStack_192;
	// System.Boolean TMPro.TMP_Text::tag_NoParsing
	bool ___tag_NoParsing_193;
	// System.Boolean TMPro.TMP_Text::m_isParsingText
	bool ___m_isParsingText_194;
	// UnityEngine.Matrix4x4 TMPro.TMP_Text::m_FXMatrix
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___m_FXMatrix_195;
	// System.Boolean TMPro.TMP_Text::m_isFXMatrixSet
	bool ___m_isFXMatrixSet_196;
	// TMPro.TMP_Text/UnicodeChar[] TMPro.TMP_Text::m_TextProcessingArray
	UnicodeCharU5BU5D_t67F27D09F8EB28D2C42DFF16FE60054F157012F5* ___m_TextProcessingArray_197;
	// System.Int32 TMPro.TMP_Text::m_InternalTextProcessingArraySize
	int32_t ___m_InternalTextProcessingArraySize_198;
	// TMPro.TMP_CharacterInfo[] TMPro.TMP_Text::m_internalCharacterInfo
	TMP_CharacterInfoU5BU5D_t297D56FCF66DAA99D8FEA7C30F9F3926902C5B99* ___m_internalCharacterInfo_199;
	// System.Int32 TMPro.TMP_Text::m_totalCharacterCount
	int32_t ___m_totalCharacterCount_200;
	// System.Int32 TMPro.TMP_Text::m_characterCount
	int32_t ___m_characterCount_207;
	// System.Int32 TMPro.TMP_Text::m_firstCharacterOfLine
	int32_t ___m_firstCharacterOfLine_208;
	// System.Int32 TMPro.TMP_Text::m_firstVisibleCharacterOfLine
	int32_t ___m_firstVisibleCharacterOfLine_209;
	// System.Int32 TMPro.TMP_Text::m_lastCharacterOfLine
	int32_t ___m_lastCharacterOfLine_210;
	// System.Int32 TMPro.TMP_Text::m_lastVisibleCharacterOfLine
	int32_t ___m_lastVisibleCharacterOfLine_211;
	// System.Int32 TMPro.TMP_Text::m_lineNumber
	int32_t ___m_lineNumber_212;
	// System.Int32 TMPro.TMP_Text::m_lineVisibleCharacterCount
	int32_t ___m_lineVisibleCharacterCount_213;
	// System.Int32 TMPro.TMP_Text::m_pageNumber
	int32_t ___m_pageNumber_214;
	// System.Single TMPro.TMP_Text::m_PageAscender
	float ___m_PageAscender_215;
	// System.Single TMPro.TMP_Text::m_maxTextAscender
	float ___m_maxTextAscender_216;
	// System.Single TMPro.TMP_Text::m_maxCapHeight
	float ___m_maxCapHeight_217;
	// System.Single TMPro.TMP_Text::m_ElementAscender
	float ___m_ElementAscender_218;
	// System.Single TMPro.TMP_Text::m_ElementDescender
	float ___m_ElementDescender_219;
	// System.Single TMPro.TMP_Text::m_maxLineAscender
	float ___m_maxLineAscender_220;
	// System.Single TMPro.TMP_Text::m_maxLineDescender
	float ___m_maxLineDescender_221;
	// System.Single TMPro.TMP_Text::m_startOfLineAscender
	float ___m_startOfLineAscender_222;
	// System.Single TMPro.TMP_Text::m_startOfLineDescender
	float ___m_startOfLineDescender_223;
	// System.Single TMPro.TMP_Text::m_lineOffset
	float ___m_lineOffset_224;
	// TMPro.Extents TMPro.TMP_Text::m_meshExtents
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___m_meshExtents_225;
	// UnityEngine.Color32 TMPro.TMP_Text::m_htmlColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_htmlColor_226;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.TMP_Text::m_colorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___m_colorStack_227;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.TMP_Text::m_underlineColorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___m_underlineColorStack_228;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.TMP_Text::m_strikethroughColorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___m_strikethroughColorStack_229;
	// TMPro.TMP_TextProcessingStack`1<TMPro.HighlightState> TMPro.TMP_Text::m_HighlightStateStack
	TMP_TextProcessingStack_1_t57AECDCC936A7FF1D6CF66CA11560B28A675648D ___m_HighlightStateStack_230;
	// TMPro.TMP_ColorGradient TMPro.TMP_Text::m_colorGradientPreset
	TMP_ColorGradient_t17B51752B4E9499A1FF7D875DCEC1D15A0F4AEBB* ___m_colorGradientPreset_231;
	// TMPro.TMP_TextProcessingStack`1<TMPro.TMP_ColorGradient> TMPro.TMP_Text::m_colorGradientStack
	TMP_TextProcessingStack_1_tC8FAEB17246D3B171EFD11165A5761AE39B40D0C ___m_colorGradientStack_232;
	// System.Boolean TMPro.TMP_Text::m_colorGradientPresetIsTinted
	bool ___m_colorGradientPresetIsTinted_233;
	// System.Single TMPro.TMP_Text::m_tabSpacing
	float ___m_tabSpacing_234;
	// System.Single TMPro.TMP_Text::m_spacing
	float ___m_spacing_235;
	// TMPro.TMP_TextProcessingStack`1<System.Int32>[] TMPro.TMP_Text::m_TextStyleStacks
	TMP_TextProcessingStack_1U5BU5D_t08293E0BB072311BB96170F351D1083BCA97B9B2* ___m_TextStyleStacks_236;
	// System.Int32 TMPro.TMP_Text::m_TextStyleStackDepth
	int32_t ___m_TextStyleStackDepth_237;
	// TMPro.TMP_TextProcessingStack`1<System.Int32> TMPro.TMP_Text::m_ItalicAngleStack
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___m_ItalicAngleStack_238;
	// System.Int32 TMPro.TMP_Text::m_ItalicAngle
	int32_t ___m_ItalicAngle_239;
	// TMPro.TMP_TextProcessingStack`1<System.Int32> TMPro.TMP_Text::m_actionStack
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___m_actionStack_240;
	// System.Single TMPro.TMP_Text::m_padding
	float ___m_padding_241;
	// System.Single TMPro.TMP_Text::m_baselineOffset
	float ___m_baselineOffset_242;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.TMP_Text::m_baselineOffsetStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___m_baselineOffsetStack_243;
	// System.Single TMPro.TMP_Text::m_xAdvance
	float ___m_xAdvance_244;
	// TMPro.TMP_TextElementType TMPro.TMP_Text::m_textElementType
	int32_t ___m_textElementType_245;
	// TMPro.TMP_TextElement TMPro.TMP_Text::m_cached_TextElement
	TMP_TextElement_t262A55214F712D4274485ABE5676E5254B84D0A5* ___m_cached_TextElement_246;
	// TMPro.TMP_Text/SpecialCharacter TMPro.TMP_Text::m_Ellipsis
	SpecialCharacter_t6C1DBE8C490706D1620899BAB7F0B8091AD26777 ___m_Ellipsis_247;
	// TMPro.TMP_Text/SpecialCharacter TMPro.TMP_Text::m_Underline
	SpecialCharacter_t6C1DBE8C490706D1620899BAB7F0B8091AD26777 ___m_Underline_248;
	// TMPro.TMP_SpriteAsset TMPro.TMP_Text::m_defaultSpriteAsset
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___m_defaultSpriteAsset_249;
	// TMPro.TMP_SpriteAsset TMPro.TMP_Text::m_currentSpriteAsset
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___m_currentSpriteAsset_250;
	// System.Int32 TMPro.TMP_Text::m_spriteCount
	int32_t ___m_spriteCount_251;
	// System.Int32 TMPro.TMP_Text::m_spriteIndex
	int32_t ___m_spriteIndex_252;
	// System.Int32 TMPro.TMP_Text::m_spriteAnimationID
	int32_t ___m_spriteAnimationID_253;
	// System.Boolean TMPro.TMP_Text::m_ignoreActiveState
	bool ___m_ignoreActiveState_256;
	// TMPro.TMP_Text/TextBackingContainer TMPro.TMP_Text::m_TextBackingArray
	TextBackingContainer_t33D1CE628E7B26C45EDAC1D87BEF2DD22A5C6361 ___m_TextBackingArray_257;
	// System.Decimal[] TMPro.TMP_Text::k_Power
	DecimalU5BU5D_t93BA0C88FA80728F73B792EE1A5199D0C060B615* ___k_Power_258;
};

struct TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9_StaticFields
{
	// TMPro.MaterialReference[] TMPro.TMP_Text::m_materialReferences
	MaterialReferenceU5BU5D_t7491D335AB3E3E13CE9C0F5E931F396F6A02E1F2* ___m_materialReferences_45;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Int32> TMPro.TMP_Text::m_materialReferenceIndexLookup
	Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180* ___m_materialReferenceIndexLookup_46;
	// TMPro.TMP_TextProcessingStack`1<TMPro.MaterialReference> TMPro.TMP_Text::m_materialReferenceStack
	TMP_TextProcessingStack_1_tB03E08F69415B281A5A81138F09E49EE58402DF9 ___m_materialReferenceStack_47;
	// UnityEngine.Color32 TMPro.TMP_Text::s_colorWhite
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___s_colorWhite_55;
	// System.Func`3<System.Int32,System.String,TMPro.TMP_FontAsset> TMPro.TMP_Text::OnFontAssetRequest
	Func_3_tC721DF8CDD07ED66A4833A19A2ED2302608C906C* ___OnFontAssetRequest_163;
	// System.Func`3<System.Int32,System.String,TMPro.TMP_SpriteAsset> TMPro.TMP_Text::OnSpriteAssetRequest
	Func_3_t6F6D9932638EA1A5A45303C6626C818C25D164E5* ___OnSpriteAssetRequest_164;
	// System.Char[] TMPro.TMP_Text::m_htmlTag
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___m_htmlTag_187;
	// TMPro.RichTextTagAttribute[] TMPro.TMP_Text::m_xmlAttribute
	RichTextTagAttributeU5BU5D_t5816316EFD8F59DBC30B9F88E15828C564E47B6D* ___m_xmlAttribute_188;
	// System.Single[] TMPro.TMP_Text::m_attributeParameterValues
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___m_attributeParameterValues_189;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedWordWrapState
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_SavedWordWrapState_201;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedLineState
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_SavedLineState_202;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedEllipsisState
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_SavedEllipsisState_203;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedLastValidState
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_SavedLastValidState_204;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedSoftLineBreakState
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_SavedSoftLineBreakState_205;
	// TMPro.TMP_TextProcessingStack`1<TMPro.WordWrapState> TMPro.TMP_Text::m_EllipsisInsertionCandidateStack
	TMP_TextProcessingStack_1_t2DDA00FFC64AF6E3AFD475AB2086D16C34787E0F ___m_EllipsisInsertionCandidateStack_206;
	// Unity.Profiling.ProfilerMarker TMPro.TMP_Text::k_ParseTextMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_ParseTextMarker_254;
	// Unity.Profiling.ProfilerMarker TMPro.TMP_Text::k_InsertNewLineMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_InsertNewLineMarker_255;
	// UnityEngine.Vector2 TMPro.TMP_Text::k_LargePositiveVector2
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___k_LargePositiveVector2_259;
	// UnityEngine.Vector2 TMPro.TMP_Text::k_LargeNegativeVector2
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___k_LargeNegativeVector2_260;
	// System.Single TMPro.TMP_Text::k_LargePositiveFloat
	float ___k_LargePositiveFloat_261;
	// System.Single TMPro.TMP_Text::k_LargeNegativeFloat
	float ___k_LargeNegativeFloat_262;
	// System.Int32 TMPro.TMP_Text::k_LargePositiveInt
	int32_t ___k_LargePositiveInt_263;
	// System.Int32 TMPro.TMP_Text::k_LargeNegativeInt
	int32_t ___k_LargeNegativeInt_264;
};

// UnityEngine.UI.Text
struct Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62  : public MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E
{
	// UnityEngine.UI.FontData UnityEngine.UI.Text::m_FontData
	FontData_tB8E562846C6CB59C43260F69AE346B9BF3157224* ___m_FontData_36;
	// System.String UnityEngine.UI.Text::m_Text
	String_t* ___m_Text_37;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCache
	TextGenerator_t85D00417640A53953556C01F9D4E7DDE1ABD8FEC* ___m_TextCache_38;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCacheForLayout
	TextGenerator_t85D00417640A53953556C01F9D4E7DDE1ABD8FEC* ___m_TextCacheForLayout_39;
	// System.Boolean UnityEngine.UI.Text::m_DisableFontTextureRebuiltCallback
	bool ___m_DisableFontTextureRebuiltCallback_41;
	// UnityEngine.UIVertex[] UnityEngine.UI.Text::m_TempVerts
	UIVertexU5BU5D_tBC532486B45D071A520751A90E819C77BA4E3D2F* ___m_TempVerts_42;
};

struct Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_StaticFields
{
	// UnityEngine.Material UnityEngine.UI.Text::s_DefaultText
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___s_DefaultText_40;
};

// TMPro.TextMeshProUGUI
struct TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957  : public TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9
{
	// System.Boolean TMPro.TextMeshProUGUI::m_isRebuildingLayout
	bool ___m_isRebuildingLayout_265;
	// UnityEngine.Coroutine TMPro.TextMeshProUGUI::m_DelayedGraphicRebuild
	Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* ___m_DelayedGraphicRebuild_266;
	// UnityEngine.Coroutine TMPro.TextMeshProUGUI::m_DelayedMaterialRebuild
	Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* ___m_DelayedMaterialRebuild_267;
	// UnityEngine.Rect TMPro.TextMeshProUGUI::m_ClipRect
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___m_ClipRect_268;
	// System.Boolean TMPro.TextMeshProUGUI::m_ValidRect
	bool ___m_ValidRect_269;
	// System.Action`1<TMPro.TMP_TextInfo> TMPro.TextMeshProUGUI::OnPreRenderText
	Action_1_tB93AB717F9D419A1BEC832FF76E74EAA32184CC1* ___OnPreRenderText_270;
	// System.Boolean TMPro.TextMeshProUGUI::m_hasFontAssetChanged
	bool ___m_hasFontAssetChanged_271;
	// TMPro.TMP_SubMeshUI[] TMPro.TextMeshProUGUI::m_subTextObjects
	TMP_SubMeshUIU5BU5D_tC77B263183A59A75345C26152457207EAC3BBF29* ___m_subTextObjects_272;
	// System.Single TMPro.TextMeshProUGUI::m_previousLossyScaleY
	float ___m_previousLossyScaleY_273;
	// UnityEngine.Vector3[] TMPro.TextMeshProUGUI::m_RectTransformCorners
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___m_RectTransformCorners_274;
	// UnityEngine.CanvasRenderer TMPro.TextMeshProUGUI::m_canvasRenderer
	CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860* ___m_canvasRenderer_275;
	// UnityEngine.Canvas TMPro.TextMeshProUGUI::m_canvas
	Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* ___m_canvas_276;
	// System.Single TMPro.TextMeshProUGUI::m_CanvasScaleFactor
	float ___m_CanvasScaleFactor_277;
	// System.Boolean TMPro.TextMeshProUGUI::m_isFirstAllocation
	bool ___m_isFirstAllocation_278;
	// System.Int32 TMPro.TextMeshProUGUI::m_max_characters
	int32_t ___m_max_characters_279;
	// UnityEngine.Material TMPro.TextMeshProUGUI::m_baseMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_baseMaterial_280;
	// System.Boolean TMPro.TextMeshProUGUI::m_isScrollRegionSet
	bool ___m_isScrollRegionSet_281;
	// UnityEngine.Vector4 TMPro.TextMeshProUGUI::m_maskOffset
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___m_maskOffset_282;
	// UnityEngine.Matrix4x4 TMPro.TextMeshProUGUI::m_EnvMapMatrix
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___m_EnvMapMatrix_283;
	// System.Boolean TMPro.TextMeshProUGUI::m_isRegisteredForEvents
	bool ___m_isRegisteredForEvents_284;
};

struct TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957_StaticFields
{
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_GenerateTextMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_GenerateTextMarker_285;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_SetArraySizesMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_SetArraySizesMarker_286;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_GenerateTextPhaseIMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_GenerateTextPhaseIMarker_287;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_ParseMarkupTextMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_ParseMarkupTextMarker_288;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_CharacterLookupMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_CharacterLookupMarker_289;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_HandleGPOSFeaturesMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleGPOSFeaturesMarker_290;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_CalculateVerticesPositionMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_CalculateVerticesPositionMarker_291;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_ComputeTextMetricsMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_ComputeTextMetricsMarker_292;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_HandleVisibleCharacterMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleVisibleCharacterMarker_293;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_HandleWhiteSpacesMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleWhiteSpacesMarker_294;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_HandleHorizontalLineBreakingMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleHorizontalLineBreakingMarker_295;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_HandleVerticalLineBreakingMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleVerticalLineBreakingMarker_296;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_SaveGlyphVertexDataMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_SaveGlyphVertexDataMarker_297;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_ComputeCharacterAdvanceMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_ComputeCharacterAdvanceMarker_298;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_HandleCarriageReturnMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleCarriageReturnMarker_299;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_HandleLineTerminationMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleLineTerminationMarker_300;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_SavePageInfoMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_SavePageInfoMarker_301;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_SaveProcessingStatesMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_SaveProcessingStatesMarker_302;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_GenerateTextPhaseIIMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_GenerateTextPhaseIIMarker_303;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_GenerateTextPhaseIIIMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_GenerateTextPhaseIIIMarker_304;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248  : public RuntimeArray
{
	ALIGN_FIELD (8) String_t* m_Items[1];

	inline String_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline String_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, String_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline String_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline String_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, String_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.UI.Text[]
struct TextU5BU5D_t1D476A037C4542F053D17ADAFA2723F311F9A353  : public RuntimeArray
{
	ALIGN_FIELD (8) Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* m_Items[1];

	inline Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771  : public RuntimeArray
{
	ALIGN_FIELD (8) Delegate_t* m_Items[1];

	inline Delegate_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Delegate_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Delegate_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Delegate_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Delegate_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Delegate_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.Vector3[]
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C  : public RuntimeArray
{
	ALIGN_FIELD (8) Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 m_Items[1];

	inline Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 value)
	{
		m_Items[index] = value;
	}
};
// System.Char[]
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB  : public RuntimeArray
{
	ALIGN_FIELD (8) Il2CppChar m_Items[1];

	inline Il2CppChar GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Il2CppChar* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Il2CppChar value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Il2CppChar GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Il2CppChar* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Il2CppChar value)
	{
		m_Items[index] = value;
	}
};
// System.Double[]
struct DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE  : public RuntimeArray
{
	ALIGN_FIELD (8) double m_Items[1];

	inline double GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline double* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, double value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline double GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline double* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, double value)
	{
		m_Items[index] = value;
	}
};
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918  : public RuntimeArray
{
	ALIGN_FIELD (8) RuntimeObject* m_Items[1];

	inline RuntimeObject* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline RuntimeObject* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// T UnityEngine.Component::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.Boolean System.Nullable`1<System.Single>::get_HasValue()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_mC149B1C717AF506BBE8932F2C1DC86C378D17EA8_gshared_inline (Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75* __this, const RuntimeMethod* method) ;
// T System.Nullable`1<System.Single>::get_Value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Nullable_1_get_Value_mE3B978271FFA8D9DEE17BFB34320A3C67BE148EA_gshared (Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75* __this, const RuntimeMethod* method) ;
// System.Void System.Action`1<System.Int32Enum>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1__ctor_m8EDF953DA7FF0E33AE19FB51BD7DBDB7C495CFE0_gshared (Action_1_tC926860F20D428DA3E93D6FBA36420E904DD903B* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void System.Action`2<System.Object,Vuforia.TargetStatus>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_2__ctor_m44A037CE8D00B19CF27C3155BB489C9A82F08D00_gshared (Action_2_t6E267C40DBCE33187D9AAAD4FFFB2BAE8A6B220E* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// T UnityEngine.Object::Instantiate<System.Object>(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Object_Instantiate_TisRuntimeObject_m90A1E6C4C2B445D2E848DB75C772D1B95AAC046A_gshared (RuntimeObject* ___original0, const RuntimeMethod* method) ;
// T[] UnityEngine.Component::GetComponentsInChildren<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* Component_GetComponentsInChildren_TisRuntimeObject_m1F5B6FC0689B07D4FAAC0C605D9B2933A9B32543_gshared (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponentInChildren<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Component_GetComponentInChildren_TisRuntimeObject_mE483A27E876DE8E4E6901D6814837F81D7C42F65_gshared (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// T UnityEngine.Object::FindObjectOfType<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Object_FindObjectOfType_TisRuntimeObject_m02DFBF011F3B59F777A5E521DB2A116DD496E968_gshared (const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Double>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m4F495AFEC1141AA7E02729E3105CB569F2CEAD34_gshared (List_1_t495F03F47D827883530F951D563C0BB7340E5995* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Double>::Add(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_m5D83C79B12616961D8147BB59AD5E55683361E85_gshared_inline (List_1_t495F03F47D827883530F951D563C0BB7340E5995* __this, double ___item0, const RuntimeMethod* method) ;
// T[] System.Collections.Generic.List`1<System.Double>::ToArray()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* List_1_ToArray_m91B6A76F83EF0F01FE14A5BAD9D99BDDFC9499F3_gshared (List_1_t495F03F47D827883530F951D563C0BB7340E5995* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::Add(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___item0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::set_Item(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_m72CC2F1213D1C1B8ABEDE31082D07B67EC873B13_gshared (Dictionary_2_t5C96F4B6841710A9013966F76224BAE01FB4B4D1* __this, RuntimeObject* ___key0, int32_t ___value1, const RuntimeMethod* method) ;
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::get_Item(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_get_Item_mA019F7A495B48EF2A6E5D36977DB3EA09A47ECDB_gshared (Dictionary_2_t5C96F4B6841710A9013966F76224BAE01FB4B4D1* __this, RuntimeObject* ___key0, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, int32_t ___index0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m517E7F9D104FEAE6646EABDDC9C852510E86077C_gshared (Dictionary_2_t5C96F4B6841710A9013966F76224BAE01FB4B4D1* __this, const RuntimeMethod* method) ;

// Vuforia.VuforiaApplication Vuforia.VuforiaApplication::get_Instance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR VuforiaApplication_t84202EE6AE3488947F9398AA46BAB1D6F7CCDA46* VuforiaApplication_get_Instance_mAD5B1238C27A229C127BD1E44677713D1CE0FC03 (const RuntimeMethod* method) ;
// System.Void System.Action::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void Vuforia.VuforiaApplication::add_OnVuforiaStarted(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VuforiaApplication_add_OnVuforiaStarted_mE13713AD839E4F3A635FF321BF28BE990F6E49CE (VuforiaApplication_t84202EE6AE3488947F9398AA46BAB1D6F7CCDA46* __this, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___value0, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<UnityEngine.Light>()
inline Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* Component_GetComponent_TisLight_t1E68479B7782AF2050FAA02A5DC612FD034F18F3_mF4816FA12B6F220CA55D47D669D7E50DC118B9E9 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Single UnityEngine.Light::get_intensity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Light_get_intensity_m8FA28D515853068A93FA68B2148809BBEE4E710F (Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* __this, const RuntimeMethod* method) ;
// Vuforia.IlluminationData Vuforia.World::get_IlluminationData()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR IlluminationData_t907CE8A9106AC295312099ACA9EF74970E3AE7D4* World_get_IlluminationData_m8E82AC2FFF506E365559AD100C451D87233E5AA6_inline (World_t0332C3F77BBFBA826A13D263DAED199D01BCE050* __this, const RuntimeMethod* method) ;
// System.Nullable`1<System.Single> Vuforia.IlluminationData::get_AmbientIntensity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75 IlluminationData_get_AmbientIntensity_m6DB0677A757B9CF70D07F929D492BF597BAF245E (IlluminationData_t907CE8A9106AC295312099ACA9EF74970E3AE7D4* __this, const RuntimeMethod* method) ;
// System.Boolean System.Nullable`1<System.Single>::get_HasValue()
inline bool Nullable_1_get_HasValue_mC149B1C717AF506BBE8932F2C1DC86C378D17EA8_inline (Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75*, const RuntimeMethod*))Nullable_1_get_HasValue_mC149B1C717AF506BBE8932F2C1DC86C378D17EA8_gshared_inline)(__this, method);
}
// T System.Nullable`1<System.Single>::get_Value()
inline float Nullable_1_get_Value_mE3B978271FFA8D9DEE17BFB34320A3C67BE148EA (Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75* __this, const RuntimeMethod* method)
{
	return ((  float (*) (Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75*, const RuntimeMethod*))Nullable_1_get_Value_mE3B978271FFA8D9DEE17BFB34320A3C67BE148EA_gshared)(__this, method);
}
// System.Single UnityEngine.Mathf::Clamp(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp_mEB9AEA827D27D20FCC787F7375156AF46BB12BBF_inline (float ___value0, float ___min1, float ___max2, const RuntimeMethod* method) ;
// System.Void UnityEngine.Light::set_intensity(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Light_set_intensity_mE4820C7F39F490B92ED5EA0C3AADA7C0775BE854 (Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* __this, float ___value0, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Clamp01(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp01_mA7E048DBDA832D399A581BE4D6DED9FA44CE0F14_inline (float ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.RenderSettings::set_ambientIntensity(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RenderSettings_set_ambientIntensity_m27875436E47E2D28C13F362DAE9C24D0DEC4A844 (float ___value0, const RuntimeMethod* method) ;
// System.Void Vuforia.VuforiaApplication::remove_OnVuforiaStarted(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VuforiaApplication_remove_OnVuforiaStarted_m5D03D7619DABF168B877F079AEA48AEB98104B7D (VuforiaApplication_t84202EE6AE3488947F9398AA46BAB1D6F7CCDA46* __this, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___value0, const RuntimeMethod* method) ;
// Vuforia.VuforiaBehaviour Vuforia.VuforiaBehaviour::get_Instance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR VuforiaBehaviour_t53608E2BEC77029C0140CB1E88A0B186FC5E76C6* VuforiaBehaviour_get_Instance_m8429CB479D68EA7506815B46E9D9AA09C8F90EA0 (const RuntimeMethod* method) ;
// Vuforia.World Vuforia.VuforiaBehaviour::get_World()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR World_t0332C3F77BBFBA826A13D263DAED199D01BCE050* VuforiaBehaviour_get_World_m14A8271B023273D49C261BE6EC1378C16EB7B900_inline (VuforiaBehaviour_t53608E2BEC77029C0140CB1E88A0B186FC5E76C6* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, const RuntimeMethod* method) ;
// System.Void System.Action`1<Vuforia.VuforiaInitError>::.ctor(System.Object,System.IntPtr)
inline void Action_1__ctor_m8A690F1FC4364CB01C8C5E118C24E8B37963FDC1 (Action_1_tF4CAAB52A69FEBB4D629E2D59C8EE77A263FEE43* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_1_tF4CAAB52A69FEBB4D629E2D59C8EE77A263FEE43*, RuntimeObject*, intptr_t, const RuntimeMethod*))Action_1__ctor_m8EDF953DA7FF0E33AE19FB51BD7DBDB7C495CFE0_gshared)(__this, ___object0, ___method1, method);
}
// System.Void Vuforia.VuforiaApplication::add_OnVuforiaInitialized(System.Action`1<Vuforia.VuforiaInitError>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VuforiaApplication_add_OnVuforiaInitialized_m35EEFC8D4F23F86714C144AD37F4C6C1DB49E18E (VuforiaApplication_t84202EE6AE3488947F9398AA46BAB1D6F7CCDA46* __this, Action_1_tF4CAAB52A69FEBB4D629E2D59C8EE77A263FEE43* ___value0, const RuntimeMethod* method) ;
// Vuforia.DevicePoseBehaviour Vuforia.VuforiaBehaviour::get_DevicePoseBehaviour()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR DevicePoseBehaviour_tB66D2A5B7C7DA1929EC742544831049B124BD642* VuforiaBehaviour_get_DevicePoseBehaviour_m69EBBECA75E0D757A1660354780BBF4C7FD156B1_inline (VuforiaBehaviour_t53608E2BEC77029C0140CB1E88A0B186FC5E76C6* __this, const RuntimeMethod* method) ;
// System.Void System.Action`2<Vuforia.ObserverBehaviour,Vuforia.TargetStatus>::.ctor(System.Object,System.IntPtr)
inline void Action_2__ctor_mCE1D840FD103AC1247B1231CAB0A34B795A2978C (Action_2_tAC0AA9B652075EE1CE661500AC3373C7008D598F* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_2_tAC0AA9B652075EE1CE661500AC3373C7008D598F*, RuntimeObject*, intptr_t, const RuntimeMethod*))Action_2__ctor_m44A037CE8D00B19CF27C3155BB489C9A82F08D00_gshared)(__this, ___object0, ___method1, method);
}
// System.Void Vuforia.ObserverBehaviour::add_OnTargetStatusChanged(System.Action`2<Vuforia.ObserverBehaviour,Vuforia.TargetStatus>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObserverBehaviour_add_OnTargetStatusChanged_m3EEEEDBF95D9B118056440AACBC08A516975FA6F (ObserverBehaviour_t5523404662BA53BE6118C49F6FFA9E19719115DB* __this, Action_2_tAC0AA9B652075EE1CE661500AC3373C7008D598F* ___value0, const RuntimeMethod* method) ;
// System.Void System.Timers.Timer::.ctor(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Timer__ctor_m40D0F904597F9E12A41E23A6800AFDBD964CDAFD (Timer_t10D85D58F4AC0CF80C625D0124B12098CE540A8B* __this, double ___interval0, const RuntimeMethod* method) ;
// System.Void System.Timers.ElapsedEventHandler::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ElapsedEventHandler__ctor_mAB5D9F11BB0B719A17105C636543958CC6F78CBD (ElapsedEventHandler_tCA26B9E70A5EDB91678F46BCD15547D752D2BA51* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void System.Timers.Timer::add_Elapsed(System.Timers.ElapsedEventHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Timer_add_Elapsed_mA30E2E614E703D6FD8260EB10575C0FB719C0B5D (Timer_t10D85D58F4AC0CF80C625D0124B12098CE540A8B* __this, ElapsedEventHandler_tCA26B9E70A5EDB91678F46BCD15547D752D2BA51* ___value0, const RuntimeMethod* method) ;
// System.Void System.Timers.Timer::set_AutoReset(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Timer_set_AutoReset_mCDD4362A339ADAA69BAB7FE596BE400C161C328D (Timer_t10D85D58F4AC0CF80C625D0124B12098CE540A8B* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void DevicePoseManager::ResetDevicePose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DevicePoseManager_ResetDevicePose_m4890F06F001C1F7CE2574F44AEBE0D9B672BB2A7 (DevicePoseManager_t6DB16271316039E99F4EBFD596A637CEB4439F90* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityEvent::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_Invoke_mFBF80D59B03C30C5FE6A06F897D954ACADE061D2 (UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* __this, const RuntimeMethod* method) ;
// System.Void Vuforia.VuforiaApplication::remove_OnVuforiaInitialized(System.Action`1<Vuforia.VuforiaInitError>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VuforiaApplication_remove_OnVuforiaInitialized_m791D07F37D6A1C4EECF15F2A3121386C9B0E3FB6 (VuforiaApplication_t84202EE6AE3488947F9398AA46BAB1D6F7CCDA46* __this, Action_1_tF4CAAB52A69FEBB4D629E2D59C8EE77A263FEE43* ___value0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___x0, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___y1, const RuntimeMethod* method) ;
// System.Void Vuforia.ObserverBehaviour::remove_OnTargetStatusChanged(System.Action`2<Vuforia.ObserverBehaviour,Vuforia.TargetStatus>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObserverBehaviour_remove_OnTargetStatusChanged_m6B5ABC6137D8E98EA690366D721D44C76C1FA08C (ObserverBehaviour_t5523404662BA53BE6118C49F6FFA9E19719115DB* __this, Action_2_tAC0AA9B652075EE1CE661500AC3373C7008D598F* ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::Log(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB (RuntimeObject* ___message0, const RuntimeMethod* method) ;
// System.Void Vuforia.AnchorBehaviour::UnconfigureAnchor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnchorBehaviour_UnconfigureAnchor_mF680277271D19B8853B852D05BFC19883C81415E (AnchorBehaviour_t81952CE5FBF39AD5C2F0C5E2FE109B0B10A2824F* __this, const RuntimeMethod* method) ;
// System.Boolean Vuforia.DevicePoseBehaviour::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DevicePoseBehaviour_Reset_m51E0256CAD27311D49EABF046C90D2C78AC4F665 (DevicePoseBehaviour_tB66D2A5B7C7DA1929EC742544831049B124BD642* __this, const RuntimeMethod* method) ;
// System.Boolean Vuforia.World::get_AnchorsSupported()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool World_get_AnchorsSupported_m4776F1C4F0CCA0EBC383876FE114E00E153F5FBE (World_t0332C3F77BBFBA826A13D263DAED199D01BCE050* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Behaviour::get_enabled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Behaviour_get_enabled_mAAC9F15E9EBF552217A5AE2681589CC0BFA300C1 (Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::LogError(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2 (RuntimeObject* ___message0, const RuntimeMethod* method) ;
// System.Void MessageBox::DisplayMessageBox(System.String,System.String,System.Boolean,System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MessageBox_DisplayMessageBox_m826BDDA5EAB089B17C50A63F0C9CFAF591392428 (String_t* ___title0, String_t* ___body1, bool ___dismissable2, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___dismissAction3, const RuntimeMethod* method) ;
// Vuforia.Status Vuforia.TargetStatus::get_Status()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t TargetStatus_get_Status_m6CA973C4D857DCA6B775DF7E053B0990A83026A3_inline (TargetStatus_t5D866F1CAA9D70E5B66D532E69B190EA3BAAC4B0* __this, const RuntimeMethod* method) ;
// System.String System.Enum::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Enum_ToString_m946B0B83C4470457D0FF555D862022C72BB55741 (RuntimeObject* __this, const RuntimeMethod* method) ;
// Vuforia.StatusInfo Vuforia.TargetStatus::get_StatusInfo()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t TargetStatus_get_StatusInfo_mA52A044649A96018BDC52555018BB9412877B0E6_inline (TargetStatus_t5D866F1CAA9D70E5B66D532E69B190EA3BAAC4B0* __this, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m647EBF831F54B6DF7D5AFA5FD012CF4EE7571B6A (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___values0, const RuntimeMethod* method) ;
// System.Boolean System.Timers.Timer::get_Enabled()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Timer_get_Enabled_m082C8CCFB9C6936523EDE3E8C8DD010C22EDA032_inline (Timer_t10D85D58F4AC0CF80C625D0124B12098CE540A8B* __this, const RuntimeMethod* method) ;
// System.Void System.Timers.Timer::Stop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Timer_Stop_mB59D0FF54146FC2B21E8030B56967535247F1740 (Timer_t10D85D58F4AC0CF80C625D0124B12098CE540A8B* __this, const RuntimeMethod* method) ;
// System.Void System.Timers.Timer::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Timer_Start_mEE6121E30291AD5E522532C5DC7A9C22FA4F3463 (Timer_t10D85D58F4AC0CF80C625D0124B12098CE540A8B* __this, const RuntimeMethod* method) ;
// Vuforia.TargetStatus Vuforia.TargetStatus::get_NotObserved()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TargetStatus_t5D866F1CAA9D70E5B66D532E69B190EA3BAAC4B0 TargetStatus_get_NotObserved_m1BD5C70DBAAE7DE715BFB0B305617BEA9D84B65F (const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityEvent::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent__ctor_m03D3E5121B9A6100351984D0CE3050B909CD3235 (UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.SceneManagement.SceneManager::LoadScene(System.String,UnityEngine.SceneManagement.LoadSceneMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneManager_LoadScene_m2841705C02C450E42A44B5EEE2A6A2C4261FA3AF (String_t* ___sceneName0, int32_t ___mode1, const RuntimeMethod* method) ;
// UnityEngine.Object UnityEngine.Resources::Load(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* Resources_Load_mA66E7AA8D024B495158F157382C3A8528306FFEA (String_t* ___path0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Implicit(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___exists0, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<MessageBox>()
inline MessageBox_t4E1C9DA3FBC7BAE7E61037CFCD99B2B5ED88EA3F* GameObject_GetComponent_TisMessageBox_t4E1C9DA3FBC7BAE7E61037CFCD99B2B5ED88EA3F_mF4A1EFD01DFE543E3626CE8C1A025ECBF6483C1D (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  MessageBox_t4E1C9DA3FBC7BAE7E61037CFCD99B2B5ED88EA3F* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// T UnityEngine.Object::Instantiate<MessageBox>(T)
inline MessageBox_t4E1C9DA3FBC7BAE7E61037CFCD99B2B5ED88EA3F* Object_Instantiate_TisMessageBox_t4E1C9DA3FBC7BAE7E61037CFCD99B2B5ED88EA3F_m5740B252EAD2EDF092600A1E41AEB6032D1064EA (MessageBox_t4E1C9DA3FBC7BAE7E61037CFCD99B2B5ED88EA3F* ___original0, const RuntimeMethod* method)
{
	return ((  MessageBox_t4E1C9DA3FBC7BAE7E61037CFCD99B2B5ED88EA3F* (*) (MessageBox_t4E1C9DA3FBC7BAE7E61037CFCD99B2B5ED88EA3F*, const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_m90A1E6C4C2B445D2E848DB75C772D1B95AAC046A_gshared)(___original0, method);
}
// System.Void MessageBox::Setup(System.String,System.String,System.Boolean,System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MessageBox_Setup_mA193EC21BA16AA19A67430236539FCC1DA7CDE1B (MessageBox_t4E1C9DA3FBC7BAE7E61037CFCD99B2B5ED88EA3F* __this, String_t* ___title0, String_t* ___body1, bool ___dismissable2, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___closeButton3, const RuntimeMethod* method) ;
// System.Void MessageBox/DelegateMessageBoxButtonAction::Invoke()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void DelegateMessageBoxButtonAction_Invoke_m819B234CE21CB5E6C60885499686A40607F8A8C2_inline (DelegateMessageBoxButtonAction_tF92662C8A304ECF3D687E8AEB65D739E3FA46DC8* __this, const RuntimeMethod* method) ;
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___obj0, const RuntimeMethod* method) ;
// T[] UnityEngine.Component::GetComponentsInChildren<UnityEngine.UI.Text>()
inline TextU5BU5D_t1D476A037C4542F053D17ADAFA2723F311F9A353* Component_GetComponentsInChildren_TisText_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_m3FC915DEC37CE1CE6E48A26D44655BAE36FD140E (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  TextU5BU5D_t1D476A037C4542F053D17ADAFA2723F311F9A353* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponentsInChildren_TisRuntimeObject_m1F5B6FC0689B07D4FAAC0C605D9B2933A9B32543_gshared)(__this, method);
}
// System.Void MessageBox/DelegateMessageBoxButtonAction::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DelegateMessageBoxButtonAction__ctor_m14861E277EAB5756DB864397D823EC009F0F50AA (DelegateMessageBoxButtonAction_tF92662C8A304ECF3D687E8AEB65D739E3FA46DC8* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponentInChildren<UnityEngine.UI.Button>()
inline Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* Component_GetComponentInChildren_TisButton_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098_m16CFA6B8AD1C67BA8A7BCB3465E5C20064DEE5DB (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponentInChildren_TisRuntimeObject_mE483A27E876DE8E4E6901D6814837F81D7C42F65_gshared)(__this, method);
}
// System.Void UnityEngine.GameObject::SetActive(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, bool ___value0, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<UnityEngine.Camera>()
inline Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* Component_GetComponent_TisCamera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_m64AC6C06DD93C5FB249091FEC84FA8475457CCC4 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// T UnityEngine.GameObject::GetComponent<UnityEngine.MeshRenderer>()
inline MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* GameObject_GetComponent_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_m7FF948365C38BC39333D82B235A7C4EAD219960D (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// System.Void ModelPlacement::RotateTowardsCamera(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ModelPlacement_RotateTowardsCamera_mC2046D1813ACD8816C46A8600EFB36320243859E (ModelPlacement_tEBA347DB86CB0A00DC780800C2CA5E1E438F7C8D* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___augmentation0, const RuntimeMethod* method) ;
// System.Void ModelPlacement::SnapProductToMousePosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ModelPlacement_SnapProductToMousePosition_mDBE28D9A6D814DB4840B0B25AA7A86AC808BB947 (ModelPlacement_tEBA347DB86CB0A00DC780800C2CA5E1E438F7C8D* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Time::get_frameCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Time_get_frameCount_m4A42E558A71301A216BDC49EC402D62F19C79667 (const RuntimeMethod* method) ;
// System.Void ModelPlacement::set_GroundPlaneHitReceived(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ModelPlacement_set_GroundPlaneHitReceived_mFCE0CAAD12842540A0F85925AE3E3886A7FA3B06_inline (ModelPlacement_tEBA347DB86CB0A00DC780800C2CA5E1E438F7C8D* __this, bool ___value0, const RuntimeMethod* method) ;
// Vuforia.TargetStatus Vuforia.ObserverBehaviour::get_TargetStatus()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR TargetStatus_t5D866F1CAA9D70E5B66D532E69B190EA3BAAC4B0 ObserverBehaviour_get_TargetStatus_m11A222E650B40FB61D9FD4BD2689F04900086E5F_inline (ObserverBehaviour_t5523404662BA53BE6118C49F6FFA9E19719115DB* __this, const RuntimeMethod* method) ;
// System.Boolean TargetStatusExtension::IsTrackedOrLimited(Vuforia.TargetStatus)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TargetStatusExtension_IsTrackedOrLimited_mFF1F77510F9CF98BF112808E1825F5D853A66995 (TargetStatus_t5D866F1CAA9D70E5B66D532E69B190EA3BAAC4B0 ___targetStatus0, const RuntimeMethod* method) ;
// System.Boolean ModelPlacement::get_GroundPlaneHitReceived()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool ModelPlacement_get_GroundPlaneHitReceived_m99308344829E795F0EADF6D20F7061335675BE14_inline (ModelPlacement_tEBA347DB86CB0A00DC780800C2CA5E1E438F7C8D* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Renderer::set_enabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Renderer_set_enabled_m015E6D7B825528A31182F267234CC6A925F71DA8 (Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Boolean TouchHandler::get_sIsSingleFingerDragging()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TouchHandler_get_sIsSingleFingerDragging_mE4DC729AC5FC3189A2205F6972C745ACB0FDA1A3 (const RuntimeMethod* method) ;
// System.Boolean Vuforia.VuforiaRuntimeUtilities::IsPlayMode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool VuforiaRuntimeUtilities_IsPlayMode_m00B33166EF7724E7A333D0ED11623D7CE0907B07 (const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Input::GetMouseButton(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetMouseButton_m4995DD4A2D4F916565C1B1B5AAF7DF17C126B3EA (int32_t ___button0, const RuntimeMethod* method) ;
// Vuforia.UnityRuntimeCompiled.IUnityRuntimeCompiledFacade Vuforia.UnityRuntimeCompiled.UnityRuntimeCompiledFacade::get_Instance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* UnityRuntimeCompiledFacade_get_Instance_m4592CF9DD7C37245CE9360789614782375BDEC11 (const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Input::get_mousePosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Input_get_mousePosition_mFF21FBD2647DAE2A23BD4C45571CA95D05A0A42C (const RuntimeMethod* method) ;
// UnityEngine.Ray UnityEngine.Camera::ScreenPointToRay(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 Camera_ScreenPointToRay_m2887B9A49880B7AB670C57D66B67D6A6689FE315 (Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___pos0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Physics::Raycast(UnityEngine.Ray,UnityEngine.RaycastHit&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Physics_Raycast_mCAC9F02A1AAB49E16B384EBC8318E2DF30F4B0E5 (Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 ___ray0, RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5* ___hitInfo1, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.RaycastHit::get_point()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 RaycastHit_get_point_m02B764612562AFE0F998CC7CFB2EEDE41BA47F39 (RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_position(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_zero()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline (const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_localPosition(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 Vuforia.HitTestResult::get_Position()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 HitTestResult_get_Position_m2F30FBF2AF4D53E6C3F1E51D44AE699C153C4784_inline (HitTestResult_t623F1DB9A0AAD8416652DFFE1842F908250D44D9* __this, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Subtraction(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::LookRotation(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_LookRotation_mDB2CCA75B8E1AB98104F2A6E1A1EA57D0D1298D7 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___forward0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_rotation(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___value0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.GameObject::get_activeSelf()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GameObject_get_activeSelf_m4F3E5240E138B66AAA080EA30759A3D0517DA368 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// System.Boolean TouchHandler::IsSingleFingerDown()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TouchHandler_IsSingleFingerDown_mB696B4D45A5A250CE069CFA218ECAEEF61192BDE (const RuntimeMethod* method) ;
// UnityEngine.Touch UnityEngine.Input::GetTouch(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Touch_t03E51455ED508492B3F278903A0114FA0E87B417 Input_GetTouch_m75D99FE801A94279874FA8DC6B6ADAD35F5123B1 (int32_t ___index0, const RuntimeMethod* method) ;
// UnityEngine.TouchPhase UnityEngine.Touch::get_phase()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Touch_get_phase_mB82409FB2BE1C32ABDBA6A72E52A099D28AB70B0 (Touch_t03E51455ED508492B3F278903A0114FA0E87B417* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_localScale()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_localScale_m804A002A53A645CDFCD15BB0F37209162720363F (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_localEulerAngles()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_localEulerAngles_m358AA9AE8FA24FD1BB7842D231C8644D1C2910C6 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Input::get_touchCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Input_get_touchCount_m057388BFC67A0F4CA53764B1022867ED81D01E39 (const RuntimeMethod* method) ;
// System.Void TouchHandler::GetTouchAngleAndDistance(UnityEngine.Touch,UnityEngine.Touch,System.Single&,System.Single&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TouchHandler_GetTouchAngleAndDistance_m6762EDFF19CF134C3851223F9C108A12EF34592B (TouchHandler_tB817ACADDBAF3E5E6625F3D541FE580091B9758D* __this, Touch_t03E51455ED508492B3F278903A0114FA0E87B417 ___firstTouch0, Touch_t03E51455ED508492B3F278903A0114FA0E87B417 ___secondTouch1, float* ___touchAngle2, float* ___touchDistance3, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Touch::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Touch_get_position_m41B9EB0F3F3E1BE98CEB388253A9E31979CB964A (Touch_t03E51455ED508492B3F278903A0114FA0E87B417* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector2::Distance(UnityEngine.Vector2,UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector2_Distance_mBACBB1609E1894D68F882D86A93519E311810C89_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___a0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___b1, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Touch::get_fingerId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Touch_get_fingerId_mC1DCE93BFA0574960A3AE5329AE6C5F7E06962BD (Touch_t03E51455ED508492B3F278903A0114FA0E87B417* __this, const RuntimeMethod* method) ;
// T UnityEngine.Object::FindObjectOfType<DevicePoseManager>()
inline DevicePoseManager_t6DB16271316039E99F4EBFD596A637CEB4439F90* Object_FindObjectOfType_TisDevicePoseManager_t6DB16271316039E99F4EBFD596A637CEB4439F90_m17833F94FADA4C714BF98E476AE2696DE26BB69A (const RuntimeMethod* method)
{
	return ((  DevicePoseManager_t6DB16271316039E99F4EBFD596A637CEB4439F90* (*) (const RuntimeMethod*))Object_FindObjectOfType_TisRuntimeObject_m02DFBF011F3B59F777A5E521DB2A116DD496E968_gshared)(method);
}
// T UnityEngine.Object::FindObjectOfType<Vuforia.PlaneFinderBehaviour>()
inline PlaneFinderBehaviour_t23E09D9522086A00933FFF43F29F9D4CEE1578F5* Object_FindObjectOfType_TisPlaneFinderBehaviour_t23E09D9522086A00933FFF43F29F9D4CEE1578F5_m4DD25D2D331B6D313210CB50CDD7F3AE401EBE8E (const RuntimeMethod* method)
{
	return ((  PlaneFinderBehaviour_t23E09D9522086A00933FFF43F29F9D4CEE1578F5* (*) (const RuntimeMethod*))Object_FindObjectOfType_TisRuntimeObject_m02DFBF011F3B59F777A5E521DB2A116DD496E968_gshared)(method);
}
// T UnityEngine.Object::FindObjectOfType<ModelPlacement>()
inline ModelPlacement_tEBA347DB86CB0A00DC780800C2CA5E1E438F7C8D* Object_FindObjectOfType_TisModelPlacement_tEBA347DB86CB0A00DC780800C2CA5E1E438F7C8D_m5C56B162E3EF09F1181D523AE95E243115E6BFD9 (const RuntimeMethod* method)
{
	return ((  ModelPlacement_tEBA347DB86CB0A00DC780800C2CA5E1E438F7C8D* (*) (const RuntimeMethod*))Object_FindObjectOfType_TisRuntimeObject_m02DFBF011F3B59F777A5E521DB2A116DD496E968_gshared)(method);
}
// System.Boolean TargetStatusExtension::IsTrackedAndNormal(Vuforia.TargetStatus)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TargetStatusExtension_IsTrackedAndNormal_m016366EBE82BEBCA07480C46E7E6D90C96EA0847 (TargetStatus_t5D866F1CAA9D70E5B66D532E69B190EA3BAAC4B0 ___targetStatus0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.GameObject::get_activeInHierarchy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GameObject_get_activeInHierarchy_m49250F4F168DCC5388D5BE4F6A5681386907B109 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// System.String UnityEngine.TextAsset::get_text()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* TextAsset_get_text_m36846042E3CF3D9DD337BF3F8B2B1902D10C8FD9 (TextAsset_t2C64E93DA366D9DE5A8209E1802FA4884AC1BD69* __this, const RuntimeMethod* method) ;
// System.String[] System.String::Split(System.String[],System.StringSplitOptions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* String_Split_m03F46561E2DF46D1E3AE749A77706EFC2F6488F4 (String_t* __this, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___separator0, int32_t ___options1, const RuntimeMethod* method) ;
// System.Double System.Convert::ToDouble(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double Convert_ToDouble_m933DFCA7F5B65845162738829A173E79D81ED4B3 (String_t* ___value0, const RuntimeMethod* method) ;
// System.String[] System.String::Split(System.Char[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* String_Split_m101D35FEC86371D2BB4E3480F6F896880093B2E9 (String_t* __this, CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___separator0, const RuntimeMethod* method) ;
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1 (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Double>::.ctor()
inline void List_1__ctor_m4F495AFEC1141AA7E02729E3105CB569F2CEAD34 (List_1_t495F03F47D827883530F951D563C0BB7340E5995* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t495F03F47D827883530F951D563C0BB7340E5995*, const RuntimeMethod*))List_1__ctor_m4F495AFEC1141AA7E02729E3105CB569F2CEAD34_gshared)(__this, method);
}
// System.Boolean System.String::Contains(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_Contains_m6D77B121FADA7CA5F397C0FABB65DA62DF03B6C3 (String_t* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.String System.String::Replace(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Replace_mABDB7003A1D0AEDCAE9FF85E3DFFFBA752D2A166 (String_t* __this, String_t* ___oldValue0, String_t* ___newValue1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Double>::Add(T)
inline void List_1_Add_m5D83C79B12616961D8147BB59AD5E55683361E85_inline (List_1_t495F03F47D827883530F951D563C0BB7340E5995* __this, double ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t495F03F47D827883530F951D563C0BB7340E5995*, double, const RuntimeMethod*))List_1_Add_m5D83C79B12616961D8147BB59AD5E55683361E85_gshared_inline)(__this, ___item0, method);
}
// T[] System.Collections.Generic.List`1<System.Double>::ToArray()
inline DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* List_1_ToArray_m91B6A76F83EF0F01FE14A5BAD9D99BDDFC9499F3 (List_1_t495F03F47D827883530F951D563C0BB7340E5995* __this, const RuntimeMethod* method)
{
	return ((  DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* (*) (List_1_t495F03F47D827883530F951D563C0BB7340E5995*, const RuntimeMethod*))List_1_ToArray_m91B6A76F83EF0F01FE14A5BAD9D99BDDFC9499F3_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<System.Double[]>::Add(T)
inline void List_1_Add_mC19C5EEC6894CA8390C854EDC3428C93A0BD59F3_inline (List_1_t64FC2174A52DBC518FB499976FF0BA043E643411* __this, DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t64FC2174A52DBC518FB499976FF0BA043E643411*, DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___item0, method);
}
// T UnityEngine.GameObject::GetComponent<UnityEngine.MeshFilter>()
inline MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5* GameObject_GetComponent_TisMeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5_mDF6525BCE37B444313BE0AA2305BDF4EB8B92FE8 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// UnityEngine.Mesh UnityEngine.MeshFilter::get_mesh()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* MeshFilter_get_mesh_m13172D7EF6682861971817D0A47EE2BE49FBCB1C (MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3[] UnityEngine.Mesh::get_vertices()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* Mesh_get_vertices_mA3577F1B08EDDD54E26AEB3F8FFE4EC247D2ABB9 (Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Mesh::MarkDynamic()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mesh_MarkDynamic_m718089940F240AFE625D6DC9DA4E6F20229CC322 (Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3[] SeatedAdultSliderAdjust::getCorrectVertices()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* SeatedAdultSliderAdjust_getCorrectVertices_m9633F01675D658F3B99284566CC9743BD3A13835 (SeatedAdultSliderAdjust_tD13DF139016030F050F1A488125C2796C6DA9842* __this, const RuntimeMethod* method) ;
// System.String System.Single::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Single_ToString_mE282EDA9CA4F7DF88432D807732837A629D04972 (float* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::set_Item(TKey,TValue)
inline void Dictionary_2_set_Item_m038480C0EC13713DBD89A53BE69FF0359501B4C2 (Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588* __this, String_t* ___key0, int32_t ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588*, String_t*, int32_t, const RuntimeMethod*))Dictionary_2_set_Item_m72CC2F1213D1C1B8ABEDE31082D07B67EC873B13_gshared)(__this, ___key0, ___value1, method);
}
// System.Int32 TMPro.TMP_Dropdown::get_value()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t TMP_Dropdown_get_value_m5916A6D1897431E8ED789FEC24551A311D1B5C70_inline (TMP_Dropdown_t73B37BFDA0D005451C7B750938AFB1748E5EA504* __this, const RuntimeMethod* method) ;
// TValue System.Collections.Generic.Dictionary`2<System.String,System.Int32>::get_Item(TKey)
inline int32_t Dictionary_2_get_Item_mE01750B88D9A581E9196F3444952F7592E862592 (Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588* __this, String_t* ___key0, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588*, String_t*, const RuntimeMethod*))Dictionary_2_get_Item_mA019F7A495B48EF2A6E5D36977DB3EA09A47ECDB_gshared)(__this, ___key0, method);
}
// T System.Collections.Generic.List`1<System.Double[]>::get_Item(System.Int32)
inline DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* List_1_get_Item_mBCF1516ECF7285668A96B426CD6C201113395AB2 (List_1_t64FC2174A52DBC518FB499976FF0BA043E643411* __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* (*) (List_1_t64FC2174A52DBC518FB499976FF0BA043E643411*, int32_t, const RuntimeMethod*))List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared)(__this, ___index0, method);
}
// System.Single SeatedAdultSliderAdjust::calcCoords(System.Double[],System.Double[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float SeatedAdultSliderAdjust_calcCoords_m0DDD3650DC25004D581299790B37A44F409DD1D7 (SeatedAdultSliderAdjust_tD13DF139016030F050F1A488125C2796C6DA9842* __this, DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* ___diffAnths0, DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* ___onePCAdata1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Mesh::set_vertices(UnityEngine.Vector3[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mesh_set_vertices_m5BB814D89E9ACA00DBF19F7D8E22CB73AC73FE5C (Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* __this, Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Mesh::RecalculateNormals()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mesh_RecalculateNormals_m3AA2788914611444E030CA310E03E3CFE683902B (Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Mesh::RecalculateBounds()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mesh_RecalculateBounds_mA9B293F57C6CD298AE2D2DB19061FC23B05AB90B (Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::DetachChildren()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_DetachChildren_m7E4B3405F2F053B059E76EC1DF0F235EED335D69 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.GameObject UnityEngine.GameObject::Find(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* GameObject_Find_m7A669B4EEC2617AB82F6E3FF007CDCD9F21DB300 (String_t* ___name0, const RuntimeMethod* method) ;
// System.Void SeatedAdultSliderAdjust::CreateLandmarks()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SeatedAdultSliderAdjust_CreateLandmarks_m13699B43FA0836ECE2F0C063B1740C5F3D5F0476 (SeatedAdultSliderAdjust_tD13DF139016030F050F1A488125C2796C6DA9842* __this, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B (String_t* ___str00, String_t* ___str11, String_t* ___str22, const RuntimeMethod* method) ;
// System.Single SeatedAdultSliderAdjust::Truncate(System.Single,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float SeatedAdultSliderAdjust_Truncate_mBFE8DAE325A902DE2DBAA00A4186544E9241EBE5 (float ___value0, int32_t ___digits1, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m9E3155FB84015C823606188F53B47CB44C444991 (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method) ;
// System.Void UnityEngine.GameObject::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject__ctor_m37D512B05D292F954792225E6C6EEE95293A9B88 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, String_t* ___name0, const RuntimeMethod* method) ;
// UnityEngine.GameObject UnityEngine.GameObject::CreatePrimitive(UnityEngine.PrimitiveType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* GameObject_CreatePrimitive_m13C0A691E679A83DD595913200A1DD9A906EB47B (int32_t ___type0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<UnityEngine.Renderer>()
inline Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* GameObject_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_m026EB44DB6238F13E2AFBECF1FBBE924CB1B040A (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// UnityEngine.Material UnityEngine.Renderer::get_material()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* Renderer_get_material_m5BA2A00816C4CC66580D4B2E409CF10718C15656 (Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* __this, const RuntimeMethod* method) ;
// UnityEngine.Color UnityEngine.Color::get_green()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_green_mEB001F2CD8C68C6BBAEF9101990B779D3AA2A6EF_inline (const RuntimeMethod* method) ;
// System.Void UnityEngine.Material::set_color(UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Material_set_color_m5C32DEBB215FF9EE35E7B575297D8C2F29CC2A2D (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* __this, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Renderer::set_shadowCastingMode(UnityEngine.Rendering.ShadowCastingMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Renderer_set_shadowCastingMode_mB0CD3D153E43044388AEFF7AEFDA93E80EB36D11 (Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* __this, int32_t ___value0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Addition(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_localScale(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_parent(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_parent_m9BD5E563B539DD5BEC342736B03F97B38A243234 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___value0, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::Euler(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_Euler_m9262AB29E3E9CE94EF71051F38A28E82AEC73F90_inline (float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_localRotation(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localRotation_mAB4A011D134BA58AB780BECC0025CA65F16185FA (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::Rotate(UnityEngine.Vector3,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_Rotate_m35B44707FE16FF8015D519D8C162C0B4A85D6D1F (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___axis0, float ___angle1, const RuntimeMethod* method) ;
// System.Double System.Math::Pow(System.Double,System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double Math_Pow_mEAE651F0858203FBE12B72B6A53951BBD0FB5265 (double ___x0, double ___y1, const RuntimeMethod* method) ;
// System.Double System.Math::Truncate(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double Math_Truncate_mE66B1AD68C17D27675DE0CB74643374F9EDB649C (double ___d0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Double[]>::.ctor()
inline void List_1__ctor_mF1433DDB1AE70FFD55B9A5791233ED33F24D45A9 (List_1_t64FC2174A52DBC518FB499976FF0BA043E643411* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t64FC2174A52DBC518FB499976FF0BA043E643411*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::.ctor()
inline void Dictionary_2__ctor_mA3C3860EDE2CDD08BBD68C389377BC89D029D968 (Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588*, const RuntimeMethod*))Dictionary_2__ctor_m517E7F9D104FEAE6646EABDDC9C852510E86077C_gshared)(__this, method);
}
// UnityEngine.Vector3[] ChildSliderAdjust::getCorrectVertices()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ChildSliderAdjust_getCorrectVertices_m138937BCE74BB021D43972DF5E950B09E1AC2566 (ChildSliderAdjust_tC0DEE6A2D001C242F02023FEB35AADEE22C4808D* __this, const RuntimeMethod* method) ;
// System.Single ChildSliderAdjust::calcCoords(System.Double[],System.Double[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float ChildSliderAdjust_calcCoords_mF3985CE54E0C4B8E6CA47ED40BF93C78FF078BB5 (ChildSliderAdjust_tC0DEE6A2D001C242F02023FEB35AADEE22C4808D* __this, DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* ___diffAnths0, DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* ___onePCAdata1, const RuntimeMethod* method) ;
// System.Void ChildSliderAdjust::CreateLandmarks()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChildSliderAdjust_CreateLandmarks_m96F451AE1E41AE60961C8EFA2777725475E782DB (ChildSliderAdjust_tC0DEE6A2D001C242F02023FEB35AADEE22C4808D* __this, const RuntimeMethod* method) ;
// System.Single ChildSliderAdjust::Truncate(System.Single,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float ChildSliderAdjust_Truncate_mC108531237E8525B1152AB7C8BBFEDD47311A88A (float ___value0, int32_t ___digits1, const RuntimeMethod* method) ;
// UnityEngine.Vector3[] FemaleSliderAdjust::getCorrectVertices()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* FemaleSliderAdjust_getCorrectVertices_m79868BB97E97504B5A17CD74A345C5347F71E201 (FemaleSliderAdjust_t6CC4FA9B9643A8D49EE97BE27C96A8348113D837* __this, const RuntimeMethod* method) ;
// System.Single FemaleSliderAdjust::calcCoords(System.Double[],System.Double[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float FemaleSliderAdjust_calcCoords_mF80F88072C64F589EDE4A91ACE89B6FBCEA3F32A (FemaleSliderAdjust_t6CC4FA9B9643A8D49EE97BE27C96A8348113D837* __this, DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* ___diffAnths0, DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* ___onePCAdata1, const RuntimeMethod* method) ;
// System.Void FemaleSliderAdjust::CreateLandmarks()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FemaleSliderAdjust_CreateLandmarks_mA1BE76FC01E6C20D3FB4A6AEF3A86987B253A898 (FemaleSliderAdjust_t6CC4FA9B9643A8D49EE97BE27C96A8348113D837* __this, const RuntimeMethod* method) ;
// System.Single FemaleSliderAdjust::Truncate(System.Single,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float FemaleSliderAdjust_Truncate_mD0D850A434668EC14072B03E1C907731C10365DE (float ___value0, int32_t ___digits1, const RuntimeMethod* method) ;
// UnityEngine.Vector3[] MaleSliderAdjust::getCorrectVertices()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* MaleSliderAdjust_getCorrectVertices_mE0A0682BB1A0AA8248CB0DC0AED7743BD71732DA (MaleSliderAdjust_tA7DA9AE649A08FBB56C79BDAD0CD6D563D1776F4* __this, const RuntimeMethod* method) ;
// System.Single MaleSliderAdjust::calcCoords(System.Double[],System.Double[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float MaleSliderAdjust_calcCoords_m84B47B438981DEA09EE9EC0C9466ED0965D4CABD (MaleSliderAdjust_tA7DA9AE649A08FBB56C79BDAD0CD6D563D1776F4* __this, DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* ___diffAnths0, DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* ___onePCAdata1, const RuntimeMethod* method) ;
// System.Void MaleSliderAdjust::CreateLandmarks()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MaleSliderAdjust_CreateLandmarks_m1551B6584731D86F314E595C259E936D5D069673 (MaleSliderAdjust_tA7DA9AE649A08FBB56C79BDAD0CD6D563D1776F4* __this, const RuntimeMethod* method) ;
// System.Single MaleSliderAdjust::Truncate(System.Single,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float MaleSliderAdjust_Truncate_m07A49BE803A79E3CD362FFC04C50B5152DD6264B (float ___value0, int32_t ___digits1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Color::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* __this, float ___r0, float ___g1, float ___b2, float ___a3, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, float ___d1, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::Internal_FromEulerRad(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_Internal_FromEulerRad_m66D4475341F53949471E6870FB5C5E4A5E9BA93E (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___euler0, const RuntimeMethod* method) ;
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void AmbientLightManager::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AmbientLightManager_Start_mD7E10C901A9956AC73B3F750CF9B5008A0990A4D (AmbientLightManager_tF2645E65EF2967DB6BE884BC67C6C761A0F0852E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AmbientLightManager_OnVuforiaStarted_mE7202223515866CAB2CFB1E54AE25540C21855E6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisLight_t1E68479B7782AF2050FAA02A5DC612FD034F18F3_mF4816FA12B6F220CA55D47D669D7E50DC118B9E9_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// VuforiaApplication.Instance.OnVuforiaStarted += OnVuforiaStarted;
		VuforiaApplication_t84202EE6AE3488947F9398AA46BAB1D6F7CCDA46* L_0;
		L_0 = VuforiaApplication_get_Instance_mAD5B1238C27A229C127BD1E44677713D1CE0FC03(NULL);
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_1 = (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)il2cpp_codegen_object_new(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC(L_1, __this, (intptr_t)((void*)AmbientLightManager_OnVuforiaStarted_mE7202223515866CAB2CFB1E54AE25540C21855E6_RuntimeMethod_var), NULL);
		NullCheck(L_0);
		VuforiaApplication_add_OnVuforiaStarted_mE13713AD839E4F3A635FF321BF28BE990F6E49CE(L_0, L_1, NULL);
		// mSceneLight = GetComponent<Light>();
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_2;
		L_2 = Component_GetComponent_TisLight_t1E68479B7782AF2050FAA02A5DC612FD034F18F3_mF4816FA12B6F220CA55D47D669D7E50DC118B9E9(__this, Component_GetComponent_TisLight_t1E68479B7782AF2050FAA02A5DC612FD034F18F3_mF4816FA12B6F220CA55D47D669D7E50DC118B9E9_RuntimeMethod_var);
		__this->___mSceneLight_4 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___mSceneLight_4), (void*)L_2);
		// mMaxIntensity = mSceneLight.intensity;
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_3 = __this->___mSceneLight_4;
		NullCheck(L_3);
		float L_4;
		L_4 = Light_get_intensity_m8FA28D515853068A93FA68B2148809BBEE4E710F(L_3, NULL);
		__this->___mMaxIntensity_5 = L_4;
		// }
		return;
	}
}
// System.Void AmbientLightManager::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AmbientLightManager_Update_m86DCEDEB865F67E826E2E1CF4816426D9B3D805B (AmbientLightManager_tF2645E65EF2967DB6BE884BC67C6C761A0F0852E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_HasValue_mC149B1C717AF506BBE8932F2C1DC86C378D17EA8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_Value_mE3B978271FFA8D9DEE17BFB34320A3C67BE148EA_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75 V_0;
	memset((&V_0), 0, sizeof(V_0));
	float V_1 = 0.0f;
	{
		// if (mVuforiaWorld != null && mVuforiaWorld.IlluminationData.AmbientIntensity != null)
		World_t0332C3F77BBFBA826A13D263DAED199D01BCE050* L_0 = __this->___mVuforiaWorld_6;
		if (!L_0)
		{
			goto IL_0069;
		}
	}
	{
		World_t0332C3F77BBFBA826A13D263DAED199D01BCE050* L_1 = __this->___mVuforiaWorld_6;
		NullCheck(L_1);
		IlluminationData_t907CE8A9106AC295312099ACA9EF74970E3AE7D4* L_2;
		L_2 = World_get_IlluminationData_m8E82AC2FFF506E365559AD100C451D87233E5AA6_inline(L_1, NULL);
		NullCheck(L_2);
		Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75 L_3;
		L_3 = IlluminationData_get_AmbientIntensity_m6DB0677A757B9CF70D07F929D492BF597BAF245E(L_2, NULL);
		V_0 = L_3;
		bool L_4;
		L_4 = Nullable_1_get_HasValue_mC149B1C717AF506BBE8932F2C1DC86C378D17EA8_inline((&V_0), Nullable_1_get_HasValue_mC149B1C717AF506BBE8932F2C1DC86C378D17EA8_RuntimeMethod_var);
		if (!L_4)
		{
			goto IL_0069;
		}
	}
	{
		// var intensity = mVuforiaWorld.IlluminationData.AmbientIntensity.Value / 1000f;
		World_t0332C3F77BBFBA826A13D263DAED199D01BCE050* L_5 = __this->___mVuforiaWorld_6;
		NullCheck(L_5);
		IlluminationData_t907CE8A9106AC295312099ACA9EF74970E3AE7D4* L_6;
		L_6 = World_get_IlluminationData_m8E82AC2FFF506E365559AD100C451D87233E5AA6_inline(L_5, NULL);
		NullCheck(L_6);
		Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75 L_7;
		L_7 = IlluminationData_get_AmbientIntensity_m6DB0677A757B9CF70D07F929D492BF597BAF245E(L_6, NULL);
		V_0 = L_7;
		float L_8;
		L_8 = Nullable_1_get_Value_mE3B978271FFA8D9DEE17BFB34320A3C67BE148EA((&V_0), Nullable_1_get_Value_mE3B978271FFA8D9DEE17BFB34320A3C67BE148EA_RuntimeMethod_var);
		V_1 = ((float)(L_8/(1000.0f)));
		// mSceneLight.intensity = Mathf.Clamp(intensity, 0, mMaxIntensity);
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_9 = __this->___mSceneLight_4;
		float L_10 = V_1;
		float L_11 = __this->___mMaxIntensity_5;
		float L_12;
		L_12 = Mathf_Clamp_mEB9AEA827D27D20FCC787F7375156AF46BB12BBF_inline(L_10, (0.0f), L_11, NULL);
		NullCheck(L_9);
		Light_set_intensity_mE4820C7F39F490B92ED5EA0C3AADA7C0775BE854(L_9, L_12, NULL);
		// RenderSettings.ambientIntensity = Mathf.Clamp01(intensity);
		float L_13 = V_1;
		float L_14;
		L_14 = Mathf_Clamp01_mA7E048DBDA832D399A581BE4D6DED9FA44CE0F14_inline(L_13, NULL);
		RenderSettings_set_ambientIntensity_m27875436E47E2D28C13F362DAE9C24D0DEC4A844(L_14, NULL);
		return;
	}

IL_0069:
	{
		// mSceneLight.intensity = mMaxIntensity;
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_15 = __this->___mSceneLight_4;
		float L_16 = __this->___mMaxIntensity_5;
		NullCheck(L_15);
		Light_set_intensity_mE4820C7F39F490B92ED5EA0C3AADA7C0775BE854(L_15, L_16, NULL);
		// }
		return;
	}
}
// System.Void AmbientLightManager::OnDestroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AmbientLightManager_OnDestroy_mBBA0378FC1776D7274F6476812BD063B3221856C (AmbientLightManager_tF2645E65EF2967DB6BE884BC67C6C761A0F0852E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AmbientLightManager_OnVuforiaStarted_mE7202223515866CAB2CFB1E54AE25540C21855E6_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// VuforiaApplication.Instance.OnVuforiaStarted -= OnVuforiaStarted;
		VuforiaApplication_t84202EE6AE3488947F9398AA46BAB1D6F7CCDA46* L_0;
		L_0 = VuforiaApplication_get_Instance_mAD5B1238C27A229C127BD1E44677713D1CE0FC03(NULL);
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_1 = (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)il2cpp_codegen_object_new(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC(L_1, __this, (intptr_t)((void*)AmbientLightManager_OnVuforiaStarted_mE7202223515866CAB2CFB1E54AE25540C21855E6_RuntimeMethod_var), NULL);
		NullCheck(L_0);
		VuforiaApplication_remove_OnVuforiaStarted_m5D03D7619DABF168B877F079AEA48AEB98104B7D(L_0, L_1, NULL);
		// }
		return;
	}
}
// System.Void AmbientLightManager::OnVuforiaStarted()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AmbientLightManager_OnVuforiaStarted_mE7202223515866CAB2CFB1E54AE25540C21855E6 (AmbientLightManager_tF2645E65EF2967DB6BE884BC67C6C761A0F0852E* __this, const RuntimeMethod* method) 
{
	{
		// mVuforiaWorld = VuforiaBehaviour.Instance.World;
		VuforiaBehaviour_t53608E2BEC77029C0140CB1E88A0B186FC5E76C6* L_0;
		L_0 = VuforiaBehaviour_get_Instance_m8429CB479D68EA7506815B46E9D9AA09C8F90EA0(NULL);
		NullCheck(L_0);
		World_t0332C3F77BBFBA826A13D263DAED199D01BCE050* L_1;
		L_1 = VuforiaBehaviour_get_World_m14A8271B023273D49C261BE6EC1378C16EB7B900_inline(L_0, NULL);
		__this->___mVuforiaWorld_6 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___mVuforiaWorld_6), (void*)L_1);
		// }
		return;
	}
}
// System.Void AmbientLightManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AmbientLightManager__ctor_m1846243FC78B23FA7A28C3195BCE4239DA948351 (AmbientLightManager_tF2645E65EF2967DB6BE884BC67C6C761A0F0852E* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void DevicePoseManager::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DevicePoseManager_Start_mB8487DC9A5106FDBF2EDD43E1854E8A1BD162DBD (DevicePoseManager_t6DB16271316039E99F4EBFD596A637CEB4439F90* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_tF4CAAB52A69FEBB4D629E2D59C8EE77A263FEE43_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_2_tAC0AA9B652075EE1CE661500AC3373C7008D598F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DevicePoseManager_OnTargetStatusChanged_mC249B817F77C0A7F7FEB0F958D2EA45AFEB9340D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DevicePoseManager_OnVuforiaInitialized_m39CC7EF7840915A6931A6FDCBDE1A07A89395003_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DevicePoseManager_TimerFinished_m1AA848382ED4DE3EFD36D471216C4D2C5293E631_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ElapsedEventHandler_tCA26B9E70A5EDB91678F46BCD15547D752D2BA51_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Timer_t10D85D58F4AC0CF80C625D0124B12098CE540A8B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// VuforiaApplication.Instance.OnVuforiaInitialized += OnVuforiaInitialized;
		VuforiaApplication_t84202EE6AE3488947F9398AA46BAB1D6F7CCDA46* L_0;
		L_0 = VuforiaApplication_get_Instance_mAD5B1238C27A229C127BD1E44677713D1CE0FC03(NULL);
		Action_1_tF4CAAB52A69FEBB4D629E2D59C8EE77A263FEE43* L_1 = (Action_1_tF4CAAB52A69FEBB4D629E2D59C8EE77A263FEE43*)il2cpp_codegen_object_new(Action_1_tF4CAAB52A69FEBB4D629E2D59C8EE77A263FEE43_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		Action_1__ctor_m8A690F1FC4364CB01C8C5E118C24E8B37963FDC1(L_1, __this, (intptr_t)((void*)DevicePoseManager_OnVuforiaInitialized_m39CC7EF7840915A6931A6FDCBDE1A07A89395003_RuntimeMethod_var), NULL);
		NullCheck(L_0);
		VuforiaApplication_add_OnVuforiaInitialized_m35EEFC8D4F23F86714C144AD37F4C6C1DB49E18E(L_0, L_1, NULL);
		// VuforiaBehaviour.Instance.DevicePoseBehaviour.OnTargetStatusChanged += OnTargetStatusChanged;
		VuforiaBehaviour_t53608E2BEC77029C0140CB1E88A0B186FC5E76C6* L_2;
		L_2 = VuforiaBehaviour_get_Instance_m8429CB479D68EA7506815B46E9D9AA09C8F90EA0(NULL);
		NullCheck(L_2);
		DevicePoseBehaviour_tB66D2A5B7C7DA1929EC742544831049B124BD642* L_3;
		L_3 = VuforiaBehaviour_get_DevicePoseBehaviour_m69EBBECA75E0D757A1660354780BBF4C7FD156B1_inline(L_2, NULL);
		Action_2_tAC0AA9B652075EE1CE661500AC3373C7008D598F* L_4 = (Action_2_tAC0AA9B652075EE1CE661500AC3373C7008D598F*)il2cpp_codegen_object_new(Action_2_tAC0AA9B652075EE1CE661500AC3373C7008D598F_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		Action_2__ctor_mCE1D840FD103AC1247B1231CAB0A34B795A2978C(L_4, __this, (intptr_t)((void*)DevicePoseManager_OnTargetStatusChanged_mC249B817F77C0A7F7FEB0F958D2EA45AFEB9340D_RuntimeMethod_var), NULL);
		NullCheck(L_3);
		ObserverBehaviour_add_OnTargetStatusChanged_m3EEEEDBF95D9B118056440AACBC08A516975FA6F(L_3, L_4, NULL);
		// mTimer = new Timer(RELOCALIZATION_TIMER);
		Timer_t10D85D58F4AC0CF80C625D0124B12098CE540A8B* L_5 = (Timer_t10D85D58F4AC0CF80C625D0124B12098CE540A8B*)il2cpp_codegen_object_new(Timer_t10D85D58F4AC0CF80C625D0124B12098CE540A8B_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		Timer__ctor_m40D0F904597F9E12A41E23A6800AFDBD964CDAFD(L_5, (10000.0), NULL);
		__this->___mTimer_10 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___mTimer_10), (void*)L_5);
		// mTimer.Elapsed += TimerFinished;
		Timer_t10D85D58F4AC0CF80C625D0124B12098CE540A8B* L_6 = __this->___mTimer_10;
		ElapsedEventHandler_tCA26B9E70A5EDB91678F46BCD15547D752D2BA51* L_7 = (ElapsedEventHandler_tCA26B9E70A5EDB91678F46BCD15547D752D2BA51*)il2cpp_codegen_object_new(ElapsedEventHandler_tCA26B9E70A5EDB91678F46BCD15547D752D2BA51_il2cpp_TypeInfo_var);
		NullCheck(L_7);
		ElapsedEventHandler__ctor_mAB5D9F11BB0B719A17105C636543958CC6F78CBD(L_7, __this, (intptr_t)((void*)DevicePoseManager_TimerFinished_m1AA848382ED4DE3EFD36D471216C4D2C5293E631_RuntimeMethod_var), NULL);
		NullCheck(L_6);
		Timer_add_Elapsed_mA30E2E614E703D6FD8260EB10575C0FB719C0B5D(L_6, L_7, NULL);
		// mTimer.AutoReset = false;
		Timer_t10D85D58F4AC0CF80C625D0124B12098CE540A8B* L_8 = __this->___mTimer_10;
		NullCheck(L_8);
		Timer_set_AutoReset_mCDD4362A339ADAA69BAB7FE596BE400C161C328D(L_8, (bool)0, NULL);
		// }
		return;
	}
}
// System.Void DevicePoseManager::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DevicePoseManager_Update_m5FD161CB74EB33BF3D9DE9C72118E04B038E542D (DevicePoseManager_t6DB16271316039E99F4EBFD596A637CEB4439F90* __this, const RuntimeMethod* method) 
{
	DevicePoseResetEvent_tAC0B6D678A899DFD6B5422B6A574C27C60C9280C* G_B3_0 = NULL;
	DevicePoseResetEvent_tAC0B6D678A899DFD6B5422B6A574C27C60C9280C* G_B2_0 = NULL;
	{
		// if (mTimerFinished)
		bool L_0 = __this->___mTimerFinished_11;
		if (!L_0)
		{
			goto IL_0026;
		}
	}
	{
		// ResetDevicePose();
		DevicePoseManager_ResetDevicePose_m4890F06F001C1F7CE2574F44AEBE0D9B672BB2A7(__this, NULL);
		// DevicePoseReset?.Invoke();
		DevicePoseResetEvent_tAC0B6D678A899DFD6B5422B6A574C27C60C9280C* L_1 = __this->___DevicePoseReset_5;
		DevicePoseResetEvent_tAC0B6D678A899DFD6B5422B6A574C27C60C9280C* L_2 = L_1;
		G_B2_0 = L_2;
		if (L_2)
		{
			G_B3_0 = L_2;
			goto IL_001a;
		}
	}
	{
		goto IL_001f;
	}

IL_001a:
	{
		NullCheck(G_B3_0);
		UnityEvent_Invoke_mFBF80D59B03C30C5FE6A06F897D954ACADE061D2(G_B3_0, NULL);
	}

IL_001f:
	{
		// mTimerFinished = false;
		__this->___mTimerFinished_11 = (bool)0;
	}

IL_0026:
	{
		// }
		return;
	}
}
// System.Void DevicePoseManager::OnDestroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DevicePoseManager_OnDestroy_m585E8AA947A944EE25B293F3DFB5D04426223A88 (DevicePoseManager_t6DB16271316039E99F4EBFD596A637CEB4439F90* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_tF4CAAB52A69FEBB4D629E2D59C8EE77A263FEE43_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_2_tAC0AA9B652075EE1CE661500AC3373C7008D598F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DevicePoseManager_OnTargetStatusChanged_mC249B817F77C0A7F7FEB0F958D2EA45AFEB9340D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DevicePoseManager_OnVuforiaInitialized_m39CC7EF7840915A6931A6FDCBDE1A07A89395003_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// VuforiaApplication.Instance.OnVuforiaInitialized -= OnVuforiaInitialized;
		VuforiaApplication_t84202EE6AE3488947F9398AA46BAB1D6F7CCDA46* L_0;
		L_0 = VuforiaApplication_get_Instance_mAD5B1238C27A229C127BD1E44677713D1CE0FC03(NULL);
		Action_1_tF4CAAB52A69FEBB4D629E2D59C8EE77A263FEE43* L_1 = (Action_1_tF4CAAB52A69FEBB4D629E2D59C8EE77A263FEE43*)il2cpp_codegen_object_new(Action_1_tF4CAAB52A69FEBB4D629E2D59C8EE77A263FEE43_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		Action_1__ctor_m8A690F1FC4364CB01C8C5E118C24E8B37963FDC1(L_1, __this, (intptr_t)((void*)DevicePoseManager_OnVuforiaInitialized_m39CC7EF7840915A6931A6FDCBDE1A07A89395003_RuntimeMethod_var), NULL);
		NullCheck(L_0);
		VuforiaApplication_remove_OnVuforiaInitialized_m791D07F37D6A1C4EECF15F2A3121386C9B0E3FB6(L_0, L_1, NULL);
		// if (VuforiaBehaviour.Instance != null)
		VuforiaBehaviour_t53608E2BEC77029C0140CB1E88A0B186FC5E76C6* L_2;
		L_2 = VuforiaBehaviour_get_Instance_m8429CB479D68EA7506815B46E9D9AA09C8F90EA0(NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_2, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_3)
		{
			goto IL_003e;
		}
	}
	{
		// VuforiaBehaviour.Instance.DevicePoseBehaviour.OnTargetStatusChanged -= OnTargetStatusChanged;
		VuforiaBehaviour_t53608E2BEC77029C0140CB1E88A0B186FC5E76C6* L_4;
		L_4 = VuforiaBehaviour_get_Instance_m8429CB479D68EA7506815B46E9D9AA09C8F90EA0(NULL);
		NullCheck(L_4);
		DevicePoseBehaviour_tB66D2A5B7C7DA1929EC742544831049B124BD642* L_5;
		L_5 = VuforiaBehaviour_get_DevicePoseBehaviour_m69EBBECA75E0D757A1660354780BBF4C7FD156B1_inline(L_4, NULL);
		Action_2_tAC0AA9B652075EE1CE661500AC3373C7008D598F* L_6 = (Action_2_tAC0AA9B652075EE1CE661500AC3373C7008D598F*)il2cpp_codegen_object_new(Action_2_tAC0AA9B652075EE1CE661500AC3373C7008D598F_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		Action_2__ctor_mCE1D840FD103AC1247B1231CAB0A34B795A2978C(L_6, __this, (intptr_t)((void*)DevicePoseManager_OnTargetStatusChanged_mC249B817F77C0A7F7FEB0F958D2EA45AFEB9340D_RuntimeMethod_var), NULL);
		NullCheck(L_5);
		ObserverBehaviour_remove_OnTargetStatusChanged_m6B5ABC6137D8E98EA690366D721D44C76C1FA08C(L_5, L_6, NULL);
	}

IL_003e:
	{
		// }
		return;
	}
}
// System.Void DevicePoseManager::ResetDevicePose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DevicePoseManager_ResetDevicePose_m4890F06F001C1F7CE2574F44AEBE0D9B672BB2A7 (DevicePoseManager_t6DB16271316039E99F4EBFD596A637CEB4439F90* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA707D1D4AF87E486B7A7E675DB6F5147B4F0D2D6);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log("ResetDevicePose() called.");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteralA707D1D4AF87E486B7A7E675DB6F5147B4F0D2D6, NULL);
		// if (AnchorBehaviour != null)
		AnchorBehaviour_t81952CE5FBF39AD5C2F0C5E2FE109B0B10A2824F* L_0 = __this->___AnchorBehaviour_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_0023;
		}
	}
	{
		// AnchorBehaviour.UnconfigureAnchor();
		AnchorBehaviour_t81952CE5FBF39AD5C2F0C5E2FE109B0B10A2824F* L_2 = __this->___AnchorBehaviour_4;
		NullCheck(L_2);
		AnchorBehaviour_UnconfigureAnchor_mF680277271D19B8853B852D05BFC19883C81415E(L_2, NULL);
	}

IL_0023:
	{
		// VuforiaBehaviour.Instance.DevicePoseBehaviour.Reset();
		VuforiaBehaviour_t53608E2BEC77029C0140CB1E88A0B186FC5E76C6* L_3;
		L_3 = VuforiaBehaviour_get_Instance_m8429CB479D68EA7506815B46E9D9AA09C8F90EA0(NULL);
		NullCheck(L_3);
		DevicePoseBehaviour_tB66D2A5B7C7DA1929EC742544831049B124BD642* L_4;
		L_4 = VuforiaBehaviour_get_DevicePoseBehaviour_m69EBBECA75E0D757A1660354780BBF4C7FD156B1_inline(L_3, NULL);
		NullCheck(L_4);
		bool L_5;
		L_5 = DevicePoseBehaviour_Reset_m51E0256CAD27311D49EABF046C90D2C78AC4F665(L_4, NULL);
		// }
		return;
	}
}
// System.Void DevicePoseManager::TimerFinished(System.Object,System.Timers.ElapsedEventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DevicePoseManager_TimerFinished_m1AA848382ED4DE3EFD36D471216C4D2C5293E631 (DevicePoseManager_t6DB16271316039E99F4EBFD596A637CEB4439F90* __this, RuntimeObject* ___source0, ElapsedEventArgs_t74C1E2D692A82825805E5EC84EE73F5B053027C1* ___e1, const RuntimeMethod* method) 
{
	{
		// mTimerFinished = true;
		__this->___mTimerFinished_11 = (bool)1;
		// }
		return;
	}
}
// System.Void DevicePoseManager::OnVuforiaInitialized(Vuforia.VuforiaInitError)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DevicePoseManager_OnVuforiaInitialized_m39CC7EF7840915A6931A6FDCBDE1A07A89395003 (DevicePoseManager_t6DB16271316039E99F4EBFD596A637CEB4439F90* __this, int32_t ___initError0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral398F77A4A6F19B34322883912E92D9CD3D4CEB69);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral59DC65EE0B6710365B6D4795294C298C2B64FE45);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7BE9DF4FBCD8BB3BC9BC23AED208E15808A7DDF0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD17806780ED4EC8A606CD8433E3ED0E1DD9C873A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE1813766CECEAE59699FB571E548382CD8AF1752);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (initError != VuforiaInitError.NONE)
		int32_t L_0 = ___initError0;
		if (!L_0)
		{
			goto IL_0004;
		}
	}
	{
		// return;
		return;
	}

IL_0004:
	{
		// Debug.Log("OnVuforiaInitialized() called.");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteralD17806780ED4EC8A606CD8433E3ED0E1DD9C873A, NULL);
		// if (VuforiaBehaviour.Instance.World.AnchorsSupported)
		VuforiaBehaviour_t53608E2BEC77029C0140CB1E88A0B186FC5E76C6* L_1;
		L_1 = VuforiaBehaviour_get_Instance_m8429CB479D68EA7506815B46E9D9AA09C8F90EA0(NULL);
		NullCheck(L_1);
		World_t0332C3F77BBFBA826A13D263DAED199D01BCE050* L_2;
		L_2 = VuforiaBehaviour_get_World_m14A8271B023273D49C261BE6EC1378C16EB7B900_inline(L_1, NULL);
		NullCheck(L_2);
		bool L_3;
		L_3 = World_get_AnchorsSupported_m4776F1C4F0CCA0EBC383876FE114E00E153F5FBE(L_2, NULL);
		if (!L_3)
		{
			goto IL_0046;
		}
	}
	{
		// if (!VuforiaBehaviour.Instance.DevicePoseBehaviour.enabled)
		VuforiaBehaviour_t53608E2BEC77029C0140CB1E88A0B186FC5E76C6* L_4;
		L_4 = VuforiaBehaviour_get_Instance_m8429CB479D68EA7506815B46E9D9AA09C8F90EA0(NULL);
		NullCheck(L_4);
		DevicePoseBehaviour_tB66D2A5B7C7DA1929EC742544831049B124BD642* L_5;
		L_5 = VuforiaBehaviour_get_DevicePoseBehaviour_m69EBBECA75E0D757A1660354780BBF4C7FD156B1_inline(L_4, NULL);
		NullCheck(L_5);
		bool L_6;
		L_6 = Behaviour_get_enabled_mAAC9F15E9EBF552217A5AE2681589CC0BFA300C1(L_5, NULL);
		if (L_6)
		{
			goto IL_003b;
		}
	}
	{
		// Debug.LogError("The Ground Plane feature requires the Device Tracking to be started. " +
		//                "Please enable it in the Vuforia Configuration or start it at runtime through the scripting API.");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(_stringLiteral59DC65EE0B6710365B6D4795294C298C2B64FE45, NULL);
		// return;
		return;
	}

IL_003b:
	{
		// Debug.Log("DevicePoseBehaviour is Active");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteralE1813766CECEAE59699FB571E548382CD8AF1752, NULL);
		return;
	}

IL_0046:
	{
		// MessageBox.DisplayMessageBox(UNSUPPORTED_DEVICE_TITLE, UNSUPPORTED_DEVICE_BODY, false, null);
		MessageBox_DisplayMessageBox_m826BDDA5EAB089B17C50A63F0C9CFAF591392428(_stringLiteral398F77A4A6F19B34322883912E92D9CD3D4CEB69, _stringLiteral7BE9DF4FBCD8BB3BC9BC23AED208E15808A7DDF0, (bool)0, (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)NULL, NULL);
		// }
		return;
	}
}
// System.Void DevicePoseManager::OnTargetStatusChanged(Vuforia.ObserverBehaviour,Vuforia.TargetStatus)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DevicePoseManager_OnTargetStatusChanged_mC249B817F77C0A7F7FEB0F958D2EA45AFEB9340D (DevicePoseManager_t6DB16271316039E99F4EBFD596A637CEB4439F90* __this, ObserverBehaviour_t5523404662BA53BE6118C49F6FFA9E19719115DB* ___behaviour0, TargetStatus_t5D866F1CAA9D70E5B66D532E69B190EA3BAAC4B0 ___targetStatus1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StatusInfo_t6EEEAE24754AB13B2945AD3DB790DFC5A3872195_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Status_tF1F7D6087AB6A32AF3BDDD41F4BAE7ED3E596223_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7CE25448A2EB4AE0BD52ACCE03D1D5F01C5C3F99);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB3F14BF976EFD974E34846B742502C802FABAE9D);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		// Debug.Log("DevicePoseManager.OnTargetStatusChanged(" + targetStatus.Status + ", " + targetStatus.StatusInfo + ")");
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_0 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)5);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_1 = L_0;
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, _stringLiteral7CE25448A2EB4AE0BD52ACCE03D1D5F01C5C3F99);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteral7CE25448A2EB4AE0BD52ACCE03D1D5F01C5C3F99);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_2 = L_1;
		int32_t L_3;
		L_3 = TargetStatus_get_Status_m6CA973C4D857DCA6B775DF7E053B0990A83026A3_inline((&___targetStatus1), NULL);
		V_0 = L_3;
		Il2CppFakeBox<int32_t> L_4(Status_tF1F7D6087AB6A32AF3BDDD41F4BAE7ED3E596223_il2cpp_TypeInfo_var, (&V_0));
		String_t* L_5;
		L_5 = Enum_ToString_m946B0B83C4470457D0FF555D862022C72BB55741((Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2*)(&L_4), NULL);
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_5);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)L_5);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_6 = L_2;
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, _stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_7 = L_6;
		int32_t L_8;
		L_8 = TargetStatus_get_StatusInfo_mA52A044649A96018BDC52555018BB9412877B0E6_inline((&___targetStatus1), NULL);
		V_1 = L_8;
		Il2CppFakeBox<int32_t> L_9(StatusInfo_t6EEEAE24754AB13B2945AD3DB790DFC5A3872195_il2cpp_TypeInfo_var, (&V_1));
		String_t* L_10;
		L_10 = Enum_ToString_m946B0B83C4470457D0FF555D862022C72BB55741((Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2*)(&L_9), NULL);
		NullCheck(L_7);
		ArrayElementTypeCheck (L_7, L_10);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)L_10);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_11 = L_7;
		NullCheck(L_11);
		ArrayElementTypeCheck (L_11, _stringLiteralB3F14BF976EFD974E34846B742502C802FABAE9D);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteralB3F14BF976EFD974E34846B742502C802FABAE9D);
		String_t* L_12;
		L_12 = String_Concat_m647EBF831F54B6DF7D5AFA5FD012CF4EE7571B6A(L_11, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_12, NULL);
		// TargetStatus = targetStatus;
		TargetStatus_t5D866F1CAA9D70E5B66D532E69B190EA3BAAC4B0 L_13 = ___targetStatus1;
		__this->___TargetStatus_6 = L_13;
		// if (targetStatus.StatusInfo != StatusInfo.RELOCALIZING)
		int32_t L_14;
		L_14 = TargetStatus_get_StatusInfo_mA52A044649A96018BDC52555018BB9412877B0E6_inline((&___targetStatus1), NULL);
		if ((((int32_t)L_14) == ((int32_t)4)))
		{
			goto IL_0082;
		}
	}
	{
		// if (mTimer.Enabled)
		Timer_t10D85D58F4AC0CF80C625D0124B12098CE540A8B* L_15 = __this->___mTimer_10;
		NullCheck(L_15);
		bool L_16;
		L_16 = Timer_get_Enabled_m082C8CCFB9C6936523EDE3E8C8DD010C22EDA032_inline(L_15, NULL);
		if (!L_16)
		{
			goto IL_009a;
		}
	}
	{
		// mTimer.Stop();
		Timer_t10D85D58F4AC0CF80C625D0124B12098CE540A8B* L_17 = __this->___mTimer_10;
		NullCheck(L_17);
		Timer_Stop_mB59D0FF54146FC2B21E8030B56967535247F1740(L_17, NULL);
		return;
	}

IL_0082:
	{
		// if (!mTimer.Enabled)
		Timer_t10D85D58F4AC0CF80C625D0124B12098CE540A8B* L_18 = __this->___mTimer_10;
		NullCheck(L_18);
		bool L_19;
		L_19 = Timer_get_Enabled_m082C8CCFB9C6936523EDE3E8C8DD010C22EDA032_inline(L_18, NULL);
		if (L_19)
		{
			goto IL_009a;
		}
	}
	{
		// mTimer.Start();
		Timer_t10D85D58F4AC0CF80C625D0124B12098CE540A8B* L_20 = __this->___mTimer_10;
		NullCheck(L_20);
		Timer_Start_mEE6121E30291AD5E522532C5DC7A9C22FA4F3463(L_20, NULL);
	}

IL_009a:
	{
		// }
		return;
	}
}
// System.Void DevicePoseManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DevicePoseManager__ctor_m03AC3C83B703EFFAEE46A97F96B02AAB9682E5A1 (DevicePoseManager_t6DB16271316039E99F4EBFD596A637CEB4439F90* __this, const RuntimeMethod* method) 
{
	{
		// public TargetStatus TargetStatus = TargetStatus.NotObserved;
		TargetStatus_t5D866F1CAA9D70E5B66D532E69B190EA3BAAC4B0 L_0;
		L_0 = TargetStatus_get_NotObserved_m1BD5C70DBAAE7DE715BFB0B305617BEA9D84B65F(NULL);
		__this->___TargetStatus_6 = L_0;
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void DevicePoseManager/DevicePoseResetEvent::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DevicePoseResetEvent__ctor_m61A3706F90891BE4ED21364196D2BE231893054E (DevicePoseResetEvent_tAC0B6D678A899DFD6B5422B6A574C27C60C9280C* __this, const RuntimeMethod* method) 
{
	{
		UnityEvent__ctor_m03D3E5121B9A6100351984D0CE3050B909CD3235(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void LoadScene::LoadGivenScene()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LoadScene_LoadGivenScene_mCB845CE7722DE2D70259C134C5ABF8AF8FF20BA9 (LoadScene_t13789E834A08B06FF59FCCEA1BA366FC2965E335* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SceneManager.LoadScene(SceneToLoad, LoadSceneMode.Single);
		String_t* L_0 = __this->___SceneToLoad_4;
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_m2841705C02C450E42A44B5EEE2A6A2C4261FA3AF(L_0, 0, NULL);
		// }
		return;
	}
}
// System.Void LoadScene::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LoadScene__ctor_m560E29BD726E67BB4572A9B8098DD97BEFFF63DD (LoadScene_t13789E834A08B06FF59FCCEA1BA366FC2965E335* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void MessageBox::DisplayMessageBox(System.String,System.String,System.Boolean,System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MessageBox_DisplayMessageBox_m826BDDA5EAB089B17C50A63F0C9CFAF591392428 (String_t* ___title0, String_t* ___body1, bool ___dismissable2, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___dismissAction3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisMessageBox_t4E1C9DA3FBC7BAE7E61037CFCD99B2B5ED88EA3F_mF4A1EFD01DFE543E3626CE8C1A025ECBF6483C1D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisMessageBox_t4E1C9DA3FBC7BAE7E61037CFCD99B2B5ED88EA3F_m5740B252EAD2EDF092600A1E41AEB6032D1064EA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB4B06D7DF687F527DFCE1303D9CA96371C21AAA4);
		s_Il2CppMethodInitialized = true;
	}
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_0 = NULL;
	{
		// var prefab = (GameObject)Resources.Load(RESOURCES_MESSAGE_BOX_PREFAB_NAME);
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_0;
		L_0 = Resources_Load_mA66E7AA8D024B495158F157382C3A8528306FFEA(_stringLiteralB4B06D7DF687F527DFCE1303D9CA96371C21AAA4, NULL);
		V_0 = ((GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)CastclassSealed((RuntimeObject*)L_0, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var));
		// if (prefab)
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_1, NULL);
		if (!L_2)
		{
			goto IL_002c;
		}
	}
	{
		// var messageBox = Instantiate(prefab.GetComponent<MessageBox>());
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3 = V_0;
		NullCheck(L_3);
		MessageBox_t4E1C9DA3FBC7BAE7E61037CFCD99B2B5ED88EA3F* L_4;
		L_4 = GameObject_GetComponent_TisMessageBox_t4E1C9DA3FBC7BAE7E61037CFCD99B2B5ED88EA3F_mF4A1EFD01DFE543E3626CE8C1A025ECBF6483C1D(L_3, GameObject_GetComponent_TisMessageBox_t4E1C9DA3FBC7BAE7E61037CFCD99B2B5ED88EA3F_mF4A1EFD01DFE543E3626CE8C1A025ECBF6483C1D_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		MessageBox_t4E1C9DA3FBC7BAE7E61037CFCD99B2B5ED88EA3F* L_5;
		L_5 = Object_Instantiate_TisMessageBox_t4E1C9DA3FBC7BAE7E61037CFCD99B2B5ED88EA3F_m5740B252EAD2EDF092600A1E41AEB6032D1064EA(L_4, Object_Instantiate_TisMessageBox_t4E1C9DA3FBC7BAE7E61037CFCD99B2B5ED88EA3F_m5740B252EAD2EDF092600A1E41AEB6032D1064EA_RuntimeMethod_var);
		// messageBox.Setup(title, body, dismissable, dismissAction);
		String_t* L_6 = ___title0;
		String_t* L_7 = ___body1;
		bool L_8 = ___dismissable2;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_9 = ___dismissAction3;
		NullCheck(L_5);
		MessageBox_Setup_mA193EC21BA16AA19A67430236539FCC1DA7CDE1B(L_5, L_6, L_7, L_8, L_9, NULL);
	}

IL_002c:
	{
		// }
		return;
	}
}
// System.Void MessageBox::MessageBoxButton()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MessageBox_MessageBoxButton_m7E16662A0360444D918F14A3511EA9D06D3DA8C0 (MessageBox_t4E1C9DA3FBC7BAE7E61037CFCD99B2B5ED88EA3F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (mDelegateMessageBoxAction != null)
		DelegateMessageBoxButtonAction_tF92662C8A304ECF3D687E8AEB65D739E3FA46DC8* L_0 = __this->___mDelegateMessageBoxAction_5;
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		// mDelegateMessageBoxAction();
		DelegateMessageBoxButtonAction_tF92662C8A304ECF3D687E8AEB65D739E3FA46DC8* L_1 = __this->___mDelegateMessageBoxAction_5;
		NullCheck(L_1);
		DelegateMessageBoxButtonAction_Invoke_m819B234CE21CB5E6C60885499686A40607F8A8C2_inline(L_1, NULL);
	}

IL_0013:
	{
		// Destroy(gameObject);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2;
		L_2 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB(L_2, NULL);
		// }
		return;
	}
}
// System.Void MessageBox::Setup(System.String,System.String,System.Boolean,System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MessageBox_Setup_mA193EC21BA16AA19A67430236539FCC1DA7CDE1B (MessageBox_t4E1C9DA3FBC7BAE7E61037CFCD99B2B5ED88EA3F* __this, String_t* ___title0, String_t* ___body1, bool ___dismissable2, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___closeButton3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponentInChildren_TisButton_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098_m16CFA6B8AD1C67BA8A7BCB3465E5C20064DEE5DB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponentsInChildren_TisText_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_m3FC915DEC37CE1CE6E48A26D44655BAE36FD140E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DelegateMessageBoxButtonAction_tF92662C8A304ECF3D687E8AEB65D739E3FA46DC8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* V_0 = NULL;
	{
		// mTextComponents = GetComponentsInChildren<Text>();
		TextU5BU5D_t1D476A037C4542F053D17ADAFA2723F311F9A353* L_0;
		L_0 = Component_GetComponentsInChildren_TisText_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_m3FC915DEC37CE1CE6E48A26D44655BAE36FD140E(__this, Component_GetComponentsInChildren_TisText_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_m3FC915DEC37CE1CE6E48A26D44655BAE36FD140E_RuntimeMethod_var);
		__this->___mTextComponents_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___mTextComponents_4), (void*)L_0);
		// if (mTextComponents.Length >= 2)
		TextU5BU5D_t1D476A037C4542F053D17ADAFA2723F311F9A353* L_1 = __this->___mTextComponents_4;
		NullCheck(L_1);
		if ((((int32_t)((int32_t)(((RuntimeArray*)L_1)->max_length))) < ((int32_t)2)))
		{
			goto IL_0033;
		}
	}
	{
		// mTextComponents[0].text = title;
		TextU5BU5D_t1D476A037C4542F053D17ADAFA2723F311F9A353* L_2 = __this->___mTextComponents_4;
		NullCheck(L_2);
		int32_t L_3 = 0;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_4 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		String_t* L_5 = ___title0;
		NullCheck(L_4);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_4, L_5);
		// mTextComponents[1].text = body;
		TextU5BU5D_t1D476A037C4542F053D17ADAFA2723F311F9A353* L_6 = __this->___mTextComponents_4;
		NullCheck(L_6);
		int32_t L_7 = 1;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_8 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		String_t* L_9 = ___body1;
		NullCheck(L_8);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_8, L_9);
	}

IL_0033:
	{
		// if (closeButton != null)
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_10 = ___closeButton3;
		if (!L_10)
		{
			goto IL_004a;
		}
	}
	{
		// mDelegateMessageBoxAction = new DelegateMessageBoxButtonAction(closeButton);
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_11 = ___closeButton3;
		DelegateMessageBoxButtonAction_tF92662C8A304ECF3D687E8AEB65D739E3FA46DC8* L_12 = (DelegateMessageBoxButtonAction_tF92662C8A304ECF3D687E8AEB65D739E3FA46DC8*)il2cpp_codegen_object_new(DelegateMessageBoxButtonAction_tF92662C8A304ECF3D687E8AEB65D739E3FA46DC8_il2cpp_TypeInfo_var);
		NullCheck(L_12);
		DelegateMessageBoxButtonAction__ctor_m14861E277EAB5756DB864397D823EC009F0F50AA(L_12, L_11, (intptr_t)((void*)Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_RuntimeMethod_var), NULL);
		__this->___mDelegateMessageBoxAction_5 = L_12;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___mDelegateMessageBoxAction_5), (void*)L_12);
	}

IL_004a:
	{
		// var button = GetComponentInChildren<Button>();
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_13;
		L_13 = Component_GetComponentInChildren_TisButton_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098_m16CFA6B8AD1C67BA8A7BCB3465E5C20064DEE5DB(__this, Component_GetComponentInChildren_TisButton_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098_m16CFA6B8AD1C67BA8A7BCB3465E5C20064DEE5DB_RuntimeMethod_var);
		V_0 = L_13;
		// if (button != null)
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_14 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_15;
		L_15 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_14, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_15)
		{
			goto IL_0066;
		}
	}
	{
		// button.gameObject.SetActive(dismissable);
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_16 = V_0;
		NullCheck(L_16);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_17;
		L_17 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_16, NULL);
		bool L_18 = ___dismissable2;
		NullCheck(L_17);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_17, L_18, NULL);
	}

IL_0066:
	{
		// }
		return;
	}
}
// System.Void MessageBox::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MessageBox__ctor_m6E4183DA95B55B23B80EDC3251112FB3B0B2EF05 (MessageBox_t4E1C9DA3FBC7BAE7E61037CFCD99B2B5ED88EA3F* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
void DelegateMessageBoxButtonAction_Invoke_m819B234CE21CB5E6C60885499686A40607F8A8C2_Multicast(DelegateMessageBoxButtonAction_tF92662C8A304ECF3D687E8AEB65D739E3FA46DC8* __this, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		DelegateMessageBoxButtonAction_tF92662C8A304ECF3D687E8AEB65D739E3FA46DC8* currentDelegate = reinterpret_cast<DelegateMessageBoxButtonAction_tF92662C8A304ECF3D687E8AEB65D739E3FA46DC8*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void DelegateMessageBoxButtonAction_Invoke_m819B234CE21CB5E6C60885499686A40607F8A8C2_OpenInst(DelegateMessageBoxButtonAction_tF92662C8A304ECF3D687E8AEB65D739E3FA46DC8* __this, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(method);
}
void DelegateMessageBoxButtonAction_Invoke_m819B234CE21CB5E6C60885499686A40607F8A8C2_OpenStatic(DelegateMessageBoxButtonAction_tF92662C8A304ECF3D687E8AEB65D739E3FA46DC8* __this, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(method);
}
void DelegateMessageBoxButtonAction_Invoke_m819B234CE21CB5E6C60885499686A40607F8A8C2_OpenStaticInvoker(DelegateMessageBoxButtonAction_tF92662C8A304ECF3D687E8AEB65D739E3FA46DC8* __this, const RuntimeMethod* method)
{
	InvokerActionInvoker0::Invoke(__this->___method_ptr_0, method, NULL);
}
void DelegateMessageBoxButtonAction_Invoke_m819B234CE21CB5E6C60885499686A40607F8A8C2_ClosedStaticInvoker(DelegateMessageBoxButtonAction_tF92662C8A304ECF3D687E8AEB65D739E3FA46DC8* __this, const RuntimeMethod* method)
{
	InvokerActionInvoker1< RuntimeObject* >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2);
}
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_DelegateMessageBoxButtonAction_tF92662C8A304ECF3D687E8AEB65D739E3FA46DC8 (DelegateMessageBoxButtonAction_tF92662C8A304ECF3D687E8AEB65D739E3FA46DC8* __this, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)();
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Native function invocation
	il2cppPInvokeFunc();

}
// System.Void MessageBox/DelegateMessageBoxButtonAction::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DelegateMessageBoxButtonAction__ctor_m14861E277EAB5756DB864397D823EC009F0F50AA (DelegateMessageBoxButtonAction_tF92662C8A304ECF3D687E8AEB65D739E3FA46DC8* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___method1);
	__this->___method_3 = ___method1;
	__this->___m_target_2 = ___object0;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___object0);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___method1);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___method1))
	{
		bool isOpen = parameterCount == 0;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___method1))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&DelegateMessageBoxButtonAction_Invoke_m819B234CE21CB5E6C60885499686A40607F8A8C2_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&DelegateMessageBoxButtonAction_Invoke_m819B234CE21CB5E6C60885499686A40607F8A8C2_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&DelegateMessageBoxButtonAction_Invoke_m819B234CE21CB5E6C60885499686A40607F8A8C2_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		if (___object0 == NULL)
			il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
		__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
		__this->___method_code_6 = (intptr_t)__this->___m_target_2;
	}
	__this->___extra_arg_5 = (intptr_t)&DelegateMessageBoxButtonAction_Invoke_m819B234CE21CB5E6C60885499686A40607F8A8C2_Multicast;
}
// System.Void MessageBox/DelegateMessageBoxButtonAction::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DelegateMessageBoxButtonAction_Invoke_m819B234CE21CB5E6C60885499686A40607F8A8C2 (DelegateMessageBoxButtonAction_tF92662C8A304ECF3D687E8AEB65D739E3FA46DC8* __this, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult MessageBox/DelegateMessageBoxButtonAction::BeginInvoke(System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* DelegateMessageBoxButtonAction_BeginInvoke_m5159FD4809ED452BF70B2294461F2BDF8F381A2E (DelegateMessageBoxButtonAction_tF92662C8A304ECF3D687E8AEB65D739E3FA46DC8* __this, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___callback0, RuntimeObject* ___object1, const RuntimeMethod* method) 
{
	void *__d_args[1] = {0};
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback0, (RuntimeObject*)___object1);
}
// System.Void MessageBox/DelegateMessageBoxButtonAction::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DelegateMessageBoxButtonAction_EndInvoke_mD8BDC7FECD0FB1B185543B320F2C11DD6B0653BA (DelegateMessageBoxButtonAction_tF92662C8A304ECF3D687E8AEB65D739E3FA46DC8* __this, RuntimeObject* ___result0, const RuntimeMethod* method) 
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Boolean ModelPlacement::get_GroundPlaneHitReceived()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ModelPlacement_get_GroundPlaneHitReceived_m99308344829E795F0EADF6D20F7061335675BE14 (ModelPlacement_tEBA347DB86CB0A00DC780800C2CA5E1E438F7C8D* __this, const RuntimeMethod* method) 
{
	{
		// public bool GroundPlaneHitReceived { get; private set; }
		bool L_0 = __this->___U3CGroundPlaneHitReceivedU3Ek__BackingField_4;
		return L_0;
	}
}
// System.Void ModelPlacement::set_GroundPlaneHitReceived(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ModelPlacement_set_GroundPlaneHitReceived_mFCE0CAAD12842540A0F85925AE3E3886A7FA3B06 (ModelPlacement_tEBA347DB86CB0A00DC780800C2CA5E1E438F7C8D* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		// public bool GroundPlaneHitReceived { get; private set; }
		bool L_0 = ___value0;
		__this->___U3CGroundPlaneHitReceivedU3Ek__BackingField_4 = L_0;
		return;
	}
}
// System.Void ModelPlacement::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ModelPlacement_Start_m56B57EA2C4898234A92FD883728C7DD6844237D2 (ModelPlacement_tEBA347DB86CB0A00DC780800C2CA5E1E438F7C8D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisCamera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_m64AC6C06DD93C5FB249091FEC84FA8475457CCC4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_m7FF948365C38BC39333D82B235A7C4EAD219960D_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// mMainCamera = VuforiaBehaviour.Instance.GetComponent<Camera>();
		VuforiaBehaviour_t53608E2BEC77029C0140CB1E88A0B186FC5E76C6* L_0;
		L_0 = VuforiaBehaviour_get_Instance_m8429CB479D68EA7506815B46E9D9AA09C8F90EA0(NULL);
		NullCheck(L_0);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_1;
		L_1 = Component_GetComponent_TisCamera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_m64AC6C06DD93C5FB249091FEC84FA8475457CCC4(L_0, Component_GetComponent_TisCamera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_m64AC6C06DD93C5FB249091FEC84FA8475457CCC4_RuntimeMethod_var);
		__this->___mMainCamera_6 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___mMainCamera_6), (void*)L_1);
		// mModelRenderer = Model.GetComponent<MeshRenderer>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2 = __this->___Model_5;
		NullCheck(L_2);
		MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* L_3;
		L_3 = GameObject_GetComponent_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_m7FF948365C38BC39333D82B235A7C4EAD219960D(L_2, GameObject_GetComponent_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_m7FF948365C38BC39333D82B235A7C4EAD219960D_RuntimeMethod_var);
		__this->___mModelRenderer_9 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___mModelRenderer_9), (void*)L_3);
		// }
		return;
	}
}
// System.Void ModelPlacement::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ModelPlacement_Update_mF117841030E415074575F14E758E2BE08E98AEA8 (ModelPlacement_tEBA347DB86CB0A00DC780800C2CA5E1E438F7C8D* __this, const RuntimeMethod* method) 
{
	{
		// if (!mIsPlaced)
		bool L_0 = __this->___mIsPlaced_7;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		// RotateTowardsCamera(Model);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1 = __this->___Model_5;
		ModelPlacement_RotateTowardsCamera_mC2046D1813ACD8816C46A8600EFB36320243859E(__this, L_1, NULL);
	}

IL_0014:
	{
		// if (mIsPlaced)
		bool L_2 = __this->___mIsPlaced_7;
		if (!L_2)
		{
			goto IL_0022;
		}
	}
	{
		// SnapProductToMousePosition();
		ModelPlacement_SnapProductToMousePosition_mDBE28D9A6D814DB4840B0B25AA7A86AC808BB947(__this, NULL);
	}

IL_0022:
	{
		// }
		return;
	}
}
// System.Void ModelPlacement::LateUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ModelPlacement_LateUpdate_m7C8F6899D56DC856E8D39F1AAF59397338CB8632 (ModelPlacement_tEBA347DB86CB0A00DC780800C2CA5E1E438F7C8D* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	int32_t G_B4_0 = 0;
	{
		// GroundPlaneHitReceived = mAutomaticHitTestFrameCount == Time.frameCount;
		int32_t L_0 = __this->___mAutomaticHitTestFrameCount_8;
		int32_t L_1;
		L_1 = Time_get_frameCount_m4A42E558A71301A216BDC49EC402D62F19C79667(NULL);
		ModelPlacement_set_GroundPlaneHitReceived_mFCE0CAAD12842540A0F85925AE3E3886A7FA3B06_inline(__this, (bool)((((int32_t)L_0) == ((int32_t)L_1))? 1 : 0), NULL);
		// if (!mIsPlaced)
		bool L_2 = __this->___mIsPlaced_7;
		if (L_2)
		{
			goto IL_0047;
		}
	}
	{
		// var isVisible = VuforiaBehaviour.Instance.DevicePoseBehaviour.TargetStatus.IsTrackedOrLimited() && GroundPlaneHitReceived;
		VuforiaBehaviour_t53608E2BEC77029C0140CB1E88A0B186FC5E76C6* L_3;
		L_3 = VuforiaBehaviour_get_Instance_m8429CB479D68EA7506815B46E9D9AA09C8F90EA0(NULL);
		NullCheck(L_3);
		DevicePoseBehaviour_tB66D2A5B7C7DA1929EC742544831049B124BD642* L_4;
		L_4 = VuforiaBehaviour_get_DevicePoseBehaviour_m69EBBECA75E0D757A1660354780BBF4C7FD156B1_inline(L_3, NULL);
		NullCheck(L_4);
		TargetStatus_t5D866F1CAA9D70E5B66D532E69B190EA3BAAC4B0 L_5;
		L_5 = ObserverBehaviour_get_TargetStatus_m11A222E650B40FB61D9FD4BD2689F04900086E5F_inline(L_4, NULL);
		bool L_6;
		L_6 = TargetStatusExtension_IsTrackedOrLimited_mFF1F77510F9CF98BF112808E1825F5D853A66995(L_5, NULL);
		if (!L_6)
		{
			goto IL_0039;
		}
	}
	{
		bool L_7;
		L_7 = ModelPlacement_get_GroundPlaneHitReceived_m99308344829E795F0EADF6D20F7061335675BE14_inline(__this, NULL);
		G_B4_0 = ((int32_t)(L_7));
		goto IL_003a;
	}

IL_0039:
	{
		G_B4_0 = 0;
	}

IL_003a:
	{
		V_0 = (bool)G_B4_0;
		// mModelRenderer.enabled = isVisible;
		MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* L_8 = __this->___mModelRenderer_9;
		bool L_9 = V_0;
		NullCheck(L_8);
		Renderer_set_enabled_m015E6D7B825528A31182F267234CC6A925F71DA8(L_8, L_9, NULL);
	}

IL_0047:
	{
		// }
		return;
	}
}
// System.Void ModelPlacement::SnapProductToMousePosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ModelPlacement_SnapProductToMousePosition_mDBE28D9A6D814DB4840B0B25AA7A86AC808BB947 (ModelPlacement_tEBA347DB86CB0A00DC780800C2CA5E1E438F7C8D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IUnityRuntimeCompiledFacade_t8A7BC7E50A934EC81E388AE86047FBC79665B559_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VuforiaRuntimeUtilities_t4716EE5DA1261C73F58EBBF0159D4AFC227721C8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// if (TouchHandler.sIsSingleFingerDragging || VuforiaRuntimeUtilities.IsPlayMode() && Input.GetMouseButton(0))
		bool L_0;
		L_0 = TouchHandler_get_sIsSingleFingerDragging_mE4DC729AC5FC3189A2205F6972C745ACB0FDA1A3(NULL);
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(VuforiaRuntimeUtilities_t4716EE5DA1261C73F58EBBF0159D4AFC227721C8_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = VuforiaRuntimeUtilities_IsPlayMode_m00B33166EF7724E7A333D0ED11623D7CE0907B07(NULL);
		if (!L_1)
		{
			goto IL_0052;
		}
	}
	{
		bool L_2;
		L_2 = Input_GetMouseButton_m4995DD4A2D4F916565C1B1B5AAF7DF17C126B3EA(0, NULL);
		if (!L_2)
		{
			goto IL_0052;
		}
	}

IL_0016:
	{
		// if (!UnityRuntimeCompiledFacade.Instance.IsUnityUICurrentlySelected())
		RuntimeObject* L_3;
		L_3 = UnityRuntimeCompiledFacade_get_Instance_m4592CF9DD7C37245CE9360789614782375BDEC11(NULL);
		NullCheck(L_3);
		bool L_4;
		L_4 = InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean Vuforia.UnityRuntimeCompiled.IUnityRuntimeCompiledFacade::IsUnityUICurrentlySelected() */, IUnityRuntimeCompiledFacade_t8A7BC7E50A934EC81E388AE86047FBC79665B559_il2cpp_TypeInfo_var, L_3);
		if (L_4)
		{
			goto IL_0052;
		}
	}
	{
		// var cameraToPlaneRay = mMainCamera.ScreenPointToRay(Input.mousePosition);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_5 = __this->___mMainCamera_6;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Input_get_mousePosition_mFF21FBD2647DAE2A23BD4C45571CA95D05A0A42C(NULL);
		NullCheck(L_5);
		Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 L_7;
		L_7 = Camera_ScreenPointToRay_m2887B9A49880B7AB670C57D66B67D6A6689FE315(L_5, L_6, NULL);
		// if (Physics.Raycast(cameraToPlaneRay, out var cameraToPlaneHit))
		bool L_8;
		L_8 = Physics_Raycast_mCAC9F02A1AAB49E16B384EBC8318E2DF30F4B0E5(L_7, (&V_0), NULL);
		if (!L_8)
		{
			goto IL_0052;
		}
	}
	{
		// Model.transform.position = cameraToPlaneHit.point;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_9 = __this->___Model_5;
		NullCheck(L_9);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_10;
		L_10 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_9, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11;
		L_11 = RaycastHit_get_point_m02B764612562AFE0F998CC7CFB2EEDE41BA47F39((&V_0), NULL);
		NullCheck(L_10);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_10, L_11, NULL);
	}

IL_0052:
	{
		// }
		return;
	}
}
// System.Void ModelPlacement::OnContentPlaced()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ModelPlacement_OnContentPlaced_mBAE0E7B9D91019EDD3CD7F80E111474C3C01766C (ModelPlacement_tEBA347DB86CB0A00DC780800C2CA5E1E438F7C8D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4124CAF019C8342178370077D0EF515E65FBE9D6);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log("OnContentPlaced() called.");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteral4124CAF019C8342178370077D0EF515E65FBE9D6, NULL);
		// Model.transform.localPosition = Vector3.zero;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___Model_5;
		NullCheck(L_0);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_0, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline(NULL);
		NullCheck(L_1);
		Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134(L_1, L_2, NULL);
		// RotateTowardsCamera(Model);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3 = __this->___Model_5;
		ModelPlacement_RotateTowardsCamera_mC2046D1813ACD8816C46A8600EFB36320243859E(__this, L_3, NULL);
		// mIsPlaced = true;
		__this->___mIsPlaced_7 = (bool)1;
		// }
		return;
	}
}
// System.Void ModelPlacement::OnAutomaticHitTest(Vuforia.HitTestResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ModelPlacement_OnAutomaticHitTest_m43ECAFC33955E63C28F519D2D62820F75AC897B9 (ModelPlacement_tEBA347DB86CB0A00DC780800C2CA5E1E438F7C8D* __this, HitTestResult_t623F1DB9A0AAD8416652DFFE1842F908250D44D9* ___result0, const RuntimeMethod* method) 
{
	{
		// mAutomaticHitTestFrameCount = Time.frameCount;
		int32_t L_0;
		L_0 = Time_get_frameCount_m4A42E558A71301A216BDC49EC402D62F19C79667(NULL);
		__this->___mAutomaticHitTestFrameCount_8 = L_0;
		// if (!mIsPlaced)
		bool L_1 = __this->___mIsPlaced_7;
		if (L_1)
		{
			goto IL_0029;
		}
	}
	{
		// Model.transform.position = result.Position;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2 = __this->___Model_5;
		NullCheck(L_2);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3;
		L_3 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_2, NULL);
		HitTestResult_t623F1DB9A0AAD8416652DFFE1842F908250D44D9* L_4 = ___result0;
		NullCheck(L_4);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = HitTestResult_get_Position_m2F30FBF2AF4D53E6C3F1E51D44AE699C153C4784_inline(L_4, NULL);
		NullCheck(L_3);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_3, L_5, NULL);
	}

IL_0029:
	{
		// }
		return;
	}
}
// System.Void ModelPlacement::RotateTowardsCamera(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ModelPlacement_RotateTowardsCamera_mC2046D1813ACD8816C46A8600EFB36320243859E (ModelPlacement_tEBA347DB86CB0A00DC780800C2CA5E1E438F7C8D* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___augmentation0, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// var lookAtPosition =  mMainCamera.transform.position - augmentation.transform.position;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_0 = __this->___mMainCamera_6;
		NullCheck(L_0);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_0, NULL);
		NullCheck(L_1);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_1, NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3 = ___augmentation0;
		NullCheck(L_3);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4;
		L_4 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_3, NULL);
		NullCheck(L_4);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_4, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_2, L_5, NULL);
		V_0 = L_6;
		// lookAtPosition.y = 0;
		(&V_0)->___y_3 = (0.0f);
		// var rotation = Quaternion.LookRotation(lookAtPosition);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7 = V_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_8;
		L_8 = Quaternion_LookRotation_mDB2CCA75B8E1AB98104F2A6E1A1EA57D0D1298D7(L_7, NULL);
		V_1 = L_8;
		// augmentation.transform.rotation = rotation;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_9 = ___augmentation0;
		NullCheck(L_9);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_10;
		L_10 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_9, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_11 = V_1;
		NullCheck(L_10);
		Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D(L_10, L_11, NULL);
		// }
		return;
	}
}
// System.Void ModelPlacement::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ModelPlacement__ctor_mA4B4DC67BB1180E8ED5BF88F20E91FC7B3BA37C7 (ModelPlacement_tEBA347DB86CB0A00DC780800C2CA5E1E438F7C8D* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void SetParametersBttn::openPanel()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SetParametersBttn_openPanel_m87239FA17F9EADE1502531F7A854CE190235AB38 (SetParametersBttn_t24DC16BB4CC551114C40E91C3E2CC43AF5CFF8AC* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7E7E160F63533EC193A01B85C3AE2870A5CAB5D5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral877D9A2697B4BA1DB43EBA126A7B4E5652418259);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!panel.activeSelf)
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___panel_5;
		NullCheck(L_0);
		bool L_1;
		L_1 = GameObject_get_activeSelf_m4F3E5240E138B66AAA080EA30759A3D0517DA368(L_0, NULL);
		if (L_1)
		{
			goto IL_0036;
		}
	}
	{
		// panel.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2 = __this->___panel_5;
		NullCheck(L_2);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_2, (bool)1, NULL);
		// buttonText.text = "DONE";
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_3 = __this->___buttonText_6;
		NullCheck(L_3);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_3, _stringLiteral7E7E160F63533EC193A01B85C3AE2870A5CAB5D5);
		// planefinder.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4 = __this->___planefinder_4;
		NullCheck(L_4);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_4, (bool)0, NULL);
		return;
	}

IL_0036:
	{
		// {   panel.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5 = __this->___panel_5;
		NullCheck(L_5);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_5, (bool)0, NULL);
		// buttonText.text = "SET PARAMETERS";
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_6 = __this->___buttonText_6;
		NullCheck(L_6);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_6, _stringLiteral877D9A2697B4BA1DB43EBA126A7B4E5652418259);
		// planefinder.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_7 = __this->___planefinder_4;
		NullCheck(L_7);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_7, (bool)1, NULL);
		// }
		return;
	}
}
// System.Void SetParametersBttn::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SetParametersBttn__ctor_m5E68BB9D3B7DDAFC39B445A1237499F9320F95CC (SetParametersBttn_t24DC16BB4CC551114C40E91C3E2CC43AF5CFF8AC* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void SetParametersBttn2D::openPanel()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SetParametersBttn2D_openPanel_m0BC73C5E71CF962243138AB1F75276835E1E198C (SetParametersBttn2D_tC3C6EE0BF7080778A4172D82F865A7AB1E65E0E5* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7E7E160F63533EC193A01B85C3AE2870A5CAB5D5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral877D9A2697B4BA1DB43EBA126A7B4E5652418259);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!panel.activeSelf)
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___panel_4;
		NullCheck(L_0);
		bool L_1;
		L_1 = GameObject_get_activeSelf_m4F3E5240E138B66AAA080EA30759A3D0517DA368(L_0, NULL);
		if (L_1)
		{
			goto IL_002a;
		}
	}
	{
		// panel.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2 = __this->___panel_4;
		NullCheck(L_2);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_2, (bool)1, NULL);
		// buttonText.text = "DONE";
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_3 = __this->___buttonText_5;
		NullCheck(L_3);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_3, _stringLiteral7E7E160F63533EC193A01B85C3AE2870A5CAB5D5);
		return;
	}

IL_002a:
	{
		// {   panel.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4 = __this->___panel_4;
		NullCheck(L_4);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_4, (bool)0, NULL);
		// buttonText.text = "SET PARAMETERS";
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_5 = __this->___buttonText_5;
		NullCheck(L_5);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_5, _stringLiteral877D9A2697B4BA1DB43EBA126A7B4E5652418259);
		// }
		return;
	}
}
// System.Void SetParametersBttn2D::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SetParametersBttn2D__ctor_m2A926F40DFC75111F7B26958267D0786ABC133FF (SetParametersBttn2D_tC3C6EE0BF7080778A4172D82F865A7AB1E65E0E5* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Boolean TargetStatusExtension::IsTrackedAndNormal(Vuforia.TargetStatus)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TargetStatusExtension_IsTrackedAndNormal_m016366EBE82BEBCA07480C46E7E6D90C96EA0847 (TargetStatus_t5D866F1CAA9D70E5B66D532E69B190EA3BAAC4B0 ___targetStatus0, const RuntimeMethod* method) 
{
	{
		// return (targetStatus.Status == Status.TRACKED ||
		//         targetStatus.Status == Status.EXTENDED_TRACKED) &&
		//        targetStatus.StatusInfo == StatusInfo.NORMAL;
		int32_t L_0;
		L_0 = TargetStatus_get_Status_m6CA973C4D857DCA6B775DF7E053B0990A83026A3_inline((&___targetStatus0), NULL);
		if ((((int32_t)L_0) == ((int32_t)3)))
		{
			goto IL_0014;
		}
	}
	{
		int32_t L_1;
		L_1 = TargetStatus_get_Status_m6CA973C4D857DCA6B775DF7E053B0990A83026A3_inline((&___targetStatus0), NULL);
		if ((!(((uint32_t)L_1) == ((uint32_t)4))))
		{
			goto IL_001f;
		}
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = TargetStatus_get_StatusInfo_mA52A044649A96018BDC52555018BB9412877B0E6_inline((&___targetStatus0), NULL);
		return (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
	}

IL_001f:
	{
		return (bool)0;
	}
}
// System.Boolean TargetStatusExtension::IsTrackedOrLimited(Vuforia.TargetStatus)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TargetStatusExtension_IsTrackedOrLimited_mFF1F77510F9CF98BF112808E1825F5D853A66995 (TargetStatus_t5D866F1CAA9D70E5B66D532E69B190EA3BAAC4B0 ___targetStatus0, const RuntimeMethod* method) 
{
	{
		// return (targetStatus.Status == Status.TRACKED ||
		//         targetStatus.Status == Status.EXTENDED_TRACKED) &&
		//        targetStatus.StatusInfo == StatusInfo.NORMAL ||
		//        targetStatus.Status == Status.LIMITED && targetStatus.StatusInfo == StatusInfo.UNKNOWN;
		int32_t L_0;
		L_0 = TargetStatus_get_Status_m6CA973C4D857DCA6B775DF7E053B0990A83026A3_inline((&___targetStatus0), NULL);
		if ((((int32_t)L_0) == ((int32_t)3)))
		{
			goto IL_0014;
		}
	}
	{
		int32_t L_1;
		L_1 = TargetStatus_get_Status_m6CA973C4D857DCA6B775DF7E053B0990A83026A3_inline((&___targetStatus0), NULL);
		if ((!(((uint32_t)L_1) == ((uint32_t)4))))
		{
			goto IL_001d;
		}
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = TargetStatus_get_StatusInfo_mA52A044649A96018BDC52555018BB9412877B0E6_inline((&___targetStatus0), NULL);
		if (!L_2)
		{
			goto IL_0034;
		}
	}

IL_001d:
	{
		int32_t L_3;
		L_3 = TargetStatus_get_Status_m6CA973C4D857DCA6B775DF7E053B0990A83026A3_inline((&___targetStatus0), NULL);
		if ((!(((uint32_t)L_3) == ((uint32_t)1))))
		{
			goto IL_0032;
		}
	}
	{
		int32_t L_4;
		L_4 = TargetStatus_get_StatusInfo_mA52A044649A96018BDC52555018BB9412877B0E6_inline((&___targetStatus0), NULL);
		return (bool)((((int32_t)L_4) == ((int32_t)2))? 1 : 0);
	}

IL_0032:
	{
		return (bool)0;
	}

IL_0034:
	{
		return (bool)1;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Boolean TouchHandler::get_sIsSingleFingerStationary()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TouchHandler_get_sIsSingleFingerStationary_mB7F5167D4F8BBE22A1595400D44BF740DF31B8D6 (const RuntimeMethod* method) 
{
	Touch_t03E51455ED508492B3F278903A0114FA0E87B417 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// public static bool sIsSingleFingerStationary => IsSingleFingerDown() && Input.GetTouch(0).phase == TouchPhase.Stationary;
		bool L_0;
		L_0 = TouchHandler_IsSingleFingerDown_mB696B4D45A5A250CE069CFA218ECAEEF61192BDE(NULL);
		if (!L_0)
		{
			goto IL_0019;
		}
	}
	{
		Touch_t03E51455ED508492B3F278903A0114FA0E87B417 L_1;
		L_1 = Input_GetTouch_m75D99FE801A94279874FA8DC6B6ADAD35F5123B1(0, NULL);
		V_0 = L_1;
		int32_t L_2;
		L_2 = Touch_get_phase_mB82409FB2BE1C32ABDBA6A72E52A099D28AB70B0((&V_0), NULL);
		return (bool)((((int32_t)L_2) == ((int32_t)2))? 1 : 0);
	}

IL_0019:
	{
		return (bool)0;
	}
}
// System.Boolean TouchHandler::get_sIsSingleFingerDragging()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TouchHandler_get_sIsSingleFingerDragging_mE4DC729AC5FC3189A2205F6972C745ACB0FDA1A3 (const RuntimeMethod* method) 
{
	Touch_t03E51455ED508492B3F278903A0114FA0E87B417 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// public static bool sIsSingleFingerDragging => IsSingleFingerDown() && Input.GetTouch(0).phase == TouchPhase.Moved;
		bool L_0;
		L_0 = TouchHandler_IsSingleFingerDown_mB696B4D45A5A250CE069CFA218ECAEEF61192BDE(NULL);
		if (!L_0)
		{
			goto IL_0019;
		}
	}
	{
		Touch_t03E51455ED508492B3F278903A0114FA0E87B417 L_1;
		L_1 = Input_GetTouch_m75D99FE801A94279874FA8DC6B6ADAD35F5123B1(0, NULL);
		V_0 = L_1;
		int32_t L_2;
		L_2 = Touch_get_phase_mB82409FB2BE1C32ABDBA6A72E52A099D28AB70B0((&V_0), NULL);
		return (bool)((((int32_t)L_2) == ((int32_t)1))? 1 : 0);
	}

IL_0019:
	{
		return (bool)0;
	}
}
// System.Void TouchHandler::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TouchHandler_Start_m6B0B5F04E29C13B8F518229A1177D1E1D40A5A0B (TouchHandler_tB817ACADDBAF3E5E6625F3D541FE580091B9758D* __this, const RuntimeMethod* method) 
{
	{
		// mCachedAugmentationScale = AugmentationObject.localScale.x;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = __this->___AugmentationObject_4;
		NullCheck(L_0);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Transform_get_localScale_m804A002A53A645CDFCD15BB0F37209162720363F(L_0, NULL);
		float L_2 = L_1.___x_2;
		__this->___mCachedAugmentationScale_12 = L_2;
		// mCachedAugmentationRotation = AugmentationObject.localEulerAngles;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3 = __this->___AugmentationObject_4;
		NullCheck(L_3);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Transform_get_localEulerAngles_m358AA9AE8FA24FD1BB7842D231C8644D1C2910C6(L_3, NULL);
		__this->___mCachedAugmentationRotation_13 = L_4;
		// }
		return;
	}
}
// System.Void TouchHandler::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TouchHandler_Update_m1138E0E69A5CDDD4511BE8E6E445983B83B626DF (TouchHandler_tB817ACADDBAF3E5E6625F3D541FE580091B9758D* __this, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	{
		// if (Input.touchCount == 2)
		int32_t L_0;
		L_0 = Input_get_touchCount_m057388BFC67A0F4CA53764B1022867ED81D01E39(NULL);
		if ((!(((uint32_t)L_0) == ((uint32_t)2))))
		{
			goto IL_003c;
		}
	}
	{
		// GetTouchAngleAndDistance(Input.GetTouch(0), Input.GetTouch(1),
		//     out var currentTouchAngle, out var currentTouchDistance);
		Touch_t03E51455ED508492B3F278903A0114FA0E87B417 L_1;
		L_1 = Input_GetTouch_m75D99FE801A94279874FA8DC6B6ADAD35F5123B1(0, NULL);
		Touch_t03E51455ED508492B3F278903A0114FA0E87B417 L_2;
		L_2 = Input_GetTouch_m75D99FE801A94279874FA8DC6B6ADAD35F5123B1(1, NULL);
		TouchHandler_GetTouchAngleAndDistance_m6762EDFF19CF134C3851223F9C108A12EF34592B(__this, L_1, L_2, (&V_0), (&V_1), NULL);
		// if (mIsFirstFrameWithTwoTouches)
		bool L_3 = __this->___mIsFirstFrameWithTwoTouches_9;
		if (!L_3)
		{
			goto IL_0072;
		}
	}
	{
		// mCachedTouchDistance = currentTouchDistance;
		float L_4 = V_1;
		__this->___mCachedTouchDistance_11 = L_4;
		// mCachedTouchAngle = currentTouchAngle;
		float L_5 = V_0;
		__this->___mCachedTouchAngle_10 = L_5;
		// mIsFirstFrameWithTwoTouches = false;
		__this->___mIsFirstFrameWithTwoTouches_9 = (bool)0;
		return;
	}

IL_003c:
	{
		// else if (Input.touchCount < 2)
		int32_t L_6;
		L_6 = Input_get_touchCount_m057388BFC67A0F4CA53764B1022867ED81D01E39(NULL);
		if ((((int32_t)L_6) >= ((int32_t)2)))
		{
			goto IL_0072;
		}
	}
	{
		// mCachedAugmentationScale = AugmentationObject.localScale.x;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_7 = __this->___AugmentationObject_4;
		NullCheck(L_7);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8;
		L_8 = Transform_get_localScale_m804A002A53A645CDFCD15BB0F37209162720363F(L_7, NULL);
		float L_9 = L_8.___x_2;
		__this->___mCachedAugmentationScale_12 = L_9;
		// mCachedAugmentationRotation = AugmentationObject.localEulerAngles;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_10 = __this->___AugmentationObject_4;
		NullCheck(L_10);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11;
		L_11 = Transform_get_localEulerAngles_m358AA9AE8FA24FD1BB7842D231C8644D1C2910C6(L_10, NULL);
		__this->___mCachedAugmentationRotation_13 = L_11;
		// mIsFirstFrameWithTwoTouches = true;
		__this->___mIsFirstFrameWithTwoTouches_9 = (bool)1;
	}

IL_0072:
	{
		// }
		return;
	}
}
// System.Void TouchHandler::GetTouchAngleAndDistance(UnityEngine.Touch,UnityEngine.Touch,System.Single&,System.Single&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TouchHandler_GetTouchAngleAndDistance_m6762EDFF19CF134C3851223F9C108A12EF34592B (TouchHandler_tB817ACADDBAF3E5E6625F3D541FE580091B9758D* __this, Touch_t03E51455ED508492B3F278903A0114FA0E87B417 ___firstTouch0, Touch_t03E51455ED508492B3F278903A0114FA0E87B417 ___secondTouch1, float* ___touchAngle2, float* ___touchDistance3, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	{
		// touchDistance = Vector2.Distance(firstTouch.position, secondTouch.position);
		float* L_0 = ___touchDistance3;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1;
		L_1 = Touch_get_position_m41B9EB0F3F3E1BE98CEB388253A9E31979CB964A((&___firstTouch0), NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2;
		L_2 = Touch_get_position_m41B9EB0F3F3E1BE98CEB388253A9E31979CB964A((&___secondTouch1), NULL);
		float L_3;
		L_3 = Vector2_Distance_mBACBB1609E1894D68F882D86A93519E311810C89_inline(L_1, L_2, NULL);
		*((float*)L_0) = (float)L_3;
		// var diffY = firstTouch.position.y - secondTouch.position.y;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4;
		L_4 = Touch_get_position_m41B9EB0F3F3E1BE98CEB388253A9E31979CB964A((&___firstTouch0), NULL);
		float L_5 = L_4.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6;
		L_6 = Touch_get_position_m41B9EB0F3F3E1BE98CEB388253A9E31979CB964A((&___secondTouch1), NULL);
		float L_7 = L_6.___y_1;
		V_0 = ((float)il2cpp_codegen_subtract(L_5, L_7));
		// var diffX = firstTouch.position.x - secondTouch.position.x;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_8;
		L_8 = Touch_get_position_m41B9EB0F3F3E1BE98CEB388253A9E31979CB964A((&___firstTouch0), NULL);
		float L_9 = L_8.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_10;
		L_10 = Touch_get_position_m41B9EB0F3F3E1BE98CEB388253A9E31979CB964A((&___secondTouch1), NULL);
		float L_11 = L_10.___x_0;
		V_1 = ((float)il2cpp_codegen_subtract(L_9, L_11));
		// touchAngle = Mathf.Atan2(diffY, diffX) * Mathf.Rad2Deg;
		float* L_12 = ___touchAngle2;
		float L_13 = V_0;
		float L_14 = V_1;
		float L_15;
		L_15 = atan2f(L_13, L_14);
		*((float*)L_12) = (float)((float)il2cpp_codegen_multiply(L_15, (57.2957802f)));
		// }
		return;
	}
}
// System.Boolean TouchHandler::IsSingleFingerDown()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TouchHandler_IsSingleFingerDown_mB696B4D45A5A250CE069CFA218ECAEEF61192BDE (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TouchHandler_tB817ACADDBAF3E5E6625F3D541FE580091B9758D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Touch_t03E51455ED508492B3F278903A0114FA0E87B417 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// if (Input.touchCount == 0 || Input.touchCount >= 2)
		int32_t L_0;
		L_0 = Input_get_touchCount_m057388BFC67A0F4CA53764B1022867ED81D01E39(NULL);
		if (!L_0)
		{
			goto IL_000f;
		}
	}
	{
		int32_t L_1;
		L_1 = Input_get_touchCount_m057388BFC67A0F4CA53764B1022867ED81D01E39(NULL);
		if ((((int32_t)L_1) < ((int32_t)2)))
		{
			goto IL_0019;
		}
	}

IL_000f:
	{
		// sLastTouchCount = Input.touchCount;
		int32_t L_2;
		L_2 = Input_get_touchCount_m057388BFC67A0F4CA53764B1022867ED81D01E39(NULL);
		((TouchHandler_tB817ACADDBAF3E5E6625F3D541FE580091B9758D_StaticFields*)il2cpp_codegen_static_fields_for(TouchHandler_tB817ACADDBAF3E5E6625F3D541FE580091B9758D_il2cpp_TypeInfo_var))->___sLastTouchCount_5 = L_2;
	}

IL_0019:
	{
		// return Input.touchCount == 1 && Input.GetTouch(0).fingerId == 0 && sLastTouchCount == 0;
		int32_t L_3;
		L_3 = Input_get_touchCount_m057388BFC67A0F4CA53764B1022867ED81D01E39(NULL);
		if ((!(((uint32_t)L_3) == ((uint32_t)1))))
		{
			goto IL_003a;
		}
	}
	{
		Touch_t03E51455ED508492B3F278903A0114FA0E87B417 L_4;
		L_4 = Input_GetTouch_m75D99FE801A94279874FA8DC6B6ADAD35F5123B1(0, NULL);
		V_0 = L_4;
		int32_t L_5;
		L_5 = Touch_get_fingerId_mC1DCE93BFA0574960A3AE5329AE6C5F7E06962BD((&V_0), NULL);
		if (L_5)
		{
			goto IL_003a;
		}
	}
	{
		int32_t L_6 = ((TouchHandler_tB817ACADDBAF3E5E6625F3D541FE580091B9758D_StaticFields*)il2cpp_codegen_static_fields_for(TouchHandler_tB817ACADDBAF3E5E6625F3D541FE580091B9758D_il2cpp_TypeInfo_var))->___sLastTouchCount_5;
		return (bool)((((int32_t)L_6) == ((int32_t)0))? 1 : 0);
	}

IL_003a:
	{
		return (bool)0;
	}
}
// System.Void TouchHandler::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TouchHandler__ctor_mDF2FCF69149565CEA7539FA3AE2C1C61E9BC35BC (TouchHandler_tB817ACADDBAF3E5E6625F3D541FE580091B9758D* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Boolean UIManager::get_SurfaceIndicatorVisibilityConditionsMet()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UIManager_get_SurfaceIndicatorVisibilityConditionsMet_m2F429CAD9632149F821F015E6D815E4B5F93C6BE (UIManager_t16825A2483574F37D7D47AB939A6FA639678B1F3* __this, const RuntimeMethod* method) 
{
	{
		// bool SurfaceIndicatorVisibilityConditionsMet => mDevicePoseManager.TargetStatus.IsTrackedOrLimited() &&
		//                                                 mModelPlacement.GroundPlaneHitReceived &&
		//                                                 Input.touchCount == 0;
		DevicePoseManager_t6DB16271316039E99F4EBFD596A637CEB4439F90* L_0 = __this->___mDevicePoseManager_12;
		NullCheck(L_0);
		TargetStatus_t5D866F1CAA9D70E5B66D532E69B190EA3BAAC4B0 L_1 = L_0->___TargetStatus_6;
		bool L_2;
		L_2 = TargetStatusExtension_IsTrackedOrLimited_mFF1F77510F9CF98BF112808E1825F5D853A66995(L_1, NULL);
		if (!L_2)
		{
			goto IL_0028;
		}
	}
	{
		ModelPlacement_tEBA347DB86CB0A00DC780800C2CA5E1E438F7C8D* L_3 = __this->___mModelPlacement_13;
		NullCheck(L_3);
		bool L_4;
		L_4 = ModelPlacement_get_GroundPlaneHitReceived_m99308344829E795F0EADF6D20F7061335675BE14_inline(L_3, NULL);
		if (!L_4)
		{
			goto IL_0028;
		}
	}
	{
		int32_t L_5;
		L_5 = Input_get_touchCount_m057388BFC67A0F4CA53764B1022867ED81D01E39(NULL);
		return (bool)((((int32_t)L_5) == ((int32_t)0))? 1 : 0);
	}

IL_0028:
	{
		return (bool)0;
	}
}
// System.Void UIManager::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIManager_Start_m113F392674AB08A26877728CD36F06332E869080 (UIManager_t16825A2483574F37D7D47AB939A6FA639678B1F3* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_FindObjectOfType_TisDevicePoseManager_t6DB16271316039E99F4EBFD596A637CEB4439F90_m17833F94FADA4C714BF98E476AE2696DE26BB69A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_FindObjectOfType_TisModelPlacement_tEBA347DB86CB0A00DC780800C2CA5E1E438F7C8D_m5C56B162E3EF09F1181D523AE95E243115E6BFD9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_FindObjectOfType_TisPlaneFinderBehaviour_t23E09D9522086A00933FFF43F29F9D4CEE1578F5_m4DD25D2D331B6D313210CB50CDD7F3AE401EBE8E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// mDevicePoseManager = FindObjectOfType<DevicePoseManager>();
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		DevicePoseManager_t6DB16271316039E99F4EBFD596A637CEB4439F90* L_0;
		L_0 = Object_FindObjectOfType_TisDevicePoseManager_t6DB16271316039E99F4EBFD596A637CEB4439F90_m17833F94FADA4C714BF98E476AE2696DE26BB69A(Object_FindObjectOfType_TisDevicePoseManager_t6DB16271316039E99F4EBFD596A637CEB4439F90_m17833F94FADA4C714BF98E476AE2696DE26BB69A_RuntimeMethod_var);
		__this->___mDevicePoseManager_12 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___mDevicePoseManager_12), (void*)L_0);
		// mPlaneFinder = FindObjectOfType<PlaneFinderBehaviour>();
		PlaneFinderBehaviour_t23E09D9522086A00933FFF43F29F9D4CEE1578F5* L_1;
		L_1 = Object_FindObjectOfType_TisPlaneFinderBehaviour_t23E09D9522086A00933FFF43F29F9D4CEE1578F5_m4DD25D2D331B6D313210CB50CDD7F3AE401EBE8E(Object_FindObjectOfType_TisPlaneFinderBehaviour_t23E09D9522086A00933FFF43F29F9D4CEE1578F5_m4DD25D2D331B6D313210CB50CDD7F3AE401EBE8E_RuntimeMethod_var);
		__this->___mPlaneFinder_14 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___mPlaneFinder_14), (void*)L_1);
		// mModelPlacement = FindObjectOfType<ModelPlacement>();
		ModelPlacement_tEBA347DB86CB0A00DC780800C2CA5E1E438F7C8D* L_2;
		L_2 = Object_FindObjectOfType_TisModelPlacement_tEBA347DB86CB0A00DC780800C2CA5E1E438F7C8D_m5C56B162E3EF09F1181D523AE95E243115E6BFD9(Object_FindObjectOfType_TisModelPlacement_tEBA347DB86CB0A00DC780800C2CA5E1E438F7C8D_m5C56B162E3EF09F1181D523AE95E243115E6BFD9_RuntimeMethod_var);
		__this->___mModelPlacement_13 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___mModelPlacement_13), (void*)L_2);
		// }
		return;
	}
}
// System.Void UIManager::LateUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIManager_LateUpdate_m6FFCA38E1458700C073B9F57AA26038DFAD9F4D6 (UIManager_t16825A2483574F37D7D47AB939A6FA639678B1F3* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral04D08DE663794C0DECE4664FFD5B9FE4A5FB7347);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0ACC50305159B4342D208A51935C53EA2E7F9085);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8259EC51929AE1346DBA3182C15C05E79A7544EB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8F5C21509BF8EE7093C4E7CD6EEAF3FFCD7B0995);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD7C5DE2E045FED192C54560BB529C5118544CDFE);
		s_Il2CppMethodInitialized = true;
	}
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* G_B7_0 = NULL;
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* G_B6_0 = NULL;
	String_t* G_B8_0 = NULL;
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* G_B8_1 = NULL;
	{
		// if (mModelPlacement.GroundPlaneHitReceived && mDevicePoseManager.TargetStatus.IsTrackedAndNormal())
		ModelPlacement_tEBA347DB86CB0A00DC780800C2CA5E1E438F7C8D* L_0 = __this->___mModelPlacement_13;
		NullCheck(L_0);
		bool L_1;
		L_1 = ModelPlacement_get_GroundPlaneHitReceived_m99308344829E795F0EADF6D20F7061335675BE14_inline(L_0, NULL);
		if (!L_1)
		{
			goto IL_004b;
		}
	}
	{
		DevicePoseManager_t6DB16271316039E99F4EBFD596A637CEB4439F90* L_2 = __this->___mDevicePoseManager_12;
		NullCheck(L_2);
		TargetStatus_t5D866F1CAA9D70E5B66D532E69B190EA3BAAC4B0 L_3 = L_2->___TargetStatus_6;
		bool L_4;
		L_4 = TargetStatusExtension_IsTrackedAndNormal_m016366EBE82BEBCA07480C46E7E6D90C96EA0847(L_3, NULL);
		if (!L_4)
		{
			goto IL_004b;
		}
	}
	{
		// if (mIsAnchorTracking)
		bool L_5 = __this->___mIsAnchorTracking_15;
		if (!L_5)
		{
			goto IL_0039;
		}
	}
	{
		// Instructions.text = MODEL_CONTROLS;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_6 = __this->___Instructions_5;
		NullCheck(L_6);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_6, _stringLiteral8259EC51929AE1346DBA3182C15C05E79A7544EB);
		goto IL_006f;
	}

IL_0039:
	{
		// Instructions.text = MODEL_PLACEMENT_HINT;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_7 = __this->___Instructions_5;
		NullCheck(L_7);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_7, _stringLiteral04D08DE663794C0DECE4664FFD5B9FE4A5FB7347);
		goto IL_006f;
	}

IL_004b:
	{
		// Instructions.text = mModelPlacement.GroundPlaneHitReceived ? MOVE_TO_ANOTHER_PLACE_HINT : POINT_DEVICE_TO_GROUND_HINT;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_8 = __this->___Instructions_5;
		ModelPlacement_tEBA347DB86CB0A00DC780800C2CA5E1E438F7C8D* L_9 = __this->___mModelPlacement_13;
		NullCheck(L_9);
		bool L_10;
		L_10 = ModelPlacement_get_GroundPlaneHitReceived_m99308344829E795F0EADF6D20F7061335675BE14_inline(L_9, NULL);
		G_B6_0 = L_8;
		if (L_10)
		{
			G_B7_0 = L_8;
			goto IL_0065;
		}
	}
	{
		G_B8_0 = _stringLiteral8F5C21509BF8EE7093C4E7CD6EEAF3FFCD7B0995;
		G_B8_1 = G_B6_0;
		goto IL_006a;
	}

IL_0065:
	{
		G_B8_0 = _stringLiteralD7C5DE2E045FED192C54560BB529C5118544CDFE;
		G_B8_1 = G_B7_0;
	}

IL_006a:
	{
		NullCheck(G_B8_1);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, G_B8_1, G_B8_0);
	}

IL_006f:
	{
		// if (panel.activeInHierarchy)
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_11 = __this->___panel_4;
		NullCheck(L_11);
		bool L_12;
		L_12 = GameObject_get_activeInHierarchy_m49250F4F168DCC5388D5BE4F6A5681386907B109(L_11, NULL);
		if (!L_12)
		{
			goto IL_008c;
		}
	}
	{
		// Instructions.text = SETTING_PARAMETERS_STATUS;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_13 = __this->___Instructions_5;
		NullCheck(L_13);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_13, _stringLiteral0ACC50305159B4342D208A51935C53EA2E7F9085);
	}

IL_008c:
	{
		// }
		return;
	}
}
// System.Void UIManager::OnAnchorFound()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIManager_OnAnchorFound_m32986202F304FA2F3F61CEB516EC949E70131915 (UIManager_t16825A2483574F37D7D47AB939A6FA639678B1F3* __this, const RuntimeMethod* method) 
{
	{
		// mIsAnchorTracking = true;
		__this->___mIsAnchorTracking_15 = (bool)1;
		// }
		return;
	}
}
// System.Void UIManager::OnAnchorLost()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIManager_OnAnchorLost_mE358A34C9DB21F5DBAC62D530211D0AE8F8B4C21 (UIManager_t16825A2483574F37D7D47AB939A6FA639678B1F3* __this, const RuntimeMethod* method) 
{
	{
		// mIsAnchorTracking = false;
		__this->___mIsAnchorTracking_15 = (bool)0;
		// }
		return;
	}
}
// System.Void UIManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIManager__ctor_mC9DC2B8984E76F424E73C1860AD4BD3DEBF6573F (UIManager_t16825A2483574F37D7D47AB939A6FA639678B1F3* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// UnityEngine.Vector3[] SeatedAdultSliderAdjust::getCorrectVertices()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* SeatedAdultSliderAdjust_getCorrectVertices_m9633F01675D658F3B99284566CC9743BD3A13835 (SeatedAdultSliderAdjust_tD13DF139016030F050F1A488125C2796C6DA9842* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral00B28FF06B788B9B67C6B259800F404F9F3761FD);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB);
		s_Il2CppMethodInitialized = true;
	}
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* V_0 = NULL;
	int32_t V_1 = 0;
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* V_2 = NULL;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_5;
	memset((&V_5), 0, sizeof(V_5));
	{
		// string[] data = correctVertexOrderDataAsset.text.Split(new String[] { ",", "\n" }, StringSplitOptions.None);
		TextAsset_t2C64E93DA366D9DE5A8209E1802FA4884AC1BD69* L_0 = __this->___correctVertexOrderDataAsset_7;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = TextAsset_get_text_m36846042E3CF3D9DD337BF3F8B2B1902D10C8FD9(L_0, NULL);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_2 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)2);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_3 = L_2;
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, _stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_4 = L_3;
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, _stringLiteral00B28FF06B788B9B67C6B259800F404F9F3761FD);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)_stringLiteral00B28FF06B788B9B67C6B259800F404F9F3761FD);
		NullCheck(L_1);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_5;
		L_5 = String_Split_m03F46561E2DF46D1E3AE749A77706EFC2F6488F4(L_1, L_4, 0, NULL);
		V_0 = L_5;
		// int numCols = 3;
		V_1 = 3;
		// int numRows = (data.Length - 1) / numCols;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_6 = V_0;
		NullCheck(L_6);
		int32_t L_7 = V_1;
		// Vector3[] correctOrderVertices = new Vector3[numRows];
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_8 = (Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C*)(Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C*)SZArrayNew(Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C_il2cpp_TypeInfo_var, (uint32_t)((int32_t)(((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_6)->max_length)), 1))/L_7)));
		V_2 = L_8;
		// for (int i = 0, k = 0; i < data.Length - 1; i += numCols, k++)
		V_3 = 0;
		// for (int i = 0, k = 0; i < data.Length - 1; i += numCols, k++)
		V_4 = 0;
		goto IL_008e;
	}

IL_003e:
	{
		// Vector3 curr = new Vector3();
		il2cpp_codegen_initobj((&V_5), sizeof(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2));
		// curr.x = (float)Convert.ToDouble(data[i]);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_9 = V_0;
		int32_t L_10 = V_3;
		NullCheck(L_9);
		int32_t L_11 = L_10;
		String_t* L_12 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		double L_13;
		L_13 = Convert_ToDouble_m933DFCA7F5B65845162738829A173E79D81ED4B3(L_12, NULL);
		(&V_5)->___x_2 = ((float)L_13);
		// curr.y = (float)Convert.ToDouble(data[i + 1]);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_14 = V_0;
		int32_t L_15 = V_3;
		NullCheck(L_14);
		int32_t L_16 = ((int32_t)il2cpp_codegen_add(L_15, 1));
		String_t* L_17 = (L_14)->GetAt(static_cast<il2cpp_array_size_t>(L_16));
		double L_18;
		L_18 = Convert_ToDouble_m933DFCA7F5B65845162738829A173E79D81ED4B3(L_17, NULL);
		(&V_5)->___y_3 = ((float)L_18);
		// curr.z = (float)Convert.ToDouble(data[i + 2]);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_19 = V_0;
		int32_t L_20 = V_3;
		NullCheck(L_19);
		int32_t L_21 = ((int32_t)il2cpp_codegen_add(L_20, 2));
		String_t* L_22 = (L_19)->GetAt(static_cast<il2cpp_array_size_t>(L_21));
		double L_23;
		L_23 = Convert_ToDouble_m933DFCA7F5B65845162738829A173E79D81ED4B3(L_22, NULL);
		(&V_5)->___z_4 = ((float)L_23);
		// correctOrderVertices[k] = curr;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_24 = V_2;
		int32_t L_25 = V_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_26 = V_5;
		NullCheck(L_24);
		(L_24)->SetAt(static_cast<il2cpp_array_size_t>(L_25), (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2)L_26);
		// for (int i = 0, k = 0; i < data.Length - 1; i += numCols, k++)
		int32_t L_27 = V_3;
		int32_t L_28 = V_1;
		V_3 = ((int32_t)il2cpp_codegen_add(L_27, L_28));
		// for (int i = 0, k = 0; i < data.Length - 1; i += numCols, k++)
		int32_t L_29 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_29, 1));
	}

IL_008e:
	{
		// for (int i = 0, k = 0; i < data.Length - 1; i += numCols, k++)
		int32_t L_30 = V_3;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_31 = V_0;
		NullCheck(L_31);
		if ((((int32_t)L_30) < ((int32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_31)->max_length)), 1)))))
		{
			goto IL_003e;
		}
	}
	{
		// return correctOrderVertices;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_32 = V_2;
		return L_32;
	}
}
// System.Void SeatedAdultSliderAdjust::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SeatedAdultSliderAdjust_Start_m730E65B2E2053E8B772F082AA0F0D195099AB43B (SeatedAdultSliderAdjust_tD13DF139016030F050F1A488125C2796C6DA9842* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_set_Item_m038480C0EC13713DBD89A53BE69FF0359501B4C2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisMeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5_mDF6525BCE37B444313BE0AA2305BDF4EB8B92FE8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m5D83C79B12616961D8147BB59AD5E55683361E85_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mC19C5EEC6894CA8390C854EDC3428C93A0BD59F3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_ToArray_m91B6A76F83EF0F01FE14A5BAD9D99BDDFC9499F3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m4F495AFEC1141AA7E02729E3105CB569F2CEAD34_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t495F03F47D827883530F951D563C0BB7340E5995_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDB5B55A9B215F744DB82517864984D073F2E8F8C);
		s_Il2CppMethodInitialized = true;
	}
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* V_0 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* V_1 = NULL;
	int32_t V_2 = 0;
	String_t* V_3 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* V_4 = NULL;
	List_1_t495F03F47D827883530F951D563C0BB7340E5995* V_5 = NULL;
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	int32_t V_8 = 0;
	List_1_t495F03F47D827883530F951D563C0BB7340E5995* V_9 = NULL;
	{
		// var pcaDataStr = pcaDataAsset.text.Split(new char[] { '\n' });
		TextAsset_t2C64E93DA366D9DE5A8209E1802FA4884AC1BD69* L_0 = __this->___pcaDataAsset_5;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = TextAsset_get_text_m36846042E3CF3D9DD337BF3F8B2B1902D10C8FD9(L_0, NULL);
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_2 = (CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB*)(CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB*)SZArrayNew(CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB_il2cpp_TypeInfo_var, (uint32_t)1);
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_3 = L_2;
		NullCheck(L_3);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(0), (Il2CppChar)((int32_t)10));
		NullCheck(L_1);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_4;
		L_4 = String_Split_m101D35FEC86371D2BB4E3480F6F896880093B2E9(L_1, L_3, NULL);
		V_0 = L_4;
		// for (int ncnt = 0; ncnt < pcaDataStr.Length; ncnt++)
		V_2 = 0;
		goto IL_00b2;
	}

IL_0023:
	{
		// var aline = pcaDataStr[ncnt];
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_5 = V_0;
		int32_t L_6 = V_2;
		NullCheck(L_5);
		int32_t L_7 = L_6;
		String_t* L_8 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		V_3 = L_8;
		// string[] linedata = aline.Split(new char[] { ',' });
		String_t* L_9 = V_3;
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_10 = (CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB*)(CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB*)SZArrayNew(CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB_il2cpp_TypeInfo_var, (uint32_t)1);
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_11 = L_10;
		NullCheck(L_11);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(0), (Il2CppChar)((int32_t)44));
		NullCheck(L_9);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_12;
		L_12 = String_Split_m101D35FEC86371D2BB4E3480F6F896880093B2E9(L_9, L_11, NULL);
		V_4 = L_12;
		// if (aline == "") continue;
		String_t* L_13 = V_3;
		bool L_14;
		L_14 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_13, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, NULL);
		if (L_14)
		{
			goto IL_00ae;
		}
	}
	{
		// List<double> adata = new List<double>();
		List_1_t495F03F47D827883530F951D563C0BB7340E5995* L_15 = (List_1_t495F03F47D827883530F951D563C0BB7340E5995*)il2cpp_codegen_object_new(List_1_t495F03F47D827883530F951D563C0BB7340E5995_il2cpp_TypeInfo_var);
		NullCheck(L_15);
		List_1__ctor_m4F495AFEC1141AA7E02729E3105CB569F2CEAD34(L_15, List_1__ctor_m4F495AFEC1141AA7E02729E3105CB569F2CEAD34_RuntimeMethod_var);
		V_5 = L_15;
		// for (int i = 0; i < linedata.Length; i++)
		V_6 = 0;
		goto IL_0094;
	}

IL_0053:
	{
		// if (linedata[i].Contains("\r"))
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_16 = V_4;
		int32_t L_17 = V_6;
		NullCheck(L_16);
		int32_t L_18 = L_17;
		String_t* L_19 = (L_16)->GetAt(static_cast<il2cpp_array_size_t>(L_18));
		NullCheck(L_19);
		bool L_20;
		L_20 = String_Contains_m6D77B121FADA7CA5F397C0FABB65DA62DF03B6C3(L_19, _stringLiteralDB5B55A9B215F744DB82517864984D073F2E8F8C, NULL);
		if (!L_20)
		{
			goto IL_007d;
		}
	}
	{
		// linedata[i] = linedata[i].Replace("\r", string.Empty);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_21 = V_4;
		int32_t L_22 = V_6;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_23 = V_4;
		int32_t L_24 = V_6;
		NullCheck(L_23);
		int32_t L_25 = L_24;
		String_t* L_26 = (L_23)->GetAt(static_cast<il2cpp_array_size_t>(L_25));
		String_t* L_27 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		NullCheck(L_26);
		String_t* L_28;
		L_28 = String_Replace_mABDB7003A1D0AEDCAE9FF85E3DFFFBA752D2A166(L_26, _stringLiteralDB5B55A9B215F744DB82517864984D073F2E8F8C, L_27, NULL);
		NullCheck(L_21);
		ArrayElementTypeCheck (L_21, L_28);
		(L_21)->SetAt(static_cast<il2cpp_array_size_t>(L_22), (String_t*)L_28);
	}

IL_007d:
	{
		// adata.Add(Convert.ToDouble(linedata[i]));
		List_1_t495F03F47D827883530F951D563C0BB7340E5995* L_29 = V_5;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_30 = V_4;
		int32_t L_31 = V_6;
		NullCheck(L_30);
		int32_t L_32 = L_31;
		String_t* L_33 = (L_30)->GetAt(static_cast<il2cpp_array_size_t>(L_32));
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		double L_34;
		L_34 = Convert_ToDouble_m933DFCA7F5B65845162738829A173E79D81ED4B3(L_33, NULL);
		NullCheck(L_29);
		List_1_Add_m5D83C79B12616961D8147BB59AD5E55683361E85_inline(L_29, L_34, List_1_Add_m5D83C79B12616961D8147BB59AD5E55683361E85_RuntimeMethod_var);
		// for (int i = 0; i < linedata.Length; i++)
		int32_t L_35 = V_6;
		V_6 = ((int32_t)il2cpp_codegen_add(L_35, 1));
	}

IL_0094:
	{
		// for (int i = 0; i < linedata.Length; i++)
		int32_t L_36 = V_6;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_37 = V_4;
		NullCheck(L_37);
		if ((((int32_t)L_36) < ((int32_t)((int32_t)(((RuntimeArray*)L_37)->max_length)))))
		{
			goto IL_0053;
		}
	}
	{
		// pcaData.Add(adata.ToArray());
		List_1_t64FC2174A52DBC518FB499976FF0BA043E643411* L_38 = __this->___pcaData_22;
		List_1_t495F03F47D827883530F951D563C0BB7340E5995* L_39 = V_5;
		NullCheck(L_39);
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_40;
		L_40 = List_1_ToArray_m91B6A76F83EF0F01FE14A5BAD9D99BDDFC9499F3(L_39, List_1_ToArray_m91B6A76F83EF0F01FE14A5BAD9D99BDDFC9499F3_RuntimeMethod_var);
		NullCheck(L_38);
		List_1_Add_mC19C5EEC6894CA8390C854EDC3428C93A0BD59F3_inline(L_38, L_40, List_1_Add_mC19C5EEC6894CA8390C854EDC3428C93A0BD59F3_RuntimeMethod_var);
	}

IL_00ae:
	{
		// for (int ncnt = 0; ncnt < pcaDataStr.Length; ncnt++)
		int32_t L_41 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_41, 1));
	}

IL_00b2:
	{
		// for (int ncnt = 0; ncnt < pcaDataStr.Length; ncnt++)
		int32_t L_42 = V_2;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_43 = V_0;
		NullCheck(L_43);
		if ((((int32_t)L_42) < ((int32_t)((int32_t)(((RuntimeArray*)L_43)->max_length)))))
		{
			goto IL_0023;
		}
	}
	{
		// mesh = model.GetComponent<MeshFilter>().mesh;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_44 = __this->___model_4;
		NullCheck(L_44);
		MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5* L_45;
		L_45 = GameObject_GetComponent_TisMeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5_mDF6525BCE37B444313BE0AA2305BDF4EB8B92FE8(L_44, GameObject_GetComponent_TisMeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5_mDF6525BCE37B444313BE0AA2305BDF4EB8B92FE8_RuntimeMethod_var);
		NullCheck(L_45);
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_46;
		L_46 = MeshFilter_get_mesh_m13172D7EF6682861971817D0A47EE2BE49FBCB1C(L_45, NULL);
		__this->___mesh_25 = L_46;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___mesh_25), (void*)L_46);
		// vertices = mesh.vertices;
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_47 = __this->___mesh_25;
		NullCheck(L_47);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_48;
		L_48 = Mesh_get_vertices_mA3577F1B08EDDD54E26AEB3F8FFE4EC247D2ABB9(L_47, NULL);
		__this->___vertices_26 = L_48;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___vertices_26), (void*)L_48);
		// mesh.MarkDynamic();
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_49 = __this->___mesh_25;
		NullCheck(L_49);
		Mesh_MarkDynamic_m718089940F240AFE625D6DC9DA4E6F20229CC322(L_49, NULL);
		// correctVertices = getCorrectVertices();
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_50;
		L_50 = SeatedAdultSliderAdjust_getCorrectVertices_m9633F01675D658F3B99284566CC9743BD3A13835(__this, NULL);
		__this->___correctVertices_27 = L_50;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___correctVertices_27), (void*)L_50);
		// for (int i = 0; i < vertices.Length; i++)
		V_7 = 0;
		goto IL_017a;
	}

IL_00fe:
	{
		// indexMap[vertices[i].x.ToString() + " " + vertices[i].y.ToString() + " " + vertices[i].z.ToString()] = i;
		Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588* L_51 = __this->___indexMap_24;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_52 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)5);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_53 = L_52;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_54 = __this->___vertices_26;
		int32_t L_55 = V_7;
		NullCheck(L_54);
		float* L_56 = (&((L_54)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_55)))->___x_2);
		String_t* L_57;
		L_57 = Single_ToString_mE282EDA9CA4F7DF88432D807732837A629D04972(L_56, NULL);
		NullCheck(L_53);
		ArrayElementTypeCheck (L_53, L_57);
		(L_53)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)L_57);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_58 = L_53;
		NullCheck(L_58);
		ArrayElementTypeCheck (L_58, _stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745);
		(L_58)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)_stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_59 = L_58;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_60 = __this->___vertices_26;
		int32_t L_61 = V_7;
		NullCheck(L_60);
		float* L_62 = (&((L_60)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_61)))->___y_3);
		String_t* L_63;
		L_63 = Single_ToString_mE282EDA9CA4F7DF88432D807732837A629D04972(L_62, NULL);
		NullCheck(L_59);
		ArrayElementTypeCheck (L_59, L_63);
		(L_59)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)L_63);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_64 = L_59;
		NullCheck(L_64);
		ArrayElementTypeCheck (L_64, _stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745);
		(L_64)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)_stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_65 = L_64;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_66 = __this->___vertices_26;
		int32_t L_67 = V_7;
		NullCheck(L_66);
		float* L_68 = (&((L_66)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_67)))->___z_4);
		String_t* L_69;
		L_69 = Single_ToString_mE282EDA9CA4F7DF88432D807732837A629D04972(L_68, NULL);
		NullCheck(L_65);
		ArrayElementTypeCheck (L_65, L_69);
		(L_65)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)L_69);
		String_t* L_70;
		L_70 = String_Concat_m647EBF831F54B6DF7D5AFA5FD012CF4EE7571B6A(L_65, NULL);
		int32_t L_71 = V_7;
		NullCheck(L_51);
		Dictionary_2_set_Item_m038480C0EC13713DBD89A53BE69FF0359501B4C2(L_51, L_70, L_71, Dictionary_2_set_Item_m038480C0EC13713DBD89A53BE69FF0359501B4C2_RuntimeMethod_var);
		// for (int i = 0; i < vertices.Length; i++)
		int32_t L_72 = V_7;
		V_7 = ((int32_t)il2cpp_codegen_add(L_72, 1));
	}

IL_017a:
	{
		// for (int i = 0; i < vertices.Length; i++)
		int32_t L_73 = V_7;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_74 = __this->___vertices_26;
		NullCheck(L_74);
		if ((((int32_t)L_73) < ((int32_t)((int32_t)(((RuntimeArray*)L_74)->max_length)))))
		{
			goto IL_00fe;
		}
	}
	{
		// var landmarkStr = meanLandmarkDataAsset.text.Split(new char[] { '\n' });
		TextAsset_t2C64E93DA366D9DE5A8209E1802FA4884AC1BD69* L_75 = __this->___meanLandmarkDataAsset_6;
		NullCheck(L_75);
		String_t* L_76;
		L_76 = TextAsset_get_text_m36846042E3CF3D9DD337BF3F8B2B1902D10C8FD9(L_75, NULL);
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_77 = (CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB*)(CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB*)SZArrayNew(CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB_il2cpp_TypeInfo_var, (uint32_t)1);
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_78 = L_77;
		NullCheck(L_78);
		(L_78)->SetAt(static_cast<il2cpp_array_size_t>(0), (Il2CppChar)((int32_t)10));
		NullCheck(L_76);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_79;
		L_79 = String_Split_m101D35FEC86371D2BB4E3480F6F896880093B2E9(L_76, L_78, NULL);
		V_1 = L_79;
		// for (int ncnt = 0; ncnt < predLandmarkNum * 3; ncnt++)
		V_8 = 0;
		goto IL_01d9;
	}

IL_01aa:
	{
		// List<double> adata = new List<double>();
		List_1_t495F03F47D827883530F951D563C0BB7340E5995* L_80 = (List_1_t495F03F47D827883530F951D563C0BB7340E5995*)il2cpp_codegen_object_new(List_1_t495F03F47D827883530F951D563C0BB7340E5995_il2cpp_TypeInfo_var);
		NullCheck(L_80);
		List_1__ctor_m4F495AFEC1141AA7E02729E3105CB569F2CEAD34(L_80, List_1__ctor_m4F495AFEC1141AA7E02729E3105CB569F2CEAD34_RuntimeMethod_var);
		V_9 = L_80;
		// adata.Add(Convert.ToDouble(landmarkStr[ncnt]));
		List_1_t495F03F47D827883530F951D563C0BB7340E5995* L_81 = V_9;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_82 = V_1;
		int32_t L_83 = V_8;
		NullCheck(L_82);
		int32_t L_84 = L_83;
		String_t* L_85 = (L_82)->GetAt(static_cast<il2cpp_array_size_t>(L_84));
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		double L_86;
		L_86 = Convert_ToDouble_m933DFCA7F5B65845162738829A173E79D81ED4B3(L_85, NULL);
		NullCheck(L_81);
		List_1_Add_m5D83C79B12616961D8147BB59AD5E55683361E85_inline(L_81, L_86, List_1_Add_m5D83C79B12616961D8147BB59AD5E55683361E85_RuntimeMethod_var);
		// landmarkData.Add(adata.ToArray());
		List_1_t64FC2174A52DBC518FB499976FF0BA043E643411* L_87 = __this->___landmarkData_23;
		List_1_t495F03F47D827883530F951D563C0BB7340E5995* L_88 = V_9;
		NullCheck(L_88);
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_89;
		L_89 = List_1_ToArray_m91B6A76F83EF0F01FE14A5BAD9D99BDDFC9499F3(L_88, List_1_ToArray_m91B6A76F83EF0F01FE14A5BAD9D99BDDFC9499F3_RuntimeMethod_var);
		NullCheck(L_87);
		List_1_Add_mC19C5EEC6894CA8390C854EDC3428C93A0BD59F3_inline(L_87, L_89, List_1_Add_mC19C5EEC6894CA8390C854EDC3428C93A0BD59F3_RuntimeMethod_var);
		// for (int ncnt = 0; ncnt < predLandmarkNum * 3; ncnt++)
		int32_t L_90 = V_8;
		V_8 = ((int32_t)il2cpp_codegen_add(L_90, 1));
	}

IL_01d9:
	{
		// for (int ncnt = 0; ncnt < predLandmarkNum * 3; ncnt++)
		int32_t L_91 = V_8;
		int32_t L_92 = __this->___predLandmarkNum_30;
		if ((((int32_t)L_91) < ((int32_t)((int32_t)il2cpp_codegen_multiply(L_92, 3)))))
		{
			goto IL_01aa;
		}
	}
	{
		// meanVertices = correctVertices;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_93 = __this->___correctVertices_27;
		__this->___meanVertices_28 = L_93;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___meanVertices_28), (void*)L_93);
		// }
		return;
	}
}
// System.Void SeatedAdultSliderAdjust::ModelAnthroUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SeatedAdultSliderAdjust_ModelAnthroUpdate_m3F16E1143A59C2353D6D6A838F59D5992ACE2BEE (SeatedAdultSliderAdjust_tD13DF139016030F050F1A488125C2796C6DA9842* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_mE01750B88D9A581E9196F3444952F7592E862592_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mBCF1516ECF7285668A96B426CD6C201113395AB2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0487849E743EE7A8A4466475F43E21864F0F1F48);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7B4264F4BD0983833238F00348CA2152EA160369);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8A0FEFCF616268A7D2AEEE23BA07B44ADB72452E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral931018A69BAE325939AFC4A7E983ED54CB0E60AC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB281D5412E3C8F31FEC213B8C136C5EFC40702AB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDB81FEF0286C64E4137586C08428BE38969C7CF7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEF9AA825E2BF1AA80FEE50E865D31D82FAE268D4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF511102AF85AA2E3EFF8375103C2269E3633C128);
		s_Il2CppMethodInitialized = true;
	}
	double V_0 = 0.0;
	double V_1 = 0.0;
	DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* V_2 = NULL;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	float V_6 = 0.0f;
	float V_7 = 0.0f;
	float V_8 = 0.0f;
	float V_9 = 0.0f;
	{
		// double sexVal = 1; // by default it is male
		V_0 = (1.0);
		// if (sex.value == 1)
		TMP_Dropdown_t73B37BFDA0D005451C7B750938AFB1748E5EA504* L_0 = __this->___sex_19;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = TMP_Dropdown_get_value_m5916A6D1897431E8ED789FEC24551A311D1B5C70_inline(L_0, NULL);
		if ((!(((uint32_t)L_1) == ((uint32_t)1))))
		{
			goto IL_0022;
		}
	}
	{
		// sexVal = -1;
		V_0 = (-1.0);
	}

IL_0022:
	{
		// double studyVal = 1; // by default it is US
		V_1 = (1.0);
		// if(study.value == 1)
		TMP_Dropdown_t73B37BFDA0D005451C7B750938AFB1748E5EA504* L_2 = __this->___study_20;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = TMP_Dropdown_get_value_m5916A6D1897431E8ED789FEC24551A311D1B5C70_inline(L_2, NULL);
		if ((!(((uint32_t)L_3) == ((uint32_t)1))))
		{
			goto IL_0044;
		}
	}
	{
		// studyVal = -1;
		V_1 = (-1.0);
	}

IL_0044:
	{
		// var Anths = new double[] {
		//      studyVal,
		//      sexVal,
		//      sliderStature.value,
		//      sliderSittingHeightStat.value,
		//      sliderBMI.value,
		//      sliderAge.value,
		//      1.0
		// };
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_4 = (DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE*)(DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE*)SZArrayNew(DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE_il2cpp_TypeInfo_var, (uint32_t)7);
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_5 = L_4;
		double L_6 = V_1;
		NullCheck(L_5);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(0), (double)L_6);
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_7 = L_5;
		double L_8 = V_0;
		NullCheck(L_7);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(1), (double)L_8);
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_9 = L_7;
		Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* L_10 = __this->___sliderStature_9;
		NullCheck(L_10);
		float L_11;
		L_11 = VirtualFuncInvoker0< float >::Invoke(46 /* System.Single UnityEngine.UI.Slider::get_value() */, L_10);
		NullCheck(L_9);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(2), (double)((double)L_11));
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_12 = L_9;
		Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* L_13 = __this->___sliderSittingHeightStat_10;
		NullCheck(L_13);
		float L_14;
		L_14 = VirtualFuncInvoker0< float >::Invoke(46 /* System.Single UnityEngine.UI.Slider::get_value() */, L_13);
		NullCheck(L_12);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(3), (double)((double)L_14));
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_15 = L_12;
		Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* L_16 = __this->___sliderBMI_8;
		NullCheck(L_16);
		float L_17;
		L_17 = VirtualFuncInvoker0< float >::Invoke(46 /* System.Single UnityEngine.UI.Slider::get_value() */, L_16);
		NullCheck(L_15);
		(L_15)->SetAt(static_cast<il2cpp_array_size_t>(4), (double)((double)L_17));
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_18 = L_15;
		Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* L_19 = __this->___sliderAge_12;
		NullCheck(L_19);
		float L_20;
		L_20 = VirtualFuncInvoker0< float >::Invoke(46 /* System.Single UnityEngine.UI.Slider::get_value() */, L_19);
		NullCheck(L_18);
		(L_18)->SetAt(static_cast<il2cpp_array_size_t>(5), (double)((double)L_20));
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_21 = L_18;
		NullCheck(L_21);
		(L_21)->SetAt(static_cast<il2cpp_array_size_t>(6), (double)(1.0));
		V_2 = L_21;
		// var skipNum = predAnthNum + predLandmarkNum * 3;
		int32_t L_22 = __this->___predAnthNum_29;
		int32_t L_23 = __this->___predLandmarkNum_30;
		V_3 = ((int32_t)il2cpp_codegen_add(L_22, ((int32_t)il2cpp_codegen_multiply(L_23, 3))));
		// for (int i = 0; i < correctVertices.Length; i++)
		V_4 = 0;
		goto IL_01f6;
	}

IL_00b3:
	{
		// int idx = indexMap[correctVertices[i].x.ToString() + " " +
		//                    correctVertices[i].y.ToString() + " " +
		//                    correctVertices[i].z.ToString()];
		Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588* L_24 = __this->___indexMap_24;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_25 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)5);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_26 = L_25;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_27 = __this->___correctVertices_27;
		int32_t L_28 = V_4;
		NullCheck(L_27);
		float* L_29 = (&((L_27)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_28)))->___x_2);
		String_t* L_30;
		L_30 = Single_ToString_mE282EDA9CA4F7DF88432D807732837A629D04972(L_29, NULL);
		NullCheck(L_26);
		ArrayElementTypeCheck (L_26, L_30);
		(L_26)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)L_30);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_31 = L_26;
		NullCheck(L_31);
		ArrayElementTypeCheck (L_31, _stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745);
		(L_31)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)_stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_32 = L_31;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_33 = __this->___correctVertices_27;
		int32_t L_34 = V_4;
		NullCheck(L_33);
		float* L_35 = (&((L_33)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_34)))->___y_3);
		String_t* L_36;
		L_36 = Single_ToString_mE282EDA9CA4F7DF88432D807732837A629D04972(L_35, NULL);
		NullCheck(L_32);
		ArrayElementTypeCheck (L_32, L_36);
		(L_32)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)L_36);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_37 = L_32;
		NullCheck(L_37);
		ArrayElementTypeCheck (L_37, _stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745);
		(L_37)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)_stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_38 = L_37;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_39 = __this->___correctVertices_27;
		int32_t L_40 = V_4;
		NullCheck(L_39);
		float* L_41 = (&((L_39)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_40)))->___z_4);
		String_t* L_42;
		L_42 = Single_ToString_mE282EDA9CA4F7DF88432D807732837A629D04972(L_41, NULL);
		NullCheck(L_38);
		ArrayElementTypeCheck (L_38, L_42);
		(L_38)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)L_42);
		String_t* L_43;
		L_43 = String_Concat_m647EBF831F54B6DF7D5AFA5FD012CF4EE7571B6A(L_38, NULL);
		NullCheck(L_24);
		int32_t L_44;
		L_44 = Dictionary_2_get_Item_mE01750B88D9A581E9196F3444952F7592E862592(L_24, L_43, Dictionary_2_get_Item_mE01750B88D9A581E9196F3444952F7592E862592_RuntimeMethod_var);
		V_5 = L_44;
		// var diffx = calcCoords(Anths, pcaData[skipNum + i * 3 + 0]);
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_45 = V_2;
		List_1_t64FC2174A52DBC518FB499976FF0BA043E643411* L_46 = __this->___pcaData_22;
		int32_t L_47 = V_3;
		int32_t L_48 = V_4;
		NullCheck(L_46);
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_49;
		L_49 = List_1_get_Item_mBCF1516ECF7285668A96B426CD6C201113395AB2(L_46, ((int32_t)il2cpp_codegen_add(L_47, ((int32_t)il2cpp_codegen_multiply(L_48, 3)))), List_1_get_Item_mBCF1516ECF7285668A96B426CD6C201113395AB2_RuntimeMethod_var);
		float L_50;
		L_50 = SeatedAdultSliderAdjust_calcCoords_m0DDD3650DC25004D581299790B37A44F409DD1D7(__this, L_45, L_49, NULL);
		V_6 = L_50;
		// var diffy = calcCoords(Anths, pcaData[skipNum + i * 3 + 1]);
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_51 = V_2;
		List_1_t64FC2174A52DBC518FB499976FF0BA043E643411* L_52 = __this->___pcaData_22;
		int32_t L_53 = V_3;
		int32_t L_54 = V_4;
		NullCheck(L_52);
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_55;
		L_55 = List_1_get_Item_mBCF1516ECF7285668A96B426CD6C201113395AB2(L_52, ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_53, ((int32_t)il2cpp_codegen_multiply(L_54, 3)))), 1)), List_1_get_Item_mBCF1516ECF7285668A96B426CD6C201113395AB2_RuntimeMethod_var);
		float L_56;
		L_56 = SeatedAdultSliderAdjust_calcCoords_m0DDD3650DC25004D581299790B37A44F409DD1D7(__this, L_51, L_55, NULL);
		V_7 = L_56;
		// var diffz = calcCoords(Anths, pcaData[skipNum + i * 3 + 2]);
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_57 = V_2;
		List_1_t64FC2174A52DBC518FB499976FF0BA043E643411* L_58 = __this->___pcaData_22;
		int32_t L_59 = V_3;
		int32_t L_60 = V_4;
		NullCheck(L_58);
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_61;
		L_61 = List_1_get_Item_mBCF1516ECF7285668A96B426CD6C201113395AB2(L_58, ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_59, ((int32_t)il2cpp_codegen_multiply(L_60, 3)))), 2)), List_1_get_Item_mBCF1516ECF7285668A96B426CD6C201113395AB2_RuntimeMethod_var);
		float L_62;
		L_62 = SeatedAdultSliderAdjust_calcCoords_m0DDD3650DC25004D581299790B37A44F409DD1D7(__this, L_57, L_61, NULL);
		V_8 = L_62;
		// vertices[idx].x = meanVertices[i].x - diffx;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_63 = __this->___vertices_26;
		int32_t L_64 = V_5;
		NullCheck(L_63);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_65 = __this->___meanVertices_28;
		int32_t L_66 = V_4;
		NullCheck(L_65);
		float L_67 = ((L_65)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_66)))->___x_2;
		float L_68 = V_6;
		((L_63)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_64)))->___x_2 = ((float)il2cpp_codegen_subtract(L_67, L_68));
		// vertices[idx].y = meanVertices[i].y + diffy;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_69 = __this->___vertices_26;
		int32_t L_70 = V_5;
		NullCheck(L_69);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_71 = __this->___meanVertices_28;
		int32_t L_72 = V_4;
		NullCheck(L_71);
		float L_73 = ((L_71)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_72)))->___y_3;
		float L_74 = V_7;
		((L_69)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_70)))->___y_3 = ((float)il2cpp_codegen_add(L_73, L_74));
		// vertices[idx].z = meanVertices[i].z + diffz;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_75 = __this->___vertices_26;
		int32_t L_76 = V_5;
		NullCheck(L_75);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_77 = __this->___meanVertices_28;
		int32_t L_78 = V_4;
		NullCheck(L_77);
		float L_79 = ((L_77)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_78)))->___z_4;
		float L_80 = V_8;
		((L_75)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_76)))->___z_4 = ((float)il2cpp_codegen_add(L_79, L_80));
		// for (int i = 0; i < correctVertices.Length; i++)
		int32_t L_81 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_81, 1));
	}

IL_01f6:
	{
		// for (int i = 0; i < correctVertices.Length; i++)
		int32_t L_82 = V_4;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_83 = __this->___correctVertices_27;
		NullCheck(L_83);
		if ((((int32_t)L_82) < ((int32_t)((int32_t)(((RuntimeArray*)L_83)->max_length)))))
		{
			goto IL_00b3;
		}
	}
	{
		// mesh.vertices = vertices;
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_84 = __this->___mesh_25;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_85 = __this->___vertices_26;
		NullCheck(L_84);
		Mesh_set_vertices_m5BB814D89E9ACA00DBF19F7D8E22CB73AC73FE5C(L_84, L_85, NULL);
		// mesh.RecalculateNormals();
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_86 = __this->___mesh_25;
		NullCheck(L_86);
		Mesh_RecalculateNormals_m3AA2788914611444E030CA310E03E3CFE683902B(L_86, NULL);
		// mesh.RecalculateBounds();
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_87 = __this->___mesh_25;
		NullCheck(L_87);
		Mesh_RecalculateBounds_mA9B293F57C6CD298AE2D2DB19061FC23B05AB90B(L_87, NULL);
		// if (areLandmarksDisplayed)
		bool L_88 = __this->___areLandmarksDisplayed_21;
		if (!L_88)
		{
			goto IL_0259;
		}
	}
	{
		// model.transform.DetachChildren();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_89 = __this->___model_4;
		NullCheck(L_89);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_90;
		L_90 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_89, NULL);
		NullCheck(L_90);
		Transform_DetachChildren_m7E4B3405F2F053B059E76EC1DF0F235EED335D69(L_90, NULL);
		// GameObject.Destroy(GameObject.Find("landmarks"));
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_91;
		L_91 = GameObject_Find_m7A669B4EEC2617AB82F6E3FF007CDCD9F21DB300(_stringLiteral931018A69BAE325939AFC4A7E983ED54CB0E60AC, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB(L_91, NULL);
		// CreateLandmarks();
		SeatedAdultSliderAdjust_CreateLandmarks_m13699B43FA0836ECE2F0C063B1740C5F3D5F0476(__this, NULL);
	}

IL_0259:
	{
		// lbStature.text = "Stature: " + sliderStature.value.ToString() + " mm";
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_92 = __this->___lbStature_15;
		Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* L_93 = __this->___sliderStature_9;
		NullCheck(L_93);
		float L_94;
		L_94 = VirtualFuncInvoker0< float >::Invoke(46 /* System.Single UnityEngine.UI.Slider::get_value() */, L_93);
		V_9 = L_94;
		String_t* L_95;
		L_95 = Single_ToString_mE282EDA9CA4F7DF88432D807732837A629D04972((&V_9), NULL);
		String_t* L_96;
		L_96 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(_stringLiteralB281D5412E3C8F31FEC213B8C136C5EFC40702AB, L_95, _stringLiteralF511102AF85AA2E3EFF8375103C2269E3633C128, NULL);
		NullCheck(L_92);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_92, L_96);
		// lbBMI.text = "BMI: " + sliderBMI.value.ToString() + " kg/m^2";
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_97 = __this->___lbBMI_14;
		Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* L_98 = __this->___sliderBMI_8;
		NullCheck(L_98);
		float L_99;
		L_99 = VirtualFuncInvoker0< float >::Invoke(46 /* System.Single UnityEngine.UI.Slider::get_value() */, L_98);
		V_9 = L_99;
		String_t* L_100;
		L_100 = Single_ToString_mE282EDA9CA4F7DF88432D807732837A629D04972((&V_9), NULL);
		String_t* L_101;
		L_101 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(_stringLiteral8A0FEFCF616268A7D2AEEE23BA07B44ADB72452E, L_100, _stringLiteral0487849E743EE7A8A4466475F43E21864F0F1F48, NULL);
		NullCheck(L_97);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_97, L_101);
		// lbSittingHeightStat.text = "Sitting Height / Stature: " +  Truncate((float)sliderSittingHeightStat.value, 6).ToString();
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_102 = __this->___lbSittingHeightStat_16;
		Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* L_103 = __this->___sliderSittingHeightStat_10;
		NullCheck(L_103);
		float L_104;
		L_104 = VirtualFuncInvoker0< float >::Invoke(46 /* System.Single UnityEngine.UI.Slider::get_value() */, L_103);
		float L_105;
		L_105 = SeatedAdultSliderAdjust_Truncate_mBFE8DAE325A902DE2DBAA00A4186544E9241EBE5(((float)L_104), 6, NULL);
		V_9 = L_105;
		String_t* L_106;
		L_106 = Single_ToString_mE282EDA9CA4F7DF88432D807732837A629D04972((&V_9), NULL);
		String_t* L_107;
		L_107 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteralEF9AA825E2BF1AA80FEE50E865D31D82FAE268D4, L_106, NULL);
		NullCheck(L_102);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_102, L_107);
		// lbAge.text = "Age: " + sliderAge.value.ToString() + " years";
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_108 = __this->___lbAge_13;
		Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* L_109 = __this->___sliderAge_12;
		NullCheck(L_109);
		float L_110;
		L_110 = VirtualFuncInvoker0< float >::Invoke(46 /* System.Single UnityEngine.UI.Slider::get_value() */, L_109);
		V_9 = L_110;
		String_t* L_111;
		L_111 = Single_ToString_mE282EDA9CA4F7DF88432D807732837A629D04972((&V_9), NULL);
		String_t* L_112;
		L_112 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(_stringLiteralDB81FEF0286C64E4137586C08428BE38969C7CF7, L_111, _stringLiteral7B4264F4BD0983833238F00348CA2152EA160369, NULL);
		NullCheck(L_108);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_108, L_112);
		// }
		return;
	}
}
// System.Single SeatedAdultSliderAdjust::calcCoords(System.Double[],System.Double[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float SeatedAdultSliderAdjust_calcCoords_m0DDD3650DC25004D581299790B37A44F409DD1D7 (SeatedAdultSliderAdjust_tD13DF139016030F050F1A488125C2796C6DA9842* __this, DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* ___diffAnths0, DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* ___onePCAdata1, const RuntimeMethod* method) 
{
	double V_0 = 0.0;
	int32_t V_1 = 0;
	{
		// {   var diffCoords = 0.0;
		V_0 = (0.0);
		// for (int k = 0; k < diffAnths.Length; k++)
		V_1 = 0;
		goto IL_001c;
	}

IL_000e:
	{
		// diffCoords += onePCAdata[k] * diffAnths[k];
		double L_0 = V_0;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_1 = ___onePCAdata1;
		int32_t L_2 = V_1;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		double L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_5 = ___diffAnths0;
		int32_t L_6 = V_1;
		NullCheck(L_5);
		int32_t L_7 = L_6;
		double L_8 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		V_0 = ((double)il2cpp_codegen_add(L_0, ((double)il2cpp_codegen_multiply(L_4, L_8))));
		// for (int k = 0; k < diffAnths.Length; k++)
		int32_t L_9 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_9, 1));
	}

IL_001c:
	{
		// for (int k = 0; k < diffAnths.Length; k++)
		int32_t L_10 = V_1;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_11 = ___diffAnths0;
		NullCheck(L_11);
		if ((((int32_t)L_10) < ((int32_t)((int32_t)(((RuntimeArray*)L_11)->max_length)))))
		{
			goto IL_000e;
		}
	}
	{
		// return ((float)diffCoords);
		double L_12 = V_0;
		return ((float)L_12);
	}
}
// System.Void SeatedAdultSliderAdjust::ShowLandmarks()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SeatedAdultSliderAdjust_ShowLandmarks_mB15F6E9CD494066B68466950E794FBFD4079C7D1 (SeatedAdultSliderAdjust_tD13DF139016030F050F1A488125C2796C6DA9842* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5B2D0D1839F6E563813543D768A5FB707647FBCE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral72B6B2AFB007B7EFF933E2421DF01F832D40625B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral931018A69BAE325939AFC4A7E983ED54CB0E60AC);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!areLandmarksDisplayed)
		bool L_0 = __this->___areLandmarksDisplayed_21;
		if (L_0)
		{
			goto IL_0026;
		}
	}
	{
		// areLandmarksDisplayed = true;
		__this->___areLandmarksDisplayed_21 = (bool)1;
		// landmarkButtonText.text = "Hide Landmarks";
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_1 = __this->___landmarkButtonText_18;
		NullCheck(L_1);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_1, _stringLiteral5B2D0D1839F6E563813543D768A5FB707647FBCE);
		// CreateLandmarks();
		SeatedAdultSliderAdjust_CreateLandmarks_m13699B43FA0836ECE2F0C063B1740C5F3D5F0476(__this, NULL);
		return;
	}

IL_0026:
	{
		// areLandmarksDisplayed = false;
		__this->___areLandmarksDisplayed_21 = (bool)0;
		// landmarkButtonText.text = "Show Landmarks";
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_2 = __this->___landmarkButtonText_18;
		NullCheck(L_2);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_2, _stringLiteral72B6B2AFB007B7EFF933E2421DF01F832D40625B);
		// model.transform.DetachChildren();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3 = __this->___model_4;
		NullCheck(L_3);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4;
		L_4 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_3, NULL);
		NullCheck(L_4);
		Transform_DetachChildren_m7E4B3405F2F053B059E76EC1DF0F235EED335D69(L_4, NULL);
		// GameObject.Destroy(GameObject.Find("landmarks"));
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5;
		L_5 = GameObject_Find_m7A669B4EEC2617AB82F6E3FF007CDCD9F21DB300(_stringLiteral931018A69BAE325939AFC4A7E983ED54CB0E60AC, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB(L_5, NULL);
		// }
		return;
	}
}
// System.Void SeatedAdultSliderAdjust::CreateLandmarks()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SeatedAdultSliderAdjust_CreateLandmarks_m13699B43FA0836ECE2F0C063B1740C5F3D5F0476 (SeatedAdultSliderAdjust_tD13DF139016030F050F1A488125C2796C6DA9842* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_m7FF948365C38BC39333D82B235A7C4EAD219960D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_m026EB44DB6238F13E2AFBECF1FBBE924CB1B040A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mBCF1516ECF7285668A96B426CD6C201113395AB2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral931018A69BAE325939AFC4A7E983ED54CB0E60AC);
		s_Il2CppMethodInitialized = true;
	}
	double V_0 = 0.0;
	double V_1 = 0.0;
	DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* V_2 = NULL;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_3 = NULL;
	int32_t V_4 = 0;
	double V_5 = 0.0;
	double V_6 = 0.0;
	double V_7 = 0.0;
	{
		// double sexVal = 1; // by default it is male
		V_0 = (1.0);
		// if (sex.value == 1)
		TMP_Dropdown_t73B37BFDA0D005451C7B750938AFB1748E5EA504* L_0 = __this->___sex_19;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = TMP_Dropdown_get_value_m5916A6D1897431E8ED789FEC24551A311D1B5C70_inline(L_0, NULL);
		if ((!(((uint32_t)L_1) == ((uint32_t)1))))
		{
			goto IL_0022;
		}
	}
	{
		// sexVal = -1;
		V_0 = (-1.0);
	}

IL_0022:
	{
		// double studyVal = 1; // by default it is US
		V_1 = (1.0);
		// if (study.value == 1)
		TMP_Dropdown_t73B37BFDA0D005451C7B750938AFB1748E5EA504* L_2 = __this->___study_20;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = TMP_Dropdown_get_value_m5916A6D1897431E8ED789FEC24551A311D1B5C70_inline(L_2, NULL);
		if ((!(((uint32_t)L_3) == ((uint32_t)1))))
		{
			goto IL_0044;
		}
	}
	{
		// studyVal = -1;
		V_1 = (-1.0);
	}

IL_0044:
	{
		// var Anths = new double[] {
		//      studyVal,
		//      sexVal,
		//      sliderStature.value,
		//      sliderSittingHeightStat.value,
		//      sliderBMI.value,
		//      sliderAge.value,
		//      1.0
		// };
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_4 = (DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE*)(DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE*)SZArrayNew(DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE_il2cpp_TypeInfo_var, (uint32_t)7);
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_5 = L_4;
		double L_6 = V_1;
		NullCheck(L_5);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(0), (double)L_6);
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_7 = L_5;
		double L_8 = V_0;
		NullCheck(L_7);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(1), (double)L_8);
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_9 = L_7;
		Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* L_10 = __this->___sliderStature_9;
		NullCheck(L_10);
		float L_11;
		L_11 = VirtualFuncInvoker0< float >::Invoke(46 /* System.Single UnityEngine.UI.Slider::get_value() */, L_10);
		NullCheck(L_9);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(2), (double)((double)L_11));
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_12 = L_9;
		Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* L_13 = __this->___sliderSittingHeightStat_10;
		NullCheck(L_13);
		float L_14;
		L_14 = VirtualFuncInvoker0< float >::Invoke(46 /* System.Single UnityEngine.UI.Slider::get_value() */, L_13);
		NullCheck(L_12);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(3), (double)((double)L_14));
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_15 = L_12;
		Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* L_16 = __this->___sliderBMI_8;
		NullCheck(L_16);
		float L_17;
		L_17 = VirtualFuncInvoker0< float >::Invoke(46 /* System.Single UnityEngine.UI.Slider::get_value() */, L_16);
		NullCheck(L_15);
		(L_15)->SetAt(static_cast<il2cpp_array_size_t>(4), (double)((double)L_17));
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_18 = L_15;
		Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* L_19 = __this->___sliderAge_12;
		NullCheck(L_19);
		float L_20;
		L_20 = VirtualFuncInvoker0< float >::Invoke(46 /* System.Single UnityEngine.UI.Slider::get_value() */, L_19);
		NullCheck(L_18);
		(L_18)->SetAt(static_cast<il2cpp_array_size_t>(5), (double)((double)L_20));
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_21 = L_18;
		NullCheck(L_21);
		(L_21)->SetAt(static_cast<il2cpp_array_size_t>(6), (double)(1.0));
		V_2 = L_21;
		// GameObject landmarks = new GameObject("landmarks");
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_22 = (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)il2cpp_codegen_object_new(GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var);
		NullCheck(L_22);
		GameObject__ctor_m37D512B05D292F954792225E6C6EEE95293A9B88(L_22, _stringLiteral931018A69BAE325939AFC4A7E983ED54CB0E60AC, NULL);
		V_3 = L_22;
		// for (int i = 0; i < predLandmarkNum; i++)
		V_4 = 0;
		goto IL_01cc;
	}

IL_00ae:
	{
		// var xcoord = landmarkData[i * 3 + 0][0] + calcCoords(Anths, pcaData[predAnthNum + i * 3 + 0]);
		List_1_t64FC2174A52DBC518FB499976FF0BA043E643411* L_23 = __this->___landmarkData_23;
		int32_t L_24 = V_4;
		NullCheck(L_23);
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_25;
		L_25 = List_1_get_Item_mBCF1516ECF7285668A96B426CD6C201113395AB2(L_23, ((int32_t)il2cpp_codegen_multiply(L_24, 3)), List_1_get_Item_mBCF1516ECF7285668A96B426CD6C201113395AB2_RuntimeMethod_var);
		NullCheck(L_25);
		int32_t L_26 = 0;
		double L_27 = (L_25)->GetAt(static_cast<il2cpp_array_size_t>(L_26));
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_28 = V_2;
		List_1_t64FC2174A52DBC518FB499976FF0BA043E643411* L_29 = __this->___pcaData_22;
		int32_t L_30 = __this->___predAnthNum_29;
		int32_t L_31 = V_4;
		NullCheck(L_29);
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_32;
		L_32 = List_1_get_Item_mBCF1516ECF7285668A96B426CD6C201113395AB2(L_29, ((int32_t)il2cpp_codegen_add(L_30, ((int32_t)il2cpp_codegen_multiply(L_31, 3)))), List_1_get_Item_mBCF1516ECF7285668A96B426CD6C201113395AB2_RuntimeMethod_var);
		float L_33;
		L_33 = SeatedAdultSliderAdjust_calcCoords_m0DDD3650DC25004D581299790B37A44F409DD1D7(__this, L_28, L_32, NULL);
		V_5 = ((double)il2cpp_codegen_add(L_27, ((double)L_33)));
		// var ycoord = landmarkData[i * 3 + 1][0] + calcCoords(Anths, pcaData[predAnthNum + i * 3 + 1]);
		List_1_t64FC2174A52DBC518FB499976FF0BA043E643411* L_34 = __this->___landmarkData_23;
		int32_t L_35 = V_4;
		NullCheck(L_34);
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_36;
		L_36 = List_1_get_Item_mBCF1516ECF7285668A96B426CD6C201113395AB2(L_34, ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_35, 3)), 1)), List_1_get_Item_mBCF1516ECF7285668A96B426CD6C201113395AB2_RuntimeMethod_var);
		NullCheck(L_36);
		int32_t L_37 = 0;
		double L_38 = (L_36)->GetAt(static_cast<il2cpp_array_size_t>(L_37));
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_39 = V_2;
		List_1_t64FC2174A52DBC518FB499976FF0BA043E643411* L_40 = __this->___pcaData_22;
		int32_t L_41 = __this->___predAnthNum_29;
		int32_t L_42 = V_4;
		NullCheck(L_40);
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_43;
		L_43 = List_1_get_Item_mBCF1516ECF7285668A96B426CD6C201113395AB2(L_40, ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_41, ((int32_t)il2cpp_codegen_multiply(L_42, 3)))), 1)), List_1_get_Item_mBCF1516ECF7285668A96B426CD6C201113395AB2_RuntimeMethod_var);
		float L_44;
		L_44 = SeatedAdultSliderAdjust_calcCoords_m0DDD3650DC25004D581299790B37A44F409DD1D7(__this, L_39, L_43, NULL);
		V_6 = ((double)il2cpp_codegen_add(L_38, ((double)L_44)));
		// var zcoord = landmarkData[i * 3 + 2][0] + calcCoords(Anths, pcaData[predAnthNum + i * 3 + 2]);
		List_1_t64FC2174A52DBC518FB499976FF0BA043E643411* L_45 = __this->___landmarkData_23;
		int32_t L_46 = V_4;
		NullCheck(L_45);
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_47;
		L_47 = List_1_get_Item_mBCF1516ECF7285668A96B426CD6C201113395AB2(L_45, ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_46, 3)), 2)), List_1_get_Item_mBCF1516ECF7285668A96B426CD6C201113395AB2_RuntimeMethod_var);
		NullCheck(L_47);
		int32_t L_48 = 0;
		double L_49 = (L_47)->GetAt(static_cast<il2cpp_array_size_t>(L_48));
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_50 = V_2;
		List_1_t64FC2174A52DBC518FB499976FF0BA043E643411* L_51 = __this->___pcaData_22;
		int32_t L_52 = __this->___predAnthNum_29;
		int32_t L_53 = V_4;
		NullCheck(L_51);
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_54;
		L_54 = List_1_get_Item_mBCF1516ECF7285668A96B426CD6C201113395AB2(L_51, ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_52, ((int32_t)il2cpp_codegen_multiply(L_53, 3)))), 2)), List_1_get_Item_mBCF1516ECF7285668A96B426CD6C201113395AB2_RuntimeMethod_var);
		float L_55;
		L_55 = SeatedAdultSliderAdjust_calcCoords_m0DDD3650DC25004D581299790B37A44F409DD1D7(__this, L_50, L_54, NULL);
		V_7 = ((double)il2cpp_codegen_add(L_49, ((double)L_55)));
		// GameObject sphere = GameObject.CreatePrimitive(PrimitiveType.Sphere);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_56;
		L_56 = GameObject_CreatePrimitive_m13C0A691E679A83DD595913200A1DD9A906EB47B(0, NULL);
		// sphere.transform.position = new Vector3((float)xcoord, (float)ycoord, (float)zcoord);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_57 = L_56;
		NullCheck(L_57);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_58;
		L_58 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_57, NULL);
		double L_59 = V_5;
		double L_60 = V_6;
		double L_61 = V_7;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_62;
		memset((&L_62), 0, sizeof(L_62));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_62), ((float)L_59), ((float)L_60), ((float)L_61), /*hidden argument*/NULL);
		NullCheck(L_58);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_58, L_62, NULL);
		// sphere.GetComponent<Renderer>().material.color = Color.green;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_63 = L_57;
		NullCheck(L_63);
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_64;
		L_64 = GameObject_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_m026EB44DB6238F13E2AFBECF1FBBE924CB1B040A(L_63, GameObject_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_m026EB44DB6238F13E2AFBECF1FBBE924CB1B040A_RuntimeMethod_var);
		NullCheck(L_64);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_65;
		L_65 = Renderer_get_material_m5BA2A00816C4CC66580D4B2E409CF10718C15656(L_64, NULL);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_66;
		L_66 = Color_get_green_mEB001F2CD8C68C6BBAEF9101990B779D3AA2A6EF_inline(NULL);
		NullCheck(L_65);
		Material_set_color_m5C32DEBB215FF9EE35E7B575297D8C2F29CC2A2D(L_65, L_66, NULL);
		// sphere.GetComponent<MeshRenderer>().shadowCastingMode = UnityEngine.Rendering.ShadowCastingMode.Off;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_67 = L_63;
		NullCheck(L_67);
		MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* L_68;
		L_68 = GameObject_GetComponent_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_m7FF948365C38BC39333D82B235A7C4EAD219960D(L_67, GameObject_GetComponent_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_m7FF948365C38BC39333D82B235A7C4EAD219960D_RuntimeMethod_var);
		NullCheck(L_68);
		Renderer_set_shadowCastingMode_mB0CD3D153E43044388AEFF7AEFDA93E80EB36D11(L_68, 0, NULL);
		// sphere.transform.localScale += new Vector3(20, 20, 20);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_69 = L_67;
		NullCheck(L_69);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_70;
		L_70 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_69, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_71 = L_70;
		NullCheck(L_71);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_72;
		L_72 = Transform_get_localScale_m804A002A53A645CDFCD15BB0F37209162720363F(L_71, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_73;
		memset((&L_73), 0, sizeof(L_73));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_73), (20.0f), (20.0f), (20.0f), /*hidden argument*/NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_74;
		L_74 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_72, L_73, NULL);
		NullCheck(L_71);
		Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633(L_71, L_74, NULL);
		// sphere.transform.parent = landmarks.transform;
		NullCheck(L_69);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_75;
		L_75 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_69, NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_76 = V_3;
		NullCheck(L_76);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_77;
		L_77 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_76, NULL);
		NullCheck(L_75);
		Transform_set_parent_m9BD5E563B539DD5BEC342736B03F97B38A243234(L_75, L_77, NULL);
		// for (int i = 0; i < predLandmarkNum; i++)
		int32_t L_78 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_78, 1));
	}

IL_01cc:
	{
		// for (int i = 0; i < predLandmarkNum; i++)
		int32_t L_79 = V_4;
		int32_t L_80 = __this->___predLandmarkNum_30;
		if ((((int32_t)L_79) < ((int32_t)L_80)))
		{
			goto IL_00ae;
		}
	}
	{
		// landmarks.transform.position = model.transform.position;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_81 = V_3;
		NullCheck(L_81);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_82;
		L_82 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_81, NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_83 = __this->___model_4;
		NullCheck(L_83);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_84;
		L_84 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_83, NULL);
		NullCheck(L_84);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_85;
		L_85 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_84, NULL);
		NullCheck(L_82);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_82, L_85, NULL);
		// landmarks.transform.localScale = new Vector3((float)0.001, (float)0.001, (float)0.001);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_86 = V_3;
		NullCheck(L_86);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_87;
		L_87 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_86, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_88;
		memset((&L_88), 0, sizeof(L_88));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_88), (0.00100000005f), (0.00100000005f), (0.00100000005f), /*hidden argument*/NULL);
		NullCheck(L_87);
		Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633(L_87, L_88, NULL);
		// landmarks.transform.parent = model.transform;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_89 = V_3;
		NullCheck(L_89);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_90;
		L_90 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_89, NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_91 = __this->___model_4;
		NullCheck(L_91);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_92;
		L_92 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_91, NULL);
		NullCheck(L_90);
		Transform_set_parent_m9BD5E563B539DD5BEC342736B03F97B38A243234(L_90, L_92, NULL);
		// landmarks.transform.localRotation = Quaternion.Euler(0, 0, -180);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_93 = V_3;
		NullCheck(L_93);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_94;
		L_94 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_93, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_95;
		L_95 = Quaternion_Euler_m9262AB29E3E9CE94EF71051F38A28E82AEC73F90_inline((0.0f), (0.0f), (-180.0f), NULL);
		NullCheck(L_94);
		Transform_set_localRotation_mAB4A011D134BA58AB780BECC0025CA65F16185FA(L_94, L_95, NULL);
		// }
		return;
	}
}
// System.Void SeatedAdultSliderAdjust::rotate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SeatedAdultSliderAdjust_rotate_m830543A53B88105F3EB911C63CA8DB55A1663C72 (SeatedAdultSliderAdjust_tD13DF139016030F050F1A488125C2796C6DA9842* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6E1CE004DBBF4E6D83804FAD4823454546E65F9D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF0A265B5C4EFB991FCC9024BE54A90F0BCF065C2);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		// model.transform.Rotate(new Vector3(0, 0, 1), sliderRotation.value);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___model_4;
		NullCheck(L_0);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_0, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		memset((&L_2), 0, sizeof(L_2));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_2), (0.0f), (0.0f), (1.0f), /*hidden argument*/NULL);
		Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* L_3 = __this->___sliderRotation_11;
		NullCheck(L_3);
		float L_4;
		L_4 = VirtualFuncInvoker0< float >::Invoke(46 /* System.Single UnityEngine.UI.Slider::get_value() */, L_3);
		NullCheck(L_1);
		Transform_Rotate_m35B44707FE16FF8015D519D8C162C0B4A85D6D1F(L_1, L_2, L_4, NULL);
		// lbRotation.text = "Rotation: " + Truncate(sliderRotation.value, 2).ToString() + " degrees";
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_5 = __this->___lbRotation_17;
		Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* L_6 = __this->___sliderRotation_11;
		NullCheck(L_6);
		float L_7;
		L_7 = VirtualFuncInvoker0< float >::Invoke(46 /* System.Single UnityEngine.UI.Slider::get_value() */, L_6);
		float L_8;
		L_8 = SeatedAdultSliderAdjust_Truncate_mBFE8DAE325A902DE2DBAA00A4186544E9241EBE5(L_7, 2, NULL);
		V_0 = L_8;
		String_t* L_9;
		L_9 = Single_ToString_mE282EDA9CA4F7DF88432D807732837A629D04972((&V_0), NULL);
		String_t* L_10;
		L_10 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(_stringLiteralF0A265B5C4EFB991FCC9024BE54A90F0BCF065C2, L_9, _stringLiteral6E1CE004DBBF4E6D83804FAD4823454546E65F9D, NULL);
		NullCheck(L_5);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_5, L_10);
		// }
		return;
	}
}
// System.Single SeatedAdultSliderAdjust::Truncate(System.Single,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float SeatedAdultSliderAdjust_Truncate_mBFE8DAE325A902DE2DBAA00A4186544E9241EBE5 (float ___value0, int32_t ___digits1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	double V_0 = 0.0;
	{
		// double mult = Math.Pow(10.0, digits);
		int32_t L_0 = ___digits1;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_1;
		L_1 = Math_Pow_mEAE651F0858203FBE12B72B6A53951BBD0FB5265((10.0), ((double)L_0), NULL);
		V_0 = L_1;
		// double result = Math.Truncate(mult * value) / mult;
		double L_2 = V_0;
		float L_3 = ___value0;
		double L_4;
		L_4 = Math_Truncate_mE66B1AD68C17D27675DE0CB74643374F9EDB649C(((double)il2cpp_codegen_multiply(L_2, ((double)L_3))), NULL);
		double L_5 = V_0;
		// return (float)result;
		return ((float)((double)(L_4/L_5)));
	}
}
// System.Void SeatedAdultSliderAdjust::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SeatedAdultSliderAdjust__ctor_mD70FEE845B60E37146004F7D5D34EE0DAA1229B6 (SeatedAdultSliderAdjust_tD13DF139016030F050F1A488125C2796C6DA9842* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_mA3C3860EDE2CDD08BBD68C389377BC89D029D968_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mF1433DDB1AE70FFD55B9A5791233ED33F24D45A9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t64FC2174A52DBC518FB499976FF0BA043E643411_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// List<double[]> pcaData = new List<double[]>();
		List_1_t64FC2174A52DBC518FB499976FF0BA043E643411* L_0 = (List_1_t64FC2174A52DBC518FB499976FF0BA043E643411*)il2cpp_codegen_object_new(List_1_t64FC2174A52DBC518FB499976FF0BA043E643411_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_mF1433DDB1AE70FFD55B9A5791233ED33F24D45A9(L_0, List_1__ctor_mF1433DDB1AE70FFD55B9A5791233ED33F24D45A9_RuntimeMethod_var);
		__this->___pcaData_22 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___pcaData_22), (void*)L_0);
		// List<double[]> landmarkData = new List<double[]>();
		List_1_t64FC2174A52DBC518FB499976FF0BA043E643411* L_1 = (List_1_t64FC2174A52DBC518FB499976FF0BA043E643411*)il2cpp_codegen_object_new(List_1_t64FC2174A52DBC518FB499976FF0BA043E643411_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		List_1__ctor_mF1433DDB1AE70FFD55B9A5791233ED33F24D45A9(L_1, List_1__ctor_mF1433DDB1AE70FFD55B9A5791233ED33F24D45A9_RuntimeMethod_var);
		__this->___landmarkData_23 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___landmarkData_23), (void*)L_1);
		// Dictionary<string, int> indexMap = new Dictionary<string, int>();
		Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588* L_2 = (Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588*)il2cpp_codegen_object_new(Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		Dictionary_2__ctor_mA3C3860EDE2CDD08BBD68C389377BC89D029D968(L_2, Dictionary_2__ctor_mA3C3860EDE2CDD08BBD68C389377BC89D029D968_RuntimeMethod_var);
		__this->___indexMap_24 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___indexMap_24), (void*)L_2);
		// int predAnthNum = 28;
		__this->___predAnthNum_29 = ((int32_t)28);
		// int predLandmarkNum = 119;
		__this->___predLandmarkNum_30 = ((int32_t)119);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// UnityEngine.Vector3[] ChildSliderAdjust::getCorrectVertices()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ChildSliderAdjust_getCorrectVertices_m138937BCE74BB021D43972DF5E950B09E1AC2566 (ChildSliderAdjust_tC0DEE6A2D001C242F02023FEB35AADEE22C4808D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral00B28FF06B788B9B67C6B259800F404F9F3761FD);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB);
		s_Il2CppMethodInitialized = true;
	}
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* V_0 = NULL;
	int32_t V_1 = 0;
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* V_2 = NULL;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_5;
	memset((&V_5), 0, sizeof(V_5));
	{
		// string[] data = correctVertexOrderDataAsset.text.Split(new String[] { ",", "\n" }, StringSplitOptions.None);
		TextAsset_t2C64E93DA366D9DE5A8209E1802FA4884AC1BD69* L_0 = __this->___correctVertexOrderDataAsset_7;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = TextAsset_get_text_m36846042E3CF3D9DD337BF3F8B2B1902D10C8FD9(L_0, NULL);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_2 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)2);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_3 = L_2;
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, _stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_4 = L_3;
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, _stringLiteral00B28FF06B788B9B67C6B259800F404F9F3761FD);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)_stringLiteral00B28FF06B788B9B67C6B259800F404F9F3761FD);
		NullCheck(L_1);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_5;
		L_5 = String_Split_m03F46561E2DF46D1E3AE749A77706EFC2F6488F4(L_1, L_4, 0, NULL);
		V_0 = L_5;
		// int numCols = 3;
		V_1 = 3;
		// int numRows = (data.Length - 1) / numCols;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_6 = V_0;
		NullCheck(L_6);
		int32_t L_7 = V_1;
		// Vector3[] correctOrderVertices = new Vector3[numRows];
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_8 = (Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C*)(Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C*)SZArrayNew(Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C_il2cpp_TypeInfo_var, (uint32_t)((int32_t)(((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_6)->max_length)), 1))/L_7)));
		V_2 = L_8;
		// for (int i = 0, k = 0; i < data.Length - 1; i += numCols, k++)
		V_3 = 0;
		// for (int i = 0, k = 0; i < data.Length - 1; i += numCols, k++)
		V_4 = 0;
		goto IL_008e;
	}

IL_003e:
	{
		// Vector3 curr = new Vector3();
		il2cpp_codegen_initobj((&V_5), sizeof(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2));
		// curr.x = (float)Convert.ToDouble(data[i]);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_9 = V_0;
		int32_t L_10 = V_3;
		NullCheck(L_9);
		int32_t L_11 = L_10;
		String_t* L_12 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		double L_13;
		L_13 = Convert_ToDouble_m933DFCA7F5B65845162738829A173E79D81ED4B3(L_12, NULL);
		(&V_5)->___x_2 = ((float)L_13);
		// curr.y = (float)Convert.ToDouble(data[i + 1]);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_14 = V_0;
		int32_t L_15 = V_3;
		NullCheck(L_14);
		int32_t L_16 = ((int32_t)il2cpp_codegen_add(L_15, 1));
		String_t* L_17 = (L_14)->GetAt(static_cast<il2cpp_array_size_t>(L_16));
		double L_18;
		L_18 = Convert_ToDouble_m933DFCA7F5B65845162738829A173E79D81ED4B3(L_17, NULL);
		(&V_5)->___y_3 = ((float)L_18);
		// curr.z = (float)Convert.ToDouble(data[i + 2]);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_19 = V_0;
		int32_t L_20 = V_3;
		NullCheck(L_19);
		int32_t L_21 = ((int32_t)il2cpp_codegen_add(L_20, 2));
		String_t* L_22 = (L_19)->GetAt(static_cast<il2cpp_array_size_t>(L_21));
		double L_23;
		L_23 = Convert_ToDouble_m933DFCA7F5B65845162738829A173E79D81ED4B3(L_22, NULL);
		(&V_5)->___z_4 = ((float)L_23);
		// correctOrderVertices[k] = curr;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_24 = V_2;
		int32_t L_25 = V_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_26 = V_5;
		NullCheck(L_24);
		(L_24)->SetAt(static_cast<il2cpp_array_size_t>(L_25), (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2)L_26);
		// for (int i = 0, k = 0; i < data.Length - 1; i += numCols, k++)
		int32_t L_27 = V_3;
		int32_t L_28 = V_1;
		V_3 = ((int32_t)il2cpp_codegen_add(L_27, L_28));
		// for (int i = 0, k = 0; i < data.Length - 1; i += numCols, k++)
		int32_t L_29 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_29, 1));
	}

IL_008e:
	{
		// for (int i = 0, k = 0; i < data.Length - 1; i += numCols, k++)
		int32_t L_30 = V_3;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_31 = V_0;
		NullCheck(L_31);
		if ((((int32_t)L_30) < ((int32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_31)->max_length)), 1)))))
		{
			goto IL_003e;
		}
	}
	{
		// return correctOrderVertices;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_32 = V_2;
		return L_32;
	}
}
// System.Void ChildSliderAdjust::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChildSliderAdjust_Start_m3C481BB4FA042C68C48E8CB4CBC2EF174A6D38E9 (ChildSliderAdjust_tC0DEE6A2D001C242F02023FEB35AADEE22C4808D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_set_Item_m038480C0EC13713DBD89A53BE69FF0359501B4C2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisMeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5_mDF6525BCE37B444313BE0AA2305BDF4EB8B92FE8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m5D83C79B12616961D8147BB59AD5E55683361E85_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mC19C5EEC6894CA8390C854EDC3428C93A0BD59F3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_ToArray_m91B6A76F83EF0F01FE14A5BAD9D99BDDFC9499F3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m4F495AFEC1141AA7E02729E3105CB569F2CEAD34_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t495F03F47D827883530F951D563C0BB7340E5995_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDB5B55A9B215F744DB82517864984D073F2E8F8C);
		s_Il2CppMethodInitialized = true;
	}
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* V_0 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* V_1 = NULL;
	int32_t V_2 = 0;
	String_t* V_3 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* V_4 = NULL;
	List_1_t495F03F47D827883530F951D563C0BB7340E5995* V_5 = NULL;
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	int32_t V_8 = 0;
	List_1_t495F03F47D827883530F951D563C0BB7340E5995* V_9 = NULL;
	{
		// var pcaDataStr = pcaDataAsset.text.Split(new char[] { '\n' });
		TextAsset_t2C64E93DA366D9DE5A8209E1802FA4884AC1BD69* L_0 = __this->___pcaDataAsset_5;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = TextAsset_get_text_m36846042E3CF3D9DD337BF3F8B2B1902D10C8FD9(L_0, NULL);
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_2 = (CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB*)(CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB*)SZArrayNew(CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB_il2cpp_TypeInfo_var, (uint32_t)1);
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_3 = L_2;
		NullCheck(L_3);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(0), (Il2CppChar)((int32_t)10));
		NullCheck(L_1);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_4;
		L_4 = String_Split_m101D35FEC86371D2BB4E3480F6F896880093B2E9(L_1, L_3, NULL);
		V_0 = L_4;
		// for (int ncnt = 0; ncnt < pcaDataStr.Length; ncnt++)
		V_2 = 0;
		goto IL_00b2;
	}

IL_0023:
	{
		// var aline = pcaDataStr[ncnt];
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_5 = V_0;
		int32_t L_6 = V_2;
		NullCheck(L_5);
		int32_t L_7 = L_6;
		String_t* L_8 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		V_3 = L_8;
		// string[] linedata = aline.Split(new char[] { ',' });
		String_t* L_9 = V_3;
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_10 = (CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB*)(CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB*)SZArrayNew(CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB_il2cpp_TypeInfo_var, (uint32_t)1);
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_11 = L_10;
		NullCheck(L_11);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(0), (Il2CppChar)((int32_t)44));
		NullCheck(L_9);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_12;
		L_12 = String_Split_m101D35FEC86371D2BB4E3480F6F896880093B2E9(L_9, L_11, NULL);
		V_4 = L_12;
		// if (aline == "") continue;
		String_t* L_13 = V_3;
		bool L_14;
		L_14 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_13, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, NULL);
		if (L_14)
		{
			goto IL_00ae;
		}
	}
	{
		// List<double> adata = new List<double>();
		List_1_t495F03F47D827883530F951D563C0BB7340E5995* L_15 = (List_1_t495F03F47D827883530F951D563C0BB7340E5995*)il2cpp_codegen_object_new(List_1_t495F03F47D827883530F951D563C0BB7340E5995_il2cpp_TypeInfo_var);
		NullCheck(L_15);
		List_1__ctor_m4F495AFEC1141AA7E02729E3105CB569F2CEAD34(L_15, List_1__ctor_m4F495AFEC1141AA7E02729E3105CB569F2CEAD34_RuntimeMethod_var);
		V_5 = L_15;
		// for (int i = 0; i < linedata.Length; i++)
		V_6 = 0;
		goto IL_0094;
	}

IL_0053:
	{
		// if (linedata[i].Contains("\r"))
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_16 = V_4;
		int32_t L_17 = V_6;
		NullCheck(L_16);
		int32_t L_18 = L_17;
		String_t* L_19 = (L_16)->GetAt(static_cast<il2cpp_array_size_t>(L_18));
		NullCheck(L_19);
		bool L_20;
		L_20 = String_Contains_m6D77B121FADA7CA5F397C0FABB65DA62DF03B6C3(L_19, _stringLiteralDB5B55A9B215F744DB82517864984D073F2E8F8C, NULL);
		if (!L_20)
		{
			goto IL_007d;
		}
	}
	{
		// linedata[i] = linedata[i].Replace("\r", string.Empty);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_21 = V_4;
		int32_t L_22 = V_6;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_23 = V_4;
		int32_t L_24 = V_6;
		NullCheck(L_23);
		int32_t L_25 = L_24;
		String_t* L_26 = (L_23)->GetAt(static_cast<il2cpp_array_size_t>(L_25));
		String_t* L_27 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		NullCheck(L_26);
		String_t* L_28;
		L_28 = String_Replace_mABDB7003A1D0AEDCAE9FF85E3DFFFBA752D2A166(L_26, _stringLiteralDB5B55A9B215F744DB82517864984D073F2E8F8C, L_27, NULL);
		NullCheck(L_21);
		ArrayElementTypeCheck (L_21, L_28);
		(L_21)->SetAt(static_cast<il2cpp_array_size_t>(L_22), (String_t*)L_28);
	}

IL_007d:
	{
		// adata.Add(Convert.ToDouble(linedata[i]));
		List_1_t495F03F47D827883530F951D563C0BB7340E5995* L_29 = V_5;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_30 = V_4;
		int32_t L_31 = V_6;
		NullCheck(L_30);
		int32_t L_32 = L_31;
		String_t* L_33 = (L_30)->GetAt(static_cast<il2cpp_array_size_t>(L_32));
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		double L_34;
		L_34 = Convert_ToDouble_m933DFCA7F5B65845162738829A173E79D81ED4B3(L_33, NULL);
		NullCheck(L_29);
		List_1_Add_m5D83C79B12616961D8147BB59AD5E55683361E85_inline(L_29, L_34, List_1_Add_m5D83C79B12616961D8147BB59AD5E55683361E85_RuntimeMethod_var);
		// for (int i = 0; i < linedata.Length; i++)
		int32_t L_35 = V_6;
		V_6 = ((int32_t)il2cpp_codegen_add(L_35, 1));
	}

IL_0094:
	{
		// for (int i = 0; i < linedata.Length; i++)
		int32_t L_36 = V_6;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_37 = V_4;
		NullCheck(L_37);
		if ((((int32_t)L_36) < ((int32_t)((int32_t)(((RuntimeArray*)L_37)->max_length)))))
		{
			goto IL_0053;
		}
	}
	{
		// pcaData.Add(adata.ToArray());
		List_1_t64FC2174A52DBC518FB499976FF0BA043E643411* L_38 = __this->___pcaData_19;
		List_1_t495F03F47D827883530F951D563C0BB7340E5995* L_39 = V_5;
		NullCheck(L_39);
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_40;
		L_40 = List_1_ToArray_m91B6A76F83EF0F01FE14A5BAD9D99BDDFC9499F3(L_39, List_1_ToArray_m91B6A76F83EF0F01FE14A5BAD9D99BDDFC9499F3_RuntimeMethod_var);
		NullCheck(L_38);
		List_1_Add_mC19C5EEC6894CA8390C854EDC3428C93A0BD59F3_inline(L_38, L_40, List_1_Add_mC19C5EEC6894CA8390C854EDC3428C93A0BD59F3_RuntimeMethod_var);
	}

IL_00ae:
	{
		// for (int ncnt = 0; ncnt < pcaDataStr.Length; ncnt++)
		int32_t L_41 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_41, 1));
	}

IL_00b2:
	{
		// for (int ncnt = 0; ncnt < pcaDataStr.Length; ncnt++)
		int32_t L_42 = V_2;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_43 = V_0;
		NullCheck(L_43);
		if ((((int32_t)L_42) < ((int32_t)((int32_t)(((RuntimeArray*)L_43)->max_length)))))
		{
			goto IL_0023;
		}
	}
	{
		// mesh = model.GetComponent<MeshFilter>().mesh;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_44 = __this->___model_4;
		NullCheck(L_44);
		MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5* L_45;
		L_45 = GameObject_GetComponent_TisMeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5_mDF6525BCE37B444313BE0AA2305BDF4EB8B92FE8(L_44, GameObject_GetComponent_TisMeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5_mDF6525BCE37B444313BE0AA2305BDF4EB8B92FE8_RuntimeMethod_var);
		NullCheck(L_45);
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_46;
		L_46 = MeshFilter_get_mesh_m13172D7EF6682861971817D0A47EE2BE49FBCB1C(L_45, NULL);
		__this->___mesh_22 = L_46;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___mesh_22), (void*)L_46);
		// mesh.MarkDynamic();
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_47 = __this->___mesh_22;
		NullCheck(L_47);
		Mesh_MarkDynamic_m718089940F240AFE625D6DC9DA4E6F20229CC322(L_47, NULL);
		// vertices = mesh.vertices;
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_48 = __this->___mesh_22;
		NullCheck(L_48);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_49;
		L_49 = Mesh_get_vertices_mA3577F1B08EDDD54E26AEB3F8FFE4EC247D2ABB9(L_48, NULL);
		__this->___vertices_23 = L_49;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___vertices_23), (void*)L_49);
		// correctVertices = getCorrectVertices();
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_50;
		L_50 = ChildSliderAdjust_getCorrectVertices_m138937BCE74BB021D43972DF5E950B09E1AC2566(__this, NULL);
		__this->___correctVertices_24 = L_50;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___correctVertices_24), (void*)L_50);
		// for (int i = 0; i < vertices.Length; i++)
		V_7 = 0;
		goto IL_017a;
	}

IL_00fe:
	{
		// indexMap[vertices[i].x.ToString() + " " + vertices[i].y.ToString() + " " + vertices[i].z.ToString()] = i;
		Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588* L_51 = __this->___indexMap_21;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_52 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)5);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_53 = L_52;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_54 = __this->___vertices_23;
		int32_t L_55 = V_7;
		NullCheck(L_54);
		float* L_56 = (&((L_54)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_55)))->___x_2);
		String_t* L_57;
		L_57 = Single_ToString_mE282EDA9CA4F7DF88432D807732837A629D04972(L_56, NULL);
		NullCheck(L_53);
		ArrayElementTypeCheck (L_53, L_57);
		(L_53)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)L_57);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_58 = L_53;
		NullCheck(L_58);
		ArrayElementTypeCheck (L_58, _stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745);
		(L_58)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)_stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_59 = L_58;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_60 = __this->___vertices_23;
		int32_t L_61 = V_7;
		NullCheck(L_60);
		float* L_62 = (&((L_60)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_61)))->___y_3);
		String_t* L_63;
		L_63 = Single_ToString_mE282EDA9CA4F7DF88432D807732837A629D04972(L_62, NULL);
		NullCheck(L_59);
		ArrayElementTypeCheck (L_59, L_63);
		(L_59)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)L_63);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_64 = L_59;
		NullCheck(L_64);
		ArrayElementTypeCheck (L_64, _stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745);
		(L_64)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)_stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_65 = L_64;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_66 = __this->___vertices_23;
		int32_t L_67 = V_7;
		NullCheck(L_66);
		float* L_68 = (&((L_66)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_67)))->___z_4);
		String_t* L_69;
		L_69 = Single_ToString_mE282EDA9CA4F7DF88432D807732837A629D04972(L_68, NULL);
		NullCheck(L_65);
		ArrayElementTypeCheck (L_65, L_69);
		(L_65)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)L_69);
		String_t* L_70;
		L_70 = String_Concat_m647EBF831F54B6DF7D5AFA5FD012CF4EE7571B6A(L_65, NULL);
		int32_t L_71 = V_7;
		NullCheck(L_51);
		Dictionary_2_set_Item_m038480C0EC13713DBD89A53BE69FF0359501B4C2(L_51, L_70, L_71, Dictionary_2_set_Item_m038480C0EC13713DBD89A53BE69FF0359501B4C2_RuntimeMethod_var);
		// for (int i = 0; i < vertices.Length; i++)
		int32_t L_72 = V_7;
		V_7 = ((int32_t)il2cpp_codegen_add(L_72, 1));
	}

IL_017a:
	{
		// for (int i = 0; i < vertices.Length; i++)
		int32_t L_73 = V_7;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_74 = __this->___vertices_23;
		NullCheck(L_74);
		if ((((int32_t)L_73) < ((int32_t)((int32_t)(((RuntimeArray*)L_74)->max_length)))))
		{
			goto IL_00fe;
		}
	}
	{
		// var landmarkStr = meanLandmarkDataAsset.text.Split(new char[] { '\n' });
		TextAsset_t2C64E93DA366D9DE5A8209E1802FA4884AC1BD69* L_75 = __this->___meanLandmarkDataAsset_6;
		NullCheck(L_75);
		String_t* L_76;
		L_76 = TextAsset_get_text_m36846042E3CF3D9DD337BF3F8B2B1902D10C8FD9(L_75, NULL);
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_77 = (CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB*)(CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB*)SZArrayNew(CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB_il2cpp_TypeInfo_var, (uint32_t)1);
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_78 = L_77;
		NullCheck(L_78);
		(L_78)->SetAt(static_cast<il2cpp_array_size_t>(0), (Il2CppChar)((int32_t)10));
		NullCheck(L_76);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_79;
		L_79 = String_Split_m101D35FEC86371D2BB4E3480F6F896880093B2E9(L_76, L_78, NULL);
		V_1 = L_79;
		// for (int ncnt = 0; ncnt < predLandmarkNum * 3; ncnt++)
		V_8 = 0;
		goto IL_01d9;
	}

IL_01aa:
	{
		// List<double> adata = new List<double>();
		List_1_t495F03F47D827883530F951D563C0BB7340E5995* L_80 = (List_1_t495F03F47D827883530F951D563C0BB7340E5995*)il2cpp_codegen_object_new(List_1_t495F03F47D827883530F951D563C0BB7340E5995_il2cpp_TypeInfo_var);
		NullCheck(L_80);
		List_1__ctor_m4F495AFEC1141AA7E02729E3105CB569F2CEAD34(L_80, List_1__ctor_m4F495AFEC1141AA7E02729E3105CB569F2CEAD34_RuntimeMethod_var);
		V_9 = L_80;
		// adata.Add(Convert.ToDouble(landmarkStr[ncnt]));
		List_1_t495F03F47D827883530F951D563C0BB7340E5995* L_81 = V_9;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_82 = V_1;
		int32_t L_83 = V_8;
		NullCheck(L_82);
		int32_t L_84 = L_83;
		String_t* L_85 = (L_82)->GetAt(static_cast<il2cpp_array_size_t>(L_84));
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		double L_86;
		L_86 = Convert_ToDouble_m933DFCA7F5B65845162738829A173E79D81ED4B3(L_85, NULL);
		NullCheck(L_81);
		List_1_Add_m5D83C79B12616961D8147BB59AD5E55683361E85_inline(L_81, L_86, List_1_Add_m5D83C79B12616961D8147BB59AD5E55683361E85_RuntimeMethod_var);
		// landmarkData.Add(adata.ToArray());
		List_1_t64FC2174A52DBC518FB499976FF0BA043E643411* L_87 = __this->___landmarkData_20;
		List_1_t495F03F47D827883530F951D563C0BB7340E5995* L_88 = V_9;
		NullCheck(L_88);
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_89;
		L_89 = List_1_ToArray_m91B6A76F83EF0F01FE14A5BAD9D99BDDFC9499F3(L_88, List_1_ToArray_m91B6A76F83EF0F01FE14A5BAD9D99BDDFC9499F3_RuntimeMethod_var);
		NullCheck(L_87);
		List_1_Add_mC19C5EEC6894CA8390C854EDC3428C93A0BD59F3_inline(L_87, L_89, List_1_Add_mC19C5EEC6894CA8390C854EDC3428C93A0BD59F3_RuntimeMethod_var);
		// for (int ncnt = 0; ncnt < predLandmarkNum * 3; ncnt++)
		int32_t L_90 = V_8;
		V_8 = ((int32_t)il2cpp_codegen_add(L_90, 1));
	}

IL_01d9:
	{
		// for (int ncnt = 0; ncnt < predLandmarkNum * 3; ncnt++)
		int32_t L_91 = V_8;
		int32_t L_92 = __this->___predLandmarkNum_27;
		if ((((int32_t)L_91) < ((int32_t)((int32_t)il2cpp_codegen_multiply(L_92, 3)))))
		{
			goto IL_01aa;
		}
	}
	{
		// meanVertices = correctVertices;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_93 = __this->___correctVertices_24;
		__this->___meanVertices_25 = L_93;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___meanVertices_25), (void*)L_93);
		// }
		return;
	}
}
// System.Void ChildSliderAdjust::ModelAnthroUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChildSliderAdjust_ModelAnthroUpdate_m7B5B8647A62A2D7421F5B561859963F5CBA1F5C3 (ChildSliderAdjust_tC0DEE6A2D001C242F02023FEB35AADEE22C4808D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_mE01750B88D9A581E9196F3444952F7592E862592_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mBCF1516ECF7285668A96B426CD6C201113395AB2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0487849E743EE7A8A4466475F43E21864F0F1F48);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8A0FEFCF616268A7D2AEEE23BA07B44ADB72452E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral931018A69BAE325939AFC4A7E983ED54CB0E60AC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB281D5412E3C8F31FEC213B8C136C5EFC40702AB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEF9AA825E2BF1AA80FEE50E865D31D82FAE268D4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF511102AF85AA2E3EFF8375103C2269E3633C128);
		s_Il2CppMethodInitialized = true;
	}
	double V_0 = 0.0;
	DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	float V_5 = 0.0f;
	float V_6 = 0.0f;
	float V_7 = 0.0f;
	float V_8 = 0.0f;
	{
		// double sexVal = 1; // by default it is male
		V_0 = (1.0);
		// if (sex.value == 1)
		TMP_Dropdown_t73B37BFDA0D005451C7B750938AFB1748E5EA504* L_0 = __this->___sex_17;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = TMP_Dropdown_get_value_m5916A6D1897431E8ED789FEC24551A311D1B5C70_inline(L_0, NULL);
		if ((!(((uint32_t)L_1) == ((uint32_t)1))))
		{
			goto IL_0022;
		}
	}
	{
		// sexVal = -1;
		V_0 = (-1.0);
	}

IL_0022:
	{
		// var Anths = new double[] {
		//      sexVal,
		//      sliderStature.value,
		//      sliderBMI.value,
		//      sliderSittingHeightStat.value,
		//      1.0
		// };
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_2 = (DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE*)(DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE*)SZArrayNew(DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE_il2cpp_TypeInfo_var, (uint32_t)5);
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_3 = L_2;
		double L_4 = V_0;
		NullCheck(L_3);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(0), (double)L_4);
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_5 = L_3;
		Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* L_6 = __this->___sliderStature_9;
		NullCheck(L_6);
		float L_7;
		L_7 = VirtualFuncInvoker0< float >::Invoke(46 /* System.Single UnityEngine.UI.Slider::get_value() */, L_6);
		NullCheck(L_5);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(1), (double)((double)L_7));
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_8 = L_5;
		Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* L_9 = __this->___sliderBMI_8;
		NullCheck(L_9);
		float L_10;
		L_10 = VirtualFuncInvoker0< float >::Invoke(46 /* System.Single UnityEngine.UI.Slider::get_value() */, L_9);
		NullCheck(L_8);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(2), (double)((double)L_10));
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_11 = L_8;
		Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* L_12 = __this->___sliderSittingHeightStat_10;
		NullCheck(L_12);
		float L_13;
		L_13 = VirtualFuncInvoker0< float >::Invoke(46 /* System.Single UnityEngine.UI.Slider::get_value() */, L_12);
		NullCheck(L_11);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(3), (double)((double)L_13));
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_14 = L_11;
		NullCheck(L_14);
		(L_14)->SetAt(static_cast<il2cpp_array_size_t>(4), (double)(1.0));
		V_1 = L_14;
		// var skipNum = predAnthNum + predLandmarkNum * 3;
		int32_t L_15 = __this->___predAnthNum_26;
		int32_t L_16 = __this->___predLandmarkNum_27;
		V_2 = ((int32_t)il2cpp_codegen_add(L_15, ((int32_t)il2cpp_codegen_multiply(L_16, 3))));
		// for (int i = 0; i < correctVertices.Length; i++)
		V_3 = 0;
		goto IL_01b5;
	}

IL_007d:
	{
		// int idx = indexMap[correctVertices[i].x.ToString() + " " +
		//                    correctVertices[i].y.ToString() + " " +
		//                    correctVertices[i].z.ToString()];
		Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588* L_17 = __this->___indexMap_21;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_18 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)5);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_19 = L_18;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_20 = __this->___correctVertices_24;
		int32_t L_21 = V_3;
		NullCheck(L_20);
		float* L_22 = (&((L_20)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_21)))->___x_2);
		String_t* L_23;
		L_23 = Single_ToString_mE282EDA9CA4F7DF88432D807732837A629D04972(L_22, NULL);
		NullCheck(L_19);
		ArrayElementTypeCheck (L_19, L_23);
		(L_19)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)L_23);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_24 = L_19;
		NullCheck(L_24);
		ArrayElementTypeCheck (L_24, _stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745);
		(L_24)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)_stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_25 = L_24;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_26 = __this->___correctVertices_24;
		int32_t L_27 = V_3;
		NullCheck(L_26);
		float* L_28 = (&((L_26)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_27)))->___y_3);
		String_t* L_29;
		L_29 = Single_ToString_mE282EDA9CA4F7DF88432D807732837A629D04972(L_28, NULL);
		NullCheck(L_25);
		ArrayElementTypeCheck (L_25, L_29);
		(L_25)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)L_29);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_30 = L_25;
		NullCheck(L_30);
		ArrayElementTypeCheck (L_30, _stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745);
		(L_30)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)_stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_31 = L_30;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_32 = __this->___correctVertices_24;
		int32_t L_33 = V_3;
		NullCheck(L_32);
		float* L_34 = (&((L_32)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_33)))->___z_4);
		String_t* L_35;
		L_35 = Single_ToString_mE282EDA9CA4F7DF88432D807732837A629D04972(L_34, NULL);
		NullCheck(L_31);
		ArrayElementTypeCheck (L_31, L_35);
		(L_31)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)L_35);
		String_t* L_36;
		L_36 = String_Concat_m647EBF831F54B6DF7D5AFA5FD012CF4EE7571B6A(L_31, NULL);
		NullCheck(L_17);
		int32_t L_37;
		L_37 = Dictionary_2_get_Item_mE01750B88D9A581E9196F3444952F7592E862592(L_17, L_36, Dictionary_2_get_Item_mE01750B88D9A581E9196F3444952F7592E862592_RuntimeMethod_var);
		V_4 = L_37;
		// var diffx = calcCoords(Anths, pcaData[skipNum + i * 3 + 0]);
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_38 = V_1;
		List_1_t64FC2174A52DBC518FB499976FF0BA043E643411* L_39 = __this->___pcaData_19;
		int32_t L_40 = V_2;
		int32_t L_41 = V_3;
		NullCheck(L_39);
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_42;
		L_42 = List_1_get_Item_mBCF1516ECF7285668A96B426CD6C201113395AB2(L_39, ((int32_t)il2cpp_codegen_add(L_40, ((int32_t)il2cpp_codegen_multiply(L_41, 3)))), List_1_get_Item_mBCF1516ECF7285668A96B426CD6C201113395AB2_RuntimeMethod_var);
		float L_43;
		L_43 = ChildSliderAdjust_calcCoords_mF3985CE54E0C4B8E6CA47ED40BF93C78FF078BB5(__this, L_38, L_42, NULL);
		V_5 = L_43;
		// var diffy = calcCoords(Anths, pcaData[skipNum + i * 3 + 1]);
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_44 = V_1;
		List_1_t64FC2174A52DBC518FB499976FF0BA043E643411* L_45 = __this->___pcaData_19;
		int32_t L_46 = V_2;
		int32_t L_47 = V_3;
		NullCheck(L_45);
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_48;
		L_48 = List_1_get_Item_mBCF1516ECF7285668A96B426CD6C201113395AB2(L_45, ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_46, ((int32_t)il2cpp_codegen_multiply(L_47, 3)))), 1)), List_1_get_Item_mBCF1516ECF7285668A96B426CD6C201113395AB2_RuntimeMethod_var);
		float L_49;
		L_49 = ChildSliderAdjust_calcCoords_mF3985CE54E0C4B8E6CA47ED40BF93C78FF078BB5(__this, L_44, L_48, NULL);
		V_6 = L_49;
		// var diffz = calcCoords(Anths, pcaData[skipNum + i * 3 + 2]);
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_50 = V_1;
		List_1_t64FC2174A52DBC518FB499976FF0BA043E643411* L_51 = __this->___pcaData_19;
		int32_t L_52 = V_2;
		int32_t L_53 = V_3;
		NullCheck(L_51);
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_54;
		L_54 = List_1_get_Item_mBCF1516ECF7285668A96B426CD6C201113395AB2(L_51, ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_52, ((int32_t)il2cpp_codegen_multiply(L_53, 3)))), 2)), List_1_get_Item_mBCF1516ECF7285668A96B426CD6C201113395AB2_RuntimeMethod_var);
		float L_55;
		L_55 = ChildSliderAdjust_calcCoords_mF3985CE54E0C4B8E6CA47ED40BF93C78FF078BB5(__this, L_50, L_54, NULL);
		V_7 = L_55;
		// vertices[idx].x = meanVertices[i].x - diffx;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_56 = __this->___vertices_23;
		int32_t L_57 = V_4;
		NullCheck(L_56);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_58 = __this->___meanVertices_25;
		int32_t L_59 = V_3;
		NullCheck(L_58);
		float L_60 = ((L_58)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_59)))->___x_2;
		float L_61 = V_5;
		((L_56)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_57)))->___x_2 = ((float)il2cpp_codegen_subtract(L_60, L_61));
		// vertices[idx].y = meanVertices[i].y + diffy;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_62 = __this->___vertices_23;
		int32_t L_63 = V_4;
		NullCheck(L_62);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_64 = __this->___meanVertices_25;
		int32_t L_65 = V_3;
		NullCheck(L_64);
		float L_66 = ((L_64)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_65)))->___y_3;
		float L_67 = V_6;
		((L_62)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_63)))->___y_3 = ((float)il2cpp_codegen_add(L_66, L_67));
		// vertices[idx].z = meanVertices[i].z + diffz;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_68 = __this->___vertices_23;
		int32_t L_69 = V_4;
		NullCheck(L_68);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_70 = __this->___meanVertices_25;
		int32_t L_71 = V_3;
		NullCheck(L_70);
		float L_72 = ((L_70)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_71)))->___z_4;
		float L_73 = V_7;
		((L_68)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_69)))->___z_4 = ((float)il2cpp_codegen_add(L_72, L_73));
		// for (int i = 0; i < correctVertices.Length; i++)
		int32_t L_74 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_74, 1));
	}

IL_01b5:
	{
		// for (int i = 0; i < correctVertices.Length; i++)
		int32_t L_75 = V_3;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_76 = __this->___correctVertices_24;
		NullCheck(L_76);
		if ((((int32_t)L_75) < ((int32_t)((int32_t)(((RuntimeArray*)L_76)->max_length)))))
		{
			goto IL_007d;
		}
	}
	{
		// mesh.vertices = vertices;
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_77 = __this->___mesh_22;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_78 = __this->___vertices_23;
		NullCheck(L_77);
		Mesh_set_vertices_m5BB814D89E9ACA00DBF19F7D8E22CB73AC73FE5C(L_77, L_78, NULL);
		// mesh.RecalculateBounds();
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_79 = __this->___mesh_22;
		NullCheck(L_79);
		Mesh_RecalculateBounds_mA9B293F57C6CD298AE2D2DB19061FC23B05AB90B(L_79, NULL);
		// mesh.RecalculateNormals();
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_80 = __this->___mesh_22;
		NullCheck(L_80);
		Mesh_RecalculateNormals_m3AA2788914611444E030CA310E03E3CFE683902B(L_80, NULL);
		// if(areLandmarksDisplayed)
		bool L_81 = __this->___areLandmarksDisplayed_18;
		if (!L_81)
		{
			goto IL_0217;
		}
	}
	{
		// model.transform.DetachChildren();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_82 = __this->___model_4;
		NullCheck(L_82);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_83;
		L_83 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_82, NULL);
		NullCheck(L_83);
		Transform_DetachChildren_m7E4B3405F2F053B059E76EC1DF0F235EED335D69(L_83, NULL);
		// GameObject.Destroy(GameObject.Find("landmarks"));
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_84;
		L_84 = GameObject_Find_m7A669B4EEC2617AB82F6E3FF007CDCD9F21DB300(_stringLiteral931018A69BAE325939AFC4A7E983ED54CB0E60AC, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB(L_84, NULL);
		// CreateLandmarks();
		ChildSliderAdjust_CreateLandmarks_m96F451AE1E41AE60961C8EFA2777725475E782DB(__this, NULL);
	}

IL_0217:
	{
		// lbStature.text = "Stature: " + sliderStature.value.ToString() + " mm";
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_85 = __this->___lbStature_13;
		Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* L_86 = __this->___sliderStature_9;
		NullCheck(L_86);
		float L_87;
		L_87 = VirtualFuncInvoker0< float >::Invoke(46 /* System.Single UnityEngine.UI.Slider::get_value() */, L_86);
		V_8 = L_87;
		String_t* L_88;
		L_88 = Single_ToString_mE282EDA9CA4F7DF88432D807732837A629D04972((&V_8), NULL);
		String_t* L_89;
		L_89 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(_stringLiteralB281D5412E3C8F31FEC213B8C136C5EFC40702AB, L_88, _stringLiteralF511102AF85AA2E3EFF8375103C2269E3633C128, NULL);
		NullCheck(L_85);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_85, L_89);
		// lbBMI.text = "BMI: " + sliderBMI.value.ToString() + " kg/m^2";
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_90 = __this->___lbBMI_12;
		Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* L_91 = __this->___sliderBMI_8;
		NullCheck(L_91);
		float L_92;
		L_92 = VirtualFuncInvoker0< float >::Invoke(46 /* System.Single UnityEngine.UI.Slider::get_value() */, L_91);
		V_8 = L_92;
		String_t* L_93;
		L_93 = Single_ToString_mE282EDA9CA4F7DF88432D807732837A629D04972((&V_8), NULL);
		String_t* L_94;
		L_94 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(_stringLiteral8A0FEFCF616268A7D2AEEE23BA07B44ADB72452E, L_93, _stringLiteral0487849E743EE7A8A4466475F43E21864F0F1F48, NULL);
		NullCheck(L_90);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_90, L_94);
		// lbSittingHeightStat.text = "Sitting Height / Stature: " + Truncate((float)sliderSittingHeightStat.value, 6).ToString();
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_95 = __this->___lbSittingHeightStat_14;
		Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* L_96 = __this->___sliderSittingHeightStat_10;
		NullCheck(L_96);
		float L_97;
		L_97 = VirtualFuncInvoker0< float >::Invoke(46 /* System.Single UnityEngine.UI.Slider::get_value() */, L_96);
		float L_98;
		L_98 = ChildSliderAdjust_Truncate_mC108531237E8525B1152AB7C8BBFEDD47311A88A(((float)L_97), 6, NULL);
		V_8 = L_98;
		String_t* L_99;
		L_99 = Single_ToString_mE282EDA9CA4F7DF88432D807732837A629D04972((&V_8), NULL);
		String_t* L_100;
		L_100 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteralEF9AA825E2BF1AA80FEE50E865D31D82FAE268D4, L_99, NULL);
		NullCheck(L_95);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_95, L_100);
		// }
		return;
	}
}
// System.Single ChildSliderAdjust::calcCoords(System.Double[],System.Double[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float ChildSliderAdjust_calcCoords_mF3985CE54E0C4B8E6CA47ED40BF93C78FF078BB5 (ChildSliderAdjust_tC0DEE6A2D001C242F02023FEB35AADEE22C4808D* __this, DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* ___diffAnths0, DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* ___onePCAdata1, const RuntimeMethod* method) 
{
	double V_0 = 0.0;
	int32_t V_1 = 0;
	{
		// {   var diffCoords = 0.0;
		V_0 = (0.0);
		// for (int k = 0; k < diffAnths.Length; k++)
		V_1 = 0;
		goto IL_001c;
	}

IL_000e:
	{
		// diffCoords += onePCAdata[k] * diffAnths[k];
		double L_0 = V_0;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_1 = ___onePCAdata1;
		int32_t L_2 = V_1;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		double L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_5 = ___diffAnths0;
		int32_t L_6 = V_1;
		NullCheck(L_5);
		int32_t L_7 = L_6;
		double L_8 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		V_0 = ((double)il2cpp_codegen_add(L_0, ((double)il2cpp_codegen_multiply(L_4, L_8))));
		// for (int k = 0; k < diffAnths.Length; k++)
		int32_t L_9 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_9, 1));
	}

IL_001c:
	{
		// for (int k = 0; k < diffAnths.Length; k++)
		int32_t L_10 = V_1;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_11 = ___diffAnths0;
		NullCheck(L_11);
		if ((((int32_t)L_10) < ((int32_t)((int32_t)(((RuntimeArray*)L_11)->max_length)))))
		{
			goto IL_000e;
		}
	}
	{
		// return ((float)diffCoords);
		double L_12 = V_0;
		return ((float)L_12);
	}
}
// System.Void ChildSliderAdjust::ShowLandmarks()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChildSliderAdjust_ShowLandmarks_mCFBE475A91F22D7AB51DBB780575BEB20C24C9CF (ChildSliderAdjust_tC0DEE6A2D001C242F02023FEB35AADEE22C4808D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5B2D0D1839F6E563813543D768A5FB707647FBCE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral72B6B2AFB007B7EFF933E2421DF01F832D40625B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral931018A69BAE325939AFC4A7E983ED54CB0E60AC);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!areLandmarksDisplayed)
		bool L_0 = __this->___areLandmarksDisplayed_18;
		if (L_0)
		{
			goto IL_0026;
		}
	}
	{
		// areLandmarksDisplayed = true;
		__this->___areLandmarksDisplayed_18 = (bool)1;
		// landmarkButtonText.text = "Hide Landmarks";
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_1 = __this->___landmarkButtonText_16;
		NullCheck(L_1);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_1, _stringLiteral5B2D0D1839F6E563813543D768A5FB707647FBCE);
		// CreateLandmarks();
		ChildSliderAdjust_CreateLandmarks_m96F451AE1E41AE60961C8EFA2777725475E782DB(__this, NULL);
		return;
	}

IL_0026:
	{
		// areLandmarksDisplayed = false;
		__this->___areLandmarksDisplayed_18 = (bool)0;
		// landmarkButtonText.text = "Show Landmarks";
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_2 = __this->___landmarkButtonText_16;
		NullCheck(L_2);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_2, _stringLiteral72B6B2AFB007B7EFF933E2421DF01F832D40625B);
		// model.transform.DetachChildren();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3 = __this->___model_4;
		NullCheck(L_3);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4;
		L_4 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_3, NULL);
		NullCheck(L_4);
		Transform_DetachChildren_m7E4B3405F2F053B059E76EC1DF0F235EED335D69(L_4, NULL);
		// GameObject.Destroy(GameObject.Find("landmarks"));
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5;
		L_5 = GameObject_Find_m7A669B4EEC2617AB82F6E3FF007CDCD9F21DB300(_stringLiteral931018A69BAE325939AFC4A7E983ED54CB0E60AC, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB(L_5, NULL);
		// }
		return;
	}
}
// System.Void ChildSliderAdjust::CreateLandmarks()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChildSliderAdjust_CreateLandmarks_m96F451AE1E41AE60961C8EFA2777725475E782DB (ChildSliderAdjust_tC0DEE6A2D001C242F02023FEB35AADEE22C4808D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_m7FF948365C38BC39333D82B235A7C4EAD219960D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_m026EB44DB6238F13E2AFBECF1FBBE924CB1B040A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mBCF1516ECF7285668A96B426CD6C201113395AB2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral931018A69BAE325939AFC4A7E983ED54CB0E60AC);
		s_Il2CppMethodInitialized = true;
	}
	double V_0 = 0.0;
	DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* V_1 = NULL;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_2 = NULL;
	int32_t V_3 = 0;
	double V_4 = 0.0;
	double V_5 = 0.0;
	double V_6 = 0.0;
	{
		// double sexVal = 1; // by default it is male
		V_0 = (1.0);
		// if(sex.value == 1)
		TMP_Dropdown_t73B37BFDA0D005451C7B750938AFB1748E5EA504* L_0 = __this->___sex_17;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = TMP_Dropdown_get_value_m5916A6D1897431E8ED789FEC24551A311D1B5C70_inline(L_0, NULL);
		if ((!(((uint32_t)L_1) == ((uint32_t)1))))
		{
			goto IL_0022;
		}
	}
	{
		// sexVal = -1;
		V_0 = (-1.0);
	}

IL_0022:
	{
		// var Anths = new double[] {
		//      sexVal,
		//      sliderStature.value,
		//      sliderBMI.value,
		//      sliderSittingHeightStat.value,
		//      1.0
		// };
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_2 = (DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE*)(DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE*)SZArrayNew(DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE_il2cpp_TypeInfo_var, (uint32_t)5);
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_3 = L_2;
		double L_4 = V_0;
		NullCheck(L_3);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(0), (double)L_4);
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_5 = L_3;
		Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* L_6 = __this->___sliderStature_9;
		NullCheck(L_6);
		float L_7;
		L_7 = VirtualFuncInvoker0< float >::Invoke(46 /* System.Single UnityEngine.UI.Slider::get_value() */, L_6);
		NullCheck(L_5);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(1), (double)((double)L_7));
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_8 = L_5;
		Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* L_9 = __this->___sliderBMI_8;
		NullCheck(L_9);
		float L_10;
		L_10 = VirtualFuncInvoker0< float >::Invoke(46 /* System.Single UnityEngine.UI.Slider::get_value() */, L_9);
		NullCheck(L_8);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(2), (double)((double)L_10));
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_11 = L_8;
		Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* L_12 = __this->___sliderSittingHeightStat_10;
		NullCheck(L_12);
		float L_13;
		L_13 = VirtualFuncInvoker0< float >::Invoke(46 /* System.Single UnityEngine.UI.Slider::get_value() */, L_12);
		NullCheck(L_11);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(3), (double)((double)L_13));
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_14 = L_11;
		NullCheck(L_14);
		(L_14)->SetAt(static_cast<il2cpp_array_size_t>(4), (double)(1.0));
		V_1 = L_14;
		// GameObject landmarks = new GameObject("landmarks");
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_15 = (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)il2cpp_codegen_object_new(GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var);
		NullCheck(L_15);
		GameObject__ctor_m37D512B05D292F954792225E6C6EEE95293A9B88(L_15, _stringLiteral931018A69BAE325939AFC4A7E983ED54CB0E60AC, NULL);
		V_2 = L_15;
		// for (int i = 0; i < predLandmarkNum; i++)
		V_3 = 0;
		goto IL_018e;
	}

IL_0078:
	{
		// var xcoord = landmarkData[i * 3 + 0][0] + calcCoords(Anths, pcaData[predAnthNum + i * 3 + 0]);
		List_1_t64FC2174A52DBC518FB499976FF0BA043E643411* L_16 = __this->___landmarkData_20;
		int32_t L_17 = V_3;
		NullCheck(L_16);
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_18;
		L_18 = List_1_get_Item_mBCF1516ECF7285668A96B426CD6C201113395AB2(L_16, ((int32_t)il2cpp_codegen_multiply(L_17, 3)), List_1_get_Item_mBCF1516ECF7285668A96B426CD6C201113395AB2_RuntimeMethod_var);
		NullCheck(L_18);
		int32_t L_19 = 0;
		double L_20 = (L_18)->GetAt(static_cast<il2cpp_array_size_t>(L_19));
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_21 = V_1;
		List_1_t64FC2174A52DBC518FB499976FF0BA043E643411* L_22 = __this->___pcaData_19;
		int32_t L_23 = __this->___predAnthNum_26;
		int32_t L_24 = V_3;
		NullCheck(L_22);
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_25;
		L_25 = List_1_get_Item_mBCF1516ECF7285668A96B426CD6C201113395AB2(L_22, ((int32_t)il2cpp_codegen_add(L_23, ((int32_t)il2cpp_codegen_multiply(L_24, 3)))), List_1_get_Item_mBCF1516ECF7285668A96B426CD6C201113395AB2_RuntimeMethod_var);
		float L_26;
		L_26 = ChildSliderAdjust_calcCoords_mF3985CE54E0C4B8E6CA47ED40BF93C78FF078BB5(__this, L_21, L_25, NULL);
		V_4 = ((double)il2cpp_codegen_add(L_20, ((double)L_26)));
		// var ycoord = landmarkData[i * 3 + 1][0] + calcCoords(Anths, pcaData[predAnthNum + i * 3 + 1]);
		List_1_t64FC2174A52DBC518FB499976FF0BA043E643411* L_27 = __this->___landmarkData_20;
		int32_t L_28 = V_3;
		NullCheck(L_27);
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_29;
		L_29 = List_1_get_Item_mBCF1516ECF7285668A96B426CD6C201113395AB2(L_27, ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_28, 3)), 1)), List_1_get_Item_mBCF1516ECF7285668A96B426CD6C201113395AB2_RuntimeMethod_var);
		NullCheck(L_29);
		int32_t L_30 = 0;
		double L_31 = (L_29)->GetAt(static_cast<il2cpp_array_size_t>(L_30));
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_32 = V_1;
		List_1_t64FC2174A52DBC518FB499976FF0BA043E643411* L_33 = __this->___pcaData_19;
		int32_t L_34 = __this->___predAnthNum_26;
		int32_t L_35 = V_3;
		NullCheck(L_33);
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_36;
		L_36 = List_1_get_Item_mBCF1516ECF7285668A96B426CD6C201113395AB2(L_33, ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_34, ((int32_t)il2cpp_codegen_multiply(L_35, 3)))), 1)), List_1_get_Item_mBCF1516ECF7285668A96B426CD6C201113395AB2_RuntimeMethod_var);
		float L_37;
		L_37 = ChildSliderAdjust_calcCoords_mF3985CE54E0C4B8E6CA47ED40BF93C78FF078BB5(__this, L_32, L_36, NULL);
		V_5 = ((double)il2cpp_codegen_add(L_31, ((double)L_37)));
		// var zcoord = landmarkData[i * 3 + 2][0] + calcCoords(Anths, pcaData[predAnthNum + i * 3 + 2]);
		List_1_t64FC2174A52DBC518FB499976FF0BA043E643411* L_38 = __this->___landmarkData_20;
		int32_t L_39 = V_3;
		NullCheck(L_38);
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_40;
		L_40 = List_1_get_Item_mBCF1516ECF7285668A96B426CD6C201113395AB2(L_38, ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_39, 3)), 2)), List_1_get_Item_mBCF1516ECF7285668A96B426CD6C201113395AB2_RuntimeMethod_var);
		NullCheck(L_40);
		int32_t L_41 = 0;
		double L_42 = (L_40)->GetAt(static_cast<il2cpp_array_size_t>(L_41));
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_43 = V_1;
		List_1_t64FC2174A52DBC518FB499976FF0BA043E643411* L_44 = __this->___pcaData_19;
		int32_t L_45 = __this->___predAnthNum_26;
		int32_t L_46 = V_3;
		NullCheck(L_44);
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_47;
		L_47 = List_1_get_Item_mBCF1516ECF7285668A96B426CD6C201113395AB2(L_44, ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_45, ((int32_t)il2cpp_codegen_multiply(L_46, 3)))), 2)), List_1_get_Item_mBCF1516ECF7285668A96B426CD6C201113395AB2_RuntimeMethod_var);
		float L_48;
		L_48 = ChildSliderAdjust_calcCoords_mF3985CE54E0C4B8E6CA47ED40BF93C78FF078BB5(__this, L_43, L_47, NULL);
		V_6 = ((double)il2cpp_codegen_add(L_42, ((double)L_48)));
		// GameObject sphere = GameObject.CreatePrimitive(PrimitiveType.Sphere);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_49;
		L_49 = GameObject_CreatePrimitive_m13C0A691E679A83DD595913200A1DD9A906EB47B(0, NULL);
		// sphere.transform.position = new Vector3((float)xcoord, (float)ycoord, (float)zcoord);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_50 = L_49;
		NullCheck(L_50);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_51;
		L_51 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_50, NULL);
		double L_52 = V_4;
		double L_53 = V_5;
		double L_54 = V_6;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_55;
		memset((&L_55), 0, sizeof(L_55));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_55), ((float)L_52), ((float)L_53), ((float)L_54), /*hidden argument*/NULL);
		NullCheck(L_51);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_51, L_55, NULL);
		// sphere.GetComponent<Renderer>().material.color = Color.green;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_56 = L_50;
		NullCheck(L_56);
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_57;
		L_57 = GameObject_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_m026EB44DB6238F13E2AFBECF1FBBE924CB1B040A(L_56, GameObject_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_m026EB44DB6238F13E2AFBECF1FBBE924CB1B040A_RuntimeMethod_var);
		NullCheck(L_57);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_58;
		L_58 = Renderer_get_material_m5BA2A00816C4CC66580D4B2E409CF10718C15656(L_57, NULL);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_59;
		L_59 = Color_get_green_mEB001F2CD8C68C6BBAEF9101990B779D3AA2A6EF_inline(NULL);
		NullCheck(L_58);
		Material_set_color_m5C32DEBB215FF9EE35E7B575297D8C2F29CC2A2D(L_58, L_59, NULL);
		// sphere.GetComponent<MeshRenderer>().shadowCastingMode = UnityEngine.Rendering.ShadowCastingMode.Off;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_60 = L_56;
		NullCheck(L_60);
		MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* L_61;
		L_61 = GameObject_GetComponent_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_m7FF948365C38BC39333D82B235A7C4EAD219960D(L_60, GameObject_GetComponent_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_m7FF948365C38BC39333D82B235A7C4EAD219960D_RuntimeMethod_var);
		NullCheck(L_61);
		Renderer_set_shadowCastingMode_mB0CD3D153E43044388AEFF7AEFDA93E80EB36D11(L_61, 0, NULL);
		// sphere.transform.localScale += new Vector3(20, 20, 20);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_62 = L_60;
		NullCheck(L_62);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_63;
		L_63 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_62, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_64 = L_63;
		NullCheck(L_64);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_65;
		L_65 = Transform_get_localScale_m804A002A53A645CDFCD15BB0F37209162720363F(L_64, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_66;
		memset((&L_66), 0, sizeof(L_66));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_66), (20.0f), (20.0f), (20.0f), /*hidden argument*/NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_67;
		L_67 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_65, L_66, NULL);
		NullCheck(L_64);
		Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633(L_64, L_67, NULL);
		// sphere.transform.parent = landmarks.transform;
		NullCheck(L_62);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_68;
		L_68 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_62, NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_69 = V_2;
		NullCheck(L_69);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_70;
		L_70 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_69, NULL);
		NullCheck(L_68);
		Transform_set_parent_m9BD5E563B539DD5BEC342736B03F97B38A243234(L_68, L_70, NULL);
		// for (int i = 0; i < predLandmarkNum; i++)
		int32_t L_71 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_71, 1));
	}

IL_018e:
	{
		// for (int i = 0; i < predLandmarkNum; i++)
		int32_t L_72 = V_3;
		int32_t L_73 = __this->___predLandmarkNum_27;
		if ((((int32_t)L_72) < ((int32_t)L_73)))
		{
			goto IL_0078;
		}
	}
	{
		// landmarks.transform.position = model.transform.position;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_74 = V_2;
		NullCheck(L_74);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_75;
		L_75 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_74, NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_76 = __this->___model_4;
		NullCheck(L_76);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_77;
		L_77 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_76, NULL);
		NullCheck(L_77);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_78;
		L_78 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_77, NULL);
		NullCheck(L_75);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_75, L_78, NULL);
		// landmarks.transform.localScale = new Vector3((float)0.001, (float)0.001, (float)0.001);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_79 = V_2;
		NullCheck(L_79);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_80;
		L_80 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_79, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_81;
		memset((&L_81), 0, sizeof(L_81));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_81), (0.00100000005f), (0.00100000005f), (0.00100000005f), /*hidden argument*/NULL);
		NullCheck(L_80);
		Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633(L_80, L_81, NULL);
		// landmarks.transform.parent = model.transform;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_82 = V_2;
		NullCheck(L_82);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_83;
		L_83 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_82, NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_84 = __this->___model_4;
		NullCheck(L_84);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_85;
		L_85 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_84, NULL);
		NullCheck(L_83);
		Transform_set_parent_m9BD5E563B539DD5BEC342736B03F97B38A243234(L_83, L_85, NULL);
		// landmarks.transform.localRotation = Quaternion.Euler(0, 0, -180);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_86 = V_2;
		NullCheck(L_86);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_87;
		L_87 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_86, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_88;
		L_88 = Quaternion_Euler_m9262AB29E3E9CE94EF71051F38A28E82AEC73F90_inline((0.0f), (0.0f), (-180.0f), NULL);
		NullCheck(L_87);
		Transform_set_localRotation_mAB4A011D134BA58AB780BECC0025CA65F16185FA(L_87, L_88, NULL);
		// }
		return;
	}
}
// System.Void ChildSliderAdjust::rotate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChildSliderAdjust_rotate_mBE5791AB271850656B363043F84E03A32096329C (ChildSliderAdjust_tC0DEE6A2D001C242F02023FEB35AADEE22C4808D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6E1CE004DBBF4E6D83804FAD4823454546E65F9D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF0A265B5C4EFB991FCC9024BE54A90F0BCF065C2);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		// model.transform.Rotate(new Vector3(0, 0, 1), sliderRotation.value);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___model_4;
		NullCheck(L_0);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_0, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		memset((&L_2), 0, sizeof(L_2));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_2), (0.0f), (0.0f), (1.0f), /*hidden argument*/NULL);
		Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* L_3 = __this->___sliderRotation_11;
		NullCheck(L_3);
		float L_4;
		L_4 = VirtualFuncInvoker0< float >::Invoke(46 /* System.Single UnityEngine.UI.Slider::get_value() */, L_3);
		NullCheck(L_1);
		Transform_Rotate_m35B44707FE16FF8015D519D8C162C0B4A85D6D1F(L_1, L_2, L_4, NULL);
		// lbRotation.text = "Rotation: " + Truncate(sliderRotation.value, 2).ToString() + " degrees";
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_5 = __this->___lbRotation_15;
		Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* L_6 = __this->___sliderRotation_11;
		NullCheck(L_6);
		float L_7;
		L_7 = VirtualFuncInvoker0< float >::Invoke(46 /* System.Single UnityEngine.UI.Slider::get_value() */, L_6);
		float L_8;
		L_8 = ChildSliderAdjust_Truncate_mC108531237E8525B1152AB7C8BBFEDD47311A88A(L_7, 2, NULL);
		V_0 = L_8;
		String_t* L_9;
		L_9 = Single_ToString_mE282EDA9CA4F7DF88432D807732837A629D04972((&V_0), NULL);
		String_t* L_10;
		L_10 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(_stringLiteralF0A265B5C4EFB991FCC9024BE54A90F0BCF065C2, L_9, _stringLiteral6E1CE004DBBF4E6D83804FAD4823454546E65F9D, NULL);
		NullCheck(L_5);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_5, L_10);
		// }
		return;
	}
}
// System.Single ChildSliderAdjust::Truncate(System.Single,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float ChildSliderAdjust_Truncate_mC108531237E8525B1152AB7C8BBFEDD47311A88A (float ___value0, int32_t ___digits1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	double V_0 = 0.0;
	{
		// double mult = Math.Pow(10.0, digits);
		int32_t L_0 = ___digits1;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_1;
		L_1 = Math_Pow_mEAE651F0858203FBE12B72B6A53951BBD0FB5265((10.0), ((double)L_0), NULL);
		V_0 = L_1;
		// double result = Math.Truncate(mult * value) / mult;
		double L_2 = V_0;
		float L_3 = ___value0;
		double L_4;
		L_4 = Math_Truncate_mE66B1AD68C17D27675DE0CB74643374F9EDB649C(((double)il2cpp_codegen_multiply(L_2, ((double)L_3))), NULL);
		double L_5 = V_0;
		// return (float)result;
		return ((float)((double)(L_4/L_5)));
	}
}
// System.Void ChildSliderAdjust::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChildSliderAdjust__ctor_m6D5F6D4592DB163F4DE2AF35A57C78175442360C (ChildSliderAdjust_tC0DEE6A2D001C242F02023FEB35AADEE22C4808D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_mA3C3860EDE2CDD08BBD68C389377BC89D029D968_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mF1433DDB1AE70FFD55B9A5791233ED33F24D45A9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t64FC2174A52DBC518FB499976FF0BA043E643411_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// List<double[]> pcaData = new List<double[]>();
		List_1_t64FC2174A52DBC518FB499976FF0BA043E643411* L_0 = (List_1_t64FC2174A52DBC518FB499976FF0BA043E643411*)il2cpp_codegen_object_new(List_1_t64FC2174A52DBC518FB499976FF0BA043E643411_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_mF1433DDB1AE70FFD55B9A5791233ED33F24D45A9(L_0, List_1__ctor_mF1433DDB1AE70FFD55B9A5791233ED33F24D45A9_RuntimeMethod_var);
		__this->___pcaData_19 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___pcaData_19), (void*)L_0);
		// List<double[]> landmarkData = new List<double[]>();
		List_1_t64FC2174A52DBC518FB499976FF0BA043E643411* L_1 = (List_1_t64FC2174A52DBC518FB499976FF0BA043E643411*)il2cpp_codegen_object_new(List_1_t64FC2174A52DBC518FB499976FF0BA043E643411_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		List_1__ctor_mF1433DDB1AE70FFD55B9A5791233ED33F24D45A9(L_1, List_1__ctor_mF1433DDB1AE70FFD55B9A5791233ED33F24D45A9_RuntimeMethod_var);
		__this->___landmarkData_20 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___landmarkData_20), (void*)L_1);
		// Dictionary<string, int> indexMap = new Dictionary<string, int>();
		Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588* L_2 = (Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588*)il2cpp_codegen_object_new(Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		Dictionary_2__ctor_mA3C3860EDE2CDD08BBD68C389377BC89D029D968(L_2, Dictionary_2__ctor_mA3C3860EDE2CDD08BBD68C389377BC89D029D968_RuntimeMethod_var);
		__this->___indexMap_21 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___indexMap_21), (void*)L_2);
		// int predAnthNum = 25;
		__this->___predAnthNum_26 = ((int32_t)25);
		// int predLandmarkNum = 138;
		__this->___predLandmarkNum_27 = ((int32_t)138);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// UnityEngine.Vector3[] FemaleSliderAdjust::getCorrectVertices()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* FemaleSliderAdjust_getCorrectVertices_m79868BB97E97504B5A17CD74A345C5347F71E201 (FemaleSliderAdjust_t6CC4FA9B9643A8D49EE97BE27C96A8348113D837* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral00B28FF06B788B9B67C6B259800F404F9F3761FD);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB);
		s_Il2CppMethodInitialized = true;
	}
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* V_0 = NULL;
	int32_t V_1 = 0;
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* V_2 = NULL;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_5;
	memset((&V_5), 0, sizeof(V_5));
	{
		// string[] data = correctVertexOrderDataAsset.text.Split(new String[] { ",", "\n" }, StringSplitOptions.None);
		TextAsset_t2C64E93DA366D9DE5A8209E1802FA4884AC1BD69* L_0 = __this->___correctVertexOrderDataAsset_7;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = TextAsset_get_text_m36846042E3CF3D9DD337BF3F8B2B1902D10C8FD9(L_0, NULL);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_2 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)2);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_3 = L_2;
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, _stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_4 = L_3;
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, _stringLiteral00B28FF06B788B9B67C6B259800F404F9F3761FD);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)_stringLiteral00B28FF06B788B9B67C6B259800F404F9F3761FD);
		NullCheck(L_1);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_5;
		L_5 = String_Split_m03F46561E2DF46D1E3AE749A77706EFC2F6488F4(L_1, L_4, 0, NULL);
		V_0 = L_5;
		// int numCols = 3;
		V_1 = 3;
		// int numRows = (data.Length - 1) / numCols;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_6 = V_0;
		NullCheck(L_6);
		int32_t L_7 = V_1;
		// Vector3[] correctOrderVertices = new Vector3[numRows];
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_8 = (Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C*)(Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C*)SZArrayNew(Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C_il2cpp_TypeInfo_var, (uint32_t)((int32_t)(((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_6)->max_length)), 1))/L_7)));
		V_2 = L_8;
		// for (int i = 0, k = 0; i < data.Length - 1; i+= numCols, k++)
		V_3 = 0;
		// for (int i = 0, k = 0; i < data.Length - 1; i+= numCols, k++)
		V_4 = 0;
		goto IL_008e;
	}

IL_003e:
	{
		// Vector3 curr = new Vector3();
		il2cpp_codegen_initobj((&V_5), sizeof(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2));
		// curr.x = (float)Convert.ToDouble(data[i]);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_9 = V_0;
		int32_t L_10 = V_3;
		NullCheck(L_9);
		int32_t L_11 = L_10;
		String_t* L_12 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		double L_13;
		L_13 = Convert_ToDouble_m933DFCA7F5B65845162738829A173E79D81ED4B3(L_12, NULL);
		(&V_5)->___x_2 = ((float)L_13);
		// curr.y = (float)Convert.ToDouble(data[i + 1]);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_14 = V_0;
		int32_t L_15 = V_3;
		NullCheck(L_14);
		int32_t L_16 = ((int32_t)il2cpp_codegen_add(L_15, 1));
		String_t* L_17 = (L_14)->GetAt(static_cast<il2cpp_array_size_t>(L_16));
		double L_18;
		L_18 = Convert_ToDouble_m933DFCA7F5B65845162738829A173E79D81ED4B3(L_17, NULL);
		(&V_5)->___y_3 = ((float)L_18);
		// curr.z = (float)Convert.ToDouble(data[i + 2]);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_19 = V_0;
		int32_t L_20 = V_3;
		NullCheck(L_19);
		int32_t L_21 = ((int32_t)il2cpp_codegen_add(L_20, 2));
		String_t* L_22 = (L_19)->GetAt(static_cast<il2cpp_array_size_t>(L_21));
		double L_23;
		L_23 = Convert_ToDouble_m933DFCA7F5B65845162738829A173E79D81ED4B3(L_22, NULL);
		(&V_5)->___z_4 = ((float)L_23);
		// correctOrderVertices[k] = curr;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_24 = V_2;
		int32_t L_25 = V_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_26 = V_5;
		NullCheck(L_24);
		(L_24)->SetAt(static_cast<il2cpp_array_size_t>(L_25), (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2)L_26);
		// for (int i = 0, k = 0; i < data.Length - 1; i+= numCols, k++)
		int32_t L_27 = V_3;
		int32_t L_28 = V_1;
		V_3 = ((int32_t)il2cpp_codegen_add(L_27, L_28));
		// for (int i = 0, k = 0; i < data.Length - 1; i+= numCols, k++)
		int32_t L_29 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_29, 1));
	}

IL_008e:
	{
		// for (int i = 0, k = 0; i < data.Length - 1; i+= numCols, k++)
		int32_t L_30 = V_3;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_31 = V_0;
		NullCheck(L_31);
		if ((((int32_t)L_30) < ((int32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_31)->max_length)), 1)))))
		{
			goto IL_003e;
		}
	}
	{
		// return correctOrderVertices;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_32 = V_2;
		return L_32;
	}
}
// System.Void FemaleSliderAdjust::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FemaleSliderAdjust_Start_m05E51072B23A4C2357451E132341C4E1C393378E (FemaleSliderAdjust_t6CC4FA9B9643A8D49EE97BE27C96A8348113D837* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_set_Item_m038480C0EC13713DBD89A53BE69FF0359501B4C2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisMeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5_mDF6525BCE37B444313BE0AA2305BDF4EB8B92FE8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m5D83C79B12616961D8147BB59AD5E55683361E85_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mC19C5EEC6894CA8390C854EDC3428C93A0BD59F3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_ToArray_m91B6A76F83EF0F01FE14A5BAD9D99BDDFC9499F3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m4F495AFEC1141AA7E02729E3105CB569F2CEAD34_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t495F03F47D827883530F951D563C0BB7340E5995_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDB5B55A9B215F744DB82517864984D073F2E8F8C);
		s_Il2CppMethodInitialized = true;
	}
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* V_0 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* V_1 = NULL;
	int32_t V_2 = 0;
	String_t* V_3 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* V_4 = NULL;
	List_1_t495F03F47D827883530F951D563C0BB7340E5995* V_5 = NULL;
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	int32_t V_8 = 0;
	List_1_t495F03F47D827883530F951D563C0BB7340E5995* V_9 = NULL;
	{
		// var pcaDataStr = pcaDataAsset.text.Split(new char[] { '\n' });
		TextAsset_t2C64E93DA366D9DE5A8209E1802FA4884AC1BD69* L_0 = __this->___pcaDataAsset_5;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = TextAsset_get_text_m36846042E3CF3D9DD337BF3F8B2B1902D10C8FD9(L_0, NULL);
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_2 = (CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB*)(CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB*)SZArrayNew(CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB_il2cpp_TypeInfo_var, (uint32_t)1);
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_3 = L_2;
		NullCheck(L_3);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(0), (Il2CppChar)((int32_t)10));
		NullCheck(L_1);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_4;
		L_4 = String_Split_m101D35FEC86371D2BB4E3480F6F896880093B2E9(L_1, L_3, NULL);
		V_0 = L_4;
		// for (int ncnt = 0; ncnt < pcaDataStr.Length; ncnt++)
		V_2 = 0;
		goto IL_00b2;
	}

IL_0023:
	{
		// var aline = pcaDataStr[ncnt];
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_5 = V_0;
		int32_t L_6 = V_2;
		NullCheck(L_5);
		int32_t L_7 = L_6;
		String_t* L_8 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		V_3 = L_8;
		// string[] linedata = aline.Split(new char[] { ',' });
		String_t* L_9 = V_3;
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_10 = (CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB*)(CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB*)SZArrayNew(CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB_il2cpp_TypeInfo_var, (uint32_t)1);
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_11 = L_10;
		NullCheck(L_11);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(0), (Il2CppChar)((int32_t)44));
		NullCheck(L_9);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_12;
		L_12 = String_Split_m101D35FEC86371D2BB4E3480F6F896880093B2E9(L_9, L_11, NULL);
		V_4 = L_12;
		// if (aline == "") continue;
		String_t* L_13 = V_3;
		bool L_14;
		L_14 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_13, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, NULL);
		if (L_14)
		{
			goto IL_00ae;
		}
	}
	{
		// List<double> adata = new List<double>();
		List_1_t495F03F47D827883530F951D563C0BB7340E5995* L_15 = (List_1_t495F03F47D827883530F951D563C0BB7340E5995*)il2cpp_codegen_object_new(List_1_t495F03F47D827883530F951D563C0BB7340E5995_il2cpp_TypeInfo_var);
		NullCheck(L_15);
		List_1__ctor_m4F495AFEC1141AA7E02729E3105CB569F2CEAD34(L_15, List_1__ctor_m4F495AFEC1141AA7E02729E3105CB569F2CEAD34_RuntimeMethod_var);
		V_5 = L_15;
		// for (int i = 0; i < linedata.Length; i++)
		V_6 = 0;
		goto IL_0094;
	}

IL_0053:
	{
		// if (linedata[i].Contains("\r"))
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_16 = V_4;
		int32_t L_17 = V_6;
		NullCheck(L_16);
		int32_t L_18 = L_17;
		String_t* L_19 = (L_16)->GetAt(static_cast<il2cpp_array_size_t>(L_18));
		NullCheck(L_19);
		bool L_20;
		L_20 = String_Contains_m6D77B121FADA7CA5F397C0FABB65DA62DF03B6C3(L_19, _stringLiteralDB5B55A9B215F744DB82517864984D073F2E8F8C, NULL);
		if (!L_20)
		{
			goto IL_007d;
		}
	}
	{
		// linedata[i] = linedata[i].Replace("\r", string.Empty);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_21 = V_4;
		int32_t L_22 = V_6;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_23 = V_4;
		int32_t L_24 = V_6;
		NullCheck(L_23);
		int32_t L_25 = L_24;
		String_t* L_26 = (L_23)->GetAt(static_cast<il2cpp_array_size_t>(L_25));
		String_t* L_27 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		NullCheck(L_26);
		String_t* L_28;
		L_28 = String_Replace_mABDB7003A1D0AEDCAE9FF85E3DFFFBA752D2A166(L_26, _stringLiteralDB5B55A9B215F744DB82517864984D073F2E8F8C, L_27, NULL);
		NullCheck(L_21);
		ArrayElementTypeCheck (L_21, L_28);
		(L_21)->SetAt(static_cast<il2cpp_array_size_t>(L_22), (String_t*)L_28);
	}

IL_007d:
	{
		// adata.Add(Convert.ToDouble(linedata[i]));
		List_1_t495F03F47D827883530F951D563C0BB7340E5995* L_29 = V_5;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_30 = V_4;
		int32_t L_31 = V_6;
		NullCheck(L_30);
		int32_t L_32 = L_31;
		String_t* L_33 = (L_30)->GetAt(static_cast<il2cpp_array_size_t>(L_32));
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		double L_34;
		L_34 = Convert_ToDouble_m933DFCA7F5B65845162738829A173E79D81ED4B3(L_33, NULL);
		NullCheck(L_29);
		List_1_Add_m5D83C79B12616961D8147BB59AD5E55683361E85_inline(L_29, L_34, List_1_Add_m5D83C79B12616961D8147BB59AD5E55683361E85_RuntimeMethod_var);
		// for (int i = 0; i < linedata.Length; i++)
		int32_t L_35 = V_6;
		V_6 = ((int32_t)il2cpp_codegen_add(L_35, 1));
	}

IL_0094:
	{
		// for (int i = 0; i < linedata.Length; i++)
		int32_t L_36 = V_6;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_37 = V_4;
		NullCheck(L_37);
		if ((((int32_t)L_36) < ((int32_t)((int32_t)(((RuntimeArray*)L_37)->max_length)))))
		{
			goto IL_0053;
		}
	}
	{
		// pcaData.Add(adata.ToArray());
		List_1_t64FC2174A52DBC518FB499976FF0BA043E643411* L_38 = __this->___pcaData_20;
		List_1_t495F03F47D827883530F951D563C0BB7340E5995* L_39 = V_5;
		NullCheck(L_39);
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_40;
		L_40 = List_1_ToArray_m91B6A76F83EF0F01FE14A5BAD9D99BDDFC9499F3(L_39, List_1_ToArray_m91B6A76F83EF0F01FE14A5BAD9D99BDDFC9499F3_RuntimeMethod_var);
		NullCheck(L_38);
		List_1_Add_mC19C5EEC6894CA8390C854EDC3428C93A0BD59F3_inline(L_38, L_40, List_1_Add_mC19C5EEC6894CA8390C854EDC3428C93A0BD59F3_RuntimeMethod_var);
	}

IL_00ae:
	{
		// for (int ncnt = 0; ncnt < pcaDataStr.Length; ncnt++)
		int32_t L_41 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_41, 1));
	}

IL_00b2:
	{
		// for (int ncnt = 0; ncnt < pcaDataStr.Length; ncnt++)
		int32_t L_42 = V_2;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_43 = V_0;
		NullCheck(L_43);
		if ((((int32_t)L_42) < ((int32_t)((int32_t)(((RuntimeArray*)L_43)->max_length)))))
		{
			goto IL_0023;
		}
	}
	{
		// mesh = model.GetComponent<MeshFilter>().mesh;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_44 = __this->___model_4;
		NullCheck(L_44);
		MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5* L_45;
		L_45 = GameObject_GetComponent_TisMeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5_mDF6525BCE37B444313BE0AA2305BDF4EB8B92FE8(L_44, GameObject_GetComponent_TisMeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5_mDF6525BCE37B444313BE0AA2305BDF4EB8B92FE8_RuntimeMethod_var);
		NullCheck(L_45);
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_46;
		L_46 = MeshFilter_get_mesh_m13172D7EF6682861971817D0A47EE2BE49FBCB1C(L_45, NULL);
		__this->___mesh_23 = L_46;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___mesh_23), (void*)L_46);
		// mesh.MarkDynamic();
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_47 = __this->___mesh_23;
		NullCheck(L_47);
		Mesh_MarkDynamic_m718089940F240AFE625D6DC9DA4E6F20229CC322(L_47, NULL);
		// vertices = mesh.vertices;
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_48 = __this->___mesh_23;
		NullCheck(L_48);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_49;
		L_49 = Mesh_get_vertices_mA3577F1B08EDDD54E26AEB3F8FFE4EC247D2ABB9(L_48, NULL);
		__this->___vertices_24 = L_49;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___vertices_24), (void*)L_49);
		// correctVertices = getCorrectVertices();
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_50;
		L_50 = FemaleSliderAdjust_getCorrectVertices_m79868BB97E97504B5A17CD74A345C5347F71E201(__this, NULL);
		__this->___correctVertices_25 = L_50;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___correctVertices_25), (void*)L_50);
		// for(int i = 0; i < vertices.Length; i++)
		V_7 = 0;
		goto IL_017a;
	}

IL_00fe:
	{
		// indexMap[vertices[i].x.ToString() + " " + vertices[i].y.ToString() + " " + vertices[i].z.ToString()] = i;
		Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588* L_51 = __this->___indexMap_22;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_52 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)5);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_53 = L_52;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_54 = __this->___vertices_24;
		int32_t L_55 = V_7;
		NullCheck(L_54);
		float* L_56 = (&((L_54)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_55)))->___x_2);
		String_t* L_57;
		L_57 = Single_ToString_mE282EDA9CA4F7DF88432D807732837A629D04972(L_56, NULL);
		NullCheck(L_53);
		ArrayElementTypeCheck (L_53, L_57);
		(L_53)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)L_57);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_58 = L_53;
		NullCheck(L_58);
		ArrayElementTypeCheck (L_58, _stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745);
		(L_58)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)_stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_59 = L_58;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_60 = __this->___vertices_24;
		int32_t L_61 = V_7;
		NullCheck(L_60);
		float* L_62 = (&((L_60)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_61)))->___y_3);
		String_t* L_63;
		L_63 = Single_ToString_mE282EDA9CA4F7DF88432D807732837A629D04972(L_62, NULL);
		NullCheck(L_59);
		ArrayElementTypeCheck (L_59, L_63);
		(L_59)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)L_63);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_64 = L_59;
		NullCheck(L_64);
		ArrayElementTypeCheck (L_64, _stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745);
		(L_64)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)_stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_65 = L_64;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_66 = __this->___vertices_24;
		int32_t L_67 = V_7;
		NullCheck(L_66);
		float* L_68 = (&((L_66)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_67)))->___z_4);
		String_t* L_69;
		L_69 = Single_ToString_mE282EDA9CA4F7DF88432D807732837A629D04972(L_68, NULL);
		NullCheck(L_65);
		ArrayElementTypeCheck (L_65, L_69);
		(L_65)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)L_69);
		String_t* L_70;
		L_70 = String_Concat_m647EBF831F54B6DF7D5AFA5FD012CF4EE7571B6A(L_65, NULL);
		int32_t L_71 = V_7;
		NullCheck(L_51);
		Dictionary_2_set_Item_m038480C0EC13713DBD89A53BE69FF0359501B4C2(L_51, L_70, L_71, Dictionary_2_set_Item_m038480C0EC13713DBD89A53BE69FF0359501B4C2_RuntimeMethod_var);
		// for(int i = 0; i < vertices.Length; i++)
		int32_t L_72 = V_7;
		V_7 = ((int32_t)il2cpp_codegen_add(L_72, 1));
	}

IL_017a:
	{
		// for(int i = 0; i < vertices.Length; i++)
		int32_t L_73 = V_7;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_74 = __this->___vertices_24;
		NullCheck(L_74);
		if ((((int32_t)L_73) < ((int32_t)((int32_t)(((RuntimeArray*)L_74)->max_length)))))
		{
			goto IL_00fe;
		}
	}
	{
		// var landmarkStr = meanLandmarkDataAsset.text.Split(new char[] { '\n' });
		TextAsset_t2C64E93DA366D9DE5A8209E1802FA4884AC1BD69* L_75 = __this->___meanLandmarkDataAsset_6;
		NullCheck(L_75);
		String_t* L_76;
		L_76 = TextAsset_get_text_m36846042E3CF3D9DD337BF3F8B2B1902D10C8FD9(L_75, NULL);
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_77 = (CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB*)(CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB*)SZArrayNew(CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB_il2cpp_TypeInfo_var, (uint32_t)1);
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_78 = L_77;
		NullCheck(L_78);
		(L_78)->SetAt(static_cast<il2cpp_array_size_t>(0), (Il2CppChar)((int32_t)10));
		NullCheck(L_76);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_79;
		L_79 = String_Split_m101D35FEC86371D2BB4E3480F6F896880093B2E9(L_76, L_78, NULL);
		V_1 = L_79;
		// for (int ncnt = 0; ncnt < predLandmarkNum * 3; ncnt++)
		V_8 = 0;
		goto IL_01d9;
	}

IL_01aa:
	{
		// List<double> adata = new List<double>();
		List_1_t495F03F47D827883530F951D563C0BB7340E5995* L_80 = (List_1_t495F03F47D827883530F951D563C0BB7340E5995*)il2cpp_codegen_object_new(List_1_t495F03F47D827883530F951D563C0BB7340E5995_il2cpp_TypeInfo_var);
		NullCheck(L_80);
		List_1__ctor_m4F495AFEC1141AA7E02729E3105CB569F2CEAD34(L_80, List_1__ctor_m4F495AFEC1141AA7E02729E3105CB569F2CEAD34_RuntimeMethod_var);
		V_9 = L_80;
		// adata.Add(Convert.ToDouble(landmarkStr[ncnt]));
		List_1_t495F03F47D827883530F951D563C0BB7340E5995* L_81 = V_9;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_82 = V_1;
		int32_t L_83 = V_8;
		NullCheck(L_82);
		int32_t L_84 = L_83;
		String_t* L_85 = (L_82)->GetAt(static_cast<il2cpp_array_size_t>(L_84));
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		double L_86;
		L_86 = Convert_ToDouble_m933DFCA7F5B65845162738829A173E79D81ED4B3(L_85, NULL);
		NullCheck(L_81);
		List_1_Add_m5D83C79B12616961D8147BB59AD5E55683361E85_inline(L_81, L_86, List_1_Add_m5D83C79B12616961D8147BB59AD5E55683361E85_RuntimeMethod_var);
		// landmarkData.Add(adata.ToArray());
		List_1_t64FC2174A52DBC518FB499976FF0BA043E643411* L_87 = __this->___landmarkData_21;
		List_1_t495F03F47D827883530F951D563C0BB7340E5995* L_88 = V_9;
		NullCheck(L_88);
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_89;
		L_89 = List_1_ToArray_m91B6A76F83EF0F01FE14A5BAD9D99BDDFC9499F3(L_88, List_1_ToArray_m91B6A76F83EF0F01FE14A5BAD9D99BDDFC9499F3_RuntimeMethod_var);
		NullCheck(L_87);
		List_1_Add_mC19C5EEC6894CA8390C854EDC3428C93A0BD59F3_inline(L_87, L_89, List_1_Add_mC19C5EEC6894CA8390C854EDC3428C93A0BD59F3_RuntimeMethod_var);
		// for (int ncnt = 0; ncnt < predLandmarkNum * 3; ncnt++)
		int32_t L_90 = V_8;
		V_8 = ((int32_t)il2cpp_codegen_add(L_90, 1));
	}

IL_01d9:
	{
		// for (int ncnt = 0; ncnt < predLandmarkNum * 3; ncnt++)
		int32_t L_91 = V_8;
		int32_t L_92 = __this->___predLandmarkNum_28;
		if ((((int32_t)L_91) < ((int32_t)((int32_t)il2cpp_codegen_multiply(L_92, 3)))))
		{
			goto IL_01aa;
		}
	}
	{
		// meanVertices = correctVertices;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_93 = __this->___correctVertices_25;
		__this->___meanVertices_26 = L_93;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___meanVertices_26), (void*)L_93);
		// }
		return;
	}
}
// System.Void FemaleSliderAdjust::ModelAnthroUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FemaleSliderAdjust_ModelAnthroUpdate_m9C91BF4909933E2690490B2677D7FF7D73071CE9 (FemaleSliderAdjust_t6CC4FA9B9643A8D49EE97BE27C96A8348113D837* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_mE01750B88D9A581E9196F3444952F7592E862592_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mBCF1516ECF7285668A96B426CD6C201113395AB2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0487849E743EE7A8A4466475F43E21864F0F1F48);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7B4264F4BD0983833238F00348CA2152EA160369);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8A0FEFCF616268A7D2AEEE23BA07B44ADB72452E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral931018A69BAE325939AFC4A7E983ED54CB0E60AC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB281D5412E3C8F31FEC213B8C136C5EFC40702AB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDB81FEF0286C64E4137586C08428BE38969C7CF7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEF9AA825E2BF1AA80FEE50E865D31D82FAE268D4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF511102AF85AA2E3EFF8375103C2269E3633C128);
		s_Il2CppMethodInitialized = true;
	}
	DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	float V_4 = 0.0f;
	float V_5 = 0.0f;
	float V_6 = 0.0f;
	float V_7 = 0.0f;
	{
		// var Anths = new double[] {
		//     sliderStature.value,
		//     sliderBMI.value,
		//     sliderSittingHeightStat.value,
		//     sliderAge.value,
		//     sliderBMI.value*sliderAge.value,
		//     1.0
		// };
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_0 = (DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE*)(DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE*)SZArrayNew(DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE_il2cpp_TypeInfo_var, (uint32_t)6);
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_1 = L_0;
		Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* L_2 = __this->___sliderStature_9;
		NullCheck(L_2);
		float L_3;
		L_3 = VirtualFuncInvoker0< float >::Invoke(46 /* System.Single UnityEngine.UI.Slider::get_value() */, L_2);
		NullCheck(L_1);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (double)((double)L_3));
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_4 = L_1;
		Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* L_5 = __this->___sliderBMI_8;
		NullCheck(L_5);
		float L_6;
		L_6 = VirtualFuncInvoker0< float >::Invoke(46 /* System.Single UnityEngine.UI.Slider::get_value() */, L_5);
		NullCheck(L_4);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(1), (double)((double)L_6));
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_7 = L_4;
		Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* L_8 = __this->___sliderSittingHeightStat_10;
		NullCheck(L_8);
		float L_9;
		L_9 = VirtualFuncInvoker0< float >::Invoke(46 /* System.Single UnityEngine.UI.Slider::get_value() */, L_8);
		NullCheck(L_7);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(2), (double)((double)L_9));
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_10 = L_7;
		Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* L_11 = __this->___sliderAge_11;
		NullCheck(L_11);
		float L_12;
		L_12 = VirtualFuncInvoker0< float >::Invoke(46 /* System.Single UnityEngine.UI.Slider::get_value() */, L_11);
		NullCheck(L_10);
		(L_10)->SetAt(static_cast<il2cpp_array_size_t>(3), (double)((double)L_12));
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_13 = L_10;
		Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* L_14 = __this->___sliderBMI_8;
		NullCheck(L_14);
		float L_15;
		L_15 = VirtualFuncInvoker0< float >::Invoke(46 /* System.Single UnityEngine.UI.Slider::get_value() */, L_14);
		Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* L_16 = __this->___sliderAge_11;
		NullCheck(L_16);
		float L_17;
		L_17 = VirtualFuncInvoker0< float >::Invoke(46 /* System.Single UnityEngine.UI.Slider::get_value() */, L_16);
		NullCheck(L_13);
		(L_13)->SetAt(static_cast<il2cpp_array_size_t>(4), (double)((double)((float)il2cpp_codegen_multiply(L_15, L_17))));
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_18 = L_13;
		NullCheck(L_18);
		(L_18)->SetAt(static_cast<il2cpp_array_size_t>(5), (double)(1.0));
		V_0 = L_18;
		// var skipNum = predAnthNum + predLandmarkNum * 3;
		int32_t L_19 = __this->___predAnthNum_27;
		int32_t L_20 = __this->___predLandmarkNum_28;
		V_1 = ((int32_t)il2cpp_codegen_add(L_19, ((int32_t)il2cpp_codegen_multiply(L_20, 3))));
		// for (int i = 0; i < correctVertices.Length; i++)
		V_2 = 0;
		goto IL_01b5;
	}

IL_0081:
	{
		// int idx = indexMap[correctVertices[i].x.ToString() + " " +
		//                    correctVertices[i].y.ToString() + " " +
		//                    correctVertices[i].z.ToString()];
		Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588* L_21 = __this->___indexMap_22;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_22 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)5);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_23 = L_22;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_24 = __this->___correctVertices_25;
		int32_t L_25 = V_2;
		NullCheck(L_24);
		float* L_26 = (&((L_24)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_25)))->___x_2);
		String_t* L_27;
		L_27 = Single_ToString_mE282EDA9CA4F7DF88432D807732837A629D04972(L_26, NULL);
		NullCheck(L_23);
		ArrayElementTypeCheck (L_23, L_27);
		(L_23)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)L_27);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_28 = L_23;
		NullCheck(L_28);
		ArrayElementTypeCheck (L_28, _stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745);
		(L_28)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)_stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_29 = L_28;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_30 = __this->___correctVertices_25;
		int32_t L_31 = V_2;
		NullCheck(L_30);
		float* L_32 = (&((L_30)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_31)))->___y_3);
		String_t* L_33;
		L_33 = Single_ToString_mE282EDA9CA4F7DF88432D807732837A629D04972(L_32, NULL);
		NullCheck(L_29);
		ArrayElementTypeCheck (L_29, L_33);
		(L_29)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)L_33);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_34 = L_29;
		NullCheck(L_34);
		ArrayElementTypeCheck (L_34, _stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745);
		(L_34)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)_stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_35 = L_34;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_36 = __this->___correctVertices_25;
		int32_t L_37 = V_2;
		NullCheck(L_36);
		float* L_38 = (&((L_36)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_37)))->___z_4);
		String_t* L_39;
		L_39 = Single_ToString_mE282EDA9CA4F7DF88432D807732837A629D04972(L_38, NULL);
		NullCheck(L_35);
		ArrayElementTypeCheck (L_35, L_39);
		(L_35)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)L_39);
		String_t* L_40;
		L_40 = String_Concat_m647EBF831F54B6DF7D5AFA5FD012CF4EE7571B6A(L_35, NULL);
		NullCheck(L_21);
		int32_t L_41;
		L_41 = Dictionary_2_get_Item_mE01750B88D9A581E9196F3444952F7592E862592(L_21, L_40, Dictionary_2_get_Item_mE01750B88D9A581E9196F3444952F7592E862592_RuntimeMethod_var);
		V_3 = L_41;
		// var diffx = calcCoords(Anths, pcaData[skipNum + i * 3 + 0]);
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_42 = V_0;
		List_1_t64FC2174A52DBC518FB499976FF0BA043E643411* L_43 = __this->___pcaData_20;
		int32_t L_44 = V_1;
		int32_t L_45 = V_2;
		NullCheck(L_43);
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_46;
		L_46 = List_1_get_Item_mBCF1516ECF7285668A96B426CD6C201113395AB2(L_43, ((int32_t)il2cpp_codegen_add(L_44, ((int32_t)il2cpp_codegen_multiply(L_45, 3)))), List_1_get_Item_mBCF1516ECF7285668A96B426CD6C201113395AB2_RuntimeMethod_var);
		float L_47;
		L_47 = FemaleSliderAdjust_calcCoords_mF80F88072C64F589EDE4A91ACE89B6FBCEA3F32A(__this, L_42, L_46, NULL);
		V_4 = L_47;
		// var diffy = calcCoords(Anths, pcaData[skipNum + i * 3 + 1]);
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_48 = V_0;
		List_1_t64FC2174A52DBC518FB499976FF0BA043E643411* L_49 = __this->___pcaData_20;
		int32_t L_50 = V_1;
		int32_t L_51 = V_2;
		NullCheck(L_49);
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_52;
		L_52 = List_1_get_Item_mBCF1516ECF7285668A96B426CD6C201113395AB2(L_49, ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_50, ((int32_t)il2cpp_codegen_multiply(L_51, 3)))), 1)), List_1_get_Item_mBCF1516ECF7285668A96B426CD6C201113395AB2_RuntimeMethod_var);
		float L_53;
		L_53 = FemaleSliderAdjust_calcCoords_mF80F88072C64F589EDE4A91ACE89B6FBCEA3F32A(__this, L_48, L_52, NULL);
		V_5 = L_53;
		// var diffz = calcCoords(Anths, pcaData[skipNum + i * 3 + 2]);
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_54 = V_0;
		List_1_t64FC2174A52DBC518FB499976FF0BA043E643411* L_55 = __this->___pcaData_20;
		int32_t L_56 = V_1;
		int32_t L_57 = V_2;
		NullCheck(L_55);
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_58;
		L_58 = List_1_get_Item_mBCF1516ECF7285668A96B426CD6C201113395AB2(L_55, ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_56, ((int32_t)il2cpp_codegen_multiply(L_57, 3)))), 2)), List_1_get_Item_mBCF1516ECF7285668A96B426CD6C201113395AB2_RuntimeMethod_var);
		float L_59;
		L_59 = FemaleSliderAdjust_calcCoords_mF80F88072C64F589EDE4A91ACE89B6FBCEA3F32A(__this, L_54, L_58, NULL);
		V_6 = L_59;
		// vertices[idx].x = meanVertices[i].x - diffx;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_60 = __this->___vertices_24;
		int32_t L_61 = V_3;
		NullCheck(L_60);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_62 = __this->___meanVertices_26;
		int32_t L_63 = V_2;
		NullCheck(L_62);
		float L_64 = ((L_62)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_63)))->___x_2;
		float L_65 = V_4;
		((L_60)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_61)))->___x_2 = ((float)il2cpp_codegen_subtract(L_64, L_65));
		// vertices[idx].y = meanVertices[i].y + diffy;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_66 = __this->___vertices_24;
		int32_t L_67 = V_3;
		NullCheck(L_66);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_68 = __this->___meanVertices_26;
		int32_t L_69 = V_2;
		NullCheck(L_68);
		float L_70 = ((L_68)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_69)))->___y_3;
		float L_71 = V_5;
		((L_66)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_67)))->___y_3 = ((float)il2cpp_codegen_add(L_70, L_71));
		// vertices[idx].z = meanVertices[i].z + diffz;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_72 = __this->___vertices_24;
		int32_t L_73 = V_3;
		NullCheck(L_72);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_74 = __this->___meanVertices_26;
		int32_t L_75 = V_2;
		NullCheck(L_74);
		float L_76 = ((L_74)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_75)))->___z_4;
		float L_77 = V_6;
		((L_72)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_73)))->___z_4 = ((float)il2cpp_codegen_add(L_76, L_77));
		// for (int i = 0; i < correctVertices.Length; i++)
		int32_t L_78 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_78, 1));
	}

IL_01b5:
	{
		// for (int i = 0; i < correctVertices.Length; i++)
		int32_t L_79 = V_2;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_80 = __this->___correctVertices_25;
		NullCheck(L_80);
		if ((((int32_t)L_79) < ((int32_t)((int32_t)(((RuntimeArray*)L_80)->max_length)))))
		{
			goto IL_0081;
		}
	}
	{
		// mesh.vertices = vertices;
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_81 = __this->___mesh_23;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_82 = __this->___vertices_24;
		NullCheck(L_81);
		Mesh_set_vertices_m5BB814D89E9ACA00DBF19F7D8E22CB73AC73FE5C(L_81, L_82, NULL);
		// mesh.RecalculateBounds();
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_83 = __this->___mesh_23;
		NullCheck(L_83);
		Mesh_RecalculateBounds_mA9B293F57C6CD298AE2D2DB19061FC23B05AB90B(L_83, NULL);
		// mesh.RecalculateNormals();
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_84 = __this->___mesh_23;
		NullCheck(L_84);
		Mesh_RecalculateNormals_m3AA2788914611444E030CA310E03E3CFE683902B(L_84, NULL);
		// if(areLandmarksDisplayed)
		bool L_85 = __this->___areLandmarksDisplayed_19;
		if (!L_85)
		{
			goto IL_0217;
		}
	}
	{
		// model.transform.DetachChildren();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_86 = __this->___model_4;
		NullCheck(L_86);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_87;
		L_87 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_86, NULL);
		NullCheck(L_87);
		Transform_DetachChildren_m7E4B3405F2F053B059E76EC1DF0F235EED335D69(L_87, NULL);
		// GameObject.Destroy(GameObject.Find("landmarks"));
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_88;
		L_88 = GameObject_Find_m7A669B4EEC2617AB82F6E3FF007CDCD9F21DB300(_stringLiteral931018A69BAE325939AFC4A7E983ED54CB0E60AC, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB(L_88, NULL);
		// CreateLandmarks();
		FemaleSliderAdjust_CreateLandmarks_mA1BE76FC01E6C20D3FB4A6AEF3A86987B253A898(__this, NULL);
	}

IL_0217:
	{
		// lbStature.text = "Stature: " + sliderStature.value.ToString() + " mm";
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_89 = __this->___lbStature_14;
		Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* L_90 = __this->___sliderStature_9;
		NullCheck(L_90);
		float L_91;
		L_91 = VirtualFuncInvoker0< float >::Invoke(46 /* System.Single UnityEngine.UI.Slider::get_value() */, L_90);
		V_7 = L_91;
		String_t* L_92;
		L_92 = Single_ToString_mE282EDA9CA4F7DF88432D807732837A629D04972((&V_7), NULL);
		String_t* L_93;
		L_93 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(_stringLiteralB281D5412E3C8F31FEC213B8C136C5EFC40702AB, L_92, _stringLiteralF511102AF85AA2E3EFF8375103C2269E3633C128, NULL);
		NullCheck(L_89);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_89, L_93);
		// lbBMI.text = "BMI: " + sliderBMI.value.ToString() + " kg/m^2";
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_94 = __this->___lbBMI_13;
		Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* L_95 = __this->___sliderBMI_8;
		NullCheck(L_95);
		float L_96;
		L_96 = VirtualFuncInvoker0< float >::Invoke(46 /* System.Single UnityEngine.UI.Slider::get_value() */, L_95);
		V_7 = L_96;
		String_t* L_97;
		L_97 = Single_ToString_mE282EDA9CA4F7DF88432D807732837A629D04972((&V_7), NULL);
		String_t* L_98;
		L_98 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(_stringLiteral8A0FEFCF616268A7D2AEEE23BA07B44ADB72452E, L_97, _stringLiteral0487849E743EE7A8A4466475F43E21864F0F1F48, NULL);
		NullCheck(L_94);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_94, L_98);
		// lbSittingHeightStat.text = "Sitting Height / Stature: " +
		//                           Truncate((float)sliderSittingHeightStat.value, 6).ToString();
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_99 = __this->___lbSittingHeightStat_15;
		Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* L_100 = __this->___sliderSittingHeightStat_10;
		NullCheck(L_100);
		float L_101;
		L_101 = VirtualFuncInvoker0< float >::Invoke(46 /* System.Single UnityEngine.UI.Slider::get_value() */, L_100);
		float L_102;
		L_102 = FemaleSliderAdjust_Truncate_mD0D850A434668EC14072B03E1C907731C10365DE(((float)L_101), 6, NULL);
		V_7 = L_102;
		String_t* L_103;
		L_103 = Single_ToString_mE282EDA9CA4F7DF88432D807732837A629D04972((&V_7), NULL);
		String_t* L_104;
		L_104 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteralEF9AA825E2BF1AA80FEE50E865D31D82FAE268D4, L_103, NULL);
		NullCheck(L_99);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_99, L_104);
		// lbAge.text = "Age: " + sliderAge.value.ToString() + " years";
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_105 = __this->___lbAge_16;
		Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* L_106 = __this->___sliderAge_11;
		NullCheck(L_106);
		float L_107;
		L_107 = VirtualFuncInvoker0< float >::Invoke(46 /* System.Single UnityEngine.UI.Slider::get_value() */, L_106);
		V_7 = L_107;
		String_t* L_108;
		L_108 = Single_ToString_mE282EDA9CA4F7DF88432D807732837A629D04972((&V_7), NULL);
		String_t* L_109;
		L_109 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(_stringLiteralDB81FEF0286C64E4137586C08428BE38969C7CF7, L_108, _stringLiteral7B4264F4BD0983833238F00348CA2152EA160369, NULL);
		NullCheck(L_105);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_105, L_109);
		// }
		return;
	}
}
// System.Single FemaleSliderAdjust::calcCoords(System.Double[],System.Double[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float FemaleSliderAdjust_calcCoords_mF80F88072C64F589EDE4A91ACE89B6FBCEA3F32A (FemaleSliderAdjust_t6CC4FA9B9643A8D49EE97BE27C96A8348113D837* __this, DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* ___diffAnths0, DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* ___onePCAdata1, const RuntimeMethod* method) 
{
	double V_0 = 0.0;
	int32_t V_1 = 0;
	{
		// {   var diffCoords = 0.0;
		V_0 = (0.0);
		// for (int k = 0; k < diffAnths.Length; k++)
		V_1 = 0;
		goto IL_001c;
	}

IL_000e:
	{
		// diffCoords += onePCAdata[k] * diffAnths[k];
		double L_0 = V_0;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_1 = ___onePCAdata1;
		int32_t L_2 = V_1;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		double L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_5 = ___diffAnths0;
		int32_t L_6 = V_1;
		NullCheck(L_5);
		int32_t L_7 = L_6;
		double L_8 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		V_0 = ((double)il2cpp_codegen_add(L_0, ((double)il2cpp_codegen_multiply(L_4, L_8))));
		// for (int k = 0; k < diffAnths.Length; k++)
		int32_t L_9 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_9, 1));
	}

IL_001c:
	{
		// for (int k = 0; k < diffAnths.Length; k++)
		int32_t L_10 = V_1;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_11 = ___diffAnths0;
		NullCheck(L_11);
		if ((((int32_t)L_10) < ((int32_t)((int32_t)(((RuntimeArray*)L_11)->max_length)))))
		{
			goto IL_000e;
		}
	}
	{
		// return ((float)diffCoords);
		double L_12 = V_0;
		return ((float)L_12);
	}
}
// System.Void FemaleSliderAdjust::ShowLandmarks()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FemaleSliderAdjust_ShowLandmarks_m3AAE2F0262704A63D4CD52E24DAF6768AC77BD8D (FemaleSliderAdjust_t6CC4FA9B9643A8D49EE97BE27C96A8348113D837* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral303F9406787F3EDF01DD5EAB02D9775C12EF01C2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral931018A69BAE325939AFC4A7E983ED54CB0E60AC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFE3FF821D1E3915EBA26D5188851F3D38D056276);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!areLandmarksDisplayed)
		bool L_0 = __this->___areLandmarksDisplayed_19;
		if (L_0)
		{
			goto IL_0026;
		}
	}
	{
		// areLandmarksDisplayed = true;
		__this->___areLandmarksDisplayed_19 = (bool)1;
		// landmarkButtonText.text = "HIDE LANDMARKS";
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_1 = __this->___landmarkButtonText_18;
		NullCheck(L_1);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_1, _stringLiteral303F9406787F3EDF01DD5EAB02D9775C12EF01C2);
		// CreateLandmarks();
		FemaleSliderAdjust_CreateLandmarks_mA1BE76FC01E6C20D3FB4A6AEF3A86987B253A898(__this, NULL);
		return;
	}

IL_0026:
	{
		// areLandmarksDisplayed = false;
		__this->___areLandmarksDisplayed_19 = (bool)0;
		// landmarkButtonText.text = "SHOW LANDMARKS";
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_2 = __this->___landmarkButtonText_18;
		NullCheck(L_2);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_2, _stringLiteralFE3FF821D1E3915EBA26D5188851F3D38D056276);
		// model.transform.DetachChildren();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3 = __this->___model_4;
		NullCheck(L_3);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4;
		L_4 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_3, NULL);
		NullCheck(L_4);
		Transform_DetachChildren_m7E4B3405F2F053B059E76EC1DF0F235EED335D69(L_4, NULL);
		// GameObject.Destroy(GameObject.Find("landmarks"));
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5;
		L_5 = GameObject_Find_m7A669B4EEC2617AB82F6E3FF007CDCD9F21DB300(_stringLiteral931018A69BAE325939AFC4A7E983ED54CB0E60AC, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB(L_5, NULL);
		// }
		return;
	}
}
// System.Void FemaleSliderAdjust::CreateLandmarks()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FemaleSliderAdjust_CreateLandmarks_mA1BE76FC01E6C20D3FB4A6AEF3A86987B253A898 (FemaleSliderAdjust_t6CC4FA9B9643A8D49EE97BE27C96A8348113D837* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_m7FF948365C38BC39333D82B235A7C4EAD219960D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_m026EB44DB6238F13E2AFBECF1FBBE924CB1B040A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mBCF1516ECF7285668A96B426CD6C201113395AB2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral931018A69BAE325939AFC4A7E983ED54CB0E60AC);
		s_Il2CppMethodInitialized = true;
	}
	DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* V_0 = NULL;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_1 = NULL;
	int32_t V_2 = 0;
	double V_3 = 0.0;
	double V_4 = 0.0;
	double V_5 = 0.0;
	{
		// var Anths = new double[] {
		//       sliderStature.value,
		//       sliderBMI.value,
		//       sliderSittingHeightStat.value,
		//       sliderAge.value,
		//       sliderBMI.value*sliderAge.value,
		//       1.0
		// };
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_0 = (DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE*)(DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE*)SZArrayNew(DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE_il2cpp_TypeInfo_var, (uint32_t)6);
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_1 = L_0;
		Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* L_2 = __this->___sliderStature_9;
		NullCheck(L_2);
		float L_3;
		L_3 = VirtualFuncInvoker0< float >::Invoke(46 /* System.Single UnityEngine.UI.Slider::get_value() */, L_2);
		NullCheck(L_1);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (double)((double)L_3));
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_4 = L_1;
		Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* L_5 = __this->___sliderBMI_8;
		NullCheck(L_5);
		float L_6;
		L_6 = VirtualFuncInvoker0< float >::Invoke(46 /* System.Single UnityEngine.UI.Slider::get_value() */, L_5);
		NullCheck(L_4);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(1), (double)((double)L_6));
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_7 = L_4;
		Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* L_8 = __this->___sliderSittingHeightStat_10;
		NullCheck(L_8);
		float L_9;
		L_9 = VirtualFuncInvoker0< float >::Invoke(46 /* System.Single UnityEngine.UI.Slider::get_value() */, L_8);
		NullCheck(L_7);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(2), (double)((double)L_9));
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_10 = L_7;
		Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* L_11 = __this->___sliderAge_11;
		NullCheck(L_11);
		float L_12;
		L_12 = VirtualFuncInvoker0< float >::Invoke(46 /* System.Single UnityEngine.UI.Slider::get_value() */, L_11);
		NullCheck(L_10);
		(L_10)->SetAt(static_cast<il2cpp_array_size_t>(3), (double)((double)L_12));
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_13 = L_10;
		Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* L_14 = __this->___sliderBMI_8;
		NullCheck(L_14);
		float L_15;
		L_15 = VirtualFuncInvoker0< float >::Invoke(46 /* System.Single UnityEngine.UI.Slider::get_value() */, L_14);
		Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* L_16 = __this->___sliderAge_11;
		NullCheck(L_16);
		float L_17;
		L_17 = VirtualFuncInvoker0< float >::Invoke(46 /* System.Single UnityEngine.UI.Slider::get_value() */, L_16);
		NullCheck(L_13);
		(L_13)->SetAt(static_cast<il2cpp_array_size_t>(4), (double)((double)((float)il2cpp_codegen_multiply(L_15, L_17))));
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_18 = L_13;
		NullCheck(L_18);
		(L_18)->SetAt(static_cast<il2cpp_array_size_t>(5), (double)(1.0));
		V_0 = L_18;
		// GameObject landmarks = new GameObject("landmarks");
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_19 = (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)il2cpp_codegen_object_new(GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var);
		NullCheck(L_19);
		GameObject__ctor_m37D512B05D292F954792225E6C6EEE95293A9B88(L_19, _stringLiteral931018A69BAE325939AFC4A7E983ED54CB0E60AC, NULL);
		V_1 = L_19;
		// for (int i = 0; i < predLandmarkNum; i++)
		V_2 = 0;
		goto IL_0190;
	}

IL_007c:
	{
		// var xcoord = landmarkData[i * 3 + 0][0] + calcCoords(Anths, pcaData[predAnthNum + i * 3 + 0]);
		List_1_t64FC2174A52DBC518FB499976FF0BA043E643411* L_20 = __this->___landmarkData_21;
		int32_t L_21 = V_2;
		NullCheck(L_20);
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_22;
		L_22 = List_1_get_Item_mBCF1516ECF7285668A96B426CD6C201113395AB2(L_20, ((int32_t)il2cpp_codegen_multiply(L_21, 3)), List_1_get_Item_mBCF1516ECF7285668A96B426CD6C201113395AB2_RuntimeMethod_var);
		NullCheck(L_22);
		int32_t L_23 = 0;
		double L_24 = (L_22)->GetAt(static_cast<il2cpp_array_size_t>(L_23));
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_25 = V_0;
		List_1_t64FC2174A52DBC518FB499976FF0BA043E643411* L_26 = __this->___pcaData_20;
		int32_t L_27 = __this->___predAnthNum_27;
		int32_t L_28 = V_2;
		NullCheck(L_26);
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_29;
		L_29 = List_1_get_Item_mBCF1516ECF7285668A96B426CD6C201113395AB2(L_26, ((int32_t)il2cpp_codegen_add(L_27, ((int32_t)il2cpp_codegen_multiply(L_28, 3)))), List_1_get_Item_mBCF1516ECF7285668A96B426CD6C201113395AB2_RuntimeMethod_var);
		float L_30;
		L_30 = FemaleSliderAdjust_calcCoords_mF80F88072C64F589EDE4A91ACE89B6FBCEA3F32A(__this, L_25, L_29, NULL);
		V_3 = ((double)il2cpp_codegen_add(L_24, ((double)L_30)));
		// var ycoord = landmarkData[i * 3 + 1][0] + calcCoords(Anths, pcaData[predAnthNum + i * 3 + 1]);
		List_1_t64FC2174A52DBC518FB499976FF0BA043E643411* L_31 = __this->___landmarkData_21;
		int32_t L_32 = V_2;
		NullCheck(L_31);
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_33;
		L_33 = List_1_get_Item_mBCF1516ECF7285668A96B426CD6C201113395AB2(L_31, ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_32, 3)), 1)), List_1_get_Item_mBCF1516ECF7285668A96B426CD6C201113395AB2_RuntimeMethod_var);
		NullCheck(L_33);
		int32_t L_34 = 0;
		double L_35 = (L_33)->GetAt(static_cast<il2cpp_array_size_t>(L_34));
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_36 = V_0;
		List_1_t64FC2174A52DBC518FB499976FF0BA043E643411* L_37 = __this->___pcaData_20;
		int32_t L_38 = __this->___predAnthNum_27;
		int32_t L_39 = V_2;
		NullCheck(L_37);
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_40;
		L_40 = List_1_get_Item_mBCF1516ECF7285668A96B426CD6C201113395AB2(L_37, ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_38, ((int32_t)il2cpp_codegen_multiply(L_39, 3)))), 1)), List_1_get_Item_mBCF1516ECF7285668A96B426CD6C201113395AB2_RuntimeMethod_var);
		float L_41;
		L_41 = FemaleSliderAdjust_calcCoords_mF80F88072C64F589EDE4A91ACE89B6FBCEA3F32A(__this, L_36, L_40, NULL);
		V_4 = ((double)il2cpp_codegen_add(L_35, ((double)L_41)));
		// var zcoord = landmarkData[i * 3 + 2][0] + calcCoords(Anths, pcaData[predAnthNum + i * 3 + 2]);
		List_1_t64FC2174A52DBC518FB499976FF0BA043E643411* L_42 = __this->___landmarkData_21;
		int32_t L_43 = V_2;
		NullCheck(L_42);
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_44;
		L_44 = List_1_get_Item_mBCF1516ECF7285668A96B426CD6C201113395AB2(L_42, ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_43, 3)), 2)), List_1_get_Item_mBCF1516ECF7285668A96B426CD6C201113395AB2_RuntimeMethod_var);
		NullCheck(L_44);
		int32_t L_45 = 0;
		double L_46 = (L_44)->GetAt(static_cast<il2cpp_array_size_t>(L_45));
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_47 = V_0;
		List_1_t64FC2174A52DBC518FB499976FF0BA043E643411* L_48 = __this->___pcaData_20;
		int32_t L_49 = __this->___predAnthNum_27;
		int32_t L_50 = V_2;
		NullCheck(L_48);
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_51;
		L_51 = List_1_get_Item_mBCF1516ECF7285668A96B426CD6C201113395AB2(L_48, ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_49, ((int32_t)il2cpp_codegen_multiply(L_50, 3)))), 2)), List_1_get_Item_mBCF1516ECF7285668A96B426CD6C201113395AB2_RuntimeMethod_var);
		float L_52;
		L_52 = FemaleSliderAdjust_calcCoords_mF80F88072C64F589EDE4A91ACE89B6FBCEA3F32A(__this, L_47, L_51, NULL);
		V_5 = ((double)il2cpp_codegen_add(L_46, ((double)L_52)));
		// GameObject sphere = GameObject.CreatePrimitive(PrimitiveType.Sphere);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_53;
		L_53 = GameObject_CreatePrimitive_m13C0A691E679A83DD595913200A1DD9A906EB47B(0, NULL);
		// sphere.transform.position = new Vector3((float)xcoord, (float)ycoord, (float)zcoord);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_54 = L_53;
		NullCheck(L_54);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_55;
		L_55 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_54, NULL);
		double L_56 = V_3;
		double L_57 = V_4;
		double L_58 = V_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_59;
		memset((&L_59), 0, sizeof(L_59));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_59), ((float)L_56), ((float)L_57), ((float)L_58), /*hidden argument*/NULL);
		NullCheck(L_55);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_55, L_59, NULL);
		// sphere.GetComponent<Renderer>().material.color = Color.green;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_60 = L_54;
		NullCheck(L_60);
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_61;
		L_61 = GameObject_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_m026EB44DB6238F13E2AFBECF1FBBE924CB1B040A(L_60, GameObject_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_m026EB44DB6238F13E2AFBECF1FBBE924CB1B040A_RuntimeMethod_var);
		NullCheck(L_61);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_62;
		L_62 = Renderer_get_material_m5BA2A00816C4CC66580D4B2E409CF10718C15656(L_61, NULL);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_63;
		L_63 = Color_get_green_mEB001F2CD8C68C6BBAEF9101990B779D3AA2A6EF_inline(NULL);
		NullCheck(L_62);
		Material_set_color_m5C32DEBB215FF9EE35E7B575297D8C2F29CC2A2D(L_62, L_63, NULL);
		// sphere.GetComponent<MeshRenderer>().shadowCastingMode = UnityEngine.Rendering.ShadowCastingMode.Off;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_64 = L_60;
		NullCheck(L_64);
		MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* L_65;
		L_65 = GameObject_GetComponent_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_m7FF948365C38BC39333D82B235A7C4EAD219960D(L_64, GameObject_GetComponent_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_m7FF948365C38BC39333D82B235A7C4EAD219960D_RuntimeMethod_var);
		NullCheck(L_65);
		Renderer_set_shadowCastingMode_mB0CD3D153E43044388AEFF7AEFDA93E80EB36D11(L_65, 0, NULL);
		// sphere.transform.localScale += new Vector3(20, 20, 20);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_66 = L_64;
		NullCheck(L_66);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_67;
		L_67 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_66, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_68 = L_67;
		NullCheck(L_68);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_69;
		L_69 = Transform_get_localScale_m804A002A53A645CDFCD15BB0F37209162720363F(L_68, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_70;
		memset((&L_70), 0, sizeof(L_70));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_70), (20.0f), (20.0f), (20.0f), /*hidden argument*/NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_71;
		L_71 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_69, L_70, NULL);
		NullCheck(L_68);
		Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633(L_68, L_71, NULL);
		// sphere.transform.parent = landmarks.transform;
		NullCheck(L_66);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_72;
		L_72 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_66, NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_73 = V_1;
		NullCheck(L_73);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_74;
		L_74 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_73, NULL);
		NullCheck(L_72);
		Transform_set_parent_m9BD5E563B539DD5BEC342736B03F97B38A243234(L_72, L_74, NULL);
		// for (int i = 0; i < predLandmarkNum; i++)
		int32_t L_75 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_75, 1));
	}

IL_0190:
	{
		// for (int i = 0; i < predLandmarkNum; i++)
		int32_t L_76 = V_2;
		int32_t L_77 = __this->___predLandmarkNum_28;
		if ((((int32_t)L_76) < ((int32_t)L_77)))
		{
			goto IL_007c;
		}
	}
	{
		// landmarks.transform.position = model.transform.position;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_78 = V_1;
		NullCheck(L_78);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_79;
		L_79 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_78, NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_80 = __this->___model_4;
		NullCheck(L_80);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_81;
		L_81 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_80, NULL);
		NullCheck(L_81);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_82;
		L_82 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_81, NULL);
		NullCheck(L_79);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_79, L_82, NULL);
		// landmarks.transform.localScale = new Vector3((float)0.001, (float)0.001, (float)0.001);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_83 = V_1;
		NullCheck(L_83);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_84;
		L_84 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_83, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_85;
		memset((&L_85), 0, sizeof(L_85));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_85), (0.00100000005f), (0.00100000005f), (0.00100000005f), /*hidden argument*/NULL);
		NullCheck(L_84);
		Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633(L_84, L_85, NULL);
		// landmarks.transform.parent = model.transform;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_86 = V_1;
		NullCheck(L_86);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_87;
		L_87 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_86, NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_88 = __this->___model_4;
		NullCheck(L_88);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_89;
		L_89 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_88, NULL);
		NullCheck(L_87);
		Transform_set_parent_m9BD5E563B539DD5BEC342736B03F97B38A243234(L_87, L_89, NULL);
		// landmarks.transform.localRotation = Quaternion.Euler(0, 0, -180);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_90 = V_1;
		NullCheck(L_90);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_91;
		L_91 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_90, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_92;
		L_92 = Quaternion_Euler_m9262AB29E3E9CE94EF71051F38A28E82AEC73F90_inline((0.0f), (0.0f), (-180.0f), NULL);
		NullCheck(L_91);
		Transform_set_localRotation_mAB4A011D134BA58AB780BECC0025CA65F16185FA(L_91, L_92, NULL);
		// }
		return;
	}
}
// System.Void FemaleSliderAdjust::rotate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FemaleSliderAdjust_rotate_mB35EA049F1ED491A1A76AB099852C6E41EEA75D5 (FemaleSliderAdjust_t6CC4FA9B9643A8D49EE97BE27C96A8348113D837* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6E1CE004DBBF4E6D83804FAD4823454546E65F9D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF0A265B5C4EFB991FCC9024BE54A90F0BCF065C2);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		// model.transform.Rotate(new Vector3(0, 0, 1), sliderRotation.value);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___model_4;
		NullCheck(L_0);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_0, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		memset((&L_2), 0, sizeof(L_2));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_2), (0.0f), (0.0f), (1.0f), /*hidden argument*/NULL);
		Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* L_3 = __this->___sliderRotation_12;
		NullCheck(L_3);
		float L_4;
		L_4 = VirtualFuncInvoker0< float >::Invoke(46 /* System.Single UnityEngine.UI.Slider::get_value() */, L_3);
		NullCheck(L_1);
		Transform_Rotate_m35B44707FE16FF8015D519D8C162C0B4A85D6D1F(L_1, L_2, L_4, NULL);
		// lbRotation.text = "Rotation: " + Truncate(sliderRotation.value, 2).ToString() + " degrees";
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_5 = __this->___lbRotation_17;
		Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* L_6 = __this->___sliderRotation_12;
		NullCheck(L_6);
		float L_7;
		L_7 = VirtualFuncInvoker0< float >::Invoke(46 /* System.Single UnityEngine.UI.Slider::get_value() */, L_6);
		float L_8;
		L_8 = FemaleSliderAdjust_Truncate_mD0D850A434668EC14072B03E1C907731C10365DE(L_7, 2, NULL);
		V_0 = L_8;
		String_t* L_9;
		L_9 = Single_ToString_mE282EDA9CA4F7DF88432D807732837A629D04972((&V_0), NULL);
		String_t* L_10;
		L_10 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(_stringLiteralF0A265B5C4EFB991FCC9024BE54A90F0BCF065C2, L_9, _stringLiteral6E1CE004DBBF4E6D83804FAD4823454546E65F9D, NULL);
		NullCheck(L_5);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_5, L_10);
		// }
		return;
	}
}
// System.Single FemaleSliderAdjust::Truncate(System.Single,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float FemaleSliderAdjust_Truncate_mD0D850A434668EC14072B03E1C907731C10365DE (float ___value0, int32_t ___digits1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	double V_0 = 0.0;
	{
		// double mult = Math.Pow(10.0, digits);
		int32_t L_0 = ___digits1;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_1;
		L_1 = Math_Pow_mEAE651F0858203FBE12B72B6A53951BBD0FB5265((10.0), ((double)L_0), NULL);
		V_0 = L_1;
		// double result = Math.Truncate(mult * value) / mult;
		double L_2 = V_0;
		float L_3 = ___value0;
		double L_4;
		L_4 = Math_Truncate_mE66B1AD68C17D27675DE0CB74643374F9EDB649C(((double)il2cpp_codegen_multiply(L_2, ((double)L_3))), NULL);
		double L_5 = V_0;
		// return (float)result;
		return ((float)((double)(L_4/L_5)));
	}
}
// System.Void FemaleSliderAdjust::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FemaleSliderAdjust__ctor_m7685F252120048393908408D75D26FD83ED29729 (FemaleSliderAdjust_t6CC4FA9B9643A8D49EE97BE27C96A8348113D837* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_mA3C3860EDE2CDD08BBD68C389377BC89D029D968_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mF1433DDB1AE70FFD55B9A5791233ED33F24D45A9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t64FC2174A52DBC518FB499976FF0BA043E643411_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// List<double[]> pcaData = new List<double[]>();
		List_1_t64FC2174A52DBC518FB499976FF0BA043E643411* L_0 = (List_1_t64FC2174A52DBC518FB499976FF0BA043E643411*)il2cpp_codegen_object_new(List_1_t64FC2174A52DBC518FB499976FF0BA043E643411_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_mF1433DDB1AE70FFD55B9A5791233ED33F24D45A9(L_0, List_1__ctor_mF1433DDB1AE70FFD55B9A5791233ED33F24D45A9_RuntimeMethod_var);
		__this->___pcaData_20 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___pcaData_20), (void*)L_0);
		// List<double[]> landmarkData = new List<double[]>();
		List_1_t64FC2174A52DBC518FB499976FF0BA043E643411* L_1 = (List_1_t64FC2174A52DBC518FB499976FF0BA043E643411*)il2cpp_codegen_object_new(List_1_t64FC2174A52DBC518FB499976FF0BA043E643411_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		List_1__ctor_mF1433DDB1AE70FFD55B9A5791233ED33F24D45A9(L_1, List_1__ctor_mF1433DDB1AE70FFD55B9A5791233ED33F24D45A9_RuntimeMethod_var);
		__this->___landmarkData_21 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___landmarkData_21), (void*)L_1);
		// Dictionary<string, int> indexMap = new Dictionary<string, int>();
		Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588* L_2 = (Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588*)il2cpp_codegen_object_new(Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		Dictionary_2__ctor_mA3C3860EDE2CDD08BBD68C389377BC89D029D968(L_2, Dictionary_2__ctor_mA3C3860EDE2CDD08BBD68C389377BC89D029D968_RuntimeMethod_var);
		__this->___indexMap_22 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___indexMap_22), (void*)L_2);
		// int predAnthNum = 51;
		__this->___predAnthNum_27 = ((int32_t)51);
		// int predLandmarkNum = 93;
		__this->___predLandmarkNum_28 = ((int32_t)93);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// UnityEngine.Vector3[] MaleSliderAdjust::getCorrectVertices()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* MaleSliderAdjust_getCorrectVertices_mE0A0682BB1A0AA8248CB0DC0AED7743BD71732DA (MaleSliderAdjust_tA7DA9AE649A08FBB56C79BDAD0CD6D563D1776F4* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral00B28FF06B788B9B67C6B259800F404F9F3761FD);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB);
		s_Il2CppMethodInitialized = true;
	}
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* V_0 = NULL;
	int32_t V_1 = 0;
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* V_2 = NULL;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_5;
	memset((&V_5), 0, sizeof(V_5));
	{
		// string[] data = correctVertexOrderDataAsset.text.Split(new String[] { ",", "\n" }, StringSplitOptions.None);
		TextAsset_t2C64E93DA366D9DE5A8209E1802FA4884AC1BD69* L_0 = __this->___correctVertexOrderDataAsset_7;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = TextAsset_get_text_m36846042E3CF3D9DD337BF3F8B2B1902D10C8FD9(L_0, NULL);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_2 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)2);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_3 = L_2;
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, _stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_4 = L_3;
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, _stringLiteral00B28FF06B788B9B67C6B259800F404F9F3761FD);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)_stringLiteral00B28FF06B788B9B67C6B259800F404F9F3761FD);
		NullCheck(L_1);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_5;
		L_5 = String_Split_m03F46561E2DF46D1E3AE749A77706EFC2F6488F4(L_1, L_4, 0, NULL);
		V_0 = L_5;
		// int numCols = 3;
		V_1 = 3;
		// int numRows = (data.Length - 1) / numCols;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_6 = V_0;
		NullCheck(L_6);
		int32_t L_7 = V_1;
		// Vector3[] correctOrderVertices = new Vector3[numRows];
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_8 = (Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C*)(Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C*)SZArrayNew(Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C_il2cpp_TypeInfo_var, (uint32_t)((int32_t)(((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_6)->max_length)), 1))/L_7)));
		V_2 = L_8;
		// for (int i = 0, k = 0; i < data.Length - 1; i += numCols, k++)
		V_3 = 0;
		// for (int i = 0, k = 0; i < data.Length - 1; i += numCols, k++)
		V_4 = 0;
		goto IL_008e;
	}

IL_003e:
	{
		// Vector3 curr = new Vector3();
		il2cpp_codegen_initobj((&V_5), sizeof(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2));
		// curr.x = (float)Convert.ToDouble(data[i]);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_9 = V_0;
		int32_t L_10 = V_3;
		NullCheck(L_9);
		int32_t L_11 = L_10;
		String_t* L_12 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		double L_13;
		L_13 = Convert_ToDouble_m933DFCA7F5B65845162738829A173E79D81ED4B3(L_12, NULL);
		(&V_5)->___x_2 = ((float)L_13);
		// curr.y = (float)Convert.ToDouble(data[i + 1]);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_14 = V_0;
		int32_t L_15 = V_3;
		NullCheck(L_14);
		int32_t L_16 = ((int32_t)il2cpp_codegen_add(L_15, 1));
		String_t* L_17 = (L_14)->GetAt(static_cast<il2cpp_array_size_t>(L_16));
		double L_18;
		L_18 = Convert_ToDouble_m933DFCA7F5B65845162738829A173E79D81ED4B3(L_17, NULL);
		(&V_5)->___y_3 = ((float)L_18);
		// curr.z = (float)Convert.ToDouble(data[i + 2]);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_19 = V_0;
		int32_t L_20 = V_3;
		NullCheck(L_19);
		int32_t L_21 = ((int32_t)il2cpp_codegen_add(L_20, 2));
		String_t* L_22 = (L_19)->GetAt(static_cast<il2cpp_array_size_t>(L_21));
		double L_23;
		L_23 = Convert_ToDouble_m933DFCA7F5B65845162738829A173E79D81ED4B3(L_22, NULL);
		(&V_5)->___z_4 = ((float)L_23);
		// correctOrderVertices[k] = curr;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_24 = V_2;
		int32_t L_25 = V_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_26 = V_5;
		NullCheck(L_24);
		(L_24)->SetAt(static_cast<il2cpp_array_size_t>(L_25), (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2)L_26);
		// for (int i = 0, k = 0; i < data.Length - 1; i += numCols, k++)
		int32_t L_27 = V_3;
		int32_t L_28 = V_1;
		V_3 = ((int32_t)il2cpp_codegen_add(L_27, L_28));
		// for (int i = 0, k = 0; i < data.Length - 1; i += numCols, k++)
		int32_t L_29 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_29, 1));
	}

IL_008e:
	{
		// for (int i = 0, k = 0; i < data.Length - 1; i += numCols, k++)
		int32_t L_30 = V_3;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_31 = V_0;
		NullCheck(L_31);
		if ((((int32_t)L_30) < ((int32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_31)->max_length)), 1)))))
		{
			goto IL_003e;
		}
	}
	{
		// return correctOrderVertices;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_32 = V_2;
		return L_32;
	}
}
// System.Void MaleSliderAdjust::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MaleSliderAdjust_Start_mB6641914AD853D34C3172551779C99365FFB6E50 (MaleSliderAdjust_tA7DA9AE649A08FBB56C79BDAD0CD6D563D1776F4* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_set_Item_m038480C0EC13713DBD89A53BE69FF0359501B4C2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisMeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5_mDF6525BCE37B444313BE0AA2305BDF4EB8B92FE8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m5D83C79B12616961D8147BB59AD5E55683361E85_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mC19C5EEC6894CA8390C854EDC3428C93A0BD59F3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_ToArray_m91B6A76F83EF0F01FE14A5BAD9D99BDDFC9499F3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m4F495AFEC1141AA7E02729E3105CB569F2CEAD34_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t495F03F47D827883530F951D563C0BB7340E5995_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDB5B55A9B215F744DB82517864984D073F2E8F8C);
		s_Il2CppMethodInitialized = true;
	}
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* V_0 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* V_1 = NULL;
	int32_t V_2 = 0;
	String_t* V_3 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* V_4 = NULL;
	List_1_t495F03F47D827883530F951D563C0BB7340E5995* V_5 = NULL;
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	int32_t V_8 = 0;
	List_1_t495F03F47D827883530F951D563C0BB7340E5995* V_9 = NULL;
	{
		// var pcaDataStr = pcaDataAsset.text.Split(new char[] { '\n' });
		TextAsset_t2C64E93DA366D9DE5A8209E1802FA4884AC1BD69* L_0 = __this->___pcaDataAsset_5;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = TextAsset_get_text_m36846042E3CF3D9DD337BF3F8B2B1902D10C8FD9(L_0, NULL);
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_2 = (CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB*)(CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB*)SZArrayNew(CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB_il2cpp_TypeInfo_var, (uint32_t)1);
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_3 = L_2;
		NullCheck(L_3);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(0), (Il2CppChar)((int32_t)10));
		NullCheck(L_1);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_4;
		L_4 = String_Split_m101D35FEC86371D2BB4E3480F6F896880093B2E9(L_1, L_3, NULL);
		V_0 = L_4;
		// for (int ncnt = 0; ncnt < pcaDataStr.Length; ncnt++)
		V_2 = 0;
		goto IL_00b2;
	}

IL_0023:
	{
		// var aline = pcaDataStr[ncnt];
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_5 = V_0;
		int32_t L_6 = V_2;
		NullCheck(L_5);
		int32_t L_7 = L_6;
		String_t* L_8 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		V_3 = L_8;
		// string[] linedata = aline.Split(new char[] { ',' });
		String_t* L_9 = V_3;
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_10 = (CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB*)(CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB*)SZArrayNew(CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB_il2cpp_TypeInfo_var, (uint32_t)1);
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_11 = L_10;
		NullCheck(L_11);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(0), (Il2CppChar)((int32_t)44));
		NullCheck(L_9);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_12;
		L_12 = String_Split_m101D35FEC86371D2BB4E3480F6F896880093B2E9(L_9, L_11, NULL);
		V_4 = L_12;
		// if (aline == "") continue;
		String_t* L_13 = V_3;
		bool L_14;
		L_14 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_13, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, NULL);
		if (L_14)
		{
			goto IL_00ae;
		}
	}
	{
		// List<double> adata = new List<double>();
		List_1_t495F03F47D827883530F951D563C0BB7340E5995* L_15 = (List_1_t495F03F47D827883530F951D563C0BB7340E5995*)il2cpp_codegen_object_new(List_1_t495F03F47D827883530F951D563C0BB7340E5995_il2cpp_TypeInfo_var);
		NullCheck(L_15);
		List_1__ctor_m4F495AFEC1141AA7E02729E3105CB569F2CEAD34(L_15, List_1__ctor_m4F495AFEC1141AA7E02729E3105CB569F2CEAD34_RuntimeMethod_var);
		V_5 = L_15;
		// for (int i = 0; i < linedata.Length; i++)
		V_6 = 0;
		goto IL_0094;
	}

IL_0053:
	{
		// if (linedata[i].Contains("\r"))
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_16 = V_4;
		int32_t L_17 = V_6;
		NullCheck(L_16);
		int32_t L_18 = L_17;
		String_t* L_19 = (L_16)->GetAt(static_cast<il2cpp_array_size_t>(L_18));
		NullCheck(L_19);
		bool L_20;
		L_20 = String_Contains_m6D77B121FADA7CA5F397C0FABB65DA62DF03B6C3(L_19, _stringLiteralDB5B55A9B215F744DB82517864984D073F2E8F8C, NULL);
		if (!L_20)
		{
			goto IL_007d;
		}
	}
	{
		// linedata[i] = linedata[i].Replace("\r", string.Empty);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_21 = V_4;
		int32_t L_22 = V_6;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_23 = V_4;
		int32_t L_24 = V_6;
		NullCheck(L_23);
		int32_t L_25 = L_24;
		String_t* L_26 = (L_23)->GetAt(static_cast<il2cpp_array_size_t>(L_25));
		String_t* L_27 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		NullCheck(L_26);
		String_t* L_28;
		L_28 = String_Replace_mABDB7003A1D0AEDCAE9FF85E3DFFFBA752D2A166(L_26, _stringLiteralDB5B55A9B215F744DB82517864984D073F2E8F8C, L_27, NULL);
		NullCheck(L_21);
		ArrayElementTypeCheck (L_21, L_28);
		(L_21)->SetAt(static_cast<il2cpp_array_size_t>(L_22), (String_t*)L_28);
	}

IL_007d:
	{
		// adata.Add(Convert.ToDouble(linedata[i]));
		List_1_t495F03F47D827883530F951D563C0BB7340E5995* L_29 = V_5;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_30 = V_4;
		int32_t L_31 = V_6;
		NullCheck(L_30);
		int32_t L_32 = L_31;
		String_t* L_33 = (L_30)->GetAt(static_cast<il2cpp_array_size_t>(L_32));
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		double L_34;
		L_34 = Convert_ToDouble_m933DFCA7F5B65845162738829A173E79D81ED4B3(L_33, NULL);
		NullCheck(L_29);
		List_1_Add_m5D83C79B12616961D8147BB59AD5E55683361E85_inline(L_29, L_34, List_1_Add_m5D83C79B12616961D8147BB59AD5E55683361E85_RuntimeMethod_var);
		// for (int i = 0; i < linedata.Length; i++)
		int32_t L_35 = V_6;
		V_6 = ((int32_t)il2cpp_codegen_add(L_35, 1));
	}

IL_0094:
	{
		// for (int i = 0; i < linedata.Length; i++)
		int32_t L_36 = V_6;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_37 = V_4;
		NullCheck(L_37);
		if ((((int32_t)L_36) < ((int32_t)((int32_t)(((RuntimeArray*)L_37)->max_length)))))
		{
			goto IL_0053;
		}
	}
	{
		// pcaData.Add(adata.ToArray());
		List_1_t64FC2174A52DBC518FB499976FF0BA043E643411* L_38 = __this->___pcaData_20;
		List_1_t495F03F47D827883530F951D563C0BB7340E5995* L_39 = V_5;
		NullCheck(L_39);
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_40;
		L_40 = List_1_ToArray_m91B6A76F83EF0F01FE14A5BAD9D99BDDFC9499F3(L_39, List_1_ToArray_m91B6A76F83EF0F01FE14A5BAD9D99BDDFC9499F3_RuntimeMethod_var);
		NullCheck(L_38);
		List_1_Add_mC19C5EEC6894CA8390C854EDC3428C93A0BD59F3_inline(L_38, L_40, List_1_Add_mC19C5EEC6894CA8390C854EDC3428C93A0BD59F3_RuntimeMethod_var);
	}

IL_00ae:
	{
		// for (int ncnt = 0; ncnt < pcaDataStr.Length; ncnt++)
		int32_t L_41 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_41, 1));
	}

IL_00b2:
	{
		// for (int ncnt = 0; ncnt < pcaDataStr.Length; ncnt++)
		int32_t L_42 = V_2;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_43 = V_0;
		NullCheck(L_43);
		if ((((int32_t)L_42) < ((int32_t)((int32_t)(((RuntimeArray*)L_43)->max_length)))))
		{
			goto IL_0023;
		}
	}
	{
		// mesh = model.GetComponent<MeshFilter>().mesh;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_44 = __this->___model_4;
		NullCheck(L_44);
		MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5* L_45;
		L_45 = GameObject_GetComponent_TisMeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5_mDF6525BCE37B444313BE0AA2305BDF4EB8B92FE8(L_44, GameObject_GetComponent_TisMeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5_mDF6525BCE37B444313BE0AA2305BDF4EB8B92FE8_RuntimeMethod_var);
		NullCheck(L_45);
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_46;
		L_46 = MeshFilter_get_mesh_m13172D7EF6682861971817D0A47EE2BE49FBCB1C(L_45, NULL);
		__this->___mesh_23 = L_46;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___mesh_23), (void*)L_46);
		// mesh.MarkDynamic();
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_47 = __this->___mesh_23;
		NullCheck(L_47);
		Mesh_MarkDynamic_m718089940F240AFE625D6DC9DA4E6F20229CC322(L_47, NULL);
		// vertices = mesh.vertices;
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_48 = __this->___mesh_23;
		NullCheck(L_48);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_49;
		L_49 = Mesh_get_vertices_mA3577F1B08EDDD54E26AEB3F8FFE4EC247D2ABB9(L_48, NULL);
		__this->___vertices_24 = L_49;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___vertices_24), (void*)L_49);
		// correctVertices = getCorrectVertices();
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_50;
		L_50 = MaleSliderAdjust_getCorrectVertices_mE0A0682BB1A0AA8248CB0DC0AED7743BD71732DA(__this, NULL);
		__this->___correctVertices_25 = L_50;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___correctVertices_25), (void*)L_50);
		// for (int i = 0; i < vertices.Length; i++)
		V_7 = 0;
		goto IL_017a;
	}

IL_00fe:
	{
		// indexMap[vertices[i].x.ToString() + " " +
		//          vertices[i].y.ToString() + " " +
		//          vertices[i].z.ToString()] = i;
		Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588* L_51 = __this->___indexMap_22;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_52 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)5);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_53 = L_52;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_54 = __this->___vertices_24;
		int32_t L_55 = V_7;
		NullCheck(L_54);
		float* L_56 = (&((L_54)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_55)))->___x_2);
		String_t* L_57;
		L_57 = Single_ToString_mE282EDA9CA4F7DF88432D807732837A629D04972(L_56, NULL);
		NullCheck(L_53);
		ArrayElementTypeCheck (L_53, L_57);
		(L_53)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)L_57);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_58 = L_53;
		NullCheck(L_58);
		ArrayElementTypeCheck (L_58, _stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745);
		(L_58)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)_stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_59 = L_58;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_60 = __this->___vertices_24;
		int32_t L_61 = V_7;
		NullCheck(L_60);
		float* L_62 = (&((L_60)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_61)))->___y_3);
		String_t* L_63;
		L_63 = Single_ToString_mE282EDA9CA4F7DF88432D807732837A629D04972(L_62, NULL);
		NullCheck(L_59);
		ArrayElementTypeCheck (L_59, L_63);
		(L_59)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)L_63);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_64 = L_59;
		NullCheck(L_64);
		ArrayElementTypeCheck (L_64, _stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745);
		(L_64)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)_stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_65 = L_64;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_66 = __this->___vertices_24;
		int32_t L_67 = V_7;
		NullCheck(L_66);
		float* L_68 = (&((L_66)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_67)))->___z_4);
		String_t* L_69;
		L_69 = Single_ToString_mE282EDA9CA4F7DF88432D807732837A629D04972(L_68, NULL);
		NullCheck(L_65);
		ArrayElementTypeCheck (L_65, L_69);
		(L_65)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)L_69);
		String_t* L_70;
		L_70 = String_Concat_m647EBF831F54B6DF7D5AFA5FD012CF4EE7571B6A(L_65, NULL);
		int32_t L_71 = V_7;
		NullCheck(L_51);
		Dictionary_2_set_Item_m038480C0EC13713DBD89A53BE69FF0359501B4C2(L_51, L_70, L_71, Dictionary_2_set_Item_m038480C0EC13713DBD89A53BE69FF0359501B4C2_RuntimeMethod_var);
		// for (int i = 0; i < vertices.Length; i++)
		int32_t L_72 = V_7;
		V_7 = ((int32_t)il2cpp_codegen_add(L_72, 1));
	}

IL_017a:
	{
		// for (int i = 0; i < vertices.Length; i++)
		int32_t L_73 = V_7;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_74 = __this->___vertices_24;
		NullCheck(L_74);
		if ((((int32_t)L_73) < ((int32_t)((int32_t)(((RuntimeArray*)L_74)->max_length)))))
		{
			goto IL_00fe;
		}
	}
	{
		// var landmarkStr = meanLandmarkDataAsset.text.Split(new char[] { '\n' });
		TextAsset_t2C64E93DA366D9DE5A8209E1802FA4884AC1BD69* L_75 = __this->___meanLandmarkDataAsset_6;
		NullCheck(L_75);
		String_t* L_76;
		L_76 = TextAsset_get_text_m36846042E3CF3D9DD337BF3F8B2B1902D10C8FD9(L_75, NULL);
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_77 = (CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB*)(CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB*)SZArrayNew(CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB_il2cpp_TypeInfo_var, (uint32_t)1);
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_78 = L_77;
		NullCheck(L_78);
		(L_78)->SetAt(static_cast<il2cpp_array_size_t>(0), (Il2CppChar)((int32_t)10));
		NullCheck(L_76);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_79;
		L_79 = String_Split_m101D35FEC86371D2BB4E3480F6F896880093B2E9(L_76, L_78, NULL);
		V_1 = L_79;
		// for (int ncnt = 0; ncnt < predLandmarkNum * 3; ncnt++)
		V_8 = 0;
		goto IL_01d9;
	}

IL_01aa:
	{
		// List<double> adata = new List<double>();
		List_1_t495F03F47D827883530F951D563C0BB7340E5995* L_80 = (List_1_t495F03F47D827883530F951D563C0BB7340E5995*)il2cpp_codegen_object_new(List_1_t495F03F47D827883530F951D563C0BB7340E5995_il2cpp_TypeInfo_var);
		NullCheck(L_80);
		List_1__ctor_m4F495AFEC1141AA7E02729E3105CB569F2CEAD34(L_80, List_1__ctor_m4F495AFEC1141AA7E02729E3105CB569F2CEAD34_RuntimeMethod_var);
		V_9 = L_80;
		// adata.Add(Convert.ToDouble(landmarkStr[ncnt]));
		List_1_t495F03F47D827883530F951D563C0BB7340E5995* L_81 = V_9;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_82 = V_1;
		int32_t L_83 = V_8;
		NullCheck(L_82);
		int32_t L_84 = L_83;
		String_t* L_85 = (L_82)->GetAt(static_cast<il2cpp_array_size_t>(L_84));
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		double L_86;
		L_86 = Convert_ToDouble_m933DFCA7F5B65845162738829A173E79D81ED4B3(L_85, NULL);
		NullCheck(L_81);
		List_1_Add_m5D83C79B12616961D8147BB59AD5E55683361E85_inline(L_81, L_86, List_1_Add_m5D83C79B12616961D8147BB59AD5E55683361E85_RuntimeMethod_var);
		// landmarkData.Add(adata.ToArray());
		List_1_t64FC2174A52DBC518FB499976FF0BA043E643411* L_87 = __this->___landmarkData_21;
		List_1_t495F03F47D827883530F951D563C0BB7340E5995* L_88 = V_9;
		NullCheck(L_88);
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_89;
		L_89 = List_1_ToArray_m91B6A76F83EF0F01FE14A5BAD9D99BDDFC9499F3(L_88, List_1_ToArray_m91B6A76F83EF0F01FE14A5BAD9D99BDDFC9499F3_RuntimeMethod_var);
		NullCheck(L_87);
		List_1_Add_mC19C5EEC6894CA8390C854EDC3428C93A0BD59F3_inline(L_87, L_89, List_1_Add_mC19C5EEC6894CA8390C854EDC3428C93A0BD59F3_RuntimeMethod_var);
		// for (int ncnt = 0; ncnt < predLandmarkNum * 3; ncnt++)
		int32_t L_90 = V_8;
		V_8 = ((int32_t)il2cpp_codegen_add(L_90, 1));
	}

IL_01d9:
	{
		// for (int ncnt = 0; ncnt < predLandmarkNum * 3; ncnt++)
		int32_t L_91 = V_8;
		int32_t L_92 = __this->___predLandmarkNum_28;
		if ((((int32_t)L_91) < ((int32_t)((int32_t)il2cpp_codegen_multiply(L_92, 3)))))
		{
			goto IL_01aa;
		}
	}
	{
		// meanVertices = correctVertices;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_93 = __this->___correctVertices_25;
		__this->___meanVertices_26 = L_93;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___meanVertices_26), (void*)L_93);
		// }
		return;
	}
}
// System.Void MaleSliderAdjust::ModelAnthroUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MaleSliderAdjust_ModelAnthroUpdate_mCC1661034FA4E6D4930DF25D8F995323F37DA064 (MaleSliderAdjust_tA7DA9AE649A08FBB56C79BDAD0CD6D563D1776F4* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_mE01750B88D9A581E9196F3444952F7592E862592_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mBCF1516ECF7285668A96B426CD6C201113395AB2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0487849E743EE7A8A4466475F43E21864F0F1F48);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7B4264F4BD0983833238F00348CA2152EA160369);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8A0FEFCF616268A7D2AEEE23BA07B44ADB72452E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral931018A69BAE325939AFC4A7E983ED54CB0E60AC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB281D5412E3C8F31FEC213B8C136C5EFC40702AB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDB81FEF0286C64E4137586C08428BE38969C7CF7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEF9AA825E2BF1AA80FEE50E865D31D82FAE268D4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF511102AF85AA2E3EFF8375103C2269E3633C128);
		s_Il2CppMethodInitialized = true;
	}
	DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	float V_4 = 0.0f;
	float V_5 = 0.0f;
	float V_6 = 0.0f;
	float V_7 = 0.0f;
	{
		// var Anths = new double[] {
		//     sliderStature.value,
		//     sliderBMI.value,
		//     sliderSittingHeightStat.value,
		//     sliderAge.value,
		//     sliderBMI.value*sliderAge.value,
		//     1.0
		// };
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_0 = (DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE*)(DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE*)SZArrayNew(DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE_il2cpp_TypeInfo_var, (uint32_t)6);
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_1 = L_0;
		Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* L_2 = __this->___sliderStature_9;
		NullCheck(L_2);
		float L_3;
		L_3 = VirtualFuncInvoker0< float >::Invoke(46 /* System.Single UnityEngine.UI.Slider::get_value() */, L_2);
		NullCheck(L_1);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (double)((double)L_3));
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_4 = L_1;
		Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* L_5 = __this->___sliderBMI_8;
		NullCheck(L_5);
		float L_6;
		L_6 = VirtualFuncInvoker0< float >::Invoke(46 /* System.Single UnityEngine.UI.Slider::get_value() */, L_5);
		NullCheck(L_4);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(1), (double)((double)L_6));
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_7 = L_4;
		Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* L_8 = __this->___sliderSittingHeightStat_10;
		NullCheck(L_8);
		float L_9;
		L_9 = VirtualFuncInvoker0< float >::Invoke(46 /* System.Single UnityEngine.UI.Slider::get_value() */, L_8);
		NullCheck(L_7);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(2), (double)((double)L_9));
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_10 = L_7;
		Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* L_11 = __this->___sliderAge_11;
		NullCheck(L_11);
		float L_12;
		L_12 = VirtualFuncInvoker0< float >::Invoke(46 /* System.Single UnityEngine.UI.Slider::get_value() */, L_11);
		NullCheck(L_10);
		(L_10)->SetAt(static_cast<il2cpp_array_size_t>(3), (double)((double)L_12));
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_13 = L_10;
		Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* L_14 = __this->___sliderBMI_8;
		NullCheck(L_14);
		float L_15;
		L_15 = VirtualFuncInvoker0< float >::Invoke(46 /* System.Single UnityEngine.UI.Slider::get_value() */, L_14);
		Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* L_16 = __this->___sliderAge_11;
		NullCheck(L_16);
		float L_17;
		L_17 = VirtualFuncInvoker0< float >::Invoke(46 /* System.Single UnityEngine.UI.Slider::get_value() */, L_16);
		NullCheck(L_13);
		(L_13)->SetAt(static_cast<il2cpp_array_size_t>(4), (double)((double)((float)il2cpp_codegen_multiply(L_15, L_17))));
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_18 = L_13;
		NullCheck(L_18);
		(L_18)->SetAt(static_cast<il2cpp_array_size_t>(5), (double)(1.0));
		V_0 = L_18;
		// var skipNum = predAnthNum + predLandmarkNum * 3;
		int32_t L_19 = __this->___predAnthNum_27;
		int32_t L_20 = __this->___predLandmarkNum_28;
		V_1 = ((int32_t)il2cpp_codegen_add(L_19, ((int32_t)il2cpp_codegen_multiply(L_20, 3))));
		// for (int i = 0; i < correctVertices.Length; i++)
		V_2 = 0;
		goto IL_01b5;
	}

IL_0081:
	{
		// int idx = indexMap[correctVertices[i].x.ToString() + " " +
		//                    correctVertices[i].y.ToString() + " " +
		//                    correctVertices[i].z.ToString()];
		Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588* L_21 = __this->___indexMap_22;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_22 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)5);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_23 = L_22;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_24 = __this->___correctVertices_25;
		int32_t L_25 = V_2;
		NullCheck(L_24);
		float* L_26 = (&((L_24)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_25)))->___x_2);
		String_t* L_27;
		L_27 = Single_ToString_mE282EDA9CA4F7DF88432D807732837A629D04972(L_26, NULL);
		NullCheck(L_23);
		ArrayElementTypeCheck (L_23, L_27);
		(L_23)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)L_27);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_28 = L_23;
		NullCheck(L_28);
		ArrayElementTypeCheck (L_28, _stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745);
		(L_28)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)_stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_29 = L_28;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_30 = __this->___correctVertices_25;
		int32_t L_31 = V_2;
		NullCheck(L_30);
		float* L_32 = (&((L_30)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_31)))->___y_3);
		String_t* L_33;
		L_33 = Single_ToString_mE282EDA9CA4F7DF88432D807732837A629D04972(L_32, NULL);
		NullCheck(L_29);
		ArrayElementTypeCheck (L_29, L_33);
		(L_29)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)L_33);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_34 = L_29;
		NullCheck(L_34);
		ArrayElementTypeCheck (L_34, _stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745);
		(L_34)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)_stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_35 = L_34;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_36 = __this->___correctVertices_25;
		int32_t L_37 = V_2;
		NullCheck(L_36);
		float* L_38 = (&((L_36)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_37)))->___z_4);
		String_t* L_39;
		L_39 = Single_ToString_mE282EDA9CA4F7DF88432D807732837A629D04972(L_38, NULL);
		NullCheck(L_35);
		ArrayElementTypeCheck (L_35, L_39);
		(L_35)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)L_39);
		String_t* L_40;
		L_40 = String_Concat_m647EBF831F54B6DF7D5AFA5FD012CF4EE7571B6A(L_35, NULL);
		NullCheck(L_21);
		int32_t L_41;
		L_41 = Dictionary_2_get_Item_mE01750B88D9A581E9196F3444952F7592E862592(L_21, L_40, Dictionary_2_get_Item_mE01750B88D9A581E9196F3444952F7592E862592_RuntimeMethod_var);
		V_3 = L_41;
		// var diffx = calcCoords(Anths, pcaData[skipNum + i * 3 + 0]);
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_42 = V_0;
		List_1_t64FC2174A52DBC518FB499976FF0BA043E643411* L_43 = __this->___pcaData_20;
		int32_t L_44 = V_1;
		int32_t L_45 = V_2;
		NullCheck(L_43);
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_46;
		L_46 = List_1_get_Item_mBCF1516ECF7285668A96B426CD6C201113395AB2(L_43, ((int32_t)il2cpp_codegen_add(L_44, ((int32_t)il2cpp_codegen_multiply(L_45, 3)))), List_1_get_Item_mBCF1516ECF7285668A96B426CD6C201113395AB2_RuntimeMethod_var);
		float L_47;
		L_47 = MaleSliderAdjust_calcCoords_m84B47B438981DEA09EE9EC0C9466ED0965D4CABD(__this, L_42, L_46, NULL);
		V_4 = L_47;
		// var diffy = calcCoords(Anths, pcaData[skipNum + i * 3 + 1]);
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_48 = V_0;
		List_1_t64FC2174A52DBC518FB499976FF0BA043E643411* L_49 = __this->___pcaData_20;
		int32_t L_50 = V_1;
		int32_t L_51 = V_2;
		NullCheck(L_49);
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_52;
		L_52 = List_1_get_Item_mBCF1516ECF7285668A96B426CD6C201113395AB2(L_49, ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_50, ((int32_t)il2cpp_codegen_multiply(L_51, 3)))), 1)), List_1_get_Item_mBCF1516ECF7285668A96B426CD6C201113395AB2_RuntimeMethod_var);
		float L_53;
		L_53 = MaleSliderAdjust_calcCoords_m84B47B438981DEA09EE9EC0C9466ED0965D4CABD(__this, L_48, L_52, NULL);
		V_5 = L_53;
		// var diffz = calcCoords(Anths, pcaData[skipNum + i * 3 + 2]);
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_54 = V_0;
		List_1_t64FC2174A52DBC518FB499976FF0BA043E643411* L_55 = __this->___pcaData_20;
		int32_t L_56 = V_1;
		int32_t L_57 = V_2;
		NullCheck(L_55);
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_58;
		L_58 = List_1_get_Item_mBCF1516ECF7285668A96B426CD6C201113395AB2(L_55, ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_56, ((int32_t)il2cpp_codegen_multiply(L_57, 3)))), 2)), List_1_get_Item_mBCF1516ECF7285668A96B426CD6C201113395AB2_RuntimeMethod_var);
		float L_59;
		L_59 = MaleSliderAdjust_calcCoords_m84B47B438981DEA09EE9EC0C9466ED0965D4CABD(__this, L_54, L_58, NULL);
		V_6 = L_59;
		// vertices[idx].x = meanVertices[i].x - diffx;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_60 = __this->___vertices_24;
		int32_t L_61 = V_3;
		NullCheck(L_60);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_62 = __this->___meanVertices_26;
		int32_t L_63 = V_2;
		NullCheck(L_62);
		float L_64 = ((L_62)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_63)))->___x_2;
		float L_65 = V_4;
		((L_60)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_61)))->___x_2 = ((float)il2cpp_codegen_subtract(L_64, L_65));
		// vertices[idx].y = meanVertices[i].y + diffy;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_66 = __this->___vertices_24;
		int32_t L_67 = V_3;
		NullCheck(L_66);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_68 = __this->___meanVertices_26;
		int32_t L_69 = V_2;
		NullCheck(L_68);
		float L_70 = ((L_68)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_69)))->___y_3;
		float L_71 = V_5;
		((L_66)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_67)))->___y_3 = ((float)il2cpp_codegen_add(L_70, L_71));
		// vertices[idx].z = meanVertices[i].z + diffz;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_72 = __this->___vertices_24;
		int32_t L_73 = V_3;
		NullCheck(L_72);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_74 = __this->___meanVertices_26;
		int32_t L_75 = V_2;
		NullCheck(L_74);
		float L_76 = ((L_74)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_75)))->___z_4;
		float L_77 = V_6;
		((L_72)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_73)))->___z_4 = ((float)il2cpp_codegen_add(L_76, L_77));
		// for (int i = 0; i < correctVertices.Length; i++)
		int32_t L_78 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_78, 1));
	}

IL_01b5:
	{
		// for (int i = 0; i < correctVertices.Length; i++)
		int32_t L_79 = V_2;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_80 = __this->___correctVertices_25;
		NullCheck(L_80);
		if ((((int32_t)L_79) < ((int32_t)((int32_t)(((RuntimeArray*)L_80)->max_length)))))
		{
			goto IL_0081;
		}
	}
	{
		// mesh.vertices = vertices;
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_81 = __this->___mesh_23;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_82 = __this->___vertices_24;
		NullCheck(L_81);
		Mesh_set_vertices_m5BB814D89E9ACA00DBF19F7D8E22CB73AC73FE5C(L_81, L_82, NULL);
		// mesh.RecalculateBounds();
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_83 = __this->___mesh_23;
		NullCheck(L_83);
		Mesh_RecalculateBounds_mA9B293F57C6CD298AE2D2DB19061FC23B05AB90B(L_83, NULL);
		// mesh.RecalculateNormals();
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_84 = __this->___mesh_23;
		NullCheck(L_84);
		Mesh_RecalculateNormals_m3AA2788914611444E030CA310E03E3CFE683902B(L_84, NULL);
		// if(areLandmarksDisplayed)
		bool L_85 = __this->___areLandmarksDisplayed_19;
		if (!L_85)
		{
			goto IL_0217;
		}
	}
	{
		// model.transform.DetachChildren();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_86 = __this->___model_4;
		NullCheck(L_86);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_87;
		L_87 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_86, NULL);
		NullCheck(L_87);
		Transform_DetachChildren_m7E4B3405F2F053B059E76EC1DF0F235EED335D69(L_87, NULL);
		// GameObject.Destroy(GameObject.Find("landmarks"));
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_88;
		L_88 = GameObject_Find_m7A669B4EEC2617AB82F6E3FF007CDCD9F21DB300(_stringLiteral931018A69BAE325939AFC4A7E983ED54CB0E60AC, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB(L_88, NULL);
		// CreateLandmarks();
		MaleSliderAdjust_CreateLandmarks_m1551B6584731D86F314E595C259E936D5D069673(__this, NULL);
	}

IL_0217:
	{
		// lbStature.text = "Stature: " + sliderStature.value.ToString() + " mm";
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_89 = __this->___lbStature_14;
		Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* L_90 = __this->___sliderStature_9;
		NullCheck(L_90);
		float L_91;
		L_91 = VirtualFuncInvoker0< float >::Invoke(46 /* System.Single UnityEngine.UI.Slider::get_value() */, L_90);
		V_7 = L_91;
		String_t* L_92;
		L_92 = Single_ToString_mE282EDA9CA4F7DF88432D807732837A629D04972((&V_7), NULL);
		String_t* L_93;
		L_93 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(_stringLiteralB281D5412E3C8F31FEC213B8C136C5EFC40702AB, L_92, _stringLiteralF511102AF85AA2E3EFF8375103C2269E3633C128, NULL);
		NullCheck(L_89);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_89, L_93);
		// lbBMI.text = "BMI: " + sliderBMI.value.ToString() + " kg/m^2";
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_94 = __this->___lbBMI_13;
		Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* L_95 = __this->___sliderBMI_8;
		NullCheck(L_95);
		float L_96;
		L_96 = VirtualFuncInvoker0< float >::Invoke(46 /* System.Single UnityEngine.UI.Slider::get_value() */, L_95);
		V_7 = L_96;
		String_t* L_97;
		L_97 = Single_ToString_mE282EDA9CA4F7DF88432D807732837A629D04972((&V_7), NULL);
		String_t* L_98;
		L_98 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(_stringLiteral8A0FEFCF616268A7D2AEEE23BA07B44ADB72452E, L_97, _stringLiteral0487849E743EE7A8A4466475F43E21864F0F1F48, NULL);
		NullCheck(L_94);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_94, L_98);
		// lbSittingHeightStat.text = "Sitting Height / Stature: " + Truncate((float)sliderSittingHeightStat.value, 6).ToString();
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_99 = __this->___lbSittingHeightStat_15;
		Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* L_100 = __this->___sliderSittingHeightStat_10;
		NullCheck(L_100);
		float L_101;
		L_101 = VirtualFuncInvoker0< float >::Invoke(46 /* System.Single UnityEngine.UI.Slider::get_value() */, L_100);
		float L_102;
		L_102 = MaleSliderAdjust_Truncate_m07A49BE803A79E3CD362FFC04C50B5152DD6264B(((float)L_101), 6, NULL);
		V_7 = L_102;
		String_t* L_103;
		L_103 = Single_ToString_mE282EDA9CA4F7DF88432D807732837A629D04972((&V_7), NULL);
		String_t* L_104;
		L_104 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteralEF9AA825E2BF1AA80FEE50E865D31D82FAE268D4, L_103, NULL);
		NullCheck(L_99);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_99, L_104);
		// lbAge.text = "Age: " + sliderAge.value.ToString() + " years";
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_105 = __this->___lbAge_16;
		Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* L_106 = __this->___sliderAge_11;
		NullCheck(L_106);
		float L_107;
		L_107 = VirtualFuncInvoker0< float >::Invoke(46 /* System.Single UnityEngine.UI.Slider::get_value() */, L_106);
		V_7 = L_107;
		String_t* L_108;
		L_108 = Single_ToString_mE282EDA9CA4F7DF88432D807732837A629D04972((&V_7), NULL);
		String_t* L_109;
		L_109 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(_stringLiteralDB81FEF0286C64E4137586C08428BE38969C7CF7, L_108, _stringLiteral7B4264F4BD0983833238F00348CA2152EA160369, NULL);
		NullCheck(L_105);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_105, L_109);
		// }
		return;
	}
}
// System.Single MaleSliderAdjust::calcCoords(System.Double[],System.Double[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float MaleSliderAdjust_calcCoords_m84B47B438981DEA09EE9EC0C9466ED0965D4CABD (MaleSliderAdjust_tA7DA9AE649A08FBB56C79BDAD0CD6D563D1776F4* __this, DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* ___diffAnths0, DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* ___onePCAdata1, const RuntimeMethod* method) 
{
	double V_0 = 0.0;
	int32_t V_1 = 0;
	{
		// {   var diffCoords = 0.0;
		V_0 = (0.0);
		// for (int k = 0; k < diffAnths.Length; k++)
		V_1 = 0;
		goto IL_001c;
	}

IL_000e:
	{
		// diffCoords += onePCAdata[k] * diffAnths[k];
		double L_0 = V_0;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_1 = ___onePCAdata1;
		int32_t L_2 = V_1;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		double L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_5 = ___diffAnths0;
		int32_t L_6 = V_1;
		NullCheck(L_5);
		int32_t L_7 = L_6;
		double L_8 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		V_0 = ((double)il2cpp_codegen_add(L_0, ((double)il2cpp_codegen_multiply(L_4, L_8))));
		// for (int k = 0; k < diffAnths.Length; k++)
		int32_t L_9 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_9, 1));
	}

IL_001c:
	{
		// for (int k = 0; k < diffAnths.Length; k++)
		int32_t L_10 = V_1;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_11 = ___diffAnths0;
		NullCheck(L_11);
		if ((((int32_t)L_10) < ((int32_t)((int32_t)(((RuntimeArray*)L_11)->max_length)))))
		{
			goto IL_000e;
		}
	}
	{
		// return ((float)diffCoords);
		double L_12 = V_0;
		return ((float)L_12);
	}
}
// System.Void MaleSliderAdjust::ShowLandmarks()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MaleSliderAdjust_ShowLandmarks_m754C97EDDEB685141A0A1EFF694F53A5C2ECFF2A (MaleSliderAdjust_tA7DA9AE649A08FBB56C79BDAD0CD6D563D1776F4* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5B2D0D1839F6E563813543D768A5FB707647FBCE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral72B6B2AFB007B7EFF933E2421DF01F832D40625B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral931018A69BAE325939AFC4A7E983ED54CB0E60AC);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!areLandmarksDisplayed)
		bool L_0 = __this->___areLandmarksDisplayed_19;
		if (L_0)
		{
			goto IL_0026;
		}
	}
	{
		// areLandmarksDisplayed = true;
		__this->___areLandmarksDisplayed_19 = (bool)1;
		// landmarkButtonText.text = "Hide Landmarks";
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_1 = __this->___landmarkButtonText_18;
		NullCheck(L_1);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_1, _stringLiteral5B2D0D1839F6E563813543D768A5FB707647FBCE);
		// CreateLandmarks();
		MaleSliderAdjust_CreateLandmarks_m1551B6584731D86F314E595C259E936D5D069673(__this, NULL);
		return;
	}

IL_0026:
	{
		// areLandmarksDisplayed = false;
		__this->___areLandmarksDisplayed_19 = (bool)0;
		// landmarkButtonText.text = "Show Landmarks";
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_2 = __this->___landmarkButtonText_18;
		NullCheck(L_2);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_2, _stringLiteral72B6B2AFB007B7EFF933E2421DF01F832D40625B);
		// model.transform.DetachChildren();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3 = __this->___model_4;
		NullCheck(L_3);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4;
		L_4 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_3, NULL);
		NullCheck(L_4);
		Transform_DetachChildren_m7E4B3405F2F053B059E76EC1DF0F235EED335D69(L_4, NULL);
		// GameObject.Destroy(GameObject.Find("landmarks"));
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5;
		L_5 = GameObject_Find_m7A669B4EEC2617AB82F6E3FF007CDCD9F21DB300(_stringLiteral931018A69BAE325939AFC4A7E983ED54CB0E60AC, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB(L_5, NULL);
		// }
		return;
	}
}
// System.Void MaleSliderAdjust::CreateLandmarks()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MaleSliderAdjust_CreateLandmarks_m1551B6584731D86F314E595C259E936D5D069673 (MaleSliderAdjust_tA7DA9AE649A08FBB56C79BDAD0CD6D563D1776F4* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_m7FF948365C38BC39333D82B235A7C4EAD219960D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_m026EB44DB6238F13E2AFBECF1FBBE924CB1B040A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mBCF1516ECF7285668A96B426CD6C201113395AB2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral931018A69BAE325939AFC4A7E983ED54CB0E60AC);
		s_Il2CppMethodInitialized = true;
	}
	DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* V_0 = NULL;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_1 = NULL;
	int32_t V_2 = 0;
	double V_3 = 0.0;
	double V_4 = 0.0;
	double V_5 = 0.0;
	{
		// var Anths = new double[] {
		//       sliderStature.value,
		//       sliderBMI.value,
		//       sliderSittingHeightStat.value,
		//       sliderAge.value,
		//       sliderBMI.value*sliderAge.value,
		//       1.0
		// };
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_0 = (DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE*)(DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE*)SZArrayNew(DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE_il2cpp_TypeInfo_var, (uint32_t)6);
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_1 = L_0;
		Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* L_2 = __this->___sliderStature_9;
		NullCheck(L_2);
		float L_3;
		L_3 = VirtualFuncInvoker0< float >::Invoke(46 /* System.Single UnityEngine.UI.Slider::get_value() */, L_2);
		NullCheck(L_1);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (double)((double)L_3));
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_4 = L_1;
		Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* L_5 = __this->___sliderBMI_8;
		NullCheck(L_5);
		float L_6;
		L_6 = VirtualFuncInvoker0< float >::Invoke(46 /* System.Single UnityEngine.UI.Slider::get_value() */, L_5);
		NullCheck(L_4);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(1), (double)((double)L_6));
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_7 = L_4;
		Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* L_8 = __this->___sliderSittingHeightStat_10;
		NullCheck(L_8);
		float L_9;
		L_9 = VirtualFuncInvoker0< float >::Invoke(46 /* System.Single UnityEngine.UI.Slider::get_value() */, L_8);
		NullCheck(L_7);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(2), (double)((double)L_9));
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_10 = L_7;
		Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* L_11 = __this->___sliderAge_11;
		NullCheck(L_11);
		float L_12;
		L_12 = VirtualFuncInvoker0< float >::Invoke(46 /* System.Single UnityEngine.UI.Slider::get_value() */, L_11);
		NullCheck(L_10);
		(L_10)->SetAt(static_cast<il2cpp_array_size_t>(3), (double)((double)L_12));
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_13 = L_10;
		Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* L_14 = __this->___sliderBMI_8;
		NullCheck(L_14);
		float L_15;
		L_15 = VirtualFuncInvoker0< float >::Invoke(46 /* System.Single UnityEngine.UI.Slider::get_value() */, L_14);
		Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* L_16 = __this->___sliderAge_11;
		NullCheck(L_16);
		float L_17;
		L_17 = VirtualFuncInvoker0< float >::Invoke(46 /* System.Single UnityEngine.UI.Slider::get_value() */, L_16);
		NullCheck(L_13);
		(L_13)->SetAt(static_cast<il2cpp_array_size_t>(4), (double)((double)((float)il2cpp_codegen_multiply(L_15, L_17))));
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_18 = L_13;
		NullCheck(L_18);
		(L_18)->SetAt(static_cast<il2cpp_array_size_t>(5), (double)(1.0));
		V_0 = L_18;
		// GameObject landmarks = new GameObject("landmarks");
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_19 = (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)il2cpp_codegen_object_new(GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var);
		NullCheck(L_19);
		GameObject__ctor_m37D512B05D292F954792225E6C6EEE95293A9B88(L_19, _stringLiteral931018A69BAE325939AFC4A7E983ED54CB0E60AC, NULL);
		V_1 = L_19;
		// for (int i = 0; i < predLandmarkNum; i++)
		V_2 = 0;
		goto IL_0190;
	}

IL_007c:
	{
		// var xcoord = landmarkData[i * 3 + 0][0] + calcCoords(Anths, pcaData[predAnthNum + i * 3 + 0]);
		List_1_t64FC2174A52DBC518FB499976FF0BA043E643411* L_20 = __this->___landmarkData_21;
		int32_t L_21 = V_2;
		NullCheck(L_20);
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_22;
		L_22 = List_1_get_Item_mBCF1516ECF7285668A96B426CD6C201113395AB2(L_20, ((int32_t)il2cpp_codegen_multiply(L_21, 3)), List_1_get_Item_mBCF1516ECF7285668A96B426CD6C201113395AB2_RuntimeMethod_var);
		NullCheck(L_22);
		int32_t L_23 = 0;
		double L_24 = (L_22)->GetAt(static_cast<il2cpp_array_size_t>(L_23));
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_25 = V_0;
		List_1_t64FC2174A52DBC518FB499976FF0BA043E643411* L_26 = __this->___pcaData_20;
		int32_t L_27 = __this->___predAnthNum_27;
		int32_t L_28 = V_2;
		NullCheck(L_26);
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_29;
		L_29 = List_1_get_Item_mBCF1516ECF7285668A96B426CD6C201113395AB2(L_26, ((int32_t)il2cpp_codegen_add(L_27, ((int32_t)il2cpp_codegen_multiply(L_28, 3)))), List_1_get_Item_mBCF1516ECF7285668A96B426CD6C201113395AB2_RuntimeMethod_var);
		float L_30;
		L_30 = MaleSliderAdjust_calcCoords_m84B47B438981DEA09EE9EC0C9466ED0965D4CABD(__this, L_25, L_29, NULL);
		V_3 = ((double)il2cpp_codegen_add(L_24, ((double)L_30)));
		// var ycoord = landmarkData[i * 3 + 1][0] + calcCoords(Anths, pcaData[predAnthNum + i * 3 + 1]);
		List_1_t64FC2174A52DBC518FB499976FF0BA043E643411* L_31 = __this->___landmarkData_21;
		int32_t L_32 = V_2;
		NullCheck(L_31);
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_33;
		L_33 = List_1_get_Item_mBCF1516ECF7285668A96B426CD6C201113395AB2(L_31, ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_32, 3)), 1)), List_1_get_Item_mBCF1516ECF7285668A96B426CD6C201113395AB2_RuntimeMethod_var);
		NullCheck(L_33);
		int32_t L_34 = 0;
		double L_35 = (L_33)->GetAt(static_cast<il2cpp_array_size_t>(L_34));
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_36 = V_0;
		List_1_t64FC2174A52DBC518FB499976FF0BA043E643411* L_37 = __this->___pcaData_20;
		int32_t L_38 = __this->___predAnthNum_27;
		int32_t L_39 = V_2;
		NullCheck(L_37);
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_40;
		L_40 = List_1_get_Item_mBCF1516ECF7285668A96B426CD6C201113395AB2(L_37, ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_38, ((int32_t)il2cpp_codegen_multiply(L_39, 3)))), 1)), List_1_get_Item_mBCF1516ECF7285668A96B426CD6C201113395AB2_RuntimeMethod_var);
		float L_41;
		L_41 = MaleSliderAdjust_calcCoords_m84B47B438981DEA09EE9EC0C9466ED0965D4CABD(__this, L_36, L_40, NULL);
		V_4 = ((double)il2cpp_codegen_add(L_35, ((double)L_41)));
		// var zcoord = landmarkData[i * 3 + 2][0] + calcCoords(Anths, pcaData[predAnthNum + i * 3 + 2]);
		List_1_t64FC2174A52DBC518FB499976FF0BA043E643411* L_42 = __this->___landmarkData_21;
		int32_t L_43 = V_2;
		NullCheck(L_42);
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_44;
		L_44 = List_1_get_Item_mBCF1516ECF7285668A96B426CD6C201113395AB2(L_42, ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_43, 3)), 2)), List_1_get_Item_mBCF1516ECF7285668A96B426CD6C201113395AB2_RuntimeMethod_var);
		NullCheck(L_44);
		int32_t L_45 = 0;
		double L_46 = (L_44)->GetAt(static_cast<il2cpp_array_size_t>(L_45));
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_47 = V_0;
		List_1_t64FC2174A52DBC518FB499976FF0BA043E643411* L_48 = __this->___pcaData_20;
		int32_t L_49 = __this->___predAnthNum_27;
		int32_t L_50 = V_2;
		NullCheck(L_48);
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_51;
		L_51 = List_1_get_Item_mBCF1516ECF7285668A96B426CD6C201113395AB2(L_48, ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_49, ((int32_t)il2cpp_codegen_multiply(L_50, 3)))), 2)), List_1_get_Item_mBCF1516ECF7285668A96B426CD6C201113395AB2_RuntimeMethod_var);
		float L_52;
		L_52 = MaleSliderAdjust_calcCoords_m84B47B438981DEA09EE9EC0C9466ED0965D4CABD(__this, L_47, L_51, NULL);
		V_5 = ((double)il2cpp_codegen_add(L_46, ((double)L_52)));
		// GameObject sphere = GameObject.CreatePrimitive(PrimitiveType.Sphere);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_53;
		L_53 = GameObject_CreatePrimitive_m13C0A691E679A83DD595913200A1DD9A906EB47B(0, NULL);
		// sphere.transform.position = new Vector3((float)xcoord, (float)ycoord, (float)zcoord);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_54 = L_53;
		NullCheck(L_54);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_55;
		L_55 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_54, NULL);
		double L_56 = V_3;
		double L_57 = V_4;
		double L_58 = V_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_59;
		memset((&L_59), 0, sizeof(L_59));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_59), ((float)L_56), ((float)L_57), ((float)L_58), /*hidden argument*/NULL);
		NullCheck(L_55);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_55, L_59, NULL);
		// sphere.GetComponent<Renderer>().material.color = Color.green;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_60 = L_54;
		NullCheck(L_60);
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_61;
		L_61 = GameObject_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_m026EB44DB6238F13E2AFBECF1FBBE924CB1B040A(L_60, GameObject_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_m026EB44DB6238F13E2AFBECF1FBBE924CB1B040A_RuntimeMethod_var);
		NullCheck(L_61);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_62;
		L_62 = Renderer_get_material_m5BA2A00816C4CC66580D4B2E409CF10718C15656(L_61, NULL);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_63;
		L_63 = Color_get_green_mEB001F2CD8C68C6BBAEF9101990B779D3AA2A6EF_inline(NULL);
		NullCheck(L_62);
		Material_set_color_m5C32DEBB215FF9EE35E7B575297D8C2F29CC2A2D(L_62, L_63, NULL);
		// sphere.GetComponent<MeshRenderer>().shadowCastingMode = UnityEngine.Rendering.ShadowCastingMode.Off;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_64 = L_60;
		NullCheck(L_64);
		MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* L_65;
		L_65 = GameObject_GetComponent_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_m7FF948365C38BC39333D82B235A7C4EAD219960D(L_64, GameObject_GetComponent_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_m7FF948365C38BC39333D82B235A7C4EAD219960D_RuntimeMethod_var);
		NullCheck(L_65);
		Renderer_set_shadowCastingMode_mB0CD3D153E43044388AEFF7AEFDA93E80EB36D11(L_65, 0, NULL);
		// sphere.transform.localScale += new Vector3(20, 20, 20);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_66 = L_64;
		NullCheck(L_66);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_67;
		L_67 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_66, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_68 = L_67;
		NullCheck(L_68);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_69;
		L_69 = Transform_get_localScale_m804A002A53A645CDFCD15BB0F37209162720363F(L_68, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_70;
		memset((&L_70), 0, sizeof(L_70));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_70), (20.0f), (20.0f), (20.0f), /*hidden argument*/NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_71;
		L_71 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_69, L_70, NULL);
		NullCheck(L_68);
		Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633(L_68, L_71, NULL);
		// sphere.transform.parent = landmarks.transform;
		NullCheck(L_66);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_72;
		L_72 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_66, NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_73 = V_1;
		NullCheck(L_73);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_74;
		L_74 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_73, NULL);
		NullCheck(L_72);
		Transform_set_parent_m9BD5E563B539DD5BEC342736B03F97B38A243234(L_72, L_74, NULL);
		// for (int i = 0; i < predLandmarkNum; i++)
		int32_t L_75 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_75, 1));
	}

IL_0190:
	{
		// for (int i = 0; i < predLandmarkNum; i++)
		int32_t L_76 = V_2;
		int32_t L_77 = __this->___predLandmarkNum_28;
		if ((((int32_t)L_76) < ((int32_t)L_77)))
		{
			goto IL_007c;
		}
	}
	{
		// landmarks.transform.position = model.transform.position;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_78 = V_1;
		NullCheck(L_78);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_79;
		L_79 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_78, NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_80 = __this->___model_4;
		NullCheck(L_80);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_81;
		L_81 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_80, NULL);
		NullCheck(L_81);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_82;
		L_82 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_81, NULL);
		NullCheck(L_79);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_79, L_82, NULL);
		// landmarks.transform.localScale = new Vector3((float)0.001, (float)0.001, (float)0.001);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_83 = V_1;
		NullCheck(L_83);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_84;
		L_84 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_83, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_85;
		memset((&L_85), 0, sizeof(L_85));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_85), (0.00100000005f), (0.00100000005f), (0.00100000005f), /*hidden argument*/NULL);
		NullCheck(L_84);
		Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633(L_84, L_85, NULL);
		// landmarks.transform.parent = model.transform;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_86 = V_1;
		NullCheck(L_86);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_87;
		L_87 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_86, NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_88 = __this->___model_4;
		NullCheck(L_88);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_89;
		L_89 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_88, NULL);
		NullCheck(L_87);
		Transform_set_parent_m9BD5E563B539DD5BEC342736B03F97B38A243234(L_87, L_89, NULL);
		// landmarks.transform.localRotation = Quaternion.Euler(0, 0, -180);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_90 = V_1;
		NullCheck(L_90);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_91;
		L_91 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_90, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_92;
		L_92 = Quaternion_Euler_m9262AB29E3E9CE94EF71051F38A28E82AEC73F90_inline((0.0f), (0.0f), (-180.0f), NULL);
		NullCheck(L_91);
		Transform_set_localRotation_mAB4A011D134BA58AB780BECC0025CA65F16185FA(L_91, L_92, NULL);
		// }
		return;
	}
}
// System.Void MaleSliderAdjust::rotate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MaleSliderAdjust_rotate_mDF019B759932F77DF92F19636DB84A1B4EFAEDC9 (MaleSliderAdjust_tA7DA9AE649A08FBB56C79BDAD0CD6D563D1776F4* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6E1CE004DBBF4E6D83804FAD4823454546E65F9D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF0A265B5C4EFB991FCC9024BE54A90F0BCF065C2);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		// model.transform.Rotate(new Vector3(0, 0, 1), sliderRotation.value);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___model_4;
		NullCheck(L_0);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_0, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		memset((&L_2), 0, sizeof(L_2));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_2), (0.0f), (0.0f), (1.0f), /*hidden argument*/NULL);
		Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* L_3 = __this->___sliderRotation_12;
		NullCheck(L_3);
		float L_4;
		L_4 = VirtualFuncInvoker0< float >::Invoke(46 /* System.Single UnityEngine.UI.Slider::get_value() */, L_3);
		NullCheck(L_1);
		Transform_Rotate_m35B44707FE16FF8015D519D8C162C0B4A85D6D1F(L_1, L_2, L_4, NULL);
		// lbRotation.text = "Rotation: " + Truncate(sliderRotation.value, 2).ToString() + " degrees";
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_5 = __this->___lbRotation_17;
		Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* L_6 = __this->___sliderRotation_12;
		NullCheck(L_6);
		float L_7;
		L_7 = VirtualFuncInvoker0< float >::Invoke(46 /* System.Single UnityEngine.UI.Slider::get_value() */, L_6);
		float L_8;
		L_8 = MaleSliderAdjust_Truncate_m07A49BE803A79E3CD362FFC04C50B5152DD6264B(L_7, 2, NULL);
		V_0 = L_8;
		String_t* L_9;
		L_9 = Single_ToString_mE282EDA9CA4F7DF88432D807732837A629D04972((&V_0), NULL);
		String_t* L_10;
		L_10 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(_stringLiteralF0A265B5C4EFB991FCC9024BE54A90F0BCF065C2, L_9, _stringLiteral6E1CE004DBBF4E6D83804FAD4823454546E65F9D, NULL);
		NullCheck(L_5);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_5, L_10);
		// }
		return;
	}
}
// System.Single MaleSliderAdjust::Truncate(System.Single,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float MaleSliderAdjust_Truncate_m07A49BE803A79E3CD362FFC04C50B5152DD6264B (float ___value0, int32_t ___digits1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	double V_0 = 0.0;
	{
		// double mult = Math.Pow(10.0, digits);
		int32_t L_0 = ___digits1;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_1;
		L_1 = Math_Pow_mEAE651F0858203FBE12B72B6A53951BBD0FB5265((10.0), ((double)L_0), NULL);
		V_0 = L_1;
		// double result = Math.Truncate(mult * value) / mult;
		double L_2 = V_0;
		float L_3 = ___value0;
		double L_4;
		L_4 = Math_Truncate_mE66B1AD68C17D27675DE0CB74643374F9EDB649C(((double)il2cpp_codegen_multiply(L_2, ((double)L_3))), NULL);
		double L_5 = V_0;
		// return (float)result;
		return ((float)((double)(L_4/L_5)));
	}
}
// System.Void MaleSliderAdjust::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MaleSliderAdjust__ctor_m81304CA103138285A8010A5418D58A207F317D5F (MaleSliderAdjust_tA7DA9AE649A08FBB56C79BDAD0CD6D563D1776F4* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_mA3C3860EDE2CDD08BBD68C389377BC89D029D968_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mF1433DDB1AE70FFD55B9A5791233ED33F24D45A9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t64FC2174A52DBC518FB499976FF0BA043E643411_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// List<double[]> pcaData = new List<double[]>();
		List_1_t64FC2174A52DBC518FB499976FF0BA043E643411* L_0 = (List_1_t64FC2174A52DBC518FB499976FF0BA043E643411*)il2cpp_codegen_object_new(List_1_t64FC2174A52DBC518FB499976FF0BA043E643411_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_mF1433DDB1AE70FFD55B9A5791233ED33F24D45A9(L_0, List_1__ctor_mF1433DDB1AE70FFD55B9A5791233ED33F24D45A9_RuntimeMethod_var);
		__this->___pcaData_20 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___pcaData_20), (void*)L_0);
		// List<double[]> landmarkData = new List<double[]>();
		List_1_t64FC2174A52DBC518FB499976FF0BA043E643411* L_1 = (List_1_t64FC2174A52DBC518FB499976FF0BA043E643411*)il2cpp_codegen_object_new(List_1_t64FC2174A52DBC518FB499976FF0BA043E643411_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		List_1__ctor_mF1433DDB1AE70FFD55B9A5791233ED33F24D45A9(L_1, List_1__ctor_mF1433DDB1AE70FFD55B9A5791233ED33F24D45A9_RuntimeMethod_var);
		__this->___landmarkData_21 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___landmarkData_21), (void*)L_1);
		// Dictionary<string, int> indexMap = new Dictionary<string, int>();
		Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588* L_2 = (Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588*)il2cpp_codegen_object_new(Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		Dictionary_2__ctor_mA3C3860EDE2CDD08BBD68C389377BC89D029D968(L_2, Dictionary_2__ctor_mA3C3860EDE2CDD08BBD68C389377BC89D029D968_RuntimeMethod_var);
		__this->___indexMap_22 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___indexMap_22), (void*)L_2);
		// int predAnthNum = 49;
		__this->___predAnthNum_27 = ((int32_t)49);
		// int predLandmarkNum = 93;
		__this->___predLandmarkNum_28 = ((int32_t)93);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR IlluminationData_t907CE8A9106AC295312099ACA9EF74970E3AE7D4* World_get_IlluminationData_m8E82AC2FFF506E365559AD100C451D87233E5AA6_inline (World_t0332C3F77BBFBA826A13D263DAED199D01BCE050* __this, const RuntimeMethod* method) 
{
	{
		IlluminationData_t907CE8A9106AC295312099ACA9EF74970E3AE7D4* L_0 = __this->___U3CIlluminationDataU3Ek__BackingField_8;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp_mEB9AEA827D27D20FCC787F7375156AF46BB12BBF_inline (float ___value0, float ___min1, float ___max2, const RuntimeMethod* method) 
{
	bool V_0 = false;
	bool V_1 = false;
	float V_2 = 0.0f;
	{
		float L_0 = ___value0;
		float L_1 = ___min1;
		V_0 = (bool)((((float)L_0) < ((float)L_1))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_000e;
		}
	}
	{
		float L_3 = ___min1;
		___value0 = L_3;
		goto IL_0019;
	}

IL_000e:
	{
		float L_4 = ___value0;
		float L_5 = ___max2;
		V_1 = (bool)((((float)L_4) > ((float)L_5))? 1 : 0);
		bool L_6 = V_1;
		if (!L_6)
		{
			goto IL_0019;
		}
	}
	{
		float L_7 = ___max2;
		___value0 = L_7;
	}

IL_0019:
	{
		float L_8 = ___value0;
		V_2 = L_8;
		goto IL_001d;
	}

IL_001d:
	{
		float L_9 = V_2;
		return L_9;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp01_mA7E048DBDA832D399A581BE4D6DED9FA44CE0F14_inline (float ___value0, const RuntimeMethod* method) 
{
	bool V_0 = false;
	float V_1 = 0.0f;
	bool V_2 = false;
	{
		float L_0 = ___value0;
		V_0 = (bool)((((float)L_0) < ((float)(0.0f)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		V_1 = (0.0f);
		goto IL_002d;
	}

IL_0015:
	{
		float L_2 = ___value0;
		V_2 = (bool)((((float)L_2) > ((float)(1.0f)))? 1 : 0);
		bool L_3 = V_2;
		if (!L_3)
		{
			goto IL_0029;
		}
	}
	{
		V_1 = (1.0f);
		goto IL_002d;
	}

IL_0029:
	{
		float L_4 = ___value0;
		V_1 = L_4;
		goto IL_002d;
	}

IL_002d:
	{
		float L_5 = V_1;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR World_t0332C3F77BBFBA826A13D263DAED199D01BCE050* VuforiaBehaviour_get_World_m14A8271B023273D49C261BE6EC1378C16EB7B900_inline (VuforiaBehaviour_t53608E2BEC77029C0140CB1E88A0B186FC5E76C6* __this, const RuntimeMethod* method) 
{
	{
		World_t0332C3F77BBFBA826A13D263DAED199D01BCE050* L_0 = __this->___U3CWorldU3Ek__BackingField_13;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR DevicePoseBehaviour_tB66D2A5B7C7DA1929EC742544831049B124BD642* VuforiaBehaviour_get_DevicePoseBehaviour_m69EBBECA75E0D757A1660354780BBF4C7FD156B1_inline (VuforiaBehaviour_t53608E2BEC77029C0140CB1E88A0B186FC5E76C6* __this, const RuntimeMethod* method) 
{
	{
		DevicePoseBehaviour_tB66D2A5B7C7DA1929EC742544831049B124BD642* L_0 = __this->___U3CDevicePoseBehaviourU3Ek__BackingField_11;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t TargetStatus_get_Status_m6CA973C4D857DCA6B775DF7E053B0990A83026A3_inline (TargetStatus_t5D866F1CAA9D70E5B66D532E69B190EA3BAAC4B0* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CStatusU3Ek__BackingField_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t TargetStatus_get_StatusInfo_mA52A044649A96018BDC52555018BB9412877B0E6_inline (TargetStatus_t5D866F1CAA9D70E5B66D532E69B190EA3BAAC4B0* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CStatusInfoU3Ek__BackingField_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Timer_get_Enabled_m082C8CCFB9C6936523EDE3E8C8DD010C22EDA032_inline (Timer_t10D85D58F4AC0CF80C625D0124B12098CE540A8B* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->___enabled_5;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void DelegateMessageBoxButtonAction_Invoke_m819B234CE21CB5E6C60885499686A40607F8A8C2_inline (DelegateMessageBoxButtonAction_tF92662C8A304ECF3D687E8AEB65D739E3FA46DC8* __this, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ModelPlacement_set_GroundPlaneHitReceived_mFCE0CAAD12842540A0F85925AE3E3886A7FA3B06_inline (ModelPlacement_tEBA347DB86CB0A00DC780800C2CA5E1E438F7C8D* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		// public bool GroundPlaneHitReceived { get; private set; }
		bool L_0 = ___value0;
		__this->___U3CGroundPlaneHitReceivedU3Ek__BackingField_4 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR TargetStatus_t5D866F1CAA9D70E5B66D532E69B190EA3BAAC4B0 ObserverBehaviour_get_TargetStatus_m11A222E650B40FB61D9FD4BD2689F04900086E5F_inline (ObserverBehaviour_t5523404662BA53BE6118C49F6FFA9E19719115DB* __this, const RuntimeMethod* method) 
{
	{
		TargetStatus_t5D866F1CAA9D70E5B66D532E69B190EA3BAAC4B0 L_0 = __this->___U3CTargetStatusU3Ek__BackingField_11;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool ModelPlacement_get_GroundPlaneHitReceived_m99308344829E795F0EADF6D20F7061335675BE14_inline (ModelPlacement_tEBA347DB86CB0A00DC780800C2CA5E1E438F7C8D* __this, const RuntimeMethod* method) 
{
	{
		// public bool GroundPlaneHitReceived { get; private set; }
		bool L_0 = __this->___U3CGroundPlaneHitReceivedU3Ek__BackingField_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___zeroVector_5;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 HitTestResult_get_Position_m2F30FBF2AF4D53E6C3F1E51D44AE699C153C4784_inline (HitTestResult_t623F1DB9A0AAD8416652DFFE1842F908250D44D9* __this, const RuntimeMethod* method) 
{
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = __this->___mPosition_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___a0;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___b1;
		float L_3 = L_2.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___a0;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___b1;
		float L_7 = L_6.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___a0;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___b1;
		float L_11 = L_10.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_12), ((float)il2cpp_codegen_subtract(L_1, L_3)), ((float)il2cpp_codegen_subtract(L_5, L_7)), ((float)il2cpp_codegen_subtract(L_9, L_11)), /*hidden argument*/NULL);
		V_0 = L_12;
		goto IL_0030;
	}

IL_0030:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector2_Distance_mBACBB1609E1894D68F882D86A93519E311810C89_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___a0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___b1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___a0;
		float L_1 = L_0.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2 = ___b1;
		float L_3 = L_2.___x_0;
		V_0 = ((float)il2cpp_codegen_subtract(L_1, L_3));
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4 = ___a0;
		float L_5 = L_4.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6 = ___b1;
		float L_7 = L_6.___y_1;
		V_1 = ((float)il2cpp_codegen_subtract(L_5, L_7));
		float L_8 = V_0;
		float L_9 = V_0;
		float L_10 = V_1;
		float L_11 = V_1;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_12;
		L_12 = sqrt(((double)((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_8, L_9)), ((float)il2cpp_codegen_multiply(L_10, L_11))))));
		V_2 = ((float)L_12);
		goto IL_002e;
	}

IL_002e:
	{
		float L_13 = V_2;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t TMP_Dropdown_get_value_m5916A6D1897431E8ED789FEC24551A311D1B5C70_inline (TMP_Dropdown_t73B37BFDA0D005451C7B750938AFB1748E5EA504* __this, const RuntimeMethod* method) 
{
	{
		// return m_Value;
		int32_t L_0 = __this->___m_Value_26;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) 
{
	{
		float L_0 = ___x0;
		__this->___x_2 = L_0;
		float L_1 = ___y1;
		__this->___y_3 = L_1;
		float L_2 = ___z2;
		__this->___z_4 = L_2;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_green_mEB001F2CD8C68C6BBAEF9101990B779D3AA2A6EF_inline (const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0;
		memset((&L_0), 0, sizeof(L_0));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_0), (0.0f), (1.0f), (0.0f), (1.0f), /*hidden argument*/NULL);
		V_0 = L_0;
		goto IL_001d;
	}

IL_001d:
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___a0;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___b1;
		float L_3 = L_2.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___a0;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___b1;
		float L_7 = L_6.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___a0;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___b1;
		float L_11 = L_10.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_12), ((float)il2cpp_codegen_add(L_1, L_3)), ((float)il2cpp_codegen_add(L_5, L_7)), ((float)il2cpp_codegen_add(L_9, L_11)), /*hidden argument*/NULL);
		V_0 = L_12;
		goto IL_0030;
	}

IL_0030:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_Euler_m9262AB29E3E9CE94EF71051F38A28E82AEC73F90_inline (float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) 
{
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		float L_0 = ___x0;
		float L_1 = ___y1;
		float L_2 = ___z2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		memset((&L_3), 0, sizeof(L_3));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_3), L_0, L_1, L_2, /*hidden argument*/NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_3, (0.0174532924f), NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_5;
		L_5 = Quaternion_Internal_FromEulerRad_m66D4475341F53949471E6870FB5C5E4A5E9BA93E(L_4, NULL);
		V_0 = L_5;
		goto IL_001b;
	}

IL_001b:
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_6 = V_0;
		return L_6;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_mC149B1C717AF506BBE8932F2C1DC86C378D17EA8_gshared_inline (Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = (bool)__this->___hasValue_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_m5D83C79B12616961D8147BB59AD5E55683361E85_gshared_inline (List_1_t495F03F47D827883530F951D563C0BB7340E5995* __this, double ___item0, const RuntimeMethod* method) 
{
	DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = (int32_t)__this->____version_3;
		__this->____version_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_1 = (DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE*)__this->____items_1;
		V_0 = L_1;
		int32_t L_2 = (int32_t)__this->____size_2;
		V_1 = L_2;
		int32_t L_3 = V_1;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_4 = V_0;
		NullCheck(L_4);
		if ((!(((uint32_t)L_3) < ((uint32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))))))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_5 = V_1;
		__this->____size_2 = ((int32_t)il2cpp_codegen_add(L_5, 1));
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_6 = V_0;
		int32_t L_7 = V_1;
		double L_8 = ___item0;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (double)L_8);
		return;
	}

IL_0034:
	{
		double L_9 = ___item0;
		((  void (*) (List_1_t495F03F47D827883530F951D563C0BB7340E5995*, double, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___item0, const RuntimeMethod* method) 
{
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = (int32_t)__this->____version_3;
		__this->____version_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)__this->____items_1;
		V_0 = L_1;
		int32_t L_2 = (int32_t)__this->____size_2;
		V_1 = L_2;
		int32_t L_3 = V_1;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = V_0;
		NullCheck(L_4);
		if ((!(((uint32_t)L_3) < ((uint32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))))))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_5 = V_1;
		__this->____size_2 = ((int32_t)il2cpp_codegen_add(L_5, 1));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_6 = V_0;
		int32_t L_7 = V_1;
		RuntimeObject* L_8 = ___item0;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (RuntimeObject*)L_8);
		return;
	}

IL_0034:
	{
		RuntimeObject* L_9 = ___item0;
		((  void (*) (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* __this, float ___r0, float ___g1, float ___b2, float ___a3, const RuntimeMethod* method) 
{
	{
		float L_0 = ___r0;
		__this->___r_0 = L_0;
		float L_1 = ___g1;
		__this->___g_1 = L_1;
		float L_2 = ___b2;
		__this->___b_2 = L_2;
		float L_3 = ___a3;
		__this->___a_3 = L_3;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, float ___d1, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___a0;
		float L_1 = L_0.___x_2;
		float L_2 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = ___a0;
		float L_4 = L_3.___y_3;
		float L_5 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___a0;
		float L_7 = L_6.___z_4;
		float L_8 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_9), ((float)il2cpp_codegen_multiply(L_1, L_2)), ((float)il2cpp_codegen_multiply(L_4, L_5)), ((float)il2cpp_codegen_multiply(L_7, L_8)), /*hidden argument*/NULL);
		V_0 = L_9;
		goto IL_0021;
	}

IL_0021:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = V_0;
		return L_10;
	}
}
