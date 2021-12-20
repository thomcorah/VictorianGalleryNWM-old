#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


template <typename R>
struct VirtFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1>
struct VirtActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};

// UnityEngine.XR.ARFoundation.ARTrackableManager`5<System.Object,System.Object,System.Object,UnityEngine.XR.ARSubsystems.BoundedPlane,System.Object>
struct ARTrackableManager_5_t2707E45F444C493E32789D9B57F85551A10E4212;
// UnityEngine.XR.ARFoundation.ARTrackableManager`5<UnityEngine.XR.ARSubsystems.XRPlaneSubsystem,UnityEngine.XR.ARSubsystems.XRPlaneSubsystemDescriptor,UnityEngine.XR.ARSubsystems.XRPlaneSubsystem/Provider,UnityEngine.XR.ARSubsystems.BoundedPlane,UnityEngine.XR.ARFoundation.ARPlane>
struct ARTrackableManager_5_tB03CF7F1B5B39FA73203E7F2342207BD4FF540B7;
// System.Action`1<UnityEngine.XR.ARFoundation.ARCameraFrameEventArgs>
struct Action_1_tA34B23CE57B7192055F9BF04AA14FCCB2ED91C68;
// System.Action`1<UnityEngine.XR.ARFoundation.ARPlaneBoundaryChangedEventArgs>
struct Action_1_tBBDACDE0F7A9CD846DD9E0B8E74D5E0CC3D6B593;
// System.Action`1<UnityEngine.XR.ARFoundation.ARPlanesChangedEventArgs>
struct Action_1_tCEBED0DA57F23A7A92A05B380E69C5D67FEE4C25;
// System.Action`1<UnityEngine.XR.ARFoundation.ARSessionStateChangedEventArgs>
struct Action_1_t5DF84322FFE12A24465E48164961CD724D109521;
// System.Collections.Generic.Dictionary`2<UnityEngine.XR.ARSubsystems.TrackableId,UnityEngine.XR.ARFoundation.ARPlane>
struct Dictionary_2_t712D6B074B6A493ABA07777BD08F1A62D9DE2534;
// System.Collections.Generic.Dictionary`2<UnityEngine.XR.ARSubsystems.TrackableId,System.Object>
struct Dictionary_2_t0A52DB56FD1E7867C489BCD59361434AD1DACF83;
// System.Collections.Generic.List`1<UnityEngine.XR.ARFoundation.ARPlane>
struct List_1_t5B83F86DDCFED5733853B8CB94D674B62A54C276;
// System.Collections.Generic.List`1<UnityEngine.XR.ARFoundation.ARTextureInfo>
struct List_1_t737CDD0B911D91DA30FC544763F10FFC47C3C74A;
// System.Collections.Generic.List`1<UnityEngine.CanvasGroup>
struct List_1_t34AA4AF4E7352129CA58045901530E41445AC16D;
// System.Collections.Generic.List`1<FmodResonanceAudioRoom>
struct List_1_t7DC37F87EBBCA84046EA55A3F9E0440CB00F79D7;
// System.Collections.Generic.List`1<System.Int32>
struct List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7;
// System.Collections.Generic.List`1<System.Object>
struct List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5;
// System.Collections.Generic.List`1<System.String>
struct List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3;
// System.Collections.Generic.List`1<UnityEngine.Texture2D>
struct List_1_t67CA4414F3746D817D6D1A1D16FD9E7C85CED2D7;
// System.Collections.Generic.List`1<UnityEngine.XR.ARSubsystems.XRCameraSubsystem>
struct List_1_t69444E6E06FA6776283024710ADC0302F2700BFD;
// System.Collections.Generic.List`1<UnityEngine.XR.ARSubsystems.XRCameraSubsystemDescriptor>
struct List_1_t5ACA7E75885D8B9D7B85548B84BF43976A5038DC;
// System.Collections.Generic.List`1<UnityEngine.XR.ARSubsystems.XRPlaneSubsystem>
struct List_1_t42260E8F78DDBD1A6947677665395B70FA8816C1;
// System.Collections.Generic.List`1<UnityEngine.XR.ARSubsystems.XRPlaneSubsystemDescriptor>
struct List_1_t6D435690E62CDB3645DB1A76F3B7B8B6069BDB4F;
// System.Collections.Generic.List`1<UnityEngine.XR.ARSubsystems.XRSessionSubsystem>
struct List_1_tC3943A359D121C56123E4142DF967EF5FCCAF2C3;
// System.Collections.Generic.List`1<UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor>
struct List_1_tDA25459A722F5B00FFE84463D9952660BC3F6673;
// System.Collections.Generic.List`1<UnityEngine.UI.Dropdown/DropdownItem>
struct List_1_t4CFF6A6E1A912AE4990A34B2AA4A1FE2C9FB0033;
// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>
struct TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3;
// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.FloatTween>
struct TweenRunner_1_t428873023FD8831B6DCE3CBD53ADD7D37AC8222D;
// UnityEngine.Events.UnityAction`1<System.Int32>
struct UnityAction_1_t5CF46572372725E6225588C466A7AF5C8597AA79;
// UnityEngine.Events.UnityEvent`1<System.Int32>
struct UnityEvent_1_tB235B5DAD099AC425DC059D10DEB8B97A35E2BBF;
// FMOD.Studio.Bank[]
struct BankU5BU5D_tB08E6B185C9E39F95B976FBA7D3C4839AD7C951E;
// FMOD.Studio.Bus[]
struct BusU5BU5D_t081E59272ADFB900EE6CCE098E088ED7E905F1CD;
// System.Byte[]
struct ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726;
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// System.Delegate[]
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;
// IndoorAtlas.Floorplan[]
struct FloorplanU5BU5D_t010C109ECEC056D765813BED176BA0EC3738AFDA;
// FmodResonanceAudioRoom[]
struct FmodResonanceAudioRoomU5BU5D_t42E46CC99CD9F831E33022F05E74B106AA16097D;
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642;
// IndoorAtlas.Geofence[]
struct GeofenceU5BU5D_tA64F9F5244092E3038F567AC7F3CABCB069ABCF1;
// IndoorAtlas.IndoorAtlasSession[]
struct IndoorAtlasSessionU5BU5D_t9AD63F9432C1B91572F9BA61CB38F80198F4D3A1;
// System.IntPtr[]
struct IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6;
// System.Object[]
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;
// IndoorAtlas.POI[]
struct POIU5BU5D_t04FA68210CCDCD2EA133D94A53071C5B93CBF497;
// IndoorAtlas.RouteLeg[]
struct RouteLegU5BU5D_t4F0BC68FE5D3DA7B5E9CB41B550A29E95A78F501;
// UnityEngine.UI.Selectable[]
struct SelectableU5BU5D_tECF9F5BDBF0652A937D18F10C883EFDAE2E62535;
// System.Single[]
struct SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971;
// System.String[]
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A;
// System.Type[]
struct TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755;
// UnityEngine.UIVertex[]
struct UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4;
// IndoorAtlas.WGS84[]
struct WGS84U5BU5D_tE537866AC92758B08126411AF6304529432521D4;
// UnityEngine.XR.ARFoundation.ARCameraManager
struct ARCameraManager_tD802D88B523419FD1AC898539EE734DA20903874;
// UnityEngine.XR.ARFoundation.ARPlane
struct ARPlane_t6336725EC68CE9029844CBE72A7FE7374AD74891;
// UnityEngine.XR.ARFoundation.ARPlaneManager
struct ARPlaneManager_t4700B0BC3E8B6CD35F8D925701C89A5A21DDBAD4;
// UnityEngine.XR.ARFoundation.ARSessionOrigin
struct ARSessionOrigin_tA15648434106370D592D12C00B93054EC6CE6AE1;
// UnityEngine.UI.AnimationTriggers
struct AnimationTriggers_tF38CA7FA631709E096B57D732668D86081F44C11;
// System.AsyncCallback
struct AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA;
// System.Reflection.Binder
struct Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30;
// UnityEngine.Camera
struct Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C;
// UnityEngine.Canvas
struct Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA;
// UnityEngine.CanvasRenderer
struct CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E;
// UnityEngine.Component
struct Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684;
// System.DelegateData
struct DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288;
// UnityEngine.UI.Dropdown
struct Dropdown_t099F5232BB75810BC79EED6E27DDCED46C3BCD96;
// System.Exception
struct Exception_t;
// IndoorAtlas.Floorplan
struct Floorplan_t21C6DA32409E96BEF667B09E492E2CA79EA39A16;
// FmodResonanceAudioRoom
struct FmodResonanceAudioRoom_t61B0C3B3436B4E982A0D69FB7F0B710C551B7089;
// UnityEngine.UI.FontData
struct FontData_t0F1E9B3ED8136CD40782AC9A6AFB69CAD127C738;
// UnityEngine.GameObject
struct GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319;
// IndoorAtlas.Geofence
struct Geofence_t33AAF74181EDD529375E887DD0C9A1F9E79AE0DE;
// UnityEngine.UI.Graphic
struct Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24;
// IndoorAtlas.Heading
struct Heading_t690A771FCF76A48B0B0FADBE2B864C6D2F2B5D80;
// System.IAsyncResult
struct IAsyncResult_tC9F97BF36FCF122D29D3101D80642278297BF370;
// System.Collections.IDictionary
struct IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A;
// UnityEngine.UI.Image
struct Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C;
// IndoorAtlas.IndoorAtlasARWayfinding
struct IndoorAtlasARWayfinding_tEC5C5F2513334FDA2BC5A261CB74E6E413413904;
// IndoorAtlas.IndoorAtlasSession
struct IndoorAtlasSession_t481C53C3F6FF3CBB05117D2F9D20BCCE12FB511F;
// IndoorAtlas.IndoorAtlasUIInformationProvider
struct IndoorAtlasUIInformationProvider_t78A97B431F32A79E128252E349214170A053E060;
// IndoorAtlas.IndoorAtlasVRCamera
struct IndoorAtlasVRCamera_tD5776445679A7A38947F480DCF1D247EC494509C;
// System.InvalidOperationException
struct InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB;
// UnityEngine.Events.InvokableCallList
struct InvokableCallList_tB7C66AA0C00F9C102C8BDC17A144E569AC7527A9;
// IndoorAtlas.LatLngFloor
struct LatLngFloor_t4B72E155829094591933053C9C85E867C1C255C3;
// IndoorAtlas.Location
struct Location_t80005B8E8D4EB97F3D3B810B36FECF5F1D064FF7;
// IndoorAtlas.LocationManager
struct LocationManager_t8BEF4C1AFA85AB524CFB93A28DF2478A26E27401;
// UnityEngine.Material
struct Material_t8927C00353A72755313F046D0CE85178AE8218EE;
// System.Reflection.MemberFilter
struct MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81;
// UnityEngine.Mesh
struct Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A;
// UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A;
// IndoorAtlas.Orientation
struct Orientation_tA3C51FC6A527FD5C23B350DAE81C5FA79A0510AF;
// IndoorAtlas.POI
struct POI_t8DBBCA0F0D1DFE03487EF4D0D91C39BA68B90574;
// UnityEngine.Events.PersistentCallGroup
struct PersistentCallGroup_t9A1D83DA2BA3118C103FA87D93CE92557A956FDC;
// UnityEngine.UI.RectMask2D
struct RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15;
// UnityEngine.RectTransform
struct RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072;
// System.Text.RegularExpressions.Regex
struct Regex_t90F443D398F44965EA241A652ED75DF5BA072A1F;
// IndoorAtlas.Region
struct Region_t68EA17CE90BDC22C15E4531418B3B123519AADEB;
// IndoorAtlas.Route
struct Route_t8BB2F4499BD36E373F67536902ECDFF016551E5F;
// IndoorAtlas.RouteLeg
struct RouteLeg_t30013ADF5AD884757D65D6E9612F984618622AC6;
// IndoorAtlas.RoutePoint
struct RoutePoint_t1C48DD0E7B4B48088F298CD541233BEE69A3A760;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F;
// UnityEngine.UI.Selectable
struct Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD;
// UnityEngine.Sprite
struct Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9;
// IndoorAtlas.Status
struct Status_t18AA7FCE4BA6D9E03B84C464B649B6E514066005;
// System.String
struct String_t;
// UnityEngine.UI.Text
struct Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1;
// UnityEngine.TextGenerator
struct TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70;
// UnityEngine.Texture
struct Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE;
// UnityEngine.Texture2D
struct Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF;
// UnityEngine.Transform
struct Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1;
// System.Type
struct Type_t;
// UnityEngine.Events.UnityAction
struct UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099;
// IndoorAtlas.Venue
struct Venue_t9B5BBEE12D028C4C1C86A978B6601550D25336B6;
// UnityEngine.UI.VertexHelper
struct VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;
// IndoorAtlas.WGS84
struct WGS84_t38213D604BC65CB5C07F37093BA63B9E04E6D816;
// IndoorAtlas.WGSConversion
struct WGSConversion_t45A89CB883E2ECDC78D8365D7F3FC2C08871546C;
// UnityEngine.XR.ARSubsystems.XRCameraSubsystem
struct XRCameraSubsystem_t3B32F6EA8A2E4D23AF240B5D21C34759D2613AC9;
// UnityEngine.XR.ARSubsystems.XRPlaneSubsystem
struct XRPlaneSubsystem_t7C76F9D2C993B0DC38F0A7CDCE745EA7C12417EE;
// UnityEngine.XR.ARSubsystems.XRSessionSubsystem
struct XRSessionSubsystem_t8AD3C01568AA19BF038D23A6031FF9814CAF93CD;
// UnityEngine.Camera/CameraCallback
struct CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D;
// UnityEngine.UI.Dropdown/DropdownEvent
struct DropdownEvent_tEB2C75C3DBC789936B31D9A979FD62E047846CFB;
// UnityEngine.UI.Dropdown/OptionData
struct OptionData_t5F665DC13C1E4307727D66ECC1100B3A77E3E857;
// UnityEngine.UI.Dropdown/OptionDataList
struct OptionDataList_t524EBDB7A2B178269FD5B4740108D0EC6404B4B6;
// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent
struct CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4;

IL2CPP_EXTERN_C RuntimeClass* ARSession_t0ECAFEF41CF9183D33E40174F849B07943DC5D3B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_1_tA34B23CE57B7192055F9BF04AA14FCCB2ED91C68_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* FmodResonanceAudio_t1E98D428CDB6E2CB55939C63C147AA39834A72DB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IntPtr_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t7DC37F87EBBCA84046EA55A3F9E0440CB00F79D7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* LocationManager_t8BEF4C1AFA85AB524CFB93A28DF2478A26E27401_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Marshal_tEBAFAE20369FCB1B38C49C4E27A8D8C2C4B55058_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Math_tA269614262430118C9FC5C4D9EF4F61C812568F0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RuntimeManager_t1DD0703C1A7473D65A44439D647D7C6B0C36C8FF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityAction_1_t5CF46572372725E6225588C466A7AF5C8597AA79_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral04A5492DE7135826F34AFDA6E93B88BA6DCEE868;
IL2CPP_EXTERN_C String_t* _stringLiteral1ED5181FBE67E31DCCDB86EAB86A65762943BCC3;
IL2CPP_EXTERN_C String_t* _stringLiteral2C10D33DD497595546CEA8AEB39B124AD2324976;
IL2CPP_EXTERN_C String_t* _stringLiteral2C8BBB0286493CA02782F8D9026786BD75AAC371;
IL2CPP_EXTERN_C String_t* _stringLiteral3E81398C712E570F531A0E2EFFA97B407F0CEC89;
IL2CPP_EXTERN_C String_t* _stringLiteral548D93DDB2AC6B24373148B19D9A625571AB2318;
IL2CPP_EXTERN_C String_t* _stringLiteral560FF11FB71A07916C2C601DFDC9A5A18BE76F6D;
IL2CPP_EXTERN_C String_t* _stringLiteral56D3B291E760707F08898CB3B0AD1F233EA3D827;
IL2CPP_EXTERN_C String_t* _stringLiteral5B94E24E2B9C3F0FC9E5656838E34EB00EE36E59;
IL2CPP_EXTERN_C String_t* _stringLiteral6086233EAA3983492A99F13A738D20CA3332EE2C;
IL2CPP_EXTERN_C String_t* _stringLiteral8097347C46BC229B8FEA1670DC119923EE16226C;
IL2CPP_EXTERN_C String_t* _stringLiteral9D41C7D7B03563D9E0800844F56DEC5FD63A32E0;
IL2CPP_EXTERN_C String_t* _stringLiteralC7D6E91349A59BC87552BB7CC509A937FA65C332;
IL2CPP_EXTERN_C String_t* _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
IL2CPP_EXTERN_C String_t* _stringLiteralE4A07E5ADA399BB3ED12B8C3A0539F2195289AFF;
IL2CPP_EXTERN_C String_t* _stringLiteralFE9473D9CC7E3B6ABB3637C685E3B1D3EC4F06B3;
IL2CPP_EXTERN_C const RuntimeMethod* ARTrackableManager_5_get_trackables_m1868AA38C59A0E75D2FA03964898FB15577FD7E9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Action_1__ctor_m5F656FA67BDEAF94CFE4483389771AB19C419D16_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisARCameraManager_tD802D88B523419FD1AC898539EE734DA20903874_m0CA6E904AA2D0AC7188DA8E92C050226DEC7171C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisCamera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_mE17146EF5B0D8E9F9D2D2D94567BF211AD00D320_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_mAD42DB33FFA5B95D44127214BCD44B64BE5FE094_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m3D5E7C33ACC22CA9FBB0725D35D75D86592FFB29_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* IndoorAtlasARWayfinding_OnArFrame_m783D09FDFC9903671429BE7AC498AA66D58C2A21_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* IndoorAtlasARWayfinding_OnBeforeRender_m596D9DD4ED9CB8F244B8E400256CB0F5F5A09BD5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* IndoorAtlasUIInformationProvider_U3CAwakeU3Eb__23_0_m13DC550C25F75BF93B575A856B517CB3882036A4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* IndoorAtlasUIInformationProvider_U3Cset_poiU3Eb__19_0_mEDF0386C0F908718BBAE10DA93887EDD1ACA89AE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* JsonUtility_FromJson_TisHeading_t690A771FCF76A48B0B0FADBE2B864C6D2F2B5D80_mEB4C078CFC309C41A02510F20F91D19F32932F58_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* JsonUtility_FromJson_TisLocation_t80005B8E8D4EB97F3D3B810B36FECF5F1D064FF7_m698BA6FDCBCB81AEAC6118A324AF03274726C959_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* JsonUtility_FromJson_TisOrientation_tA3C51FC6A527FD5C23B350DAE81C5FA79A0510AF_m34164B15BDFF3CDE8299911CB22DCD6895CB1EA6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* JsonUtility_FromJson_TisRegion_t68EA17CE90BDC22C15E4531418B3B123519AADEB_m48D34C14B1AF378686531A102CABBA0F9DA3D915_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* JsonUtility_FromJson_TisRoute_t8BB2F4499BD36E373F67536902ECDFF016551E5F_mFFABDF2BA9C572F7539565B162CB3B17F1B1BC79_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* JsonUtility_FromJson_TisStatus_t18AA7FCE4BA6D9E03B84C464B649B6E514066005_mAD9AEB40892CC21237D3623B4BDCED6794645974_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m627ED3F7C50096BB8934F778CB980E79483BD2AE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_mA62471E539473C242E0441E4355E41CD47D3CCFC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Contains_mD09C8AC0B27E9264130B1AD64B2C4B869C533402_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Remove_mD821441E24446F8BB5AECD26CA55EDCFB2B93F81_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m30C52A4F2828D86CA3FAB0B1B583948F4DA9F1F9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m4F7CAAFF666B4EB64E83D971BA5BE61F228D0D33_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m2EEAA0229AB41CEA9340261A3C0BC21C50D0875B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_mEA6C6E5BF0130FF00BDA1986167ACD32A5D07EAF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* LocationManager_Init_mF9ECC915841247295BE7BC0E5C85A5E822B4ADB7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Marshal_StructureToPtr_TisRoomProperties_tE26D849980D0755AE6E6CED6F90D5040FF8189CE_m1C0F38968295AF9ADFB26775FCC16F9669B79D8F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_FindObjectsOfType_TisIndoorAtlasSession_t481C53C3F6FF3CBB05117D2F9D20BCCE12FB511F_m74FECDBDD2896EF7C3E03FA97E964C87916D4574_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m26431AC51B9B7A43FBABD10B4923B72B0C578F33_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TrackableCollection_1_GetEnumerator_mAB63B26E604CFE12281E5B212826C7609CF11A5C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityAction_1__ctor_m595DA2ECB187B2DF951D640BFEBCE02F3F800A3F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_1_AddListener_mFCFAC8ACA3F75283268DC2629ADEB5504E8FC0C2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_1_RemoveListener_m0DDD8A7A01D83C10E72C71631F8487FE817B264D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* WGSConversion_WGStoEN_m47E33E7C22C975A2786EDF1ADDECAC88C45DCAD6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeType* RoomProperties_tE26D849980D0755AE6E6CED6F90D5040FF8189CE_0_0_0_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct BankU5BU5D_tB08E6B185C9E39F95B976FBA7D3C4839AD7C951E;
struct BusU5BU5D_t081E59272ADFB900EE6CCE098E088ED7E905F1CD;
struct ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726;
struct GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642;
struct IndoorAtlasSessionU5BU5D_t9AD63F9432C1B91572F9BA61CB38F80198F4D3A1;
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;
struct POIU5BU5D_t04FA68210CCDCD2EA133D94A53071C5B93CBF497;
struct SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct  U3CModuleU3E_t00DDB26693B7BCCD40544DBD546A67E6CCF39740 
{
public:

public:
};


// System.Object


// System.Collections.Generic.List`1<FmodResonanceAudioRoom>
struct  List_1_t7DC37F87EBBCA84046EA55A3F9E0440CB00F79D7  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	FmodResonanceAudioRoomU5BU5D_t42E46CC99CD9F831E33022F05E74B106AA16097D* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t7DC37F87EBBCA84046EA55A3F9E0440CB00F79D7, ____items_1)); }
	inline FmodResonanceAudioRoomU5BU5D_t42E46CC99CD9F831E33022F05E74B106AA16097D* get__items_1() const { return ____items_1; }
	inline FmodResonanceAudioRoomU5BU5D_t42E46CC99CD9F831E33022F05E74B106AA16097D** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(FmodResonanceAudioRoomU5BU5D_t42E46CC99CD9F831E33022F05E74B106AA16097D* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t7DC37F87EBBCA84046EA55A3F9E0440CB00F79D7, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t7DC37F87EBBCA84046EA55A3F9E0440CB00F79D7, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t7DC37F87EBBCA84046EA55A3F9E0440CB00F79D7, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t7DC37F87EBBCA84046EA55A3F9E0440CB00F79D7_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	FmodResonanceAudioRoomU5BU5D_t42E46CC99CD9F831E33022F05E74B106AA16097D* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t7DC37F87EBBCA84046EA55A3F9E0440CB00F79D7_StaticFields, ____emptyArray_5)); }
	inline FmodResonanceAudioRoomU5BU5D_t42E46CC99CD9F831E33022F05E74B106AA16097D* get__emptyArray_5() const { return ____emptyArray_5; }
	inline FmodResonanceAudioRoomU5BU5D_t42E46CC99CD9F831E33022F05E74B106AA16097D** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(FmodResonanceAudioRoomU5BU5D_t42E46CC99CD9F831E33022F05E74B106AA16097D* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<System.Object>
struct  List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5, ____items_1)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get__items_1() const { return ____items_1; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5_StaticFields, ____emptyArray_5)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get__emptyArray_5() const { return ____emptyArray_5; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<System.String>
struct  List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3, ____items_1)); }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* get__items_1() const { return ____items_1; }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3_StaticFields, ____emptyArray_5)); }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* get__emptyArray_5() const { return ____emptyArray_5; }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};

struct Il2CppArrayBounds;

// System.Array


// IndoorAtlas.Floorplan
struct  Floorplan_t21C6DA32409E96BEF667B09E492E2CA79EA39A16  : public RuntimeObject
{
public:
	// System.String IndoorAtlas.Floorplan::id
	String_t* ___id_0;
	// System.String IndoorAtlas.Floorplan::name
	String_t* ___name_1;
	// System.String IndoorAtlas.Floorplan::imageUrl
	String_t* ___imageUrl_2;
	// System.UInt32 IndoorAtlas.Floorplan::width
	uint32_t ___width_3;
	// System.UInt32 IndoorAtlas.Floorplan::height
	uint32_t ___height_4;
	// System.Single IndoorAtlas.Floorplan::pixelToMeterConversion
	float ___pixelToMeterConversion_5;
	// System.Single IndoorAtlas.Floorplan::meterToPixelConversion
	float ___meterToPixelConversion_6;
	// System.Single IndoorAtlas.Floorplan::widthMeters
	float ___widthMeters_7;
	// System.Single IndoorAtlas.Floorplan::heightMeters
	float ___heightMeters_8;
	// System.Int32 IndoorAtlas.Floorplan::floor
	int32_t ___floor_9;

public:
	inline static int32_t get_offset_of_id_0() { return static_cast<int32_t>(offsetof(Floorplan_t21C6DA32409E96BEF667B09E492E2CA79EA39A16, ___id_0)); }
	inline String_t* get_id_0() const { return ___id_0; }
	inline String_t** get_address_of_id_0() { return &___id_0; }
	inline void set_id_0(String_t* value)
	{
		___id_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___id_0), (void*)value);
	}

	inline static int32_t get_offset_of_name_1() { return static_cast<int32_t>(offsetof(Floorplan_t21C6DA32409E96BEF667B09E492E2CA79EA39A16, ___name_1)); }
	inline String_t* get_name_1() const { return ___name_1; }
	inline String_t** get_address_of_name_1() { return &___name_1; }
	inline void set_name_1(String_t* value)
	{
		___name_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___name_1), (void*)value);
	}

	inline static int32_t get_offset_of_imageUrl_2() { return static_cast<int32_t>(offsetof(Floorplan_t21C6DA32409E96BEF667B09E492E2CA79EA39A16, ___imageUrl_2)); }
	inline String_t* get_imageUrl_2() const { return ___imageUrl_2; }
	inline String_t** get_address_of_imageUrl_2() { return &___imageUrl_2; }
	inline void set_imageUrl_2(String_t* value)
	{
		___imageUrl_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___imageUrl_2), (void*)value);
	}

	inline static int32_t get_offset_of_width_3() { return static_cast<int32_t>(offsetof(Floorplan_t21C6DA32409E96BEF667B09E492E2CA79EA39A16, ___width_3)); }
	inline uint32_t get_width_3() const { return ___width_3; }
	inline uint32_t* get_address_of_width_3() { return &___width_3; }
	inline void set_width_3(uint32_t value)
	{
		___width_3 = value;
	}

	inline static int32_t get_offset_of_height_4() { return static_cast<int32_t>(offsetof(Floorplan_t21C6DA32409E96BEF667B09E492E2CA79EA39A16, ___height_4)); }
	inline uint32_t get_height_4() const { return ___height_4; }
	inline uint32_t* get_address_of_height_4() { return &___height_4; }
	inline void set_height_4(uint32_t value)
	{
		___height_4 = value;
	}

	inline static int32_t get_offset_of_pixelToMeterConversion_5() { return static_cast<int32_t>(offsetof(Floorplan_t21C6DA32409E96BEF667B09E492E2CA79EA39A16, ___pixelToMeterConversion_5)); }
	inline float get_pixelToMeterConversion_5() const { return ___pixelToMeterConversion_5; }
	inline float* get_address_of_pixelToMeterConversion_5() { return &___pixelToMeterConversion_5; }
	inline void set_pixelToMeterConversion_5(float value)
	{
		___pixelToMeterConversion_5 = value;
	}

	inline static int32_t get_offset_of_meterToPixelConversion_6() { return static_cast<int32_t>(offsetof(Floorplan_t21C6DA32409E96BEF667B09E492E2CA79EA39A16, ___meterToPixelConversion_6)); }
	inline float get_meterToPixelConversion_6() const { return ___meterToPixelConversion_6; }
	inline float* get_address_of_meterToPixelConversion_6() { return &___meterToPixelConversion_6; }
	inline void set_meterToPixelConversion_6(float value)
	{
		___meterToPixelConversion_6 = value;
	}

	inline static int32_t get_offset_of_widthMeters_7() { return static_cast<int32_t>(offsetof(Floorplan_t21C6DA32409E96BEF667B09E492E2CA79EA39A16, ___widthMeters_7)); }
	inline float get_widthMeters_7() const { return ___widthMeters_7; }
	inline float* get_address_of_widthMeters_7() { return &___widthMeters_7; }
	inline void set_widthMeters_7(float value)
	{
		___widthMeters_7 = value;
	}

	inline static int32_t get_offset_of_heightMeters_8() { return static_cast<int32_t>(offsetof(Floorplan_t21C6DA32409E96BEF667B09E492E2CA79EA39A16, ___heightMeters_8)); }
	inline float get_heightMeters_8() const { return ___heightMeters_8; }
	inline float* get_address_of_heightMeters_8() { return &___heightMeters_8; }
	inline void set_heightMeters_8(float value)
	{
		___heightMeters_8 = value;
	}

	inline static int32_t get_offset_of_floor_9() { return static_cast<int32_t>(offsetof(Floorplan_t21C6DA32409E96BEF667B09E492E2CA79EA39A16, ___floor_9)); }
	inline int32_t get_floor_9() const { return ___floor_9; }
	inline int32_t* get_address_of_floor_9() { return &___floor_9; }
	inline void set_floor_9(int32_t value)
	{
		___floor_9 = value;
	}
};


// IndoorAtlas.Geofence
struct  Geofence_t33AAF74181EDD529375E887DD0C9A1F9E79AE0DE  : public RuntimeObject
{
public:
	// System.String IndoorAtlas.Geofence::id
	String_t* ___id_0;
	// System.String IndoorAtlas.Geofence::name
	String_t* ___name_1;
	// System.String IndoorAtlas.Geofence::payload
	String_t* ___payload_2;
	// IndoorAtlas.LatLngFloor IndoorAtlas.Geofence::position
	LatLngFloor_t4B72E155829094591933053C9C85E867C1C255C3 * ___position_3;
	// IndoorAtlas.WGS84[] IndoorAtlas.Geofence::points
	WGS84U5BU5D_tE537866AC92758B08126411AF6304529432521D4* ___points_4;

public:
	inline static int32_t get_offset_of_id_0() { return static_cast<int32_t>(offsetof(Geofence_t33AAF74181EDD529375E887DD0C9A1F9E79AE0DE, ___id_0)); }
	inline String_t* get_id_0() const { return ___id_0; }
	inline String_t** get_address_of_id_0() { return &___id_0; }
	inline void set_id_0(String_t* value)
	{
		___id_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___id_0), (void*)value);
	}

	inline static int32_t get_offset_of_name_1() { return static_cast<int32_t>(offsetof(Geofence_t33AAF74181EDD529375E887DD0C9A1F9E79AE0DE, ___name_1)); }
	inline String_t* get_name_1() const { return ___name_1; }
	inline String_t** get_address_of_name_1() { return &___name_1; }
	inline void set_name_1(String_t* value)
	{
		___name_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___name_1), (void*)value);
	}

	inline static int32_t get_offset_of_payload_2() { return static_cast<int32_t>(offsetof(Geofence_t33AAF74181EDD529375E887DD0C9A1F9E79AE0DE, ___payload_2)); }
	inline String_t* get_payload_2() const { return ___payload_2; }
	inline String_t** get_address_of_payload_2() { return &___payload_2; }
	inline void set_payload_2(String_t* value)
	{
		___payload_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___payload_2), (void*)value);
	}

	inline static int32_t get_offset_of_position_3() { return static_cast<int32_t>(offsetof(Geofence_t33AAF74181EDD529375E887DD0C9A1F9E79AE0DE, ___position_3)); }
	inline LatLngFloor_t4B72E155829094591933053C9C85E867C1C255C3 * get_position_3() const { return ___position_3; }
	inline LatLngFloor_t4B72E155829094591933053C9C85E867C1C255C3 ** get_address_of_position_3() { return &___position_3; }
	inline void set_position_3(LatLngFloor_t4B72E155829094591933053C9C85E867C1C255C3 * value)
	{
		___position_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___position_3), (void*)value);
	}

	inline static int32_t get_offset_of_points_4() { return static_cast<int32_t>(offsetof(Geofence_t33AAF74181EDD529375E887DD0C9A1F9E79AE0DE, ___points_4)); }
	inline WGS84U5BU5D_tE537866AC92758B08126411AF6304529432521D4* get_points_4() const { return ___points_4; }
	inline WGS84U5BU5D_tE537866AC92758B08126411AF6304529432521D4** get_address_of_points_4() { return &___points_4; }
	inline void set_points_4(WGS84U5BU5D_tE537866AC92758B08126411AF6304529432521D4* value)
	{
		___points_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___points_4), (void*)value);
	}
};


// IndoorAtlas.Heading
struct  Heading_t690A771FCF76A48B0B0FADBE2B864C6D2F2B5D80  : public RuntimeObject
{
public:
	// System.Double IndoorAtlas.Heading::heading
	double ___heading_0;
	// System.Int64 IndoorAtlas.Heading::timestamp
	int64_t ___timestamp_1;

public:
	inline static int32_t get_offset_of_heading_0() { return static_cast<int32_t>(offsetof(Heading_t690A771FCF76A48B0B0FADBE2B864C6D2F2B5D80, ___heading_0)); }
	inline double get_heading_0() const { return ___heading_0; }
	inline double* get_address_of_heading_0() { return &___heading_0; }
	inline void set_heading_0(double value)
	{
		___heading_0 = value;
	}

	inline static int32_t get_offset_of_timestamp_1() { return static_cast<int32_t>(offsetof(Heading_t690A771FCF76A48B0B0FADBE2B864C6D2F2B5D80, ___timestamp_1)); }
	inline int64_t get_timestamp_1() const { return ___timestamp_1; }
	inline int64_t* get_address_of_timestamp_1() { return &___timestamp_1; }
	inline void set_timestamp_1(int64_t value)
	{
		___timestamp_1 = value;
	}
};


// IndoorAtlas.LatLngFloor
struct  LatLngFloor_t4B72E155829094591933053C9C85E867C1C255C3  : public RuntimeObject
{
public:
	// IndoorAtlas.WGS84 IndoorAtlas.LatLngFloor::coordinate
	WGS84_t38213D604BC65CB5C07F37093BA63B9E04E6D816 * ___coordinate_0;
	// System.Int32 IndoorAtlas.LatLngFloor::floor
	int32_t ___floor_1;

public:
	inline static int32_t get_offset_of_coordinate_0() { return static_cast<int32_t>(offsetof(LatLngFloor_t4B72E155829094591933053C9C85E867C1C255C3, ___coordinate_0)); }
	inline WGS84_t38213D604BC65CB5C07F37093BA63B9E04E6D816 * get_coordinate_0() const { return ___coordinate_0; }
	inline WGS84_t38213D604BC65CB5C07F37093BA63B9E04E6D816 ** get_address_of_coordinate_0() { return &___coordinate_0; }
	inline void set_coordinate_0(WGS84_t38213D604BC65CB5C07F37093BA63B9E04E6D816 * value)
	{
		___coordinate_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___coordinate_0), (void*)value);
	}

	inline static int32_t get_offset_of_floor_1() { return static_cast<int32_t>(offsetof(LatLngFloor_t4B72E155829094591933053C9C85E867C1C255C3, ___floor_1)); }
	inline int32_t get_floor_1() const { return ___floor_1; }
	inline int32_t* get_address_of_floor_1() { return &___floor_1; }
	inline void set_floor_1(int32_t value)
	{
		___floor_1 = value;
	}
};


// IndoorAtlas.Location
struct  Location_t80005B8E8D4EB97F3D3B810B36FECF5F1D064FF7  : public RuntimeObject
{
public:
	// System.Single IndoorAtlas.Location::accuracy
	float ___accuracy_0;
	// System.Double IndoorAtlas.Location::altitude
	double ___altitude_1;
	// System.Single IndoorAtlas.Location::bearing
	float ___bearing_2;
	// IndoorAtlas.LatLngFloor IndoorAtlas.Location::position
	LatLngFloor_t4B72E155829094591933053C9C85E867C1C255C3 * ___position_3;
	// System.Int64 IndoorAtlas.Location::timestamp
	int64_t ___timestamp_4;

public:
	inline static int32_t get_offset_of_accuracy_0() { return static_cast<int32_t>(offsetof(Location_t80005B8E8D4EB97F3D3B810B36FECF5F1D064FF7, ___accuracy_0)); }
	inline float get_accuracy_0() const { return ___accuracy_0; }
	inline float* get_address_of_accuracy_0() { return &___accuracy_0; }
	inline void set_accuracy_0(float value)
	{
		___accuracy_0 = value;
	}

	inline static int32_t get_offset_of_altitude_1() { return static_cast<int32_t>(offsetof(Location_t80005B8E8D4EB97F3D3B810B36FECF5F1D064FF7, ___altitude_1)); }
	inline double get_altitude_1() const { return ___altitude_1; }
	inline double* get_address_of_altitude_1() { return &___altitude_1; }
	inline void set_altitude_1(double value)
	{
		___altitude_1 = value;
	}

	inline static int32_t get_offset_of_bearing_2() { return static_cast<int32_t>(offsetof(Location_t80005B8E8D4EB97F3D3B810B36FECF5F1D064FF7, ___bearing_2)); }
	inline float get_bearing_2() const { return ___bearing_2; }
	inline float* get_address_of_bearing_2() { return &___bearing_2; }
	inline void set_bearing_2(float value)
	{
		___bearing_2 = value;
	}

	inline static int32_t get_offset_of_position_3() { return static_cast<int32_t>(offsetof(Location_t80005B8E8D4EB97F3D3B810B36FECF5F1D064FF7, ___position_3)); }
	inline LatLngFloor_t4B72E155829094591933053C9C85E867C1C255C3 * get_position_3() const { return ___position_3; }
	inline LatLngFloor_t4B72E155829094591933053C9C85E867C1C255C3 ** get_address_of_position_3() { return &___position_3; }
	inline void set_position_3(LatLngFloor_t4B72E155829094591933053C9C85E867C1C255C3 * value)
	{
		___position_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___position_3), (void*)value);
	}

	inline static int32_t get_offset_of_timestamp_4() { return static_cast<int32_t>(offsetof(Location_t80005B8E8D4EB97F3D3B810B36FECF5F1D064FF7, ___timestamp_4)); }
	inline int64_t get_timestamp_4() const { return ___timestamp_4; }
	inline int64_t* get_address_of_timestamp_4() { return &___timestamp_4; }
	inline void set_timestamp_4(int64_t value)
	{
		___timestamp_4 = value;
	}
};


// System.Reflection.MemberInfo
struct  MemberInfo_t  : public RuntimeObject
{
public:

public:
};


// IndoorAtlas.Orientation
struct  Orientation_tA3C51FC6A527FD5C23B350DAE81C5FA79A0510AF  : public RuntimeObject
{
public:
	// System.Double IndoorAtlas.Orientation::x
	double ___x_0;
	// System.Double IndoorAtlas.Orientation::y
	double ___y_1;
	// System.Double IndoorAtlas.Orientation::z
	double ___z_2;
	// System.Double IndoorAtlas.Orientation::w
	double ___w_3;
	// System.Int64 IndoorAtlas.Orientation::timestamp
	int64_t ___timestamp_4;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Orientation_tA3C51FC6A527FD5C23B350DAE81C5FA79A0510AF, ___x_0)); }
	inline double get_x_0() const { return ___x_0; }
	inline double* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(double value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Orientation_tA3C51FC6A527FD5C23B350DAE81C5FA79A0510AF, ___y_1)); }
	inline double get_y_1() const { return ___y_1; }
	inline double* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(double value)
	{
		___y_1 = value;
	}

	inline static int32_t get_offset_of_z_2() { return static_cast<int32_t>(offsetof(Orientation_tA3C51FC6A527FD5C23B350DAE81C5FA79A0510AF, ___z_2)); }
	inline double get_z_2() const { return ___z_2; }
	inline double* get_address_of_z_2() { return &___z_2; }
	inline void set_z_2(double value)
	{
		___z_2 = value;
	}

	inline static int32_t get_offset_of_w_3() { return static_cast<int32_t>(offsetof(Orientation_tA3C51FC6A527FD5C23B350DAE81C5FA79A0510AF, ___w_3)); }
	inline double get_w_3() const { return ___w_3; }
	inline double* get_address_of_w_3() { return &___w_3; }
	inline void set_w_3(double value)
	{
		___w_3 = value;
	}

	inline static int32_t get_offset_of_timestamp_4() { return static_cast<int32_t>(offsetof(Orientation_tA3C51FC6A527FD5C23B350DAE81C5FA79A0510AF, ___timestamp_4)); }
	inline int64_t get_timestamp_4() const { return ___timestamp_4; }
	inline int64_t* get_address_of_timestamp_4() { return &___timestamp_4; }
	inline void set_timestamp_4(int64_t value)
	{
		___timestamp_4 = value;
	}
};


// IndoorAtlas.POI
struct  POI_t8DBBCA0F0D1DFE03487EF4D0D91C39BA68B90574  : public RuntimeObject
{
public:
	// System.String IndoorAtlas.POI::id
	String_t* ___id_0;
	// System.String IndoorAtlas.POI::name
	String_t* ___name_1;
	// System.String IndoorAtlas.POI::payload
	String_t* ___payload_2;
	// IndoorAtlas.LatLngFloor IndoorAtlas.POI::position
	LatLngFloor_t4B72E155829094591933053C9C85E867C1C255C3 * ___position_3;

public:
	inline static int32_t get_offset_of_id_0() { return static_cast<int32_t>(offsetof(POI_t8DBBCA0F0D1DFE03487EF4D0D91C39BA68B90574, ___id_0)); }
	inline String_t* get_id_0() const { return ___id_0; }
	inline String_t** get_address_of_id_0() { return &___id_0; }
	inline void set_id_0(String_t* value)
	{
		___id_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___id_0), (void*)value);
	}

	inline static int32_t get_offset_of_name_1() { return static_cast<int32_t>(offsetof(POI_t8DBBCA0F0D1DFE03487EF4D0D91C39BA68B90574, ___name_1)); }
	inline String_t* get_name_1() const { return ___name_1; }
	inline String_t** get_address_of_name_1() { return &___name_1; }
	inline void set_name_1(String_t* value)
	{
		___name_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___name_1), (void*)value);
	}

	inline static int32_t get_offset_of_payload_2() { return static_cast<int32_t>(offsetof(POI_t8DBBCA0F0D1DFE03487EF4D0D91C39BA68B90574, ___payload_2)); }
	inline String_t* get_payload_2() const { return ___payload_2; }
	inline String_t** get_address_of_payload_2() { return &___payload_2; }
	inline void set_payload_2(String_t* value)
	{
		___payload_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___payload_2), (void*)value);
	}

	inline static int32_t get_offset_of_position_3() { return static_cast<int32_t>(offsetof(POI_t8DBBCA0F0D1DFE03487EF4D0D91C39BA68B90574, ___position_3)); }
	inline LatLngFloor_t4B72E155829094591933053C9C85E867C1C255C3 * get_position_3() const { return ___position_3; }
	inline LatLngFloor_t4B72E155829094591933053C9C85E867C1C255C3 ** get_address_of_position_3() { return &___position_3; }
	inline void set_position_3(LatLngFloor_t4B72E155829094591933053C9C85E867C1C255C3 * value)
	{
		___position_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___position_3), (void*)value);
	}
};


// IndoorAtlas.Route
struct  Route_t8BB2F4499BD36E373F67536902ECDFF016551E5F  : public RuntimeObject
{
public:
	// IndoorAtlas.RouteLeg[] IndoorAtlas.Route::legs
	RouteLegU5BU5D_t4F0BC68FE5D3DA7B5E9CB41B550A29E95A78F501* ___legs_0;
	// System.Boolean IndoorAtlas.Route::isSuccessful
	bool ___isSuccessful_1;
	// System.String IndoorAtlas.Route::error
	String_t* ___error_2;

public:
	inline static int32_t get_offset_of_legs_0() { return static_cast<int32_t>(offsetof(Route_t8BB2F4499BD36E373F67536902ECDFF016551E5F, ___legs_0)); }
	inline RouteLegU5BU5D_t4F0BC68FE5D3DA7B5E9CB41B550A29E95A78F501* get_legs_0() const { return ___legs_0; }
	inline RouteLegU5BU5D_t4F0BC68FE5D3DA7B5E9CB41B550A29E95A78F501** get_address_of_legs_0() { return &___legs_0; }
	inline void set_legs_0(RouteLegU5BU5D_t4F0BC68FE5D3DA7B5E9CB41B550A29E95A78F501* value)
	{
		___legs_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___legs_0), (void*)value);
	}

	inline static int32_t get_offset_of_isSuccessful_1() { return static_cast<int32_t>(offsetof(Route_t8BB2F4499BD36E373F67536902ECDFF016551E5F, ___isSuccessful_1)); }
	inline bool get_isSuccessful_1() const { return ___isSuccessful_1; }
	inline bool* get_address_of_isSuccessful_1() { return &___isSuccessful_1; }
	inline void set_isSuccessful_1(bool value)
	{
		___isSuccessful_1 = value;
	}

	inline static int32_t get_offset_of_error_2() { return static_cast<int32_t>(offsetof(Route_t8BB2F4499BD36E373F67536902ECDFF016551E5F, ___error_2)); }
	inline String_t* get_error_2() const { return ___error_2; }
	inline String_t** get_address_of_error_2() { return &___error_2; }
	inline void set_error_2(String_t* value)
	{
		___error_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___error_2), (void*)value);
	}
};


// IndoorAtlas.RouteLeg
struct  RouteLeg_t30013ADF5AD884757D65D6E9612F984618622AC6  : public RuntimeObject
{
public:
	// IndoorAtlas.RoutePoint IndoorAtlas.RouteLeg::begin
	RoutePoint_t1C48DD0E7B4B48088F298CD541233BEE69A3A760 * ___begin_0;
	// IndoorAtlas.RoutePoint IndoorAtlas.RouteLeg::end
	RoutePoint_t1C48DD0E7B4B48088F298CD541233BEE69A3A760 * ___end_1;
	// System.Double IndoorAtlas.RouteLeg::length
	double ___length_2;
	// System.Double IndoorAtlas.RouteLeg::direction
	double ___direction_3;
	// System.Int32 IndoorAtlas.RouteLeg::edgeIndex
	int32_t ___edgeIndex_4;

public:
	inline static int32_t get_offset_of_begin_0() { return static_cast<int32_t>(offsetof(RouteLeg_t30013ADF5AD884757D65D6E9612F984618622AC6, ___begin_0)); }
	inline RoutePoint_t1C48DD0E7B4B48088F298CD541233BEE69A3A760 * get_begin_0() const { return ___begin_0; }
	inline RoutePoint_t1C48DD0E7B4B48088F298CD541233BEE69A3A760 ** get_address_of_begin_0() { return &___begin_0; }
	inline void set_begin_0(RoutePoint_t1C48DD0E7B4B48088F298CD541233BEE69A3A760 * value)
	{
		___begin_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___begin_0), (void*)value);
	}

	inline static int32_t get_offset_of_end_1() { return static_cast<int32_t>(offsetof(RouteLeg_t30013ADF5AD884757D65D6E9612F984618622AC6, ___end_1)); }
	inline RoutePoint_t1C48DD0E7B4B48088F298CD541233BEE69A3A760 * get_end_1() const { return ___end_1; }
	inline RoutePoint_t1C48DD0E7B4B48088F298CD541233BEE69A3A760 ** get_address_of_end_1() { return &___end_1; }
	inline void set_end_1(RoutePoint_t1C48DD0E7B4B48088F298CD541233BEE69A3A760 * value)
	{
		___end_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___end_1), (void*)value);
	}

	inline static int32_t get_offset_of_length_2() { return static_cast<int32_t>(offsetof(RouteLeg_t30013ADF5AD884757D65D6E9612F984618622AC6, ___length_2)); }
	inline double get_length_2() const { return ___length_2; }
	inline double* get_address_of_length_2() { return &___length_2; }
	inline void set_length_2(double value)
	{
		___length_2 = value;
	}

	inline static int32_t get_offset_of_direction_3() { return static_cast<int32_t>(offsetof(RouteLeg_t30013ADF5AD884757D65D6E9612F984618622AC6, ___direction_3)); }
	inline double get_direction_3() const { return ___direction_3; }
	inline double* get_address_of_direction_3() { return &___direction_3; }
	inline void set_direction_3(double value)
	{
		___direction_3 = value;
	}

	inline static int32_t get_offset_of_edgeIndex_4() { return static_cast<int32_t>(offsetof(RouteLeg_t30013ADF5AD884757D65D6E9612F984618622AC6, ___edgeIndex_4)); }
	inline int32_t get_edgeIndex_4() const { return ___edgeIndex_4; }
	inline int32_t* get_address_of_edgeIndex_4() { return &___edgeIndex_4; }
	inline void set_edgeIndex_4(int32_t value)
	{
		___edgeIndex_4 = value;
	}
};


// IndoorAtlas.RoutePoint
struct  RoutePoint_t1C48DD0E7B4B48088F298CD541233BEE69A3A760  : public RuntimeObject
{
public:
	// IndoorAtlas.LatLngFloor IndoorAtlas.RoutePoint::position
	LatLngFloor_t4B72E155829094591933053C9C85E867C1C255C3 * ___position_0;
	// System.Int32 IndoorAtlas.RoutePoint::nodeIndex
	int32_t ___nodeIndex_1;

public:
	inline static int32_t get_offset_of_position_0() { return static_cast<int32_t>(offsetof(RoutePoint_t1C48DD0E7B4B48088F298CD541233BEE69A3A760, ___position_0)); }
	inline LatLngFloor_t4B72E155829094591933053C9C85E867C1C255C3 * get_position_0() const { return ___position_0; }
	inline LatLngFloor_t4B72E155829094591933053C9C85E867C1C255C3 ** get_address_of_position_0() { return &___position_0; }
	inline void set_position_0(LatLngFloor_t4B72E155829094591933053C9C85E867C1C255C3 * value)
	{
		___position_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___position_0), (void*)value);
	}

	inline static int32_t get_offset_of_nodeIndex_1() { return static_cast<int32_t>(offsetof(RoutePoint_t1C48DD0E7B4B48088F298CD541233BEE69A3A760, ___nodeIndex_1)); }
	inline int32_t get_nodeIndex_1() const { return ___nodeIndex_1; }
	inline int32_t* get_address_of_nodeIndex_1() { return &___nodeIndex_1; }
	inline void set_nodeIndex_1(int32_t value)
	{
		___nodeIndex_1 = value;
	}
};


// System.String
struct  String_t  : public RuntimeObject
{
public:
	// System.Int32 System.String::m_stringLength
	int32_t ___m_stringLength_0;
	// System.Char System.String::m_firstChar
	Il2CppChar ___m_firstChar_1;

public:
	inline static int32_t get_offset_of_m_stringLength_0() { return static_cast<int32_t>(offsetof(String_t, ___m_stringLength_0)); }
	inline int32_t get_m_stringLength_0() const { return ___m_stringLength_0; }
	inline int32_t* get_address_of_m_stringLength_0() { return &___m_stringLength_0; }
	inline void set_m_stringLength_0(int32_t value)
	{
		___m_stringLength_0 = value;
	}

	inline static int32_t get_offset_of_m_firstChar_1() { return static_cast<int32_t>(offsetof(String_t, ___m_firstChar_1)); }
	inline Il2CppChar get_m_firstChar_1() const { return ___m_firstChar_1; }
	inline Il2CppChar* get_address_of_m_firstChar_1() { return &___m_firstChar_1; }
	inline void set_m_firstChar_1(Il2CppChar value)
	{
		___m_firstChar_1 = value;
	}
};

struct String_t_StaticFields
{
public:
	// System.String System.String::Empty
	String_t* ___Empty_5;

public:
	inline static int32_t get_offset_of_Empty_5() { return static_cast<int32_t>(offsetof(String_t_StaticFields, ___Empty_5)); }
	inline String_t* get_Empty_5() const { return ___Empty_5; }
	inline String_t** get_address_of_Empty_5() { return &___Empty_5; }
	inline void set_Empty_5(String_t* value)
	{
		___Empty_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Empty_5), (void*)value);
	}
};


// UnityEngine.Events.UnityEventBase
struct  UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB  : public RuntimeObject
{
public:
	// UnityEngine.Events.InvokableCallList UnityEngine.Events.UnityEventBase::m_Calls
	InvokableCallList_tB7C66AA0C00F9C102C8BDC17A144E569AC7527A9 * ___m_Calls_0;
	// UnityEngine.Events.PersistentCallGroup UnityEngine.Events.UnityEventBase::m_PersistentCalls
	PersistentCallGroup_t9A1D83DA2BA3118C103FA87D93CE92557A956FDC * ___m_PersistentCalls_1;
	// System.Boolean UnityEngine.Events.UnityEventBase::m_CallsDirty
	bool ___m_CallsDirty_2;

public:
	inline static int32_t get_offset_of_m_Calls_0() { return static_cast<int32_t>(offsetof(UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB, ___m_Calls_0)); }
	inline InvokableCallList_tB7C66AA0C00F9C102C8BDC17A144E569AC7527A9 * get_m_Calls_0() const { return ___m_Calls_0; }
	inline InvokableCallList_tB7C66AA0C00F9C102C8BDC17A144E569AC7527A9 ** get_address_of_m_Calls_0() { return &___m_Calls_0; }
	inline void set_m_Calls_0(InvokableCallList_tB7C66AA0C00F9C102C8BDC17A144E569AC7527A9 * value)
	{
		___m_Calls_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Calls_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_PersistentCalls_1() { return static_cast<int32_t>(offsetof(UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB, ___m_PersistentCalls_1)); }
	inline PersistentCallGroup_t9A1D83DA2BA3118C103FA87D93CE92557A956FDC * get_m_PersistentCalls_1() const { return ___m_PersistentCalls_1; }
	inline PersistentCallGroup_t9A1D83DA2BA3118C103FA87D93CE92557A956FDC ** get_address_of_m_PersistentCalls_1() { return &___m_PersistentCalls_1; }
	inline void set_m_PersistentCalls_1(PersistentCallGroup_t9A1D83DA2BA3118C103FA87D93CE92557A956FDC * value)
	{
		___m_PersistentCalls_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_PersistentCalls_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_CallsDirty_2() { return static_cast<int32_t>(offsetof(UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB, ___m_CallsDirty_2)); }
	inline bool get_m_CallsDirty_2() const { return ___m_CallsDirty_2; }
	inline bool* get_address_of_m_CallsDirty_2() { return &___m_CallsDirty_2; }
	inline void set_m_CallsDirty_2(bool value)
	{
		___m_CallsDirty_2 = value;
	}
};


// System.ValueType
struct  ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52  : public RuntimeObject
{
public:

public:
};

// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52_marshaled_com
{
};

// IndoorAtlas.Venue
struct  Venue_t9B5BBEE12D028C4C1C86A978B6601550D25336B6  : public RuntimeObject
{
public:
	// System.String IndoorAtlas.Venue::id
	String_t* ___id_0;
	// System.String IndoorAtlas.Venue::name
	String_t* ___name_1;
	// IndoorAtlas.Floorplan[] IndoorAtlas.Venue::floorplans
	FloorplanU5BU5D_t010C109ECEC056D765813BED176BA0EC3738AFDA* ___floorplans_2;
	// IndoorAtlas.Geofence[] IndoorAtlas.Venue::geofences
	GeofenceU5BU5D_tA64F9F5244092E3038F567AC7F3CABCB069ABCF1* ___geofences_3;
	// IndoorAtlas.POI[] IndoorAtlas.Venue::pois
	POIU5BU5D_t04FA68210CCDCD2EA133D94A53071C5B93CBF497* ___pois_4;

public:
	inline static int32_t get_offset_of_id_0() { return static_cast<int32_t>(offsetof(Venue_t9B5BBEE12D028C4C1C86A978B6601550D25336B6, ___id_0)); }
	inline String_t* get_id_0() const { return ___id_0; }
	inline String_t** get_address_of_id_0() { return &___id_0; }
	inline void set_id_0(String_t* value)
	{
		___id_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___id_0), (void*)value);
	}

	inline static int32_t get_offset_of_name_1() { return static_cast<int32_t>(offsetof(Venue_t9B5BBEE12D028C4C1C86A978B6601550D25336B6, ___name_1)); }
	inline String_t* get_name_1() const { return ___name_1; }
	inline String_t** get_address_of_name_1() { return &___name_1; }
	inline void set_name_1(String_t* value)
	{
		___name_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___name_1), (void*)value);
	}

	inline static int32_t get_offset_of_floorplans_2() { return static_cast<int32_t>(offsetof(Venue_t9B5BBEE12D028C4C1C86A978B6601550D25336B6, ___floorplans_2)); }
	inline FloorplanU5BU5D_t010C109ECEC056D765813BED176BA0EC3738AFDA* get_floorplans_2() const { return ___floorplans_2; }
	inline FloorplanU5BU5D_t010C109ECEC056D765813BED176BA0EC3738AFDA** get_address_of_floorplans_2() { return &___floorplans_2; }
	inline void set_floorplans_2(FloorplanU5BU5D_t010C109ECEC056D765813BED176BA0EC3738AFDA* value)
	{
		___floorplans_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___floorplans_2), (void*)value);
	}

	inline static int32_t get_offset_of_geofences_3() { return static_cast<int32_t>(offsetof(Venue_t9B5BBEE12D028C4C1C86A978B6601550D25336B6, ___geofences_3)); }
	inline GeofenceU5BU5D_tA64F9F5244092E3038F567AC7F3CABCB069ABCF1* get_geofences_3() const { return ___geofences_3; }
	inline GeofenceU5BU5D_tA64F9F5244092E3038F567AC7F3CABCB069ABCF1** get_address_of_geofences_3() { return &___geofences_3; }
	inline void set_geofences_3(GeofenceU5BU5D_tA64F9F5244092E3038F567AC7F3CABCB069ABCF1* value)
	{
		___geofences_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___geofences_3), (void*)value);
	}

	inline static int32_t get_offset_of_pois_4() { return static_cast<int32_t>(offsetof(Venue_t9B5BBEE12D028C4C1C86A978B6601550D25336B6, ___pois_4)); }
	inline POIU5BU5D_t04FA68210CCDCD2EA133D94A53071C5B93CBF497* get_pois_4() const { return ___pois_4; }
	inline POIU5BU5D_t04FA68210CCDCD2EA133D94A53071C5B93CBF497** get_address_of_pois_4() { return &___pois_4; }
	inline void set_pois_4(POIU5BU5D_t04FA68210CCDCD2EA133D94A53071C5B93CBF497* value)
	{
		___pois_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___pois_4), (void*)value);
	}
};


// IndoorAtlas.WGS84
struct  WGS84_t38213D604BC65CB5C07F37093BA63B9E04E6D816  : public RuntimeObject
{
public:
	// System.Double IndoorAtlas.WGS84::latitude
	double ___latitude_0;
	// System.Double IndoorAtlas.WGS84::longitude
	double ___longitude_1;

public:
	inline static int32_t get_offset_of_latitude_0() { return static_cast<int32_t>(offsetof(WGS84_t38213D604BC65CB5C07F37093BA63B9E04E6D816, ___latitude_0)); }
	inline double get_latitude_0() const { return ___latitude_0; }
	inline double* get_address_of_latitude_0() { return &___latitude_0; }
	inline void set_latitude_0(double value)
	{
		___latitude_0 = value;
	}

	inline static int32_t get_offset_of_longitude_1() { return static_cast<int32_t>(offsetof(WGS84_t38213D604BC65CB5C07F37093BA63B9E04E6D816, ___longitude_1)); }
	inline double get_longitude_1() const { return ___longitude_1; }
	inline double* get_address_of_longitude_1() { return &___longitude_1; }
	inline void set_longitude_1(double value)
	{
		___longitude_1 = value;
	}
};


// IndoorAtlas.WGSConversion
struct  WGSConversion_t45A89CB883E2ECDC78D8365D7F3FC2C08871546C  : public RuntimeObject
{
public:
	// System.Double IndoorAtlas.WGSConversion::lat0
	double ___lat0_0;
	// System.Double IndoorAtlas.WGSConversion::lon0
	double ___lon0_1;
	// System.Double IndoorAtlas.WGSConversion::deltaX
	double ___deltaX_2;
	// System.Double IndoorAtlas.WGSConversion::deltaY
	double ___deltaY_3;
	// System.Boolean IndoorAtlas.WGSConversion::hasLinearizationPoint
	bool ___hasLinearizationPoint_4;

public:
	inline static int32_t get_offset_of_lat0_0() { return static_cast<int32_t>(offsetof(WGSConversion_t45A89CB883E2ECDC78D8365D7F3FC2C08871546C, ___lat0_0)); }
	inline double get_lat0_0() const { return ___lat0_0; }
	inline double* get_address_of_lat0_0() { return &___lat0_0; }
	inline void set_lat0_0(double value)
	{
		___lat0_0 = value;
	}

	inline static int32_t get_offset_of_lon0_1() { return static_cast<int32_t>(offsetof(WGSConversion_t45A89CB883E2ECDC78D8365D7F3FC2C08871546C, ___lon0_1)); }
	inline double get_lon0_1() const { return ___lon0_1; }
	inline double* get_address_of_lon0_1() { return &___lon0_1; }
	inline void set_lon0_1(double value)
	{
		___lon0_1 = value;
	}

	inline static int32_t get_offset_of_deltaX_2() { return static_cast<int32_t>(offsetof(WGSConversion_t45A89CB883E2ECDC78D8365D7F3FC2C08871546C, ___deltaX_2)); }
	inline double get_deltaX_2() const { return ___deltaX_2; }
	inline double* get_address_of_deltaX_2() { return &___deltaX_2; }
	inline void set_deltaX_2(double value)
	{
		___deltaX_2 = value;
	}

	inline static int32_t get_offset_of_deltaY_3() { return static_cast<int32_t>(offsetof(WGSConversion_t45A89CB883E2ECDC78D8365D7F3FC2C08871546C, ___deltaY_3)); }
	inline double get_deltaY_3() const { return ___deltaY_3; }
	inline double* get_address_of_deltaY_3() { return &___deltaY_3; }
	inline void set_deltaY_3(double value)
	{
		___deltaY_3 = value;
	}

	inline static int32_t get_offset_of_hasLinearizationPoint_4() { return static_cast<int32_t>(offsetof(WGSConversion_t45A89CB883E2ECDC78D8365D7F3FC2C08871546C, ___hasLinearizationPoint_4)); }
	inline bool get_hasLinearizationPoint_4() const { return ___hasLinearizationPoint_4; }
	inline bool* get_address_of_hasLinearizationPoint_4() { return &___hasLinearizationPoint_4; }
	inline void set_hasLinearizationPoint_4(bool value)
	{
		___hasLinearizationPoint_4 = value;
	}
};


// System.Nullable`1<System.Double>
struct  Nullable_1_t75730434CAD4E48A4EE117588CFD586FFBCAC209 
{
public:
	// T System.Nullable`1::value
	double ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_t75730434CAD4E48A4EE117588CFD586FFBCAC209, ___value_0)); }
	inline double get_value_0() const { return ___value_0; }
	inline double* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(double value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_t75730434CAD4E48A4EE117588CFD586FFBCAC209, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
	}
};


// System.Nullable`1<System.Int64>
struct  Nullable_1_t340361C8134256120F5769AC5A3F743DB6C11D1F 
{
public:
	// T System.Nullable`1::value
	int64_t ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_t340361C8134256120F5769AC5A3F743DB6C11D1F, ___value_0)); }
	inline int64_t get_value_0() const { return ___value_0; }
	inline int64_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(int64_t value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_t340361C8134256120F5769AC5A3F743DB6C11D1F, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
	}
};


// System.Nullable`1<System.Single>
struct  Nullable_1_t0C4AC2E457C437FA106160547FD9BA5B50B1888A 
{
public:
	// T System.Nullable`1::value
	float ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_t0C4AC2E457C437FA106160547FD9BA5B50B1888A, ___value_0)); }
	inline float get_value_0() const { return ___value_0; }
	inline float* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(float value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_t0C4AC2E457C437FA106160547FD9BA5B50B1888A, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
	}
};


// UnityEngine.XR.ARFoundation.TrackableCollection`1<UnityEngine.XR.ARFoundation.ARPlane>
struct  TrackableCollection_1_tF901F9001ABC2CCCF561F7CB246E74516ABB8EFB 
{
public:
	// System.Collections.Generic.Dictionary`2<UnityEngine.XR.ARSubsystems.TrackableId,TTrackable> UnityEngine.XR.ARFoundation.TrackableCollection`1::m_Trackables
	Dictionary_2_t712D6B074B6A493ABA07777BD08F1A62D9DE2534 * ___m_Trackables_0;

public:
	inline static int32_t get_offset_of_m_Trackables_0() { return static_cast<int32_t>(offsetof(TrackableCollection_1_tF901F9001ABC2CCCF561F7CB246E74516ABB8EFB, ___m_Trackables_0)); }
	inline Dictionary_2_t712D6B074B6A493ABA07777BD08F1A62D9DE2534 * get_m_Trackables_0() const { return ___m_Trackables_0; }
	inline Dictionary_2_t712D6B074B6A493ABA07777BD08F1A62D9DE2534 ** get_address_of_m_Trackables_0() { return &___m_Trackables_0; }
	inline void set_m_Trackables_0(Dictionary_2_t712D6B074B6A493ABA07777BD08F1A62D9DE2534 * value)
	{
		___m_Trackables_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Trackables_0), (void*)value);
	}
};


// UnityEngine.XR.ARFoundation.TrackableCollection`1<System.Object>
struct  TrackableCollection_1_t4E8CD95BBE750C12D37A648E5531B758A0D9EAB2 
{
public:
	// System.Collections.Generic.Dictionary`2<UnityEngine.XR.ARSubsystems.TrackableId,TTrackable> UnityEngine.XR.ARFoundation.TrackableCollection`1::m_Trackables
	Dictionary_2_t0A52DB56FD1E7867C489BCD59361434AD1DACF83 * ___m_Trackables_0;

public:
	inline static int32_t get_offset_of_m_Trackables_0() { return static_cast<int32_t>(offsetof(TrackableCollection_1_t4E8CD95BBE750C12D37A648E5531B758A0D9EAB2, ___m_Trackables_0)); }
	inline Dictionary_2_t0A52DB56FD1E7867C489BCD59361434AD1DACF83 * get_m_Trackables_0() const { return ___m_Trackables_0; }
	inline Dictionary_2_t0A52DB56FD1E7867C489BCD59361434AD1DACF83 ** get_address_of_m_Trackables_0() { return &___m_Trackables_0; }
	inline void set_m_Trackables_0(Dictionary_2_t0A52DB56FD1E7867C489BCD59361434AD1DACF83 * value)
	{
		___m_Trackables_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Trackables_0), (void*)value);
	}
};


// UnityEngine.Events.UnityEvent`1<System.Int32>
struct  UnityEvent_1_tB235B5DAD099AC425DC059D10DEB8B97A35E2BBF  : public UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB
{
public:
	// System.Object[] UnityEngine.Events.UnityEvent`1::m_InvokeArray
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___m_InvokeArray_3;

public:
	inline static int32_t get_offset_of_m_InvokeArray_3() { return static_cast<int32_t>(offsetof(UnityEvent_1_tB235B5DAD099AC425DC059D10DEB8B97A35E2BBF, ___m_InvokeArray_3)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get_m_InvokeArray_3() const { return ___m_InvokeArray_3; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of_m_InvokeArray_3() { return &___m_InvokeArray_3; }
	inline void set_m_InvokeArray_3(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		___m_InvokeArray_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_InvokeArray_3), (void*)value);
	}
};


// System.Boolean
struct  Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37 
{
public:
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37, ___m_value_0)); }
	inline bool get_m_value_0() const { return ___m_value_0; }
	inline bool* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(bool value)
	{
		___m_value_0 = value;
	}
};

struct Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields
{
public:
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;

public:
	inline static int32_t get_offset_of_TrueString_5() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields, ___TrueString_5)); }
	inline String_t* get_TrueString_5() const { return ___TrueString_5; }
	inline String_t** get_address_of_TrueString_5() { return &___TrueString_5; }
	inline void set_TrueString_5(String_t* value)
	{
		___TrueString_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TrueString_5), (void*)value);
	}

	inline static int32_t get_offset_of_FalseString_6() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields, ___FalseString_6)); }
	inline String_t* get_FalseString_6() const { return ___FalseString_6; }
	inline String_t** get_address_of_FalseString_6() { return &___FalseString_6; }
	inline void set_FalseString_6(String_t* value)
	{
		___FalseString_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FalseString_6), (void*)value);
	}
};


// System.Byte
struct  Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056 
{
public:
	// System.Byte System.Byte::m_value
	uint8_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056, ___m_value_0)); }
	inline uint8_t get_m_value_0() const { return ___m_value_0; }
	inline uint8_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint8_t value)
	{
		___m_value_0 = value;
	}
};


// UnityEngine.Color
struct  Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 
{
public:
	// System.Single UnityEngine.Color::r
	float ___r_0;
	// System.Single UnityEngine.Color::g
	float ___g_1;
	// System.Single UnityEngine.Color::b
	float ___b_2;
	// System.Single UnityEngine.Color::a
	float ___a_3;

public:
	inline static int32_t get_offset_of_r_0() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___r_0)); }
	inline float get_r_0() const { return ___r_0; }
	inline float* get_address_of_r_0() { return &___r_0; }
	inline void set_r_0(float value)
	{
		___r_0 = value;
	}

	inline static int32_t get_offset_of_g_1() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___g_1)); }
	inline float get_g_1() const { return ___g_1; }
	inline float* get_address_of_g_1() { return &___g_1; }
	inline void set_g_1(float value)
	{
		___g_1 = value;
	}

	inline static int32_t get_offset_of_b_2() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___b_2)); }
	inline float get_b_2() const { return ___b_2; }
	inline float* get_address_of_b_2() { return &___b_2; }
	inline void set_b_2(float value)
	{
		___b_2 = value;
	}

	inline static int32_t get_offset_of_a_3() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___a_3)); }
	inline float get_a_3() const { return ___a_3; }
	inline float* get_address_of_a_3() { return &___a_3; }
	inline void set_a_3(float value)
	{
		___a_3 = value;
	}
};


// System.Double
struct  Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181 
{
public:
	// System.Double System.Double::m_value
	double ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181, ___m_value_0)); }
	inline double get_m_value_0() const { return ___m_value_0; }
	inline double* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(double value)
	{
		___m_value_0 = value;
	}
};

struct Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181_StaticFields
{
public:
	// System.Double System.Double::NegativeZero
	double ___NegativeZero_7;

public:
	inline static int32_t get_offset_of_NegativeZero_7() { return static_cast<int32_t>(offsetof(Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181_StaticFields, ___NegativeZero_7)); }
	inline double get_NegativeZero_7() const { return ___NegativeZero_7; }
	inline double* get_address_of_NegativeZero_7() { return &___NegativeZero_7; }
	inline void set_NegativeZero_7(double value)
	{
		___NegativeZero_7 = value;
	}
};


// System.Enum
struct  Enum_t23B90B40F60E677A8025267341651C94AE079CDA  : public ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52
{
public:

public:
};

struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_StaticFields
{
public:
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___enumSeperatorCharArray_0;

public:
	inline static int32_t get_offset_of_enumSeperatorCharArray_0() { return static_cast<int32_t>(offsetof(Enum_t23B90B40F60E677A8025267341651C94AE079CDA_StaticFields, ___enumSeperatorCharArray_0)); }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* get_enumSeperatorCharArray_0() const { return ___enumSeperatorCharArray_0; }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34** get_address_of_enumSeperatorCharArray_0() { return &___enumSeperatorCharArray_0; }
	inline void set_enumSeperatorCharArray_0(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* value)
	{
		___enumSeperatorCharArray_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___enumSeperatorCharArray_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_marshaled_com
{
};

// System.Int32
struct  Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046 
{
public:
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046, ___m_value_0)); }
	inline int32_t get_m_value_0() const { return ___m_value_0; }
	inline int32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int32_t value)
	{
		___m_value_0 = value;
	}
};


// System.IntPtr
struct  IntPtr_t 
{
public:
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(IntPtr_t, ___m_value_0)); }
	inline void* get_m_value_0() const { return ___m_value_0; }
	inline void** get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(void* value)
	{
		___m_value_0 = value;
	}
};

struct IntPtr_t_StaticFields
{
public:
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;

public:
	inline static int32_t get_offset_of_Zero_1() { return static_cast<int32_t>(offsetof(IntPtr_t_StaticFields, ___Zero_1)); }
	inline intptr_t get_Zero_1() const { return ___Zero_1; }
	inline intptr_t* get_address_of_Zero_1() { return &___Zero_1; }
	inline void set_Zero_1(intptr_t value)
	{
		___Zero_1 = value;
	}
};


// UnityEngine.Matrix4x4
struct  Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 
{
public:
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

public:
	inline static int32_t get_offset_of_m00_0() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m00_0)); }
	inline float get_m00_0() const { return ___m00_0; }
	inline float* get_address_of_m00_0() { return &___m00_0; }
	inline void set_m00_0(float value)
	{
		___m00_0 = value;
	}

	inline static int32_t get_offset_of_m10_1() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m10_1)); }
	inline float get_m10_1() const { return ___m10_1; }
	inline float* get_address_of_m10_1() { return &___m10_1; }
	inline void set_m10_1(float value)
	{
		___m10_1 = value;
	}

	inline static int32_t get_offset_of_m20_2() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m20_2)); }
	inline float get_m20_2() const { return ___m20_2; }
	inline float* get_address_of_m20_2() { return &___m20_2; }
	inline void set_m20_2(float value)
	{
		___m20_2 = value;
	}

	inline static int32_t get_offset_of_m30_3() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m30_3)); }
	inline float get_m30_3() const { return ___m30_3; }
	inline float* get_address_of_m30_3() { return &___m30_3; }
	inline void set_m30_3(float value)
	{
		___m30_3 = value;
	}

	inline static int32_t get_offset_of_m01_4() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m01_4)); }
	inline float get_m01_4() const { return ___m01_4; }
	inline float* get_address_of_m01_4() { return &___m01_4; }
	inline void set_m01_4(float value)
	{
		___m01_4 = value;
	}

	inline static int32_t get_offset_of_m11_5() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m11_5)); }
	inline float get_m11_5() const { return ___m11_5; }
	inline float* get_address_of_m11_5() { return &___m11_5; }
	inline void set_m11_5(float value)
	{
		___m11_5 = value;
	}

	inline static int32_t get_offset_of_m21_6() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m21_6)); }
	inline float get_m21_6() const { return ___m21_6; }
	inline float* get_address_of_m21_6() { return &___m21_6; }
	inline void set_m21_6(float value)
	{
		___m21_6 = value;
	}

	inline static int32_t get_offset_of_m31_7() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m31_7)); }
	inline float get_m31_7() const { return ___m31_7; }
	inline float* get_address_of_m31_7() { return &___m31_7; }
	inline void set_m31_7(float value)
	{
		___m31_7 = value;
	}

	inline static int32_t get_offset_of_m02_8() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m02_8)); }
	inline float get_m02_8() const { return ___m02_8; }
	inline float* get_address_of_m02_8() { return &___m02_8; }
	inline void set_m02_8(float value)
	{
		___m02_8 = value;
	}

	inline static int32_t get_offset_of_m12_9() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m12_9)); }
	inline float get_m12_9() const { return ___m12_9; }
	inline float* get_address_of_m12_9() { return &___m12_9; }
	inline void set_m12_9(float value)
	{
		___m12_9 = value;
	}

	inline static int32_t get_offset_of_m22_10() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m22_10)); }
	inline float get_m22_10() const { return ___m22_10; }
	inline float* get_address_of_m22_10() { return &___m22_10; }
	inline void set_m22_10(float value)
	{
		___m22_10 = value;
	}

	inline static int32_t get_offset_of_m32_11() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m32_11)); }
	inline float get_m32_11() const { return ___m32_11; }
	inline float* get_address_of_m32_11() { return &___m32_11; }
	inline void set_m32_11(float value)
	{
		___m32_11 = value;
	}

	inline static int32_t get_offset_of_m03_12() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m03_12)); }
	inline float get_m03_12() const { return ___m03_12; }
	inline float* get_address_of_m03_12() { return &___m03_12; }
	inline void set_m03_12(float value)
	{
		___m03_12 = value;
	}

	inline static int32_t get_offset_of_m13_13() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m13_13)); }
	inline float get_m13_13() const { return ___m13_13; }
	inline float* get_address_of_m13_13() { return &___m13_13; }
	inline void set_m13_13(float value)
	{
		___m13_13 = value;
	}

	inline static int32_t get_offset_of_m23_14() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m23_14)); }
	inline float get_m23_14() const { return ___m23_14; }
	inline float* get_address_of_m23_14() { return &___m23_14; }
	inline void set_m23_14(float value)
	{
		___m23_14 = value;
	}

	inline static int32_t get_offset_of_m33_15() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m33_15)); }
	inline float get_m33_15() const { return ___m33_15; }
	inline float* get_address_of_m33_15() { return &___m33_15; }
	inline void set_m33_15(float value)
	{
		___m33_15 = value;
	}
};

struct Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461_StaticFields
{
public:
	// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::zeroMatrix
	Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  ___zeroMatrix_16;
	// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::identityMatrix
	Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  ___identityMatrix_17;

public:
	inline static int32_t get_offset_of_zeroMatrix_16() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461_StaticFields, ___zeroMatrix_16)); }
	inline Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  get_zeroMatrix_16() const { return ___zeroMatrix_16; }
	inline Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 * get_address_of_zeroMatrix_16() { return &___zeroMatrix_16; }
	inline void set_zeroMatrix_16(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  value)
	{
		___zeroMatrix_16 = value;
	}

	inline static int32_t get_offset_of_identityMatrix_17() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461_StaticFields, ___identityMatrix_17)); }
	inline Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  get_identityMatrix_17() const { return ___identityMatrix_17; }
	inline Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 * get_address_of_identityMatrix_17() { return &___identityMatrix_17; }
	inline void set_identityMatrix_17(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  value)
	{
		___identityMatrix_17 = value;
	}
};


// UnityEngine.Quaternion
struct  Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 
{
public:
	// System.Single UnityEngine.Quaternion::x
	float ___x_0;
	// System.Single UnityEngine.Quaternion::y
	float ___y_1;
	// System.Single UnityEngine.Quaternion::z
	float ___z_2;
	// System.Single UnityEngine.Quaternion::w
	float ___w_3;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}

	inline static int32_t get_offset_of_z_2() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___z_2)); }
	inline float get_z_2() const { return ___z_2; }
	inline float* get_address_of_z_2() { return &___z_2; }
	inline void set_z_2(float value)
	{
		___z_2 = value;
	}

	inline static int32_t get_offset_of_w_3() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___w_3)); }
	inline float get_w_3() const { return ___w_3; }
	inline float* get_address_of_w_3() { return &___w_3; }
	inline void set_w_3(float value)
	{
		___w_3 = value;
	}
};

struct Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4_StaticFields
{
public:
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___identityQuaternion_4;

public:
	inline static int32_t get_offset_of_identityQuaternion_4() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4_StaticFields, ___identityQuaternion_4)); }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  get_identityQuaternion_4() const { return ___identityQuaternion_4; }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * get_address_of_identityQuaternion_4() { return &___identityQuaternion_4; }
	inline void set_identityQuaternion_4(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  value)
	{
		___identityQuaternion_4 = value;
	}
};


// System.Single
struct  Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E 
{
public:
	// System.Single System.Single::m_value
	float ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E, ___m_value_0)); }
	inline float get_m_value_0() const { return ___m_value_0; }
	inline float* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(float value)
	{
		___m_value_0 = value;
	}
};


// UnityEngine.Rendering.SphericalHarmonicsL2
struct  SphericalHarmonicsL2_tD2EC2ADCA26B9BE05036C3ABCF3CC049EC73EA64 
{
public:
	// System.Single UnityEngine.Rendering.SphericalHarmonicsL2::shr0
	float ___shr0_0;
	// System.Single UnityEngine.Rendering.SphericalHarmonicsL2::shr1
	float ___shr1_1;
	// System.Single UnityEngine.Rendering.SphericalHarmonicsL2::shr2
	float ___shr2_2;
	// System.Single UnityEngine.Rendering.SphericalHarmonicsL2::shr3
	float ___shr3_3;
	// System.Single UnityEngine.Rendering.SphericalHarmonicsL2::shr4
	float ___shr4_4;
	// System.Single UnityEngine.Rendering.SphericalHarmonicsL2::shr5
	float ___shr5_5;
	// System.Single UnityEngine.Rendering.SphericalHarmonicsL2::shr6
	float ___shr6_6;
	// System.Single UnityEngine.Rendering.SphericalHarmonicsL2::shr7
	float ___shr7_7;
	// System.Single UnityEngine.Rendering.SphericalHarmonicsL2::shr8
	float ___shr8_8;
	// System.Single UnityEngine.Rendering.SphericalHarmonicsL2::shg0
	float ___shg0_9;
	// System.Single UnityEngine.Rendering.SphericalHarmonicsL2::shg1
	float ___shg1_10;
	// System.Single UnityEngine.Rendering.SphericalHarmonicsL2::shg2
	float ___shg2_11;
	// System.Single UnityEngine.Rendering.SphericalHarmonicsL2::shg3
	float ___shg3_12;
	// System.Single UnityEngine.Rendering.SphericalHarmonicsL2::shg4
	float ___shg4_13;
	// System.Single UnityEngine.Rendering.SphericalHarmonicsL2::shg5
	float ___shg5_14;
	// System.Single UnityEngine.Rendering.SphericalHarmonicsL2::shg6
	float ___shg6_15;
	// System.Single UnityEngine.Rendering.SphericalHarmonicsL2::shg7
	float ___shg7_16;
	// System.Single UnityEngine.Rendering.SphericalHarmonicsL2::shg8
	float ___shg8_17;
	// System.Single UnityEngine.Rendering.SphericalHarmonicsL2::shb0
	float ___shb0_18;
	// System.Single UnityEngine.Rendering.SphericalHarmonicsL2::shb1
	float ___shb1_19;
	// System.Single UnityEngine.Rendering.SphericalHarmonicsL2::shb2
	float ___shb2_20;
	// System.Single UnityEngine.Rendering.SphericalHarmonicsL2::shb3
	float ___shb3_21;
	// System.Single UnityEngine.Rendering.SphericalHarmonicsL2::shb4
	float ___shb4_22;
	// System.Single UnityEngine.Rendering.SphericalHarmonicsL2::shb5
	float ___shb5_23;
	// System.Single UnityEngine.Rendering.SphericalHarmonicsL2::shb6
	float ___shb6_24;
	// System.Single UnityEngine.Rendering.SphericalHarmonicsL2::shb7
	float ___shb7_25;
	// System.Single UnityEngine.Rendering.SphericalHarmonicsL2::shb8
	float ___shb8_26;

public:
	inline static int32_t get_offset_of_shr0_0() { return static_cast<int32_t>(offsetof(SphericalHarmonicsL2_tD2EC2ADCA26B9BE05036C3ABCF3CC049EC73EA64, ___shr0_0)); }
	inline float get_shr0_0() const { return ___shr0_0; }
	inline float* get_address_of_shr0_0() { return &___shr0_0; }
	inline void set_shr0_0(float value)
	{
		___shr0_0 = value;
	}

	inline static int32_t get_offset_of_shr1_1() { return static_cast<int32_t>(offsetof(SphericalHarmonicsL2_tD2EC2ADCA26B9BE05036C3ABCF3CC049EC73EA64, ___shr1_1)); }
	inline float get_shr1_1() const { return ___shr1_1; }
	inline float* get_address_of_shr1_1() { return &___shr1_1; }
	inline void set_shr1_1(float value)
	{
		___shr1_1 = value;
	}

	inline static int32_t get_offset_of_shr2_2() { return static_cast<int32_t>(offsetof(SphericalHarmonicsL2_tD2EC2ADCA26B9BE05036C3ABCF3CC049EC73EA64, ___shr2_2)); }
	inline float get_shr2_2() const { return ___shr2_2; }
	inline float* get_address_of_shr2_2() { return &___shr2_2; }
	inline void set_shr2_2(float value)
	{
		___shr2_2 = value;
	}

	inline static int32_t get_offset_of_shr3_3() { return static_cast<int32_t>(offsetof(SphericalHarmonicsL2_tD2EC2ADCA26B9BE05036C3ABCF3CC049EC73EA64, ___shr3_3)); }
	inline float get_shr3_3() const { return ___shr3_3; }
	inline float* get_address_of_shr3_3() { return &___shr3_3; }
	inline void set_shr3_3(float value)
	{
		___shr3_3 = value;
	}

	inline static int32_t get_offset_of_shr4_4() { return static_cast<int32_t>(offsetof(SphericalHarmonicsL2_tD2EC2ADCA26B9BE05036C3ABCF3CC049EC73EA64, ___shr4_4)); }
	inline float get_shr4_4() const { return ___shr4_4; }
	inline float* get_address_of_shr4_4() { return &___shr4_4; }
	inline void set_shr4_4(float value)
	{
		___shr4_4 = value;
	}

	inline static int32_t get_offset_of_shr5_5() { return static_cast<int32_t>(offsetof(SphericalHarmonicsL2_tD2EC2ADCA26B9BE05036C3ABCF3CC049EC73EA64, ___shr5_5)); }
	inline float get_shr5_5() const { return ___shr5_5; }
	inline float* get_address_of_shr5_5() { return &___shr5_5; }
	inline void set_shr5_5(float value)
	{
		___shr5_5 = value;
	}

	inline static int32_t get_offset_of_shr6_6() { return static_cast<int32_t>(offsetof(SphericalHarmonicsL2_tD2EC2ADCA26B9BE05036C3ABCF3CC049EC73EA64, ___shr6_6)); }
	inline float get_shr6_6() const { return ___shr6_6; }
	inline float* get_address_of_shr6_6() { return &___shr6_6; }
	inline void set_shr6_6(float value)
	{
		___shr6_6 = value;
	}

	inline static int32_t get_offset_of_shr7_7() { return static_cast<int32_t>(offsetof(SphericalHarmonicsL2_tD2EC2ADCA26B9BE05036C3ABCF3CC049EC73EA64, ___shr7_7)); }
	inline float get_shr7_7() const { return ___shr7_7; }
	inline float* get_address_of_shr7_7() { return &___shr7_7; }
	inline void set_shr7_7(float value)
	{
		___shr7_7 = value;
	}

	inline static int32_t get_offset_of_shr8_8() { return static_cast<int32_t>(offsetof(SphericalHarmonicsL2_tD2EC2ADCA26B9BE05036C3ABCF3CC049EC73EA64, ___shr8_8)); }
	inline float get_shr8_8() const { return ___shr8_8; }
	inline float* get_address_of_shr8_8() { return &___shr8_8; }
	inline void set_shr8_8(float value)
	{
		___shr8_8 = value;
	}

	inline static int32_t get_offset_of_shg0_9() { return static_cast<int32_t>(offsetof(SphericalHarmonicsL2_tD2EC2ADCA26B9BE05036C3ABCF3CC049EC73EA64, ___shg0_9)); }
	inline float get_shg0_9() const { return ___shg0_9; }
	inline float* get_address_of_shg0_9() { return &___shg0_9; }
	inline void set_shg0_9(float value)
	{
		___shg0_9 = value;
	}

	inline static int32_t get_offset_of_shg1_10() { return static_cast<int32_t>(offsetof(SphericalHarmonicsL2_tD2EC2ADCA26B9BE05036C3ABCF3CC049EC73EA64, ___shg1_10)); }
	inline float get_shg1_10() const { return ___shg1_10; }
	inline float* get_address_of_shg1_10() { return &___shg1_10; }
	inline void set_shg1_10(float value)
	{
		___shg1_10 = value;
	}

	inline static int32_t get_offset_of_shg2_11() { return static_cast<int32_t>(offsetof(SphericalHarmonicsL2_tD2EC2ADCA26B9BE05036C3ABCF3CC049EC73EA64, ___shg2_11)); }
	inline float get_shg2_11() const { return ___shg2_11; }
	inline float* get_address_of_shg2_11() { return &___shg2_11; }
	inline void set_shg2_11(float value)
	{
		___shg2_11 = value;
	}

	inline static int32_t get_offset_of_shg3_12() { return static_cast<int32_t>(offsetof(SphericalHarmonicsL2_tD2EC2ADCA26B9BE05036C3ABCF3CC049EC73EA64, ___shg3_12)); }
	inline float get_shg3_12() const { return ___shg3_12; }
	inline float* get_address_of_shg3_12() { return &___shg3_12; }
	inline void set_shg3_12(float value)
	{
		___shg3_12 = value;
	}

	inline static int32_t get_offset_of_shg4_13() { return static_cast<int32_t>(offsetof(SphericalHarmonicsL2_tD2EC2ADCA26B9BE05036C3ABCF3CC049EC73EA64, ___shg4_13)); }
	inline float get_shg4_13() const { return ___shg4_13; }
	inline float* get_address_of_shg4_13() { return &___shg4_13; }
	inline void set_shg4_13(float value)
	{
		___shg4_13 = value;
	}

	inline static int32_t get_offset_of_shg5_14() { return static_cast<int32_t>(offsetof(SphericalHarmonicsL2_tD2EC2ADCA26B9BE05036C3ABCF3CC049EC73EA64, ___shg5_14)); }
	inline float get_shg5_14() const { return ___shg5_14; }
	inline float* get_address_of_shg5_14() { return &___shg5_14; }
	inline void set_shg5_14(float value)
	{
		___shg5_14 = value;
	}

	inline static int32_t get_offset_of_shg6_15() { return static_cast<int32_t>(offsetof(SphericalHarmonicsL2_tD2EC2ADCA26B9BE05036C3ABCF3CC049EC73EA64, ___shg6_15)); }
	inline float get_shg6_15() const { return ___shg6_15; }
	inline float* get_address_of_shg6_15() { return &___shg6_15; }
	inline void set_shg6_15(float value)
	{
		___shg6_15 = value;
	}

	inline static int32_t get_offset_of_shg7_16() { return static_cast<int32_t>(offsetof(SphericalHarmonicsL2_tD2EC2ADCA26B9BE05036C3ABCF3CC049EC73EA64, ___shg7_16)); }
	inline float get_shg7_16() const { return ___shg7_16; }
	inline float* get_address_of_shg7_16() { return &___shg7_16; }
	inline void set_shg7_16(float value)
	{
		___shg7_16 = value;
	}

	inline static int32_t get_offset_of_shg8_17() { return static_cast<int32_t>(offsetof(SphericalHarmonicsL2_tD2EC2ADCA26B9BE05036C3ABCF3CC049EC73EA64, ___shg8_17)); }
	inline float get_shg8_17() const { return ___shg8_17; }
	inline float* get_address_of_shg8_17() { return &___shg8_17; }
	inline void set_shg8_17(float value)
	{
		___shg8_17 = value;
	}

	inline static int32_t get_offset_of_shb0_18() { return static_cast<int32_t>(offsetof(SphericalHarmonicsL2_tD2EC2ADCA26B9BE05036C3ABCF3CC049EC73EA64, ___shb0_18)); }
	inline float get_shb0_18() const { return ___shb0_18; }
	inline float* get_address_of_shb0_18() { return &___shb0_18; }
	inline void set_shb0_18(float value)
	{
		___shb0_18 = value;
	}

	inline static int32_t get_offset_of_shb1_19() { return static_cast<int32_t>(offsetof(SphericalHarmonicsL2_tD2EC2ADCA26B9BE05036C3ABCF3CC049EC73EA64, ___shb1_19)); }
	inline float get_shb1_19() const { return ___shb1_19; }
	inline float* get_address_of_shb1_19() { return &___shb1_19; }
	inline void set_shb1_19(float value)
	{
		___shb1_19 = value;
	}

	inline static int32_t get_offset_of_shb2_20() { return static_cast<int32_t>(offsetof(SphericalHarmonicsL2_tD2EC2ADCA26B9BE05036C3ABCF3CC049EC73EA64, ___shb2_20)); }
	inline float get_shb2_20() const { return ___shb2_20; }
	inline float* get_address_of_shb2_20() { return &___shb2_20; }
	inline void set_shb2_20(float value)
	{
		___shb2_20 = value;
	}

	inline static int32_t get_offset_of_shb3_21() { return static_cast<int32_t>(offsetof(SphericalHarmonicsL2_tD2EC2ADCA26B9BE05036C3ABCF3CC049EC73EA64, ___shb3_21)); }
	inline float get_shb3_21() const { return ___shb3_21; }
	inline float* get_address_of_shb3_21() { return &___shb3_21; }
	inline void set_shb3_21(float value)
	{
		___shb3_21 = value;
	}

	inline static int32_t get_offset_of_shb4_22() { return static_cast<int32_t>(offsetof(SphericalHarmonicsL2_tD2EC2ADCA26B9BE05036C3ABCF3CC049EC73EA64, ___shb4_22)); }
	inline float get_shb4_22() const { return ___shb4_22; }
	inline float* get_address_of_shb4_22() { return &___shb4_22; }
	inline void set_shb4_22(float value)
	{
		___shb4_22 = value;
	}

	inline static int32_t get_offset_of_shb5_23() { return static_cast<int32_t>(offsetof(SphericalHarmonicsL2_tD2EC2ADCA26B9BE05036C3ABCF3CC049EC73EA64, ___shb5_23)); }
	inline float get_shb5_23() const { return ___shb5_23; }
	inline float* get_address_of_shb5_23() { return &___shb5_23; }
	inline void set_shb5_23(float value)
	{
		___shb5_23 = value;
	}

	inline static int32_t get_offset_of_shb6_24() { return static_cast<int32_t>(offsetof(SphericalHarmonicsL2_tD2EC2ADCA26B9BE05036C3ABCF3CC049EC73EA64, ___shb6_24)); }
	inline float get_shb6_24() const { return ___shb6_24; }
	inline float* get_address_of_shb6_24() { return &___shb6_24; }
	inline void set_shb6_24(float value)
	{
		___shb6_24 = value;
	}

	inline static int32_t get_offset_of_shb7_25() { return static_cast<int32_t>(offsetof(SphericalHarmonicsL2_tD2EC2ADCA26B9BE05036C3ABCF3CC049EC73EA64, ___shb7_25)); }
	inline float get_shb7_25() const { return ___shb7_25; }
	inline float* get_address_of_shb7_25() { return &___shb7_25; }
	inline void set_shb7_25(float value)
	{
		___shb7_25 = value;
	}

	inline static int32_t get_offset_of_shb8_26() { return static_cast<int32_t>(offsetof(SphericalHarmonicsL2_tD2EC2ADCA26B9BE05036C3ABCF3CC049EC73EA64, ___shb8_26)); }
	inline float get_shb8_26() const { return ___shb8_26; }
	inline float* get_address_of_shb8_26() { return &___shb8_26; }
	inline void set_shb8_26(float value)
	{
		___shb8_26 = value;
	}
};


// UnityEngine.UI.SpriteState
struct  SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E 
{
public:
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_HighlightedSprite
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_HighlightedSprite_0;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_PressedSprite
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_PressedSprite_1;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_SelectedSprite
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_SelectedSprite_2;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_DisabledSprite
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_DisabledSprite_3;

public:
	inline static int32_t get_offset_of_m_HighlightedSprite_0() { return static_cast<int32_t>(offsetof(SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E, ___m_HighlightedSprite_0)); }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * get_m_HighlightedSprite_0() const { return ___m_HighlightedSprite_0; }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** get_address_of_m_HighlightedSprite_0() { return &___m_HighlightedSprite_0; }
	inline void set_m_HighlightedSprite_0(Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		___m_HighlightedSprite_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_HighlightedSprite_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_PressedSprite_1() { return static_cast<int32_t>(offsetof(SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E, ___m_PressedSprite_1)); }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * get_m_PressedSprite_1() const { return ___m_PressedSprite_1; }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** get_address_of_m_PressedSprite_1() { return &___m_PressedSprite_1; }
	inline void set_m_PressedSprite_1(Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		___m_PressedSprite_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_PressedSprite_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_SelectedSprite_2() { return static_cast<int32_t>(offsetof(SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E, ___m_SelectedSprite_2)); }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * get_m_SelectedSprite_2() const { return ___m_SelectedSprite_2; }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** get_address_of_m_SelectedSprite_2() { return &___m_SelectedSprite_2; }
	inline void set_m_SelectedSprite_2(Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		___m_SelectedSprite_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SelectedSprite_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_DisabledSprite_3() { return static_cast<int32_t>(offsetof(SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E, ___m_DisabledSprite_3)); }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * get_m_DisabledSprite_3() const { return ___m_DisabledSprite_3; }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** get_address_of_m_DisabledSprite_3() { return &___m_DisabledSprite_3; }
	inline void set_m_DisabledSprite_3(Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		___m_DisabledSprite_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_DisabledSprite_3), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.UI.SpriteState
struct SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E_marshaled_pinvoke
{
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_HighlightedSprite_0;
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_PressedSprite_1;
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_SelectedSprite_2;
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_DisabledSprite_3;
};
// Native definition for COM marshalling of UnityEngine.UI.SpriteState
struct SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E_marshaled_com
{
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_HighlightedSprite_0;
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_PressedSprite_1;
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_SelectedSprite_2;
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_DisabledSprite_3;
};

// UnityEngine.XR.ARSubsystems.TrackableId
struct  TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B 
{
public:
	// System.UInt64 UnityEngine.XR.ARSubsystems.TrackableId::m_SubId1
	uint64_t ___m_SubId1_2;
	// System.UInt64 UnityEngine.XR.ARSubsystems.TrackableId::m_SubId2
	uint64_t ___m_SubId2_3;

public:
	inline static int32_t get_offset_of_m_SubId1_2() { return static_cast<int32_t>(offsetof(TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B, ___m_SubId1_2)); }
	inline uint64_t get_m_SubId1_2() const { return ___m_SubId1_2; }
	inline uint64_t* get_address_of_m_SubId1_2() { return &___m_SubId1_2; }
	inline void set_m_SubId1_2(uint64_t value)
	{
		___m_SubId1_2 = value;
	}

	inline static int32_t get_offset_of_m_SubId2_3() { return static_cast<int32_t>(offsetof(TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B, ___m_SubId2_3)); }
	inline uint64_t get_m_SubId2_3() const { return ___m_SubId2_3; }
	inline uint64_t* get_address_of_m_SubId2_3() { return &___m_SubId2_3; }
	inline void set_m_SubId2_3(uint64_t value)
	{
		___m_SubId2_3 = value;
	}
};

struct TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B_StaticFields
{
public:
	// System.Text.RegularExpressions.Regex UnityEngine.XR.ARSubsystems.TrackableId::s_TrackableIdRegex
	Regex_t90F443D398F44965EA241A652ED75DF5BA072A1F * ___s_TrackableIdRegex_0;
	// UnityEngine.XR.ARSubsystems.TrackableId UnityEngine.XR.ARSubsystems.TrackableId::s_InvalidId
	TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  ___s_InvalidId_1;

public:
	inline static int32_t get_offset_of_s_TrackableIdRegex_0() { return static_cast<int32_t>(offsetof(TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B_StaticFields, ___s_TrackableIdRegex_0)); }
	inline Regex_t90F443D398F44965EA241A652ED75DF5BA072A1F * get_s_TrackableIdRegex_0() const { return ___s_TrackableIdRegex_0; }
	inline Regex_t90F443D398F44965EA241A652ED75DF5BA072A1F ** get_address_of_s_TrackableIdRegex_0() { return &___s_TrackableIdRegex_0; }
	inline void set_s_TrackableIdRegex_0(Regex_t90F443D398F44965EA241A652ED75DF5BA072A1F * value)
	{
		___s_TrackableIdRegex_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_TrackableIdRegex_0), (void*)value);
	}

	inline static int32_t get_offset_of_s_InvalidId_1() { return static_cast<int32_t>(offsetof(TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B_StaticFields, ___s_InvalidId_1)); }
	inline TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  get_s_InvalidId_1() const { return ___s_InvalidId_1; }
	inline TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B * get_address_of_s_InvalidId_1() { return &___s_InvalidId_1; }
	inline void set_s_InvalidId_1(TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  value)
	{
		___s_InvalidId_1 = value;
	}
};


// System.UInt32
struct  UInt32_tE60352A06233E4E69DD198BCC67142159F686B15 
{
public:
	// System.UInt32 System.UInt32::m_value
	uint32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(UInt32_tE60352A06233E4E69DD198BCC67142159F686B15, ___m_value_0)); }
	inline uint32_t get_m_value_0() const { return ___m_value_0; }
	inline uint32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint32_t value)
	{
		___m_value_0 = value;
	}
};


// FMOD.VECTOR
struct  VECTOR_tF39F3D310C168EBC05F4E9E1718300A72E6BDD2B 
{
public:
	// System.Single FMOD.VECTOR::x
	float ___x_0;
	// System.Single FMOD.VECTOR::y
	float ___y_1;
	// System.Single FMOD.VECTOR::z
	float ___z_2;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(VECTOR_tF39F3D310C168EBC05F4E9E1718300A72E6BDD2B, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(VECTOR_tF39F3D310C168EBC05F4E9E1718300A72E6BDD2B, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}

	inline static int32_t get_offset_of_z_2() { return static_cast<int32_t>(offsetof(VECTOR_tF39F3D310C168EBC05F4E9E1718300A72E6BDD2B, ___z_2)); }
	inline float get_z_2() const { return ___z_2; }
	inline float* get_address_of_z_2() { return &___z_2; }
	inline void set_z_2(float value)
	{
		___z_2 = value;
	}
};


// UnityEngine.Vector2
struct  Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 
{
public:
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}
};

struct Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields
{
public:
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___negativeInfinityVector_9;

public:
	inline static int32_t get_offset_of_zeroVector_2() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___zeroVector_2)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_zeroVector_2() const { return ___zeroVector_2; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_zeroVector_2() { return &___zeroVector_2; }
	inline void set_zeroVector_2(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___zeroVector_2 = value;
	}

	inline static int32_t get_offset_of_oneVector_3() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___oneVector_3)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_oneVector_3() const { return ___oneVector_3; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_oneVector_3() { return &___oneVector_3; }
	inline void set_oneVector_3(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___oneVector_3 = value;
	}

	inline static int32_t get_offset_of_upVector_4() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___upVector_4)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_upVector_4() const { return ___upVector_4; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_upVector_4() { return &___upVector_4; }
	inline void set_upVector_4(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___upVector_4 = value;
	}

	inline static int32_t get_offset_of_downVector_5() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___downVector_5)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_downVector_5() const { return ___downVector_5; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_downVector_5() { return &___downVector_5; }
	inline void set_downVector_5(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___downVector_5 = value;
	}

	inline static int32_t get_offset_of_leftVector_6() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___leftVector_6)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_leftVector_6() const { return ___leftVector_6; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_leftVector_6() { return &___leftVector_6; }
	inline void set_leftVector_6(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___leftVector_6 = value;
	}

	inline static int32_t get_offset_of_rightVector_7() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___rightVector_7)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_rightVector_7() const { return ___rightVector_7; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_rightVector_7() { return &___rightVector_7; }
	inline void set_rightVector_7(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___rightVector_7 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___positiveInfinityVector_8)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_positiveInfinityVector_8() const { return ___positiveInfinityVector_8; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_positiveInfinityVector_8() { return &___positiveInfinityVector_8; }
	inline void set_positiveInfinityVector_8(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___positiveInfinityVector_8 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_9() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___negativeInfinityVector_9)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_negativeInfinityVector_9() const { return ___negativeInfinityVector_9; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_negativeInfinityVector_9() { return &___negativeInfinityVector_9; }
	inline void set_negativeInfinityVector_9(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___negativeInfinityVector_9 = value;
	}
};


// UnityEngine.Vector3
struct  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E 
{
public:
	// System.Single UnityEngine.Vector3::x
	float ___x_2;
	// System.Single UnityEngine.Vector3::y
	float ___y_3;
	// System.Single UnityEngine.Vector3::z
	float ___z_4;

public:
	inline static int32_t get_offset_of_x_2() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E, ___x_2)); }
	inline float get_x_2() const { return ___x_2; }
	inline float* get_address_of_x_2() { return &___x_2; }
	inline void set_x_2(float value)
	{
		___x_2 = value;
	}

	inline static int32_t get_offset_of_y_3() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E, ___y_3)); }
	inline float get_y_3() const { return ___y_3; }
	inline float* get_address_of_y_3() { return &___y_3; }
	inline void set_y_3(float value)
	{
		___y_3 = value;
	}

	inline static int32_t get_offset_of_z_4() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E, ___z_4)); }
	inline float get_z_4() const { return ___z_4; }
	inline float* get_address_of_z_4() { return &___z_4; }
	inline void set_z_4(float value)
	{
		___z_4 = value;
	}
};

struct Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields
{
public:
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___zeroVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___oneVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___upVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___downVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___leftVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___rightVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___forwardVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___backVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___positiveInfinityVector_13;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___negativeInfinityVector_14;

public:
	inline static int32_t get_offset_of_zeroVector_5() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___zeroVector_5)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_zeroVector_5() const { return ___zeroVector_5; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_zeroVector_5() { return &___zeroVector_5; }
	inline void set_zeroVector_5(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___zeroVector_5 = value;
	}

	inline static int32_t get_offset_of_oneVector_6() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___oneVector_6)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_oneVector_6() const { return ___oneVector_6; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_oneVector_6() { return &___oneVector_6; }
	inline void set_oneVector_6(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___oneVector_6 = value;
	}

	inline static int32_t get_offset_of_upVector_7() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___upVector_7)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_upVector_7() const { return ___upVector_7; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_upVector_7() { return &___upVector_7; }
	inline void set_upVector_7(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___upVector_7 = value;
	}

	inline static int32_t get_offset_of_downVector_8() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___downVector_8)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_downVector_8() const { return ___downVector_8; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_downVector_8() { return &___downVector_8; }
	inline void set_downVector_8(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___downVector_8 = value;
	}

	inline static int32_t get_offset_of_leftVector_9() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___leftVector_9)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_leftVector_9() const { return ___leftVector_9; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_leftVector_9() { return &___leftVector_9; }
	inline void set_leftVector_9(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___leftVector_9 = value;
	}

	inline static int32_t get_offset_of_rightVector_10() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___rightVector_10)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_rightVector_10() const { return ___rightVector_10; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_rightVector_10() { return &___rightVector_10; }
	inline void set_rightVector_10(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___rightVector_10 = value;
	}

	inline static int32_t get_offset_of_forwardVector_11() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___forwardVector_11)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_forwardVector_11() const { return ___forwardVector_11; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_forwardVector_11() { return &___forwardVector_11; }
	inline void set_forwardVector_11(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___forwardVector_11 = value;
	}

	inline static int32_t get_offset_of_backVector_12() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___backVector_12)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_backVector_12() const { return ___backVector_12; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_backVector_12() { return &___backVector_12; }
	inline void set_backVector_12(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___backVector_12 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_13() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___positiveInfinityVector_13)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_positiveInfinityVector_13() const { return ___positiveInfinityVector_13; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_positiveInfinityVector_13() { return &___positiveInfinityVector_13; }
	inline void set_positiveInfinityVector_13(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___positiveInfinityVector_13 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_14() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___negativeInfinityVector_14)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_negativeInfinityVector_14() const { return ___negativeInfinityVector_14; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_negativeInfinityVector_14() { return &___negativeInfinityVector_14; }
	inline void set_negativeInfinityVector_14(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___negativeInfinityVector_14 = value;
	}
};


// UnityEngine.Vector4
struct  Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 
{
public:
	// System.Single UnityEngine.Vector4::x
	float ___x_1;
	// System.Single UnityEngine.Vector4::y
	float ___y_2;
	// System.Single UnityEngine.Vector4::z
	float ___z_3;
	// System.Single UnityEngine.Vector4::w
	float ___w_4;

public:
	inline static int32_t get_offset_of_x_1() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___x_1)); }
	inline float get_x_1() const { return ___x_1; }
	inline float* get_address_of_x_1() { return &___x_1; }
	inline void set_x_1(float value)
	{
		___x_1 = value;
	}

	inline static int32_t get_offset_of_y_2() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___y_2)); }
	inline float get_y_2() const { return ___y_2; }
	inline float* get_address_of_y_2() { return &___y_2; }
	inline void set_y_2(float value)
	{
		___y_2 = value;
	}

	inline static int32_t get_offset_of_z_3() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___z_3)); }
	inline float get_z_3() const { return ___z_3; }
	inline float* get_address_of_z_3() { return &___z_3; }
	inline void set_z_3(float value)
	{
		___z_3 = value;
	}

	inline static int32_t get_offset_of_w_4() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___w_4)); }
	inline float get_w_4() const { return ___w_4; }
	inline float* get_address_of_w_4() { return &___w_4; }
	inline void set_w_4(float value)
	{
		___w_4 = value;
	}
};

struct Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields
{
public:
	// UnityEngine.Vector4 UnityEngine.Vector4::zeroVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___zeroVector_5;
	// UnityEngine.Vector4 UnityEngine.Vector4::oneVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___oneVector_6;
	// UnityEngine.Vector4 UnityEngine.Vector4::positiveInfinityVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___positiveInfinityVector_7;
	// UnityEngine.Vector4 UnityEngine.Vector4::negativeInfinityVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___negativeInfinityVector_8;

public:
	inline static int32_t get_offset_of_zeroVector_5() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___zeroVector_5)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_zeroVector_5() const { return ___zeroVector_5; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_zeroVector_5() { return &___zeroVector_5; }
	inline void set_zeroVector_5(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___zeroVector_5 = value;
	}

	inline static int32_t get_offset_of_oneVector_6() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___oneVector_6)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_oneVector_6() const { return ___oneVector_6; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_oneVector_6() { return &___oneVector_6; }
	inline void set_oneVector_6(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___oneVector_6 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_7() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___positiveInfinityVector_7)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_positiveInfinityVector_7() const { return ___positiveInfinityVector_7; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_positiveInfinityVector_7() { return &___positiveInfinityVector_7; }
	inline void set_positiveInfinityVector_7(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___positiveInfinityVector_7 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___negativeInfinityVector_8)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_negativeInfinityVector_8() const { return ___negativeInfinityVector_8; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_negativeInfinityVector_8() { return &___negativeInfinityVector_8; }
	inline void set_negativeInfinityVector_8(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___negativeInfinityVector_8 = value;
	}
};


// System.Void
struct  Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5 
{
public:
	union
	{
		struct
		{
		};
		uint8_t Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5__padding[1];
	};

public:
};


// System.Collections.Generic.KeyValuePair`2<UnityEngine.XR.ARSubsystems.TrackableId,UnityEngine.XR.ARFoundation.ARPlane>
struct  KeyValuePair_2_t9CC8D1EE96D79DB3676F4199981C4AA3321FAF70 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	ARPlane_t6336725EC68CE9029844CBE72A7FE7374AD74891 * ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t9CC8D1EE96D79DB3676F4199981C4AA3321FAF70, ___key_0)); }
	inline TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  get_key_0() const { return ___key_0; }
	inline TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B * get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  value)
	{
		___key_0 = value;
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t9CC8D1EE96D79DB3676F4199981C4AA3321FAF70, ___value_1)); }
	inline ARPlane_t6336725EC68CE9029844CBE72A7FE7374AD74891 * get_value_1() const { return ___value_1; }
	inline ARPlane_t6336725EC68CE9029844CBE72A7FE7374AD74891 ** get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(ARPlane_t6336725EC68CE9029844CBE72A7FE7374AD74891 * value)
	{
		___value_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___value_1), (void*)value);
	}
};


// System.Collections.Generic.KeyValuePair`2<UnityEngine.XR.ARSubsystems.TrackableId,System.Object>
struct  KeyValuePair_2_t98F89C24FA7D45751355C66B2E2DE9584D1F5C3D 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	RuntimeObject * ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t98F89C24FA7D45751355C66B2E2DE9584D1F5C3D, ___key_0)); }
	inline TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  get_key_0() const { return ___key_0; }
	inline TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B * get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  value)
	{
		___key_0 = value;
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t98F89C24FA7D45751355C66B2E2DE9584D1F5C3D, ___value_1)); }
	inline RuntimeObject * get_value_1() const { return ___value_1; }
	inline RuntimeObject ** get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(RuntimeObject * value)
	{
		___value_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___value_1), (void*)value);
	}
};


// System.Nullable`1<UnityEngine.Color>
struct  Nullable_1_tA06400BA484934D9CEBAF66D0E71C822EF09A498 
{
public:
	// T System.Nullable`1::value
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_tA06400BA484934D9CEBAF66D0E71C822EF09A498, ___value_0)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_value_0() const { return ___value_0; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_tA06400BA484934D9CEBAF66D0E71C822EF09A498, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
	}
};


// System.Nullable`1<UnityEngine.Matrix4x4>
struct  Nullable_1_tBC3CF93247D9ED5D94966DBCDFCDE51AF9779E8E 
{
public:
	// T System.Nullable`1::value
	Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_tBC3CF93247D9ED5D94966DBCDFCDE51AF9779E8E, ___value_0)); }
	inline Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  get_value_0() const { return ___value_0; }
	inline Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 * get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_tBC3CF93247D9ED5D94966DBCDFCDE51AF9779E8E, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
	}
};


// System.Nullable`1<UnityEngine.Rendering.SphericalHarmonicsL2>
struct  Nullable_1_t87378933461FE259D349B667A2D4FE02B800A81E 
{
public:
	// T System.Nullable`1::value
	SphericalHarmonicsL2_tD2EC2ADCA26B9BE05036C3ABCF3CC049EC73EA64  ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_t87378933461FE259D349B667A2D4FE02B800A81E, ___value_0)); }
	inline SphericalHarmonicsL2_tD2EC2ADCA26B9BE05036C3ABCF3CC049EC73EA64  get_value_0() const { return ___value_0; }
	inline SphericalHarmonicsL2_tD2EC2ADCA26B9BE05036C3ABCF3CC049EC73EA64 * get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(SphericalHarmonicsL2_tD2EC2ADCA26B9BE05036C3ABCF3CC049EC73EA64  value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_t87378933461FE259D349B667A2D4FE02B800A81E, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
	}
};


// System.Nullable`1<UnityEngine.Vector3>
struct  Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258 
{
public:
	// T System.Nullable`1::value
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258, ___value_0)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_value_0() const { return ___value_0; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
	}
};


// UnityEngine.XR.ARFoundation.ARSessionState
struct  ARSessionState_tC5054273C7CB11C5C40D36745DDD2AF056ED1F25 
{
public:
	// System.Int32 UnityEngine.XR.ARFoundation.ARSessionState::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ARSessionState_tC5054273C7CB11C5C40D36745DDD2AF056ED1F25, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Unity.Collections.Allocator
struct  Allocator_t9888223DEF4F46F3419ECFCCD0753599BEE52A05 
{
public:
	// System.Int32 Unity.Collections.Allocator::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Allocator_t9888223DEF4F46F3419ECFCCD0753599BEE52A05, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// FMOD.Studio.Bank
struct  Bank_t65BB4F2DD95EE2A62FC08E2C92D32FC34F2EFAE7 
{
public:
	// System.IntPtr FMOD.Studio.Bank::handle
	intptr_t ___handle_0;

public:
	inline static int32_t get_offset_of_handle_0() { return static_cast<int32_t>(offsetof(Bank_t65BB4F2DD95EE2A62FC08E2C92D32FC34F2EFAE7, ___handle_0)); }
	inline intptr_t get_handle_0() const { return ___handle_0; }
	inline intptr_t* get_address_of_handle_0() { return &___handle_0; }
	inline void set_handle_0(intptr_t value)
	{
		___handle_0 = value;
	}
};


// System.Reflection.BindingFlags
struct  BindingFlags_tAAAB07D9AC588F0D55D844E51D7035E96DF94733 
{
public:
	// System.Int32 System.Reflection.BindingFlags::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(BindingFlags_tAAAB07D9AC588F0D55D844E51D7035E96DF94733, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Bounds
struct  Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37 
{
public:
	// UnityEngine.Vector3 UnityEngine.Bounds::m_Center
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___m_Center_0;
	// UnityEngine.Vector3 UnityEngine.Bounds::m_Extents
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___m_Extents_1;

public:
	inline static int32_t get_offset_of_m_Center_0() { return static_cast<int32_t>(offsetof(Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37, ___m_Center_0)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_m_Center_0() const { return ___m_Center_0; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_m_Center_0() { return &___m_Center_0; }
	inline void set_m_Center_0(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___m_Center_0 = value;
	}

	inline static int32_t get_offset_of_m_Extents_1() { return static_cast<int32_t>(offsetof(Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37, ___m_Extents_1)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_m_Extents_1() const { return ___m_Extents_1; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_m_Extents_1() { return &___m_Extents_1; }
	inline void set_m_Extents_1(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___m_Extents_1 = value;
	}
};


// FMOD.Studio.Bus
struct  Bus_tB5E25ABA15F3E5DB91A09BABE4076CF855D37520 
{
public:
	// System.IntPtr FMOD.Studio.Bus::handle
	intptr_t ___handle_0;

public:
	inline static int32_t get_offset_of_handle_0() { return static_cast<int32_t>(offsetof(Bus_tB5E25ABA15F3E5DB91A09BABE4076CF855D37520, ___handle_0)); }
	inline intptr_t get_handle_0() const { return ___handle_0; }
	inline intptr_t* get_address_of_handle_0() { return &___handle_0; }
	inline void set_handle_0(intptr_t value)
	{
		___handle_0 = value;
	}
};


// UnityEngine.XR.ARFoundation.CameraFacingDirection
struct  CameraFacingDirection_tBD399103FCCBB7D35472AF597BA12FC26CB9F0A5 
{
public:
	// System.Int32 UnityEngine.XR.ARFoundation.CameraFacingDirection::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(CameraFacingDirection_tBD399103FCCBB7D35472AF597BA12FC26CB9F0A5, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.XR.ARSubsystems.CameraFocusMode
struct  CameraFocusMode_t573CBB96E832D97A59EE6B5EBF79568A5C83042A 
{
public:
	// System.Int32 UnityEngine.XR.ARSubsystems.CameraFocusMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(CameraFocusMode_t573CBB96E832D97A59EE6B5EBF79568A5C83042A, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// FMOD.ChannelGroup
struct  ChannelGroup_tE4C8A600CF2C0DE7A4D5924C072EFAD2E5CF172A 
{
public:
	// System.IntPtr FMOD.ChannelGroup::handle
	intptr_t ___handle_0;

public:
	inline static int32_t get_offset_of_handle_0() { return static_cast<int32_t>(offsetof(ChannelGroup_tE4C8A600CF2C0DE7A4D5924C072EFAD2E5CF172A, ___handle_0)); }
	inline intptr_t get_handle_0() const { return ___handle_0; }
	inline intptr_t* get_address_of_handle_0() { return &___handle_0; }
	inline void set_handle_0(intptr_t value)
	{
		___handle_0 = value;
	}
};


// UnityEngine.UI.ColorBlock
struct  ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955 
{
public:
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_NormalColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_NormalColor_0;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_HighlightedColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_HighlightedColor_1;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_PressedColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_PressedColor_2;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_SelectedColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_SelectedColor_3;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_DisabledColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_DisabledColor_4;
	// System.Single UnityEngine.UI.ColorBlock::m_ColorMultiplier
	float ___m_ColorMultiplier_5;
	// System.Single UnityEngine.UI.ColorBlock::m_FadeDuration
	float ___m_FadeDuration_6;

public:
	inline static int32_t get_offset_of_m_NormalColor_0() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955, ___m_NormalColor_0)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_m_NormalColor_0() const { return ___m_NormalColor_0; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_m_NormalColor_0() { return &___m_NormalColor_0; }
	inline void set_m_NormalColor_0(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___m_NormalColor_0 = value;
	}

	inline static int32_t get_offset_of_m_HighlightedColor_1() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955, ___m_HighlightedColor_1)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_m_HighlightedColor_1() const { return ___m_HighlightedColor_1; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_m_HighlightedColor_1() { return &___m_HighlightedColor_1; }
	inline void set_m_HighlightedColor_1(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___m_HighlightedColor_1 = value;
	}

	inline static int32_t get_offset_of_m_PressedColor_2() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955, ___m_PressedColor_2)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_m_PressedColor_2() const { return ___m_PressedColor_2; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_m_PressedColor_2() { return &___m_PressedColor_2; }
	inline void set_m_PressedColor_2(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___m_PressedColor_2 = value;
	}

	inline static int32_t get_offset_of_m_SelectedColor_3() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955, ___m_SelectedColor_3)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_m_SelectedColor_3() const { return ___m_SelectedColor_3; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_m_SelectedColor_3() { return &___m_SelectedColor_3; }
	inline void set_m_SelectedColor_3(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___m_SelectedColor_3 = value;
	}

	inline static int32_t get_offset_of_m_DisabledColor_4() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955, ___m_DisabledColor_4)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_m_DisabledColor_4() const { return ___m_DisabledColor_4; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_m_DisabledColor_4() { return &___m_DisabledColor_4; }
	inline void set_m_DisabledColor_4(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___m_DisabledColor_4 = value;
	}

	inline static int32_t get_offset_of_m_ColorMultiplier_5() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955, ___m_ColorMultiplier_5)); }
	inline float get_m_ColorMultiplier_5() const { return ___m_ColorMultiplier_5; }
	inline float* get_address_of_m_ColorMultiplier_5() { return &___m_ColorMultiplier_5; }
	inline void set_m_ColorMultiplier_5(float value)
	{
		___m_ColorMultiplier_5 = value;
	}

	inline static int32_t get_offset_of_m_FadeDuration_6() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955, ___m_FadeDuration_6)); }
	inline float get_m_FadeDuration_6() const { return ___m_FadeDuration_6; }
	inline float* get_address_of_m_FadeDuration_6() { return &___m_FadeDuration_6; }
	inline void set_m_FadeDuration_6(float value)
	{
		___m_FadeDuration_6 = value;
	}
};

struct ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955_StaticFields
{
public:
	// UnityEngine.UI.ColorBlock UnityEngine.UI.ColorBlock::defaultColorBlock
	ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955  ___defaultColorBlock_7;

public:
	inline static int32_t get_offset_of_defaultColorBlock_7() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955_StaticFields, ___defaultColorBlock_7)); }
	inline ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955  get_defaultColorBlock_7() const { return ___defaultColorBlock_7; }
	inline ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955 * get_address_of_defaultColorBlock_7() { return &___defaultColorBlock_7; }
	inline void set_defaultColorBlock_7(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955  value)
	{
		___defaultColorBlock_7 = value;
	}
};


// FMOD.DSP
struct  DSP_t3554E4816E29B84C01A61DD26D8A8FC5831A2412 
{
public:
	// System.IntPtr FMOD.DSP::handle
	intptr_t ___handle_0;

public:
	inline static int32_t get_offset_of_handle_0() { return static_cast<int32_t>(offsetof(DSP_t3554E4816E29B84C01A61DD26D8A8FC5831A2412, ___handle_0)); }
	inline intptr_t get_handle_0() const { return ___handle_0; }
	inline intptr_t* get_address_of_handle_0() { return &___handle_0; }
	inline void set_handle_0(intptr_t value)
	{
		___handle_0 = value;
	}
};


// System.Delegate
struct  Delegate_t  : public RuntimeObject
{
public:
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject * ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::extra_arg
	intptr_t ___extra_arg_5;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_6;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t * ___method_info_7;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t * ___original_method_info_8;
	// System.DelegateData System.Delegate::data
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_10;

public:
	inline static int32_t get_offset_of_method_ptr_0() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_ptr_0)); }
	inline Il2CppMethodPointer get_method_ptr_0() const { return ___method_ptr_0; }
	inline Il2CppMethodPointer* get_address_of_method_ptr_0() { return &___method_ptr_0; }
	inline void set_method_ptr_0(Il2CppMethodPointer value)
	{
		___method_ptr_0 = value;
	}

	inline static int32_t get_offset_of_invoke_impl_1() { return static_cast<int32_t>(offsetof(Delegate_t, ___invoke_impl_1)); }
	inline intptr_t get_invoke_impl_1() const { return ___invoke_impl_1; }
	inline intptr_t* get_address_of_invoke_impl_1() { return &___invoke_impl_1; }
	inline void set_invoke_impl_1(intptr_t value)
	{
		___invoke_impl_1 = value;
	}

	inline static int32_t get_offset_of_m_target_2() { return static_cast<int32_t>(offsetof(Delegate_t, ___m_target_2)); }
	inline RuntimeObject * get_m_target_2() const { return ___m_target_2; }
	inline RuntimeObject ** get_address_of_m_target_2() { return &___m_target_2; }
	inline void set_m_target_2(RuntimeObject * value)
	{
		___m_target_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_target_2), (void*)value);
	}

	inline static int32_t get_offset_of_method_3() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_3)); }
	inline intptr_t get_method_3() const { return ___method_3; }
	inline intptr_t* get_address_of_method_3() { return &___method_3; }
	inline void set_method_3(intptr_t value)
	{
		___method_3 = value;
	}

	inline static int32_t get_offset_of_delegate_trampoline_4() { return static_cast<int32_t>(offsetof(Delegate_t, ___delegate_trampoline_4)); }
	inline intptr_t get_delegate_trampoline_4() const { return ___delegate_trampoline_4; }
	inline intptr_t* get_address_of_delegate_trampoline_4() { return &___delegate_trampoline_4; }
	inline void set_delegate_trampoline_4(intptr_t value)
	{
		___delegate_trampoline_4 = value;
	}

	inline static int32_t get_offset_of_extra_arg_5() { return static_cast<int32_t>(offsetof(Delegate_t, ___extra_arg_5)); }
	inline intptr_t get_extra_arg_5() const { return ___extra_arg_5; }
	inline intptr_t* get_address_of_extra_arg_5() { return &___extra_arg_5; }
	inline void set_extra_arg_5(intptr_t value)
	{
		___extra_arg_5 = value;
	}

	inline static int32_t get_offset_of_method_code_6() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_code_6)); }
	inline intptr_t get_method_code_6() const { return ___method_code_6; }
	inline intptr_t* get_address_of_method_code_6() { return &___method_code_6; }
	inline void set_method_code_6(intptr_t value)
	{
		___method_code_6 = value;
	}

	inline static int32_t get_offset_of_method_info_7() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_info_7)); }
	inline MethodInfo_t * get_method_info_7() const { return ___method_info_7; }
	inline MethodInfo_t ** get_address_of_method_info_7() { return &___method_info_7; }
	inline void set_method_info_7(MethodInfo_t * value)
	{
		___method_info_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___method_info_7), (void*)value);
	}

	inline static int32_t get_offset_of_original_method_info_8() { return static_cast<int32_t>(offsetof(Delegate_t, ___original_method_info_8)); }
	inline MethodInfo_t * get_original_method_info_8() const { return ___original_method_info_8; }
	inline MethodInfo_t ** get_address_of_original_method_info_8() { return &___original_method_info_8; }
	inline void set_original_method_info_8(MethodInfo_t * value)
	{
		___original_method_info_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___original_method_info_8), (void*)value);
	}

	inline static int32_t get_offset_of_data_9() { return static_cast<int32_t>(offsetof(Delegate_t, ___data_9)); }
	inline DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * get_data_9() const { return ___data_9; }
	inline DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 ** get_address_of_data_9() { return &___data_9; }
	inline void set_data_9(DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * value)
	{
		___data_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___data_9), (void*)value);
	}

	inline static int32_t get_offset_of_method_is_virtual_10() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_is_virtual_10)); }
	inline bool get_method_is_virtual_10() const { return ___method_is_virtual_10; }
	inline bool* get_address_of_method_is_virtual_10() { return &___method_is_virtual_10; }
	inline void set_method_is_virtual_10(bool value)
	{
		___method_is_virtual_10 = value;
	}
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
	MethodInfo_t * ___method_info_7;
	MethodInfo_t * ___original_method_info_8;
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
	int32_t ___method_is_virtual_10;
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
	MethodInfo_t * ___method_info_7;
	MethodInfo_t * ___original_method_info_8;
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
	int32_t ___method_is_virtual_10;
};

// System.Exception
struct  Exception_t  : public RuntimeObject
{
public:
	// System.String System.Exception::_className
	String_t* ____className_1;
	// System.String System.Exception::_message
	String_t* ____message_2;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_3;
	// System.Exception System.Exception::_innerException
	Exception_t * ____innerException_4;
	// System.String System.Exception::_helpURL
	String_t* ____helpURL_5;
	// System.Object System.Exception::_stackTrace
	RuntimeObject * ____stackTrace_6;
	// System.String System.Exception::_stackTraceString
	String_t* ____stackTraceString_7;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_8;
	// System.Int32 System.Exception::_remoteStackIndex
	int32_t ____remoteStackIndex_9;
	// System.Object System.Exception::_dynamicMethods
	RuntimeObject * ____dynamicMethods_10;
	// System.Int32 System.Exception::_HResult
	int32_t ____HResult_11;
	// System.String System.Exception::_source
	String_t* ____source_12;
	// System.Runtime.Serialization.SafeSerializationManager System.Exception::_safeSerializationManager
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* ___native_trace_ips_15;

public:
	inline static int32_t get_offset_of__className_1() { return static_cast<int32_t>(offsetof(Exception_t, ____className_1)); }
	inline String_t* get__className_1() const { return ____className_1; }
	inline String_t** get_address_of__className_1() { return &____className_1; }
	inline void set__className_1(String_t* value)
	{
		____className_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____className_1), (void*)value);
	}

	inline static int32_t get_offset_of__message_2() { return static_cast<int32_t>(offsetof(Exception_t, ____message_2)); }
	inline String_t* get__message_2() const { return ____message_2; }
	inline String_t** get_address_of__message_2() { return &____message_2; }
	inline void set__message_2(String_t* value)
	{
		____message_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____message_2), (void*)value);
	}

	inline static int32_t get_offset_of__data_3() { return static_cast<int32_t>(offsetof(Exception_t, ____data_3)); }
	inline RuntimeObject* get__data_3() const { return ____data_3; }
	inline RuntimeObject** get_address_of__data_3() { return &____data_3; }
	inline void set__data_3(RuntimeObject* value)
	{
		____data_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____data_3), (void*)value);
	}

	inline static int32_t get_offset_of__innerException_4() { return static_cast<int32_t>(offsetof(Exception_t, ____innerException_4)); }
	inline Exception_t * get__innerException_4() const { return ____innerException_4; }
	inline Exception_t ** get_address_of__innerException_4() { return &____innerException_4; }
	inline void set__innerException_4(Exception_t * value)
	{
		____innerException_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____innerException_4), (void*)value);
	}

	inline static int32_t get_offset_of__helpURL_5() { return static_cast<int32_t>(offsetof(Exception_t, ____helpURL_5)); }
	inline String_t* get__helpURL_5() const { return ____helpURL_5; }
	inline String_t** get_address_of__helpURL_5() { return &____helpURL_5; }
	inline void set__helpURL_5(String_t* value)
	{
		____helpURL_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____helpURL_5), (void*)value);
	}

	inline static int32_t get_offset_of__stackTrace_6() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTrace_6)); }
	inline RuntimeObject * get__stackTrace_6() const { return ____stackTrace_6; }
	inline RuntimeObject ** get_address_of__stackTrace_6() { return &____stackTrace_6; }
	inline void set__stackTrace_6(RuntimeObject * value)
	{
		____stackTrace_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____stackTrace_6), (void*)value);
	}

	inline static int32_t get_offset_of__stackTraceString_7() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTraceString_7)); }
	inline String_t* get__stackTraceString_7() const { return ____stackTraceString_7; }
	inline String_t** get_address_of__stackTraceString_7() { return &____stackTraceString_7; }
	inline void set__stackTraceString_7(String_t* value)
	{
		____stackTraceString_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____stackTraceString_7), (void*)value);
	}

	inline static int32_t get_offset_of__remoteStackTraceString_8() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackTraceString_8)); }
	inline String_t* get__remoteStackTraceString_8() const { return ____remoteStackTraceString_8; }
	inline String_t** get_address_of__remoteStackTraceString_8() { return &____remoteStackTraceString_8; }
	inline void set__remoteStackTraceString_8(String_t* value)
	{
		____remoteStackTraceString_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____remoteStackTraceString_8), (void*)value);
	}

	inline static int32_t get_offset_of__remoteStackIndex_9() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackIndex_9)); }
	inline int32_t get__remoteStackIndex_9() const { return ____remoteStackIndex_9; }
	inline int32_t* get_address_of__remoteStackIndex_9() { return &____remoteStackIndex_9; }
	inline void set__remoteStackIndex_9(int32_t value)
	{
		____remoteStackIndex_9 = value;
	}

	inline static int32_t get_offset_of__dynamicMethods_10() { return static_cast<int32_t>(offsetof(Exception_t, ____dynamicMethods_10)); }
	inline RuntimeObject * get__dynamicMethods_10() const { return ____dynamicMethods_10; }
	inline RuntimeObject ** get_address_of__dynamicMethods_10() { return &____dynamicMethods_10; }
	inline void set__dynamicMethods_10(RuntimeObject * value)
	{
		____dynamicMethods_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____dynamicMethods_10), (void*)value);
	}

	inline static int32_t get_offset_of__HResult_11() { return static_cast<int32_t>(offsetof(Exception_t, ____HResult_11)); }
	inline int32_t get__HResult_11() const { return ____HResult_11; }
	inline int32_t* get_address_of__HResult_11() { return &____HResult_11; }
	inline void set__HResult_11(int32_t value)
	{
		____HResult_11 = value;
	}

	inline static int32_t get_offset_of__source_12() { return static_cast<int32_t>(offsetof(Exception_t, ____source_12)); }
	inline String_t* get__source_12() const { return ____source_12; }
	inline String_t** get_address_of__source_12() { return &____source_12; }
	inline void set__source_12(String_t* value)
	{
		____source_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____source_12), (void*)value);
	}

	inline static int32_t get_offset_of__safeSerializationManager_13() { return static_cast<int32_t>(offsetof(Exception_t, ____safeSerializationManager_13)); }
	inline SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * get__safeSerializationManager_13() const { return ____safeSerializationManager_13; }
	inline SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F ** get_address_of__safeSerializationManager_13() { return &____safeSerializationManager_13; }
	inline void set__safeSerializationManager_13(SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * value)
	{
		____safeSerializationManager_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____safeSerializationManager_13), (void*)value);
	}

	inline static int32_t get_offset_of_captured_traces_14() { return static_cast<int32_t>(offsetof(Exception_t, ___captured_traces_14)); }
	inline StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* get_captured_traces_14() const { return ___captured_traces_14; }
	inline StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971** get_address_of_captured_traces_14() { return &___captured_traces_14; }
	inline void set_captured_traces_14(StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* value)
	{
		___captured_traces_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___captured_traces_14), (void*)value);
	}

	inline static int32_t get_offset_of_native_trace_ips_15() { return static_cast<int32_t>(offsetof(Exception_t, ___native_trace_ips_15)); }
	inline IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* get_native_trace_ips_15() const { return ___native_trace_ips_15; }
	inline IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6** get_address_of_native_trace_ips_15() { return &___native_trace_ips_15; }
	inline void set_native_trace_ips_15(IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* value)
	{
		___native_trace_ips_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___native_trace_ips_15), (void*)value);
	}
};

struct Exception_t_StaticFields
{
public:
	// System.Object System.Exception::s_EDILock
	RuntimeObject * ___s_EDILock_0;

public:
	inline static int32_t get_offset_of_s_EDILock_0() { return static_cast<int32_t>(offsetof(Exception_t_StaticFields, ___s_EDILock_0)); }
	inline RuntimeObject * get_s_EDILock_0() const { return ___s_EDILock_0; }
	inline RuntimeObject ** get_address_of_s_EDILock_0() { return &___s_EDILock_0; }
	inline void set_s_EDILock_0(RuntimeObject * value)
	{
		___s_EDILock_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_EDILock_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Exception
struct Exception_t_marshaled_pinvoke
{
	char* ____className_1;
	char* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_pinvoke* ____innerException_4;
	char* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	char* ____stackTraceString_7;
	char* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	char* ____source_12;
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
};
// Native definition for COM marshalling of System.Exception
struct Exception_t_marshaled_com
{
	Il2CppChar* ____className_1;
	Il2CppChar* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_com* ____innerException_4;
	Il2CppChar* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	Il2CppChar* ____stackTraceString_7;
	Il2CppChar* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	Il2CppChar* ____source_12;
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
};

// UnityEngine.XR.ARFoundation.LightEstimation
struct  LightEstimation_tD66BC916A1BD1A48133EAA6F2DFD3F2F45909B93 
{
public:
	// System.Int32 UnityEngine.XR.ARFoundation.LightEstimation::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(LightEstimation_tD66BC916A1BD1A48133EAA6F2DFD3F2F45909B93, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.XR.ARSubsystems.LightEstimationMode
struct  LightEstimationMode_tE07D0ADA96C21197E44E8E906DF0FCECB7DAEC56 
{
public:
	// System.Int32 UnityEngine.XR.ARSubsystems.LightEstimationMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(LightEstimationMode_tE07D0ADA96C21197E44E8E906DF0FCECB7DAEC56, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// IndoorAtlas.LocationManager
struct  LocationManager_t8BEF4C1AFA85AB524CFB93A28DF2478A26E27401  : public RuntimeObject
{
public:

public:
};

struct LocationManager_t8BEF4C1AFA85AB524CFB93A28DF2478A26E27401_StaticFields
{
public:
	// UnityEngine.Matrix4x4 IndoorAtlas.LocationManager::m_unityWorldToIndoorAtlasWorld
	Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  ___m_unityWorldToIndoorAtlasWorld_0;

public:
	inline static int32_t get_offset_of_m_unityWorldToIndoorAtlasWorld_0() { return static_cast<int32_t>(offsetof(LocationManager_t8BEF4C1AFA85AB524CFB93A28DF2478A26E27401_StaticFields, ___m_unityWorldToIndoorAtlasWorld_0)); }
	inline Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  get_m_unityWorldToIndoorAtlasWorld_0() const { return ___m_unityWorldToIndoorAtlasWorld_0; }
	inline Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 * get_address_of_m_unityWorldToIndoorAtlasWorld_0() { return &___m_unityWorldToIndoorAtlasWorld_0; }
	inline void set_m_unityWorldToIndoorAtlasWorld_0(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  value)
	{
		___m_unityWorldToIndoorAtlasWorld_0 = value;
	}
};


// UnityEngine.XR.ARSubsystems.NotTrackingReason
struct  NotTrackingReason_t853CA5527FA4E156B45DD1BD3E3E978C78BC49A9 
{
public:
	// System.Int32 UnityEngine.XR.ARSubsystems.NotTrackingReason::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(NotTrackingReason_t853CA5527FA4E156B45DD1BD3E3E978C78BC49A9, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Object
struct  Object_tF2F3778131EFF286AF62B7B013A170F95A91571A  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;

public:
	inline static int32_t get_offset_of_m_CachedPtr_0() { return static_cast<int32_t>(offsetof(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A, ___m_CachedPtr_0)); }
	inline intptr_t get_m_CachedPtr_0() const { return ___m_CachedPtr_0; }
	inline intptr_t* get_address_of_m_CachedPtr_0() { return &___m_CachedPtr_0; }
	inline void set_m_CachedPtr_0(intptr_t value)
	{
		___m_CachedPtr_0 = value;
	}
};

struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_StaticFields
{
public:
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;

public:
	inline static int32_t get_offset_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return static_cast<int32_t>(offsetof(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_StaticFields, ___OffsetOfInstanceIDInCPlusPlusObject_1)); }
	inline int32_t get_OffsetOfInstanceIDInCPlusPlusObject_1() const { return ___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline int32_t* get_address_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return &___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline void set_OffsetOfInstanceIDInCPlusPlusObject_1(int32_t value)
	{
		___OffsetOfInstanceIDInCPlusPlusObject_1 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// UnityEngine.XR.ARSubsystems.PlaneAlignment
struct  PlaneAlignment_t1BB7048E3969913434FB1B3BCBCA2E81D4E71ADA 
{
public:
	// System.Int32 UnityEngine.XR.ARSubsystems.PlaneAlignment::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(PlaneAlignment_t1BB7048E3969913434FB1B3BCBCA2E81D4E71ADA, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.XR.ARSubsystems.PlaneClassification
struct  PlaneClassification_tAC2E2E9609D4396BC311E2987CA3EFA5115EDD10 
{
public:
	// System.Int32 UnityEngine.XR.ARSubsystems.PlaneClassification::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(PlaneClassification_tAC2E2E9609D4396BC311E2987CA3EFA5115EDD10, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.XR.ARSubsystems.PlaneDetectionMode
struct  PlaneDetectionMode_t22DC72CB3F42DDC9A2472A66F8119475357B48CD 
{
public:
	// System.Int32 UnityEngine.XR.ARSubsystems.PlaneDetectionMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(PlaneDetectionMode_t22DC72CB3F42DDC9A2472A66F8119475357B48CD, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Pose
struct  Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A 
{
public:
	// UnityEngine.Vector3 UnityEngine.Pose::position
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position_0;
	// UnityEngine.Quaternion UnityEngine.Pose::rotation
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___rotation_1;

public:
	inline static int32_t get_offset_of_position_0() { return static_cast<int32_t>(offsetof(Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A, ___position_0)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_position_0() const { return ___position_0; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_position_0() { return &___position_0; }
	inline void set_position_0(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___position_0 = value;
	}

	inline static int32_t get_offset_of_rotation_1() { return static_cast<int32_t>(offsetof(Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A, ___rotation_1)); }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  get_rotation_1() const { return ___rotation_1; }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * get_address_of_rotation_1() { return &___rotation_1; }
	inline void set_rotation_1(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  value)
	{
		___rotation_1 = value;
	}
};

struct Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A_StaticFields
{
public:
	// UnityEngine.Pose UnityEngine.Pose::k_Identity
	Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  ___k_Identity_2;

public:
	inline static int32_t get_offset_of_k_Identity_2() { return static_cast<int32_t>(offsetof(Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A_StaticFields, ___k_Identity_2)); }
	inline Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  get_k_Identity_2() const { return ___k_Identity_2; }
	inline Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A * get_address_of_k_Identity_2() { return &___k_Identity_2; }
	inline void set_k_Identity_2(Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  value)
	{
		___k_Identity_2 = value;
	}
};


// FMOD.RESULT
struct  RESULT_t25BE0876E69B44E7D72DC4C52217E7C5B1A82271 
{
public:
	// System.Int32 FMOD.RESULT::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(RESULT_t25BE0876E69B44E7D72DC4C52217E7C5B1A82271, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.RuntimeTypeHandle
struct  RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 
{
public:
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9, ___value_0)); }
	inline intptr_t get_value_0() const { return ___value_0; }
	inline intptr_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(intptr_t value)
	{
		___value_0 = value;
	}
};


// UnityEngine.SendMessageOptions
struct  SendMessageOptions_t89E16D7B4FAECAF721478B06E56214F97438C61B 
{
public:
	// System.Int32 UnityEngine.SendMessageOptions::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(SendMessageOptions_t89E16D7B4FAECAF721478B06E56214F97438C61B, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.XR.ARSubsystems.SessionAvailability
struct  SessionAvailability_tF5E98733E00C91772417EDEF3B3A6FA1DF653FCD 
{
public:
	// System.Int32 UnityEngine.XR.ARSubsystems.SessionAvailability::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(SessionAvailability_tF5E98733E00C91772417EDEF3B3A6FA1DF653FCD, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// FMOD.Studio.System
struct  System_tFDE1396EF88A69D9596BB5554FB63FD6CF6B56F0 
{
public:
	// System.IntPtr FMOD.Studio.System::handle
	intptr_t ___handle_0;

public:
	inline static int32_t get_offset_of_handle_0() { return static_cast<int32_t>(offsetof(System_tFDE1396EF88A69D9596BB5554FB63FD6CF6B56F0, ___handle_0)); }
	inline intptr_t get_handle_0() const { return ___handle_0; }
	inline intptr_t* get_address_of_handle_0() { return &___handle_0; }
	inline void set_handle_0(intptr_t value)
	{
		___handle_0 = value;
	}
};


// UnityEngine.Rendering.TextureDimension
struct  TextureDimension_tADCCB7C1D30E4D1182651BA9094B4DE61B63EACC 
{
public:
	// System.Int32 UnityEngine.Rendering.TextureDimension::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TextureDimension_tADCCB7C1D30E4D1182651BA9094B4DE61B63EACC, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.TextureFormat
struct  TextureFormat_tBED5388A0445FE978F97B41D247275B036407932 
{
public:
	// System.Int32 UnityEngine.TextureFormat::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TextureFormat_tBED5388A0445FE978F97B41D247275B036407932, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.XR.ARFoundation.TrackingMode
struct  TrackingMode_t494215013DD008CD55735FEBB426C0F188B72646 
{
public:
	// System.Int32 UnityEngine.XR.ARFoundation.TrackingMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TrackingMode_t494215013DD008CD55735FEBB426C0F188B72646, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.XR.ARSubsystems.TrackingState
struct  TrackingState_tB6996ED0D52D2A17DFACC90800705B81D370FC38 
{
public:
	// System.Int32 UnityEngine.XR.ARSubsystems.TrackingState::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TrackingState_tB6996ED0D52D2A17DFACC90800705B81D370FC38, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.UI.Dropdown/DropdownEvent
struct  DropdownEvent_tEB2C75C3DBC789936B31D9A979FD62E047846CFB  : public UnityEvent_1_tB235B5DAD099AC425DC059D10DEB8B97A35E2BBF
{
public:

public:
};


// FmodResonanceAudioRoom/SurfaceMaterial
struct  SurfaceMaterial_tAB5E8F7BBA15BBCDCD98B91434DC4F3662095A3B 
{
public:
	// System.Int32 FmodResonanceAudioRoom/SurfaceMaterial::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(SurfaceMaterial_tAB5E8F7BBA15BBCDCD98B91434DC4F3662095A3B, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.UI.Navigation/Mode
struct  Mode_t3113FDF05158BBA1DFC78D7F69E4C1D25135CB0F 
{
public:
	// System.Int32 UnityEngine.UI.Navigation/Mode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Mode_t3113FDF05158BBA1DFC78D7F69E4C1D25135CB0F, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// IndoorAtlas.Region/Type
struct  Type_t53476A419EDC4387A885D5964BCE3E81BD83FE97 
{
public:
	// System.Int32 IndoorAtlas.Region/Type::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Type_t53476A419EDC4387A885D5964BCE3E81BD83FE97, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.UI.Selectable/Transition
struct  Transition_t1FC449676815A798E758D32E8BE6DC0A2511DF14 
{
public:
	// System.Int32 UnityEngine.UI.Selectable/Transition::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Transition_t1FC449676815A798E758D32E8BE6DC0A2511DF14, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// IndoorAtlas.Status/ServiceStatus
struct  ServiceStatus_t87EFE9135B93C29A7A8C398F2626C9EC4F491684 
{
public:
	// System.Int32 IndoorAtlas.Status/ServiceStatus::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ServiceStatus_t87EFE9135B93C29A7A8C398F2626C9EC4F491684, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Collections.Generic.Dictionary`2/Enumerator<UnityEngine.XR.ARSubsystems.TrackableId,UnityEngine.XR.ARFoundation.ARPlane>
struct  Enumerator_tFBF5BAB98D8E00238ECA19A725978F837AD15C0C 
{
public:
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::dictionary
	Dictionary_2_t712D6B074B6A493ABA07777BD08F1A62D9DE2534 * ___dictionary_0;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::version
	int32_t ___version_1;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::index
	int32_t ___index_2;
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::current
	KeyValuePair_2_t9CC8D1EE96D79DB3676F4199981C4AA3321FAF70  ___current_3;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::getEnumeratorRetType
	int32_t ___getEnumeratorRetType_4;

public:
	inline static int32_t get_offset_of_dictionary_0() { return static_cast<int32_t>(offsetof(Enumerator_tFBF5BAB98D8E00238ECA19A725978F837AD15C0C, ___dictionary_0)); }
	inline Dictionary_2_t712D6B074B6A493ABA07777BD08F1A62D9DE2534 * get_dictionary_0() const { return ___dictionary_0; }
	inline Dictionary_2_t712D6B074B6A493ABA07777BD08F1A62D9DE2534 ** get_address_of_dictionary_0() { return &___dictionary_0; }
	inline void set_dictionary_0(Dictionary_2_t712D6B074B6A493ABA07777BD08F1A62D9DE2534 * value)
	{
		___dictionary_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dictionary_0), (void*)value);
	}

	inline static int32_t get_offset_of_version_1() { return static_cast<int32_t>(offsetof(Enumerator_tFBF5BAB98D8E00238ECA19A725978F837AD15C0C, ___version_1)); }
	inline int32_t get_version_1() const { return ___version_1; }
	inline int32_t* get_address_of_version_1() { return &___version_1; }
	inline void set_version_1(int32_t value)
	{
		___version_1 = value;
	}

	inline static int32_t get_offset_of_index_2() { return static_cast<int32_t>(offsetof(Enumerator_tFBF5BAB98D8E00238ECA19A725978F837AD15C0C, ___index_2)); }
	inline int32_t get_index_2() const { return ___index_2; }
	inline int32_t* get_address_of_index_2() { return &___index_2; }
	inline void set_index_2(int32_t value)
	{
		___index_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_tFBF5BAB98D8E00238ECA19A725978F837AD15C0C, ___current_3)); }
	inline KeyValuePair_2_t9CC8D1EE96D79DB3676F4199981C4AA3321FAF70  get_current_3() const { return ___current_3; }
	inline KeyValuePair_2_t9CC8D1EE96D79DB3676F4199981C4AA3321FAF70 * get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(KeyValuePair_2_t9CC8D1EE96D79DB3676F4199981C4AA3321FAF70  value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___current_3))->___value_1), (void*)NULL);
	}

	inline static int32_t get_offset_of_getEnumeratorRetType_4() { return static_cast<int32_t>(offsetof(Enumerator_tFBF5BAB98D8E00238ECA19A725978F837AD15C0C, ___getEnumeratorRetType_4)); }
	inline int32_t get_getEnumeratorRetType_4() const { return ___getEnumeratorRetType_4; }
	inline int32_t* get_address_of_getEnumeratorRetType_4() { return &___getEnumeratorRetType_4; }
	inline void set_getEnumeratorRetType_4(int32_t value)
	{
		___getEnumeratorRetType_4 = value;
	}
};


// System.Collections.Generic.Dictionary`2/Enumerator<UnityEngine.XR.ARSubsystems.TrackableId,System.Object>
struct  Enumerator_tBDE39976A6EDE25239B2A4BB32B174C88FEE9921 
{
public:
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::dictionary
	Dictionary_2_t0A52DB56FD1E7867C489BCD59361434AD1DACF83 * ___dictionary_0;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::version
	int32_t ___version_1;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::index
	int32_t ___index_2;
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::current
	KeyValuePair_2_t98F89C24FA7D45751355C66B2E2DE9584D1F5C3D  ___current_3;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::getEnumeratorRetType
	int32_t ___getEnumeratorRetType_4;

public:
	inline static int32_t get_offset_of_dictionary_0() { return static_cast<int32_t>(offsetof(Enumerator_tBDE39976A6EDE25239B2A4BB32B174C88FEE9921, ___dictionary_0)); }
	inline Dictionary_2_t0A52DB56FD1E7867C489BCD59361434AD1DACF83 * get_dictionary_0() const { return ___dictionary_0; }
	inline Dictionary_2_t0A52DB56FD1E7867C489BCD59361434AD1DACF83 ** get_address_of_dictionary_0() { return &___dictionary_0; }
	inline void set_dictionary_0(Dictionary_2_t0A52DB56FD1E7867C489BCD59361434AD1DACF83 * value)
	{
		___dictionary_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dictionary_0), (void*)value);
	}

	inline static int32_t get_offset_of_version_1() { return static_cast<int32_t>(offsetof(Enumerator_tBDE39976A6EDE25239B2A4BB32B174C88FEE9921, ___version_1)); }
	inline int32_t get_version_1() const { return ___version_1; }
	inline int32_t* get_address_of_version_1() { return &___version_1; }
	inline void set_version_1(int32_t value)
	{
		___version_1 = value;
	}

	inline static int32_t get_offset_of_index_2() { return static_cast<int32_t>(offsetof(Enumerator_tBDE39976A6EDE25239B2A4BB32B174C88FEE9921, ___index_2)); }
	inline int32_t get_index_2() const { return ___index_2; }
	inline int32_t* get_address_of_index_2() { return &___index_2; }
	inline void set_index_2(int32_t value)
	{
		___index_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_tBDE39976A6EDE25239B2A4BB32B174C88FEE9921, ___current_3)); }
	inline KeyValuePair_2_t98F89C24FA7D45751355C66B2E2DE9584D1F5C3D  get_current_3() const { return ___current_3; }
	inline KeyValuePair_2_t98F89C24FA7D45751355C66B2E2DE9584D1F5C3D * get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(KeyValuePair_2_t98F89C24FA7D45751355C66B2E2DE9584D1F5C3D  value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___current_3))->___value_1), (void*)NULL);
	}

	inline static int32_t get_offset_of_getEnumeratorRetType_4() { return static_cast<int32_t>(offsetof(Enumerator_tBDE39976A6EDE25239B2A4BB32B174C88FEE9921, ___getEnumeratorRetType_4)); }
	inline int32_t get_getEnumeratorRetType_4() const { return ___getEnumeratorRetType_4; }
	inline int32_t* get_address_of_getEnumeratorRetType_4() { return &___getEnumeratorRetType_4; }
	inline void set_getEnumeratorRetType_4(int32_t value)
	{
		___getEnumeratorRetType_4 = value;
	}
};


// Unity.Collections.NativeArray`1<UnityEngine.Vector2>
struct  NativeArray_1_t431C85F30275831D1F5D458AB73DFCE050693BC0 
{
public:
	// System.Void* Unity.Collections.NativeArray`1::m_Buffer
	void* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeArray`1::m_Length
	int32_t ___m_Length_1;
	// Unity.Collections.Allocator Unity.Collections.NativeArray`1::m_AllocatorLabel
	int32_t ___m_AllocatorLabel_2;

public:
	inline static int32_t get_offset_of_m_Buffer_0() { return static_cast<int32_t>(offsetof(NativeArray_1_t431C85F30275831D1F5D458AB73DFCE050693BC0, ___m_Buffer_0)); }
	inline void* get_m_Buffer_0() const { return ___m_Buffer_0; }
	inline void** get_address_of_m_Buffer_0() { return &___m_Buffer_0; }
	inline void set_m_Buffer_0(void* value)
	{
		___m_Buffer_0 = value;
	}

	inline static int32_t get_offset_of_m_Length_1() { return static_cast<int32_t>(offsetof(NativeArray_1_t431C85F30275831D1F5D458AB73DFCE050693BC0, ___m_Length_1)); }
	inline int32_t get_m_Length_1() const { return ___m_Length_1; }
	inline int32_t* get_address_of_m_Length_1() { return &___m_Length_1; }
	inline void set_m_Length_1(int32_t value)
	{
		___m_Length_1 = value;
	}

	inline static int32_t get_offset_of_m_AllocatorLabel_2() { return static_cast<int32_t>(offsetof(NativeArray_1_t431C85F30275831D1F5D458AB73DFCE050693BC0, ___m_AllocatorLabel_2)); }
	inline int32_t get_m_AllocatorLabel_2() const { return ___m_AllocatorLabel_2; }
	inline int32_t* get_address_of_m_AllocatorLabel_2() { return &___m_AllocatorLabel_2; }
	inline void set_m_AllocatorLabel_2(int32_t value)
	{
		___m_AllocatorLabel_2 = value;
	}
};


// UnityEngine.XR.ARFoundation.ARLightEstimationData
struct  ARLightEstimationData_tC7EC4FC85F9EDACE1CED2BB3D2DC659DE43B8423 
{
public:
	// System.Nullable`1<System.Single> UnityEngine.XR.ARFoundation.ARLightEstimationData::<averageColorTemperature>k__BackingField
	Nullable_1_t0C4AC2E457C437FA106160547FD9BA5B50B1888A  ___U3CaverageColorTemperatureU3Ek__BackingField_0;
	// System.Nullable`1<UnityEngine.Color> UnityEngine.XR.ARFoundation.ARLightEstimationData::<colorCorrection>k__BackingField
	Nullable_1_tA06400BA484934D9CEBAF66D0E71C822EF09A498  ___U3CcolorCorrectionU3Ek__BackingField_1;
	// System.Nullable`1<System.Single> UnityEngine.XR.ARFoundation.ARLightEstimationData::<mainLightIntensityLumens>k__BackingField
	Nullable_1_t0C4AC2E457C437FA106160547FD9BA5B50B1888A  ___U3CmainLightIntensityLumensU3Ek__BackingField_2;
	// System.Nullable`1<UnityEngine.Color> UnityEngine.XR.ARFoundation.ARLightEstimationData::<mainLightColor>k__BackingField
	Nullable_1_tA06400BA484934D9CEBAF66D0E71C822EF09A498  ___U3CmainLightColorU3Ek__BackingField_3;
	// System.Nullable`1<UnityEngine.Vector3> UnityEngine.XR.ARFoundation.ARLightEstimationData::<mainLightDirection>k__BackingField
	Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258  ___U3CmainLightDirectionU3Ek__BackingField_4;
	// System.Nullable`1<UnityEngine.Rendering.SphericalHarmonicsL2> UnityEngine.XR.ARFoundation.ARLightEstimationData::<ambientSphericalHarmonics>k__BackingField
	Nullable_1_t87378933461FE259D349B667A2D4FE02B800A81E  ___U3CambientSphericalHarmonicsU3Ek__BackingField_5;
	// System.Nullable`1<System.Single> UnityEngine.XR.ARFoundation.ARLightEstimationData::m_AverageBrightness
	Nullable_1_t0C4AC2E457C437FA106160547FD9BA5B50B1888A  ___m_AverageBrightness_6;
	// System.Nullable`1<System.Single> UnityEngine.XR.ARFoundation.ARLightEstimationData::m_AverageIntensityInLumens
	Nullable_1_t0C4AC2E457C437FA106160547FD9BA5B50B1888A  ___m_AverageIntensityInLumens_7;
	// System.Nullable`1<System.Single> UnityEngine.XR.ARFoundation.ARLightEstimationData::m_MainLightBrightness
	Nullable_1_t0C4AC2E457C437FA106160547FD9BA5B50B1888A  ___m_MainLightBrightness_8;

public:
	inline static int32_t get_offset_of_U3CaverageColorTemperatureU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(ARLightEstimationData_tC7EC4FC85F9EDACE1CED2BB3D2DC659DE43B8423, ___U3CaverageColorTemperatureU3Ek__BackingField_0)); }
	inline Nullable_1_t0C4AC2E457C437FA106160547FD9BA5B50B1888A  get_U3CaverageColorTemperatureU3Ek__BackingField_0() const { return ___U3CaverageColorTemperatureU3Ek__BackingField_0; }
	inline Nullable_1_t0C4AC2E457C437FA106160547FD9BA5B50B1888A * get_address_of_U3CaverageColorTemperatureU3Ek__BackingField_0() { return &___U3CaverageColorTemperatureU3Ek__BackingField_0; }
	inline void set_U3CaverageColorTemperatureU3Ek__BackingField_0(Nullable_1_t0C4AC2E457C437FA106160547FD9BA5B50B1888A  value)
	{
		___U3CaverageColorTemperatureU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of_U3CcolorCorrectionU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(ARLightEstimationData_tC7EC4FC85F9EDACE1CED2BB3D2DC659DE43B8423, ___U3CcolorCorrectionU3Ek__BackingField_1)); }
	inline Nullable_1_tA06400BA484934D9CEBAF66D0E71C822EF09A498  get_U3CcolorCorrectionU3Ek__BackingField_1() const { return ___U3CcolorCorrectionU3Ek__BackingField_1; }
	inline Nullable_1_tA06400BA484934D9CEBAF66D0E71C822EF09A498 * get_address_of_U3CcolorCorrectionU3Ek__BackingField_1() { return &___U3CcolorCorrectionU3Ek__BackingField_1; }
	inline void set_U3CcolorCorrectionU3Ek__BackingField_1(Nullable_1_tA06400BA484934D9CEBAF66D0E71C822EF09A498  value)
	{
		___U3CcolorCorrectionU3Ek__BackingField_1 = value;
	}

	inline static int32_t get_offset_of_U3CmainLightIntensityLumensU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(ARLightEstimationData_tC7EC4FC85F9EDACE1CED2BB3D2DC659DE43B8423, ___U3CmainLightIntensityLumensU3Ek__BackingField_2)); }
	inline Nullable_1_t0C4AC2E457C437FA106160547FD9BA5B50B1888A  get_U3CmainLightIntensityLumensU3Ek__BackingField_2() const { return ___U3CmainLightIntensityLumensU3Ek__BackingField_2; }
	inline Nullable_1_t0C4AC2E457C437FA106160547FD9BA5B50B1888A * get_address_of_U3CmainLightIntensityLumensU3Ek__BackingField_2() { return &___U3CmainLightIntensityLumensU3Ek__BackingField_2; }
	inline void set_U3CmainLightIntensityLumensU3Ek__BackingField_2(Nullable_1_t0C4AC2E457C437FA106160547FD9BA5B50B1888A  value)
	{
		___U3CmainLightIntensityLumensU3Ek__BackingField_2 = value;
	}

	inline static int32_t get_offset_of_U3CmainLightColorU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(ARLightEstimationData_tC7EC4FC85F9EDACE1CED2BB3D2DC659DE43B8423, ___U3CmainLightColorU3Ek__BackingField_3)); }
	inline Nullable_1_tA06400BA484934D9CEBAF66D0E71C822EF09A498  get_U3CmainLightColorU3Ek__BackingField_3() const { return ___U3CmainLightColorU3Ek__BackingField_3; }
	inline Nullable_1_tA06400BA484934D9CEBAF66D0E71C822EF09A498 * get_address_of_U3CmainLightColorU3Ek__BackingField_3() { return &___U3CmainLightColorU3Ek__BackingField_3; }
	inline void set_U3CmainLightColorU3Ek__BackingField_3(Nullable_1_tA06400BA484934D9CEBAF66D0E71C822EF09A498  value)
	{
		___U3CmainLightColorU3Ek__BackingField_3 = value;
	}

	inline static int32_t get_offset_of_U3CmainLightDirectionU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(ARLightEstimationData_tC7EC4FC85F9EDACE1CED2BB3D2DC659DE43B8423, ___U3CmainLightDirectionU3Ek__BackingField_4)); }
	inline Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258  get_U3CmainLightDirectionU3Ek__BackingField_4() const { return ___U3CmainLightDirectionU3Ek__BackingField_4; }
	inline Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258 * get_address_of_U3CmainLightDirectionU3Ek__BackingField_4() { return &___U3CmainLightDirectionU3Ek__BackingField_4; }
	inline void set_U3CmainLightDirectionU3Ek__BackingField_4(Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258  value)
	{
		___U3CmainLightDirectionU3Ek__BackingField_4 = value;
	}

	inline static int32_t get_offset_of_U3CambientSphericalHarmonicsU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(ARLightEstimationData_tC7EC4FC85F9EDACE1CED2BB3D2DC659DE43B8423, ___U3CambientSphericalHarmonicsU3Ek__BackingField_5)); }
	inline Nullable_1_t87378933461FE259D349B667A2D4FE02B800A81E  get_U3CambientSphericalHarmonicsU3Ek__BackingField_5() const { return ___U3CambientSphericalHarmonicsU3Ek__BackingField_5; }
	inline Nullable_1_t87378933461FE259D349B667A2D4FE02B800A81E * get_address_of_U3CambientSphericalHarmonicsU3Ek__BackingField_5() { return &___U3CambientSphericalHarmonicsU3Ek__BackingField_5; }
	inline void set_U3CambientSphericalHarmonicsU3Ek__BackingField_5(Nullable_1_t87378933461FE259D349B667A2D4FE02B800A81E  value)
	{
		___U3CambientSphericalHarmonicsU3Ek__BackingField_5 = value;
	}

	inline static int32_t get_offset_of_m_AverageBrightness_6() { return static_cast<int32_t>(offsetof(ARLightEstimationData_tC7EC4FC85F9EDACE1CED2BB3D2DC659DE43B8423, ___m_AverageBrightness_6)); }
	inline Nullable_1_t0C4AC2E457C437FA106160547FD9BA5B50B1888A  get_m_AverageBrightness_6() const { return ___m_AverageBrightness_6; }
	inline Nullable_1_t0C4AC2E457C437FA106160547FD9BA5B50B1888A * get_address_of_m_AverageBrightness_6() { return &___m_AverageBrightness_6; }
	inline void set_m_AverageBrightness_6(Nullable_1_t0C4AC2E457C437FA106160547FD9BA5B50B1888A  value)
	{
		___m_AverageBrightness_6 = value;
	}

	inline static int32_t get_offset_of_m_AverageIntensityInLumens_7() { return static_cast<int32_t>(offsetof(ARLightEstimationData_tC7EC4FC85F9EDACE1CED2BB3D2DC659DE43B8423, ___m_AverageIntensityInLumens_7)); }
	inline Nullable_1_t0C4AC2E457C437FA106160547FD9BA5B50B1888A  get_m_AverageIntensityInLumens_7() const { return ___m_AverageIntensityInLumens_7; }
	inline Nullable_1_t0C4AC2E457C437FA106160547FD9BA5B50B1888A * get_address_of_m_AverageIntensityInLumens_7() { return &___m_AverageIntensityInLumens_7; }
	inline void set_m_AverageIntensityInLumens_7(Nullable_1_t0C4AC2E457C437FA106160547FD9BA5B50B1888A  value)
	{
		___m_AverageIntensityInLumens_7 = value;
	}

	inline static int32_t get_offset_of_m_MainLightBrightness_8() { return static_cast<int32_t>(offsetof(ARLightEstimationData_tC7EC4FC85F9EDACE1CED2BB3D2DC659DE43B8423, ___m_MainLightBrightness_8)); }
	inline Nullable_1_t0C4AC2E457C437FA106160547FD9BA5B50B1888A  get_m_MainLightBrightness_8() const { return ___m_MainLightBrightness_8; }
	inline Nullable_1_t0C4AC2E457C437FA106160547FD9BA5B50B1888A * get_address_of_m_MainLightBrightness_8() { return &___m_MainLightBrightness_8; }
	inline void set_m_MainLightBrightness_8(Nullable_1_t0C4AC2E457C437FA106160547FD9BA5B50B1888A  value)
	{
		___m_MainLightBrightness_8 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.XR.ARFoundation.ARLightEstimationData
struct ARLightEstimationData_tC7EC4FC85F9EDACE1CED2BB3D2DC659DE43B8423_marshaled_pinvoke
{
	Nullable_1_t0C4AC2E457C437FA106160547FD9BA5B50B1888A  ___U3CaverageColorTemperatureU3Ek__BackingField_0;
	Nullable_1_tA06400BA484934D9CEBAF66D0E71C822EF09A498  ___U3CcolorCorrectionU3Ek__BackingField_1;
	Nullable_1_t0C4AC2E457C437FA106160547FD9BA5B50B1888A  ___U3CmainLightIntensityLumensU3Ek__BackingField_2;
	Nullable_1_tA06400BA484934D9CEBAF66D0E71C822EF09A498  ___U3CmainLightColorU3Ek__BackingField_3;
	Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258  ___U3CmainLightDirectionU3Ek__BackingField_4;
	Nullable_1_t87378933461FE259D349B667A2D4FE02B800A81E  ___U3CambientSphericalHarmonicsU3Ek__BackingField_5;
	Nullable_1_t0C4AC2E457C437FA106160547FD9BA5B50B1888A  ___m_AverageBrightness_6;
	Nullable_1_t0C4AC2E457C437FA106160547FD9BA5B50B1888A  ___m_AverageIntensityInLumens_7;
	Nullable_1_t0C4AC2E457C437FA106160547FD9BA5B50B1888A  ___m_MainLightBrightness_8;
};
// Native definition for COM marshalling of UnityEngine.XR.ARFoundation.ARLightEstimationData
struct ARLightEstimationData_tC7EC4FC85F9EDACE1CED2BB3D2DC659DE43B8423_marshaled_com
{
	Nullable_1_t0C4AC2E457C437FA106160547FD9BA5B50B1888A  ___U3CaverageColorTemperatureU3Ek__BackingField_0;
	Nullable_1_tA06400BA484934D9CEBAF66D0E71C822EF09A498  ___U3CcolorCorrectionU3Ek__BackingField_1;
	Nullable_1_t0C4AC2E457C437FA106160547FD9BA5B50B1888A  ___U3CmainLightIntensityLumensU3Ek__BackingField_2;
	Nullable_1_tA06400BA484934D9CEBAF66D0E71C822EF09A498  ___U3CmainLightColorU3Ek__BackingField_3;
	Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258  ___U3CmainLightDirectionU3Ek__BackingField_4;
	Nullable_1_t87378933461FE259D349B667A2D4FE02B800A81E  ___U3CambientSphericalHarmonicsU3Ek__BackingField_5;
	Nullable_1_t0C4AC2E457C437FA106160547FD9BA5B50B1888A  ___m_AverageBrightness_6;
	Nullable_1_t0C4AC2E457C437FA106160547FD9BA5B50B1888A  ___m_AverageIntensityInLumens_7;
	Nullable_1_t0C4AC2E457C437FA106160547FD9BA5B50B1888A  ___m_MainLightBrightness_8;
};

// UnityEngine.XR.ARSubsystems.BoundedPlane
struct  BoundedPlane_t9001963C43ACDF4CDEA8BBF97CD783B7969B79C5 
{
public:
	// UnityEngine.XR.ARSubsystems.TrackableId UnityEngine.XR.ARSubsystems.BoundedPlane::m_TrackableId
	TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  ___m_TrackableId_1;
	// UnityEngine.XR.ARSubsystems.TrackableId UnityEngine.XR.ARSubsystems.BoundedPlane::m_SubsumedById
	TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  ___m_SubsumedById_2;
	// UnityEngine.Vector2 UnityEngine.XR.ARSubsystems.BoundedPlane::m_Center
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___m_Center_3;
	// UnityEngine.Pose UnityEngine.XR.ARSubsystems.BoundedPlane::m_Pose
	Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  ___m_Pose_4;
	// UnityEngine.Vector2 UnityEngine.XR.ARSubsystems.BoundedPlane::m_Size
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___m_Size_5;
	// UnityEngine.XR.ARSubsystems.PlaneAlignment UnityEngine.XR.ARSubsystems.BoundedPlane::m_Alignment
	int32_t ___m_Alignment_6;
	// UnityEngine.XR.ARSubsystems.TrackingState UnityEngine.XR.ARSubsystems.BoundedPlane::m_TrackingState
	int32_t ___m_TrackingState_7;
	// System.IntPtr UnityEngine.XR.ARSubsystems.BoundedPlane::m_NativePtr
	intptr_t ___m_NativePtr_8;
	// UnityEngine.XR.ARSubsystems.PlaneClassification UnityEngine.XR.ARSubsystems.BoundedPlane::m_Classification
	int32_t ___m_Classification_9;

public:
	inline static int32_t get_offset_of_m_TrackableId_1() { return static_cast<int32_t>(offsetof(BoundedPlane_t9001963C43ACDF4CDEA8BBF97CD783B7969B79C5, ___m_TrackableId_1)); }
	inline TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  get_m_TrackableId_1() const { return ___m_TrackableId_1; }
	inline TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B * get_address_of_m_TrackableId_1() { return &___m_TrackableId_1; }
	inline void set_m_TrackableId_1(TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  value)
	{
		___m_TrackableId_1 = value;
	}

	inline static int32_t get_offset_of_m_SubsumedById_2() { return static_cast<int32_t>(offsetof(BoundedPlane_t9001963C43ACDF4CDEA8BBF97CD783B7969B79C5, ___m_SubsumedById_2)); }
	inline TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  get_m_SubsumedById_2() const { return ___m_SubsumedById_2; }
	inline TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B * get_address_of_m_SubsumedById_2() { return &___m_SubsumedById_2; }
	inline void set_m_SubsumedById_2(TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  value)
	{
		___m_SubsumedById_2 = value;
	}

	inline static int32_t get_offset_of_m_Center_3() { return static_cast<int32_t>(offsetof(BoundedPlane_t9001963C43ACDF4CDEA8BBF97CD783B7969B79C5, ___m_Center_3)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_m_Center_3() const { return ___m_Center_3; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_m_Center_3() { return &___m_Center_3; }
	inline void set_m_Center_3(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___m_Center_3 = value;
	}

	inline static int32_t get_offset_of_m_Pose_4() { return static_cast<int32_t>(offsetof(BoundedPlane_t9001963C43ACDF4CDEA8BBF97CD783B7969B79C5, ___m_Pose_4)); }
	inline Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  get_m_Pose_4() const { return ___m_Pose_4; }
	inline Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A * get_address_of_m_Pose_4() { return &___m_Pose_4; }
	inline void set_m_Pose_4(Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  value)
	{
		___m_Pose_4 = value;
	}

	inline static int32_t get_offset_of_m_Size_5() { return static_cast<int32_t>(offsetof(BoundedPlane_t9001963C43ACDF4CDEA8BBF97CD783B7969B79C5, ___m_Size_5)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_m_Size_5() const { return ___m_Size_5; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_m_Size_5() { return &___m_Size_5; }
	inline void set_m_Size_5(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___m_Size_5 = value;
	}

	inline static int32_t get_offset_of_m_Alignment_6() { return static_cast<int32_t>(offsetof(BoundedPlane_t9001963C43ACDF4CDEA8BBF97CD783B7969B79C5, ___m_Alignment_6)); }
	inline int32_t get_m_Alignment_6() const { return ___m_Alignment_6; }
	inline int32_t* get_address_of_m_Alignment_6() { return &___m_Alignment_6; }
	inline void set_m_Alignment_6(int32_t value)
	{
		___m_Alignment_6 = value;
	}

	inline static int32_t get_offset_of_m_TrackingState_7() { return static_cast<int32_t>(offsetof(BoundedPlane_t9001963C43ACDF4CDEA8BBF97CD783B7969B79C5, ___m_TrackingState_7)); }
	inline int32_t get_m_TrackingState_7() const { return ___m_TrackingState_7; }
	inline int32_t* get_address_of_m_TrackingState_7() { return &___m_TrackingState_7; }
	inline void set_m_TrackingState_7(int32_t value)
	{
		___m_TrackingState_7 = value;
	}

	inline static int32_t get_offset_of_m_NativePtr_8() { return static_cast<int32_t>(offsetof(BoundedPlane_t9001963C43ACDF4CDEA8BBF97CD783B7969B79C5, ___m_NativePtr_8)); }
	inline intptr_t get_m_NativePtr_8() const { return ___m_NativePtr_8; }
	inline intptr_t* get_address_of_m_NativePtr_8() { return &___m_NativePtr_8; }
	inline void set_m_NativePtr_8(intptr_t value)
	{
		___m_NativePtr_8 = value;
	}

	inline static int32_t get_offset_of_m_Classification_9() { return static_cast<int32_t>(offsetof(BoundedPlane_t9001963C43ACDF4CDEA8BBF97CD783B7969B79C5, ___m_Classification_9)); }
	inline int32_t get_m_Classification_9() const { return ___m_Classification_9; }
	inline int32_t* get_address_of_m_Classification_9() { return &___m_Classification_9; }
	inline void set_m_Classification_9(int32_t value)
	{
		___m_Classification_9 = value;
	}
};

struct BoundedPlane_t9001963C43ACDF4CDEA8BBF97CD783B7969B79C5_StaticFields
{
public:
	// UnityEngine.XR.ARSubsystems.BoundedPlane UnityEngine.XR.ARSubsystems.BoundedPlane::s_Default
	BoundedPlane_t9001963C43ACDF4CDEA8BBF97CD783B7969B79C5  ___s_Default_0;

public:
	inline static int32_t get_offset_of_s_Default_0() { return static_cast<int32_t>(offsetof(BoundedPlane_t9001963C43ACDF4CDEA8BBF97CD783B7969B79C5_StaticFields, ___s_Default_0)); }
	inline BoundedPlane_t9001963C43ACDF4CDEA8BBF97CD783B7969B79C5  get_s_Default_0() const { return ___s_Default_0; }
	inline BoundedPlane_t9001963C43ACDF4CDEA8BBF97CD783B7969B79C5 * get_address_of_s_Default_0() { return &___s_Default_0; }
	inline void set_s_Default_0(BoundedPlane_t9001963C43ACDF4CDEA8BBF97CD783B7969B79C5  value)
	{
		___s_Default_0 = value;
	}
};


// UnityEngine.Component
struct  Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// FmodResonanceAudio
struct  FmodResonanceAudio_t1E98D428CDB6E2CB55939C63C147AA39834A72DB  : public RuntimeObject
{
public:

public:
};

struct FmodResonanceAudio_t1E98D428CDB6E2CB55939C63C147AA39834A72DB_StaticFields
{
public:
	// UnityEngine.Matrix4x4 FmodResonanceAudio::flipZ
	Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  ___flipZ_6;
	// System.String FmodResonanceAudio::listenerPluginName
	String_t* ___listenerPluginName_7;
	// System.Int32 FmodResonanceAudio::roomPropertiesSize
	int32_t ___roomPropertiesSize_8;
	// System.Int32 FmodResonanceAudio::roomPropertiesIndex
	int32_t ___roomPropertiesIndex_9;
	// UnityEngine.Bounds FmodResonanceAudio::bounds
	Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37  ___bounds_10;
	// System.Collections.Generic.List`1<FmodResonanceAudioRoom> FmodResonanceAudio::enabledRooms
	List_1_t7DC37F87EBBCA84046EA55A3F9E0440CB00F79D7 * ___enabledRooms_11;
	// FMOD.VECTOR FmodResonanceAudio::listenerPositionFmod
	VECTOR_tF39F3D310C168EBC05F4E9E1718300A72E6BDD2B  ___listenerPositionFmod_12;
	// FMOD.DSP FmodResonanceAudio::listenerPlugin
	DSP_t3554E4816E29B84C01A61DD26D8A8FC5831A2412  ___listenerPlugin_13;

public:
	inline static int32_t get_offset_of_flipZ_6() { return static_cast<int32_t>(offsetof(FmodResonanceAudio_t1E98D428CDB6E2CB55939C63C147AA39834A72DB_StaticFields, ___flipZ_6)); }
	inline Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  get_flipZ_6() const { return ___flipZ_6; }
	inline Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 * get_address_of_flipZ_6() { return &___flipZ_6; }
	inline void set_flipZ_6(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  value)
	{
		___flipZ_6 = value;
	}

	inline static int32_t get_offset_of_listenerPluginName_7() { return static_cast<int32_t>(offsetof(FmodResonanceAudio_t1E98D428CDB6E2CB55939C63C147AA39834A72DB_StaticFields, ___listenerPluginName_7)); }
	inline String_t* get_listenerPluginName_7() const { return ___listenerPluginName_7; }
	inline String_t** get_address_of_listenerPluginName_7() { return &___listenerPluginName_7; }
	inline void set_listenerPluginName_7(String_t* value)
	{
		___listenerPluginName_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___listenerPluginName_7), (void*)value);
	}

	inline static int32_t get_offset_of_roomPropertiesSize_8() { return static_cast<int32_t>(offsetof(FmodResonanceAudio_t1E98D428CDB6E2CB55939C63C147AA39834A72DB_StaticFields, ___roomPropertiesSize_8)); }
	inline int32_t get_roomPropertiesSize_8() const { return ___roomPropertiesSize_8; }
	inline int32_t* get_address_of_roomPropertiesSize_8() { return &___roomPropertiesSize_8; }
	inline void set_roomPropertiesSize_8(int32_t value)
	{
		___roomPropertiesSize_8 = value;
	}

	inline static int32_t get_offset_of_roomPropertiesIndex_9() { return static_cast<int32_t>(offsetof(FmodResonanceAudio_t1E98D428CDB6E2CB55939C63C147AA39834A72DB_StaticFields, ___roomPropertiesIndex_9)); }
	inline int32_t get_roomPropertiesIndex_9() const { return ___roomPropertiesIndex_9; }
	inline int32_t* get_address_of_roomPropertiesIndex_9() { return &___roomPropertiesIndex_9; }
	inline void set_roomPropertiesIndex_9(int32_t value)
	{
		___roomPropertiesIndex_9 = value;
	}

	inline static int32_t get_offset_of_bounds_10() { return static_cast<int32_t>(offsetof(FmodResonanceAudio_t1E98D428CDB6E2CB55939C63C147AA39834A72DB_StaticFields, ___bounds_10)); }
	inline Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37  get_bounds_10() const { return ___bounds_10; }
	inline Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37 * get_address_of_bounds_10() { return &___bounds_10; }
	inline void set_bounds_10(Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37  value)
	{
		___bounds_10 = value;
	}

	inline static int32_t get_offset_of_enabledRooms_11() { return static_cast<int32_t>(offsetof(FmodResonanceAudio_t1E98D428CDB6E2CB55939C63C147AA39834A72DB_StaticFields, ___enabledRooms_11)); }
	inline List_1_t7DC37F87EBBCA84046EA55A3F9E0440CB00F79D7 * get_enabledRooms_11() const { return ___enabledRooms_11; }
	inline List_1_t7DC37F87EBBCA84046EA55A3F9E0440CB00F79D7 ** get_address_of_enabledRooms_11() { return &___enabledRooms_11; }
	inline void set_enabledRooms_11(List_1_t7DC37F87EBBCA84046EA55A3F9E0440CB00F79D7 * value)
	{
		___enabledRooms_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___enabledRooms_11), (void*)value);
	}

	inline static int32_t get_offset_of_listenerPositionFmod_12() { return static_cast<int32_t>(offsetof(FmodResonanceAudio_t1E98D428CDB6E2CB55939C63C147AA39834A72DB_StaticFields, ___listenerPositionFmod_12)); }
	inline VECTOR_tF39F3D310C168EBC05F4E9E1718300A72E6BDD2B  get_listenerPositionFmod_12() const { return ___listenerPositionFmod_12; }
	inline VECTOR_tF39F3D310C168EBC05F4E9E1718300A72E6BDD2B * get_address_of_listenerPositionFmod_12() { return &___listenerPositionFmod_12; }
	inline void set_listenerPositionFmod_12(VECTOR_tF39F3D310C168EBC05F4E9E1718300A72E6BDD2B  value)
	{
		___listenerPositionFmod_12 = value;
	}

	inline static int32_t get_offset_of_listenerPlugin_13() { return static_cast<int32_t>(offsetof(FmodResonanceAudio_t1E98D428CDB6E2CB55939C63C147AA39834A72DB_StaticFields, ___listenerPlugin_13)); }
	inline DSP_t3554E4816E29B84C01A61DD26D8A8FC5831A2412  get_listenerPlugin_13() const { return ___listenerPlugin_13; }
	inline DSP_t3554E4816E29B84C01A61DD26D8A8FC5831A2412 * get_address_of_listenerPlugin_13() { return &___listenerPlugin_13; }
	inline void set_listenerPlugin_13(DSP_t3554E4816E29B84C01A61DD26D8A8FC5831A2412  value)
	{
		___listenerPlugin_13 = value;
	}
};


// UnityEngine.GameObject
struct  GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// System.MulticastDelegate
struct  MulticastDelegate_t  : public Delegate_t
{
public:
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* ___delegates_11;

public:
	inline static int32_t get_offset_of_delegates_11() { return static_cast<int32_t>(offsetof(MulticastDelegate_t, ___delegates_11)); }
	inline DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* get_delegates_11() const { return ___delegates_11; }
	inline DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8** get_address_of_delegates_11() { return &___delegates_11; }
	inline void set_delegates_11(DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* value)
	{
		___delegates_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___delegates_11), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates_11;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates_11;
};

// UnityEngine.UI.Navigation
struct  Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A 
{
public:
	// UnityEngine.UI.Navigation/Mode UnityEngine.UI.Navigation::m_Mode
	int32_t ___m_Mode_0;
	// System.Boolean UnityEngine.UI.Navigation::m_WrapAround
	bool ___m_WrapAround_1;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnUp
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnUp_2;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnDown
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnDown_3;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnLeft
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnLeft_4;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnRight
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnRight_5;

public:
	inline static int32_t get_offset_of_m_Mode_0() { return static_cast<int32_t>(offsetof(Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A, ___m_Mode_0)); }
	inline int32_t get_m_Mode_0() const { return ___m_Mode_0; }
	inline int32_t* get_address_of_m_Mode_0() { return &___m_Mode_0; }
	inline void set_m_Mode_0(int32_t value)
	{
		___m_Mode_0 = value;
	}

	inline static int32_t get_offset_of_m_WrapAround_1() { return static_cast<int32_t>(offsetof(Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A, ___m_WrapAround_1)); }
	inline bool get_m_WrapAround_1() const { return ___m_WrapAround_1; }
	inline bool* get_address_of_m_WrapAround_1() { return &___m_WrapAround_1; }
	inline void set_m_WrapAround_1(bool value)
	{
		___m_WrapAround_1 = value;
	}

	inline static int32_t get_offset_of_m_SelectOnUp_2() { return static_cast<int32_t>(offsetof(Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A, ___m_SelectOnUp_2)); }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * get_m_SelectOnUp_2() const { return ___m_SelectOnUp_2; }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD ** get_address_of_m_SelectOnUp_2() { return &___m_SelectOnUp_2; }
	inline void set_m_SelectOnUp_2(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * value)
	{
		___m_SelectOnUp_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SelectOnUp_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_SelectOnDown_3() { return static_cast<int32_t>(offsetof(Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A, ___m_SelectOnDown_3)); }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * get_m_SelectOnDown_3() const { return ___m_SelectOnDown_3; }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD ** get_address_of_m_SelectOnDown_3() { return &___m_SelectOnDown_3; }
	inline void set_m_SelectOnDown_3(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * value)
	{
		___m_SelectOnDown_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SelectOnDown_3), (void*)value);
	}

	inline static int32_t get_offset_of_m_SelectOnLeft_4() { return static_cast<int32_t>(offsetof(Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A, ___m_SelectOnLeft_4)); }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * get_m_SelectOnLeft_4() const { return ___m_SelectOnLeft_4; }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD ** get_address_of_m_SelectOnLeft_4() { return &___m_SelectOnLeft_4; }
	inline void set_m_SelectOnLeft_4(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * value)
	{
		___m_SelectOnLeft_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SelectOnLeft_4), (void*)value);
	}

	inline static int32_t get_offset_of_m_SelectOnRight_5() { return static_cast<int32_t>(offsetof(Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A, ___m_SelectOnRight_5)); }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * get_m_SelectOnRight_5() const { return ___m_SelectOnRight_5; }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD ** get_address_of_m_SelectOnRight_5() { return &___m_SelectOnRight_5; }
	inline void set_m_SelectOnRight_5(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * value)
	{
		___m_SelectOnRight_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SelectOnRight_5), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.UI.Navigation
struct Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A_marshaled_pinvoke
{
	int32_t ___m_Mode_0;
	int32_t ___m_WrapAround_1;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnUp_2;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnDown_3;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnLeft_4;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnRight_5;
};
// Native definition for COM marshalling of UnityEngine.UI.Navigation
struct Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A_marshaled_com
{
	int32_t ___m_Mode_0;
	int32_t ___m_WrapAround_1;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnUp_2;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnDown_3;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnLeft_4;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnRight_5;
};

// IndoorAtlas.Region
struct  Region_t68EA17CE90BDC22C15E4531418B3B123519AADEB  : public RuntimeObject
{
public:
	// System.String IndoorAtlas.Region::id
	String_t* ___id_0;
	// System.String IndoorAtlas.Region::name
	String_t* ___name_1;
	// System.Int64 IndoorAtlas.Region::timestamp
	int64_t ___timestamp_2;
	// IndoorAtlas.Region/Type IndoorAtlas.Region::type
	int32_t ___type_3;
	// IndoorAtlas.Venue IndoorAtlas.Region::venue
	Venue_t9B5BBEE12D028C4C1C86A978B6601550D25336B6 * ___venue_4;
	// IndoorAtlas.Floorplan IndoorAtlas.Region::floorplan
	Floorplan_t21C6DA32409E96BEF667B09E492E2CA79EA39A16 * ___floorplan_5;
	// IndoorAtlas.Geofence IndoorAtlas.Region::geofence
	Geofence_t33AAF74181EDD529375E887DD0C9A1F9E79AE0DE * ___geofence_6;

public:
	inline static int32_t get_offset_of_id_0() { return static_cast<int32_t>(offsetof(Region_t68EA17CE90BDC22C15E4531418B3B123519AADEB, ___id_0)); }
	inline String_t* get_id_0() const { return ___id_0; }
	inline String_t** get_address_of_id_0() { return &___id_0; }
	inline void set_id_0(String_t* value)
	{
		___id_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___id_0), (void*)value);
	}

	inline static int32_t get_offset_of_name_1() { return static_cast<int32_t>(offsetof(Region_t68EA17CE90BDC22C15E4531418B3B123519AADEB, ___name_1)); }
	inline String_t* get_name_1() const { return ___name_1; }
	inline String_t** get_address_of_name_1() { return &___name_1; }
	inline void set_name_1(String_t* value)
	{
		___name_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___name_1), (void*)value);
	}

	inline static int32_t get_offset_of_timestamp_2() { return static_cast<int32_t>(offsetof(Region_t68EA17CE90BDC22C15E4531418B3B123519AADEB, ___timestamp_2)); }
	inline int64_t get_timestamp_2() const { return ___timestamp_2; }
	inline int64_t* get_address_of_timestamp_2() { return &___timestamp_2; }
	inline void set_timestamp_2(int64_t value)
	{
		___timestamp_2 = value;
	}

	inline static int32_t get_offset_of_type_3() { return static_cast<int32_t>(offsetof(Region_t68EA17CE90BDC22C15E4531418B3B123519AADEB, ___type_3)); }
	inline int32_t get_type_3() const { return ___type_3; }
	inline int32_t* get_address_of_type_3() { return &___type_3; }
	inline void set_type_3(int32_t value)
	{
		___type_3 = value;
	}

	inline static int32_t get_offset_of_venue_4() { return static_cast<int32_t>(offsetof(Region_t68EA17CE90BDC22C15E4531418B3B123519AADEB, ___venue_4)); }
	inline Venue_t9B5BBEE12D028C4C1C86A978B6601550D25336B6 * get_venue_4() const { return ___venue_4; }
	inline Venue_t9B5BBEE12D028C4C1C86A978B6601550D25336B6 ** get_address_of_venue_4() { return &___venue_4; }
	inline void set_venue_4(Venue_t9B5BBEE12D028C4C1C86A978B6601550D25336B6 * value)
	{
		___venue_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___venue_4), (void*)value);
	}

	inline static int32_t get_offset_of_floorplan_5() { return static_cast<int32_t>(offsetof(Region_t68EA17CE90BDC22C15E4531418B3B123519AADEB, ___floorplan_5)); }
	inline Floorplan_t21C6DA32409E96BEF667B09E492E2CA79EA39A16 * get_floorplan_5() const { return ___floorplan_5; }
	inline Floorplan_t21C6DA32409E96BEF667B09E492E2CA79EA39A16 ** get_address_of_floorplan_5() { return &___floorplan_5; }
	inline void set_floorplan_5(Floorplan_t21C6DA32409E96BEF667B09E492E2CA79EA39A16 * value)
	{
		___floorplan_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___floorplan_5), (void*)value);
	}

	inline static int32_t get_offset_of_geofence_6() { return static_cast<int32_t>(offsetof(Region_t68EA17CE90BDC22C15E4531418B3B123519AADEB, ___geofence_6)); }
	inline Geofence_t33AAF74181EDD529375E887DD0C9A1F9E79AE0DE * get_geofence_6() const { return ___geofence_6; }
	inline Geofence_t33AAF74181EDD529375E887DD0C9A1F9E79AE0DE ** get_address_of_geofence_6() { return &___geofence_6; }
	inline void set_geofence_6(Geofence_t33AAF74181EDD529375E887DD0C9A1F9E79AE0DE * value)
	{
		___geofence_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___geofence_6), (void*)value);
	}
};


// IndoorAtlas.Status
struct  Status_t18AA7FCE4BA6D9E03B84C464B649B6E514066005  : public RuntimeObject
{
public:
	// IndoorAtlas.Status/ServiceStatus IndoorAtlas.Status::status
	int32_t ___status_0;

public:
	inline static int32_t get_offset_of_status_0() { return static_cast<int32_t>(offsetof(Status_t18AA7FCE4BA6D9E03B84C464B649B6E514066005, ___status_0)); }
	inline int32_t get_status_0() const { return ___status_0; }
	inline int32_t* get_address_of_status_0() { return &___status_0; }
	inline void set_status_0(int32_t value)
	{
		___status_0 = value;
	}
};


// System.SystemException
struct  SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62  : public Exception_t
{
public:

public:
};


// System.Type
struct  Type_t  : public MemberInfo_t
{
public:
	// System.RuntimeTypeHandle System.Type::_impl
	RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  ____impl_9;

public:
	inline static int32_t get_offset_of__impl_9() { return static_cast<int32_t>(offsetof(Type_t, ____impl_9)); }
	inline RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  get__impl_9() const { return ____impl_9; }
	inline RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 * get_address_of__impl_9() { return &____impl_9; }
	inline void set__impl_9(RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  value)
	{
		____impl_9 = value;
	}
};

struct Type_t_StaticFields
{
public:
	// System.Reflection.MemberFilter System.Type::FilterAttribute
	MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * ___FilterAttribute_0;
	// System.Reflection.MemberFilter System.Type::FilterName
	MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * ___FilterName_1;
	// System.Reflection.MemberFilter System.Type::FilterNameIgnoreCase
	MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * ___FilterNameIgnoreCase_2;
	// System.Object System.Type::Missing
	RuntimeObject * ___Missing_3;
	// System.Char System.Type::Delimiter
	Il2CppChar ___Delimiter_4;
	// System.Type[] System.Type::EmptyTypes
	TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* ___EmptyTypes_5;
	// System.Reflection.Binder System.Type::defaultBinder
	Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30 * ___defaultBinder_6;

public:
	inline static int32_t get_offset_of_FilterAttribute_0() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterAttribute_0)); }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * get_FilterAttribute_0() const { return ___FilterAttribute_0; }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 ** get_address_of_FilterAttribute_0() { return &___FilterAttribute_0; }
	inline void set_FilterAttribute_0(MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * value)
	{
		___FilterAttribute_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FilterAttribute_0), (void*)value);
	}

	inline static int32_t get_offset_of_FilterName_1() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterName_1)); }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * get_FilterName_1() const { return ___FilterName_1; }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 ** get_address_of_FilterName_1() { return &___FilterName_1; }
	inline void set_FilterName_1(MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * value)
	{
		___FilterName_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FilterName_1), (void*)value);
	}

	inline static int32_t get_offset_of_FilterNameIgnoreCase_2() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterNameIgnoreCase_2)); }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * get_FilterNameIgnoreCase_2() const { return ___FilterNameIgnoreCase_2; }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 ** get_address_of_FilterNameIgnoreCase_2() { return &___FilterNameIgnoreCase_2; }
	inline void set_FilterNameIgnoreCase_2(MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * value)
	{
		___FilterNameIgnoreCase_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FilterNameIgnoreCase_2), (void*)value);
	}

	inline static int32_t get_offset_of_Missing_3() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___Missing_3)); }
	inline RuntimeObject * get_Missing_3() const { return ___Missing_3; }
	inline RuntimeObject ** get_address_of_Missing_3() { return &___Missing_3; }
	inline void set_Missing_3(RuntimeObject * value)
	{
		___Missing_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Missing_3), (void*)value);
	}

	inline static int32_t get_offset_of_Delimiter_4() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___Delimiter_4)); }
	inline Il2CppChar get_Delimiter_4() const { return ___Delimiter_4; }
	inline Il2CppChar* get_address_of_Delimiter_4() { return &___Delimiter_4; }
	inline void set_Delimiter_4(Il2CppChar value)
	{
		___Delimiter_4 = value;
	}

	inline static int32_t get_offset_of_EmptyTypes_5() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___EmptyTypes_5)); }
	inline TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* get_EmptyTypes_5() const { return ___EmptyTypes_5; }
	inline TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755** get_address_of_EmptyTypes_5() { return &___EmptyTypes_5; }
	inline void set_EmptyTypes_5(TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* value)
	{
		___EmptyTypes_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___EmptyTypes_5), (void*)value);
	}

	inline static int32_t get_offset_of_defaultBinder_6() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___defaultBinder_6)); }
	inline Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30 * get_defaultBinder_6() const { return ___defaultBinder_6; }
	inline Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30 ** get_address_of_defaultBinder_6() { return &___defaultBinder_6; }
	inline void set_defaultBinder_6(Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30 * value)
	{
		___defaultBinder_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___defaultBinder_6), (void*)value);
	}
};


// UnityEngine.XR.ARSubsystems.XRTextureDescriptor
struct  XRTextureDescriptor_t9CA857DCCC1208B74376787BE4F3008A01B29A57 
{
public:
	// System.IntPtr UnityEngine.XR.ARSubsystems.XRTextureDescriptor::m_NativeTexture
	intptr_t ___m_NativeTexture_0;
	// System.Int32 UnityEngine.XR.ARSubsystems.XRTextureDescriptor::m_Width
	int32_t ___m_Width_1;
	// System.Int32 UnityEngine.XR.ARSubsystems.XRTextureDescriptor::m_Height
	int32_t ___m_Height_2;
	// System.Int32 UnityEngine.XR.ARSubsystems.XRTextureDescriptor::m_MipmapCount
	int32_t ___m_MipmapCount_3;
	// UnityEngine.TextureFormat UnityEngine.XR.ARSubsystems.XRTextureDescriptor::m_Format
	int32_t ___m_Format_4;
	// System.Int32 UnityEngine.XR.ARSubsystems.XRTextureDescriptor::m_PropertyNameId
	int32_t ___m_PropertyNameId_5;
	// System.Int32 UnityEngine.XR.ARSubsystems.XRTextureDescriptor::m_Depth
	int32_t ___m_Depth_6;
	// UnityEngine.Rendering.TextureDimension UnityEngine.XR.ARSubsystems.XRTextureDescriptor::m_Dimension
	int32_t ___m_Dimension_7;

public:
	inline static int32_t get_offset_of_m_NativeTexture_0() { return static_cast<int32_t>(offsetof(XRTextureDescriptor_t9CA857DCCC1208B74376787BE4F3008A01B29A57, ___m_NativeTexture_0)); }
	inline intptr_t get_m_NativeTexture_0() const { return ___m_NativeTexture_0; }
	inline intptr_t* get_address_of_m_NativeTexture_0() { return &___m_NativeTexture_0; }
	inline void set_m_NativeTexture_0(intptr_t value)
	{
		___m_NativeTexture_0 = value;
	}

	inline static int32_t get_offset_of_m_Width_1() { return static_cast<int32_t>(offsetof(XRTextureDescriptor_t9CA857DCCC1208B74376787BE4F3008A01B29A57, ___m_Width_1)); }
	inline int32_t get_m_Width_1() const { return ___m_Width_1; }
	inline int32_t* get_address_of_m_Width_1() { return &___m_Width_1; }
	inline void set_m_Width_1(int32_t value)
	{
		___m_Width_1 = value;
	}

	inline static int32_t get_offset_of_m_Height_2() { return static_cast<int32_t>(offsetof(XRTextureDescriptor_t9CA857DCCC1208B74376787BE4F3008A01B29A57, ___m_Height_2)); }
	inline int32_t get_m_Height_2() const { return ___m_Height_2; }
	inline int32_t* get_address_of_m_Height_2() { return &___m_Height_2; }
	inline void set_m_Height_2(int32_t value)
	{
		___m_Height_2 = value;
	}

	inline static int32_t get_offset_of_m_MipmapCount_3() { return static_cast<int32_t>(offsetof(XRTextureDescriptor_t9CA857DCCC1208B74376787BE4F3008A01B29A57, ___m_MipmapCount_3)); }
	inline int32_t get_m_MipmapCount_3() const { return ___m_MipmapCount_3; }
	inline int32_t* get_address_of_m_MipmapCount_3() { return &___m_MipmapCount_3; }
	inline void set_m_MipmapCount_3(int32_t value)
	{
		___m_MipmapCount_3 = value;
	}

	inline static int32_t get_offset_of_m_Format_4() { return static_cast<int32_t>(offsetof(XRTextureDescriptor_t9CA857DCCC1208B74376787BE4F3008A01B29A57, ___m_Format_4)); }
	inline int32_t get_m_Format_4() const { return ___m_Format_4; }
	inline int32_t* get_address_of_m_Format_4() { return &___m_Format_4; }
	inline void set_m_Format_4(int32_t value)
	{
		___m_Format_4 = value;
	}

	inline static int32_t get_offset_of_m_PropertyNameId_5() { return static_cast<int32_t>(offsetof(XRTextureDescriptor_t9CA857DCCC1208B74376787BE4F3008A01B29A57, ___m_PropertyNameId_5)); }
	inline int32_t get_m_PropertyNameId_5() const { return ___m_PropertyNameId_5; }
	inline int32_t* get_address_of_m_PropertyNameId_5() { return &___m_PropertyNameId_5; }
	inline void set_m_PropertyNameId_5(int32_t value)
	{
		___m_PropertyNameId_5 = value;
	}

	inline static int32_t get_offset_of_m_Depth_6() { return static_cast<int32_t>(offsetof(XRTextureDescriptor_t9CA857DCCC1208B74376787BE4F3008A01B29A57, ___m_Depth_6)); }
	inline int32_t get_m_Depth_6() const { return ___m_Depth_6; }
	inline int32_t* get_address_of_m_Depth_6() { return &___m_Depth_6; }
	inline void set_m_Depth_6(int32_t value)
	{
		___m_Depth_6 = value;
	}

	inline static int32_t get_offset_of_m_Dimension_7() { return static_cast<int32_t>(offsetof(XRTextureDescriptor_t9CA857DCCC1208B74376787BE4F3008A01B29A57, ___m_Dimension_7)); }
	inline int32_t get_m_Dimension_7() const { return ___m_Dimension_7; }
	inline int32_t* get_address_of_m_Dimension_7() { return &___m_Dimension_7; }
	inline void set_m_Dimension_7(int32_t value)
	{
		___m_Dimension_7 = value;
	}
};


// FmodResonanceAudio/RoomProperties
struct  RoomProperties_tE26D849980D0755AE6E6CED6F90D5040FF8189CE 
{
public:
	// System.Single FmodResonanceAudio/RoomProperties::positionX
	float ___positionX_0;
	// System.Single FmodResonanceAudio/RoomProperties::positionY
	float ___positionY_1;
	// System.Single FmodResonanceAudio/RoomProperties::positionZ
	float ___positionZ_2;
	// System.Single FmodResonanceAudio/RoomProperties::rotationX
	float ___rotationX_3;
	// System.Single FmodResonanceAudio/RoomProperties::rotationY
	float ___rotationY_4;
	// System.Single FmodResonanceAudio/RoomProperties::rotationZ
	float ___rotationZ_5;
	// System.Single FmodResonanceAudio/RoomProperties::rotationW
	float ___rotationW_6;
	// System.Single FmodResonanceAudio/RoomProperties::dimensionsX
	float ___dimensionsX_7;
	// System.Single FmodResonanceAudio/RoomProperties::dimensionsY
	float ___dimensionsY_8;
	// System.Single FmodResonanceAudio/RoomProperties::dimensionsZ
	float ___dimensionsZ_9;
	// FmodResonanceAudioRoom/SurfaceMaterial FmodResonanceAudio/RoomProperties::materialLeft
	int32_t ___materialLeft_10;
	// FmodResonanceAudioRoom/SurfaceMaterial FmodResonanceAudio/RoomProperties::materialRight
	int32_t ___materialRight_11;
	// FmodResonanceAudioRoom/SurfaceMaterial FmodResonanceAudio/RoomProperties::materialBottom
	int32_t ___materialBottom_12;
	// FmodResonanceAudioRoom/SurfaceMaterial FmodResonanceAudio/RoomProperties::materialTop
	int32_t ___materialTop_13;
	// FmodResonanceAudioRoom/SurfaceMaterial FmodResonanceAudio/RoomProperties::materialFront
	int32_t ___materialFront_14;
	// FmodResonanceAudioRoom/SurfaceMaterial FmodResonanceAudio/RoomProperties::materialBack
	int32_t ___materialBack_15;
	// System.Single FmodResonanceAudio/RoomProperties::reflectionScalar
	float ___reflectionScalar_16;
	// System.Single FmodResonanceAudio/RoomProperties::reverbGain
	float ___reverbGain_17;
	// System.Single FmodResonanceAudio/RoomProperties::reverbTime
	float ___reverbTime_18;
	// System.Single FmodResonanceAudio/RoomProperties::reverbBrightness
	float ___reverbBrightness_19;

public:
	inline static int32_t get_offset_of_positionX_0() { return static_cast<int32_t>(offsetof(RoomProperties_tE26D849980D0755AE6E6CED6F90D5040FF8189CE, ___positionX_0)); }
	inline float get_positionX_0() const { return ___positionX_0; }
	inline float* get_address_of_positionX_0() { return &___positionX_0; }
	inline void set_positionX_0(float value)
	{
		___positionX_0 = value;
	}

	inline static int32_t get_offset_of_positionY_1() { return static_cast<int32_t>(offsetof(RoomProperties_tE26D849980D0755AE6E6CED6F90D5040FF8189CE, ___positionY_1)); }
	inline float get_positionY_1() const { return ___positionY_1; }
	inline float* get_address_of_positionY_1() { return &___positionY_1; }
	inline void set_positionY_1(float value)
	{
		___positionY_1 = value;
	}

	inline static int32_t get_offset_of_positionZ_2() { return static_cast<int32_t>(offsetof(RoomProperties_tE26D849980D0755AE6E6CED6F90D5040FF8189CE, ___positionZ_2)); }
	inline float get_positionZ_2() const { return ___positionZ_2; }
	inline float* get_address_of_positionZ_2() { return &___positionZ_2; }
	inline void set_positionZ_2(float value)
	{
		___positionZ_2 = value;
	}

	inline static int32_t get_offset_of_rotationX_3() { return static_cast<int32_t>(offsetof(RoomProperties_tE26D849980D0755AE6E6CED6F90D5040FF8189CE, ___rotationX_3)); }
	inline float get_rotationX_3() const { return ___rotationX_3; }
	inline float* get_address_of_rotationX_3() { return &___rotationX_3; }
	inline void set_rotationX_3(float value)
	{
		___rotationX_3 = value;
	}

	inline static int32_t get_offset_of_rotationY_4() { return static_cast<int32_t>(offsetof(RoomProperties_tE26D849980D0755AE6E6CED6F90D5040FF8189CE, ___rotationY_4)); }
	inline float get_rotationY_4() const { return ___rotationY_4; }
	inline float* get_address_of_rotationY_4() { return &___rotationY_4; }
	inline void set_rotationY_4(float value)
	{
		___rotationY_4 = value;
	}

	inline static int32_t get_offset_of_rotationZ_5() { return static_cast<int32_t>(offsetof(RoomProperties_tE26D849980D0755AE6E6CED6F90D5040FF8189CE, ___rotationZ_5)); }
	inline float get_rotationZ_5() const { return ___rotationZ_5; }
	inline float* get_address_of_rotationZ_5() { return &___rotationZ_5; }
	inline void set_rotationZ_5(float value)
	{
		___rotationZ_5 = value;
	}

	inline static int32_t get_offset_of_rotationW_6() { return static_cast<int32_t>(offsetof(RoomProperties_tE26D849980D0755AE6E6CED6F90D5040FF8189CE, ___rotationW_6)); }
	inline float get_rotationW_6() const { return ___rotationW_6; }
	inline float* get_address_of_rotationW_6() { return &___rotationW_6; }
	inline void set_rotationW_6(float value)
	{
		___rotationW_6 = value;
	}

	inline static int32_t get_offset_of_dimensionsX_7() { return static_cast<int32_t>(offsetof(RoomProperties_tE26D849980D0755AE6E6CED6F90D5040FF8189CE, ___dimensionsX_7)); }
	inline float get_dimensionsX_7() const { return ___dimensionsX_7; }
	inline float* get_address_of_dimensionsX_7() { return &___dimensionsX_7; }
	inline void set_dimensionsX_7(float value)
	{
		___dimensionsX_7 = value;
	}

	inline static int32_t get_offset_of_dimensionsY_8() { return static_cast<int32_t>(offsetof(RoomProperties_tE26D849980D0755AE6E6CED6F90D5040FF8189CE, ___dimensionsY_8)); }
	inline float get_dimensionsY_8() const { return ___dimensionsY_8; }
	inline float* get_address_of_dimensionsY_8() { return &___dimensionsY_8; }
	inline void set_dimensionsY_8(float value)
	{
		___dimensionsY_8 = value;
	}

	inline static int32_t get_offset_of_dimensionsZ_9() { return static_cast<int32_t>(offsetof(RoomProperties_tE26D849980D0755AE6E6CED6F90D5040FF8189CE, ___dimensionsZ_9)); }
	inline float get_dimensionsZ_9() const { return ___dimensionsZ_9; }
	inline float* get_address_of_dimensionsZ_9() { return &___dimensionsZ_9; }
	inline void set_dimensionsZ_9(float value)
	{
		___dimensionsZ_9 = value;
	}

	inline static int32_t get_offset_of_materialLeft_10() { return static_cast<int32_t>(offsetof(RoomProperties_tE26D849980D0755AE6E6CED6F90D5040FF8189CE, ___materialLeft_10)); }
	inline int32_t get_materialLeft_10() const { return ___materialLeft_10; }
	inline int32_t* get_address_of_materialLeft_10() { return &___materialLeft_10; }
	inline void set_materialLeft_10(int32_t value)
	{
		___materialLeft_10 = value;
	}

	inline static int32_t get_offset_of_materialRight_11() { return static_cast<int32_t>(offsetof(RoomProperties_tE26D849980D0755AE6E6CED6F90D5040FF8189CE, ___materialRight_11)); }
	inline int32_t get_materialRight_11() const { return ___materialRight_11; }
	inline int32_t* get_address_of_materialRight_11() { return &___materialRight_11; }
	inline void set_materialRight_11(int32_t value)
	{
		___materialRight_11 = value;
	}

	inline static int32_t get_offset_of_materialBottom_12() { return static_cast<int32_t>(offsetof(RoomProperties_tE26D849980D0755AE6E6CED6F90D5040FF8189CE, ___materialBottom_12)); }
	inline int32_t get_materialBottom_12() const { return ___materialBottom_12; }
	inline int32_t* get_address_of_materialBottom_12() { return &___materialBottom_12; }
	inline void set_materialBottom_12(int32_t value)
	{
		___materialBottom_12 = value;
	}

	inline static int32_t get_offset_of_materialTop_13() { return static_cast<int32_t>(offsetof(RoomProperties_tE26D849980D0755AE6E6CED6F90D5040FF8189CE, ___materialTop_13)); }
	inline int32_t get_materialTop_13() const { return ___materialTop_13; }
	inline int32_t* get_address_of_materialTop_13() { return &___materialTop_13; }
	inline void set_materialTop_13(int32_t value)
	{
		___materialTop_13 = value;
	}

	inline static int32_t get_offset_of_materialFront_14() { return static_cast<int32_t>(offsetof(RoomProperties_tE26D849980D0755AE6E6CED6F90D5040FF8189CE, ___materialFront_14)); }
	inline int32_t get_materialFront_14() const { return ___materialFront_14; }
	inline int32_t* get_address_of_materialFront_14() { return &___materialFront_14; }
	inline void set_materialFront_14(int32_t value)
	{
		___materialFront_14 = value;
	}

	inline static int32_t get_offset_of_materialBack_15() { return static_cast<int32_t>(offsetof(RoomProperties_tE26D849980D0755AE6E6CED6F90D5040FF8189CE, ___materialBack_15)); }
	inline int32_t get_materialBack_15() const { return ___materialBack_15; }
	inline int32_t* get_address_of_materialBack_15() { return &___materialBack_15; }
	inline void set_materialBack_15(int32_t value)
	{
		___materialBack_15 = value;
	}

	inline static int32_t get_offset_of_reflectionScalar_16() { return static_cast<int32_t>(offsetof(RoomProperties_tE26D849980D0755AE6E6CED6F90D5040FF8189CE, ___reflectionScalar_16)); }
	inline float get_reflectionScalar_16() const { return ___reflectionScalar_16; }
	inline float* get_address_of_reflectionScalar_16() { return &___reflectionScalar_16; }
	inline void set_reflectionScalar_16(float value)
	{
		___reflectionScalar_16 = value;
	}

	inline static int32_t get_offset_of_reverbGain_17() { return static_cast<int32_t>(offsetof(RoomProperties_tE26D849980D0755AE6E6CED6F90D5040FF8189CE, ___reverbGain_17)); }
	inline float get_reverbGain_17() const { return ___reverbGain_17; }
	inline float* get_address_of_reverbGain_17() { return &___reverbGain_17; }
	inline void set_reverbGain_17(float value)
	{
		___reverbGain_17 = value;
	}

	inline static int32_t get_offset_of_reverbTime_18() { return static_cast<int32_t>(offsetof(RoomProperties_tE26D849980D0755AE6E6CED6F90D5040FF8189CE, ___reverbTime_18)); }
	inline float get_reverbTime_18() const { return ___reverbTime_18; }
	inline float* get_address_of_reverbTime_18() { return &___reverbTime_18; }
	inline void set_reverbTime_18(float value)
	{
		___reverbTime_18 = value;
	}

	inline static int32_t get_offset_of_reverbBrightness_19() { return static_cast<int32_t>(offsetof(RoomProperties_tE26D849980D0755AE6E6CED6F90D5040FF8189CE, ___reverbBrightness_19)); }
	inline float get_reverbBrightness_19() const { return ___reverbBrightness_19; }
	inline float* get_address_of_reverbBrightness_19() { return &___reverbBrightness_19; }
	inline void set_reverbBrightness_19(float value)
	{
		___reverbBrightness_19 = value;
	}
};


// UnityEngine.XR.ARFoundation.TrackableCollection`1/Enumerator<UnityEngine.XR.ARFoundation.ARPlane>
struct  Enumerator_t7966991B2B4ED87E60D0CB1DA4C8228004A3D386 
{
public:
	// System.Collections.Generic.Dictionary`2/Enumerator<UnityEngine.XR.ARSubsystems.TrackableId,TTrackable> UnityEngine.XR.ARFoundation.TrackableCollection`1/Enumerator::m_Enumerator
	Enumerator_tFBF5BAB98D8E00238ECA19A725978F837AD15C0C  ___m_Enumerator_0;

public:
	inline static int32_t get_offset_of_m_Enumerator_0() { return static_cast<int32_t>(offsetof(Enumerator_t7966991B2B4ED87E60D0CB1DA4C8228004A3D386, ___m_Enumerator_0)); }
	inline Enumerator_tFBF5BAB98D8E00238ECA19A725978F837AD15C0C  get_m_Enumerator_0() const { return ___m_Enumerator_0; }
	inline Enumerator_tFBF5BAB98D8E00238ECA19A725978F837AD15C0C * get_address_of_m_Enumerator_0() { return &___m_Enumerator_0; }
	inline void set_m_Enumerator_0(Enumerator_tFBF5BAB98D8E00238ECA19A725978F837AD15C0C  value)
	{
		___m_Enumerator_0 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Enumerator_0))->___dictionary_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_Enumerator_0))->___current_3))->___value_1), (void*)NULL);
		#endif
	}
};


// UnityEngine.XR.ARFoundation.TrackableCollection`1/Enumerator<System.Object>
struct  Enumerator_t2E1E8D9B1C4E269F7D1A8823FA9D39B68490DB07 
{
public:
	// System.Collections.Generic.Dictionary`2/Enumerator<UnityEngine.XR.ARSubsystems.TrackableId,TTrackable> UnityEngine.XR.ARFoundation.TrackableCollection`1/Enumerator::m_Enumerator
	Enumerator_tBDE39976A6EDE25239B2A4BB32B174C88FEE9921  ___m_Enumerator_0;

public:
	inline static int32_t get_offset_of_m_Enumerator_0() { return static_cast<int32_t>(offsetof(Enumerator_t2E1E8D9B1C4E269F7D1A8823FA9D39B68490DB07, ___m_Enumerator_0)); }
	inline Enumerator_tBDE39976A6EDE25239B2A4BB32B174C88FEE9921  get_m_Enumerator_0() const { return ___m_Enumerator_0; }
	inline Enumerator_tBDE39976A6EDE25239B2A4BB32B174C88FEE9921 * get_address_of_m_Enumerator_0() { return &___m_Enumerator_0; }
	inline void set_m_Enumerator_0(Enumerator_tBDE39976A6EDE25239B2A4BB32B174C88FEE9921  value)
	{
		___m_Enumerator_0 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Enumerator_0))->___dictionary_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_Enumerator_0))->___current_3))->___value_1), (void*)NULL);
		#endif
	}
};


// UnityEngine.Events.UnityAction`1<System.Int32>
struct  UnityAction_1_t5CF46572372725E6225588C466A7AF5C8597AA79  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.XR.ARFoundation.ARCameraFrameEventArgs
struct  ARCameraFrameEventArgs_t6DC46EA4DDD08CB3703AE73DA3D08CB7634FDB42 
{
public:
	// UnityEngine.XR.ARFoundation.ARLightEstimationData UnityEngine.XR.ARFoundation.ARCameraFrameEventArgs::<lightEstimation>k__BackingField
	ARLightEstimationData_tC7EC4FC85F9EDACE1CED2BB3D2DC659DE43B8423  ___U3ClightEstimationU3Ek__BackingField_0;
	// System.Nullable`1<System.Int64> UnityEngine.XR.ARFoundation.ARCameraFrameEventArgs::<timestampNs>k__BackingField
	Nullable_1_t340361C8134256120F5769AC5A3F743DB6C11D1F  ___U3CtimestampNsU3Ek__BackingField_1;
	// System.Nullable`1<UnityEngine.Matrix4x4> UnityEngine.XR.ARFoundation.ARCameraFrameEventArgs::<projectionMatrix>k__BackingField
	Nullable_1_tBC3CF93247D9ED5D94966DBCDFCDE51AF9779E8E  ___U3CprojectionMatrixU3Ek__BackingField_2;
	// System.Nullable`1<UnityEngine.Matrix4x4> UnityEngine.XR.ARFoundation.ARCameraFrameEventArgs::<displayMatrix>k__BackingField
	Nullable_1_tBC3CF93247D9ED5D94966DBCDFCDE51AF9779E8E  ___U3CdisplayMatrixU3Ek__BackingField_3;
	// System.Collections.Generic.List`1<UnityEngine.Texture2D> UnityEngine.XR.ARFoundation.ARCameraFrameEventArgs::<textures>k__BackingField
	List_1_t67CA4414F3746D817D6D1A1D16FD9E7C85CED2D7 * ___U3CtexturesU3Ek__BackingField_4;
	// System.Collections.Generic.List`1<System.Int32> UnityEngine.XR.ARFoundation.ARCameraFrameEventArgs::<propertyNameIds>k__BackingField
	List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * ___U3CpropertyNameIdsU3Ek__BackingField_5;
	// System.Nullable`1<System.Double> UnityEngine.XR.ARFoundation.ARCameraFrameEventArgs::<exposureDuration>k__BackingField
	Nullable_1_t75730434CAD4E48A4EE117588CFD586FFBCAC209  ___U3CexposureDurationU3Ek__BackingField_6;
	// System.Nullable`1<System.Single> UnityEngine.XR.ARFoundation.ARCameraFrameEventArgs::<exposureOffset>k__BackingField
	Nullable_1_t0C4AC2E457C437FA106160547FD9BA5B50B1888A  ___U3CexposureOffsetU3Ek__BackingField_7;
	// System.Collections.Generic.List`1<System.String> UnityEngine.XR.ARFoundation.ARCameraFrameEventArgs::<enabledMaterialKeywords>k__BackingField
	List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * ___U3CenabledMaterialKeywordsU3Ek__BackingField_8;
	// System.Collections.Generic.List`1<System.String> UnityEngine.XR.ARFoundation.ARCameraFrameEventArgs::<disabledMaterialKeywords>k__BackingField
	List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * ___U3CdisabledMaterialKeywordsU3Ek__BackingField_9;
	// UnityEngine.Texture UnityEngine.XR.ARFoundation.ARCameraFrameEventArgs::<cameraGrainTexture>k__BackingField
	Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE * ___U3CcameraGrainTextureU3Ek__BackingField_10;
	// System.Single UnityEngine.XR.ARFoundation.ARCameraFrameEventArgs::<noiseIntensity>k__BackingField
	float ___U3CnoiseIntensityU3Ek__BackingField_11;

public:
	inline static int32_t get_offset_of_U3ClightEstimationU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(ARCameraFrameEventArgs_t6DC46EA4DDD08CB3703AE73DA3D08CB7634FDB42, ___U3ClightEstimationU3Ek__BackingField_0)); }
	inline ARLightEstimationData_tC7EC4FC85F9EDACE1CED2BB3D2DC659DE43B8423  get_U3ClightEstimationU3Ek__BackingField_0() const { return ___U3ClightEstimationU3Ek__BackingField_0; }
	inline ARLightEstimationData_tC7EC4FC85F9EDACE1CED2BB3D2DC659DE43B8423 * get_address_of_U3ClightEstimationU3Ek__BackingField_0() { return &___U3ClightEstimationU3Ek__BackingField_0; }
	inline void set_U3ClightEstimationU3Ek__BackingField_0(ARLightEstimationData_tC7EC4FC85F9EDACE1CED2BB3D2DC659DE43B8423  value)
	{
		___U3ClightEstimationU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of_U3CtimestampNsU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(ARCameraFrameEventArgs_t6DC46EA4DDD08CB3703AE73DA3D08CB7634FDB42, ___U3CtimestampNsU3Ek__BackingField_1)); }
	inline Nullable_1_t340361C8134256120F5769AC5A3F743DB6C11D1F  get_U3CtimestampNsU3Ek__BackingField_1() const { return ___U3CtimestampNsU3Ek__BackingField_1; }
	inline Nullable_1_t340361C8134256120F5769AC5A3F743DB6C11D1F * get_address_of_U3CtimestampNsU3Ek__BackingField_1() { return &___U3CtimestampNsU3Ek__BackingField_1; }
	inline void set_U3CtimestampNsU3Ek__BackingField_1(Nullable_1_t340361C8134256120F5769AC5A3F743DB6C11D1F  value)
	{
		___U3CtimestampNsU3Ek__BackingField_1 = value;
	}

	inline static int32_t get_offset_of_U3CprojectionMatrixU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(ARCameraFrameEventArgs_t6DC46EA4DDD08CB3703AE73DA3D08CB7634FDB42, ___U3CprojectionMatrixU3Ek__BackingField_2)); }
	inline Nullable_1_tBC3CF93247D9ED5D94966DBCDFCDE51AF9779E8E  get_U3CprojectionMatrixU3Ek__BackingField_2() const { return ___U3CprojectionMatrixU3Ek__BackingField_2; }
	inline Nullable_1_tBC3CF93247D9ED5D94966DBCDFCDE51AF9779E8E * get_address_of_U3CprojectionMatrixU3Ek__BackingField_2() { return &___U3CprojectionMatrixU3Ek__BackingField_2; }
	inline void set_U3CprojectionMatrixU3Ek__BackingField_2(Nullable_1_tBC3CF93247D9ED5D94966DBCDFCDE51AF9779E8E  value)
	{
		___U3CprojectionMatrixU3Ek__BackingField_2 = value;
	}

	inline static int32_t get_offset_of_U3CdisplayMatrixU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(ARCameraFrameEventArgs_t6DC46EA4DDD08CB3703AE73DA3D08CB7634FDB42, ___U3CdisplayMatrixU3Ek__BackingField_3)); }
	inline Nullable_1_tBC3CF93247D9ED5D94966DBCDFCDE51AF9779E8E  get_U3CdisplayMatrixU3Ek__BackingField_3() const { return ___U3CdisplayMatrixU3Ek__BackingField_3; }
	inline Nullable_1_tBC3CF93247D9ED5D94966DBCDFCDE51AF9779E8E * get_address_of_U3CdisplayMatrixU3Ek__BackingField_3() { return &___U3CdisplayMatrixU3Ek__BackingField_3; }
	inline void set_U3CdisplayMatrixU3Ek__BackingField_3(Nullable_1_tBC3CF93247D9ED5D94966DBCDFCDE51AF9779E8E  value)
	{
		___U3CdisplayMatrixU3Ek__BackingField_3 = value;
	}

	inline static int32_t get_offset_of_U3CtexturesU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(ARCameraFrameEventArgs_t6DC46EA4DDD08CB3703AE73DA3D08CB7634FDB42, ___U3CtexturesU3Ek__BackingField_4)); }
	inline List_1_t67CA4414F3746D817D6D1A1D16FD9E7C85CED2D7 * get_U3CtexturesU3Ek__BackingField_4() const { return ___U3CtexturesU3Ek__BackingField_4; }
	inline List_1_t67CA4414F3746D817D6D1A1D16FD9E7C85CED2D7 ** get_address_of_U3CtexturesU3Ek__BackingField_4() { return &___U3CtexturesU3Ek__BackingField_4; }
	inline void set_U3CtexturesU3Ek__BackingField_4(List_1_t67CA4414F3746D817D6D1A1D16FD9E7C85CED2D7 * value)
	{
		___U3CtexturesU3Ek__BackingField_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CtexturesU3Ek__BackingField_4), (void*)value);
	}

	inline static int32_t get_offset_of_U3CpropertyNameIdsU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(ARCameraFrameEventArgs_t6DC46EA4DDD08CB3703AE73DA3D08CB7634FDB42, ___U3CpropertyNameIdsU3Ek__BackingField_5)); }
	inline List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * get_U3CpropertyNameIdsU3Ek__BackingField_5() const { return ___U3CpropertyNameIdsU3Ek__BackingField_5; }
	inline List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 ** get_address_of_U3CpropertyNameIdsU3Ek__BackingField_5() { return &___U3CpropertyNameIdsU3Ek__BackingField_5; }
	inline void set_U3CpropertyNameIdsU3Ek__BackingField_5(List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * value)
	{
		___U3CpropertyNameIdsU3Ek__BackingField_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CpropertyNameIdsU3Ek__BackingField_5), (void*)value);
	}

	inline static int32_t get_offset_of_U3CexposureDurationU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(ARCameraFrameEventArgs_t6DC46EA4DDD08CB3703AE73DA3D08CB7634FDB42, ___U3CexposureDurationU3Ek__BackingField_6)); }
	inline Nullable_1_t75730434CAD4E48A4EE117588CFD586FFBCAC209  get_U3CexposureDurationU3Ek__BackingField_6() const { return ___U3CexposureDurationU3Ek__BackingField_6; }
	inline Nullable_1_t75730434CAD4E48A4EE117588CFD586FFBCAC209 * get_address_of_U3CexposureDurationU3Ek__BackingField_6() { return &___U3CexposureDurationU3Ek__BackingField_6; }
	inline void set_U3CexposureDurationU3Ek__BackingField_6(Nullable_1_t75730434CAD4E48A4EE117588CFD586FFBCAC209  value)
	{
		___U3CexposureDurationU3Ek__BackingField_6 = value;
	}

	inline static int32_t get_offset_of_U3CexposureOffsetU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(ARCameraFrameEventArgs_t6DC46EA4DDD08CB3703AE73DA3D08CB7634FDB42, ___U3CexposureOffsetU3Ek__BackingField_7)); }
	inline Nullable_1_t0C4AC2E457C437FA106160547FD9BA5B50B1888A  get_U3CexposureOffsetU3Ek__BackingField_7() const { return ___U3CexposureOffsetU3Ek__BackingField_7; }
	inline Nullable_1_t0C4AC2E457C437FA106160547FD9BA5B50B1888A * get_address_of_U3CexposureOffsetU3Ek__BackingField_7() { return &___U3CexposureOffsetU3Ek__BackingField_7; }
	inline void set_U3CexposureOffsetU3Ek__BackingField_7(Nullable_1_t0C4AC2E457C437FA106160547FD9BA5B50B1888A  value)
	{
		___U3CexposureOffsetU3Ek__BackingField_7 = value;
	}

	inline static int32_t get_offset_of_U3CenabledMaterialKeywordsU3Ek__BackingField_8() { return static_cast<int32_t>(offsetof(ARCameraFrameEventArgs_t6DC46EA4DDD08CB3703AE73DA3D08CB7634FDB42, ___U3CenabledMaterialKeywordsU3Ek__BackingField_8)); }
	inline List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * get_U3CenabledMaterialKeywordsU3Ek__BackingField_8() const { return ___U3CenabledMaterialKeywordsU3Ek__BackingField_8; }
	inline List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 ** get_address_of_U3CenabledMaterialKeywordsU3Ek__BackingField_8() { return &___U3CenabledMaterialKeywordsU3Ek__BackingField_8; }
	inline void set_U3CenabledMaterialKeywordsU3Ek__BackingField_8(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * value)
	{
		___U3CenabledMaterialKeywordsU3Ek__BackingField_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CenabledMaterialKeywordsU3Ek__BackingField_8), (void*)value);
	}

	inline static int32_t get_offset_of_U3CdisabledMaterialKeywordsU3Ek__BackingField_9() { return static_cast<int32_t>(offsetof(ARCameraFrameEventArgs_t6DC46EA4DDD08CB3703AE73DA3D08CB7634FDB42, ___U3CdisabledMaterialKeywordsU3Ek__BackingField_9)); }
	inline List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * get_U3CdisabledMaterialKeywordsU3Ek__BackingField_9() const { return ___U3CdisabledMaterialKeywordsU3Ek__BackingField_9; }
	inline List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 ** get_address_of_U3CdisabledMaterialKeywordsU3Ek__BackingField_9() { return &___U3CdisabledMaterialKeywordsU3Ek__BackingField_9; }
	inline void set_U3CdisabledMaterialKeywordsU3Ek__BackingField_9(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * value)
	{
		___U3CdisabledMaterialKeywordsU3Ek__BackingField_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CdisabledMaterialKeywordsU3Ek__BackingField_9), (void*)value);
	}

	inline static int32_t get_offset_of_U3CcameraGrainTextureU3Ek__BackingField_10() { return static_cast<int32_t>(offsetof(ARCameraFrameEventArgs_t6DC46EA4DDD08CB3703AE73DA3D08CB7634FDB42, ___U3CcameraGrainTextureU3Ek__BackingField_10)); }
	inline Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE * get_U3CcameraGrainTextureU3Ek__BackingField_10() const { return ___U3CcameraGrainTextureU3Ek__BackingField_10; }
	inline Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE ** get_address_of_U3CcameraGrainTextureU3Ek__BackingField_10() { return &___U3CcameraGrainTextureU3Ek__BackingField_10; }
	inline void set_U3CcameraGrainTextureU3Ek__BackingField_10(Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE * value)
	{
		___U3CcameraGrainTextureU3Ek__BackingField_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CcameraGrainTextureU3Ek__BackingField_10), (void*)value);
	}

	inline static int32_t get_offset_of_U3CnoiseIntensityU3Ek__BackingField_11() { return static_cast<int32_t>(offsetof(ARCameraFrameEventArgs_t6DC46EA4DDD08CB3703AE73DA3D08CB7634FDB42, ___U3CnoiseIntensityU3Ek__BackingField_11)); }
	inline float get_U3CnoiseIntensityU3Ek__BackingField_11() const { return ___U3CnoiseIntensityU3Ek__BackingField_11; }
	inline float* get_address_of_U3CnoiseIntensityU3Ek__BackingField_11() { return &___U3CnoiseIntensityU3Ek__BackingField_11; }
	inline void set_U3CnoiseIntensityU3Ek__BackingField_11(float value)
	{
		___U3CnoiseIntensityU3Ek__BackingField_11 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.XR.ARFoundation.ARCameraFrameEventArgs
struct ARCameraFrameEventArgs_t6DC46EA4DDD08CB3703AE73DA3D08CB7634FDB42_marshaled_pinvoke
{
	ARLightEstimationData_tC7EC4FC85F9EDACE1CED2BB3D2DC659DE43B8423_marshaled_pinvoke ___U3ClightEstimationU3Ek__BackingField_0;
	Nullable_1_t340361C8134256120F5769AC5A3F743DB6C11D1F  ___U3CtimestampNsU3Ek__BackingField_1;
	Nullable_1_tBC3CF93247D9ED5D94966DBCDFCDE51AF9779E8E  ___U3CprojectionMatrixU3Ek__BackingField_2;
	Nullable_1_tBC3CF93247D9ED5D94966DBCDFCDE51AF9779E8E  ___U3CdisplayMatrixU3Ek__BackingField_3;
	List_1_t67CA4414F3746D817D6D1A1D16FD9E7C85CED2D7 * ___U3CtexturesU3Ek__BackingField_4;
	List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * ___U3CpropertyNameIdsU3Ek__BackingField_5;
	Nullable_1_t75730434CAD4E48A4EE117588CFD586FFBCAC209  ___U3CexposureDurationU3Ek__BackingField_6;
	Nullable_1_t0C4AC2E457C437FA106160547FD9BA5B50B1888A  ___U3CexposureOffsetU3Ek__BackingField_7;
	List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * ___U3CenabledMaterialKeywordsU3Ek__BackingField_8;
	List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * ___U3CdisabledMaterialKeywordsU3Ek__BackingField_9;
	Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE * ___U3CcameraGrainTextureU3Ek__BackingField_10;
	float ___U3CnoiseIntensityU3Ek__BackingField_11;
};
// Native definition for COM marshalling of UnityEngine.XR.ARFoundation.ARCameraFrameEventArgs
struct ARCameraFrameEventArgs_t6DC46EA4DDD08CB3703AE73DA3D08CB7634FDB42_marshaled_com
{
	ARLightEstimationData_tC7EC4FC85F9EDACE1CED2BB3D2DC659DE43B8423_marshaled_com ___U3ClightEstimationU3Ek__BackingField_0;
	Nullable_1_t340361C8134256120F5769AC5A3F743DB6C11D1F  ___U3CtimestampNsU3Ek__BackingField_1;
	Nullable_1_tBC3CF93247D9ED5D94966DBCDFCDE51AF9779E8E  ___U3CprojectionMatrixU3Ek__BackingField_2;
	Nullable_1_tBC3CF93247D9ED5D94966DBCDFCDE51AF9779E8E  ___U3CdisplayMatrixU3Ek__BackingField_3;
	List_1_t67CA4414F3746D817D6D1A1D16FD9E7C85CED2D7 * ___U3CtexturesU3Ek__BackingField_4;
	List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * ___U3CpropertyNameIdsU3Ek__BackingField_5;
	Nullable_1_t75730434CAD4E48A4EE117588CFD586FFBCAC209  ___U3CexposureDurationU3Ek__BackingField_6;
	Nullable_1_t0C4AC2E457C437FA106160547FD9BA5B50B1888A  ___U3CexposureOffsetU3Ek__BackingField_7;
	List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * ___U3CenabledMaterialKeywordsU3Ek__BackingField_8;
	List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * ___U3CdisabledMaterialKeywordsU3Ek__BackingField_9;
	Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE * ___U3CcameraGrainTextureU3Ek__BackingField_10;
	float ___U3CnoiseIntensityU3Ek__BackingField_11;
};

// UnityEngine.XR.ARFoundation.ARTextureInfo
struct  ARTextureInfo_t081B3396E755CC95C37B7BA68075F5DBEF36B355 
{
public:
	// UnityEngine.XR.ARSubsystems.XRTextureDescriptor UnityEngine.XR.ARFoundation.ARTextureInfo::m_Descriptor
	XRTextureDescriptor_t9CA857DCCC1208B74376787BE4F3008A01B29A57  ___m_Descriptor_1;
	// UnityEngine.Texture UnityEngine.XR.ARFoundation.ARTextureInfo::m_Texture
	Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE * ___m_Texture_2;

public:
	inline static int32_t get_offset_of_m_Descriptor_1() { return static_cast<int32_t>(offsetof(ARTextureInfo_t081B3396E755CC95C37B7BA68075F5DBEF36B355, ___m_Descriptor_1)); }
	inline XRTextureDescriptor_t9CA857DCCC1208B74376787BE4F3008A01B29A57  get_m_Descriptor_1() const { return ___m_Descriptor_1; }
	inline XRTextureDescriptor_t9CA857DCCC1208B74376787BE4F3008A01B29A57 * get_address_of_m_Descriptor_1() { return &___m_Descriptor_1; }
	inline void set_m_Descriptor_1(XRTextureDescriptor_t9CA857DCCC1208B74376787BE4F3008A01B29A57  value)
	{
		___m_Descriptor_1 = value;
	}

	inline static int32_t get_offset_of_m_Texture_2() { return static_cast<int32_t>(offsetof(ARTextureInfo_t081B3396E755CC95C37B7BA68075F5DBEF36B355, ___m_Texture_2)); }
	inline Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE * get_m_Texture_2() const { return ___m_Texture_2; }
	inline Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE ** get_address_of_m_Texture_2() { return &___m_Texture_2; }
	inline void set_m_Texture_2(Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE * value)
	{
		___m_Texture_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Texture_2), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.XR.ARFoundation.ARTextureInfo
struct ARTextureInfo_t081B3396E755CC95C37B7BA68075F5DBEF36B355_marshaled_pinvoke
{
	XRTextureDescriptor_t9CA857DCCC1208B74376787BE4F3008A01B29A57  ___m_Descriptor_1;
	Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE * ___m_Texture_2;
};
// Native definition for COM marshalling of UnityEngine.XR.ARFoundation.ARTextureInfo
struct ARTextureInfo_t081B3396E755CC95C37B7BA68075F5DBEF36B355_marshaled_com
{
	XRTextureDescriptor_t9CA857DCCC1208B74376787BE4F3008A01B29A57  ___m_Descriptor_1;
	Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE * ___m_Texture_2;
};

// UnityEngine.Behaviour
struct  Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// System.InvalidOperationException
struct  InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB  : public SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62
{
public:

public:
};


// UnityEngine.Transform
struct  Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// UnityEngine.Events.UnityAction
struct  UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099  : public MulticastDelegate_t
{
public:

public:
};


// System.Action`1<UnityEngine.XR.ARFoundation.ARCameraFrameEventArgs>
struct  Action_1_tA34B23CE57B7192055F9BF04AA14FCCB2ED91C68  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.Camera
struct  Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};

struct Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_StaticFields
{
public:
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreCull
	CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * ___onPreCull_4;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreRender
	CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * ___onPreRender_5;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPostRender
	CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * ___onPostRender_6;

public:
	inline static int32_t get_offset_of_onPreCull_4() { return static_cast<int32_t>(offsetof(Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_StaticFields, ___onPreCull_4)); }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * get_onPreCull_4() const { return ___onPreCull_4; }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D ** get_address_of_onPreCull_4() { return &___onPreCull_4; }
	inline void set_onPreCull_4(CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * value)
	{
		___onPreCull_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onPreCull_4), (void*)value);
	}

	inline static int32_t get_offset_of_onPreRender_5() { return static_cast<int32_t>(offsetof(Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_StaticFields, ___onPreRender_5)); }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * get_onPreRender_5() const { return ___onPreRender_5; }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D ** get_address_of_onPreRender_5() { return &___onPreRender_5; }
	inline void set_onPreRender_5(CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * value)
	{
		___onPreRender_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onPreRender_5), (void*)value);
	}

	inline static int32_t get_offset_of_onPostRender_6() { return static_cast<int32_t>(offsetof(Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_StaticFields, ___onPostRender_6)); }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * get_onPostRender_6() const { return ___onPostRender_6; }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D ** get_address_of_onPostRender_6() { return &___onPostRender_6; }
	inline void set_onPostRender_6(CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * value)
	{
		___onPostRender_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onPostRender_6), (void*)value);
	}
};


// UnityEngine.MonoBehaviour
struct  MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};


// UnityEngine.XR.ARFoundation.ARTrackable`2<UnityEngine.XR.ARSubsystems.BoundedPlane,UnityEngine.XR.ARFoundation.ARPlane>
struct  ARTrackable_2_t3B4BDEC1C83B6E52F03E653C10343E488761AF0B  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Boolean UnityEngine.XR.ARFoundation.ARTrackable`2::m_DestroyOnRemoval
	bool ___m_DestroyOnRemoval_4;
	// System.Boolean UnityEngine.XR.ARFoundation.ARTrackable`2::<pending>k__BackingField
	bool ___U3CpendingU3Ek__BackingField_5;
	// TSessionRelativeData UnityEngine.XR.ARFoundation.ARTrackable`2::<sessionRelativeData>k__BackingField
	BoundedPlane_t9001963C43ACDF4CDEA8BBF97CD783B7969B79C5  ___U3CsessionRelativeDataU3Ek__BackingField_6;

public:
	inline static int32_t get_offset_of_m_DestroyOnRemoval_4() { return static_cast<int32_t>(offsetof(ARTrackable_2_t3B4BDEC1C83B6E52F03E653C10343E488761AF0B, ___m_DestroyOnRemoval_4)); }
	inline bool get_m_DestroyOnRemoval_4() const { return ___m_DestroyOnRemoval_4; }
	inline bool* get_address_of_m_DestroyOnRemoval_4() { return &___m_DestroyOnRemoval_4; }
	inline void set_m_DestroyOnRemoval_4(bool value)
	{
		___m_DestroyOnRemoval_4 = value;
	}

	inline static int32_t get_offset_of_U3CpendingU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(ARTrackable_2_t3B4BDEC1C83B6E52F03E653C10343E488761AF0B, ___U3CpendingU3Ek__BackingField_5)); }
	inline bool get_U3CpendingU3Ek__BackingField_5() const { return ___U3CpendingU3Ek__BackingField_5; }
	inline bool* get_address_of_U3CpendingU3Ek__BackingField_5() { return &___U3CpendingU3Ek__BackingField_5; }
	inline void set_U3CpendingU3Ek__BackingField_5(bool value)
	{
		___U3CpendingU3Ek__BackingField_5 = value;
	}

	inline static int32_t get_offset_of_U3CsessionRelativeDataU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(ARTrackable_2_t3B4BDEC1C83B6E52F03E653C10343E488761AF0B, ___U3CsessionRelativeDataU3Ek__BackingField_6)); }
	inline BoundedPlane_t9001963C43ACDF4CDEA8BBF97CD783B7969B79C5  get_U3CsessionRelativeDataU3Ek__BackingField_6() const { return ___U3CsessionRelativeDataU3Ek__BackingField_6; }
	inline BoundedPlane_t9001963C43ACDF4CDEA8BBF97CD783B7969B79C5 * get_address_of_U3CsessionRelativeDataU3Ek__BackingField_6() { return &___U3CsessionRelativeDataU3Ek__BackingField_6; }
	inline void set_U3CsessionRelativeDataU3Ek__BackingField_6(BoundedPlane_t9001963C43ACDF4CDEA8BBF97CD783B7969B79C5  value)
	{
		___U3CsessionRelativeDataU3Ek__BackingField_6 = value;
	}
};


// UnityEngine.XR.ARFoundation.SubsystemLifecycleManager`3<UnityEngine.XR.ARSubsystems.XRCameraSubsystem,UnityEngine.XR.ARSubsystems.XRCameraSubsystemDescriptor,UnityEngine.XR.ARSubsystems.XRCameraSubsystem/Provider>
struct  SubsystemLifecycleManager_3_tC083C76968A3985FEAC936C1BBC3D5F306890A2C  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// TSubsystem UnityEngine.XR.ARFoundation.SubsystemLifecycleManager`3::<subsystem>k__BackingField
	XRCameraSubsystem_t3B32F6EA8A2E4D23AF240B5D21C34759D2613AC9 * ___U3CsubsystemU3Ek__BackingField_4;

public:
	inline static int32_t get_offset_of_U3CsubsystemU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(SubsystemLifecycleManager_3_tC083C76968A3985FEAC936C1BBC3D5F306890A2C, ___U3CsubsystemU3Ek__BackingField_4)); }
	inline XRCameraSubsystem_t3B32F6EA8A2E4D23AF240B5D21C34759D2613AC9 * get_U3CsubsystemU3Ek__BackingField_4() const { return ___U3CsubsystemU3Ek__BackingField_4; }
	inline XRCameraSubsystem_t3B32F6EA8A2E4D23AF240B5D21C34759D2613AC9 ** get_address_of_U3CsubsystemU3Ek__BackingField_4() { return &___U3CsubsystemU3Ek__BackingField_4; }
	inline void set_U3CsubsystemU3Ek__BackingField_4(XRCameraSubsystem_t3B32F6EA8A2E4D23AF240B5D21C34759D2613AC9 * value)
	{
		___U3CsubsystemU3Ek__BackingField_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CsubsystemU3Ek__BackingField_4), (void*)value);
	}
};

struct SubsystemLifecycleManager_3_tC083C76968A3985FEAC936C1BBC3D5F306890A2C_StaticFields
{
public:
	// System.Collections.Generic.List`1<TSubsystemDescriptor> UnityEngine.XR.ARFoundation.SubsystemLifecycleManager`3::s_SubsystemDescriptors
	List_1_t5ACA7E75885D8B9D7B85548B84BF43976A5038DC * ___s_SubsystemDescriptors_5;
	// System.Collections.Generic.List`1<TSubsystem> UnityEngine.XR.ARFoundation.SubsystemLifecycleManager`3::s_SubsystemInstances
	List_1_t69444E6E06FA6776283024710ADC0302F2700BFD * ___s_SubsystemInstances_6;

public:
	inline static int32_t get_offset_of_s_SubsystemDescriptors_5() { return static_cast<int32_t>(offsetof(SubsystemLifecycleManager_3_tC083C76968A3985FEAC936C1BBC3D5F306890A2C_StaticFields, ___s_SubsystemDescriptors_5)); }
	inline List_1_t5ACA7E75885D8B9D7B85548B84BF43976A5038DC * get_s_SubsystemDescriptors_5() const { return ___s_SubsystemDescriptors_5; }
	inline List_1_t5ACA7E75885D8B9D7B85548B84BF43976A5038DC ** get_address_of_s_SubsystemDescriptors_5() { return &___s_SubsystemDescriptors_5; }
	inline void set_s_SubsystemDescriptors_5(List_1_t5ACA7E75885D8B9D7B85548B84BF43976A5038DC * value)
	{
		___s_SubsystemDescriptors_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_SubsystemDescriptors_5), (void*)value);
	}

	inline static int32_t get_offset_of_s_SubsystemInstances_6() { return static_cast<int32_t>(offsetof(SubsystemLifecycleManager_3_tC083C76968A3985FEAC936C1BBC3D5F306890A2C_StaticFields, ___s_SubsystemInstances_6)); }
	inline List_1_t69444E6E06FA6776283024710ADC0302F2700BFD * get_s_SubsystemInstances_6() const { return ___s_SubsystemInstances_6; }
	inline List_1_t69444E6E06FA6776283024710ADC0302F2700BFD ** get_address_of_s_SubsystemInstances_6() { return &___s_SubsystemInstances_6; }
	inline void set_s_SubsystemInstances_6(List_1_t69444E6E06FA6776283024710ADC0302F2700BFD * value)
	{
		___s_SubsystemInstances_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_SubsystemInstances_6), (void*)value);
	}
};


// UnityEngine.XR.ARFoundation.SubsystemLifecycleManager`3<UnityEngine.XR.ARSubsystems.XRPlaneSubsystem,UnityEngine.XR.ARSubsystems.XRPlaneSubsystemDescriptor,UnityEngine.XR.ARSubsystems.XRPlaneSubsystem/Provider>
struct  SubsystemLifecycleManager_3_t0E334FAE91D54B85E9314C55C4CDCB207ED1BCC5  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// TSubsystem UnityEngine.XR.ARFoundation.SubsystemLifecycleManager`3::<subsystem>k__BackingField
	XRPlaneSubsystem_t7C76F9D2C993B0DC38F0A7CDCE745EA7C12417EE * ___U3CsubsystemU3Ek__BackingField_4;

public:
	inline static int32_t get_offset_of_U3CsubsystemU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(SubsystemLifecycleManager_3_t0E334FAE91D54B85E9314C55C4CDCB207ED1BCC5, ___U3CsubsystemU3Ek__BackingField_4)); }
	inline XRPlaneSubsystem_t7C76F9D2C993B0DC38F0A7CDCE745EA7C12417EE * get_U3CsubsystemU3Ek__BackingField_4() const { return ___U3CsubsystemU3Ek__BackingField_4; }
	inline XRPlaneSubsystem_t7C76F9D2C993B0DC38F0A7CDCE745EA7C12417EE ** get_address_of_U3CsubsystemU3Ek__BackingField_4() { return &___U3CsubsystemU3Ek__BackingField_4; }
	inline void set_U3CsubsystemU3Ek__BackingField_4(XRPlaneSubsystem_t7C76F9D2C993B0DC38F0A7CDCE745EA7C12417EE * value)
	{
		___U3CsubsystemU3Ek__BackingField_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CsubsystemU3Ek__BackingField_4), (void*)value);
	}
};

struct SubsystemLifecycleManager_3_t0E334FAE91D54B85E9314C55C4CDCB207ED1BCC5_StaticFields
{
public:
	// System.Collections.Generic.List`1<TSubsystemDescriptor> UnityEngine.XR.ARFoundation.SubsystemLifecycleManager`3::s_SubsystemDescriptors
	List_1_t6D435690E62CDB3645DB1A76F3B7B8B6069BDB4F * ___s_SubsystemDescriptors_5;
	// System.Collections.Generic.List`1<TSubsystem> UnityEngine.XR.ARFoundation.SubsystemLifecycleManager`3::s_SubsystemInstances
	List_1_t42260E8F78DDBD1A6947677665395B70FA8816C1 * ___s_SubsystemInstances_6;

public:
	inline static int32_t get_offset_of_s_SubsystemDescriptors_5() { return static_cast<int32_t>(offsetof(SubsystemLifecycleManager_3_t0E334FAE91D54B85E9314C55C4CDCB207ED1BCC5_StaticFields, ___s_SubsystemDescriptors_5)); }
	inline List_1_t6D435690E62CDB3645DB1A76F3B7B8B6069BDB4F * get_s_SubsystemDescriptors_5() const { return ___s_SubsystemDescriptors_5; }
	inline List_1_t6D435690E62CDB3645DB1A76F3B7B8B6069BDB4F ** get_address_of_s_SubsystemDescriptors_5() { return &___s_SubsystemDescriptors_5; }
	inline void set_s_SubsystemDescriptors_5(List_1_t6D435690E62CDB3645DB1A76F3B7B8B6069BDB4F * value)
	{
		___s_SubsystemDescriptors_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_SubsystemDescriptors_5), (void*)value);
	}

	inline static int32_t get_offset_of_s_SubsystemInstances_6() { return static_cast<int32_t>(offsetof(SubsystemLifecycleManager_3_t0E334FAE91D54B85E9314C55C4CDCB207ED1BCC5_StaticFields, ___s_SubsystemInstances_6)); }
	inline List_1_t42260E8F78DDBD1A6947677665395B70FA8816C1 * get_s_SubsystemInstances_6() const { return ___s_SubsystemInstances_6; }
	inline List_1_t42260E8F78DDBD1A6947677665395B70FA8816C1 ** get_address_of_s_SubsystemInstances_6() { return &___s_SubsystemInstances_6; }
	inline void set_s_SubsystemInstances_6(List_1_t42260E8F78DDBD1A6947677665395B70FA8816C1 * value)
	{
		___s_SubsystemInstances_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_SubsystemInstances_6), (void*)value);
	}
};


// UnityEngine.XR.ARFoundation.SubsystemLifecycleManager`3<UnityEngine.XR.ARSubsystems.XRSessionSubsystem,UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor,UnityEngine.XR.ARSubsystems.XRSessionSubsystem/Provider>
struct  SubsystemLifecycleManager_3_tE412F7818499B8C9886AA713B6FD9F15DC2BBAFD  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// TSubsystem UnityEngine.XR.ARFoundation.SubsystemLifecycleManager`3::<subsystem>k__BackingField
	XRSessionSubsystem_t8AD3C01568AA19BF038D23A6031FF9814CAF93CD * ___U3CsubsystemU3Ek__BackingField_4;

public:
	inline static int32_t get_offset_of_U3CsubsystemU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(SubsystemLifecycleManager_3_tE412F7818499B8C9886AA713B6FD9F15DC2BBAFD, ___U3CsubsystemU3Ek__BackingField_4)); }
	inline XRSessionSubsystem_t8AD3C01568AA19BF038D23A6031FF9814CAF93CD * get_U3CsubsystemU3Ek__BackingField_4() const { return ___U3CsubsystemU3Ek__BackingField_4; }
	inline XRSessionSubsystem_t8AD3C01568AA19BF038D23A6031FF9814CAF93CD ** get_address_of_U3CsubsystemU3Ek__BackingField_4() { return &___U3CsubsystemU3Ek__BackingField_4; }
	inline void set_U3CsubsystemU3Ek__BackingField_4(XRSessionSubsystem_t8AD3C01568AA19BF038D23A6031FF9814CAF93CD * value)
	{
		___U3CsubsystemU3Ek__BackingField_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CsubsystemU3Ek__BackingField_4), (void*)value);
	}
};

struct SubsystemLifecycleManager_3_tE412F7818499B8C9886AA713B6FD9F15DC2BBAFD_StaticFields
{
public:
	// System.Collections.Generic.List`1<TSubsystemDescriptor> UnityEngine.XR.ARFoundation.SubsystemLifecycleManager`3::s_SubsystemDescriptors
	List_1_tDA25459A722F5B00FFE84463D9952660BC3F6673 * ___s_SubsystemDescriptors_5;
	// System.Collections.Generic.List`1<TSubsystem> UnityEngine.XR.ARFoundation.SubsystemLifecycleManager`3::s_SubsystemInstances
	List_1_tC3943A359D121C56123E4142DF967EF5FCCAF2C3 * ___s_SubsystemInstances_6;

public:
	inline static int32_t get_offset_of_s_SubsystemDescriptors_5() { return static_cast<int32_t>(offsetof(SubsystemLifecycleManager_3_tE412F7818499B8C9886AA713B6FD9F15DC2BBAFD_StaticFields, ___s_SubsystemDescriptors_5)); }
	inline List_1_tDA25459A722F5B00FFE84463D9952660BC3F6673 * get_s_SubsystemDescriptors_5() const { return ___s_SubsystemDescriptors_5; }
	inline List_1_tDA25459A722F5B00FFE84463D9952660BC3F6673 ** get_address_of_s_SubsystemDescriptors_5() { return &___s_SubsystemDescriptors_5; }
	inline void set_s_SubsystemDescriptors_5(List_1_tDA25459A722F5B00FFE84463D9952660BC3F6673 * value)
	{
		___s_SubsystemDescriptors_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_SubsystemDescriptors_5), (void*)value);
	}

	inline static int32_t get_offset_of_s_SubsystemInstances_6() { return static_cast<int32_t>(offsetof(SubsystemLifecycleManager_3_tE412F7818499B8C9886AA713B6FD9F15DC2BBAFD_StaticFields, ___s_SubsystemInstances_6)); }
	inline List_1_tC3943A359D121C56123E4142DF967EF5FCCAF2C3 * get_s_SubsystemInstances_6() const { return ___s_SubsystemInstances_6; }
	inline List_1_tC3943A359D121C56123E4142DF967EF5FCCAF2C3 ** get_address_of_s_SubsystemInstances_6() { return &___s_SubsystemInstances_6; }
	inline void set_s_SubsystemInstances_6(List_1_tC3943A359D121C56123E4142DF967EF5FCCAF2C3 * value)
	{
		___s_SubsystemInstances_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_SubsystemInstances_6), (void*)value);
	}
};


// FmodResonanceAudioRoom
struct  FmodResonanceAudioRoom_t61B0C3B3436B4E982A0D69FB7F0B710C551B7089  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// FmodResonanceAudioRoom/SurfaceMaterial FmodResonanceAudioRoom::leftWall
	int32_t ___leftWall_4;
	// FmodResonanceAudioRoom/SurfaceMaterial FmodResonanceAudioRoom::rightWall
	int32_t ___rightWall_5;
	// FmodResonanceAudioRoom/SurfaceMaterial FmodResonanceAudioRoom::floor
	int32_t ___floor_6;
	// FmodResonanceAudioRoom/SurfaceMaterial FmodResonanceAudioRoom::ceiling
	int32_t ___ceiling_7;
	// FmodResonanceAudioRoom/SurfaceMaterial FmodResonanceAudioRoom::backWall
	int32_t ___backWall_8;
	// FmodResonanceAudioRoom/SurfaceMaterial FmodResonanceAudioRoom::frontWall
	int32_t ___frontWall_9;
	// System.Single FmodResonanceAudioRoom::reflectivity
	float ___reflectivity_10;
	// System.Single FmodResonanceAudioRoom::reverbGainDb
	float ___reverbGainDb_11;
	// System.Single FmodResonanceAudioRoom::reverbBrightness
	float ___reverbBrightness_12;
	// System.Single FmodResonanceAudioRoom::reverbTime
	float ___reverbTime_13;
	// UnityEngine.Vector3 FmodResonanceAudioRoom::size
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___size_14;

public:
	inline static int32_t get_offset_of_leftWall_4() { return static_cast<int32_t>(offsetof(FmodResonanceAudioRoom_t61B0C3B3436B4E982A0D69FB7F0B710C551B7089, ___leftWall_4)); }
	inline int32_t get_leftWall_4() const { return ___leftWall_4; }
	inline int32_t* get_address_of_leftWall_4() { return &___leftWall_4; }
	inline void set_leftWall_4(int32_t value)
	{
		___leftWall_4 = value;
	}

	inline static int32_t get_offset_of_rightWall_5() { return static_cast<int32_t>(offsetof(FmodResonanceAudioRoom_t61B0C3B3436B4E982A0D69FB7F0B710C551B7089, ___rightWall_5)); }
	inline int32_t get_rightWall_5() const { return ___rightWall_5; }
	inline int32_t* get_address_of_rightWall_5() { return &___rightWall_5; }
	inline void set_rightWall_5(int32_t value)
	{
		___rightWall_5 = value;
	}

	inline static int32_t get_offset_of_floor_6() { return static_cast<int32_t>(offsetof(FmodResonanceAudioRoom_t61B0C3B3436B4E982A0D69FB7F0B710C551B7089, ___floor_6)); }
	inline int32_t get_floor_6() const { return ___floor_6; }
	inline int32_t* get_address_of_floor_6() { return &___floor_6; }
	inline void set_floor_6(int32_t value)
	{
		___floor_6 = value;
	}

	inline static int32_t get_offset_of_ceiling_7() { return static_cast<int32_t>(offsetof(FmodResonanceAudioRoom_t61B0C3B3436B4E982A0D69FB7F0B710C551B7089, ___ceiling_7)); }
	inline int32_t get_ceiling_7() const { return ___ceiling_7; }
	inline int32_t* get_address_of_ceiling_7() { return &___ceiling_7; }
	inline void set_ceiling_7(int32_t value)
	{
		___ceiling_7 = value;
	}

	inline static int32_t get_offset_of_backWall_8() { return static_cast<int32_t>(offsetof(FmodResonanceAudioRoom_t61B0C3B3436B4E982A0D69FB7F0B710C551B7089, ___backWall_8)); }
	inline int32_t get_backWall_8() const { return ___backWall_8; }
	inline int32_t* get_address_of_backWall_8() { return &___backWall_8; }
	inline void set_backWall_8(int32_t value)
	{
		___backWall_8 = value;
	}

	inline static int32_t get_offset_of_frontWall_9() { return static_cast<int32_t>(offsetof(FmodResonanceAudioRoom_t61B0C3B3436B4E982A0D69FB7F0B710C551B7089, ___frontWall_9)); }
	inline int32_t get_frontWall_9() const { return ___frontWall_9; }
	inline int32_t* get_address_of_frontWall_9() { return &___frontWall_9; }
	inline void set_frontWall_9(int32_t value)
	{
		___frontWall_9 = value;
	}

	inline static int32_t get_offset_of_reflectivity_10() { return static_cast<int32_t>(offsetof(FmodResonanceAudioRoom_t61B0C3B3436B4E982A0D69FB7F0B710C551B7089, ___reflectivity_10)); }
	inline float get_reflectivity_10() const { return ___reflectivity_10; }
	inline float* get_address_of_reflectivity_10() { return &___reflectivity_10; }
	inline void set_reflectivity_10(float value)
	{
		___reflectivity_10 = value;
	}

	inline static int32_t get_offset_of_reverbGainDb_11() { return static_cast<int32_t>(offsetof(FmodResonanceAudioRoom_t61B0C3B3436B4E982A0D69FB7F0B710C551B7089, ___reverbGainDb_11)); }
	inline float get_reverbGainDb_11() const { return ___reverbGainDb_11; }
	inline float* get_address_of_reverbGainDb_11() { return &___reverbGainDb_11; }
	inline void set_reverbGainDb_11(float value)
	{
		___reverbGainDb_11 = value;
	}

	inline static int32_t get_offset_of_reverbBrightness_12() { return static_cast<int32_t>(offsetof(FmodResonanceAudioRoom_t61B0C3B3436B4E982A0D69FB7F0B710C551B7089, ___reverbBrightness_12)); }
	inline float get_reverbBrightness_12() const { return ___reverbBrightness_12; }
	inline float* get_address_of_reverbBrightness_12() { return &___reverbBrightness_12; }
	inline void set_reverbBrightness_12(float value)
	{
		___reverbBrightness_12 = value;
	}

	inline static int32_t get_offset_of_reverbTime_13() { return static_cast<int32_t>(offsetof(FmodResonanceAudioRoom_t61B0C3B3436B4E982A0D69FB7F0B710C551B7089, ___reverbTime_13)); }
	inline float get_reverbTime_13() const { return ___reverbTime_13; }
	inline float* get_address_of_reverbTime_13() { return &___reverbTime_13; }
	inline void set_reverbTime_13(float value)
	{
		___reverbTime_13 = value;
	}

	inline static int32_t get_offset_of_size_14() { return static_cast<int32_t>(offsetof(FmodResonanceAudioRoom_t61B0C3B3436B4E982A0D69FB7F0B710C551B7089, ___size_14)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_size_14() const { return ___size_14; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_size_14() { return &___size_14; }
	inline void set_size_14(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___size_14 = value;
	}
};


// IndoorAtlas.IndoorAtlasARWayfinding
struct  IndoorAtlasARWayfinding_tEC5C5F2513334FDA2BC5A261CB74E6E413413904  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// IndoorAtlas.LocationManager IndoorAtlas.IndoorAtlasARWayfinding::manager
	LocationManager_t8BEF4C1AFA85AB524CFB93A28DF2478A26E27401 * ___manager_4;
	// IndoorAtlas.LatLngFloor IndoorAtlas.IndoorAtlasARWayfinding::m_target
	LatLngFloor_t4B72E155829094591933053C9C85E867C1C255C3 * ___m_target_5;
	// System.Boolean IndoorAtlas.IndoorAtlasARWayfinding::m_wayfinding
	bool ___m_wayfinding_6;
	// UnityEngine.XR.ARFoundation.ARPlaneManager IndoorAtlas.IndoorAtlasARWayfinding::m_planeManager
	ARPlaneManager_t4700B0BC3E8B6CD35F8D925701C89A5A21DDBAD4 * ___m_planeManager_7;
	// UnityEngine.Camera IndoorAtlas.IndoorAtlasARWayfinding::m_camera
	Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * ___m_camera_8;
	// UnityEngine.XR.ARFoundation.ARCameraManager IndoorAtlas.IndoorAtlasARWayfinding::m_cameraManager
	ARCameraManager_tD802D88B523419FD1AC898539EE734DA20903874 * ___m_cameraManager_9;
	// UnityEngine.GameObject IndoorAtlas.IndoorAtlasARWayfinding::m_compass
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___m_compass_10;
	// UnityEngine.GameObject IndoorAtlas.IndoorAtlasARWayfinding::m_goal
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___m_goal_11;
	// UnityEngine.GameObject IndoorAtlas.IndoorAtlasARWayfinding::m_Turn
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___m_Turn_12;
	// UnityEngine.GameObject[] IndoorAtlas.IndoorAtlasARWayfinding::turns
	GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* ___turns_13;

public:
	inline static int32_t get_offset_of_manager_4() { return static_cast<int32_t>(offsetof(IndoorAtlasARWayfinding_tEC5C5F2513334FDA2BC5A261CB74E6E413413904, ___manager_4)); }
	inline LocationManager_t8BEF4C1AFA85AB524CFB93A28DF2478A26E27401 * get_manager_4() const { return ___manager_4; }
	inline LocationManager_t8BEF4C1AFA85AB524CFB93A28DF2478A26E27401 ** get_address_of_manager_4() { return &___manager_4; }
	inline void set_manager_4(LocationManager_t8BEF4C1AFA85AB524CFB93A28DF2478A26E27401 * value)
	{
		___manager_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___manager_4), (void*)value);
	}

	inline static int32_t get_offset_of_m_target_5() { return static_cast<int32_t>(offsetof(IndoorAtlasARWayfinding_tEC5C5F2513334FDA2BC5A261CB74E6E413413904, ___m_target_5)); }
	inline LatLngFloor_t4B72E155829094591933053C9C85E867C1C255C3 * get_m_target_5() const { return ___m_target_5; }
	inline LatLngFloor_t4B72E155829094591933053C9C85E867C1C255C3 ** get_address_of_m_target_5() { return &___m_target_5; }
	inline void set_m_target_5(LatLngFloor_t4B72E155829094591933053C9C85E867C1C255C3 * value)
	{
		___m_target_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_target_5), (void*)value);
	}

	inline static int32_t get_offset_of_m_wayfinding_6() { return static_cast<int32_t>(offsetof(IndoorAtlasARWayfinding_tEC5C5F2513334FDA2BC5A261CB74E6E413413904, ___m_wayfinding_6)); }
	inline bool get_m_wayfinding_6() const { return ___m_wayfinding_6; }
	inline bool* get_address_of_m_wayfinding_6() { return &___m_wayfinding_6; }
	inline void set_m_wayfinding_6(bool value)
	{
		___m_wayfinding_6 = value;
	}

	inline static int32_t get_offset_of_m_planeManager_7() { return static_cast<int32_t>(offsetof(IndoorAtlasARWayfinding_tEC5C5F2513334FDA2BC5A261CB74E6E413413904, ___m_planeManager_7)); }
	inline ARPlaneManager_t4700B0BC3E8B6CD35F8D925701C89A5A21DDBAD4 * get_m_planeManager_7() const { return ___m_planeManager_7; }
	inline ARPlaneManager_t4700B0BC3E8B6CD35F8D925701C89A5A21DDBAD4 ** get_address_of_m_planeManager_7() { return &___m_planeManager_7; }
	inline void set_m_planeManager_7(ARPlaneManager_t4700B0BC3E8B6CD35F8D925701C89A5A21DDBAD4 * value)
	{
		___m_planeManager_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_planeManager_7), (void*)value);
	}

	inline static int32_t get_offset_of_m_camera_8() { return static_cast<int32_t>(offsetof(IndoorAtlasARWayfinding_tEC5C5F2513334FDA2BC5A261CB74E6E413413904, ___m_camera_8)); }
	inline Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * get_m_camera_8() const { return ___m_camera_8; }
	inline Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C ** get_address_of_m_camera_8() { return &___m_camera_8; }
	inline void set_m_camera_8(Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * value)
	{
		___m_camera_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_camera_8), (void*)value);
	}

	inline static int32_t get_offset_of_m_cameraManager_9() { return static_cast<int32_t>(offsetof(IndoorAtlasARWayfinding_tEC5C5F2513334FDA2BC5A261CB74E6E413413904, ___m_cameraManager_9)); }
	inline ARCameraManager_tD802D88B523419FD1AC898539EE734DA20903874 * get_m_cameraManager_9() const { return ___m_cameraManager_9; }
	inline ARCameraManager_tD802D88B523419FD1AC898539EE734DA20903874 ** get_address_of_m_cameraManager_9() { return &___m_cameraManager_9; }
	inline void set_m_cameraManager_9(ARCameraManager_tD802D88B523419FD1AC898539EE734DA20903874 * value)
	{
		___m_cameraManager_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_cameraManager_9), (void*)value);
	}

	inline static int32_t get_offset_of_m_compass_10() { return static_cast<int32_t>(offsetof(IndoorAtlasARWayfinding_tEC5C5F2513334FDA2BC5A261CB74E6E413413904, ___m_compass_10)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_m_compass_10() const { return ___m_compass_10; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_m_compass_10() { return &___m_compass_10; }
	inline void set_m_compass_10(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___m_compass_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_compass_10), (void*)value);
	}

	inline static int32_t get_offset_of_m_goal_11() { return static_cast<int32_t>(offsetof(IndoorAtlasARWayfinding_tEC5C5F2513334FDA2BC5A261CB74E6E413413904, ___m_goal_11)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_m_goal_11() const { return ___m_goal_11; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_m_goal_11() { return &___m_goal_11; }
	inline void set_m_goal_11(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___m_goal_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_goal_11), (void*)value);
	}

	inline static int32_t get_offset_of_m_Turn_12() { return static_cast<int32_t>(offsetof(IndoorAtlasARWayfinding_tEC5C5F2513334FDA2BC5A261CB74E6E413413904, ___m_Turn_12)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_m_Turn_12() const { return ___m_Turn_12; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_m_Turn_12() { return &___m_Turn_12; }
	inline void set_m_Turn_12(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___m_Turn_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Turn_12), (void*)value);
	}

	inline static int32_t get_offset_of_turns_13() { return static_cast<int32_t>(offsetof(IndoorAtlasARWayfinding_tEC5C5F2513334FDA2BC5A261CB74E6E413413904, ___turns_13)); }
	inline GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* get_turns_13() const { return ___turns_13; }
	inline GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642** get_address_of_turns_13() { return &___turns_13; }
	inline void set_turns_13(GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* value)
	{
		___turns_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___turns_13), (void*)value);
	}
};


// IndoorAtlas.IndoorAtlasSession
struct  IndoorAtlasSession_t481C53C3F6FF3CBB05117D2F9D20BCCE12FB511F  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// IndoorAtlas.LocationManager IndoorAtlas.IndoorAtlasSession::manager
	LocationManager_t8BEF4C1AFA85AB524CFB93A28DF2478A26E27401 * ___manager_4;
	// System.String IndoorAtlas.IndoorAtlasSession::apiKey
	String_t* ___apiKey_5;
	// System.String IndoorAtlas.IndoorAtlasSession::apiSecret
	String_t* ___apiSecret_6;
	// System.String IndoorAtlas.IndoorAtlasSession::apiEndpoint
	String_t* ___apiEndpoint_7;
	// System.Double IndoorAtlas.IndoorAtlasSession::m_distanceFilter
	double ___m_distanceFilter_8;
	// System.Double IndoorAtlas.IndoorAtlasSession::m_timeFilter
	double ___m_timeFilter_9;
	// System.Double IndoorAtlas.IndoorAtlasSession::m_headingFilter
	double ___m_headingFilter_10;
	// System.Double IndoorAtlas.IndoorAtlasSession::m_attitudeFilter
	double ___m_attitudeFilter_11;

public:
	inline static int32_t get_offset_of_manager_4() { return static_cast<int32_t>(offsetof(IndoorAtlasSession_t481C53C3F6FF3CBB05117D2F9D20BCCE12FB511F, ___manager_4)); }
	inline LocationManager_t8BEF4C1AFA85AB524CFB93A28DF2478A26E27401 * get_manager_4() const { return ___manager_4; }
	inline LocationManager_t8BEF4C1AFA85AB524CFB93A28DF2478A26E27401 ** get_address_of_manager_4() { return &___manager_4; }
	inline void set_manager_4(LocationManager_t8BEF4C1AFA85AB524CFB93A28DF2478A26E27401 * value)
	{
		___manager_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___manager_4), (void*)value);
	}

	inline static int32_t get_offset_of_apiKey_5() { return static_cast<int32_t>(offsetof(IndoorAtlasSession_t481C53C3F6FF3CBB05117D2F9D20BCCE12FB511F, ___apiKey_5)); }
	inline String_t* get_apiKey_5() const { return ___apiKey_5; }
	inline String_t** get_address_of_apiKey_5() { return &___apiKey_5; }
	inline void set_apiKey_5(String_t* value)
	{
		___apiKey_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___apiKey_5), (void*)value);
	}

	inline static int32_t get_offset_of_apiSecret_6() { return static_cast<int32_t>(offsetof(IndoorAtlasSession_t481C53C3F6FF3CBB05117D2F9D20BCCE12FB511F, ___apiSecret_6)); }
	inline String_t* get_apiSecret_6() const { return ___apiSecret_6; }
	inline String_t** get_address_of_apiSecret_6() { return &___apiSecret_6; }
	inline void set_apiSecret_6(String_t* value)
	{
		___apiSecret_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___apiSecret_6), (void*)value);
	}

	inline static int32_t get_offset_of_apiEndpoint_7() { return static_cast<int32_t>(offsetof(IndoorAtlasSession_t481C53C3F6FF3CBB05117D2F9D20BCCE12FB511F, ___apiEndpoint_7)); }
	inline String_t* get_apiEndpoint_7() const { return ___apiEndpoint_7; }
	inline String_t** get_address_of_apiEndpoint_7() { return &___apiEndpoint_7; }
	inline void set_apiEndpoint_7(String_t* value)
	{
		___apiEndpoint_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___apiEndpoint_7), (void*)value);
	}

	inline static int32_t get_offset_of_m_distanceFilter_8() { return static_cast<int32_t>(offsetof(IndoorAtlasSession_t481C53C3F6FF3CBB05117D2F9D20BCCE12FB511F, ___m_distanceFilter_8)); }
	inline double get_m_distanceFilter_8() const { return ___m_distanceFilter_8; }
	inline double* get_address_of_m_distanceFilter_8() { return &___m_distanceFilter_8; }
	inline void set_m_distanceFilter_8(double value)
	{
		___m_distanceFilter_8 = value;
	}

	inline static int32_t get_offset_of_m_timeFilter_9() { return static_cast<int32_t>(offsetof(IndoorAtlasSession_t481C53C3F6FF3CBB05117D2F9D20BCCE12FB511F, ___m_timeFilter_9)); }
	inline double get_m_timeFilter_9() const { return ___m_timeFilter_9; }
	inline double* get_address_of_m_timeFilter_9() { return &___m_timeFilter_9; }
	inline void set_m_timeFilter_9(double value)
	{
		___m_timeFilter_9 = value;
	}

	inline static int32_t get_offset_of_m_headingFilter_10() { return static_cast<int32_t>(offsetof(IndoorAtlasSession_t481C53C3F6FF3CBB05117D2F9D20BCCE12FB511F, ___m_headingFilter_10)); }
	inline double get_m_headingFilter_10() const { return ___m_headingFilter_10; }
	inline double* get_address_of_m_headingFilter_10() { return &___m_headingFilter_10; }
	inline void set_m_headingFilter_10(double value)
	{
		___m_headingFilter_10 = value;
	}

	inline static int32_t get_offset_of_m_attitudeFilter_11() { return static_cast<int32_t>(offsetof(IndoorAtlasSession_t481C53C3F6FF3CBB05117D2F9D20BCCE12FB511F, ___m_attitudeFilter_11)); }
	inline double get_m_attitudeFilter_11() const { return ___m_attitudeFilter_11; }
	inline double* get_address_of_m_attitudeFilter_11() { return &___m_attitudeFilter_11; }
	inline void set_m_attitudeFilter_11(double value)
	{
		___m_attitudeFilter_11 = value;
	}
};


// IndoorAtlas.IndoorAtlasUIInformationProvider
struct  IndoorAtlasUIInformationProvider_t78A97B431F32A79E128252E349214170A053E060  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// IndoorAtlas.LocationManager IndoorAtlas.IndoorAtlasUIInformationProvider::manager
	LocationManager_t8BEF4C1AFA85AB524CFB93A28DF2478A26E27401 * ___manager_4;
	// IndoorAtlas.Region IndoorAtlas.IndoorAtlasUIInformationProvider::currentVenue
	Region_t68EA17CE90BDC22C15E4531418B3B123519AADEB * ___currentVenue_5;
	// UnityEngine.Events.UnityAction`1<System.Int32> IndoorAtlas.IndoorAtlasUIInformationProvider::poiAction
	UnityAction_1_t5CF46572372725E6225588C466A7AF5C8597AA79 * ___poiAction_6;
	// UnityEngine.UI.Text IndoorAtlas.IndoorAtlasUIInformationProvider::m_traceId
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___m_traceId_7;
	// UnityEngine.UI.Text IndoorAtlas.IndoorAtlasUIInformationProvider::m_region
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___m_region_8;
	// IndoorAtlas.IndoorAtlasARWayfinding IndoorAtlas.IndoorAtlasUIInformationProvider::m_wayfinder
	IndoorAtlasARWayfinding_tEC5C5F2513334FDA2BC5A261CB74E6E413413904 * ___m_wayfinder_9;
	// UnityEngine.UI.Dropdown IndoorAtlas.IndoorAtlasUIInformationProvider::m_poi
	Dropdown_t099F5232BB75810BC79EED6E27DDCED46C3BCD96 * ___m_poi_10;

public:
	inline static int32_t get_offset_of_manager_4() { return static_cast<int32_t>(offsetof(IndoorAtlasUIInformationProvider_t78A97B431F32A79E128252E349214170A053E060, ___manager_4)); }
	inline LocationManager_t8BEF4C1AFA85AB524CFB93A28DF2478A26E27401 * get_manager_4() const { return ___manager_4; }
	inline LocationManager_t8BEF4C1AFA85AB524CFB93A28DF2478A26E27401 ** get_address_of_manager_4() { return &___manager_4; }
	inline void set_manager_4(LocationManager_t8BEF4C1AFA85AB524CFB93A28DF2478A26E27401 * value)
	{
		___manager_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___manager_4), (void*)value);
	}

	inline static int32_t get_offset_of_currentVenue_5() { return static_cast<int32_t>(offsetof(IndoorAtlasUIInformationProvider_t78A97B431F32A79E128252E349214170A053E060, ___currentVenue_5)); }
	inline Region_t68EA17CE90BDC22C15E4531418B3B123519AADEB * get_currentVenue_5() const { return ___currentVenue_5; }
	inline Region_t68EA17CE90BDC22C15E4531418B3B123519AADEB ** get_address_of_currentVenue_5() { return &___currentVenue_5; }
	inline void set_currentVenue_5(Region_t68EA17CE90BDC22C15E4531418B3B123519AADEB * value)
	{
		___currentVenue_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___currentVenue_5), (void*)value);
	}

	inline static int32_t get_offset_of_poiAction_6() { return static_cast<int32_t>(offsetof(IndoorAtlasUIInformationProvider_t78A97B431F32A79E128252E349214170A053E060, ___poiAction_6)); }
	inline UnityAction_1_t5CF46572372725E6225588C466A7AF5C8597AA79 * get_poiAction_6() const { return ___poiAction_6; }
	inline UnityAction_1_t5CF46572372725E6225588C466A7AF5C8597AA79 ** get_address_of_poiAction_6() { return &___poiAction_6; }
	inline void set_poiAction_6(UnityAction_1_t5CF46572372725E6225588C466A7AF5C8597AA79 * value)
	{
		___poiAction_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___poiAction_6), (void*)value);
	}

	inline static int32_t get_offset_of_m_traceId_7() { return static_cast<int32_t>(offsetof(IndoorAtlasUIInformationProvider_t78A97B431F32A79E128252E349214170A053E060, ___m_traceId_7)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_m_traceId_7() const { return ___m_traceId_7; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_m_traceId_7() { return &___m_traceId_7; }
	inline void set_m_traceId_7(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___m_traceId_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_traceId_7), (void*)value);
	}

	inline static int32_t get_offset_of_m_region_8() { return static_cast<int32_t>(offsetof(IndoorAtlasUIInformationProvider_t78A97B431F32A79E128252E349214170A053E060, ___m_region_8)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_m_region_8() const { return ___m_region_8; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_m_region_8() { return &___m_region_8; }
	inline void set_m_region_8(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___m_region_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_region_8), (void*)value);
	}

	inline static int32_t get_offset_of_m_wayfinder_9() { return static_cast<int32_t>(offsetof(IndoorAtlasUIInformationProvider_t78A97B431F32A79E128252E349214170A053E060, ___m_wayfinder_9)); }
	inline IndoorAtlasARWayfinding_tEC5C5F2513334FDA2BC5A261CB74E6E413413904 * get_m_wayfinder_9() const { return ___m_wayfinder_9; }
	inline IndoorAtlasARWayfinding_tEC5C5F2513334FDA2BC5A261CB74E6E413413904 ** get_address_of_m_wayfinder_9() { return &___m_wayfinder_9; }
	inline void set_m_wayfinder_9(IndoorAtlasARWayfinding_tEC5C5F2513334FDA2BC5A261CB74E6E413413904 * value)
	{
		___m_wayfinder_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_wayfinder_9), (void*)value);
	}

	inline static int32_t get_offset_of_m_poi_10() { return static_cast<int32_t>(offsetof(IndoorAtlasUIInformationProvider_t78A97B431F32A79E128252E349214170A053E060, ___m_poi_10)); }
	inline Dropdown_t099F5232BB75810BC79EED6E27DDCED46C3BCD96 * get_m_poi_10() const { return ___m_poi_10; }
	inline Dropdown_t099F5232BB75810BC79EED6E27DDCED46C3BCD96 ** get_address_of_m_poi_10() { return &___m_poi_10; }
	inline void set_m_poi_10(Dropdown_t099F5232BB75810BC79EED6E27DDCED46C3BCD96 * value)
	{
		___m_poi_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_poi_10), (void*)value);
	}
};


// IndoorAtlas.IndoorAtlasVRCamera
struct  IndoorAtlasVRCamera_tD5776445679A7A38947F480DCF1D247EC494509C  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.Camera IndoorAtlas.IndoorAtlasVRCamera::m_camera
	Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * ___m_camera_4;

public:
	inline static int32_t get_offset_of_m_camera_4() { return static_cast<int32_t>(offsetof(IndoorAtlasVRCamera_tD5776445679A7A38947F480DCF1D247EC494509C, ___m_camera_4)); }
	inline Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * get_m_camera_4() const { return ___m_camera_4; }
	inline Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C ** get_address_of_m_camera_4() { return &___m_camera_4; }
	inline void set_m_camera_4(Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * value)
	{
		___m_camera_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_camera_4), (void*)value);
	}
};


// UnityEngine.EventSystems.UIBehaviour
struct  UIBehaviour_tD1C6E2D542222546D68510ECE74036EFBC3C3B0E  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:

public:
};


// UnityEngine.XR.ARFoundation.ARTrackableManager`5<UnityEngine.XR.ARSubsystems.XRPlaneSubsystem,UnityEngine.XR.ARSubsystems.XRPlaneSubsystemDescriptor,UnityEngine.XR.ARSubsystems.XRPlaneSubsystem/Provider,UnityEngine.XR.ARSubsystems.BoundedPlane,UnityEngine.XR.ARFoundation.ARPlane>
struct  ARTrackableManager_5_tB03CF7F1B5B39FA73203E7F2342207BD4FF540B7  : public SubsystemLifecycleManager_3_t0E334FAE91D54B85E9314C55C4CDCB207ED1BCC5
{
public:
	// UnityEngine.XR.ARFoundation.ARSessionOrigin UnityEngine.XR.ARFoundation.ARTrackableManager`5::<sessionOrigin>k__BackingField
	ARSessionOrigin_tA15648434106370D592D12C00B93054EC6CE6AE1 * ___U3CsessionOriginU3Ek__BackingField_7;
	// System.Collections.Generic.Dictionary`2<UnityEngine.XR.ARSubsystems.TrackableId,TTrackable> UnityEngine.XR.ARFoundation.ARTrackableManager`5::m_Trackables
	Dictionary_2_t712D6B074B6A493ABA07777BD08F1A62D9DE2534 * ___m_Trackables_8;
	// System.Collections.Generic.Dictionary`2<UnityEngine.XR.ARSubsystems.TrackableId,TTrackable> UnityEngine.XR.ARFoundation.ARTrackableManager`5::m_PendingAdds
	Dictionary_2_t712D6B074B6A493ABA07777BD08F1A62D9DE2534 * ___m_PendingAdds_9;

public:
	inline static int32_t get_offset_of_U3CsessionOriginU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(ARTrackableManager_5_tB03CF7F1B5B39FA73203E7F2342207BD4FF540B7, ___U3CsessionOriginU3Ek__BackingField_7)); }
	inline ARSessionOrigin_tA15648434106370D592D12C00B93054EC6CE6AE1 * get_U3CsessionOriginU3Ek__BackingField_7() const { return ___U3CsessionOriginU3Ek__BackingField_7; }
	inline ARSessionOrigin_tA15648434106370D592D12C00B93054EC6CE6AE1 ** get_address_of_U3CsessionOriginU3Ek__BackingField_7() { return &___U3CsessionOriginU3Ek__BackingField_7; }
	inline void set_U3CsessionOriginU3Ek__BackingField_7(ARSessionOrigin_tA15648434106370D592D12C00B93054EC6CE6AE1 * value)
	{
		___U3CsessionOriginU3Ek__BackingField_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CsessionOriginU3Ek__BackingField_7), (void*)value);
	}

	inline static int32_t get_offset_of_m_Trackables_8() { return static_cast<int32_t>(offsetof(ARTrackableManager_5_tB03CF7F1B5B39FA73203E7F2342207BD4FF540B7, ___m_Trackables_8)); }
	inline Dictionary_2_t712D6B074B6A493ABA07777BD08F1A62D9DE2534 * get_m_Trackables_8() const { return ___m_Trackables_8; }
	inline Dictionary_2_t712D6B074B6A493ABA07777BD08F1A62D9DE2534 ** get_address_of_m_Trackables_8() { return &___m_Trackables_8; }
	inline void set_m_Trackables_8(Dictionary_2_t712D6B074B6A493ABA07777BD08F1A62D9DE2534 * value)
	{
		___m_Trackables_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Trackables_8), (void*)value);
	}

	inline static int32_t get_offset_of_m_PendingAdds_9() { return static_cast<int32_t>(offsetof(ARTrackableManager_5_tB03CF7F1B5B39FA73203E7F2342207BD4FF540B7, ___m_PendingAdds_9)); }
	inline Dictionary_2_t712D6B074B6A493ABA07777BD08F1A62D9DE2534 * get_m_PendingAdds_9() const { return ___m_PendingAdds_9; }
	inline Dictionary_2_t712D6B074B6A493ABA07777BD08F1A62D9DE2534 ** get_address_of_m_PendingAdds_9() { return &___m_PendingAdds_9; }
	inline void set_m_PendingAdds_9(Dictionary_2_t712D6B074B6A493ABA07777BD08F1A62D9DE2534 * value)
	{
		___m_PendingAdds_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_PendingAdds_9), (void*)value);
	}
};

struct ARTrackableManager_5_tB03CF7F1B5B39FA73203E7F2342207BD4FF540B7_StaticFields
{
public:
	// System.Collections.Generic.List`1<TTrackable> UnityEngine.XR.ARFoundation.ARTrackableManager`5::s_Added
	List_1_t5B83F86DDCFED5733853B8CB94D674B62A54C276 * ___s_Added_10;
	// System.Collections.Generic.List`1<TTrackable> UnityEngine.XR.ARFoundation.ARTrackableManager`5::s_Updated
	List_1_t5B83F86DDCFED5733853B8CB94D674B62A54C276 * ___s_Updated_11;
	// System.Collections.Generic.List`1<TTrackable> UnityEngine.XR.ARFoundation.ARTrackableManager`5::s_Removed
	List_1_t5B83F86DDCFED5733853B8CB94D674B62A54C276 * ___s_Removed_12;

public:
	inline static int32_t get_offset_of_s_Added_10() { return static_cast<int32_t>(offsetof(ARTrackableManager_5_tB03CF7F1B5B39FA73203E7F2342207BD4FF540B7_StaticFields, ___s_Added_10)); }
	inline List_1_t5B83F86DDCFED5733853B8CB94D674B62A54C276 * get_s_Added_10() const { return ___s_Added_10; }
	inline List_1_t5B83F86DDCFED5733853B8CB94D674B62A54C276 ** get_address_of_s_Added_10() { return &___s_Added_10; }
	inline void set_s_Added_10(List_1_t5B83F86DDCFED5733853B8CB94D674B62A54C276 * value)
	{
		___s_Added_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Added_10), (void*)value);
	}

	inline static int32_t get_offset_of_s_Updated_11() { return static_cast<int32_t>(offsetof(ARTrackableManager_5_tB03CF7F1B5B39FA73203E7F2342207BD4FF540B7_StaticFields, ___s_Updated_11)); }
	inline List_1_t5B83F86DDCFED5733853B8CB94D674B62A54C276 * get_s_Updated_11() const { return ___s_Updated_11; }
	inline List_1_t5B83F86DDCFED5733853B8CB94D674B62A54C276 ** get_address_of_s_Updated_11() { return &___s_Updated_11; }
	inline void set_s_Updated_11(List_1_t5B83F86DDCFED5733853B8CB94D674B62A54C276 * value)
	{
		___s_Updated_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Updated_11), (void*)value);
	}

	inline static int32_t get_offset_of_s_Removed_12() { return static_cast<int32_t>(offsetof(ARTrackableManager_5_tB03CF7F1B5B39FA73203E7F2342207BD4FF540B7_StaticFields, ___s_Removed_12)); }
	inline List_1_t5B83F86DDCFED5733853B8CB94D674B62A54C276 * get_s_Removed_12() const { return ___s_Removed_12; }
	inline List_1_t5B83F86DDCFED5733853B8CB94D674B62A54C276 ** get_address_of_s_Removed_12() { return &___s_Removed_12; }
	inline void set_s_Removed_12(List_1_t5B83F86DDCFED5733853B8CB94D674B62A54C276 * value)
	{
		___s_Removed_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Removed_12), (void*)value);
	}
};


// UnityEngine.XR.ARFoundation.ARCameraManager
struct  ARCameraManager_tD802D88B523419FD1AC898539EE734DA20903874  : public SubsystemLifecycleManager_3_tC083C76968A3985FEAC936C1BBC3D5F306890A2C
{
public:
	// UnityEngine.XR.ARSubsystems.CameraFocusMode UnityEngine.XR.ARFoundation.ARCameraManager::m_FocusMode
	int32_t ___m_FocusMode_7;
	// UnityEngine.XR.ARSubsystems.LightEstimationMode UnityEngine.XR.ARFoundation.ARCameraManager::m_LightEstimationMode
	int32_t ___m_LightEstimationMode_8;
	// System.Boolean UnityEngine.XR.ARFoundation.ARCameraManager::m_AutoFocus
	bool ___m_AutoFocus_9;
	// UnityEngine.XR.ARFoundation.LightEstimation UnityEngine.XR.ARFoundation.ARCameraManager::m_LightEstimation
	int32_t ___m_LightEstimation_10;
	// UnityEngine.XR.ARFoundation.CameraFacingDirection UnityEngine.XR.ARFoundation.ARCameraManager::m_FacingDirection
	int32_t ___m_FacingDirection_11;
	// System.Action`1<UnityEngine.XR.ARFoundation.ARCameraFrameEventArgs> UnityEngine.XR.ARFoundation.ARCameraManager::frameReceived
	Action_1_tA34B23CE57B7192055F9BF04AA14FCCB2ED91C68 * ___frameReceived_12;
	// System.Collections.Generic.List`1<UnityEngine.XR.ARFoundation.ARTextureInfo> UnityEngine.XR.ARFoundation.ARCameraManager::m_TextureInfos
	List_1_t737CDD0B911D91DA30FC544763F10FFC47C3C74A * ___m_TextureInfos_15;
	// UnityEngine.Camera UnityEngine.XR.ARFoundation.ARCameraManager::m_Camera
	Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * ___m_Camera_16;
	// System.Boolean UnityEngine.XR.ARFoundation.ARCameraManager::m_PreRenderInvertCullingValue
	bool ___m_PreRenderInvertCullingValue_17;
	// UnityEngine.XR.ARFoundation.ARTextureInfo UnityEngine.XR.ARFoundation.ARCameraManager::m_CameraGrainInfo
	ARTextureInfo_t081B3396E755CC95C37B7BA68075F5DBEF36B355  ___m_CameraGrainInfo_18;

public:
	inline static int32_t get_offset_of_m_FocusMode_7() { return static_cast<int32_t>(offsetof(ARCameraManager_tD802D88B523419FD1AC898539EE734DA20903874, ___m_FocusMode_7)); }
	inline int32_t get_m_FocusMode_7() const { return ___m_FocusMode_7; }
	inline int32_t* get_address_of_m_FocusMode_7() { return &___m_FocusMode_7; }
	inline void set_m_FocusMode_7(int32_t value)
	{
		___m_FocusMode_7 = value;
	}

	inline static int32_t get_offset_of_m_LightEstimationMode_8() { return static_cast<int32_t>(offsetof(ARCameraManager_tD802D88B523419FD1AC898539EE734DA20903874, ___m_LightEstimationMode_8)); }
	inline int32_t get_m_LightEstimationMode_8() const { return ___m_LightEstimationMode_8; }
	inline int32_t* get_address_of_m_LightEstimationMode_8() { return &___m_LightEstimationMode_8; }
	inline void set_m_LightEstimationMode_8(int32_t value)
	{
		___m_LightEstimationMode_8 = value;
	}

	inline static int32_t get_offset_of_m_AutoFocus_9() { return static_cast<int32_t>(offsetof(ARCameraManager_tD802D88B523419FD1AC898539EE734DA20903874, ___m_AutoFocus_9)); }
	inline bool get_m_AutoFocus_9() const { return ___m_AutoFocus_9; }
	inline bool* get_address_of_m_AutoFocus_9() { return &___m_AutoFocus_9; }
	inline void set_m_AutoFocus_9(bool value)
	{
		___m_AutoFocus_9 = value;
	}

	inline static int32_t get_offset_of_m_LightEstimation_10() { return static_cast<int32_t>(offsetof(ARCameraManager_tD802D88B523419FD1AC898539EE734DA20903874, ___m_LightEstimation_10)); }
	inline int32_t get_m_LightEstimation_10() const { return ___m_LightEstimation_10; }
	inline int32_t* get_address_of_m_LightEstimation_10() { return &___m_LightEstimation_10; }
	inline void set_m_LightEstimation_10(int32_t value)
	{
		___m_LightEstimation_10 = value;
	}

	inline static int32_t get_offset_of_m_FacingDirection_11() { return static_cast<int32_t>(offsetof(ARCameraManager_tD802D88B523419FD1AC898539EE734DA20903874, ___m_FacingDirection_11)); }
	inline int32_t get_m_FacingDirection_11() const { return ___m_FacingDirection_11; }
	inline int32_t* get_address_of_m_FacingDirection_11() { return &___m_FacingDirection_11; }
	inline void set_m_FacingDirection_11(int32_t value)
	{
		___m_FacingDirection_11 = value;
	}

	inline static int32_t get_offset_of_frameReceived_12() { return static_cast<int32_t>(offsetof(ARCameraManager_tD802D88B523419FD1AC898539EE734DA20903874, ___frameReceived_12)); }
	inline Action_1_tA34B23CE57B7192055F9BF04AA14FCCB2ED91C68 * get_frameReceived_12() const { return ___frameReceived_12; }
	inline Action_1_tA34B23CE57B7192055F9BF04AA14FCCB2ED91C68 ** get_address_of_frameReceived_12() { return &___frameReceived_12; }
	inline void set_frameReceived_12(Action_1_tA34B23CE57B7192055F9BF04AA14FCCB2ED91C68 * value)
	{
		___frameReceived_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___frameReceived_12), (void*)value);
	}

	inline static int32_t get_offset_of_m_TextureInfos_15() { return static_cast<int32_t>(offsetof(ARCameraManager_tD802D88B523419FD1AC898539EE734DA20903874, ___m_TextureInfos_15)); }
	inline List_1_t737CDD0B911D91DA30FC544763F10FFC47C3C74A * get_m_TextureInfos_15() const { return ___m_TextureInfos_15; }
	inline List_1_t737CDD0B911D91DA30FC544763F10FFC47C3C74A ** get_address_of_m_TextureInfos_15() { return &___m_TextureInfos_15; }
	inline void set_m_TextureInfos_15(List_1_t737CDD0B911D91DA30FC544763F10FFC47C3C74A * value)
	{
		___m_TextureInfos_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TextureInfos_15), (void*)value);
	}

	inline static int32_t get_offset_of_m_Camera_16() { return static_cast<int32_t>(offsetof(ARCameraManager_tD802D88B523419FD1AC898539EE734DA20903874, ___m_Camera_16)); }
	inline Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * get_m_Camera_16() const { return ___m_Camera_16; }
	inline Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C ** get_address_of_m_Camera_16() { return &___m_Camera_16; }
	inline void set_m_Camera_16(Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * value)
	{
		___m_Camera_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Camera_16), (void*)value);
	}

	inline static int32_t get_offset_of_m_PreRenderInvertCullingValue_17() { return static_cast<int32_t>(offsetof(ARCameraManager_tD802D88B523419FD1AC898539EE734DA20903874, ___m_PreRenderInvertCullingValue_17)); }
	inline bool get_m_PreRenderInvertCullingValue_17() const { return ___m_PreRenderInvertCullingValue_17; }
	inline bool* get_address_of_m_PreRenderInvertCullingValue_17() { return &___m_PreRenderInvertCullingValue_17; }
	inline void set_m_PreRenderInvertCullingValue_17(bool value)
	{
		___m_PreRenderInvertCullingValue_17 = value;
	}

	inline static int32_t get_offset_of_m_CameraGrainInfo_18() { return static_cast<int32_t>(offsetof(ARCameraManager_tD802D88B523419FD1AC898539EE734DA20903874, ___m_CameraGrainInfo_18)); }
	inline ARTextureInfo_t081B3396E755CC95C37B7BA68075F5DBEF36B355  get_m_CameraGrainInfo_18() const { return ___m_CameraGrainInfo_18; }
	inline ARTextureInfo_t081B3396E755CC95C37B7BA68075F5DBEF36B355 * get_address_of_m_CameraGrainInfo_18() { return &___m_CameraGrainInfo_18; }
	inline void set_m_CameraGrainInfo_18(ARTextureInfo_t081B3396E755CC95C37B7BA68075F5DBEF36B355  value)
	{
		___m_CameraGrainInfo_18 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_CameraGrainInfo_18))->___m_Texture_2), (void*)NULL);
	}
};

struct ARCameraManager_tD802D88B523419FD1AC898539EE734DA20903874_StaticFields
{
public:
	// System.Collections.Generic.List`1<UnityEngine.Texture2D> UnityEngine.XR.ARFoundation.ARCameraManager::s_Textures
	List_1_t67CA4414F3746D817D6D1A1D16FD9E7C85CED2D7 * ___s_Textures_13;
	// System.Collections.Generic.List`1<System.Int32> UnityEngine.XR.ARFoundation.ARCameraManager::s_PropertyIds
	List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * ___s_PropertyIds_14;

public:
	inline static int32_t get_offset_of_s_Textures_13() { return static_cast<int32_t>(offsetof(ARCameraManager_tD802D88B523419FD1AC898539EE734DA20903874_StaticFields, ___s_Textures_13)); }
	inline List_1_t67CA4414F3746D817D6D1A1D16FD9E7C85CED2D7 * get_s_Textures_13() const { return ___s_Textures_13; }
	inline List_1_t67CA4414F3746D817D6D1A1D16FD9E7C85CED2D7 ** get_address_of_s_Textures_13() { return &___s_Textures_13; }
	inline void set_s_Textures_13(List_1_t67CA4414F3746D817D6D1A1D16FD9E7C85CED2D7 * value)
	{
		___s_Textures_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Textures_13), (void*)value);
	}

	inline static int32_t get_offset_of_s_PropertyIds_14() { return static_cast<int32_t>(offsetof(ARCameraManager_tD802D88B523419FD1AC898539EE734DA20903874_StaticFields, ___s_PropertyIds_14)); }
	inline List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * get_s_PropertyIds_14() const { return ___s_PropertyIds_14; }
	inline List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 ** get_address_of_s_PropertyIds_14() { return &___s_PropertyIds_14; }
	inline void set_s_PropertyIds_14(List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * value)
	{
		___s_PropertyIds_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_PropertyIds_14), (void*)value);
	}
};


// UnityEngine.XR.ARFoundation.ARPlane
struct  ARPlane_t6336725EC68CE9029844CBE72A7FE7374AD74891  : public ARTrackable_2_t3B4BDEC1C83B6E52F03E653C10343E488761AF0B
{
public:
	// System.Single UnityEngine.XR.ARFoundation.ARPlane::m_VertexChangedThreshold
	float ___m_VertexChangedThreshold_7;
	// System.Action`1<UnityEngine.XR.ARFoundation.ARPlaneBoundaryChangedEventArgs> UnityEngine.XR.ARFoundation.ARPlane::boundaryChanged
	Action_1_tBBDACDE0F7A9CD846DD9E0B8E74D5E0CC3D6B593 * ___boundaryChanged_8;
	// UnityEngine.XR.ARFoundation.ARPlane UnityEngine.XR.ARFoundation.ARPlane::<subsumedBy>k__BackingField
	ARPlane_t6336725EC68CE9029844CBE72A7FE7374AD74891 * ___U3CsubsumedByU3Ek__BackingField_9;
	// Unity.Collections.NativeArray`1<UnityEngine.Vector2> UnityEngine.XR.ARFoundation.ARPlane::m_Boundary
	NativeArray_1_t431C85F30275831D1F5D458AB73DFCE050693BC0  ___m_Boundary_10;
	// Unity.Collections.NativeArray`1<UnityEngine.Vector2> UnityEngine.XR.ARFoundation.ARPlane::m_OldBoundary
	NativeArray_1_t431C85F30275831D1F5D458AB73DFCE050693BC0  ___m_OldBoundary_11;
	// System.Boolean UnityEngine.XR.ARFoundation.ARPlane::m_HasBoundaryChanged
	bool ___m_HasBoundaryChanged_12;

public:
	inline static int32_t get_offset_of_m_VertexChangedThreshold_7() { return static_cast<int32_t>(offsetof(ARPlane_t6336725EC68CE9029844CBE72A7FE7374AD74891, ___m_VertexChangedThreshold_7)); }
	inline float get_m_VertexChangedThreshold_7() const { return ___m_VertexChangedThreshold_7; }
	inline float* get_address_of_m_VertexChangedThreshold_7() { return &___m_VertexChangedThreshold_7; }
	inline void set_m_VertexChangedThreshold_7(float value)
	{
		___m_VertexChangedThreshold_7 = value;
	}

	inline static int32_t get_offset_of_boundaryChanged_8() { return static_cast<int32_t>(offsetof(ARPlane_t6336725EC68CE9029844CBE72A7FE7374AD74891, ___boundaryChanged_8)); }
	inline Action_1_tBBDACDE0F7A9CD846DD9E0B8E74D5E0CC3D6B593 * get_boundaryChanged_8() const { return ___boundaryChanged_8; }
	inline Action_1_tBBDACDE0F7A9CD846DD9E0B8E74D5E0CC3D6B593 ** get_address_of_boundaryChanged_8() { return &___boundaryChanged_8; }
	inline void set_boundaryChanged_8(Action_1_tBBDACDE0F7A9CD846DD9E0B8E74D5E0CC3D6B593 * value)
	{
		___boundaryChanged_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___boundaryChanged_8), (void*)value);
	}

	inline static int32_t get_offset_of_U3CsubsumedByU3Ek__BackingField_9() { return static_cast<int32_t>(offsetof(ARPlane_t6336725EC68CE9029844CBE72A7FE7374AD74891, ___U3CsubsumedByU3Ek__BackingField_9)); }
	inline ARPlane_t6336725EC68CE9029844CBE72A7FE7374AD74891 * get_U3CsubsumedByU3Ek__BackingField_9() const { return ___U3CsubsumedByU3Ek__BackingField_9; }
	inline ARPlane_t6336725EC68CE9029844CBE72A7FE7374AD74891 ** get_address_of_U3CsubsumedByU3Ek__BackingField_9() { return &___U3CsubsumedByU3Ek__BackingField_9; }
	inline void set_U3CsubsumedByU3Ek__BackingField_9(ARPlane_t6336725EC68CE9029844CBE72A7FE7374AD74891 * value)
	{
		___U3CsubsumedByU3Ek__BackingField_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CsubsumedByU3Ek__BackingField_9), (void*)value);
	}

	inline static int32_t get_offset_of_m_Boundary_10() { return static_cast<int32_t>(offsetof(ARPlane_t6336725EC68CE9029844CBE72A7FE7374AD74891, ___m_Boundary_10)); }
	inline NativeArray_1_t431C85F30275831D1F5D458AB73DFCE050693BC0  get_m_Boundary_10() const { return ___m_Boundary_10; }
	inline NativeArray_1_t431C85F30275831D1F5D458AB73DFCE050693BC0 * get_address_of_m_Boundary_10() { return &___m_Boundary_10; }
	inline void set_m_Boundary_10(NativeArray_1_t431C85F30275831D1F5D458AB73DFCE050693BC0  value)
	{
		___m_Boundary_10 = value;
	}

	inline static int32_t get_offset_of_m_OldBoundary_11() { return static_cast<int32_t>(offsetof(ARPlane_t6336725EC68CE9029844CBE72A7FE7374AD74891, ___m_OldBoundary_11)); }
	inline NativeArray_1_t431C85F30275831D1F5D458AB73DFCE050693BC0  get_m_OldBoundary_11() const { return ___m_OldBoundary_11; }
	inline NativeArray_1_t431C85F30275831D1F5D458AB73DFCE050693BC0 * get_address_of_m_OldBoundary_11() { return &___m_OldBoundary_11; }
	inline void set_m_OldBoundary_11(NativeArray_1_t431C85F30275831D1F5D458AB73DFCE050693BC0  value)
	{
		___m_OldBoundary_11 = value;
	}

	inline static int32_t get_offset_of_m_HasBoundaryChanged_12() { return static_cast<int32_t>(offsetof(ARPlane_t6336725EC68CE9029844CBE72A7FE7374AD74891, ___m_HasBoundaryChanged_12)); }
	inline bool get_m_HasBoundaryChanged_12() const { return ___m_HasBoundaryChanged_12; }
	inline bool* get_address_of_m_HasBoundaryChanged_12() { return &___m_HasBoundaryChanged_12; }
	inline void set_m_HasBoundaryChanged_12(bool value)
	{
		___m_HasBoundaryChanged_12 = value;
	}
};


// UnityEngine.XR.ARFoundation.ARSession
struct  ARSession_t0ECAFEF41CF9183D33E40174F849B07943DC5D3B  : public SubsystemLifecycleManager_3_tE412F7818499B8C9886AA713B6FD9F15DC2BBAFD
{
public:
	// System.Boolean UnityEngine.XR.ARFoundation.ARSession::m_AttemptUpdate
	bool ___m_AttemptUpdate_7;
	// System.Boolean UnityEngine.XR.ARFoundation.ARSession::m_MatchFrameRate
	bool ___m_MatchFrameRate_8;
	// UnityEngine.XR.ARFoundation.TrackingMode UnityEngine.XR.ARFoundation.ARSession::m_TrackingMode
	int32_t ___m_TrackingMode_9;

public:
	inline static int32_t get_offset_of_m_AttemptUpdate_7() { return static_cast<int32_t>(offsetof(ARSession_t0ECAFEF41CF9183D33E40174F849B07943DC5D3B, ___m_AttemptUpdate_7)); }
	inline bool get_m_AttemptUpdate_7() const { return ___m_AttemptUpdate_7; }
	inline bool* get_address_of_m_AttemptUpdate_7() { return &___m_AttemptUpdate_7; }
	inline void set_m_AttemptUpdate_7(bool value)
	{
		___m_AttemptUpdate_7 = value;
	}

	inline static int32_t get_offset_of_m_MatchFrameRate_8() { return static_cast<int32_t>(offsetof(ARSession_t0ECAFEF41CF9183D33E40174F849B07943DC5D3B, ___m_MatchFrameRate_8)); }
	inline bool get_m_MatchFrameRate_8() const { return ___m_MatchFrameRate_8; }
	inline bool* get_address_of_m_MatchFrameRate_8() { return &___m_MatchFrameRate_8; }
	inline void set_m_MatchFrameRate_8(bool value)
	{
		___m_MatchFrameRate_8 = value;
	}

	inline static int32_t get_offset_of_m_TrackingMode_9() { return static_cast<int32_t>(offsetof(ARSession_t0ECAFEF41CF9183D33E40174F849B07943DC5D3B, ___m_TrackingMode_9)); }
	inline int32_t get_m_TrackingMode_9() const { return ___m_TrackingMode_9; }
	inline int32_t* get_address_of_m_TrackingMode_9() { return &___m_TrackingMode_9; }
	inline void set_m_TrackingMode_9(int32_t value)
	{
		___m_TrackingMode_9 = value;
	}
};

struct ARSession_t0ECAFEF41CF9183D33E40174F849B07943DC5D3B_StaticFields
{
public:
	// System.Action`1<UnityEngine.XR.ARFoundation.ARSessionStateChangedEventArgs> UnityEngine.XR.ARFoundation.ARSession::stateChanged
	Action_1_t5DF84322FFE12A24465E48164961CD724D109521 * ___stateChanged_10;
	// UnityEngine.XR.ARFoundation.ARSessionState UnityEngine.XR.ARFoundation.ARSession::s_State
	int32_t ___s_State_11;
	// UnityEngine.XR.ARSubsystems.NotTrackingReason UnityEngine.XR.ARFoundation.ARSession::s_NotTrackingReason
	int32_t ___s_NotTrackingReason_12;
	// UnityEngine.XR.ARSubsystems.SessionAvailability UnityEngine.XR.ARFoundation.ARSession::s_Availability
	int32_t ___s_Availability_13;

public:
	inline static int32_t get_offset_of_stateChanged_10() { return static_cast<int32_t>(offsetof(ARSession_t0ECAFEF41CF9183D33E40174F849B07943DC5D3B_StaticFields, ___stateChanged_10)); }
	inline Action_1_t5DF84322FFE12A24465E48164961CD724D109521 * get_stateChanged_10() const { return ___stateChanged_10; }
	inline Action_1_t5DF84322FFE12A24465E48164961CD724D109521 ** get_address_of_stateChanged_10() { return &___stateChanged_10; }
	inline void set_stateChanged_10(Action_1_t5DF84322FFE12A24465E48164961CD724D109521 * value)
	{
		___stateChanged_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___stateChanged_10), (void*)value);
	}

	inline static int32_t get_offset_of_s_State_11() { return static_cast<int32_t>(offsetof(ARSession_t0ECAFEF41CF9183D33E40174F849B07943DC5D3B_StaticFields, ___s_State_11)); }
	inline int32_t get_s_State_11() const { return ___s_State_11; }
	inline int32_t* get_address_of_s_State_11() { return &___s_State_11; }
	inline void set_s_State_11(int32_t value)
	{
		___s_State_11 = value;
	}

	inline static int32_t get_offset_of_s_NotTrackingReason_12() { return static_cast<int32_t>(offsetof(ARSession_t0ECAFEF41CF9183D33E40174F849B07943DC5D3B_StaticFields, ___s_NotTrackingReason_12)); }
	inline int32_t get_s_NotTrackingReason_12() const { return ___s_NotTrackingReason_12; }
	inline int32_t* get_address_of_s_NotTrackingReason_12() { return &___s_NotTrackingReason_12; }
	inline void set_s_NotTrackingReason_12(int32_t value)
	{
		___s_NotTrackingReason_12 = value;
	}

	inline static int32_t get_offset_of_s_Availability_13() { return static_cast<int32_t>(offsetof(ARSession_t0ECAFEF41CF9183D33E40174F849B07943DC5D3B_StaticFields, ___s_Availability_13)); }
	inline int32_t get_s_Availability_13() const { return ___s_Availability_13; }
	inline int32_t* get_address_of_s_Availability_13() { return &___s_Availability_13; }
	inline void set_s_Availability_13(int32_t value)
	{
		___s_Availability_13 = value;
	}
};


// UnityEngine.UI.Graphic
struct  Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24  : public UIBehaviour_tD1C6E2D542222546D68510ECE74036EFBC3C3B0E
{
public:
	// UnityEngine.Material UnityEngine.UI.Graphic::m_Material
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___m_Material_6;
	// UnityEngine.Color UnityEngine.UI.Graphic::m_Color
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_Color_7;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipLayoutUpdate
	bool ___m_SkipLayoutUpdate_8;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipMaterialUpdate
	bool ___m_SkipMaterialUpdate_9;
	// System.Boolean UnityEngine.UI.Graphic::m_RaycastTarget
	bool ___m_RaycastTarget_10;
	// UnityEngine.Vector4 UnityEngine.UI.Graphic::m_RaycastPadding
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___m_RaycastPadding_11;
	// UnityEngine.RectTransform UnityEngine.UI.Graphic::m_RectTransform
	RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * ___m_RectTransform_12;
	// UnityEngine.CanvasRenderer UnityEngine.UI.Graphic::m_CanvasRenderer
	CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E * ___m_CanvasRenderer_13;
	// UnityEngine.Canvas UnityEngine.UI.Graphic::m_Canvas
	Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * ___m_Canvas_14;
	// System.Boolean UnityEngine.UI.Graphic::m_VertsDirty
	bool ___m_VertsDirty_15;
	// System.Boolean UnityEngine.UI.Graphic::m_MaterialDirty
	bool ___m_MaterialDirty_16;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyLayoutCallback
	UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * ___m_OnDirtyLayoutCallback_17;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyVertsCallback
	UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * ___m_OnDirtyVertsCallback_18;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyMaterialCallback
	UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * ___m_OnDirtyMaterialCallback_19;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::m_CachedMesh
	Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * ___m_CachedMesh_22;
	// UnityEngine.Vector2[] UnityEngine.UI.Graphic::m_CachedUvs
	Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* ___m_CachedUvs_23;
	// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween> UnityEngine.UI.Graphic::m_ColorTweenRunner
	TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3 * ___m_ColorTweenRunner_24;
	// System.Boolean UnityEngine.UI.Graphic::<useLegacyMeshGeneration>k__BackingField
	bool ___U3CuseLegacyMeshGenerationU3Ek__BackingField_25;

public:
	inline static int32_t get_offset_of_m_Material_6() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_Material_6)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_m_Material_6() const { return ___m_Material_6; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_m_Material_6() { return &___m_Material_6; }
	inline void set_m_Material_6(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___m_Material_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Material_6), (void*)value);
	}

	inline static int32_t get_offset_of_m_Color_7() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_Color_7)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_m_Color_7() const { return ___m_Color_7; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_m_Color_7() { return &___m_Color_7; }
	inline void set_m_Color_7(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___m_Color_7 = value;
	}

	inline static int32_t get_offset_of_m_SkipLayoutUpdate_8() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_SkipLayoutUpdate_8)); }
	inline bool get_m_SkipLayoutUpdate_8() const { return ___m_SkipLayoutUpdate_8; }
	inline bool* get_address_of_m_SkipLayoutUpdate_8() { return &___m_SkipLayoutUpdate_8; }
	inline void set_m_SkipLayoutUpdate_8(bool value)
	{
		___m_SkipLayoutUpdate_8 = value;
	}

	inline static int32_t get_offset_of_m_SkipMaterialUpdate_9() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_SkipMaterialUpdate_9)); }
	inline bool get_m_SkipMaterialUpdate_9() const { return ___m_SkipMaterialUpdate_9; }
	inline bool* get_address_of_m_SkipMaterialUpdate_9() { return &___m_SkipMaterialUpdate_9; }
	inline void set_m_SkipMaterialUpdate_9(bool value)
	{
		___m_SkipMaterialUpdate_9 = value;
	}

	inline static int32_t get_offset_of_m_RaycastTarget_10() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_RaycastTarget_10)); }
	inline bool get_m_RaycastTarget_10() const { return ___m_RaycastTarget_10; }
	inline bool* get_address_of_m_RaycastTarget_10() { return &___m_RaycastTarget_10; }
	inline void set_m_RaycastTarget_10(bool value)
	{
		___m_RaycastTarget_10 = value;
	}

	inline static int32_t get_offset_of_m_RaycastPadding_11() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_RaycastPadding_11)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_m_RaycastPadding_11() const { return ___m_RaycastPadding_11; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_m_RaycastPadding_11() { return &___m_RaycastPadding_11; }
	inline void set_m_RaycastPadding_11(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___m_RaycastPadding_11 = value;
	}

	inline static int32_t get_offset_of_m_RectTransform_12() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_RectTransform_12)); }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * get_m_RectTransform_12() const { return ___m_RectTransform_12; }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 ** get_address_of_m_RectTransform_12() { return &___m_RectTransform_12; }
	inline void set_m_RectTransform_12(RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * value)
	{
		___m_RectTransform_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_RectTransform_12), (void*)value);
	}

	inline static int32_t get_offset_of_m_CanvasRenderer_13() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_CanvasRenderer_13)); }
	inline CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E * get_m_CanvasRenderer_13() const { return ___m_CanvasRenderer_13; }
	inline CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E ** get_address_of_m_CanvasRenderer_13() { return &___m_CanvasRenderer_13; }
	inline void set_m_CanvasRenderer_13(CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E * value)
	{
		___m_CanvasRenderer_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CanvasRenderer_13), (void*)value);
	}

	inline static int32_t get_offset_of_m_Canvas_14() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_Canvas_14)); }
	inline Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * get_m_Canvas_14() const { return ___m_Canvas_14; }
	inline Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA ** get_address_of_m_Canvas_14() { return &___m_Canvas_14; }
	inline void set_m_Canvas_14(Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * value)
	{
		___m_Canvas_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Canvas_14), (void*)value);
	}

	inline static int32_t get_offset_of_m_VertsDirty_15() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_VertsDirty_15)); }
	inline bool get_m_VertsDirty_15() const { return ___m_VertsDirty_15; }
	inline bool* get_address_of_m_VertsDirty_15() { return &___m_VertsDirty_15; }
	inline void set_m_VertsDirty_15(bool value)
	{
		___m_VertsDirty_15 = value;
	}

	inline static int32_t get_offset_of_m_MaterialDirty_16() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_MaterialDirty_16)); }
	inline bool get_m_MaterialDirty_16() const { return ___m_MaterialDirty_16; }
	inline bool* get_address_of_m_MaterialDirty_16() { return &___m_MaterialDirty_16; }
	inline void set_m_MaterialDirty_16(bool value)
	{
		___m_MaterialDirty_16 = value;
	}

	inline static int32_t get_offset_of_m_OnDirtyLayoutCallback_17() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_OnDirtyLayoutCallback_17)); }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * get_m_OnDirtyLayoutCallback_17() const { return ___m_OnDirtyLayoutCallback_17; }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 ** get_address_of_m_OnDirtyLayoutCallback_17() { return &___m_OnDirtyLayoutCallback_17; }
	inline void set_m_OnDirtyLayoutCallback_17(UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * value)
	{
		___m_OnDirtyLayoutCallback_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnDirtyLayoutCallback_17), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnDirtyVertsCallback_18() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_OnDirtyVertsCallback_18)); }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * get_m_OnDirtyVertsCallback_18() const { return ___m_OnDirtyVertsCallback_18; }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 ** get_address_of_m_OnDirtyVertsCallback_18() { return &___m_OnDirtyVertsCallback_18; }
	inline void set_m_OnDirtyVertsCallback_18(UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * value)
	{
		___m_OnDirtyVertsCallback_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnDirtyVertsCallback_18), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnDirtyMaterialCallback_19() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_OnDirtyMaterialCallback_19)); }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * get_m_OnDirtyMaterialCallback_19() const { return ___m_OnDirtyMaterialCallback_19; }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 ** get_address_of_m_OnDirtyMaterialCallback_19() { return &___m_OnDirtyMaterialCallback_19; }
	inline void set_m_OnDirtyMaterialCallback_19(UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * value)
	{
		___m_OnDirtyMaterialCallback_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnDirtyMaterialCallback_19), (void*)value);
	}

	inline static int32_t get_offset_of_m_CachedMesh_22() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_CachedMesh_22)); }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * get_m_CachedMesh_22() const { return ___m_CachedMesh_22; }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 ** get_address_of_m_CachedMesh_22() { return &___m_CachedMesh_22; }
	inline void set_m_CachedMesh_22(Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * value)
	{
		___m_CachedMesh_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CachedMesh_22), (void*)value);
	}

	inline static int32_t get_offset_of_m_CachedUvs_23() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_CachedUvs_23)); }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* get_m_CachedUvs_23() const { return ___m_CachedUvs_23; }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA** get_address_of_m_CachedUvs_23() { return &___m_CachedUvs_23; }
	inline void set_m_CachedUvs_23(Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* value)
	{
		___m_CachedUvs_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CachedUvs_23), (void*)value);
	}

	inline static int32_t get_offset_of_m_ColorTweenRunner_24() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_ColorTweenRunner_24)); }
	inline TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3 * get_m_ColorTweenRunner_24() const { return ___m_ColorTweenRunner_24; }
	inline TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3 ** get_address_of_m_ColorTweenRunner_24() { return &___m_ColorTweenRunner_24; }
	inline void set_m_ColorTweenRunner_24(TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3 * value)
	{
		___m_ColorTweenRunner_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ColorTweenRunner_24), (void*)value);
	}

	inline static int32_t get_offset_of_U3CuseLegacyMeshGenerationU3Ek__BackingField_25() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___U3CuseLegacyMeshGenerationU3Ek__BackingField_25)); }
	inline bool get_U3CuseLegacyMeshGenerationU3Ek__BackingField_25() const { return ___U3CuseLegacyMeshGenerationU3Ek__BackingField_25; }
	inline bool* get_address_of_U3CuseLegacyMeshGenerationU3Ek__BackingField_25() { return &___U3CuseLegacyMeshGenerationU3Ek__BackingField_25; }
	inline void set_U3CuseLegacyMeshGenerationU3Ek__BackingField_25(bool value)
	{
		___U3CuseLegacyMeshGenerationU3Ek__BackingField_25 = value;
	}
};

struct Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields
{
public:
	// UnityEngine.Material UnityEngine.UI.Graphic::s_DefaultUI
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___s_DefaultUI_4;
	// UnityEngine.Texture2D UnityEngine.UI.Graphic::s_WhiteTexture
	Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * ___s_WhiteTexture_5;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::s_Mesh
	Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * ___s_Mesh_20;
	// UnityEngine.UI.VertexHelper UnityEngine.UI.Graphic::s_VertexHelper
	VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55 * ___s_VertexHelper_21;

public:
	inline static int32_t get_offset_of_s_DefaultUI_4() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields, ___s_DefaultUI_4)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_s_DefaultUI_4() const { return ___s_DefaultUI_4; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_s_DefaultUI_4() { return &___s_DefaultUI_4; }
	inline void set_s_DefaultUI_4(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___s_DefaultUI_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_DefaultUI_4), (void*)value);
	}

	inline static int32_t get_offset_of_s_WhiteTexture_5() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields, ___s_WhiteTexture_5)); }
	inline Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * get_s_WhiteTexture_5() const { return ___s_WhiteTexture_5; }
	inline Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF ** get_address_of_s_WhiteTexture_5() { return &___s_WhiteTexture_5; }
	inline void set_s_WhiteTexture_5(Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * value)
	{
		___s_WhiteTexture_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_WhiteTexture_5), (void*)value);
	}

	inline static int32_t get_offset_of_s_Mesh_20() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields, ___s_Mesh_20)); }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * get_s_Mesh_20() const { return ___s_Mesh_20; }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 ** get_address_of_s_Mesh_20() { return &___s_Mesh_20; }
	inline void set_s_Mesh_20(Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * value)
	{
		___s_Mesh_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Mesh_20), (void*)value);
	}

	inline static int32_t get_offset_of_s_VertexHelper_21() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields, ___s_VertexHelper_21)); }
	inline VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55 * get_s_VertexHelper_21() const { return ___s_VertexHelper_21; }
	inline VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55 ** get_address_of_s_VertexHelper_21() { return &___s_VertexHelper_21; }
	inline void set_s_VertexHelper_21(VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55 * value)
	{
		___s_VertexHelper_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_VertexHelper_21), (void*)value);
	}
};


// UnityEngine.UI.Selectable
struct  Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD  : public UIBehaviour_tD1C6E2D542222546D68510ECE74036EFBC3C3B0E
{
public:
	// System.Boolean UnityEngine.UI.Selectable::m_EnableCalled
	bool ___m_EnableCalled_6;
	// UnityEngine.UI.Navigation UnityEngine.UI.Selectable::m_Navigation
	Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A  ___m_Navigation_7;
	// UnityEngine.UI.Selectable/Transition UnityEngine.UI.Selectable::m_Transition
	int32_t ___m_Transition_8;
	// UnityEngine.UI.ColorBlock UnityEngine.UI.Selectable::m_Colors
	ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955  ___m_Colors_9;
	// UnityEngine.UI.SpriteState UnityEngine.UI.Selectable::m_SpriteState
	SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E  ___m_SpriteState_10;
	// UnityEngine.UI.AnimationTriggers UnityEngine.UI.Selectable::m_AnimationTriggers
	AnimationTriggers_tF38CA7FA631709E096B57D732668D86081F44C11 * ___m_AnimationTriggers_11;
	// System.Boolean UnityEngine.UI.Selectable::m_Interactable
	bool ___m_Interactable_12;
	// UnityEngine.UI.Graphic UnityEngine.UI.Selectable::m_TargetGraphic
	Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24 * ___m_TargetGraphic_13;
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
	List_1_t34AA4AF4E7352129CA58045901530E41445AC16D * ___m_CanvasGroupCache_19;

public:
	inline static int32_t get_offset_of_m_EnableCalled_6() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_EnableCalled_6)); }
	inline bool get_m_EnableCalled_6() const { return ___m_EnableCalled_6; }
	inline bool* get_address_of_m_EnableCalled_6() { return &___m_EnableCalled_6; }
	inline void set_m_EnableCalled_6(bool value)
	{
		___m_EnableCalled_6 = value;
	}

	inline static int32_t get_offset_of_m_Navigation_7() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_Navigation_7)); }
	inline Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A  get_m_Navigation_7() const { return ___m_Navigation_7; }
	inline Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A * get_address_of_m_Navigation_7() { return &___m_Navigation_7; }
	inline void set_m_Navigation_7(Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A  value)
	{
		___m_Navigation_7 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Navigation_7))->___m_SelectOnUp_2), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Navigation_7))->___m_SelectOnDown_3), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Navigation_7))->___m_SelectOnLeft_4), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Navigation_7))->___m_SelectOnRight_5), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_Transition_8() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_Transition_8)); }
	inline int32_t get_m_Transition_8() const { return ___m_Transition_8; }
	inline int32_t* get_address_of_m_Transition_8() { return &___m_Transition_8; }
	inline void set_m_Transition_8(int32_t value)
	{
		___m_Transition_8 = value;
	}

	inline static int32_t get_offset_of_m_Colors_9() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_Colors_9)); }
	inline ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955  get_m_Colors_9() const { return ___m_Colors_9; }
	inline ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955 * get_address_of_m_Colors_9() { return &___m_Colors_9; }
	inline void set_m_Colors_9(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955  value)
	{
		___m_Colors_9 = value;
	}

	inline static int32_t get_offset_of_m_SpriteState_10() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_SpriteState_10)); }
	inline SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E  get_m_SpriteState_10() const { return ___m_SpriteState_10; }
	inline SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E * get_address_of_m_SpriteState_10() { return &___m_SpriteState_10; }
	inline void set_m_SpriteState_10(SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E  value)
	{
		___m_SpriteState_10 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SpriteState_10))->___m_HighlightedSprite_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SpriteState_10))->___m_PressedSprite_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SpriteState_10))->___m_SelectedSprite_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SpriteState_10))->___m_DisabledSprite_3), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_AnimationTriggers_11() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_AnimationTriggers_11)); }
	inline AnimationTriggers_tF38CA7FA631709E096B57D732668D86081F44C11 * get_m_AnimationTriggers_11() const { return ___m_AnimationTriggers_11; }
	inline AnimationTriggers_tF38CA7FA631709E096B57D732668D86081F44C11 ** get_address_of_m_AnimationTriggers_11() { return &___m_AnimationTriggers_11; }
	inline void set_m_AnimationTriggers_11(AnimationTriggers_tF38CA7FA631709E096B57D732668D86081F44C11 * value)
	{
		___m_AnimationTriggers_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_AnimationTriggers_11), (void*)value);
	}

	inline static int32_t get_offset_of_m_Interactable_12() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_Interactable_12)); }
	inline bool get_m_Interactable_12() const { return ___m_Interactable_12; }
	inline bool* get_address_of_m_Interactable_12() { return &___m_Interactable_12; }
	inline void set_m_Interactable_12(bool value)
	{
		___m_Interactable_12 = value;
	}

	inline static int32_t get_offset_of_m_TargetGraphic_13() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_TargetGraphic_13)); }
	inline Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24 * get_m_TargetGraphic_13() const { return ___m_TargetGraphic_13; }
	inline Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24 ** get_address_of_m_TargetGraphic_13() { return &___m_TargetGraphic_13; }
	inline void set_m_TargetGraphic_13(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24 * value)
	{
		___m_TargetGraphic_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TargetGraphic_13), (void*)value);
	}

	inline static int32_t get_offset_of_m_GroupsAllowInteraction_14() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_GroupsAllowInteraction_14)); }
	inline bool get_m_GroupsAllowInteraction_14() const { return ___m_GroupsAllowInteraction_14; }
	inline bool* get_address_of_m_GroupsAllowInteraction_14() { return &___m_GroupsAllowInteraction_14; }
	inline void set_m_GroupsAllowInteraction_14(bool value)
	{
		___m_GroupsAllowInteraction_14 = value;
	}

	inline static int32_t get_offset_of_m_CurrentIndex_15() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_CurrentIndex_15)); }
	inline int32_t get_m_CurrentIndex_15() const { return ___m_CurrentIndex_15; }
	inline int32_t* get_address_of_m_CurrentIndex_15() { return &___m_CurrentIndex_15; }
	inline void set_m_CurrentIndex_15(int32_t value)
	{
		___m_CurrentIndex_15 = value;
	}

	inline static int32_t get_offset_of_U3CisPointerInsideU3Ek__BackingField_16() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___U3CisPointerInsideU3Ek__BackingField_16)); }
	inline bool get_U3CisPointerInsideU3Ek__BackingField_16() const { return ___U3CisPointerInsideU3Ek__BackingField_16; }
	inline bool* get_address_of_U3CisPointerInsideU3Ek__BackingField_16() { return &___U3CisPointerInsideU3Ek__BackingField_16; }
	inline void set_U3CisPointerInsideU3Ek__BackingField_16(bool value)
	{
		___U3CisPointerInsideU3Ek__BackingField_16 = value;
	}

	inline static int32_t get_offset_of_U3CisPointerDownU3Ek__BackingField_17() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___U3CisPointerDownU3Ek__BackingField_17)); }
	inline bool get_U3CisPointerDownU3Ek__BackingField_17() const { return ___U3CisPointerDownU3Ek__BackingField_17; }
	inline bool* get_address_of_U3CisPointerDownU3Ek__BackingField_17() { return &___U3CisPointerDownU3Ek__BackingField_17; }
	inline void set_U3CisPointerDownU3Ek__BackingField_17(bool value)
	{
		___U3CisPointerDownU3Ek__BackingField_17 = value;
	}

	inline static int32_t get_offset_of_U3ChasSelectionU3Ek__BackingField_18() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___U3ChasSelectionU3Ek__BackingField_18)); }
	inline bool get_U3ChasSelectionU3Ek__BackingField_18() const { return ___U3ChasSelectionU3Ek__BackingField_18; }
	inline bool* get_address_of_U3ChasSelectionU3Ek__BackingField_18() { return &___U3ChasSelectionU3Ek__BackingField_18; }
	inline void set_U3ChasSelectionU3Ek__BackingField_18(bool value)
	{
		___U3ChasSelectionU3Ek__BackingField_18 = value;
	}

	inline static int32_t get_offset_of_m_CanvasGroupCache_19() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_CanvasGroupCache_19)); }
	inline List_1_t34AA4AF4E7352129CA58045901530E41445AC16D * get_m_CanvasGroupCache_19() const { return ___m_CanvasGroupCache_19; }
	inline List_1_t34AA4AF4E7352129CA58045901530E41445AC16D ** get_address_of_m_CanvasGroupCache_19() { return &___m_CanvasGroupCache_19; }
	inline void set_m_CanvasGroupCache_19(List_1_t34AA4AF4E7352129CA58045901530E41445AC16D * value)
	{
		___m_CanvasGroupCache_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CanvasGroupCache_19), (void*)value);
	}
};

struct Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD_StaticFields
{
public:
	// UnityEngine.UI.Selectable[] UnityEngine.UI.Selectable::s_Selectables
	SelectableU5BU5D_tECF9F5BDBF0652A937D18F10C883EFDAE2E62535* ___s_Selectables_4;
	// System.Int32 UnityEngine.UI.Selectable::s_SelectableCount
	int32_t ___s_SelectableCount_5;

public:
	inline static int32_t get_offset_of_s_Selectables_4() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD_StaticFields, ___s_Selectables_4)); }
	inline SelectableU5BU5D_tECF9F5BDBF0652A937D18F10C883EFDAE2E62535* get_s_Selectables_4() const { return ___s_Selectables_4; }
	inline SelectableU5BU5D_tECF9F5BDBF0652A937D18F10C883EFDAE2E62535** get_address_of_s_Selectables_4() { return &___s_Selectables_4; }
	inline void set_s_Selectables_4(SelectableU5BU5D_tECF9F5BDBF0652A937D18F10C883EFDAE2E62535* value)
	{
		___s_Selectables_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Selectables_4), (void*)value);
	}

	inline static int32_t get_offset_of_s_SelectableCount_5() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD_StaticFields, ___s_SelectableCount_5)); }
	inline int32_t get_s_SelectableCount_5() const { return ___s_SelectableCount_5; }
	inline int32_t* get_address_of_s_SelectableCount_5() { return &___s_SelectableCount_5; }
	inline void set_s_SelectableCount_5(int32_t value)
	{
		___s_SelectableCount_5 = value;
	}
};


// UnityEngine.XR.ARFoundation.ARPlaneManager
struct  ARPlaneManager_t4700B0BC3E8B6CD35F8D925701C89A5A21DDBAD4  : public ARTrackableManager_5_tB03CF7F1B5B39FA73203E7F2342207BD4FF540B7
{
public:
	// UnityEngine.GameObject UnityEngine.XR.ARFoundation.ARPlaneManager::m_PlanePrefab
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___m_PlanePrefab_13;
	// UnityEngine.XR.ARSubsystems.PlaneDetectionMode UnityEngine.XR.ARFoundation.ARPlaneManager::m_DetectionMode
	int32_t ___m_DetectionMode_14;
	// System.Action`1<UnityEngine.XR.ARFoundation.ARPlanesChangedEventArgs> UnityEngine.XR.ARFoundation.ARPlaneManager::planesChanged
	Action_1_tCEBED0DA57F23A7A92A05B380E69C5D67FEE4C25 * ___planesChanged_15;

public:
	inline static int32_t get_offset_of_m_PlanePrefab_13() { return static_cast<int32_t>(offsetof(ARPlaneManager_t4700B0BC3E8B6CD35F8D925701C89A5A21DDBAD4, ___m_PlanePrefab_13)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_m_PlanePrefab_13() const { return ___m_PlanePrefab_13; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_m_PlanePrefab_13() { return &___m_PlanePrefab_13; }
	inline void set_m_PlanePrefab_13(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___m_PlanePrefab_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_PlanePrefab_13), (void*)value);
	}

	inline static int32_t get_offset_of_m_DetectionMode_14() { return static_cast<int32_t>(offsetof(ARPlaneManager_t4700B0BC3E8B6CD35F8D925701C89A5A21DDBAD4, ___m_DetectionMode_14)); }
	inline int32_t get_m_DetectionMode_14() const { return ___m_DetectionMode_14; }
	inline int32_t* get_address_of_m_DetectionMode_14() { return &___m_DetectionMode_14; }
	inline void set_m_DetectionMode_14(int32_t value)
	{
		___m_DetectionMode_14 = value;
	}

	inline static int32_t get_offset_of_planesChanged_15() { return static_cast<int32_t>(offsetof(ARPlaneManager_t4700B0BC3E8B6CD35F8D925701C89A5A21DDBAD4, ___planesChanged_15)); }
	inline Action_1_tCEBED0DA57F23A7A92A05B380E69C5D67FEE4C25 * get_planesChanged_15() const { return ___planesChanged_15; }
	inline Action_1_tCEBED0DA57F23A7A92A05B380E69C5D67FEE4C25 ** get_address_of_planesChanged_15() { return &___planesChanged_15; }
	inline void set_planesChanged_15(Action_1_tCEBED0DA57F23A7A92A05B380E69C5D67FEE4C25 * value)
	{
		___planesChanged_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___planesChanged_15), (void*)value);
	}
};


// UnityEngine.UI.Dropdown
struct  Dropdown_t099F5232BB75810BC79EED6E27DDCED46C3BCD96  : public Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD
{
public:
	// UnityEngine.RectTransform UnityEngine.UI.Dropdown::m_Template
	RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * ___m_Template_20;
	// UnityEngine.UI.Text UnityEngine.UI.Dropdown::m_CaptionText
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___m_CaptionText_21;
	// UnityEngine.UI.Image UnityEngine.UI.Dropdown::m_CaptionImage
	Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * ___m_CaptionImage_22;
	// UnityEngine.UI.Text UnityEngine.UI.Dropdown::m_ItemText
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___m_ItemText_23;
	// UnityEngine.UI.Image UnityEngine.UI.Dropdown::m_ItemImage
	Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * ___m_ItemImage_24;
	// System.Int32 UnityEngine.UI.Dropdown::m_Value
	int32_t ___m_Value_25;
	// UnityEngine.UI.Dropdown/OptionDataList UnityEngine.UI.Dropdown::m_Options
	OptionDataList_t524EBDB7A2B178269FD5B4740108D0EC6404B4B6 * ___m_Options_26;
	// UnityEngine.UI.Dropdown/DropdownEvent UnityEngine.UI.Dropdown::m_OnValueChanged
	DropdownEvent_tEB2C75C3DBC789936B31D9A979FD62E047846CFB * ___m_OnValueChanged_27;
	// System.Single UnityEngine.UI.Dropdown::m_AlphaFadeSpeed
	float ___m_AlphaFadeSpeed_28;
	// UnityEngine.GameObject UnityEngine.UI.Dropdown::m_Dropdown
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___m_Dropdown_29;
	// UnityEngine.GameObject UnityEngine.UI.Dropdown::m_Blocker
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___m_Blocker_30;
	// System.Collections.Generic.List`1<UnityEngine.UI.Dropdown/DropdownItem> UnityEngine.UI.Dropdown::m_Items
	List_1_t4CFF6A6E1A912AE4990A34B2AA4A1FE2C9FB0033 * ___m_Items_31;
	// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.FloatTween> UnityEngine.UI.Dropdown::m_AlphaTweenRunner
	TweenRunner_1_t428873023FD8831B6DCE3CBD53ADD7D37AC8222D * ___m_AlphaTweenRunner_32;
	// System.Boolean UnityEngine.UI.Dropdown::validTemplate
	bool ___validTemplate_33;

public:
	inline static int32_t get_offset_of_m_Template_20() { return static_cast<int32_t>(offsetof(Dropdown_t099F5232BB75810BC79EED6E27DDCED46C3BCD96, ___m_Template_20)); }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * get_m_Template_20() const { return ___m_Template_20; }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 ** get_address_of_m_Template_20() { return &___m_Template_20; }
	inline void set_m_Template_20(RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * value)
	{
		___m_Template_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Template_20), (void*)value);
	}

	inline static int32_t get_offset_of_m_CaptionText_21() { return static_cast<int32_t>(offsetof(Dropdown_t099F5232BB75810BC79EED6E27DDCED46C3BCD96, ___m_CaptionText_21)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_m_CaptionText_21() const { return ___m_CaptionText_21; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_m_CaptionText_21() { return &___m_CaptionText_21; }
	inline void set_m_CaptionText_21(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___m_CaptionText_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CaptionText_21), (void*)value);
	}

	inline static int32_t get_offset_of_m_CaptionImage_22() { return static_cast<int32_t>(offsetof(Dropdown_t099F5232BB75810BC79EED6E27DDCED46C3BCD96, ___m_CaptionImage_22)); }
	inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * get_m_CaptionImage_22() const { return ___m_CaptionImage_22; }
	inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C ** get_address_of_m_CaptionImage_22() { return &___m_CaptionImage_22; }
	inline void set_m_CaptionImage_22(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * value)
	{
		___m_CaptionImage_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CaptionImage_22), (void*)value);
	}

	inline static int32_t get_offset_of_m_ItemText_23() { return static_cast<int32_t>(offsetof(Dropdown_t099F5232BB75810BC79EED6E27DDCED46C3BCD96, ___m_ItemText_23)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_m_ItemText_23() const { return ___m_ItemText_23; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_m_ItemText_23() { return &___m_ItemText_23; }
	inline void set_m_ItemText_23(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___m_ItemText_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ItemText_23), (void*)value);
	}

	inline static int32_t get_offset_of_m_ItemImage_24() { return static_cast<int32_t>(offsetof(Dropdown_t099F5232BB75810BC79EED6E27DDCED46C3BCD96, ___m_ItemImage_24)); }
	inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * get_m_ItemImage_24() const { return ___m_ItemImage_24; }
	inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C ** get_address_of_m_ItemImage_24() { return &___m_ItemImage_24; }
	inline void set_m_ItemImage_24(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * value)
	{
		___m_ItemImage_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ItemImage_24), (void*)value);
	}

	inline static int32_t get_offset_of_m_Value_25() { return static_cast<int32_t>(offsetof(Dropdown_t099F5232BB75810BC79EED6E27DDCED46C3BCD96, ___m_Value_25)); }
	inline int32_t get_m_Value_25() const { return ___m_Value_25; }
	inline int32_t* get_address_of_m_Value_25() { return &___m_Value_25; }
	inline void set_m_Value_25(int32_t value)
	{
		___m_Value_25 = value;
	}

	inline static int32_t get_offset_of_m_Options_26() { return static_cast<int32_t>(offsetof(Dropdown_t099F5232BB75810BC79EED6E27DDCED46C3BCD96, ___m_Options_26)); }
	inline OptionDataList_t524EBDB7A2B178269FD5B4740108D0EC6404B4B6 * get_m_Options_26() const { return ___m_Options_26; }
	inline OptionDataList_t524EBDB7A2B178269FD5B4740108D0EC6404B4B6 ** get_address_of_m_Options_26() { return &___m_Options_26; }
	inline void set_m_Options_26(OptionDataList_t524EBDB7A2B178269FD5B4740108D0EC6404B4B6 * value)
	{
		___m_Options_26 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Options_26), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnValueChanged_27() { return static_cast<int32_t>(offsetof(Dropdown_t099F5232BB75810BC79EED6E27DDCED46C3BCD96, ___m_OnValueChanged_27)); }
	inline DropdownEvent_tEB2C75C3DBC789936B31D9A979FD62E047846CFB * get_m_OnValueChanged_27() const { return ___m_OnValueChanged_27; }
	inline DropdownEvent_tEB2C75C3DBC789936B31D9A979FD62E047846CFB ** get_address_of_m_OnValueChanged_27() { return &___m_OnValueChanged_27; }
	inline void set_m_OnValueChanged_27(DropdownEvent_tEB2C75C3DBC789936B31D9A979FD62E047846CFB * value)
	{
		___m_OnValueChanged_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnValueChanged_27), (void*)value);
	}

	inline static int32_t get_offset_of_m_AlphaFadeSpeed_28() { return static_cast<int32_t>(offsetof(Dropdown_t099F5232BB75810BC79EED6E27DDCED46C3BCD96, ___m_AlphaFadeSpeed_28)); }
	inline float get_m_AlphaFadeSpeed_28() const { return ___m_AlphaFadeSpeed_28; }
	inline float* get_address_of_m_AlphaFadeSpeed_28() { return &___m_AlphaFadeSpeed_28; }
	inline void set_m_AlphaFadeSpeed_28(float value)
	{
		___m_AlphaFadeSpeed_28 = value;
	}

	inline static int32_t get_offset_of_m_Dropdown_29() { return static_cast<int32_t>(offsetof(Dropdown_t099F5232BB75810BC79EED6E27DDCED46C3BCD96, ___m_Dropdown_29)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_m_Dropdown_29() const { return ___m_Dropdown_29; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_m_Dropdown_29() { return &___m_Dropdown_29; }
	inline void set_m_Dropdown_29(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___m_Dropdown_29 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Dropdown_29), (void*)value);
	}

	inline static int32_t get_offset_of_m_Blocker_30() { return static_cast<int32_t>(offsetof(Dropdown_t099F5232BB75810BC79EED6E27DDCED46C3BCD96, ___m_Blocker_30)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_m_Blocker_30() const { return ___m_Blocker_30; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_m_Blocker_30() { return &___m_Blocker_30; }
	inline void set_m_Blocker_30(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___m_Blocker_30 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Blocker_30), (void*)value);
	}

	inline static int32_t get_offset_of_m_Items_31() { return static_cast<int32_t>(offsetof(Dropdown_t099F5232BB75810BC79EED6E27DDCED46C3BCD96, ___m_Items_31)); }
	inline List_1_t4CFF6A6E1A912AE4990A34B2AA4A1FE2C9FB0033 * get_m_Items_31() const { return ___m_Items_31; }
	inline List_1_t4CFF6A6E1A912AE4990A34B2AA4A1FE2C9FB0033 ** get_address_of_m_Items_31() { return &___m_Items_31; }
	inline void set_m_Items_31(List_1_t4CFF6A6E1A912AE4990A34B2AA4A1FE2C9FB0033 * value)
	{
		___m_Items_31 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Items_31), (void*)value);
	}

	inline static int32_t get_offset_of_m_AlphaTweenRunner_32() { return static_cast<int32_t>(offsetof(Dropdown_t099F5232BB75810BC79EED6E27DDCED46C3BCD96, ___m_AlphaTweenRunner_32)); }
	inline TweenRunner_1_t428873023FD8831B6DCE3CBD53ADD7D37AC8222D * get_m_AlphaTweenRunner_32() const { return ___m_AlphaTweenRunner_32; }
	inline TweenRunner_1_t428873023FD8831B6DCE3CBD53ADD7D37AC8222D ** get_address_of_m_AlphaTweenRunner_32() { return &___m_AlphaTweenRunner_32; }
	inline void set_m_AlphaTweenRunner_32(TweenRunner_1_t428873023FD8831B6DCE3CBD53ADD7D37AC8222D * value)
	{
		___m_AlphaTweenRunner_32 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_AlphaTweenRunner_32), (void*)value);
	}

	inline static int32_t get_offset_of_validTemplate_33() { return static_cast<int32_t>(offsetof(Dropdown_t099F5232BB75810BC79EED6E27DDCED46C3BCD96, ___validTemplate_33)); }
	inline bool get_validTemplate_33() const { return ___validTemplate_33; }
	inline bool* get_address_of_validTemplate_33() { return &___validTemplate_33; }
	inline void set_validTemplate_33(bool value)
	{
		___validTemplate_33 = value;
	}
};

struct Dropdown_t099F5232BB75810BC79EED6E27DDCED46C3BCD96_StaticFields
{
public:
	// UnityEngine.UI.Dropdown/OptionData UnityEngine.UI.Dropdown::s_NoOptionData
	OptionData_t5F665DC13C1E4307727D66ECC1100B3A77E3E857 * ___s_NoOptionData_34;

public:
	inline static int32_t get_offset_of_s_NoOptionData_34() { return static_cast<int32_t>(offsetof(Dropdown_t099F5232BB75810BC79EED6E27DDCED46C3BCD96_StaticFields, ___s_NoOptionData_34)); }
	inline OptionData_t5F665DC13C1E4307727D66ECC1100B3A77E3E857 * get_s_NoOptionData_34() const { return ___s_NoOptionData_34; }
	inline OptionData_t5F665DC13C1E4307727D66ECC1100B3A77E3E857 ** get_address_of_s_NoOptionData_34() { return &___s_NoOptionData_34; }
	inline void set_s_NoOptionData_34(OptionData_t5F665DC13C1E4307727D66ECC1100B3A77E3E857 * value)
	{
		___s_NoOptionData_34 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_NoOptionData_34), (void*)value);
	}
};


// UnityEngine.UI.MaskableGraphic
struct  MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE  : public Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24
{
public:
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculateStencil
	bool ___m_ShouldRecalculateStencil_26;
	// UnityEngine.Material UnityEngine.UI.MaskableGraphic::m_MaskMaterial
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___m_MaskMaterial_27;
	// UnityEngine.UI.RectMask2D UnityEngine.UI.MaskableGraphic::m_ParentMask
	RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15 * ___m_ParentMask_28;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_Maskable
	bool ___m_Maskable_29;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IsMaskingGraphic
	bool ___m_IsMaskingGraphic_30;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IncludeForMasking
	bool ___m_IncludeForMasking_31;
	// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent UnityEngine.UI.MaskableGraphic::m_OnCullStateChanged
	CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4 * ___m_OnCullStateChanged_32;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculate
	bool ___m_ShouldRecalculate_33;
	// System.Int32 UnityEngine.UI.MaskableGraphic::m_StencilValue
	int32_t ___m_StencilValue_34;
	// UnityEngine.Vector3[] UnityEngine.UI.MaskableGraphic::m_Corners
	Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* ___m_Corners_35;

public:
	inline static int32_t get_offset_of_m_ShouldRecalculateStencil_26() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_ShouldRecalculateStencil_26)); }
	inline bool get_m_ShouldRecalculateStencil_26() const { return ___m_ShouldRecalculateStencil_26; }
	inline bool* get_address_of_m_ShouldRecalculateStencil_26() { return &___m_ShouldRecalculateStencil_26; }
	inline void set_m_ShouldRecalculateStencil_26(bool value)
	{
		___m_ShouldRecalculateStencil_26 = value;
	}

	inline static int32_t get_offset_of_m_MaskMaterial_27() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_MaskMaterial_27)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_m_MaskMaterial_27() const { return ___m_MaskMaterial_27; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_m_MaskMaterial_27() { return &___m_MaskMaterial_27; }
	inline void set_m_MaskMaterial_27(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___m_MaskMaterial_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_MaskMaterial_27), (void*)value);
	}

	inline static int32_t get_offset_of_m_ParentMask_28() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_ParentMask_28)); }
	inline RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15 * get_m_ParentMask_28() const { return ___m_ParentMask_28; }
	inline RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15 ** get_address_of_m_ParentMask_28() { return &___m_ParentMask_28; }
	inline void set_m_ParentMask_28(RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15 * value)
	{
		___m_ParentMask_28 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ParentMask_28), (void*)value);
	}

	inline static int32_t get_offset_of_m_Maskable_29() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_Maskable_29)); }
	inline bool get_m_Maskable_29() const { return ___m_Maskable_29; }
	inline bool* get_address_of_m_Maskable_29() { return &___m_Maskable_29; }
	inline void set_m_Maskable_29(bool value)
	{
		___m_Maskable_29 = value;
	}

	inline static int32_t get_offset_of_m_IsMaskingGraphic_30() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_IsMaskingGraphic_30)); }
	inline bool get_m_IsMaskingGraphic_30() const { return ___m_IsMaskingGraphic_30; }
	inline bool* get_address_of_m_IsMaskingGraphic_30() { return &___m_IsMaskingGraphic_30; }
	inline void set_m_IsMaskingGraphic_30(bool value)
	{
		___m_IsMaskingGraphic_30 = value;
	}

	inline static int32_t get_offset_of_m_IncludeForMasking_31() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_IncludeForMasking_31)); }
	inline bool get_m_IncludeForMasking_31() const { return ___m_IncludeForMasking_31; }
	inline bool* get_address_of_m_IncludeForMasking_31() { return &___m_IncludeForMasking_31; }
	inline void set_m_IncludeForMasking_31(bool value)
	{
		___m_IncludeForMasking_31 = value;
	}

	inline static int32_t get_offset_of_m_OnCullStateChanged_32() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_OnCullStateChanged_32)); }
	inline CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4 * get_m_OnCullStateChanged_32() const { return ___m_OnCullStateChanged_32; }
	inline CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4 ** get_address_of_m_OnCullStateChanged_32() { return &___m_OnCullStateChanged_32; }
	inline void set_m_OnCullStateChanged_32(CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4 * value)
	{
		___m_OnCullStateChanged_32 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnCullStateChanged_32), (void*)value);
	}

	inline static int32_t get_offset_of_m_ShouldRecalculate_33() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_ShouldRecalculate_33)); }
	inline bool get_m_ShouldRecalculate_33() const { return ___m_ShouldRecalculate_33; }
	inline bool* get_address_of_m_ShouldRecalculate_33() { return &___m_ShouldRecalculate_33; }
	inline void set_m_ShouldRecalculate_33(bool value)
	{
		___m_ShouldRecalculate_33 = value;
	}

	inline static int32_t get_offset_of_m_StencilValue_34() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_StencilValue_34)); }
	inline int32_t get_m_StencilValue_34() const { return ___m_StencilValue_34; }
	inline int32_t* get_address_of_m_StencilValue_34() { return &___m_StencilValue_34; }
	inline void set_m_StencilValue_34(int32_t value)
	{
		___m_StencilValue_34 = value;
	}

	inline static int32_t get_offset_of_m_Corners_35() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_Corners_35)); }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* get_m_Corners_35() const { return ___m_Corners_35; }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4** get_address_of_m_Corners_35() { return &___m_Corners_35; }
	inline void set_m_Corners_35(Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* value)
	{
		___m_Corners_35 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Corners_35), (void*)value);
	}
};


// UnityEngine.UI.Text
struct  Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1  : public MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE
{
public:
	// UnityEngine.UI.FontData UnityEngine.UI.Text::m_FontData
	FontData_t0F1E9B3ED8136CD40782AC9A6AFB69CAD127C738 * ___m_FontData_36;
	// System.String UnityEngine.UI.Text::m_Text
	String_t* ___m_Text_37;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCache
	TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * ___m_TextCache_38;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCacheForLayout
	TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * ___m_TextCacheForLayout_39;
	// System.Boolean UnityEngine.UI.Text::m_DisableFontTextureRebuiltCallback
	bool ___m_DisableFontTextureRebuiltCallback_41;
	// UnityEngine.UIVertex[] UnityEngine.UI.Text::m_TempVerts
	UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A* ___m_TempVerts_42;

public:
	inline static int32_t get_offset_of_m_FontData_36() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_FontData_36)); }
	inline FontData_t0F1E9B3ED8136CD40782AC9A6AFB69CAD127C738 * get_m_FontData_36() const { return ___m_FontData_36; }
	inline FontData_t0F1E9B3ED8136CD40782AC9A6AFB69CAD127C738 ** get_address_of_m_FontData_36() { return &___m_FontData_36; }
	inline void set_m_FontData_36(FontData_t0F1E9B3ED8136CD40782AC9A6AFB69CAD127C738 * value)
	{
		___m_FontData_36 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_FontData_36), (void*)value);
	}

	inline static int32_t get_offset_of_m_Text_37() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_Text_37)); }
	inline String_t* get_m_Text_37() const { return ___m_Text_37; }
	inline String_t** get_address_of_m_Text_37() { return &___m_Text_37; }
	inline void set_m_Text_37(String_t* value)
	{
		___m_Text_37 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Text_37), (void*)value);
	}

	inline static int32_t get_offset_of_m_TextCache_38() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_TextCache_38)); }
	inline TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * get_m_TextCache_38() const { return ___m_TextCache_38; }
	inline TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 ** get_address_of_m_TextCache_38() { return &___m_TextCache_38; }
	inline void set_m_TextCache_38(TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * value)
	{
		___m_TextCache_38 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TextCache_38), (void*)value);
	}

	inline static int32_t get_offset_of_m_TextCacheForLayout_39() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_TextCacheForLayout_39)); }
	inline TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * get_m_TextCacheForLayout_39() const { return ___m_TextCacheForLayout_39; }
	inline TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 ** get_address_of_m_TextCacheForLayout_39() { return &___m_TextCacheForLayout_39; }
	inline void set_m_TextCacheForLayout_39(TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * value)
	{
		___m_TextCacheForLayout_39 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TextCacheForLayout_39), (void*)value);
	}

	inline static int32_t get_offset_of_m_DisableFontTextureRebuiltCallback_41() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_DisableFontTextureRebuiltCallback_41)); }
	inline bool get_m_DisableFontTextureRebuiltCallback_41() const { return ___m_DisableFontTextureRebuiltCallback_41; }
	inline bool* get_address_of_m_DisableFontTextureRebuiltCallback_41() { return &___m_DisableFontTextureRebuiltCallback_41; }
	inline void set_m_DisableFontTextureRebuiltCallback_41(bool value)
	{
		___m_DisableFontTextureRebuiltCallback_41 = value;
	}

	inline static int32_t get_offset_of_m_TempVerts_42() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_TempVerts_42)); }
	inline UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A* get_m_TempVerts_42() const { return ___m_TempVerts_42; }
	inline UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A** get_address_of_m_TempVerts_42() { return &___m_TempVerts_42; }
	inline void set_m_TempVerts_42(UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A* value)
	{
		___m_TempVerts_42 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TempVerts_42), (void*)value);
	}
};

struct Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_StaticFields
{
public:
	// UnityEngine.Material UnityEngine.UI.Text::s_DefaultText
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___s_DefaultText_40;

public:
	inline static int32_t get_offset_of_s_DefaultText_40() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_StaticFields, ___s_DefaultText_40)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_s_DefaultText_40() const { return ___s_DefaultText_40; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_s_DefaultText_40() { return &___s_DefaultText_40; }
	inline void set_s_DefaultText_40(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___s_DefaultText_40 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_DefaultText_40), (void*)value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.Byte[]
struct ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) uint8_t m_Items[1];

public:
	inline uint8_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline uint8_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, uint8_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline uint8_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline uint8_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, uint8_t value)
	{
		m_Items[index] = value;
	}
};
// FMOD.Studio.Bank[]
struct BankU5BU5D_tB08E6B185C9E39F95B976FBA7D3C4839AD7C951E  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Bank_t65BB4F2DD95EE2A62FC08E2C92D32FC34F2EFAE7  m_Items[1];

public:
	inline Bank_t65BB4F2DD95EE2A62FC08E2C92D32FC34F2EFAE7  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Bank_t65BB4F2DD95EE2A62FC08E2C92D32FC34F2EFAE7 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Bank_t65BB4F2DD95EE2A62FC08E2C92D32FC34F2EFAE7  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Bank_t65BB4F2DD95EE2A62FC08E2C92D32FC34F2EFAE7  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Bank_t65BB4F2DD95EE2A62FC08E2C92D32FC34F2EFAE7 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Bank_t65BB4F2DD95EE2A62FC08E2C92D32FC34F2EFAE7  value)
	{
		m_Items[index] = value;
	}
};
// FMOD.Studio.Bus[]
struct BusU5BU5D_t081E59272ADFB900EE6CCE098E088ED7E905F1CD  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Bus_tB5E25ABA15F3E5DB91A09BABE4076CF855D37520  m_Items[1];

public:
	inline Bus_tB5E25ABA15F3E5DB91A09BABE4076CF855D37520  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Bus_tB5E25ABA15F3E5DB91A09BABE4076CF855D37520 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Bus_tB5E25ABA15F3E5DB91A09BABE4076CF855D37520  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Bus_tB5E25ABA15F3E5DB91A09BABE4076CF855D37520  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Bus_tB5E25ABA15F3E5DB91A09BABE4076CF855D37520 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Bus_tB5E25ABA15F3E5DB91A09BABE4076CF855D37520  value)
	{
		m_Items[index] = value;
	}
};
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * m_Items[1];

public:
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// IndoorAtlas.IndoorAtlasSession[]
struct IndoorAtlasSessionU5BU5D_t9AD63F9432C1B91572F9BA61CB38F80198F4D3A1  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) IndoorAtlasSession_t481C53C3F6FF3CBB05117D2F9D20BCCE12FB511F * m_Items[1];

public:
	inline IndoorAtlasSession_t481C53C3F6FF3CBB05117D2F9D20BCCE12FB511F * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline IndoorAtlasSession_t481C53C3F6FF3CBB05117D2F9D20BCCE12FB511F ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, IndoorAtlasSession_t481C53C3F6FF3CBB05117D2F9D20BCCE12FB511F * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline IndoorAtlasSession_t481C53C3F6FF3CBB05117D2F9D20BCCE12FB511F * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline IndoorAtlasSession_t481C53C3F6FF3CBB05117D2F9D20BCCE12FB511F ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, IndoorAtlasSession_t481C53C3F6FF3CBB05117D2F9D20BCCE12FB511F * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Object[]
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) RuntimeObject * m_Items[1];

public:
	inline RuntimeObject * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline RuntimeObject * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// IndoorAtlas.POI[]
struct POIU5BU5D_t04FA68210CCDCD2EA133D94A53071C5B93CBF497  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) POI_t8DBBCA0F0D1DFE03487EF4D0D91C39BA68B90574 * m_Items[1];

public:
	inline POI_t8DBBCA0F0D1DFE03487EF4D0D91C39BA68B90574 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline POI_t8DBBCA0F0D1DFE03487EF4D0D91C39BA68B90574 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, POI_t8DBBCA0F0D1DFE03487EF4D0D91C39BA68B90574 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline POI_t8DBBCA0F0D1DFE03487EF4D0D91C39BA68B90574 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline POI_t8DBBCA0F0D1DFE03487EF4D0D91C39BA68B90574 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, POI_t8DBBCA0F0D1DFE03487EF4D0D91C39BA68B90574 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Single[]
struct SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) float m_Items[1];

public:
	inline float GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline float* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, float value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline float GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline float* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, float value)
	{
		m_Items[index] = value;
	}
};


// System.Boolean System.Collections.Generic.List`1<System.Object>::Contains(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_Contains_m99C700668AC6D272188471D2D6B784A2B5636C8E_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, RuntimeObject * ___item0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::Add(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Add_mE5B3CBB3A625606D9BC4337FEAAF1D66BCB6F96E_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, RuntimeObject * ___item0, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1<System.Object>::Remove(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_Remove_m753F7B4281CC4D02C07AE90726F51EF34B588DF7_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, RuntimeObject * ___item0, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m5D847939ABB9A78203B062CAFFE975792174D00F_gshared_inline (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * List_1_get_Item_mF00B574E58FB078BB753B05A3B86DD0A7A266B63_gshared_inline (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, int32_t ___index0, const RuntimeMethod* method);
// System.Void System.Runtime.InteropServices.Marshal::StructureToPtr<FmodResonanceAudio/RoomProperties>(!!0,System.IntPtr,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Marshal_StructureToPtr_TisRoomProperties_tE26D849980D0755AE6E6CED6F90D5040FF8189CE_m1C0F38968295AF9ADFB26775FCC16F9669B79D8F_gshared (RoomProperties_tE26D849980D0755AE6E6CED6F90D5040FF8189CE  ___structure0, intptr_t ___ptr1, bool ___fDeleteOld2, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method);
// UnityEngine.XR.ARFoundation.TrackableCollection`1<!4> UnityEngine.XR.ARFoundation.ARTrackableManager`5<System.Object,System.Object,System.Object,UnityEngine.XR.ARSubsystems.BoundedPlane,System.Object>::get_trackables()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TrackableCollection_1_t4E8CD95BBE750C12D37A648E5531B758A0D9EAB2  ARTrackableManager_5_get_trackables_mA9C079E7BC627AE1E6161C84146FAB7B4283F647_gshared (ARTrackableManager_5_t2707E45F444C493E32789D9B57F85551A10E4212 * __this, const RuntimeMethod* method);
// UnityEngine.XR.ARFoundation.TrackableCollection`1/Enumerator<!0> UnityEngine.XR.ARFoundation.TrackableCollection`1<System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t2E1E8D9B1C4E269F7D1A8823FA9D39B68490DB07  TrackableCollection_1_GetEnumerator_m8F500D7F92731D0C759C54F845BF7824A90E9ABE_gshared (TrackableCollection_1_t4E8CD95BBE750C12D37A648E5531B758A0D9EAB2 * __this, const RuntimeMethod* method);
// !0 UnityEngine.XR.ARFoundation.TrackableCollection`1/Enumerator<System.Object>::get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Enumerator_get_Current_m39A0AD5C1E46A028907AE6D774752B6F22946EF3_gshared (Enumerator_t2E1E8D9B1C4E269F7D1A8823FA9D39B68490DB07 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.ARFoundation.TrackableCollection`1/Enumerator<System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m7C26F98E01304EA7C8F0B6E4FEF7E9787915AB1D_gshared (Enumerator_t2E1E8D9B1C4E269F7D1A8823FA9D39B68490DB07 * __this, const RuntimeMethod* method);
// System.Void System.Action`1<UnityEngine.XR.ARFoundation.ARCameraFrameEventArgs>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1__ctor_m5F656FA67BDEAF94CFE4483389771AB19C419D16_gshared (Action_1_tA34B23CE57B7192055F9BF04AA14FCCB2ED91C68 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Object::Instantiate<System.Object>(!!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Object_Instantiate_TisRuntimeObject_m4039C8E65629D33E1EC84D2505BF1D5DDC936622_gshared (RuntimeObject * ___original0, const RuntimeMethod* method);
// !!0[] UnityEngine.Object::FindObjectsOfType<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* Object_FindObjectsOfType_TisRuntimeObject_m0015B67D48097755F4D6B1D2614DA7ED5C899F18_gshared (const RuntimeMethod* method);
// !!0 UnityEngine.JsonUtility::FromJson<System.Object>(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * JsonUtility_FromJson_TisRuntimeObject_m7398DCFD1F6BF2A10AB1274ABED512F322F8F4B4_gshared (String_t* ___json0, const RuntimeMethod* method);
// System.Void UnityEngine.Events.UnityEvent`1<System.Int32>::RemoveListener(UnityEngine.Events.UnityAction`1<!0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_1_RemoveListener_m0DDD8A7A01D83C10E72C71631F8487FE817B264D_gshared (UnityEvent_1_tB235B5DAD099AC425DC059D10DEB8B97A35E2BBF * __this, UnityAction_1_t5CF46572372725E6225588C466A7AF5C8597AA79 * ___call0, const RuntimeMethod* method);
// System.Void UnityEngine.Events.UnityAction`1<System.Int32>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAction_1__ctor_m595DA2ECB187B2DF951D640BFEBCE02F3F800A3F_gshared (UnityAction_1_t5CF46572372725E6225588C466A7AF5C8597AA79 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void UnityEngine.Events.UnityEvent`1<System.Int32>::AddListener(UnityEngine.Events.UnityAction`1<!0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_1_AddListener_mFCFAC8ACA3F75283268DC2629ADEB5504E8FC0C2_gshared (UnityEvent_1_tB235B5DAD099AC425DC059D10DEB8B97A35E2BBF * __this, UnityAction_1_t5CF46572372725E6225588C466A7AF5C8597AA79 * ___call0, const RuntimeMethod* method);

// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1<FmodResonanceAudioRoom>::Contains(!0)
inline bool List_1_Contains_mD09C8AC0B27E9264130B1AD64B2C4B869C533402 (List_1_t7DC37F87EBBCA84046EA55A3F9E0440CB00F79D7 * __this, FmodResonanceAudioRoom_t61B0C3B3436B4E982A0D69FB7F0B710C551B7089 * ___item0, const RuntimeMethod* method)
{
	return ((  bool (*) (List_1_t7DC37F87EBBCA84046EA55A3F9E0440CB00F79D7 *, FmodResonanceAudioRoom_t61B0C3B3436B4E982A0D69FB7F0B710C551B7089 *, const RuntimeMethod*))List_1_Contains_m99C700668AC6D272188471D2D6B784A2B5636C8E_gshared)(__this, ___item0, method);
}
// System.Void System.Collections.Generic.List`1<FmodResonanceAudioRoom>::Add(!0)
inline void List_1_Add_mA62471E539473C242E0441E4355E41CD47D3CCFC (List_1_t7DC37F87EBBCA84046EA55A3F9E0440CB00F79D7 * __this, FmodResonanceAudioRoom_t61B0C3B3436B4E982A0D69FB7F0B710C551B7089 * ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t7DC37F87EBBCA84046EA55A3F9E0440CB00F79D7 *, FmodResonanceAudioRoom_t61B0C3B3436B4E982A0D69FB7F0B710C551B7089 *, const RuntimeMethod*))List_1_Add_mE5B3CBB3A625606D9BC4337FEAAF1D66BCB6F96E_gshared)(__this, ___item0, method);
}
// System.Boolean System.Collections.Generic.List`1<FmodResonanceAudioRoom>::Remove(!0)
inline bool List_1_Remove_mD821441E24446F8BB5AECD26CA55EDCFB2B93F81 (List_1_t7DC37F87EBBCA84046EA55A3F9E0440CB00F79D7 * __this, FmodResonanceAudioRoom_t61B0C3B3436B4E982A0D69FB7F0B710C551B7089 * ___item0, const RuntimeMethod* method)
{
	return ((  bool (*) (List_1_t7DC37F87EBBCA84046EA55A3F9E0440CB00F79D7 *, FmodResonanceAudioRoom_t61B0C3B3436B4E982A0D69FB7F0B710C551B7089 *, const RuntimeMethod*))List_1_Remove_m753F7B4281CC4D02C07AE90726F51EF34B588DF7_gshared)(__this, ___item0, method);
}
// System.Int32 System.Collections.Generic.List`1<FmodResonanceAudioRoom>::get_Count()
inline int32_t List_1_get_Count_m2EEAA0229AB41CEA9340261A3C0BC21C50D0875B_inline (List_1_t7DC37F87EBBCA84046EA55A3F9E0440CB00F79D7 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t7DC37F87EBBCA84046EA55A3F9E0440CB00F79D7 *, const RuntimeMethod*))List_1_get_Count_m5D847939ABB9A78203B062CAFFE975792174D00F_gshared_inline)(__this, method);
}
// !0 System.Collections.Generic.List`1<FmodResonanceAudioRoom>::get_Item(System.Int32)
inline FmodResonanceAudioRoom_t61B0C3B3436B4E982A0D69FB7F0B710C551B7089 * List_1_get_Item_mEA6C6E5BF0130FF00BDA1986167ACD32A5D07EAF_inline (List_1_t7DC37F87EBBCA84046EA55A3F9E0440CB00F79D7 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  FmodResonanceAudioRoom_t61B0C3B3436B4E982A0D69FB7F0B710C551B7089 * (*) (List_1_t7DC37F87EBBCA84046EA55A3F9E0440CB00F79D7 *, int32_t, const RuntimeMethod*))List_1_get_Item_mF00B574E58FB078BB753B05A3B86DD0A7A266B63_gshared_inline)(__this, ___index0, method);
}
// FmodResonanceAudio/RoomProperties FmodResonanceAudio::GetRoomProperties(FmodResonanceAudioRoom)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RoomProperties_tE26D849980D0755AE6E6CED6F90D5040FF8189CE  FmodResonanceAudio_GetRoomProperties_m2BDFA081146DD418BE126B35F0CFED79940DEC81 (FmodResonanceAudioRoom_t61B0C3B3436B4E982A0D69FB7F0B710C551B7089 * ___room0, const RuntimeMethod* method);
// System.IntPtr System.Runtime.InteropServices.Marshal::AllocHGlobal(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t Marshal_AllocHGlobal_mED1B623D229DB8FAB58D187E4E73D3DA2E8AE6EC (int32_t ___cb0, const RuntimeMethod* method);
// System.Void System.Runtime.InteropServices.Marshal::StructureToPtr<FmodResonanceAudio/RoomProperties>(!!0,System.IntPtr,System.Boolean)
inline void Marshal_StructureToPtr_TisRoomProperties_tE26D849980D0755AE6E6CED6F90D5040FF8189CE_m1C0F38968295AF9ADFB26775FCC16F9669B79D8F (RoomProperties_tE26D849980D0755AE6E6CED6F90D5040FF8189CE  ___structure0, intptr_t ___ptr1, bool ___fDeleteOld2, const RuntimeMethod* method)
{
	((  void (*) (RoomProperties_tE26D849980D0755AE6E6CED6F90D5040FF8189CE , intptr_t, bool, const RuntimeMethod*))Marshal_StructureToPtr_TisRoomProperties_tE26D849980D0755AE6E6CED6F90D5040FF8189CE_m1C0F38968295AF9ADFB26775FCC16F9669B79D8F_gshared)(___structure0, ___ptr1, ___fDeleteOld2, method);
}
// FMOD.DSP FmodResonanceAudio::get_ListenerPlugin()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DSP_t3554E4816E29B84C01A61DD26D8A8FC5831A2412  FmodResonanceAudio_get_ListenerPlugin_mA2C5240024E94DB913B0E707F9D5ABB6ADE725D1 (const RuntimeMethod* method);
// System.Byte[] FmodResonanceAudio::GetBytes(System.IntPtr,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* FmodResonanceAudio_GetBytes_m63B078849DA03BB5C8B644E3ACFC955D36AA5B4D (intptr_t ___ptr0, int32_t ___length1, const RuntimeMethod* method);
// FMOD.RESULT FMOD.DSP::setParameterData(System.Int32,System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DSP_setParameterData_m47972DF6A9F278172C34A878BF62D7782710EE7A (DSP_t3554E4816E29B84C01A61DD26D8A8FC5831A2412 * __this, int32_t ___index0, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___data1, const RuntimeMethod* method);
// System.Void System.Runtime.InteropServices.Marshal::FreeHGlobal(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Marshal_FreeHGlobal_m53FC4846F5D3106BA25B52C321005C227E424F72 (intptr_t ___hglobal0, const RuntimeMethod* method);
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_Subtraction(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Subtraction_m2725C96965D5C0B1F9715797E51762B13A5FED58_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___b1, const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Transform::get_rotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  Transform_get_rotation_m4AA3858C00DF4C9614B80352558C4C37D08D2200 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Quaternion::Inverse(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  Quaternion_Inverse_mE2A449C7AC8A40350AAC3761AE1AFC170062CAC9 (Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___rotation0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::get_lossyScale()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Transform_get_lossyScale_m469A16F93F135C1E4D5955C7EBDB893D1892A331 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::Scale(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_Scale_m8805EE8D2586DE7B6143FA35819B3D5CF1981FB3_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___b1, const RuntimeMethod* method);
// System.Void UnityEngine.Bounds::set_size(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Bounds_set_size_mEDB113237CED433C65294B534EAD30449277FD18 (Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___value0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Quaternion::op_Multiply(UnityEngine.Quaternion,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Quaternion_op_Multiply_mDC5F913E6B21FEC72AB2CF737D34CC6C7A69803D (Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___rotation0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___point1, const RuntimeMethod* method);
// System.Boolean UnityEngine.Bounds::Contains(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Bounds_Contains_m24154F7F564711846389EF6AEDABB4092A72FFA1 (Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___point0, const RuntimeMethod* method);
// System.Boolean FMOD.DSP::hasHandle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DSP_hasHandle_m84118160DA083533E3B6E6643D860BD1E37340B1 (DSP_t3554E4816E29B84C01A61DD26D8A8FC5831A2412 * __this, const RuntimeMethod* method);
// FMOD.DSP FmodResonanceAudio::Initialize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DSP_t3554E4816E29B84C01A61DD26D8A8FC5831A2412  FmodResonanceAudio_Initialize_mD613D6124B07B4F2771C03C7309299E4F9397320 (const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::get_one()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_get_one_m9CDE5C456038B133ED94402673859EC37B1C1CCB (const RuntimeMethod* method);
// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::TRS(UnityEngine.Vector3,UnityEngine.Quaternion,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  Matrix4x4_TRS_m0CBC696D0BDF58DCEC40B99BC32C716FAD024CE5 (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___pos0, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___q1, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___s2, const RuntimeMethod* method);
// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::op_Multiply(UnityEngine.Matrix4x4,UnityEngine.Matrix4x4)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  Matrix4x4_op_Multiply_mC2B30D333D4399C1693414F1A73D87FB3450F39F (Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  ___lhs0, Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  ___rhs1, const RuntimeMethod* method);
// UnityEngine.Vector4 UnityEngine.Matrix4x4::GetColumn(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  Matrix4x4_GetColumn_m5CAA237D7FD65AA772B84A1134E8B0551F9F8480 (Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 * __this, int32_t ___index0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector4::op_Implicit(UnityEngine.Vector4)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector4_op_Implicit_m5811604E04B684BE3F1A212A7FA46767619AB35B (Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___v0, const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Quaternion::LookRotation(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  Quaternion_LookRotation_m8A7DB5BDBC361586191AB67ACF857F46160EE3F1 (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___forward0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___upwards1, const RuntimeMethod* method);
// System.Boolean System.IntPtr::op_Inequality(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool IntPtr_op_Inequality_m212AF0E66AA81FEDC982B1C8A44ADDA24B995EB8 (intptr_t ___value10, intptr_t ___value21, const RuntimeMethod* method);
// System.Void System.Runtime.InteropServices.Marshal::Copy(System.IntPtr,System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Marshal_Copy_m057A8067BF7212A361510EA26B24022990A07AC0 (intptr_t ___source0, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___destination1, int32_t ___startIndex2, int32_t ___length3, const RuntimeMethod* method);
// System.Void FmodResonanceAudio::ConvertAudioTransformFromUnity(UnityEngine.Vector3&,UnityEngine.Quaternion&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FmodResonanceAudio_ConvertAudioTransformFromUnity_m31DFACA8AC2F819A09D73FFBFF52E8557FB511A6 (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * ___position0, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * ___rotation1, const RuntimeMethod* method);
// System.Single FmodResonanceAudio::ConvertAmplitudeFromDb(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float FmodResonanceAudio_ConvertAmplitudeFromDb_mA8E7A7AF76D2CCD851F0845E98E3DEF8286F5F77 (float ___db0, const RuntimeMethod* method);
// FMOD.Studio.System FMODUnity.RuntimeManager::get_StudioSystem()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR System_tFDE1396EF88A69D9596BB5554FB63FD6CF6B56F0  RuntimeManager_get_StudioSystem_mC87CC95EC33C69E2059874DF09E70E9611C18591 (const RuntimeMethod* method);
// FMOD.RESULT FMOD.Studio.System::getBankCount(System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t System_getBankCount_mAD176C2EE0E6C3E090FD278837973676BB1F3AA6 (System_tFDE1396EF88A69D9596BB5554FB63FD6CF6B56F0 * __this, int32_t* ___count0, const RuntimeMethod* method);
// FMOD.RESULT FMOD.Studio.System::getBankList(FMOD.Studio.Bank[]&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t System_getBankList_m7136EF03B6182E386D97D9344D50D1E4D40599B8 (System_tFDE1396EF88A69D9596BB5554FB63FD6CF6B56F0 * __this, BankU5BU5D_tB08E6B185C9E39F95B976FBA7D3C4839AD7C951E** ___array0, const RuntimeMethod* method);
// FMOD.RESULT FMOD.Studio.Bank::getBusCount(System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Bank_getBusCount_m7DF074C4480C4CB1DC1FE1F3EDD8BBFC6A38E1D6 (Bank_t65BB4F2DD95EE2A62FC08E2C92D32FC34F2EFAE7 * __this, int32_t* ___count0, const RuntimeMethod* method);
// FMOD.RESULT FMOD.Studio.Bank::getBusList(FMOD.Studio.Bus[]&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Bank_getBusList_m3F8C10DE6740D9F488AA1E67344C58F6BCC5949D (Bank_t65BB4F2DD95EE2A62FC08E2C92D32FC34F2EFAE7 * __this, BusU5BU5D_t081E59272ADFB900EE6CCE098E088ED7E905F1CD** ___array0, const RuntimeMethod* method);
// FMOD.RESULT FMOD.Studio.System::flushCommands()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t System_flushCommands_m1DB8630ABBD787E3BE5779817CB5901B4748FCBA (System_tFDE1396EF88A69D9596BB5554FB63FD6CF6B56F0 * __this, const RuntimeMethod* method);
// FMOD.RESULT FMOD.Studio.Bus::getPath(System.String&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Bus_getPath_mE66A62049B199B44F0ED51D5933425019793A828 (Bus_tB5E25ABA15F3E5DB91A09BABE4076CF855D37520 * __this, String_t** ___path0, const RuntimeMethod* method);
// FMOD.RESULT FMOD.Studio.System::getBus(System.String,FMOD.Studio.Bus&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t System_getBus_mB36901E087D9AD25E41111E0AC439B3B128ADAB4 (System_tFDE1396EF88A69D9596BB5554FB63FD6CF6B56F0 * __this, String_t* ___path0, Bus_tB5E25ABA15F3E5DB91A09BABE4076CF855D37520 * ___bus1, const RuntimeMethod* method);
// FMOD.RESULT FMOD.Studio.Bus::getChannelGroup(FMOD.ChannelGroup&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Bus_getChannelGroup_m831052B5FC848AEB2962FD3ACF9F7F7C8BD67D54 (Bus_tB5E25ABA15F3E5DB91A09BABE4076CF855D37520 * __this, ChannelGroup_tE4C8A600CF2C0DE7A4D5924C072EFAD2E5CF172A * ___group0, const RuntimeMethod* method);
// System.Boolean FMOD.ChannelGroup::hasHandle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ChannelGroup_hasHandle_mE96C8C05AD1486172F2DD8751A851F226C731D59 (ChannelGroup_tE4C8A600CF2C0DE7A4D5924C072EFAD2E5CF172A * __this, const RuntimeMethod* method);
// FMOD.RESULT FMOD.ChannelGroup::getNumDSPs(System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ChannelGroup_getNumDSPs_m47DB36935346F821AB8A1BEF42341EB466A90DA7 (ChannelGroup_tE4C8A600CF2C0DE7A4D5924C072EFAD2E5CF172A * __this, int32_t* ___numdsps0, const RuntimeMethod* method);
// FMOD.RESULT FMOD.ChannelGroup::getDSP(System.Int32,FMOD.DSP&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ChannelGroup_getDSP_m22620EE3691896CD4D2FADC3CF1FACD3D83C5E2B (ChannelGroup_tE4C8A600CF2C0DE7A4D5924C072EFAD2E5CF172A * __this, int32_t ___index0, DSP_t3554E4816E29B84C01A61DD26D8A8FC5831A2412 * ___dsp1, const RuntimeMethod* method);
// FMOD.RESULT FMOD.DSP::getInfo(System.String&,System.UInt32&,System.Int32&,System.Int32&,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DSP_getInfo_mC64A8D3730DAF1F8CAEB3B0EA46D319E0D84638F (DSP_t3554E4816E29B84C01A61DD26D8A8FC5831A2412 * __this, String_t** ___name0, uint32_t* ___version1, int32_t* ___channels2, int32_t* ___configwidth3, int32_t* ___configheight4, const RuntimeMethod* method);
// System.Boolean System.String::Equals(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_Equals_m8A062B96B61A7D652E7D73C9B3E904F6B0E5F41D (String_t* __this, String_t* ___value0, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::LogError(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogError_m8850D65592770A364D494025FF3A73E8D4D70485 (RuntimeObject * ___message0, const RuntimeMethod* method);
// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::Scale(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  Matrix4x4_Scale_m62CFAE1F96495BD3F39D6FB21385C04B9ACC50ED (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___vector0, const RuntimeMethod* method);
// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t * Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E (RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  ___handle0, const RuntimeMethod* method);
// System.Int32 System.Runtime.InteropServices.Marshal::SizeOf(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Marshal_SizeOf_m5482D50095CD4ECFFE66778DDAB9173AD834E85A (Type_t * ___t0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::get_zero()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_get_zero_m1A8F7993167785F750B6B01762D22C2597C84EF6 (const RuntimeMethod* method);
// System.Void UnityEngine.Bounds::.ctor(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Bounds__ctor_m8356472A177F4B22FFCE8911EBC8547A65A07CA3 (Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___center0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___size1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<FmodResonanceAudioRoom>::.ctor()
inline void List_1__ctor_m4F7CAAFF666B4EB64E83D971BA5BE61F228D0D33 (List_1_t7DC37F87EBBCA84046EA55A3F9E0440CB00F79D7 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t7DC37F87EBBCA84046EA55A3F9E0440CB00F79D7 *, const RuntimeMethod*))List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_gshared)(__this, method);
}
// System.Boolean FmodResonanceAudio::IsListenerInsideRoom(FmodResonanceAudioRoom)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool FmodResonanceAudio_IsListenerInsideRoom_m79F8FEAE499DECFDF3DED44A3F838EE56FF19780 (FmodResonanceAudioRoom_t61B0C3B3436B4E982A0D69FB7F0B710C551B7089 * ___room0, const RuntimeMethod* method);
// System.Void FmodResonanceAudio::UpdateAudioRoom(FmodResonanceAudioRoom,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FmodResonanceAudio_UpdateAudioRoom_m7BA261F45B51012C063F8EF663E86E2CF6AE0F59 (FmodResonanceAudioRoom_t61B0C3B3436B4E982A0D69FB7F0B710C551B7089 * ___room0, bool ___roomEnabled1, const RuntimeMethod* method);
// UnityEngine.Color UnityEngine.Color::get_yellow()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  Color_get_yellow_m9FD4BDABA7E40E136BE57EE7872CEA6B1B2FA1D1 (const RuntimeMethod* method);
// System.Void UnityEngine.Gizmos::set_color(UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Gizmos_set_color_m937ACC6288C81BAFFC3449FAA03BB4F680F4E74F (Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___value0, const RuntimeMethod* method);
// UnityEngine.Matrix4x4 UnityEngine.Transform::get_localToWorldMatrix()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  Transform_get_localToWorldMatrix_m6B810B0F20BA5DE48009461A4D662DD8BFF6A3CC (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Gizmos::set_matrix(UnityEngine.Matrix4x4)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Gizmos_set_matrix_m635EE6CFFB53AC66FD134F82BEA90D1EAAAD5D5C (Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Gizmos::DrawWireCube(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Gizmos_DrawWireCube_mC526244E50C6E5793D4066C9C99023D5FF8424BF (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___center0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___size1, const RuntimeMethod* method);
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED (MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * __this, const RuntimeMethod* method);
// System.Void IndoorAtlas.IndoorAtlasARWayfinding::InstantiateTurns()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IndoorAtlasARWayfinding_InstantiateTurns_m0466A919D74A5153F9EAD53A7E6C8FAC8D334B50 (IndoorAtlasARWayfinding_tEC5C5F2513334FDA2BC5A261CB74E6E413413904 * __this, const RuntimeMethod* method);
// System.Void IndoorAtlas.LocationManager::StopMonitoringForWayfinding()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LocationManager_StopMonitoringForWayfinding_m2F5829A7B66849F63247BCACB0FBE45D26ECCF52 (LocationManager_t8BEF4C1AFA85AB524CFB93A28DF2478A26E27401 * __this, const RuntimeMethod* method);
// System.Void IndoorAtlas.LocationManager::StartMonitoringForWayfinding(IndoorAtlas.LatLngFloor)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LocationManager_StartMonitoringForWayfinding_mCC75254D101458738B5CEE422D5D9C42DECFF88C (LocationManager_t8BEF4C1AFA85AB524CFB93A28DF2478A26E27401 * __this, LatLngFloor_t4B72E155829094591933053C9C85E867C1C255C3 * ___to0, const RuntimeMethod* method);
// UnityEngine.XR.ARSubsystems.NotTrackingReason UnityEngine.XR.ARFoundation.ARSession::get_notTrackingReason()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ARSession_get_notTrackingReason_m346D5BD4415CD34223970E3FAF019A78E86B606F_inline (const RuntimeMethod* method);
// System.Boolean IndoorAtlas.IndoorAtlasARWayfinding::IsTracking()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool IndoorAtlasARWayfinding_IsTracking_mCB70DFCA58A3C42FD128FB57E0B535038C9E108D (IndoorAtlasARWayfinding_tEC5C5F2513334FDA2BC5A261CB74E6E413413904 * __this, const RuntimeMethod* method);
// UnityEngine.XR.ARFoundation.TrackableCollection`1<!4> UnityEngine.XR.ARFoundation.ARTrackableManager`5<UnityEngine.XR.ARSubsystems.XRPlaneSubsystem,UnityEngine.XR.ARSubsystems.XRPlaneSubsystemDescriptor,UnityEngine.XR.ARSubsystems.XRPlaneSubsystem/Provider,UnityEngine.XR.ARSubsystems.BoundedPlane,UnityEngine.XR.ARFoundation.ARPlane>::get_trackables()
inline TrackableCollection_1_tF901F9001ABC2CCCF561F7CB246E74516ABB8EFB  ARTrackableManager_5_get_trackables_m1868AA38C59A0E75D2FA03964898FB15577FD7E9 (ARTrackableManager_5_tB03CF7F1B5B39FA73203E7F2342207BD4FF540B7 * __this, const RuntimeMethod* method)
{
	return ((  TrackableCollection_1_tF901F9001ABC2CCCF561F7CB246E74516ABB8EFB  (*) (ARTrackableManager_5_tB03CF7F1B5B39FA73203E7F2342207BD4FF540B7 *, const RuntimeMethod*))ARTrackableManager_5_get_trackables_mA9C079E7BC627AE1E6161C84146FAB7B4283F647_gshared)(__this, method);
}
// UnityEngine.XR.ARFoundation.TrackableCollection`1/Enumerator<!0> UnityEngine.XR.ARFoundation.TrackableCollection`1<UnityEngine.XR.ARFoundation.ARPlane>::GetEnumerator()
inline Enumerator_t7966991B2B4ED87E60D0CB1DA4C8228004A3D386  TrackableCollection_1_GetEnumerator_mAB63B26E604CFE12281E5B212826C7609CF11A5C (TrackableCollection_1_tF901F9001ABC2CCCF561F7CB246E74516ABB8EFB * __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t7966991B2B4ED87E60D0CB1DA4C8228004A3D386  (*) (TrackableCollection_1_tF901F9001ABC2CCCF561F7CB246E74516ABB8EFB *, const RuntimeMethod*))TrackableCollection_1_GetEnumerator_m8F500D7F92731D0C759C54F845BF7824A90E9ABE_gshared)(__this, method);
}
// !0 UnityEngine.XR.ARFoundation.TrackableCollection`1/Enumerator<UnityEngine.XR.ARFoundation.ARPlane>::get_Current()
inline ARPlane_t6336725EC68CE9029844CBE72A7FE7374AD74891 * Enumerator_get_Current_m3D5E7C33ACC22CA9FBB0725D35D75D86592FFB29 (Enumerator_t7966991B2B4ED87E60D0CB1DA4C8228004A3D386 * __this, const RuntimeMethod* method)
{
	return ((  ARPlane_t6336725EC68CE9029844CBE72A7FE7374AD74891 * (*) (Enumerator_t7966991B2B4ED87E60D0CB1DA4C8228004A3D386 *, const RuntimeMethod*))Enumerator_get_Current_m39A0AD5C1E46A028907AE6D774752B6F22946EF3_gshared)(__this, method);
}
// UnityEngine.XR.ARSubsystems.PlaneAlignment UnityEngine.XR.ARFoundation.ARPlane::get_alignment()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ARPlane_get_alignment_mE98AB13AA23A17118D57E28213955B32F96B7046 (ARPlane_t6336725EC68CE9029844CBE72A7FE7374AD74891 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.XR.ARFoundation.ARPlane::get_center()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ARPlane_get_center_mEDC87E2E4C5029D34515F17E9B2D80B9125B5484 (ARPlane_t6336725EC68CE9029844CBE72A7FE7374AD74891 * __this, const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.XR.ARFoundation.ARPlane::get_extents()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ARPlane_get_extents_m15E7D52F5BBB68F8EF0871A573894309B1D9B623 (ARPlane_t6336725EC68CE9029844CBE72A7FE7374AD74891 * __this, const RuntimeMethod* method);
// System.Void IndoorAtlas.LocationManager::AddArPlane(System.Single,System.Single,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LocationManager_AddArPlane_m227A719233C25CADDC1F98FEF31133337EE3B987 (LocationManager_t8BEF4C1AFA85AB524CFB93A28DF2478A26E27401 * __this, float ___cx0, float ___cy1, float ___cz2, float ___ex3, float ___ez4, const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.ARFoundation.TrackableCollection`1/Enumerator<UnityEngine.XR.ARFoundation.ARPlane>::MoveNext()
inline bool Enumerator_MoveNext_mAD42DB33FFA5B95D44127214BCD44B64BE5FE094 (Enumerator_t7966991B2B4ED87E60D0CB1DA4C8228004A3D386 * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t7966991B2B4ED87E60D0CB1DA4C8228004A3D386 *, const RuntimeMethod*))Enumerator_MoveNext_m7C26F98E01304EA7C8F0B6E4FEF7E9787915AB1D_gshared)(__this, method);
}
// System.Void IndoorAtlas.LocationManager::SetArPoseMatrix(UnityEngine.Matrix4x4)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LocationManager_SetArPoseMatrix_mFC0339939BFCFDADD2F9200DB75C148676368107 (LocationManager_t8BEF4C1AFA85AB524CFB93A28DF2478A26E27401 * __this, Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  ___matrix0, const RuntimeMethod* method);
// System.Void System.Action`1<UnityEngine.XR.ARFoundation.ARCameraFrameEventArgs>::.ctor(System.Object,System.IntPtr)
inline void Action_1__ctor_m5F656FA67BDEAF94CFE4483389771AB19C419D16 (Action_1_tA34B23CE57B7192055F9BF04AA14FCCB2ED91C68 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_1_tA34B23CE57B7192055F9BF04AA14FCCB2ED91C68 *, RuntimeObject *, intptr_t, const RuntimeMethod*))Action_1__ctor_m5F656FA67BDEAF94CFE4483389771AB19C419D16_gshared)(__this, ___object0, ___method1, method);
}
// System.Void UnityEngine.XR.ARFoundation.ARCameraManager::add_frameReceived(System.Action`1<UnityEngine.XR.ARFoundation.ARCameraFrameEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARCameraManager_add_frameReceived_m89E016132AD25B2F5402EB0996DAC4E5D6B1C035 (ARCameraManager_tD802D88B523419FD1AC898539EE734DA20903874 * __this, Action_1_tA34B23CE57B7192055F9BF04AA14FCCB2ED91C68 * ___value0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___x0, Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___y1, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARFoundation.ARCameraManager::remove_frameReceived(System.Action`1<UnityEngine.XR.ARFoundation.ARCameraFrameEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARCameraManager_remove_frameReceived_mDB7093508DC69244620BA73A5DBEF42C1C9C4B64 (ARCameraManager_tD802D88B523419FD1AC898539EE734DA20903874 * __this, Action_1_tA34B23CE57B7192055F9BF04AA14FCCB2ED91C68 * ___value0, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<UnityEngine.XR.ARFoundation.ARCameraManager>()
inline ARCameraManager_tD802D88B523419FD1AC898539EE734DA20903874 * Component_GetComponent_TisARCameraManager_tD802D88B523419FD1AC898539EE734DA20903874_m0CA6E904AA2D0AC7188DA8E92C050226DEC7171C (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  ARCameraManager_tD802D88B523419FD1AC898539EE734DA20903874 * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared)(__this, method);
}
// System.Void IndoorAtlas.IndoorAtlasARWayfinding::RegisterFrameEvent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IndoorAtlasARWayfinding_RegisterFrameEvent_m0D844826D4A32744F52A024CDBCF3B31FB459550 (IndoorAtlasARWayfinding_tEC5C5F2513334FDA2BC5A261CB74E6E413413904 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.GameObject::SetActive(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, bool ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Destroy_m3EEDB6ECD49A541EC826EA8E1C8B599F7AF67D30 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___obj0, const RuntimeMethod* method);
// System.Void IndoorAtlas.IndoorAtlasARWayfinding::DestroyTurns()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IndoorAtlasARWayfinding_DestroyTurns_m97AD515DAEAC07F2E39D4D29B97DF8E7DDDDED16 (IndoorAtlasARWayfinding_tEC5C5F2513334FDA2BC5A261CB74E6E413413904 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Object::Instantiate<UnityEngine.GameObject>(!!0)
inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m26431AC51B9B7A43FBABD10B4923B72B0C578F33 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___original0, const RuntimeMethod* method)
{
	return ((  GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_m4039C8E65629D33E1EC84D2505BF1D5DDC936622_gshared)(___original0, method);
}
// System.Void IndoorAtlas.LocationManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LocationManager__ctor_m8A7B0F89185A993CE9C081C9CFEF2903E2365180 (LocationManager_t8BEF4C1AFA85AB524CFB93A28DF2478A26E27401 * __this, const RuntimeMethod* method);
// System.Boolean IndoorAtlas.LocationManager::GetArIsConverged()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool LocationManager_GetArIsConverged_m2D858C4AAF7B14882046F22F8D3E2712C5E7DFEB (LocationManager_t8BEF4C1AFA85AB524CFB93A28DF2478A26E27401 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Events.UnityAction::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAction__ctor_m48C04C4C0F46918CF216A2410A4E58D31B6362BA (UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void UnityEngine.Application::add_onBeforeRender(UnityEngine.Events.UnityAction)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Application_add_onBeforeRender_mFA00908B51F922621B710B65E8576C29D437FE19 (UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Application::remove_onBeforeRender(UnityEngine.Events.UnityAction)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Application_remove_onBeforeRender_m3F833FAB6D8A4A178173DFE9D644341657F2E9AE (UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * ___value0, const RuntimeMethod* method);
// System.Void IndoorAtlas.LocationManager::ReleaseArSession()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LocationManager_ReleaseArSession_mE30A17ECF1D45F32CA711DC0B9A55F5A356AE463 (LocationManager_t8BEF4C1AFA85AB524CFB93A28DF2478A26E27401 * __this, const RuntimeMethod* method);
// UnityEngine.Matrix4x4 UnityEngine.Camera::get_cameraToWorldMatrix()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  Camera_get_cameraToWorldMatrix_mF7D93E61CD5BA342E73DA71CF6F687A8642E812F (Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * __this, const RuntimeMethod* method);
// System.Void IndoorAtlas.LocationManager::SetArCameraToWorldMatrix(UnityEngine.Matrix4x4)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LocationManager_SetArCameraToWorldMatrix_m94D63F03ABE808EE83C26BEE1496D05402473A35 (LocationManager_t8BEF4C1AFA85AB524CFB93A28DF2478A26E27401 * __this, Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  ___matrix0, const RuntimeMethod* method);
// UnityEngine.Matrix4x4 IndoorAtlas.LocationManager::GetArCompassMatrix()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  LocationManager_GetArCompassMatrix_m577C7F3D5B8F6A95CA941A9C483117EC4234E786 (LocationManager_t8BEF4C1AFA85AB524CFB93A28DF2478A26E27401 * __this, const RuntimeMethod* method);
// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::get_identity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  Matrix4x4_get_identity_mC91289718DDD3DDBE0A10551BDA59A446414A596 (const RuntimeMethod* method);
// System.Boolean UnityEngine.Matrix4x4::op_Inequality(UnityEngine.Matrix4x4,UnityEngine.Matrix4x4)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Matrix4x4_op_Inequality_m6E62E1FDEDC9AF783BE1041726A18BCA5E6CFC6D (Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  ___lhs0, Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  ___rhs1, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_rotation(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_rotation_m1B5F3D4CE984AB31254615C9C71B0E54978583B4 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_position(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___value0, const RuntimeMethod* method);
// UnityEngine.Matrix4x4 IndoorAtlas.LocationManager::GetArGoalMatrix()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  LocationManager_GetArGoalMatrix_m07B3D5DEAB94464F11CA1C4C79DFA1A793437084 (LocationManager_t8BEF4C1AFA85AB524CFB93A28DF2478A26E27401 * __this, const RuntimeMethod* method);
// System.Int32 IndoorAtlas.LocationManager::GetArTurnCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t LocationManager_GetArTurnCount_m7AF1AC7D1EB607813A0F823AFAB83D45F4870B52 (LocationManager_t8BEF4C1AFA85AB524CFB93A28DF2478A26E27401 * __this, const RuntimeMethod* method);
// UnityEngine.Matrix4x4 IndoorAtlas.LocationManager::GetArTurnMatrix(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  LocationManager_GetArTurnMatrix_mCBE4C044583A3C363CD3163AF90E2E22617F8074 (LocationManager_t8BEF4C1AFA85AB524CFB93A28DF2478A26E27401 * __this, int32_t ___index0, const RuntimeMethod* method);
// System.Void IndoorAtlas.LocationManager::SetDistanceFilter(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LocationManager_SetDistanceFilter_mA6BEFA3085F374274F2538651F9DE1EF2AD7DEF8 (LocationManager_t8BEF4C1AFA85AB524CFB93A28DF2478A26E27401 * __this, double ___filter0, const RuntimeMethod* method);
// System.Void IndoorAtlas.LocationManager::SetTimeFilter(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LocationManager_SetTimeFilter_mBE593A3417515514A61CCD998B320B05434C05D0 (LocationManager_t8BEF4C1AFA85AB524CFB93A28DF2478A26E27401 * __this, double ___filter0, const RuntimeMethod* method);
// System.Void IndoorAtlas.LocationManager::SetHeadingFilter(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LocationManager_SetHeadingFilter_mB49774182C58294745C0E29F60C25B7E5A95BF16 (LocationManager_t8BEF4C1AFA85AB524CFB93A28DF2478A26E27401 * __this, double ___filter0, const RuntimeMethod* method);
// System.Void IndoorAtlas.LocationManager::SetAttitudeFilter(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LocationManager_SetAttitudeFilter_m3AEFDB7B5BF23E1A7F6A2726B98B1A009722EE45 (LocationManager_t8BEF4C1AFA85AB524CFB93A28DF2478A26E27401 * __this, double ___filter0, const RuntimeMethod* method);
// !!0[] UnityEngine.Object::FindObjectsOfType<IndoorAtlas.IndoorAtlasSession>()
inline IndoorAtlasSessionU5BU5D_t9AD63F9432C1B91572F9BA61CB38F80198F4D3A1* Object_FindObjectsOfType_TisIndoorAtlasSession_t481C53C3F6FF3CBB05117D2F9D20BCCE12FB511F_m74FECDBDD2896EF7C3E03FA97E964C87916D4574 (const RuntimeMethod* method)
{
	return ((  IndoorAtlasSessionU5BU5D_t9AD63F9432C1B91572F9BA61CB38F80198F4D3A1* (*) (const RuntimeMethod*))Object_FindObjectsOfType_TisRuntimeObject_m0015B67D48097755F4D6B1D2614DA7ED5C899F18_gshared)(method);
}
// System.String UnityEngine.Object::get_name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Object_get_name_m0C7BC870ED2F0DC5A2FB09628136CD7D1CB82CFB (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * __this, const RuntimeMethod* method);
// System.String System.String::Format(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mB3D38E5238C3164DB4D7D29339D9E225A4496D17 (String_t* ___format0, RuntimeObject * ___arg01, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::LogWarningFormat(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogWarningFormat_m405E9C0A631F815816F349D7591DD545932FF774 (String_t* ___format0, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___args1, const RuntimeMethod* method);
// System.Void IndoorAtlas.LocationManager::Init(System.String,System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LocationManager_Init_mF9ECC915841247295BE7BC0E5C85A5E822B4ADB7 (LocationManager_t8BEF4C1AFA85AB524CFB93A28DF2478A26E27401 * __this, String_t* ___apiKey0, String_t* ___apiSecret1, String_t* ___apiEndpoint2, String_t* ___session3, const RuntimeMethod* method);
// System.Void IndoorAtlas.LocationManager::StartUpdatingLocation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LocationManager_StartUpdatingLocation_m9B2BE343A453530CA63EBDC51485122746365470 (LocationManager_t8BEF4C1AFA85AB524CFB93A28DF2478A26E27401 * __this, const RuntimeMethod* method);
// System.Void IndoorAtlas.LocationManager::StopUpdatingLocation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LocationManager_StopUpdatingLocation_m52713DEAE75ACB104FD5C70C6B99DEDF7EA32106 (LocationManager_t8BEF4C1AFA85AB524CFB93A28DF2478A26E27401 * __this, const RuntimeMethod* method);
// System.Void IndoorAtlas.LocationManager::Close()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LocationManager_Close_mCA6E7114846B4399331785DCC658CF25791E879B (LocationManager_t8BEF4C1AFA85AB524CFB93A28DF2478A26E27401 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.JsonUtility::FromJson<IndoorAtlas.Location>(System.String)
inline Location_t80005B8E8D4EB97F3D3B810B36FECF5F1D064FF7 * JsonUtility_FromJson_TisLocation_t80005B8E8D4EB97F3D3B810B36FECF5F1D064FF7_m698BA6FDCBCB81AEAC6118A324AF03274726C959 (String_t* ___json0, const RuntimeMethod* method)
{
	return ((  Location_t80005B8E8D4EB97F3D3B810B36FECF5F1D064FF7 * (*) (String_t*, const RuntimeMethod*))JsonUtility_FromJson_TisRuntimeObject_m7398DCFD1F6BF2A10AB1274ABED512F322F8F4B4_gshared)(___json0, method);
}
// System.Void UnityEngine.Debug::Log(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8 (RuntimeObject * ___message0, const RuntimeMethod* method);
// System.Void UnityEngine.Component::BroadcastMessage(System.String,System.Object,UnityEngine.SendMessageOptions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Component_BroadcastMessage_mF05169CE80661240769300D09DAB34FBD9C93C0C (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, String_t* ___methodName0, RuntimeObject * ___parameter1, int32_t ___options2, const RuntimeMethod* method);
// !!0 UnityEngine.JsonUtility::FromJson<IndoorAtlas.Status>(System.String)
inline Status_t18AA7FCE4BA6D9E03B84C464B649B6E514066005 * JsonUtility_FromJson_TisStatus_t18AA7FCE4BA6D9E03B84C464B649B6E514066005_mAD9AEB40892CC21237D3623B4BDCED6794645974 (String_t* ___json0, const RuntimeMethod* method)
{
	return ((  Status_t18AA7FCE4BA6D9E03B84C464B649B6E514066005 * (*) (String_t*, const RuntimeMethod*))JsonUtility_FromJson_TisRuntimeObject_m7398DCFD1F6BF2A10AB1274ABED512F322F8F4B4_gshared)(___json0, method);
}
// !!0 UnityEngine.JsonUtility::FromJson<IndoorAtlas.Heading>(System.String)
inline Heading_t690A771FCF76A48B0B0FADBE2B864C6D2F2B5D80 * JsonUtility_FromJson_TisHeading_t690A771FCF76A48B0B0FADBE2B864C6D2F2B5D80_mEB4C078CFC309C41A02510F20F91D19F32932F58 (String_t* ___json0, const RuntimeMethod* method)
{
	return ((  Heading_t690A771FCF76A48B0B0FADBE2B864C6D2F2B5D80 * (*) (String_t*, const RuntimeMethod*))JsonUtility_FromJson_TisRuntimeObject_m7398DCFD1F6BF2A10AB1274ABED512F322F8F4B4_gshared)(___json0, method);
}
// !!0 UnityEngine.JsonUtility::FromJson<IndoorAtlas.Orientation>(System.String)
inline Orientation_tA3C51FC6A527FD5C23B350DAE81C5FA79A0510AF * JsonUtility_FromJson_TisOrientation_tA3C51FC6A527FD5C23B350DAE81C5FA79A0510AF_m34164B15BDFF3CDE8299911CB22DCD6895CB1EA6 (String_t* ___json0, const RuntimeMethod* method)
{
	return ((  Orientation_tA3C51FC6A527FD5C23B350DAE81C5FA79A0510AF * (*) (String_t*, const RuntimeMethod*))JsonUtility_FromJson_TisRuntimeObject_m7398DCFD1F6BF2A10AB1274ABED512F322F8F4B4_gshared)(___json0, method);
}
// UnityEngine.Quaternion IndoorAtlas.Orientation::getQuaternion()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  Orientation_getQuaternion_mC8A9C8A10238244459A5FA35D137B131303DF835 (Orientation_tA3C51FC6A527FD5C23B350DAE81C5FA79A0510AF * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Quaternion::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Quaternion__ctor_m564FA9302F5B9DA8BAB97B0A2D86FFE83ACAA421 (Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * __this, float ___x0, float ___y1, float ___z2, float ___w3, const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Quaternion::Euler(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  Quaternion_Euler_m887ABE4F4DD563351E9874D63922C2F53969BBAB (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___euler0, const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Quaternion::op_Multiply(UnityEngine.Quaternion,UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  Quaternion_op_Multiply_m5C7A60AC0CDCA2C5E2F23E45FBD1B15CA152D7B0 (Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___lhs0, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___rhs1, const RuntimeMethod* method);
// !!0 UnityEngine.JsonUtility::FromJson<IndoorAtlas.Region>(System.String)
inline Region_t68EA17CE90BDC22C15E4531418B3B123519AADEB * JsonUtility_FromJson_TisRegion_t68EA17CE90BDC22C15E4531418B3B123519AADEB_m48D34C14B1AF378686531A102CABBA0F9DA3D915 (String_t* ___json0, const RuntimeMethod* method)
{
	return ((  Region_t68EA17CE90BDC22C15E4531418B3B123519AADEB * (*) (String_t*, const RuntimeMethod*))JsonUtility_FromJson_TisRuntimeObject_m7398DCFD1F6BF2A10AB1274ABED512F322F8F4B4_gshared)(___json0, method);
}
// !!0 UnityEngine.JsonUtility::FromJson<IndoorAtlas.Route>(System.String)
inline Route_t8BB2F4499BD36E373F67536902ECDFF016551E5F * JsonUtility_FromJson_TisRoute_t8BB2F4499BD36E373F67536902ECDFF016551E5F_mFFABDF2BA9C572F7539565B162CB3B17F1B1BC79 (String_t* ___json0, const RuntimeMethod* method)
{
	return ((  Route_t8BB2F4499BD36E373F67536902ECDFF016551E5F * (*) (String_t*, const RuntimeMethod*))JsonUtility_FromJson_TisRuntimeObject_m7398DCFD1F6BF2A10AB1274ABED512F322F8F4B4_gshared)(___json0, method);
}
// System.Int32 UnityEngine.UI.Dropdown::get_value()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Dropdown_get_value_mFBF47E0C72050C5CB96B8B6D33F41BA2D1368F26_inline (Dropdown_t099F5232BB75810BC79EED6E27DDCED46C3BCD96 * __this, const RuntimeMethod* method);
// System.Void IndoorAtlas.IndoorAtlasARWayfinding::set_wayfinding(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IndoorAtlasARWayfinding_set_wayfinding_m95202BBE23364C19B65660B50515064916CCB1E5 (IndoorAtlasARWayfinding_tEC5C5F2513334FDA2BC5A261CB74E6E413413904 * __this, bool ___value0, const RuntimeMethod* method);
// System.Void IndoorAtlas.IndoorAtlasARWayfinding::set_target(IndoorAtlas.LatLngFloor)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IndoorAtlasARWayfinding_set_target_m60F3F2A0370A3DE06C183DFD09F52831AB9A685A (IndoorAtlasARWayfinding_tEC5C5F2513334FDA2BC5A261CB74E6E413413904 * __this, LatLngFloor_t4B72E155829094591933053C9C85E867C1C255C3 * ___value0, const RuntimeMethod* method);
// UnityEngine.UI.Dropdown/DropdownEvent UnityEngine.UI.Dropdown::get_onValueChanged()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR DropdownEvent_tEB2C75C3DBC789936B31D9A979FD62E047846CFB * Dropdown_get_onValueChanged_m05479714AEB528CF5CE93ED09870E98E6EC94CFA_inline (Dropdown_t099F5232BB75810BC79EED6E27DDCED46C3BCD96 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Events.UnityEvent`1<System.Int32>::RemoveListener(UnityEngine.Events.UnityAction`1<!0>)
inline void UnityEvent_1_RemoveListener_m0DDD8A7A01D83C10E72C71631F8487FE817B264D (UnityEvent_1_tB235B5DAD099AC425DC059D10DEB8B97A35E2BBF * __this, UnityAction_1_t5CF46572372725E6225588C466A7AF5C8597AA79 * ___call0, const RuntimeMethod* method)
{
	((  void (*) (UnityEvent_1_tB235B5DAD099AC425DC059D10DEB8B97A35E2BBF *, UnityAction_1_t5CF46572372725E6225588C466A7AF5C8597AA79 *, const RuntimeMethod*))UnityEvent_1_RemoveListener_m0DDD8A7A01D83C10E72C71631F8487FE817B264D_gshared)(__this, ___call0, method);
}
// System.Void UnityEngine.Events.UnityAction`1<System.Int32>::.ctor(System.Object,System.IntPtr)
inline void UnityAction_1__ctor_m595DA2ECB187B2DF951D640BFEBCE02F3F800A3F (UnityAction_1_t5CF46572372725E6225588C466A7AF5C8597AA79 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (UnityAction_1_t5CF46572372725E6225588C466A7AF5C8597AA79 *, RuntimeObject *, intptr_t, const RuntimeMethod*))UnityAction_1__ctor_m595DA2ECB187B2DF951D640BFEBCE02F3F800A3F_gshared)(__this, ___object0, ___method1, method);
}
// System.Void UnityEngine.Events.UnityEvent`1<System.Int32>::AddListener(UnityEngine.Events.UnityAction`1<!0>)
inline void UnityEvent_1_AddListener_mFCFAC8ACA3F75283268DC2629ADEB5504E8FC0C2 (UnityEvent_1_tB235B5DAD099AC425DC059D10DEB8B97A35E2BBF * __this, UnityAction_1_t5CF46572372725E6225588C466A7AF5C8597AA79 * ___call0, const RuntimeMethod* method)
{
	((  void (*) (UnityEvent_1_tB235B5DAD099AC425DC059D10DEB8B97A35E2BBF *, UnityAction_1_t5CF46572372725E6225588C466A7AF5C8597AA79 *, const RuntimeMethod*))UnityEvent_1_AddListener_mFCFAC8ACA3F75283268DC2629ADEB5504E8FC0C2_gshared)(__this, ___call0, method);
}
// System.Void UnityEngine.UI.Dropdown::ClearOptions()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dropdown_ClearOptions_m7F59A8B054698715921D2B0E37EB1808BE53C23C (Dropdown_t099F5232BB75810BC79EED6E27DDCED46C3BCD96 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.String>::.ctor()
inline void List_1__ctor_m30C52A4F2828D86CA3FAB0B1B583948F4DA9F1F9 (List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 *, const RuntimeMethod*))List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<System.String>::Add(!0)
inline void List_1_Add_m627ED3F7C50096BB8934F778CB980E79483BD2AE (List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * __this, String_t* ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 *, String_t*, const RuntimeMethod*))List_1_Add_mE5B3CBB3A625606D9BC4337FEAAF1D66BCB6F96E_gshared)(__this, ___item0, method);
}
// System.Void UnityEngine.UI.Dropdown::AddOptions(System.Collections.Generic.List`1<System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dropdown_AddOptions_m2375327887D29ACE452F157863186FC8D0AA4AF9 (Dropdown_t099F5232BB75810BC79EED6E27DDCED46C3BCD96 * __this, List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * ___options0, const RuntimeMethod* method);
// System.String IndoorAtlas.LocationManager::GetTraceId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* LocationManager_GetTraceId_m73C700ED6F1A8AA9395019B8BE95B9E7D420D104 (LocationManager_t8BEF4C1AFA85AB524CFB93A28DF2478A26E27401 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.MonoBehaviour::InvokeRepeating(System.String,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour_InvokeRepeating_mB77F4276826FBA696A150831D190875CB5802C70 (MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * __this, String_t* ___methodName0, float ___time1, float ___repeatRate2, const RuntimeMethod* method);
// System.Void UnityEngine.MonoBehaviour::CancelInvoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour_CancelInvoke_mAF87B47704B16B114F82AC6914E4DA9AE034095D (MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * __this, const RuntimeMethod* method);
// System.Void IndoorAtlas.IndoorAtlasUIInformationProvider::onPoiChanged()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IndoorAtlasUIInformationProvider_onPoiChanged_mCB91CA1CA21DFC7DA4DFF3B38D6451D6F2CAEC50 (IndoorAtlasUIInformationProvider_t78A97B431F32A79E128252E349214170A053E060 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<UnityEngine.Camera>()
inline Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * Component_GetComponent_TisCamera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_mE17146EF5B0D8E9F9D2D2D94567BF211AD00D320 (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared)(__this, method);
}
// System.Boolean IndoorAtlas.LocationManager::indooratlas_init(System.String,System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool LocationManager_indooratlas_init_m63FDAD50BB9EE85109E71B4B7A793EF225194755 (String_t* ___apikey0, String_t* ___apisecret1, String_t* ___apiEndpoint2, String_t* ___session3, const RuntimeMethod* method);
// System.Void System.Exception::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Exception__ctor_m8ECDE8ACA7F2E0EF1144BD1200FB5DB2870B5F11 (Exception_t * __this, String_t* ___message0, const RuntimeMethod* method);
// System.Boolean IndoorAtlas.LocationManager::indooratlas_close()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool LocationManager_indooratlas_close_mF93A4EACB9D4A4DE1B1F416218B585D1C2D0FC2D (const RuntimeMethod* method);
// System.String IndoorAtlas.LocationManager::indooratlas_versionString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* LocationManager_indooratlas_versionString_m1F872EB7D2D315387C0F2001FBCD579465951376 (const RuntimeMethod* method);
// System.Void IndoorAtlas.LocationManager::indooratlas_setDistanceFilter(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LocationManager_indooratlas_setDistanceFilter_mBF48FB37A8D420BFDDC3ED933A758EDED80E537D (double ___filter0, const RuntimeMethod* method);
// System.Double IndoorAtlas.LocationManager::indooratlas_getDistanceFilter()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double LocationManager_indooratlas_getDistanceFilter_mCA4B6E0DA27162C2672D3F525502C5FB48E1B41F (const RuntimeMethod* method);
// System.Void IndoorAtlas.LocationManager::indooratlas_setTimeFilter(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LocationManager_indooratlas_setTimeFilter_m5846FA5A995BAA90342B0C344450A9DED5C73155 (double ___filter0, const RuntimeMethod* method);
// System.Double IndoorAtlas.LocationManager::indooratlas_getTimeFilter()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double LocationManager_indooratlas_getTimeFilter_m49C2337D3A6049F9A0565A66AB8F05674388EAD4 (const RuntimeMethod* method);
// System.Void IndoorAtlas.LocationManager::indooratlas_setHeadingFilter(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LocationManager_indooratlas_setHeadingFilter_mB93BB580C75F6C8DEE64B6691BD84F4E775FFCAD (double ___filter0, const RuntimeMethod* method);
// System.Double IndoorAtlas.LocationManager::indooratlas_getHeadingFilter()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double LocationManager_indooratlas_getHeadingFilter_m4836AD637B74D945700C787305CAD065A386E86B (const RuntimeMethod* method);
// System.Void IndoorAtlas.LocationManager::indooratlas_setAttitudeFilter(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LocationManager_indooratlas_setAttitudeFilter_m01A07166B2AB20B645C2DB8817969D4402626282 (double ___filter0, const RuntimeMethod* method);
// System.Double IndoorAtlas.LocationManager::indooratlas_getAttitudeFilter()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double LocationManager_indooratlas_getAttitudeFilter_m3FB3959724BB66B47BA6CEED337C104D823A8C7C (const RuntimeMethod* method);
// System.Void IndoorAtlas.LocationManager::indooratlas_lockFloor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LocationManager_indooratlas_lockFloor_mE1E2A6D0B6099F47062ADE7F769A39DD32FEA7A0 (int32_t ___floor0, const RuntimeMethod* method);
// System.Void IndoorAtlas.LocationManager::indooratlas_unlockFloor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LocationManager_indooratlas_unlockFloor_m8A3227D6ABB0F79FE3370939D82D1B931E4794C0 (const RuntimeMethod* method);
// System.Void IndoorAtlas.LocationManager::indooratlas_lockIndoors(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LocationManager_indooratlas_lockIndoors_mDA997CEE5BB39EB30B1E060596A37B78D95508E9 (bool ___flag0, const RuntimeMethod* method);
// System.Void IndoorAtlas.LocationManager::indooratlas_startUpdatingLocation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LocationManager_indooratlas_startUpdatingLocation_m8A8C515EAE52E08EE7EC46A27151B96EFF2AC20F (const RuntimeMethod* method);
// System.Void IndoorAtlas.LocationManager::indooratlas_stopUpdatingLocation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LocationManager_indooratlas_stopUpdatingLocation_m2DDCD8BEB22F842122C8280493AEF53AE5A85734 (const RuntimeMethod* method);
// System.String UnityEngine.JsonUtility::ToJson(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* JsonUtility_ToJson_mF4F097C9AEC7699970E3E7E99EF8FF2F44DA1B5C (RuntimeObject * ___obj0, const RuntimeMethod* method);
// System.Void IndoorAtlas.LocationManager::indooratlas_startMonitoringForWayfinding(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LocationManager_indooratlas_startMonitoringForWayfinding_mBEAD9ACCFFECB48134A2F697272B94F4BF90FA73 (String_t* ___to0, const RuntimeMethod* method);
// System.Void IndoorAtlas.LocationManager::indooratlas_stopMonitoringForWayfinding()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LocationManager_indooratlas_stopMonitoringForWayfinding_m86A922D1801988B5C4032D45A6FA854E2BC1AD2D (const RuntimeMethod* method);
// System.String IndoorAtlas.LocationManager::indooratlas_traceID()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* LocationManager_indooratlas_traceID_m86AF1BB3BA7E476492ABBB9F75BD1A1F385B04D6 (const RuntimeMethod* method);
// System.Void IndoorAtlas.LocationManager::indooratlas_releaseArSession()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LocationManager_indooratlas_releaseArSession_m6B295BFF37E9571EC100C69DB0C11CA6CDBD16DF (const RuntimeMethod* method);
// UnityEngine.Matrix4x4 IndoorAtlas.LocationManager::UnityMatrixToIndoorAtlasMatrix(UnityEngine.Matrix4x4)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  LocationManager_UnityMatrixToIndoorAtlasMatrix_m086EAC6A11A014041A636A2DA85C5BA530A96086 (Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  ___matrix0, const RuntimeMethod* method);
// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::get_zero()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  Matrix4x4_get_zero_m653FAA37D26B00352B992A4B87CE534251FB91CC (const RuntimeMethod* method);
// System.Void UnityEngine.Matrix4x4::set_Item(System.Int32,System.Int32,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Matrix4x4_set_Item_mE286A89718710DDF166DF6ACF8A480D15FE06B2F (Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 * __this, int32_t ___row0, int32_t ___column1, float ___value2, const RuntimeMethod* method);
// System.Single UnityEngine.Matrix4x4::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Matrix4x4_get_Item_mA0E634EF5A723EA9DD824391D4C62F4100C64813 (Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 * __this, int32_t ___index0, const RuntimeMethod* method);
// System.Void IndoorAtlas.LocationManager::indooratlas_setArPoseMatrix(System.Single[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LocationManager_indooratlas_setArPoseMatrix_m28D866B0919FB8C9E58CB7018FE67C0CA1C8AD8B (SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* ___matrix0, const RuntimeMethod* method);
// UnityEngine.Matrix4x4 IndoorAtlas.LocationManager::IndoorAtlasMatrixToUnityMatrix(UnityEngine.Matrix4x4)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  LocationManager_IndoorAtlasMatrixToUnityMatrix_mC80001C4F8DB4C01D5D3077E75E02E64BC2A2603 (Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  ___matrix0, const RuntimeMethod* method);
// System.Void IndoorAtlas.LocationManager::indooratlas_setArCameraToWorldMatrix(System.Single[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LocationManager_indooratlas_setArCameraToWorldMatrix_m409055144FB685DDA46B6F78EB1CBDE51FDD5582 (SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* ___matrix0, const RuntimeMethod* method);
// System.Boolean IndoorAtlas.LocationManager::indooratlas_getArIsConverged()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool LocationManager_indooratlas_getArIsConverged_mABFE269A0873A62B8E19FF774B9F5065A65A1F55 (const RuntimeMethod* method);
// System.Boolean IndoorAtlas.LocationManager::indooratlas_getArCompassMatrix(System.Single[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool LocationManager_indooratlas_getArCompassMatrix_m10DF625ACA30365CA1F55C04B8ACA32DCCF79F30 (SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* ___matrix0, const RuntimeMethod* method);
// System.Void UnityEngine.Matrix4x4::set_Item(System.Int32,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Matrix4x4_set_Item_m27BC97EE3093FDADFE0804FB80AFF5CDB03D355B (Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 * __this, int32_t ___index0, float ___value1, const RuntimeMethod* method);
// System.Boolean IndoorAtlas.LocationManager::indooratlas_getArGoalMatrix(System.Single[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool LocationManager_indooratlas_getArGoalMatrix_mAC25A81728C29D3B8385291888B52D57B674BB25 (SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* ___matrix0, const RuntimeMethod* method);
// System.Int32 IndoorAtlas.LocationManager::indooratlas_getArTurnCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t LocationManager_indooratlas_getArTurnCount_m436A05C0CF2B83950FB654BD9D7FD6F66D8B3E59 (const RuntimeMethod* method);
// System.Boolean IndoorAtlas.LocationManager::indooratlas_getArTurnMatrix(System.Int32,System.Single[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool LocationManager_indooratlas_getArTurnMatrix_mACEAB96F3D145C9A2A706322EF0D07611E016241 (int32_t ___index0, SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* ___matrix1, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Matrix4x4::MultiplyPoint3x4(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Matrix4x4_MultiplyPoint3x4_mA0A34C5FD162DA8E5421596F1F921436F3E7B2FC (Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___point0, const RuntimeMethod* method);
// System.Void IndoorAtlas.LocationManager::indooratlas_addArPlane(System.Single,System.Single,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LocationManager_indooratlas_addArPlane_m2E916604667F7A94ECDAC0756D662CC0127C12D6 (float ___cx0, float ___cy1, float ___cz2, float ___ex3, float ___ez4, const RuntimeMethod* method);
// System.Void System.InvalidOperationException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvalidOperationException__ctor_mC012CE552988309733C896F3FEA8249171E4402E (InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB * __this, String_t* ___message0, const RuntimeMethod* method);
// System.Void UnityEngine.Vector2::.ctor(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * __this, float ___x0, float ___y1, const RuntimeMethod* method);
// System.Void System.ThrowHelper::ThrowArgumentOutOfRangeException()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929 (const RuntimeMethod* method);
IL2CPP_EXTERN_C int32_t DEFAULT_CALL indooratlas_init(char*, char*, char*, char*);
IL2CPP_EXTERN_C int32_t DEFAULT_CALL indooratlas_close();
IL2CPP_EXTERN_C char* DEFAULT_CALL indooratlas_versionString();
IL2CPP_EXTERN_C void DEFAULT_CALL indooratlas_setDistanceFilter(double);
IL2CPP_EXTERN_C double DEFAULT_CALL indooratlas_getDistanceFilter();
IL2CPP_EXTERN_C void DEFAULT_CALL indooratlas_setTimeFilter(double);
IL2CPP_EXTERN_C double DEFAULT_CALL indooratlas_getTimeFilter();
IL2CPP_EXTERN_C void DEFAULT_CALL indooratlas_setHeadingFilter(double);
IL2CPP_EXTERN_C double DEFAULT_CALL indooratlas_getHeadingFilter();
IL2CPP_EXTERN_C void DEFAULT_CALL indooratlas_setAttitudeFilter(double);
IL2CPP_EXTERN_C double DEFAULT_CALL indooratlas_getAttitudeFilter();
IL2CPP_EXTERN_C void DEFAULT_CALL indooratlas_lockFloor(int32_t);
IL2CPP_EXTERN_C void DEFAULT_CALL indooratlas_unlockFloor();
IL2CPP_EXTERN_C void DEFAULT_CALL indooratlas_lockIndoors(int32_t);
IL2CPP_EXTERN_C void DEFAULT_CALL indooratlas_startUpdatingLocation();
IL2CPP_EXTERN_C void DEFAULT_CALL indooratlas_stopUpdatingLocation();
IL2CPP_EXTERN_C void DEFAULT_CALL indooratlas_startMonitoringForWayfinding(char*);
IL2CPP_EXTERN_C void DEFAULT_CALL indooratlas_stopMonitoringForWayfinding();
IL2CPP_EXTERN_C char* DEFAULT_CALL indooratlas_traceID();
IL2CPP_EXTERN_C void DEFAULT_CALL indooratlas_releaseArSession();
IL2CPP_EXTERN_C void DEFAULT_CALL indooratlas_setArPoseMatrix(float*);
IL2CPP_EXTERN_C void DEFAULT_CALL indooratlas_setArCameraToWorldMatrix(float*);
IL2CPP_EXTERN_C int32_t DEFAULT_CALL indooratlas_getArIsConverged();
IL2CPP_EXTERN_C int32_t DEFAULT_CALL indooratlas_getArCompassMatrix(float*);
IL2CPP_EXTERN_C int32_t DEFAULT_CALL indooratlas_getArGoalMatrix(float*);
IL2CPP_EXTERN_C int32_t DEFAULT_CALL indooratlas_getArTurnCount();
IL2CPP_EXTERN_C int32_t DEFAULT_CALL indooratlas_getArTurnMatrix(int32_t, float*);
IL2CPP_EXTERN_C void DEFAULT_CALL indooratlas_addArPlane(float, float, float, float, float);
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
// System.Void IndoorAtlas.Floorplan::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Floorplan__ctor_m7B63EB9D15704E6434148A79B3EE8AD303E22AEC (Floorplan_t21C6DA32409E96BEF667B09E492E2CA79EA39A16 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
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
// System.Void FmodResonanceAudio::UpdateAudioRoom(FmodResonanceAudioRoom,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FmodResonanceAudio_UpdateAudioRoom_m7BA261F45B51012C063F8EF663E86E2CF6AE0F59 (FmodResonanceAudioRoom_t61B0C3B3436B4E982A0D69FB7F0B710C551B7089 * ___room0, bool ___roomEnabled1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FmodResonanceAudio_t1E98D428CDB6E2CB55939C63C147AA39834A72DB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mA62471E539473C242E0441E4355E41CD47D3CCFC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Contains_mD09C8AC0B27E9264130B1AD64B2C4B869C533402_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Remove_mD821441E24446F8BB5AECD26CA55EDCFB2B93F81_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m2EEAA0229AB41CEA9340261A3C0BC21C50D0875B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mEA6C6E5BF0130FF00BDA1986167ACD32A5D07EAF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Marshal_StructureToPtr_TisRoomProperties_tE26D849980D0755AE6E6CED6F90D5040FF8189CE_m1C0F38968295AF9ADFB26775FCC16F9669B79D8F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Marshal_tEBAFAE20369FCB1B38C49C4E27A8D8C2C4B55058_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	DSP_t3554E4816E29B84C01A61DD26D8A8FC5831A2412  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// if (roomEnabled) {
		bool L_0 = ___roomEnabled1;
		if (!L_0)
		{
			goto IL_001d;
		}
	}
	{
		// if (!enabledRooms.Contains(room)) {
		IL2CPP_RUNTIME_CLASS_INIT(FmodResonanceAudio_t1E98D428CDB6E2CB55939C63C147AA39834A72DB_il2cpp_TypeInfo_var);
		List_1_t7DC37F87EBBCA84046EA55A3F9E0440CB00F79D7 * L_1 = ((FmodResonanceAudio_t1E98D428CDB6E2CB55939C63C147AA39834A72DB_StaticFields*)il2cpp_codegen_static_fields_for(FmodResonanceAudio_t1E98D428CDB6E2CB55939C63C147AA39834A72DB_il2cpp_TypeInfo_var))->get_enabledRooms_11();
		FmodResonanceAudioRoom_t61B0C3B3436B4E982A0D69FB7F0B710C551B7089 * L_2 = ___room0;
		NullCheck(L_1);
		bool L_3;
		L_3 = List_1_Contains_mD09C8AC0B27E9264130B1AD64B2C4B869C533402(L_1, L_2, /*hidden argument*/List_1_Contains_mD09C8AC0B27E9264130B1AD64B2C4B869C533402_RuntimeMethod_var);
		if (L_3)
		{
			goto IL_0029;
		}
	}
	{
		// enabledRooms.Add(room);
		IL2CPP_RUNTIME_CLASS_INIT(FmodResonanceAudio_t1E98D428CDB6E2CB55939C63C147AA39834A72DB_il2cpp_TypeInfo_var);
		List_1_t7DC37F87EBBCA84046EA55A3F9E0440CB00F79D7 * L_4 = ((FmodResonanceAudio_t1E98D428CDB6E2CB55939C63C147AA39834A72DB_StaticFields*)il2cpp_codegen_static_fields_for(FmodResonanceAudio_t1E98D428CDB6E2CB55939C63C147AA39834A72DB_il2cpp_TypeInfo_var))->get_enabledRooms_11();
		FmodResonanceAudioRoom_t61B0C3B3436B4E982A0D69FB7F0B710C551B7089 * L_5 = ___room0;
		NullCheck(L_4);
		List_1_Add_mA62471E539473C242E0441E4355E41CD47D3CCFC(L_4, L_5, /*hidden argument*/List_1_Add_mA62471E539473C242E0441E4355E41CD47D3CCFC_RuntimeMethod_var);
		// } else {
		goto IL_0029;
	}

IL_001d:
	{
		// enabledRooms.Remove(room);
		IL2CPP_RUNTIME_CLASS_INIT(FmodResonanceAudio_t1E98D428CDB6E2CB55939C63C147AA39834A72DB_il2cpp_TypeInfo_var);
		List_1_t7DC37F87EBBCA84046EA55A3F9E0440CB00F79D7 * L_6 = ((FmodResonanceAudio_t1E98D428CDB6E2CB55939C63C147AA39834A72DB_StaticFields*)il2cpp_codegen_static_fields_for(FmodResonanceAudio_t1E98D428CDB6E2CB55939C63C147AA39834A72DB_il2cpp_TypeInfo_var))->get_enabledRooms_11();
		FmodResonanceAudioRoom_t61B0C3B3436B4E982A0D69FB7F0B710C551B7089 * L_7 = ___room0;
		NullCheck(L_6);
		bool L_8;
		L_8 = List_1_Remove_mD821441E24446F8BB5AECD26CA55EDCFB2B93F81(L_6, L_7, /*hidden argument*/List_1_Remove_mD821441E24446F8BB5AECD26CA55EDCFB2B93F81_RuntimeMethod_var);
	}

IL_0029:
	{
		// if (enabledRooms.Count > 0) {
		IL2CPP_RUNTIME_CLASS_INIT(FmodResonanceAudio_t1E98D428CDB6E2CB55939C63C147AA39834A72DB_il2cpp_TypeInfo_var);
		List_1_t7DC37F87EBBCA84046EA55A3F9E0440CB00F79D7 * L_9 = ((FmodResonanceAudio_t1E98D428CDB6E2CB55939C63C147AA39834A72DB_StaticFields*)il2cpp_codegen_static_fields_for(FmodResonanceAudio_t1E98D428CDB6E2CB55939C63C147AA39834A72DB_il2cpp_TypeInfo_var))->get_enabledRooms_11();
		NullCheck(L_9);
		int32_t L_10;
		L_10 = List_1_get_Count_m2EEAA0229AB41CEA9340261A3C0BC21C50D0875B_inline(L_9, /*hidden argument*/List_1_get_Count_m2EEAA0229AB41CEA9340261A3C0BC21C50D0875B_RuntimeMethod_var);
		if ((((int32_t)L_10) <= ((int32_t)0)))
		{
			goto IL_0088;
		}
	}
	{
		// FmodResonanceAudioRoom currentRoom = enabledRooms[enabledRooms.Count - 1];
		IL2CPP_RUNTIME_CLASS_INIT(FmodResonanceAudio_t1E98D428CDB6E2CB55939C63C147AA39834A72DB_il2cpp_TypeInfo_var);
		List_1_t7DC37F87EBBCA84046EA55A3F9E0440CB00F79D7 * L_11 = ((FmodResonanceAudio_t1E98D428CDB6E2CB55939C63C147AA39834A72DB_StaticFields*)il2cpp_codegen_static_fields_for(FmodResonanceAudio_t1E98D428CDB6E2CB55939C63C147AA39834A72DB_il2cpp_TypeInfo_var))->get_enabledRooms_11();
		List_1_t7DC37F87EBBCA84046EA55A3F9E0440CB00F79D7 * L_12 = ((FmodResonanceAudio_t1E98D428CDB6E2CB55939C63C147AA39834A72DB_StaticFields*)il2cpp_codegen_static_fields_for(FmodResonanceAudio_t1E98D428CDB6E2CB55939C63C147AA39834A72DB_il2cpp_TypeInfo_var))->get_enabledRooms_11();
		NullCheck(L_12);
		int32_t L_13;
		L_13 = List_1_get_Count_m2EEAA0229AB41CEA9340261A3C0BC21C50D0875B_inline(L_12, /*hidden argument*/List_1_get_Count_m2EEAA0229AB41CEA9340261A3C0BC21C50D0875B_RuntimeMethod_var);
		NullCheck(L_11);
		FmodResonanceAudioRoom_t61B0C3B3436B4E982A0D69FB7F0B710C551B7089 * L_14;
		L_14 = List_1_get_Item_mEA6C6E5BF0130FF00BDA1986167ACD32A5D07EAF_inline(L_11, ((int32_t)il2cpp_codegen_subtract((int32_t)L_13, (int32_t)1)), /*hidden argument*/List_1_get_Item_mEA6C6E5BF0130FF00BDA1986167ACD32A5D07EAF_RuntimeMethod_var);
		// RoomProperties roomProperties = GetRoomProperties(currentRoom);
		RoomProperties_tE26D849980D0755AE6E6CED6F90D5040FF8189CE  L_15;
		L_15 = FmodResonanceAudio_GetRoomProperties_m2BDFA081146DD418BE126B35F0CFED79940DEC81(L_14, /*hidden argument*/NULL);
		// IntPtr roomPropertiesPtr = Marshal.AllocHGlobal(roomPropertiesSize);
		int32_t L_16 = ((FmodResonanceAudio_t1E98D428CDB6E2CB55939C63C147AA39834A72DB_StaticFields*)il2cpp_codegen_static_fields_for(FmodResonanceAudio_t1E98D428CDB6E2CB55939C63C147AA39834A72DB_il2cpp_TypeInfo_var))->get_roomPropertiesSize_8();
		IL2CPP_RUNTIME_CLASS_INIT(Marshal_tEBAFAE20369FCB1B38C49C4E27A8D8C2C4B55058_il2cpp_TypeInfo_var);
		intptr_t L_17;
		L_17 = Marshal_AllocHGlobal_mED1B623D229DB8FAB58D187E4E73D3DA2E8AE6EC(L_16, /*hidden argument*/NULL);
		V_0 = (intptr_t)L_17;
		// Marshal.StructureToPtr(roomProperties, roomPropertiesPtr, false);
		intptr_t L_18 = V_0;
		Marshal_StructureToPtr_TisRoomProperties_tE26D849980D0755AE6E6CED6F90D5040FF8189CE_m1C0F38968295AF9ADFB26775FCC16F9669B79D8F(L_15, (intptr_t)L_18, (bool)0, /*hidden argument*/Marshal_StructureToPtr_TisRoomProperties_tE26D849980D0755AE6E6CED6F90D5040FF8189CE_m1C0F38968295AF9ADFB26775FCC16F9669B79D8F_RuntimeMethod_var);
		// ListenerPlugin.setParameterData (roomPropertiesIndex, GetBytes(roomPropertiesPtr,
		//                                                                roomPropertiesSize));
		DSP_t3554E4816E29B84C01A61DD26D8A8FC5831A2412  L_19;
		L_19 = FmodResonanceAudio_get_ListenerPlugin_mA2C5240024E94DB913B0E707F9D5ABB6ADE725D1(/*hidden argument*/NULL);
		V_1 = L_19;
		int32_t L_20 = ((FmodResonanceAudio_t1E98D428CDB6E2CB55939C63C147AA39834A72DB_StaticFields*)il2cpp_codegen_static_fields_for(FmodResonanceAudio_t1E98D428CDB6E2CB55939C63C147AA39834A72DB_il2cpp_TypeInfo_var))->get_roomPropertiesIndex_9();
		intptr_t L_21 = V_0;
		int32_t L_22 = ((FmodResonanceAudio_t1E98D428CDB6E2CB55939C63C147AA39834A72DB_StaticFields*)il2cpp_codegen_static_fields_for(FmodResonanceAudio_t1E98D428CDB6E2CB55939C63C147AA39834A72DB_il2cpp_TypeInfo_var))->get_roomPropertiesSize_8();
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_23;
		L_23 = FmodResonanceAudio_GetBytes_m63B078849DA03BB5C8B644E3ACFC955D36AA5B4D((intptr_t)L_21, L_22, /*hidden argument*/NULL);
		int32_t L_24;
		L_24 = DSP_setParameterData_m47972DF6A9F278172C34A878BF62D7782710EE7A((DSP_t3554E4816E29B84C01A61DD26D8A8FC5831A2412 *)(&V_1), L_20, L_23, /*hidden argument*/NULL);
		// Marshal.FreeHGlobal(roomPropertiesPtr);
		intptr_t L_25 = V_0;
		Marshal_FreeHGlobal_m53FC4846F5D3106BA25B52C321005C227E424F72((intptr_t)L_25, /*hidden argument*/NULL);
		// } else {
		return;
	}

IL_0088:
	{
		// ListenerPlugin.setParameterData (roomPropertiesIndex, GetBytes(IntPtr.Zero, 0));
		IL2CPP_RUNTIME_CLASS_INIT(FmodResonanceAudio_t1E98D428CDB6E2CB55939C63C147AA39834A72DB_il2cpp_TypeInfo_var);
		DSP_t3554E4816E29B84C01A61DD26D8A8FC5831A2412  L_26;
		L_26 = FmodResonanceAudio_get_ListenerPlugin_mA2C5240024E94DB913B0E707F9D5ABB6ADE725D1(/*hidden argument*/NULL);
		V_1 = L_26;
		int32_t L_27 = ((FmodResonanceAudio_t1E98D428CDB6E2CB55939C63C147AA39834A72DB_StaticFields*)il2cpp_codegen_static_fields_for(FmodResonanceAudio_t1E98D428CDB6E2CB55939C63C147AA39834A72DB_il2cpp_TypeInfo_var))->get_roomPropertiesIndex_9();
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_28;
		L_28 = FmodResonanceAudio_GetBytes_m63B078849DA03BB5C8B644E3ACFC955D36AA5B4D((intptr_t)(0), 0, /*hidden argument*/NULL);
		int32_t L_29;
		L_29 = DSP_setParameterData_m47972DF6A9F278172C34A878BF62D7782710EE7A((DSP_t3554E4816E29B84C01A61DD26D8A8FC5831A2412 *)(&V_1), L_27, L_28, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Boolean FmodResonanceAudio::IsListenerInsideRoom(FmodResonanceAudioRoom)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool FmodResonanceAudio_IsListenerInsideRoom_m79F8FEAE499DECFDF3DED44A3F838EE56FF19780 (FmodResonanceAudioRoom_t61B0C3B3436B4E982A0D69FB7F0B710C551B7089 * ___room0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FmodResonanceAudio_t1E98D428CDB6E2CB55939C63C147AA39834A72DB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// Vector3 listenerPosition = new Vector3(listenerPositionFmod.x, listenerPositionFmod.y,
		//                                        listenerPositionFmod.z);
		IL2CPP_RUNTIME_CLASS_INIT(FmodResonanceAudio_t1E98D428CDB6E2CB55939C63C147AA39834A72DB_il2cpp_TypeInfo_var);
		float L_0 = (((FmodResonanceAudio_t1E98D428CDB6E2CB55939C63C147AA39834A72DB_StaticFields*)il2cpp_codegen_static_fields_for(FmodResonanceAudio_t1E98D428CDB6E2CB55939C63C147AA39834A72DB_il2cpp_TypeInfo_var))->get_address_of_listenerPositionFmod_12())->get_x_0();
		float L_1 = (((FmodResonanceAudio_t1E98D428CDB6E2CB55939C63C147AA39834A72DB_StaticFields*)il2cpp_codegen_static_fields_for(FmodResonanceAudio_t1E98D428CDB6E2CB55939C63C147AA39834A72DB_il2cpp_TypeInfo_var))->get_address_of_listenerPositionFmod_12())->get_y_1();
		float L_2 = (((FmodResonanceAudio_t1E98D428CDB6E2CB55939C63C147AA39834A72DB_StaticFields*)il2cpp_codegen_static_fields_for(FmodResonanceAudio_t1E98D428CDB6E2CB55939C63C147AA39834A72DB_il2cpp_TypeInfo_var))->get_address_of_listenerPositionFmod_12())->get_z_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3;
		memset((&L_3), 0, sizeof(L_3));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_3), L_0, L_1, L_2, /*hidden argument*/NULL);
		// Vector3 relativePosition = listenerPosition - room.transform.position;
		FmodResonanceAudioRoom_t61B0C3B3436B4E982A0D69FB7F0B710C551B7089 * L_4 = ___room0;
		NullCheck(L_4);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_5;
		L_5 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_4, /*hidden argument*/NULL);
		NullCheck(L_5);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6;
		L_6 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_5, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_7;
		L_7 = Vector3_op_Subtraction_m2725C96965D5C0B1F9715797E51762B13A5FED58_inline(L_3, L_6, /*hidden argument*/NULL);
		V_0 = L_7;
		// Quaternion rotationInverse = Quaternion.Inverse(room.transform.rotation);
		FmodResonanceAudioRoom_t61B0C3B3436B4E982A0D69FB7F0B710C551B7089 * L_8 = ___room0;
		NullCheck(L_8);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_9;
		L_9 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_8, /*hidden argument*/NULL);
		NullCheck(L_9);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_10;
		L_10 = Transform_get_rotation_m4AA3858C00DF4C9614B80352558C4C37D08D2200(L_9, /*hidden argument*/NULL);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_11;
		L_11 = Quaternion_Inverse_mE2A449C7AC8A40350AAC3761AE1AFC170062CAC9(L_10, /*hidden argument*/NULL);
		V_1 = L_11;
		// bounds.size = Vector3.Scale(room.transform.lossyScale, room.size);
		FmodResonanceAudioRoom_t61B0C3B3436B4E982A0D69FB7F0B710C551B7089 * L_12 = ___room0;
		NullCheck(L_12);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_13;
		L_13 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_12, /*hidden argument*/NULL);
		NullCheck(L_13);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_14;
		L_14 = Transform_get_lossyScale_m469A16F93F135C1E4D5955C7EBDB893D1892A331(L_13, /*hidden argument*/NULL);
		FmodResonanceAudioRoom_t61B0C3B3436B4E982A0D69FB7F0B710C551B7089 * L_15 = ___room0;
		NullCheck(L_15);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_16 = L_15->get_size_14();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_17;
		L_17 = Vector3_Scale_m8805EE8D2586DE7B6143FA35819B3D5CF1981FB3_inline(L_14, L_16, /*hidden argument*/NULL);
		Bounds_set_size_mEDB113237CED433C65294B534EAD30449277FD18((Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37 *)(((FmodResonanceAudio_t1E98D428CDB6E2CB55939C63C147AA39834A72DB_StaticFields*)il2cpp_codegen_static_fields_for(FmodResonanceAudio_t1E98D428CDB6E2CB55939C63C147AA39834A72DB_il2cpp_TypeInfo_var))->get_address_of_bounds_10()), L_17, /*hidden argument*/NULL);
		// return bounds.Contains(rotationInverse * relativePosition);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_18 = V_1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_19 = V_0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_20;
		L_20 = Quaternion_op_Multiply_mDC5F913E6B21FEC72AB2CF737D34CC6C7A69803D(L_18, L_19, /*hidden argument*/NULL);
		bool L_21;
		L_21 = Bounds_Contains_m24154F7F564711846389EF6AEDABB4092A72FFA1((Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37 *)(((FmodResonanceAudio_t1E98D428CDB6E2CB55939C63C147AA39834A72DB_StaticFields*)il2cpp_codegen_static_fields_for(FmodResonanceAudio_t1E98D428CDB6E2CB55939C63C147AA39834A72DB_il2cpp_TypeInfo_var))->get_address_of_bounds_10()), L_20, /*hidden argument*/NULL);
		return L_21;
	}
}
// FMOD.DSP FmodResonanceAudio::get_ListenerPlugin()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DSP_t3554E4816E29B84C01A61DD26D8A8FC5831A2412  FmodResonanceAudio_get_ListenerPlugin_mA2C5240024E94DB913B0E707F9D5ABB6ADE725D1 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FmodResonanceAudio_t1E98D428CDB6E2CB55939C63C147AA39834A72DB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!listenerPlugin.hasHandle()) {
		IL2CPP_RUNTIME_CLASS_INIT(FmodResonanceAudio_t1E98D428CDB6E2CB55939C63C147AA39834A72DB_il2cpp_TypeInfo_var);
		bool L_0;
		L_0 = DSP_hasHandle_m84118160DA083533E3B6E6643D860BD1E37340B1((DSP_t3554E4816E29B84C01A61DD26D8A8FC5831A2412 *)(((FmodResonanceAudio_t1E98D428CDB6E2CB55939C63C147AA39834A72DB_StaticFields*)il2cpp_codegen_static_fields_for(FmodResonanceAudio_t1E98D428CDB6E2CB55939C63C147AA39834A72DB_il2cpp_TypeInfo_var))->get_address_of_listenerPlugin_13()), /*hidden argument*/NULL);
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		// listenerPlugin = Initialize();
		IL2CPP_RUNTIME_CLASS_INIT(FmodResonanceAudio_t1E98D428CDB6E2CB55939C63C147AA39834A72DB_il2cpp_TypeInfo_var);
		DSP_t3554E4816E29B84C01A61DD26D8A8FC5831A2412  L_1;
		L_1 = FmodResonanceAudio_Initialize_mD613D6124B07B4F2771C03C7309299E4F9397320(/*hidden argument*/NULL);
		((FmodResonanceAudio_t1E98D428CDB6E2CB55939C63C147AA39834A72DB_StaticFields*)il2cpp_codegen_static_fields_for(FmodResonanceAudio_t1E98D428CDB6E2CB55939C63C147AA39834A72DB_il2cpp_TypeInfo_var))->set_listenerPlugin_13(L_1);
	}

IL_0016:
	{
		// return listenerPlugin;
		IL2CPP_RUNTIME_CLASS_INIT(FmodResonanceAudio_t1E98D428CDB6E2CB55939C63C147AA39834A72DB_il2cpp_TypeInfo_var);
		DSP_t3554E4816E29B84C01A61DD26D8A8FC5831A2412  L_2 = ((FmodResonanceAudio_t1E98D428CDB6E2CB55939C63C147AA39834A72DB_StaticFields*)il2cpp_codegen_static_fields_for(FmodResonanceAudio_t1E98D428CDB6E2CB55939C63C147AA39834A72DB_il2cpp_TypeInfo_var))->get_listenerPlugin_13();
		return L_2;
	}
}
// System.Single FmodResonanceAudio::ConvertAmplitudeFromDb(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float FmodResonanceAudio_ConvertAmplitudeFromDb_mA8E7A7AF76D2CCD851F0845E98E3DEF8286F5F77 (float ___db0, const RuntimeMethod* method)
{
	{
		// return Mathf.Pow(10.0f, 0.05f * db);
		float L_0 = ___db0;
		float L_1;
		L_1 = powf((10.0f), ((float)il2cpp_codegen_multiply((float)(0.0500000007f), (float)L_0)));
		return L_1;
	}
}
// System.Void FmodResonanceAudio::ConvertAudioTransformFromUnity(UnityEngine.Vector3&,UnityEngine.Quaternion&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FmodResonanceAudio_ConvertAudioTransformFromUnity_m31DFACA8AC2F819A09D73FFBFF52E8557FB511A6 (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * ___position0, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * ___rotation1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FmodResonanceAudio_t1E98D428CDB6E2CB55939C63C147AA39834A72DB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// Matrix4x4 transformMatrix = Matrix4x4.TRS(position, rotation, Vector3.one);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_0 = ___position0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_1 = (*(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)L_0);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * L_2 = ___rotation1;
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_3 = (*(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 *)L_2);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4;
		L_4 = Vector3_get_one_m9CDE5C456038B133ED94402673859EC37B1C1CCB(/*hidden argument*/NULL);
		Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  L_5;
		L_5 = Matrix4x4_TRS_m0CBC696D0BDF58DCEC40B99BC32C716FAD024CE5(L_1, L_3, L_4, /*hidden argument*/NULL);
		V_0 = L_5;
		// transformMatrix = flipZ * transformMatrix * flipZ;
		IL2CPP_RUNTIME_CLASS_INIT(FmodResonanceAudio_t1E98D428CDB6E2CB55939C63C147AA39834A72DB_il2cpp_TypeInfo_var);
		Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  L_6 = ((FmodResonanceAudio_t1E98D428CDB6E2CB55939C63C147AA39834A72DB_StaticFields*)il2cpp_codegen_static_fields_for(FmodResonanceAudio_t1E98D428CDB6E2CB55939C63C147AA39834A72DB_il2cpp_TypeInfo_var))->get_flipZ_6();
		Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  L_7 = V_0;
		Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  L_8;
		L_8 = Matrix4x4_op_Multiply_mC2B30D333D4399C1693414F1A73D87FB3450F39F(L_6, L_7, /*hidden argument*/NULL);
		Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  L_9 = ((FmodResonanceAudio_t1E98D428CDB6E2CB55939C63C147AA39834A72DB_StaticFields*)il2cpp_codegen_static_fields_for(FmodResonanceAudio_t1E98D428CDB6E2CB55939C63C147AA39834A72DB_il2cpp_TypeInfo_var))->get_flipZ_6();
		Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  L_10;
		L_10 = Matrix4x4_op_Multiply_mC2B30D333D4399C1693414F1A73D87FB3450F39F(L_8, L_9, /*hidden argument*/NULL);
		V_0 = L_10;
		// position = transformMatrix.GetColumn(3);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_11 = ___position0;
		Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  L_12;
		L_12 = Matrix4x4_GetColumn_m5CAA237D7FD65AA772B84A1134E8B0551F9F8480((Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 *)(&V_0), 3, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_13;
		L_13 = Vector4_op_Implicit_m5811604E04B684BE3F1A212A7FA46767619AB35B(L_12, /*hidden argument*/NULL);
		*(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)L_11 = L_13;
		// rotation = Quaternion.LookRotation(transformMatrix.GetColumn(2), transformMatrix.GetColumn(1));
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * L_14 = ___rotation1;
		Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  L_15;
		L_15 = Matrix4x4_GetColumn_m5CAA237D7FD65AA772B84A1134E8B0551F9F8480((Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 *)(&V_0), 2, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_16;
		L_16 = Vector4_op_Implicit_m5811604E04B684BE3F1A212A7FA46767619AB35B(L_15, /*hidden argument*/NULL);
		Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  L_17;
		L_17 = Matrix4x4_GetColumn_m5CAA237D7FD65AA772B84A1134E8B0551F9F8480((Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 *)(&V_0), 1, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_18;
		L_18 = Vector4_op_Implicit_m5811604E04B684BE3F1A212A7FA46767619AB35B(L_17, /*hidden argument*/NULL);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_19;
		L_19 = Quaternion_LookRotation_m8A7DB5BDBC361586191AB67ACF857F46160EE3F1(L_16, L_18, /*hidden argument*/NULL);
		*(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 *)L_14 = L_19;
		// }
		return;
	}
}
// System.Byte[] FmodResonanceAudio::GetBytes(System.IntPtr,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* FmodResonanceAudio_GetBytes_m63B078849DA03BB5C8B644E3ACFC955D36AA5B4D (intptr_t ___ptr0, int32_t ___length1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Marshal_tEBAFAE20369FCB1B38C49C4E27A8D8C2C4B55058_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* V_0 = NULL;
	{
		// if (ptr != IntPtr.Zero) {
		intptr_t L_0 = ___ptr0;
		bool L_1;
		L_1 = IntPtr_op_Inequality_m212AF0E66AA81FEDC982B1C8A44ADDA24B995EB8((intptr_t)L_0, (intptr_t)(0), /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_001f;
		}
	}
	{
		// byte[] byteArray = new byte[length];
		int32_t L_2 = ___length1;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_3 = (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)SZArrayNew(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var, (uint32_t)L_2);
		V_0 = L_3;
		// Marshal.Copy(ptr, byteArray, 0, length);
		intptr_t L_4 = ___ptr0;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_5 = V_0;
		int32_t L_6 = ___length1;
		IL2CPP_RUNTIME_CLASS_INIT(Marshal_tEBAFAE20369FCB1B38C49C4E27A8D8C2C4B55058_il2cpp_TypeInfo_var);
		Marshal_Copy_m057A8067BF7212A361510EA26B24022990A07AC0((intptr_t)L_4, L_5, 0, L_6, /*hidden argument*/NULL);
		// return byteArray;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_7 = V_0;
		return L_7;
	}

IL_001f:
	{
		// return new byte[1];
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_8 = (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)SZArrayNew(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var, (uint32_t)1);
		return L_8;
	}
}
// FmodResonanceAudio/RoomProperties FmodResonanceAudio::GetRoomProperties(FmodResonanceAudioRoom)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RoomProperties_tE26D849980D0755AE6E6CED6F90D5040FF8189CE  FmodResonanceAudio_GetRoomProperties_m2BDFA081146DD418BE126B35F0CFED79940DEC81 (FmodResonanceAudioRoom_t61B0C3B3436B4E982A0D69FB7F0B710C551B7089 * ___room0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FmodResonanceAudio_t1E98D428CDB6E2CB55939C63C147AA39834A72DB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RoomProperties_tE26D849980D0755AE6E6CED6F90D5040FF8189CE  V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_1;
	memset((&V_1), 0, sizeof(V_1));
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  V_2;
	memset((&V_2), 0, sizeof(V_2));
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_3;
	memset((&V_3), 0, sizeof(V_3));
	{
		// Vector3 position = room.transform.position;
		FmodResonanceAudioRoom_t61B0C3B3436B4E982A0D69FB7F0B710C551B7089 * L_0 = ___room0;
		NullCheck(L_0);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_1;
		L_1 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2;
		L_2 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_1, /*hidden argument*/NULL);
		V_1 = L_2;
		// Quaternion rotation = room.transform.rotation;
		FmodResonanceAudioRoom_t61B0C3B3436B4E982A0D69FB7F0B710C551B7089 * L_3 = ___room0;
		NullCheck(L_3);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_4;
		L_4 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_3, /*hidden argument*/NULL);
		NullCheck(L_4);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_5;
		L_5 = Transform_get_rotation_m4AA3858C00DF4C9614B80352558C4C37D08D2200(L_4, /*hidden argument*/NULL);
		V_2 = L_5;
		// Vector3 scale = Vector3.Scale(room.transform.lossyScale, room.size);
		FmodResonanceAudioRoom_t61B0C3B3436B4E982A0D69FB7F0B710C551B7089 * L_6 = ___room0;
		NullCheck(L_6);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_7;
		L_7 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_6, /*hidden argument*/NULL);
		NullCheck(L_7);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_8;
		L_8 = Transform_get_lossyScale_m469A16F93F135C1E4D5955C7EBDB893D1892A331(L_7, /*hidden argument*/NULL);
		FmodResonanceAudioRoom_t61B0C3B3436B4E982A0D69FB7F0B710C551B7089 * L_9 = ___room0;
		NullCheck(L_9);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10 = L_9->get_size_14();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_11;
		L_11 = Vector3_Scale_m8805EE8D2586DE7B6143FA35819B3D5CF1981FB3_inline(L_8, L_10, /*hidden argument*/NULL);
		V_3 = L_11;
		// ConvertAudioTransformFromUnity(ref position, ref rotation);
		IL2CPP_RUNTIME_CLASS_INIT(FmodResonanceAudio_t1E98D428CDB6E2CB55939C63C147AA39834A72DB_il2cpp_TypeInfo_var);
		FmodResonanceAudio_ConvertAudioTransformFromUnity_m31DFACA8AC2F819A09D73FFBFF52E8557FB511A6((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)(&V_1), (Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 *)(&V_2), /*hidden argument*/NULL);
		// roomProperties.positionX = position.x;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_12 = V_1;
		float L_13 = L_12.get_x_2();
		(&V_0)->set_positionX_0(L_13);
		// roomProperties.positionY = position.y;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_14 = V_1;
		float L_15 = L_14.get_y_3();
		(&V_0)->set_positionY_1(L_15);
		// roomProperties.positionZ = position.z;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_16 = V_1;
		float L_17 = L_16.get_z_4();
		(&V_0)->set_positionZ_2(L_17);
		// roomProperties.rotationX = rotation.x;
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_18 = V_2;
		float L_19 = L_18.get_x_0();
		(&V_0)->set_rotationX_3(L_19);
		// roomProperties.rotationY = rotation.y;
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_20 = V_2;
		float L_21 = L_20.get_y_1();
		(&V_0)->set_rotationY_4(L_21);
		// roomProperties.rotationZ = rotation.z;
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_22 = V_2;
		float L_23 = L_22.get_z_2();
		(&V_0)->set_rotationZ_5(L_23);
		// roomProperties.rotationW = rotation.w;
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_24 = V_2;
		float L_25 = L_24.get_w_3();
		(&V_0)->set_rotationW_6(L_25);
		// roomProperties.dimensionsX = scale.x;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_26 = V_3;
		float L_27 = L_26.get_x_2();
		(&V_0)->set_dimensionsX_7(L_27);
		// roomProperties.dimensionsY = scale.y;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_28 = V_3;
		float L_29 = L_28.get_y_3();
		(&V_0)->set_dimensionsY_8(L_29);
		// roomProperties.dimensionsZ = scale.z;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_30 = V_3;
		float L_31 = L_30.get_z_4();
		(&V_0)->set_dimensionsZ_9(L_31);
		// roomProperties.materialLeft = room.leftWall;
		FmodResonanceAudioRoom_t61B0C3B3436B4E982A0D69FB7F0B710C551B7089 * L_32 = ___room0;
		NullCheck(L_32);
		int32_t L_33 = L_32->get_leftWall_4();
		(&V_0)->set_materialLeft_10(L_33);
		// roomProperties.materialRight = room.rightWall;
		FmodResonanceAudioRoom_t61B0C3B3436B4E982A0D69FB7F0B710C551B7089 * L_34 = ___room0;
		NullCheck(L_34);
		int32_t L_35 = L_34->get_rightWall_5();
		(&V_0)->set_materialRight_11(L_35);
		// roomProperties.materialBottom = room.floor;
		FmodResonanceAudioRoom_t61B0C3B3436B4E982A0D69FB7F0B710C551B7089 * L_36 = ___room0;
		NullCheck(L_36);
		int32_t L_37 = L_36->get_floor_6();
		(&V_0)->set_materialBottom_12(L_37);
		// roomProperties.materialTop = room.ceiling;
		FmodResonanceAudioRoom_t61B0C3B3436B4E982A0D69FB7F0B710C551B7089 * L_38 = ___room0;
		NullCheck(L_38);
		int32_t L_39 = L_38->get_ceiling_7();
		(&V_0)->set_materialTop_13(L_39);
		// roomProperties.materialFront = room.frontWall;
		FmodResonanceAudioRoom_t61B0C3B3436B4E982A0D69FB7F0B710C551B7089 * L_40 = ___room0;
		NullCheck(L_40);
		int32_t L_41 = L_40->get_frontWall_9();
		(&V_0)->set_materialFront_14(L_41);
		// roomProperties.materialBack = room.backWall;
		FmodResonanceAudioRoom_t61B0C3B3436B4E982A0D69FB7F0B710C551B7089 * L_42 = ___room0;
		NullCheck(L_42);
		int32_t L_43 = L_42->get_backWall_8();
		(&V_0)->set_materialBack_15(L_43);
		// roomProperties.reverbGain = ConvertAmplitudeFromDb(room.reverbGainDb);
		FmodResonanceAudioRoom_t61B0C3B3436B4E982A0D69FB7F0B710C551B7089 * L_44 = ___room0;
		NullCheck(L_44);
		float L_45 = L_44->get_reverbGainDb_11();
		float L_46;
		L_46 = FmodResonanceAudio_ConvertAmplitudeFromDb_mA8E7A7AF76D2CCD851F0845E98E3DEF8286F5F77(L_45, /*hidden argument*/NULL);
		(&V_0)->set_reverbGain_17(L_46);
		// roomProperties.reverbTime = room.reverbTime;
		FmodResonanceAudioRoom_t61B0C3B3436B4E982A0D69FB7F0B710C551B7089 * L_47 = ___room0;
		NullCheck(L_47);
		float L_48 = L_47->get_reverbTime_13();
		(&V_0)->set_reverbTime_18(L_48);
		// roomProperties.reverbBrightness = room.reverbBrightness;
		FmodResonanceAudioRoom_t61B0C3B3436B4E982A0D69FB7F0B710C551B7089 * L_49 = ___room0;
		NullCheck(L_49);
		float L_50 = L_49->get_reverbBrightness_12();
		(&V_0)->set_reverbBrightness_19(L_50);
		// roomProperties.reflectionScalar = room.reflectivity;
		FmodResonanceAudioRoom_t61B0C3B3436B4E982A0D69FB7F0B710C551B7089 * L_51 = ___room0;
		NullCheck(L_51);
		float L_52 = L_51->get_reflectivity_10();
		(&V_0)->set_reflectionScalar_16(L_52);
		// return roomProperties;
		RoomProperties_tE26D849980D0755AE6E6CED6F90D5040FF8189CE  L_53 = V_0;
		return L_53;
	}
}
// FMOD.DSP FmodResonanceAudio::Initialize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DSP_t3554E4816E29B84C01A61DD26D8A8FC5831A2412  FmodResonanceAudio_Initialize_mD613D6124B07B4F2771C03C7309299E4F9397320 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FmodResonanceAudio_t1E98D428CDB6E2CB55939C63C147AA39834A72DB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeManager_t1DD0703C1A7473D65A44439D647D7C6B0C36C8FF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral04A5492DE7135826F34AFDA6E93B88BA6DCEE868);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	DSP_t3554E4816E29B84C01A61DD26D8A8FC5831A2412  V_1;
	memset((&V_1), 0, sizeof(V_1));
	BankU5BU5D_tB08E6B185C9E39F95B976FBA7D3C4839AD7C951E* V_2 = NULL;
	System_tFDE1396EF88A69D9596BB5554FB63FD6CF6B56F0  V_3;
	memset((&V_3), 0, sizeof(V_3));
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	BusU5BU5D_t081E59272ADFB900EE6CCE098E088ED7E905F1CD* V_6 = NULL;
	int32_t V_7 = 0;
	String_t* V_8 = NULL;
	ChannelGroup_tE4C8A600CF2C0DE7A4D5924C072EFAD2E5CF172A  V_9;
	memset((&V_9), 0, sizeof(V_9));
	int32_t V_10 = 0;
	int32_t V_11 = 0;
	String_t* V_12 = NULL;
	int32_t V_13 = 0;
	uint32_t V_14 = 0;
	{
		// int numBanks = 0;
		V_0 = 0;
		// FMOD.DSP dsp = new FMOD.DSP();
		il2cpp_codegen_initobj((&V_1), sizeof(DSP_t3554E4816E29B84C01A61DD26D8A8FC5831A2412 ));
		// FMOD.Studio.Bank[] banks = null;
		V_2 = (BankU5BU5D_tB08E6B185C9E39F95B976FBA7D3C4839AD7C951E*)NULL;
		// RuntimeManager.StudioSystem.getBankCount(out numBanks);
		IL2CPP_RUNTIME_CLASS_INIT(RuntimeManager_t1DD0703C1A7473D65A44439D647D7C6B0C36C8FF_il2cpp_TypeInfo_var);
		System_tFDE1396EF88A69D9596BB5554FB63FD6CF6B56F0  L_0;
		L_0 = RuntimeManager_get_StudioSystem_mC87CC95EC33C69E2059874DF09E70E9611C18591(/*hidden argument*/NULL);
		V_3 = L_0;
		int32_t L_1;
		L_1 = System_getBankCount_mAD176C2EE0E6C3E090FD278837973676BB1F3AA6((System_tFDE1396EF88A69D9596BB5554FB63FD6CF6B56F0 *)(&V_3), (int32_t*)(&V_0), /*hidden argument*/NULL);
		// RuntimeManager.StudioSystem.getBankList(out banks);
		System_tFDE1396EF88A69D9596BB5554FB63FD6CF6B56F0  L_2;
		L_2 = RuntimeManager_get_StudioSystem_mC87CC95EC33C69E2059874DF09E70E9611C18591(/*hidden argument*/NULL);
		V_3 = L_2;
		int32_t L_3;
		L_3 = System_getBankList_m7136EF03B6182E386D97D9344D50D1E4D40599B8((System_tFDE1396EF88A69D9596BB5554FB63FD6CF6B56F0 *)(&V_3), (BankU5BU5D_tB08E6B185C9E39F95B976FBA7D3C4839AD7C951E**)(&V_2), /*hidden argument*/NULL);
		// for (int currentBank = 0; currentBank < numBanks; ++currentBank) {
		V_4 = 0;
		goto IL_0148;
	}

IL_0034:
	{
		// int numBusses = 0;
		V_5 = 0;
		// FMOD.Studio.Bus[] busses = null;
		V_6 = (BusU5BU5D_t081E59272ADFB900EE6CCE098E088ED7E905F1CD*)NULL;
		// banks[currentBank].getBusCount(out numBusses);
		BankU5BU5D_tB08E6B185C9E39F95B976FBA7D3C4839AD7C951E* L_4 = V_2;
		int32_t L_5 = V_4;
		NullCheck(L_4);
		int32_t L_6;
		L_6 = Bank_getBusCount_m7DF074C4480C4CB1DC1FE1F3EDD8BBFC6A38E1D6((Bank_t65BB4F2DD95EE2A62FC08E2C92D32FC34F2EFAE7 *)((L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_5))), (int32_t*)(&V_5), /*hidden argument*/NULL);
		// banks[currentBank].getBusList(out busses);
		BankU5BU5D_tB08E6B185C9E39F95B976FBA7D3C4839AD7C951E* L_7 = V_2;
		int32_t L_8 = V_4;
		NullCheck(L_7);
		int32_t L_9;
		L_9 = Bank_getBusList_m3F8C10DE6740D9F488AA1E67344C58F6BCC5949D((Bank_t65BB4F2DD95EE2A62FC08E2C92D32FC34F2EFAE7 *)((L_7)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_8))), (BusU5BU5D_t081E59272ADFB900EE6CCE098E088ED7E905F1CD**)(&V_6), /*hidden argument*/NULL);
		// RuntimeManager.StudioSystem.flushCommands();
		IL2CPP_RUNTIME_CLASS_INIT(RuntimeManager_t1DD0703C1A7473D65A44439D647D7C6B0C36C8FF_il2cpp_TypeInfo_var);
		System_tFDE1396EF88A69D9596BB5554FB63FD6CF6B56F0  L_10;
		L_10 = RuntimeManager_get_StudioSystem_mC87CC95EC33C69E2059874DF09E70E9611C18591(/*hidden argument*/NULL);
		V_3 = L_10;
		int32_t L_11;
		L_11 = System_flushCommands_m1DB8630ABBD787E3BE5779817CB5901B4748FCBA((System_tFDE1396EF88A69D9596BB5554FB63FD6CF6B56F0 *)(&V_3), /*hidden argument*/NULL);
		// for (int currentBus = 0; currentBus < numBusses; ++currentBus) {
		V_7 = 0;
		goto IL_0139;
	}

IL_0070:
	{
		// string busPath = null;
		V_8 = (String_t*)NULL;
		// busses[currentBus].getPath(out busPath);
		BusU5BU5D_t081E59272ADFB900EE6CCE098E088ED7E905F1CD* L_12 = V_6;
		int32_t L_13 = V_7;
		NullCheck(L_12);
		int32_t L_14;
		L_14 = Bus_getPath_mE66A62049B199B44F0ED51D5933425019793A828((Bus_tB5E25ABA15F3E5DB91A09BABE4076CF855D37520 *)((L_12)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_13))), (String_t**)(&V_8), /*hidden argument*/NULL);
		// RuntimeManager.StudioSystem.getBus(busPath, out busses[currentBus]);
		IL2CPP_RUNTIME_CLASS_INIT(RuntimeManager_t1DD0703C1A7473D65A44439D647D7C6B0C36C8FF_il2cpp_TypeInfo_var);
		System_tFDE1396EF88A69D9596BB5554FB63FD6CF6B56F0  L_15;
		L_15 = RuntimeManager_get_StudioSystem_mC87CC95EC33C69E2059874DF09E70E9611C18591(/*hidden argument*/NULL);
		V_3 = L_15;
		String_t* L_16 = V_8;
		BusU5BU5D_t081E59272ADFB900EE6CCE098E088ED7E905F1CD* L_17 = V_6;
		int32_t L_18 = V_7;
		NullCheck(L_17);
		int32_t L_19;
		L_19 = System_getBus_mB36901E087D9AD25E41111E0AC439B3B128ADAB4((System_tFDE1396EF88A69D9596BB5554FB63FD6CF6B56F0 *)(&V_3), L_16, (Bus_tB5E25ABA15F3E5DB91A09BABE4076CF855D37520 *)((L_17)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_18))), /*hidden argument*/NULL);
		// RuntimeManager.StudioSystem.flushCommands();
		System_tFDE1396EF88A69D9596BB5554FB63FD6CF6B56F0  L_20;
		L_20 = RuntimeManager_get_StudioSystem_mC87CC95EC33C69E2059874DF09E70E9611C18591(/*hidden argument*/NULL);
		V_3 = L_20;
		int32_t L_21;
		L_21 = System_flushCommands_m1DB8630ABBD787E3BE5779817CB5901B4748FCBA((System_tFDE1396EF88A69D9596BB5554FB63FD6CF6B56F0 *)(&V_3), /*hidden argument*/NULL);
		// busses[currentBus].getChannelGroup(out channelGroup);
		BusU5BU5D_t081E59272ADFB900EE6CCE098E088ED7E905F1CD* L_22 = V_6;
		int32_t L_23 = V_7;
		NullCheck(L_22);
		int32_t L_24;
		L_24 = Bus_getChannelGroup_m831052B5FC848AEB2962FD3ACF9F7F7C8BD67D54((Bus_tB5E25ABA15F3E5DB91A09BABE4076CF855D37520 *)((L_22)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_23))), (ChannelGroup_tE4C8A600CF2C0DE7A4D5924C072EFAD2E5CF172A *)(&V_9), /*hidden argument*/NULL);
		// RuntimeManager.StudioSystem.flushCommands();
		System_tFDE1396EF88A69D9596BB5554FB63FD6CF6B56F0  L_25;
		L_25 = RuntimeManager_get_StudioSystem_mC87CC95EC33C69E2059874DF09E70E9611C18591(/*hidden argument*/NULL);
		V_3 = L_25;
		int32_t L_26;
		L_26 = System_flushCommands_m1DB8630ABBD787E3BE5779817CB5901B4748FCBA((System_tFDE1396EF88A69D9596BB5554FB63FD6CF6B56F0 *)(&V_3), /*hidden argument*/NULL);
		// if (channelGroup.hasHandle()) {
		bool L_27;
		L_27 = ChannelGroup_hasHandle_mE96C8C05AD1486172F2DD8751A851F226C731D59((ChannelGroup_tE4C8A600CF2C0DE7A4D5924C072EFAD2E5CF172A *)(&V_9), /*hidden argument*/NULL);
		if (!L_27)
		{
			goto IL_0133;
		}
	}
	{
		// int numDsps = 0;
		V_10 = 0;
		// channelGroup.getNumDSPs(out numDsps);
		int32_t L_28;
		L_28 = ChannelGroup_getNumDSPs_m47DB36935346F821AB8A1BEF42341EB466A90DA7((ChannelGroup_tE4C8A600CF2C0DE7A4D5924C072EFAD2E5CF172A *)(&V_9), (int32_t*)(&V_10), /*hidden argument*/NULL);
		// for (int currentDsp = 0; currentDsp < numDsps; ++currentDsp) {
		V_11 = 0;
		goto IL_012d;
	}

IL_00e5:
	{
		// channelGroup.getDSP(currentDsp, out dsp);
		int32_t L_29 = V_11;
		int32_t L_30;
		L_30 = ChannelGroup_getDSP_m22620EE3691896CD4D2FADC3CF1FACD3D83C5E2B((ChannelGroup_tE4C8A600CF2C0DE7A4D5924C072EFAD2E5CF172A *)(&V_9), L_29, (DSP_t3554E4816E29B84C01A61DD26D8A8FC5831A2412 *)(&V_1), /*hidden argument*/NULL);
		// int unusedInt = 0;
		V_13 = 0;
		// uint unusedUint = 0;
		V_14 = 0;
		// dsp.getInfo(out dspNameSb, out unusedUint, out unusedInt, out unusedInt, out unusedInt);
		int32_t L_31;
		L_31 = DSP_getInfo_mC64A8D3730DAF1F8CAEB3B0EA46D319E0D84638F((DSP_t3554E4816E29B84C01A61DD26D8A8FC5831A2412 *)(&V_1), (String_t**)(&V_12), (uint32_t*)(&V_14), (int32_t*)(&V_13), (int32_t*)(&V_13), (int32_t*)(&V_13), /*hidden argument*/NULL);
		// if (dspNameSb.ToString().Equals(listenerPluginName) && dsp.hasHandle()) {
		String_t* L_32 = V_12;
		NullCheck(L_32);
		String_t* L_33;
		L_33 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_32);
		IL2CPP_RUNTIME_CLASS_INIT(FmodResonanceAudio_t1E98D428CDB6E2CB55939C63C147AA39834A72DB_il2cpp_TypeInfo_var);
		String_t* L_34 = ((FmodResonanceAudio_t1E98D428CDB6E2CB55939C63C147AA39834A72DB_StaticFields*)il2cpp_codegen_static_fields_for(FmodResonanceAudio_t1E98D428CDB6E2CB55939C63C147AA39834A72DB_il2cpp_TypeInfo_var))->get_listenerPluginName_7();
		NullCheck(L_33);
		bool L_35;
		L_35 = String_Equals_m8A062B96B61A7D652E7D73C9B3E904F6B0E5F41D(L_33, L_34, /*hidden argument*/NULL);
		if (!L_35)
		{
			goto IL_0127;
		}
	}
	{
		bool L_36;
		L_36 = DSP_hasHandle_m84118160DA083533E3B6E6643D860BD1E37340B1((DSP_t3554E4816E29B84C01A61DD26D8A8FC5831A2412 *)(&V_1), /*hidden argument*/NULL);
		if (!L_36)
		{
			goto IL_0127;
		}
	}
	{
		// return dsp;
		DSP_t3554E4816E29B84C01A61DD26D8A8FC5831A2412  L_37 = V_1;
		return L_37;
	}

IL_0127:
	{
		// for (int currentDsp = 0; currentDsp < numDsps; ++currentDsp) {
		int32_t L_38 = V_11;
		V_11 = ((int32_t)il2cpp_codegen_add((int32_t)L_38, (int32_t)1));
	}

IL_012d:
	{
		// for (int currentDsp = 0; currentDsp < numDsps; ++currentDsp) {
		int32_t L_39 = V_11;
		int32_t L_40 = V_10;
		if ((((int32_t)L_39) < ((int32_t)L_40)))
		{
			goto IL_00e5;
		}
	}

IL_0133:
	{
		// for (int currentBus = 0; currentBus < numBusses; ++currentBus) {
		int32_t L_41 = V_7;
		V_7 = ((int32_t)il2cpp_codegen_add((int32_t)L_41, (int32_t)1));
	}

IL_0139:
	{
		// for (int currentBus = 0; currentBus < numBusses; ++currentBus) {
		int32_t L_42 = V_7;
		int32_t L_43 = V_5;
		if ((((int32_t)L_42) < ((int32_t)L_43)))
		{
			goto IL_0070;
		}
	}
	{
		// for (int currentBank = 0; currentBank < numBanks; ++currentBank) {
		int32_t L_44 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add((int32_t)L_44, (int32_t)1));
	}

IL_0148:
	{
		// for (int currentBank = 0; currentBank < numBanks; ++currentBank) {
		int32_t L_45 = V_4;
		int32_t L_46 = V_0;
		if ((((int32_t)L_45) < ((int32_t)L_46)))
		{
			goto IL_0034;
		}
	}
	{
		// Debug.LogError(listenerPluginName + " not found in the FMOD project.");
		IL2CPP_RUNTIME_CLASS_INIT(FmodResonanceAudio_t1E98D428CDB6E2CB55939C63C147AA39834A72DB_il2cpp_TypeInfo_var);
		String_t* L_47 = ((FmodResonanceAudio_t1E98D428CDB6E2CB55939C63C147AA39834A72DB_StaticFields*)il2cpp_codegen_static_fields_for(FmodResonanceAudio_t1E98D428CDB6E2CB55939C63C147AA39834A72DB_il2cpp_TypeInfo_var))->get_listenerPluginName_7();
		String_t* L_48;
		L_48 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(L_47, _stringLiteral04A5492DE7135826F34AFDA6E93B88BA6DCEE868, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_LogError_m8850D65592770A364D494025FF3A73E8D4D70485(L_48, /*hidden argument*/NULL);
		// return dsp;
		DSP_t3554E4816E29B84C01A61DD26D8A8FC5831A2412  L_49 = V_1;
		return L_49;
	}
}
// System.Void FmodResonanceAudio::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FmodResonanceAudio__cctor_m06C49F6DF09E636E7D4E30A4C90252E3ED0434B6 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FmodResonanceAudio_t1E98D428CDB6E2CB55939C63C147AA39834A72DB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m4F7CAAFF666B4EB64E83D971BA5BE61F228D0D33_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t7DC37F87EBBCA84046EA55A3F9E0440CB00F79D7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Marshal_tEBAFAE20369FCB1B38C49C4E27A8D8C2C4B55058_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RoomProperties_tE26D849980D0755AE6E6CED6F90D5040FF8189CE_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral560FF11FB71A07916C2C601DFDC9A5A18BE76F6D);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private static readonly Matrix4x4 flipZ = Matrix4x4.Scale(new Vector3(1, 1, -1));
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0;
		memset((&L_0), 0, sizeof(L_0));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_0), (1.0f), (1.0f), (-1.0f), /*hidden argument*/NULL);
		Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  L_1;
		L_1 = Matrix4x4_Scale_m62CFAE1F96495BD3F39D6FB21385C04B9ACC50ED(L_0, /*hidden argument*/NULL);
		((FmodResonanceAudio_t1E98D428CDB6E2CB55939C63C147AA39834A72DB_StaticFields*)il2cpp_codegen_static_fields_for(FmodResonanceAudio_t1E98D428CDB6E2CB55939C63C147AA39834A72DB_il2cpp_TypeInfo_var))->set_flipZ_6(L_1);
		// private static readonly string listenerPluginName = "Resonance Audio Listener";
		((FmodResonanceAudio_t1E98D428CDB6E2CB55939C63C147AA39834A72DB_StaticFields*)il2cpp_codegen_static_fields_for(FmodResonanceAudio_t1E98D428CDB6E2CB55939C63C147AA39834A72DB_il2cpp_TypeInfo_var))->set_listenerPluginName_7(_stringLiteral560FF11FB71A07916C2C601DFDC9A5A18BE76F6D);
		// private static readonly int roomPropertiesSize = Marshal.SizeOf(typeof(RoomProperties));
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_2 = { reinterpret_cast<intptr_t> (RoomProperties_tE26D849980D0755AE6E6CED6F90D5040FF8189CE_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_3;
		L_3 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_2, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Marshal_tEBAFAE20369FCB1B38C49C4E27A8D8C2C4B55058_il2cpp_TypeInfo_var);
		int32_t L_4;
		L_4 = Marshal_SizeOf_m5482D50095CD4ECFFE66778DDAB9173AD834E85A(L_3, /*hidden argument*/NULL);
		((FmodResonanceAudio_t1E98D428CDB6E2CB55939C63C147AA39834A72DB_StaticFields*)il2cpp_codegen_static_fields_for(FmodResonanceAudio_t1E98D428CDB6E2CB55939C63C147AA39834A72DB_il2cpp_TypeInfo_var))->set_roomPropertiesSize_8(L_4);
		// private static readonly int roomPropertiesIndex = 1;
		((FmodResonanceAudio_t1E98D428CDB6E2CB55939C63C147AA39834A72DB_StaticFields*)il2cpp_codegen_static_fields_for(FmodResonanceAudio_t1E98D428CDB6E2CB55939C63C147AA39834A72DB_il2cpp_TypeInfo_var))->set_roomPropertiesIndex_9(1);
		// private static Bounds bounds = new Bounds(Vector3.zero, Vector3.zero);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_5;
		L_5 = Vector3_get_zero_m1A8F7993167785F750B6B01762D22C2597C84EF6(/*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6;
		L_6 = Vector3_get_zero_m1A8F7993167785F750B6B01762D22C2597C84EF6(/*hidden argument*/NULL);
		Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37  L_7;
		memset((&L_7), 0, sizeof(L_7));
		Bounds__ctor_m8356472A177F4B22FFCE8911EBC8547A65A07CA3((&L_7), L_5, L_6, /*hidden argument*/NULL);
		((FmodResonanceAudio_t1E98D428CDB6E2CB55939C63C147AA39834A72DB_StaticFields*)il2cpp_codegen_static_fields_for(FmodResonanceAudio_t1E98D428CDB6E2CB55939C63C147AA39834A72DB_il2cpp_TypeInfo_var))->set_bounds_10(L_7);
		// private static List<FmodResonanceAudioRoom> enabledRooms = new List<FmodResonanceAudioRoom>();
		List_1_t7DC37F87EBBCA84046EA55A3F9E0440CB00F79D7 * L_8 = (List_1_t7DC37F87EBBCA84046EA55A3F9E0440CB00F79D7 *)il2cpp_codegen_object_new(List_1_t7DC37F87EBBCA84046EA55A3F9E0440CB00F79D7_il2cpp_TypeInfo_var);
		List_1__ctor_m4F7CAAFF666B4EB64E83D971BA5BE61F228D0D33(L_8, /*hidden argument*/List_1__ctor_m4F7CAAFF666B4EB64E83D971BA5BE61F228D0D33_RuntimeMethod_var);
		((FmodResonanceAudio_t1E98D428CDB6E2CB55939C63C147AA39834A72DB_StaticFields*)il2cpp_codegen_static_fields_for(FmodResonanceAudio_t1E98D428CDB6E2CB55939C63C147AA39834A72DB_il2cpp_TypeInfo_var))->set_enabledRooms_11(L_8);
		// private static FMOD.VECTOR listenerPositionFmod = new FMOD.VECTOR();
		il2cpp_codegen_initobj((((FmodResonanceAudio_t1E98D428CDB6E2CB55939C63C147AA39834A72DB_StaticFields*)il2cpp_codegen_static_fields_for(FmodResonanceAudio_t1E98D428CDB6E2CB55939C63C147AA39834A72DB_il2cpp_TypeInfo_var))->get_address_of_listenerPositionFmod_12()), sizeof(VECTOR_tF39F3D310C168EBC05F4E9E1718300A72E6BDD2B ));
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
// System.Void FmodResonanceAudioRoom::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FmodResonanceAudioRoom_OnEnable_mB188BE8EAC018E11E573ECD6B14B9A626E0D3B18 (FmodResonanceAudioRoom_t61B0C3B3436B4E982A0D69FB7F0B710C551B7089 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FmodResonanceAudio_t1E98D428CDB6E2CB55939C63C147AA39834A72DB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// FmodResonanceAudio.UpdateAudioRoom(this, FmodResonanceAudio.IsListenerInsideRoom(this));
		IL2CPP_RUNTIME_CLASS_INIT(FmodResonanceAudio_t1E98D428CDB6E2CB55939C63C147AA39834A72DB_il2cpp_TypeInfo_var);
		bool L_0;
		L_0 = FmodResonanceAudio_IsListenerInsideRoom_m79F8FEAE499DECFDF3DED44A3F838EE56FF19780(__this, /*hidden argument*/NULL);
		FmodResonanceAudio_UpdateAudioRoom_m7BA261F45B51012C063F8EF663E86E2CF6AE0F59(__this, L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void FmodResonanceAudioRoom::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FmodResonanceAudioRoom_OnDisable_m08A67BD3EB2F0096FC52D3594CA57CD5327D0DDA (FmodResonanceAudioRoom_t61B0C3B3436B4E982A0D69FB7F0B710C551B7089 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FmodResonanceAudio_t1E98D428CDB6E2CB55939C63C147AA39834A72DB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// FmodResonanceAudio.UpdateAudioRoom(this, false);
		IL2CPP_RUNTIME_CLASS_INIT(FmodResonanceAudio_t1E98D428CDB6E2CB55939C63C147AA39834A72DB_il2cpp_TypeInfo_var);
		FmodResonanceAudio_UpdateAudioRoom_m7BA261F45B51012C063F8EF663E86E2CF6AE0F59(__this, (bool)0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void FmodResonanceAudioRoom::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FmodResonanceAudioRoom_Update_m05E4CE700D7B0192685C8BFEB10CABC3C7DBB94E (FmodResonanceAudioRoom_t61B0C3B3436B4E982A0D69FB7F0B710C551B7089 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FmodResonanceAudio_t1E98D428CDB6E2CB55939C63C147AA39834A72DB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// FmodResonanceAudio.UpdateAudioRoom(this, FmodResonanceAudio.IsListenerInsideRoom(this));
		IL2CPP_RUNTIME_CLASS_INIT(FmodResonanceAudio_t1E98D428CDB6E2CB55939C63C147AA39834A72DB_il2cpp_TypeInfo_var);
		bool L_0;
		L_0 = FmodResonanceAudio_IsListenerInsideRoom_m79F8FEAE499DECFDF3DED44A3F838EE56FF19780(__this, /*hidden argument*/NULL);
		FmodResonanceAudio_UpdateAudioRoom_m7BA261F45B51012C063F8EF663E86E2CF6AE0F59(__this, L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void FmodResonanceAudioRoom::OnDrawGizmosSelected()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FmodResonanceAudioRoom_OnDrawGizmosSelected_m9F722C1881901897CFCF04D957ADAE17A94FFE79 (FmodResonanceAudioRoom_t61B0C3B3436B4E982A0D69FB7F0B710C551B7089 * __this, const RuntimeMethod* method)
{
	{
		// Gizmos.color = Color.yellow;
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_0;
		L_0 = Color_get_yellow_m9FD4BDABA7E40E136BE57EE7872CEA6B1B2FA1D1(/*hidden argument*/NULL);
		Gizmos_set_color_m937ACC6288C81BAFFC3449FAA03BB4F680F4E74F(L_0, /*hidden argument*/NULL);
		// Gizmos.matrix = transform.localToWorldMatrix;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_1;
		L_1 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_1);
		Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  L_2;
		L_2 = Transform_get_localToWorldMatrix_m6B810B0F20BA5DE48009461A4D662DD8BFF6A3CC(L_1, /*hidden argument*/NULL);
		Gizmos_set_matrix_m635EE6CFFB53AC66FD134F82BEA90D1EAAAD5D5C(L_2, /*hidden argument*/NULL);
		// Gizmos.DrawWireCube(Vector3.zero, size);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3;
		L_3 = Vector3_get_zero_m1A8F7993167785F750B6B01762D22C2597C84EF6(/*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4 = __this->get_size_14();
		Gizmos_DrawWireCube_mC526244E50C6E5793D4066C9C99023D5FF8424BF(L_3, L_4, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void FmodResonanceAudioRoom::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FmodResonanceAudioRoom__ctor_mABA41323569C518F553262182D0E6A415EAC0D6F (FmodResonanceAudioRoom_t61B0C3B3436B4E982A0D69FB7F0B710C551B7089 * __this, const RuntimeMethod* method)
{
	{
		// public SurfaceMaterial leftWall = SurfaceMaterial.ConcreteBlockCoarse;
		__this->set_leftWall_4(4);
		// public SurfaceMaterial rightWall = SurfaceMaterial.ConcreteBlockCoarse;
		__this->set_rightWall_5(4);
		// public SurfaceMaterial floor = SurfaceMaterial.ParquetOnConcrete;
		__this->set_floor_6(((int32_t)14));
		// public SurfaceMaterial ceiling = SurfaceMaterial.PlasterRough;
		__this->set_ceiling_7(((int32_t)15));
		// public SurfaceMaterial backWall = SurfaceMaterial.ConcreteBlockCoarse;
		__this->set_backWall_8(4);
		// public SurfaceMaterial frontWall = SurfaceMaterial.ConcreteBlockCoarse;
		__this->set_frontWall_9(4);
		// public float reflectivity = 1.0f;
		__this->set_reflectivity_10((1.0f));
		// public float reverbTime = 1.0f;
		__this->set_reverbTime_13((1.0f));
		// public Vector3 size = Vector3.one;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0;
		L_0 = Vector3_get_one_m9CDE5C456038B133ED94402673859EC37B1C1CCB(/*hidden argument*/NULL);
		__this->set_size_14(L_0);
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void IndoorAtlas.Geofence::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Geofence__ctor_m27802BDF8B62134A77AE018D767F674A78923CEA (Geofence_t33AAF74181EDD529375E887DD0C9A1F9E79AE0DE * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
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
// System.Void IndoorAtlas.Heading::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Heading__ctor_m3193A21F10838BD664A6BAF52E4CEF02E6FF2340 (Heading_t690A771FCF76A48B0B0FADBE2B864C6D2F2B5D80 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
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
// IndoorAtlas.LatLngFloor IndoorAtlas.IndoorAtlasARWayfinding::get_target()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR LatLngFloor_t4B72E155829094591933053C9C85E867C1C255C3 * IndoorAtlasARWayfinding_get_target_m9F5703751115E8F5E23B833925ED9E06C0CCBAF6 (IndoorAtlasARWayfinding_tEC5C5F2513334FDA2BC5A261CB74E6E413413904 * __this, const RuntimeMethod* method)
{
	{
		// get { return m_target; }
		LatLngFloor_t4B72E155829094591933053C9C85E867C1C255C3 * L_0 = __this->get_m_target_5();
		return L_0;
	}
}
// System.Void IndoorAtlas.IndoorAtlasARWayfinding::set_target(IndoorAtlas.LatLngFloor)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IndoorAtlasARWayfinding_set_target_m60F3F2A0370A3DE06C183DFD09F52831AB9A685A (IndoorAtlasARWayfinding_tEC5C5F2513334FDA2BC5A261CB74E6E413413904 * __this, LatLngFloor_t4B72E155829094591933053C9C85E867C1C255C3 * ___value0, const RuntimeMethod* method)
{
	{
		// m_target = value;
		LatLngFloor_t4B72E155829094591933053C9C85E867C1C255C3 * L_0 = ___value0;
		__this->set_m_target_5(L_0);
		// if (manager != null && m_wayfinding) {
		LocationManager_t8BEF4C1AFA85AB524CFB93A28DF2478A26E27401 * L_1 = __this->get_manager_4();
		if (!L_1)
		{
			goto IL_0039;
		}
	}
	{
		bool L_2 = __this->get_m_wayfinding_6();
		if (!L_2)
		{
			goto IL_0039;
		}
	}
	{
		// InstantiateTurns();
		IndoorAtlasARWayfinding_InstantiateTurns_m0466A919D74A5153F9EAD53A7E6C8FAC8D334B50(__this, /*hidden argument*/NULL);
		// manager.StopMonitoringForWayfinding();
		LocationManager_t8BEF4C1AFA85AB524CFB93A28DF2478A26E27401 * L_3 = __this->get_manager_4();
		NullCheck(L_3);
		LocationManager_StopMonitoringForWayfinding_m2F5829A7B66849F63247BCACB0FBE45D26ECCF52(L_3, /*hidden argument*/NULL);
		// manager.StartMonitoringForWayfinding(m_target);
		LocationManager_t8BEF4C1AFA85AB524CFB93A28DF2478A26E27401 * L_4 = __this->get_manager_4();
		LatLngFloor_t4B72E155829094591933053C9C85E867C1C255C3 * L_5 = __this->get_m_target_5();
		NullCheck(L_4);
		LocationManager_StartMonitoringForWayfinding_mCC75254D101458738B5CEE422D5D9C42DECFF88C(L_4, L_5, /*hidden argument*/NULL);
	}

IL_0039:
	{
		// }
		return;
	}
}
// System.Boolean IndoorAtlas.IndoorAtlasARWayfinding::get_wayfinding()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool IndoorAtlasARWayfinding_get_wayfinding_m5011FD12831E7E3DE7BDB5B4E3DB83DB925DACDE (IndoorAtlasARWayfinding_tEC5C5F2513334FDA2BC5A261CB74E6E413413904 * __this, const RuntimeMethod* method)
{
	{
		// get { return m_wayfinding; }
		bool L_0 = __this->get_m_wayfinding_6();
		return L_0;
	}
}
// System.Void IndoorAtlas.IndoorAtlasARWayfinding::set_wayfinding(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IndoorAtlasARWayfinding_set_wayfinding_m95202BBE23364C19B65660B50515064916CCB1E5 (IndoorAtlasARWayfinding_tEC5C5F2513334FDA2BC5A261CB74E6E413413904 * __this, bool ___value0, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		// if (m_wayfinding == value) return;
		bool L_0 = __this->get_m_wayfinding_6();
		bool L_1 = ___value0;
		if ((!(((uint32_t)L_0) == ((uint32_t)L_1))))
		{
			goto IL_000a;
		}
	}
	{
		// if (m_wayfinding == value) return;
		return;
	}

IL_000a:
	{
		// InstantiateTurns();
		IndoorAtlasARWayfinding_InstantiateTurns_m0466A919D74A5153F9EAD53A7E6C8FAC8D334B50(__this, /*hidden argument*/NULL);
		// if ((m_wayfinding = value)) {
		bool L_2 = ___value0;
		bool L_3 = L_2;
		V_0 = L_3;
		__this->set_m_wayfinding_6(L_3);
		bool L_4 = V_0;
		if (!L_4)
		{
			goto IL_0036;
		}
	}
	{
		// if (manager != null) {
		LocationManager_t8BEF4C1AFA85AB524CFB93A28DF2478A26E27401 * L_5 = __this->get_manager_4();
		if (!L_5)
		{
			goto IL_0049;
		}
	}
	{
		// manager.StartMonitoringForWayfinding(m_target);
		LocationManager_t8BEF4C1AFA85AB524CFB93A28DF2478A26E27401 * L_6 = __this->get_manager_4();
		LatLngFloor_t4B72E155829094591933053C9C85E867C1C255C3 * L_7 = __this->get_m_target_5();
		NullCheck(L_6);
		LocationManager_StartMonitoringForWayfinding_mCC75254D101458738B5CEE422D5D9C42DECFF88C(L_6, L_7, /*hidden argument*/NULL);
		// } else {
		return;
	}

IL_0036:
	{
		// if (manager != null) {
		LocationManager_t8BEF4C1AFA85AB524CFB93A28DF2478A26E27401 * L_8 = __this->get_manager_4();
		if (!L_8)
		{
			goto IL_0049;
		}
	}
	{
		// manager.StopMonitoringForWayfinding();
		LocationManager_t8BEF4C1AFA85AB524CFB93A28DF2478A26E27401 * L_9 = __this->get_manager_4();
		NullCheck(L_9);
		LocationManager_StopMonitoringForWayfinding_m2F5829A7B66849F63247BCACB0FBE45D26ECCF52(L_9, /*hidden argument*/NULL);
	}

IL_0049:
	{
		// }
		return;
	}
}
// UnityEngine.XR.ARFoundation.ARPlaneManager IndoorAtlas.IndoorAtlasARWayfinding::get_planeManager()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ARPlaneManager_t4700B0BC3E8B6CD35F8D925701C89A5A21DDBAD4 * IndoorAtlasARWayfinding_get_planeManager_m01EF9B9EF072426A717CAD50F166891C5A9EC889 (IndoorAtlasARWayfinding_tEC5C5F2513334FDA2BC5A261CB74E6E413413904 * __this, const RuntimeMethod* method)
{
	{
		// get { return m_planeManager; }
		ARPlaneManager_t4700B0BC3E8B6CD35F8D925701C89A5A21DDBAD4 * L_0 = __this->get_m_planeManager_7();
		return L_0;
	}
}
// System.Void IndoorAtlas.IndoorAtlasARWayfinding::set_planeManager(UnityEngine.XR.ARFoundation.ARPlaneManager)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IndoorAtlasARWayfinding_set_planeManager_mDC2322F40BD5D66518958B5E405F305AB401FD2B (IndoorAtlasARWayfinding_tEC5C5F2513334FDA2BC5A261CB74E6E413413904 * __this, ARPlaneManager_t4700B0BC3E8B6CD35F8D925701C89A5A21DDBAD4 * ___value0, const RuntimeMethod* method)
{
	{
		// set { m_planeManager = value; }
		ARPlaneManager_t4700B0BC3E8B6CD35F8D925701C89A5A21DDBAD4 * L_0 = ___value0;
		__this->set_m_planeManager_7(L_0);
		// set { m_planeManager = value; }
		return;
	}
}
// System.Boolean IndoorAtlas.IndoorAtlasARWayfinding::IsTracking()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool IndoorAtlasARWayfinding_IsTracking_mCB70DFCA58A3C42FD128FB57E0B535038C9E108D (IndoorAtlasARWayfinding_tEC5C5F2513334FDA2BC5A261CB74E6E413413904 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		// switch(ARSession.notTrackingReason)
		int32_t L_0;
		L_0 = ARSession_get_notTrackingReason_m346D5BD4415CD34223970E3FAF019A78E86B606F_inline(/*hidden argument*/NULL);
		V_0 = L_0;
		int32_t L_1 = V_0;
		switch (L_1)
		{
			case 0:
			{
				goto IL_002a;
			}
			case 1:
			{
				goto IL_002c;
			}
			case 2:
			{
				goto IL_002c;
			}
			case 3:
			{
				goto IL_002c;
			}
			case 4:
			{
				goto IL_002c;
			}
			case 5:
			{
				goto IL_002c;
			}
			case 6:
			{
				goto IL_002c;
			}
		}
	}
	{
		goto IL_002c;
	}

IL_002a:
	{
		// return true;
		return (bool)1;
	}

IL_002c:
	{
		// return false;
		return (bool)0;
	}
}
// System.Void IndoorAtlas.IndoorAtlasARWayfinding::OnArFrame(UnityEngine.XR.ARFoundation.ARCameraFrameEventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IndoorAtlasARWayfinding_OnArFrame_m783D09FDFC9903671429BE7AC498AA66D58C2A21 (IndoorAtlasARWayfinding_tEC5C5F2513334FDA2BC5A261CB74E6E413413904 * __this, ARCameraFrameEventArgs_t6DC46EA4DDD08CB3703AE73DA3D08CB7634FDB42  ___eventArgs0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ARTrackableManager_5_get_trackables_m1868AA38C59A0E75D2FA03964898FB15577FD7E9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_mAD42DB33FFA5B95D44127214BCD44B64BE5FE094_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m3D5E7C33ACC22CA9FBB0725D35D75D86592FFB29_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TrackableCollection_1_GetEnumerator_mAB63B26E604CFE12281E5B212826C7609CF11A5C_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_t7966991B2B4ED87E60D0CB1DA4C8228004A3D386  V_0;
	memset((&V_0), 0, sizeof(V_0));
	TrackableCollection_1_tF901F9001ABC2CCCF561F7CB246E74516ABB8EFB  V_1;
	memset((&V_1), 0, sizeof(V_1));
	ARPlane_t6336725EC68CE9029844CBE72A7FE7374AD74891 * V_2 = NULL;
	{
		// if (manager == null || !IsTracking()) return;
		LocationManager_t8BEF4C1AFA85AB524CFB93A28DF2478A26E27401 * L_0 = __this->get_manager_4();
		if (!L_0)
		{
			goto IL_0010;
		}
	}
	{
		bool L_1;
		L_1 = IndoorAtlasARWayfinding_IsTracking_mCB70DFCA58A3C42FD128FB57E0B535038C9E108D(__this, /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_0011;
		}
	}

IL_0010:
	{
		// if (manager == null || !IsTracking()) return;
		return;
	}

IL_0011:
	{
		// foreach (ARPlane plane in m_planeManager.trackables) {
		ARPlaneManager_t4700B0BC3E8B6CD35F8D925701C89A5A21DDBAD4 * L_2 = __this->get_m_planeManager_7();
		NullCheck(L_2);
		TrackableCollection_1_tF901F9001ABC2CCCF561F7CB246E74516ABB8EFB  L_3;
		L_3 = ARTrackableManager_5_get_trackables_m1868AA38C59A0E75D2FA03964898FB15577FD7E9(L_2, /*hidden argument*/ARTrackableManager_5_get_trackables_m1868AA38C59A0E75D2FA03964898FB15577FD7E9_RuntimeMethod_var);
		V_1 = L_3;
		Enumerator_t7966991B2B4ED87E60D0CB1DA4C8228004A3D386  L_4;
		L_4 = TrackableCollection_1_GetEnumerator_mAB63B26E604CFE12281E5B212826C7609CF11A5C((TrackableCollection_1_tF901F9001ABC2CCCF561F7CB246E74516ABB8EFB *)(&V_1), /*hidden argument*/TrackableCollection_1_GetEnumerator_mAB63B26E604CFE12281E5B212826C7609CF11A5C_RuntimeMethod_var);
		V_0 = L_4;
		goto IL_007b;
	}

IL_0027:
	{
		// foreach (ARPlane plane in m_planeManager.trackables) {
		ARPlane_t6336725EC68CE9029844CBE72A7FE7374AD74891 * L_5;
		L_5 = Enumerator_get_Current_m3D5E7C33ACC22CA9FBB0725D35D75D86592FFB29((Enumerator_t7966991B2B4ED87E60D0CB1DA4C8228004A3D386 *)(&V_0), /*hidden argument*/Enumerator_get_Current_m3D5E7C33ACC22CA9FBB0725D35D75D86592FFB29_RuntimeMethod_var);
		V_2 = L_5;
		// if (plane.alignment != PlaneAlignment.HorizontalUp) continue;
		ARPlane_t6336725EC68CE9029844CBE72A7FE7374AD74891 * L_6 = V_2;
		NullCheck(L_6);
		int32_t L_7;
		L_7 = ARPlane_get_alignment_mE98AB13AA23A17118D57E28213955B32F96B7046(L_6, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_7) == ((uint32_t)((int32_t)100)))))
		{
			goto IL_007b;
		}
	}
	{
		// manager.AddArPlane(plane.center.x, plane.center.y, plane.center.z, plane.extents.x, plane.extents.y);
		LocationManager_t8BEF4C1AFA85AB524CFB93A28DF2478A26E27401 * L_8 = __this->get_manager_4();
		ARPlane_t6336725EC68CE9029844CBE72A7FE7374AD74891 * L_9 = V_2;
		NullCheck(L_9);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10;
		L_10 = ARPlane_get_center_mEDC87E2E4C5029D34515F17E9B2D80B9125B5484(L_9, /*hidden argument*/NULL);
		float L_11 = L_10.get_x_2();
		ARPlane_t6336725EC68CE9029844CBE72A7FE7374AD74891 * L_12 = V_2;
		NullCheck(L_12);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_13;
		L_13 = ARPlane_get_center_mEDC87E2E4C5029D34515F17E9B2D80B9125B5484(L_12, /*hidden argument*/NULL);
		float L_14 = L_13.get_y_3();
		ARPlane_t6336725EC68CE9029844CBE72A7FE7374AD74891 * L_15 = V_2;
		NullCheck(L_15);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_16;
		L_16 = ARPlane_get_center_mEDC87E2E4C5029D34515F17E9B2D80B9125B5484(L_15, /*hidden argument*/NULL);
		float L_17 = L_16.get_z_4();
		ARPlane_t6336725EC68CE9029844CBE72A7FE7374AD74891 * L_18 = V_2;
		NullCheck(L_18);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_19;
		L_19 = ARPlane_get_extents_m15E7D52F5BBB68F8EF0871A573894309B1D9B623(L_18, /*hidden argument*/NULL);
		float L_20 = L_19.get_x_0();
		ARPlane_t6336725EC68CE9029844CBE72A7FE7374AD74891 * L_21 = V_2;
		NullCheck(L_21);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_22;
		L_22 = ARPlane_get_extents_m15E7D52F5BBB68F8EF0871A573894309B1D9B623(L_21, /*hidden argument*/NULL);
		float L_23 = L_22.get_y_1();
		NullCheck(L_8);
		LocationManager_AddArPlane_m227A719233C25CADDC1F98FEF31133337EE3B987(L_8, L_11, L_14, L_17, L_20, L_23, /*hidden argument*/NULL);
	}

IL_007b:
	{
		// foreach (ARPlane plane in m_planeManager.trackables) {
		bool L_24;
		L_24 = Enumerator_MoveNext_mAD42DB33FFA5B95D44127214BCD44B64BE5FE094((Enumerator_t7966991B2B4ED87E60D0CB1DA4C8228004A3D386 *)(&V_0), /*hidden argument*/Enumerator_MoveNext_mAD42DB33FFA5B95D44127214BCD44B64BE5FE094_RuntimeMethod_var);
		if (L_24)
		{
			goto IL_0027;
		}
	}
	{
		// manager.SetArPoseMatrix(m_camera.transform.localToWorldMatrix);
		LocationManager_t8BEF4C1AFA85AB524CFB93A28DF2478A26E27401 * L_25 = __this->get_manager_4();
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_26 = __this->get_m_camera_8();
		NullCheck(L_26);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_27;
		L_27 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_26, /*hidden argument*/NULL);
		NullCheck(L_27);
		Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  L_28;
		L_28 = Transform_get_localToWorldMatrix_m6B810B0F20BA5DE48009461A4D662DD8BFF6A3CC(L_27, /*hidden argument*/NULL);
		NullCheck(L_25);
		LocationManager_SetArPoseMatrix_mFC0339939BFCFDADD2F9200DB75C148676368107(L_25, L_28, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void IndoorAtlas.IndoorAtlasARWayfinding::RegisterFrameEvent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IndoorAtlasARWayfinding_RegisterFrameEvent_m0D844826D4A32744F52A024CDBCF3B31FB459550 (IndoorAtlasARWayfinding_tEC5C5F2513334FDA2BC5A261CB74E6E413413904 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1__ctor_m5F656FA67BDEAF94CFE4483389771AB19C419D16_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_tA34B23CE57B7192055F9BF04AA14FCCB2ED91C68_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IndoorAtlasARWayfinding_OnArFrame_m783D09FDFC9903671429BE7AC498AA66D58C2A21_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (manager == null) return;
		LocationManager_t8BEF4C1AFA85AB524CFB93A28DF2478A26E27401 * L_0 = __this->get_manager_4();
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		// if (manager == null) return;
		return;
	}

IL_0009:
	{
		// m_cameraManager.frameReceived += OnArFrame;
		ARCameraManager_tD802D88B523419FD1AC898539EE734DA20903874 * L_1 = __this->get_m_cameraManager_9();
		Action_1_tA34B23CE57B7192055F9BF04AA14FCCB2ED91C68 * L_2 = (Action_1_tA34B23CE57B7192055F9BF04AA14FCCB2ED91C68 *)il2cpp_codegen_object_new(Action_1_tA34B23CE57B7192055F9BF04AA14FCCB2ED91C68_il2cpp_TypeInfo_var);
		Action_1__ctor_m5F656FA67BDEAF94CFE4483389771AB19C419D16(L_2, __this, (intptr_t)((intptr_t)IndoorAtlasARWayfinding_OnArFrame_m783D09FDFC9903671429BE7AC498AA66D58C2A21_RuntimeMethod_var), /*hidden argument*/Action_1__ctor_m5F656FA67BDEAF94CFE4483389771AB19C419D16_RuntimeMethod_var);
		NullCheck(L_1);
		ARCameraManager_add_frameReceived_m89E016132AD25B2F5402EB0996DAC4E5D6B1C035(L_1, L_2, /*hidden argument*/NULL);
		// }
		return;
	}
}
// UnityEngine.Camera IndoorAtlas.IndoorAtlasARWayfinding::get_camera()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * IndoorAtlasARWayfinding_get_camera_mFAD06C6337B46CE1C8305716FD298D9D0C20CAD8 (IndoorAtlasARWayfinding_tEC5C5F2513334FDA2BC5A261CB74E6E413413904 * __this, const RuntimeMethod* method)
{
	{
		// get { return m_camera; }
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_0 = __this->get_m_camera_8();
		return L_0;
	}
}
// System.Void IndoorAtlas.IndoorAtlasARWayfinding::set_camera(UnityEngine.Camera)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IndoorAtlasARWayfinding_set_camera_mB630FAC38AD32EA240BB528483724FD545F9CB24 (IndoorAtlasARWayfinding_tEC5C5F2513334FDA2BC5A261CB74E6E413413904 * __this, Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1__ctor_m5F656FA67BDEAF94CFE4483389771AB19C419D16_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_tA34B23CE57B7192055F9BF04AA14FCCB2ED91C68_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisARCameraManager_tD802D88B523419FD1AC898539EE734DA20903874_m0CA6E904AA2D0AC7188DA8E92C050226DEC7171C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IndoorAtlasARWayfinding_OnArFrame_m783D09FDFC9903671429BE7AC498AA66D58C2A21_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// m_camera = value;
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_0 = ___value0;
		__this->set_m_camera_8(L_0);
		// if (m_cameraManager != null) m_cameraManager.frameReceived -= OnArFrame;
		ARCameraManager_tD802D88B523419FD1AC898539EE734DA20903874 * L_1 = __this->get_m_cameraManager_9();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_1, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_002c;
		}
	}
	{
		// if (m_cameraManager != null) m_cameraManager.frameReceived -= OnArFrame;
		ARCameraManager_tD802D88B523419FD1AC898539EE734DA20903874 * L_3 = __this->get_m_cameraManager_9();
		Action_1_tA34B23CE57B7192055F9BF04AA14FCCB2ED91C68 * L_4 = (Action_1_tA34B23CE57B7192055F9BF04AA14FCCB2ED91C68 *)il2cpp_codegen_object_new(Action_1_tA34B23CE57B7192055F9BF04AA14FCCB2ED91C68_il2cpp_TypeInfo_var);
		Action_1__ctor_m5F656FA67BDEAF94CFE4483389771AB19C419D16(L_4, __this, (intptr_t)((intptr_t)IndoorAtlasARWayfinding_OnArFrame_m783D09FDFC9903671429BE7AC498AA66D58C2A21_RuntimeMethod_var), /*hidden argument*/Action_1__ctor_m5F656FA67BDEAF94CFE4483389771AB19C419D16_RuntimeMethod_var);
		NullCheck(L_3);
		ARCameraManager_remove_frameReceived_mDB7093508DC69244620BA73A5DBEF42C1C9C4B64(L_3, L_4, /*hidden argument*/NULL);
	}

IL_002c:
	{
		// m_cameraManager = m_camera.GetComponent<ARCameraManager>();
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_5 = __this->get_m_camera_8();
		NullCheck(L_5);
		ARCameraManager_tD802D88B523419FD1AC898539EE734DA20903874 * L_6;
		L_6 = Component_GetComponent_TisARCameraManager_tD802D88B523419FD1AC898539EE734DA20903874_m0CA6E904AA2D0AC7188DA8E92C050226DEC7171C(L_5, /*hidden argument*/Component_GetComponent_TisARCameraManager_tD802D88B523419FD1AC898539EE734DA20903874_m0CA6E904AA2D0AC7188DA8E92C050226DEC7171C_RuntimeMethod_var);
		__this->set_m_cameraManager_9(L_6);
		// RegisterFrameEvent();
		IndoorAtlasARWayfinding_RegisterFrameEvent_m0D844826D4A32744F52A024CDBCF3B31FB459550(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// UnityEngine.GameObject IndoorAtlas.IndoorAtlasARWayfinding::get_compass()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * IndoorAtlasARWayfinding_get_compass_m10365BBA2CDDA384D90373BB4655F008687CAE3F (IndoorAtlasARWayfinding_tEC5C5F2513334FDA2BC5A261CB74E6E413413904 * __this, const RuntimeMethod* method)
{
	{
		// get { return m_compass; }
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = __this->get_m_compass_10();
		return L_0;
	}
}
// System.Void IndoorAtlas.IndoorAtlasARWayfinding::set_compass(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IndoorAtlasARWayfinding_set_compass_m2487DB54AFD828D9D45CB5C12CBAB8DA301B1579 (IndoorAtlasARWayfinding_tEC5C5F2513334FDA2BC5A261CB74E6E413413904 * __this, GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___value0, const RuntimeMethod* method)
{
	{
		// set { m_compass = value; }
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = ___value0;
		__this->set_m_compass_10(L_0);
		// set { m_compass = value; }
		return;
	}
}
// UnityEngine.GameObject IndoorAtlas.IndoorAtlasARWayfinding::get_goal()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * IndoorAtlasARWayfinding_get_goal_mB95EAAF98F6C8FFB3F56809DAAAE590934980F08 (IndoorAtlasARWayfinding_tEC5C5F2513334FDA2BC5A261CB74E6E413413904 * __this, const RuntimeMethod* method)
{
	{
		// get { return m_goal; }
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = __this->get_m_goal_11();
		return L_0;
	}
}
// System.Void IndoorAtlas.IndoorAtlasARWayfinding::set_goal(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IndoorAtlasARWayfinding_set_goal_mB92B2328B3F8E89BC1AE6F1D2B11CABF5B4076EE (IndoorAtlasARWayfinding_tEC5C5F2513334FDA2BC5A261CB74E6E413413904 * __this, GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___value0, const RuntimeMethod* method)
{
	{
		// set { m_goal = value; }
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = ___value0;
		__this->set_m_goal_11(L_0);
		// set { m_goal = value; }
		return;
	}
}
// System.Void IndoorAtlas.IndoorAtlasARWayfinding::DestroyTurns()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IndoorAtlasARWayfinding_DestroyTurns_m97AD515DAEAC07F2E39D4D29B97DF8E7DDDDED16 (IndoorAtlasARWayfinding_tEC5C5F2513334FDA2BC5A261CB74E6E413413904 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// m_compass.SetActive(false);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = __this->get_m_compass_10();
		NullCheck(L_0);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_0, (bool)0, /*hidden argument*/NULL);
		// m_goal.SetActive(false);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1 = __this->get_m_goal_11();
		NullCheck(L_1);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_1, (bool)0, /*hidden argument*/NULL);
		// m_Turn.SetActive(false);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_2 = __this->get_m_Turn_12();
		NullCheck(L_2);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_2, (bool)0, /*hidden argument*/NULL);
		// if (turns != null) {
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_3 = __this->get_turns_13();
		if (!L_3)
		{
			goto IL_0053;
		}
	}
	{
		// for (int i = 1; i < turns.Length; ++i) Destroy(turns[i]);
		V_0 = 1;
		goto IL_0041;
	}

IL_0030:
	{
		// for (int i = 1; i < turns.Length; ++i) Destroy(turns[i]);
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_4 = __this->get_turns_13();
		int32_t L_5 = V_0;
		NullCheck(L_4);
		int32_t L_6 = L_5;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_Destroy_m3EEDB6ECD49A541EC826EA8E1C8B599F7AF67D30(L_7, /*hidden argument*/NULL);
		// for (int i = 1; i < turns.Length; ++i) Destroy(turns[i]);
		int32_t L_8 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_8, (int32_t)1));
	}

IL_0041:
	{
		// for (int i = 1; i < turns.Length; ++i) Destroy(turns[i]);
		int32_t L_9 = V_0;
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_10 = __this->get_turns_13();
		NullCheck(L_10);
		if ((((int32_t)L_9) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_10)->max_length))))))
		{
			goto IL_0030;
		}
	}
	{
		// turns = null;
		__this->set_turns_13((GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642*)NULL);
	}

IL_0053:
	{
		// }
		return;
	}
}
// System.Void IndoorAtlas.IndoorAtlasARWayfinding::InstantiateTurns()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IndoorAtlasARWayfinding_InstantiateTurns_m0466A919D74A5153F9EAD53A7E6C8FAC8D334B50 (IndoorAtlasARWayfinding_tEC5C5F2513334FDA2BC5A261CB74E6E413413904 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m26431AC51B9B7A43FBABD10B4923B72B0C578F33_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// DestroyTurns();
		IndoorAtlasARWayfinding_DestroyTurns_m97AD515DAEAC07F2E39D4D29B97DF8E7DDDDED16(__this, /*hidden argument*/NULL);
		// turns = new GameObject[16]; // pool of 16 maximum turns (pretty optimistic)
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_0 = (GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642*)(GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642*)SZArrayNew(GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642_il2cpp_TypeInfo_var, (uint32_t)((int32_t)16));
		__this->set_turns_13(L_0);
		// turns[0] = m_Turn;
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_1 = __this->get_turns_13();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_2 = __this->get_m_Turn_12();
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, L_2);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *)L_2);
		// for (int i = 1; i < turns.Length; ++i) turns[i] = Instantiate(m_Turn);
		V_0 = 1;
		goto IL_003c;
	}

IL_0025:
	{
		// for (int i = 1; i < turns.Length; ++i) turns[i] = Instantiate(m_Turn);
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_3 = __this->get_turns_13();
		int32_t L_4 = V_0;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_5 = __this->get_m_Turn_12();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_6;
		L_6 = Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m26431AC51B9B7A43FBABD10B4923B72B0C578F33(L_5, /*hidden argument*/Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m26431AC51B9B7A43FBABD10B4923B72B0C578F33_RuntimeMethod_var);
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, L_6);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(L_4), (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *)L_6);
		// for (int i = 1; i < turns.Length; ++i) turns[i] = Instantiate(m_Turn);
		int32_t L_7 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_7, (int32_t)1));
	}

IL_003c:
	{
		// for (int i = 1; i < turns.Length; ++i) turns[i] = Instantiate(m_Turn);
		int32_t L_8 = V_0;
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_9 = __this->get_turns_13();
		NullCheck(L_9);
		if ((((int32_t)L_8) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_9)->max_length))))))
		{
			goto IL_0025;
		}
	}
	{
		// }
		return;
	}
}
// UnityEngine.GameObject IndoorAtlas.IndoorAtlasARWayfinding::get_turn()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * IndoorAtlasARWayfinding_get_turn_m4014D1416348487DD459263155B4D44B723AF7A8 (IndoorAtlasARWayfinding_tEC5C5F2513334FDA2BC5A261CB74E6E413413904 * __this, const RuntimeMethod* method)
{
	{
		// get { return m_Turn; }
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = __this->get_m_Turn_12();
		return L_0;
	}
}
// System.Void IndoorAtlas.IndoorAtlasARWayfinding::set_turn(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IndoorAtlasARWayfinding_set_turn_m46D804D80DAF7F374E8E91C8781CB44DF2CA77B3 (IndoorAtlasARWayfinding_tEC5C5F2513334FDA2BC5A261CB74E6E413413904 * __this, GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___value0, const RuntimeMethod* method)
{
	{
		// set { m_Turn = value; InstantiateTurns(); }
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = ___value0;
		__this->set_m_Turn_12(L_0);
		// set { m_Turn = value; InstantiateTurns(); }
		IndoorAtlasARWayfinding_InstantiateTurns_m0466A919D74A5153F9EAD53A7E6C8FAC8D334B50(__this, /*hidden argument*/NULL);
		// set { m_Turn = value; InstantiateTurns(); }
		return;
	}
}
// System.Void IndoorAtlas.IndoorAtlasARWayfinding::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IndoorAtlasARWayfinding_Awake_m54196A9048EC53CC1C129A665522F5519E6E98D0 (IndoorAtlasARWayfinding_tEC5C5F2513334FDA2BC5A261CB74E6E413413904 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisARCameraManager_tD802D88B523419FD1AC898539EE734DA20903874_m0CA6E904AA2D0AC7188DA8E92C050226DEC7171C_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// m_cameraManager = m_camera.GetComponent<ARCameraManager>();
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_0 = __this->get_m_camera_8();
		NullCheck(L_0);
		ARCameraManager_tD802D88B523419FD1AC898539EE734DA20903874 * L_1;
		L_1 = Component_GetComponent_TisARCameraManager_tD802D88B523419FD1AC898539EE734DA20903874_m0CA6E904AA2D0AC7188DA8E92C050226DEC7171C(L_0, /*hidden argument*/Component_GetComponent_TisARCameraManager_tD802D88B523419FD1AC898539EE734DA20903874_m0CA6E904AA2D0AC7188DA8E92C050226DEC7171C_RuntimeMethod_var);
		__this->set_m_cameraManager_9(L_1);
		// }
		return;
	}
}
// System.Void IndoorAtlas.IndoorAtlasARWayfinding::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IndoorAtlasARWayfinding_OnEnable_m2191CA44031C836C825E2D2B6C3F69399F3DB6DD (IndoorAtlasARWayfinding_tEC5C5F2513334FDA2BC5A261CB74E6E413413904 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IndoorAtlasARWayfinding_OnBeforeRender_m596D9DD4ED9CB8F244B8E400256CB0F5F5A09BD5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LocationManager_t8BEF4C1AFA85AB524CFB93A28DF2478A26E27401_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (manager != null) return;
		LocationManager_t8BEF4C1AFA85AB524CFB93A28DF2478A26E27401 * L_0 = __this->get_manager_4();
		if (!L_0)
		{
			goto IL_0009;
		}
	}
	{
		// if (manager != null) return;
		return;
	}

IL_0009:
	{
		// manager = new LocationManager();
		LocationManager_t8BEF4C1AFA85AB524CFB93A28DF2478A26E27401 * L_1 = (LocationManager_t8BEF4C1AFA85AB524CFB93A28DF2478A26E27401 *)il2cpp_codegen_object_new(LocationManager_t8BEF4C1AFA85AB524CFB93A28DF2478A26E27401_il2cpp_TypeInfo_var);
		LocationManager__ctor_m8A7B0F89185A993CE9C081C9CFEF2903E2365180(L_1, /*hidden argument*/NULL);
		__this->set_manager_4(L_1);
		// manager.GetArIsConverged(); // ensures that the ar session is created
		LocationManager_t8BEF4C1AFA85AB524CFB93A28DF2478A26E27401 * L_2 = __this->get_manager_4();
		NullCheck(L_2);
		bool L_3;
		L_3 = LocationManager_GetArIsConverged_m2D858C4AAF7B14882046F22F8D3E2712C5E7DFEB(L_2, /*hidden argument*/NULL);
		// if (m_wayfinding) manager.StartMonitoringForWayfinding(m_target);
		bool L_4 = __this->get_m_wayfinding_6();
		if (!L_4)
		{
			goto IL_0039;
		}
	}
	{
		// if (m_wayfinding) manager.StartMonitoringForWayfinding(m_target);
		LocationManager_t8BEF4C1AFA85AB524CFB93A28DF2478A26E27401 * L_5 = __this->get_manager_4();
		LatLngFloor_t4B72E155829094591933053C9C85E867C1C255C3 * L_6 = __this->get_m_target_5();
		NullCheck(L_5);
		LocationManager_StartMonitoringForWayfinding_mCC75254D101458738B5CEE422D5D9C42DECFF88C(L_5, L_6, /*hidden argument*/NULL);
	}

IL_0039:
	{
		// InstantiateTurns();
		IndoorAtlasARWayfinding_InstantiateTurns_m0466A919D74A5153F9EAD53A7E6C8FAC8D334B50(__this, /*hidden argument*/NULL);
		// Application.onBeforeRender += OnBeforeRender;
		UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * L_7 = (UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 *)il2cpp_codegen_object_new(UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099_il2cpp_TypeInfo_var);
		UnityAction__ctor_m48C04C4C0F46918CF216A2410A4E58D31B6362BA(L_7, __this, (intptr_t)((intptr_t)IndoorAtlasARWayfinding_OnBeforeRender_m596D9DD4ED9CB8F244B8E400256CB0F5F5A09BD5_RuntimeMethod_var), /*hidden argument*/NULL);
		Application_add_onBeforeRender_mFA00908B51F922621B710B65E8576C29D437FE19(L_7, /*hidden argument*/NULL);
		// RegisterFrameEvent();
		IndoorAtlasARWayfinding_RegisterFrameEvent_m0D844826D4A32744F52A024CDBCF3B31FB459550(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void IndoorAtlas.IndoorAtlasARWayfinding::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IndoorAtlasARWayfinding_OnDisable_m44A4FF3F5820C513CEF2C9CA5DEFFC7611A51C94 (IndoorAtlasARWayfinding_tEC5C5F2513334FDA2BC5A261CB74E6E413413904 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1__ctor_m5F656FA67BDEAF94CFE4483389771AB19C419D16_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_tA34B23CE57B7192055F9BF04AA14FCCB2ED91C68_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IndoorAtlasARWayfinding_OnArFrame_m783D09FDFC9903671429BE7AC498AA66D58C2A21_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IndoorAtlasARWayfinding_OnBeforeRender_m596D9DD4ED9CB8F244B8E400256CB0F5F5A09BD5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (manager == null) return;
		LocationManager_t8BEF4C1AFA85AB524CFB93A28DF2478A26E27401 * L_0 = __this->get_manager_4();
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		// if (manager == null) return;
		return;
	}

IL_0009:
	{
		// m_cameraManager.frameReceived -= OnArFrame;
		ARCameraManager_tD802D88B523419FD1AC898539EE734DA20903874 * L_1 = __this->get_m_cameraManager_9();
		Action_1_tA34B23CE57B7192055F9BF04AA14FCCB2ED91C68 * L_2 = (Action_1_tA34B23CE57B7192055F9BF04AA14FCCB2ED91C68 *)il2cpp_codegen_object_new(Action_1_tA34B23CE57B7192055F9BF04AA14FCCB2ED91C68_il2cpp_TypeInfo_var);
		Action_1__ctor_m5F656FA67BDEAF94CFE4483389771AB19C419D16(L_2, __this, (intptr_t)((intptr_t)IndoorAtlasARWayfinding_OnArFrame_m783D09FDFC9903671429BE7AC498AA66D58C2A21_RuntimeMethod_var), /*hidden argument*/Action_1__ctor_m5F656FA67BDEAF94CFE4483389771AB19C419D16_RuntimeMethod_var);
		NullCheck(L_1);
		ARCameraManager_remove_frameReceived_mDB7093508DC69244620BA73A5DBEF42C1C9C4B64(L_1, L_2, /*hidden argument*/NULL);
		// Application.onBeforeRender -= OnBeforeRender;
		UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * L_3 = (UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 *)il2cpp_codegen_object_new(UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099_il2cpp_TypeInfo_var);
		UnityAction__ctor_m48C04C4C0F46918CF216A2410A4E58D31B6362BA(L_3, __this, (intptr_t)((intptr_t)IndoorAtlasARWayfinding_OnBeforeRender_m596D9DD4ED9CB8F244B8E400256CB0F5F5A09BD5_RuntimeMethod_var), /*hidden argument*/NULL);
		Application_remove_onBeforeRender_m3F833FAB6D8A4A178173DFE9D644341657F2E9AE(L_3, /*hidden argument*/NULL);
		// manager.StopMonitoringForWayfinding();
		LocationManager_t8BEF4C1AFA85AB524CFB93A28DF2478A26E27401 * L_4 = __this->get_manager_4();
		NullCheck(L_4);
		LocationManager_StopMonitoringForWayfinding_m2F5829A7B66849F63247BCACB0FBE45D26ECCF52(L_4, /*hidden argument*/NULL);
		// manager.ReleaseArSession();
		LocationManager_t8BEF4C1AFA85AB524CFB93A28DF2478A26E27401 * L_5 = __this->get_manager_4();
		NullCheck(L_5);
		LocationManager_ReleaseArSession_mE30A17ECF1D45F32CA711DC0B9A55F5A356AE463(L_5, /*hidden argument*/NULL);
		// manager = null;
		__this->set_manager_4((LocationManager_t8BEF4C1AFA85AB524CFB93A28DF2478A26E27401 *)NULL);
		// DestroyTurns();
		IndoorAtlasARWayfinding_DestroyTurns_m97AD515DAEAC07F2E39D4D29B97DF8E7DDDDED16(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void IndoorAtlas.IndoorAtlasARWayfinding::OnBeforeRender()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IndoorAtlasARWayfinding_OnBeforeRender_m596D9DD4ED9CB8F244B8E400256CB0F5F5A09BD5 (IndoorAtlasARWayfinding_tEC5C5F2513334FDA2BC5A261CB74E6E413413904 * __this, const RuntimeMethod* method)
{
	Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  V_0;
	memset((&V_0), 0, sizeof(V_0));
	GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	{
		// if (manager == null) return;
		LocationManager_t8BEF4C1AFA85AB524CFB93A28DF2478A26E27401 * L_0 = __this->get_manager_4();
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		// if (manager == null) return;
		return;
	}

IL_0009:
	{
		// manager.SetArCameraToWorldMatrix(m_camera.cameraToWorldMatrix);
		LocationManager_t8BEF4C1AFA85AB524CFB93A28DF2478A26E27401 * L_1 = __this->get_manager_4();
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_2 = __this->get_m_camera_8();
		NullCheck(L_2);
		Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  L_3;
		L_3 = Camera_get_cameraToWorldMatrix_mF7D93E61CD5BA342E73DA71CF6F687A8642E812F(L_2, /*hidden argument*/NULL);
		NullCheck(L_1);
		LocationManager_SetArCameraToWorldMatrix_m94D63F03ABE808EE83C26BEE1496D05402473A35(L_1, L_3, /*hidden argument*/NULL);
		// if (!m_wayfinding || !manager.GetArIsConverged() || !IsTracking()) {
		bool L_4 = __this->get_m_wayfinding_6();
		if (!L_4)
		{
			goto IL_003c;
		}
	}
	{
		LocationManager_t8BEF4C1AFA85AB524CFB93A28DF2478A26E27401 * L_5 = __this->get_manager_4();
		NullCheck(L_5);
		bool L_6;
		L_6 = LocationManager_GetArIsConverged_m2D858C4AAF7B14882046F22F8D3E2712C5E7DFEB(L_5, /*hidden argument*/NULL);
		if (!L_6)
		{
			goto IL_003c;
		}
	}
	{
		bool L_7;
		L_7 = IndoorAtlasARWayfinding_IsTracking_mCB70DFCA58A3C42FD128FB57E0B535038C9E108D(__this, /*hidden argument*/NULL);
		if (L_7)
		{
			goto IL_0073;
		}
	}

IL_003c:
	{
		// m_compass.SetActive(false);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_8 = __this->get_m_compass_10();
		NullCheck(L_8);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_8, (bool)0, /*hidden argument*/NULL);
		// m_goal.SetActive(false);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_9 = __this->get_m_goal_11();
		NullCheck(L_9);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_9, (bool)0, /*hidden argument*/NULL);
		// foreach (GameObject turn in turns) turn.SetActive(false);
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_10 = __this->get_turns_13();
		V_1 = L_10;
		V_2 = 0;
		goto IL_006c;
	}

IL_005f:
	{
		// foreach (GameObject turn in turns) turn.SetActive(false);
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_11 = V_1;
		int32_t L_12 = V_2;
		NullCheck(L_11);
		int32_t L_13 = L_12;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_14 = (L_11)->GetAt(static_cast<il2cpp_array_size_t>(L_13));
		// foreach (GameObject turn in turns) turn.SetActive(false);
		NullCheck(L_14);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_14, (bool)0, /*hidden argument*/NULL);
		int32_t L_15 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_15, (int32_t)1));
	}

IL_006c:
	{
		// foreach (GameObject turn in turns) turn.SetActive(false);
		int32_t L_16 = V_2;
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_17 = V_1;
		NullCheck(L_17);
		if ((((int32_t)L_16) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_17)->max_length))))))
		{
			goto IL_005f;
		}
	}
	{
		// return;
		return;
	}

IL_0073:
	{
		// if ((matrix = manager.GetArCompassMatrix()) != Matrix4x4.identity) {
		LocationManager_t8BEF4C1AFA85AB524CFB93A28DF2478A26E27401 * L_18 = __this->get_manager_4();
		NullCheck(L_18);
		Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  L_19;
		L_19 = LocationManager_GetArCompassMatrix_m577C7F3D5B8F6A95CA941A9C483117EC4234E786(L_18, /*hidden argument*/NULL);
		Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  L_20 = L_19;
		V_0 = L_20;
		Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  L_21;
		L_21 = Matrix4x4_get_identity_mC91289718DDD3DDBE0A10551BDA59A446414A596(/*hidden argument*/NULL);
		bool L_22;
		L_22 = Matrix4x4_op_Inequality_m6E62E1FDEDC9AF783BE1041726A18BCA5E6CFC6D(L_20, L_21, /*hidden argument*/NULL);
		if (!L_22)
		{
			goto IL_00e6;
		}
	}
	{
		// m_compass.transform.rotation = Quaternion.LookRotation(matrix.GetColumn(2), matrix.GetColumn(1));
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_23 = __this->get_m_compass_10();
		NullCheck(L_23);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_24;
		L_24 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_23, /*hidden argument*/NULL);
		Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  L_25;
		L_25 = Matrix4x4_GetColumn_m5CAA237D7FD65AA772B84A1134E8B0551F9F8480((Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 *)(&V_0), 2, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_26;
		L_26 = Vector4_op_Implicit_m5811604E04B684BE3F1A212A7FA46767619AB35B(L_25, /*hidden argument*/NULL);
		Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  L_27;
		L_27 = Matrix4x4_GetColumn_m5CAA237D7FD65AA772B84A1134E8B0551F9F8480((Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 *)(&V_0), 1, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_28;
		L_28 = Vector4_op_Implicit_m5811604E04B684BE3F1A212A7FA46767619AB35B(L_27, /*hidden argument*/NULL);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_29;
		L_29 = Quaternion_LookRotation_m8A7DB5BDBC361586191AB67ACF857F46160EE3F1(L_26, L_28, /*hidden argument*/NULL);
		NullCheck(L_24);
		Transform_set_rotation_m1B5F3D4CE984AB31254615C9C71B0E54978583B4(L_24, L_29, /*hidden argument*/NULL);
		// m_compass.transform.position = matrix.GetColumn(3);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_30 = __this->get_m_compass_10();
		NullCheck(L_30);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_31;
		L_31 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_30, /*hidden argument*/NULL);
		Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  L_32;
		L_32 = Matrix4x4_GetColumn_m5CAA237D7FD65AA772B84A1134E8B0551F9F8480((Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 *)(&V_0), 3, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_33;
		L_33 = Vector4_op_Implicit_m5811604E04B684BE3F1A212A7FA46767619AB35B(L_32, /*hidden argument*/NULL);
		NullCheck(L_31);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_31, L_33, /*hidden argument*/NULL);
		// m_compass.SetActive(true);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_34 = __this->get_m_compass_10();
		NullCheck(L_34);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_34, (bool)1, /*hidden argument*/NULL);
		// } else {
		goto IL_00f2;
	}

IL_00e6:
	{
		// m_compass.SetActive(false);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_35 = __this->get_m_compass_10();
		NullCheck(L_35);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_35, (bool)0, /*hidden argument*/NULL);
	}

IL_00f2:
	{
		// if ((matrix = manager.GetArGoalMatrix()) != Matrix4x4.identity) {
		LocationManager_t8BEF4C1AFA85AB524CFB93A28DF2478A26E27401 * L_36 = __this->get_manager_4();
		NullCheck(L_36);
		Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  L_37;
		L_37 = LocationManager_GetArGoalMatrix_m07B3D5DEAB94464F11CA1C4C79DFA1A793437084(L_36, /*hidden argument*/NULL);
		Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  L_38 = L_37;
		V_0 = L_38;
		Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  L_39;
		L_39 = Matrix4x4_get_identity_mC91289718DDD3DDBE0A10551BDA59A446414A596(/*hidden argument*/NULL);
		bool L_40;
		L_40 = Matrix4x4_op_Inequality_m6E62E1FDEDC9AF783BE1041726A18BCA5E6CFC6D(L_38, L_39, /*hidden argument*/NULL);
		if (!L_40)
		{
			goto IL_0165;
		}
	}
	{
		// m_goal.transform.rotation = Quaternion.LookRotation(matrix.GetColumn(2), matrix.GetColumn(1));
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_41 = __this->get_m_goal_11();
		NullCheck(L_41);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_42;
		L_42 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_41, /*hidden argument*/NULL);
		Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  L_43;
		L_43 = Matrix4x4_GetColumn_m5CAA237D7FD65AA772B84A1134E8B0551F9F8480((Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 *)(&V_0), 2, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_44;
		L_44 = Vector4_op_Implicit_m5811604E04B684BE3F1A212A7FA46767619AB35B(L_43, /*hidden argument*/NULL);
		Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  L_45;
		L_45 = Matrix4x4_GetColumn_m5CAA237D7FD65AA772B84A1134E8B0551F9F8480((Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 *)(&V_0), 1, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_46;
		L_46 = Vector4_op_Implicit_m5811604E04B684BE3F1A212A7FA46767619AB35B(L_45, /*hidden argument*/NULL);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_47;
		L_47 = Quaternion_LookRotation_m8A7DB5BDBC361586191AB67ACF857F46160EE3F1(L_44, L_46, /*hidden argument*/NULL);
		NullCheck(L_42);
		Transform_set_rotation_m1B5F3D4CE984AB31254615C9C71B0E54978583B4(L_42, L_47, /*hidden argument*/NULL);
		// m_goal.transform.position = matrix.GetColumn(3);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_48 = __this->get_m_goal_11();
		NullCheck(L_48);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_49;
		L_49 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_48, /*hidden argument*/NULL);
		Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  L_50;
		L_50 = Matrix4x4_GetColumn_m5CAA237D7FD65AA772B84A1134E8B0551F9F8480((Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 *)(&V_0), 3, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_51;
		L_51 = Vector4_op_Implicit_m5811604E04B684BE3F1A212A7FA46767619AB35B(L_50, /*hidden argument*/NULL);
		NullCheck(L_49);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_49, L_51, /*hidden argument*/NULL);
		// m_goal.SetActive(true);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_52 = __this->get_m_goal_11();
		NullCheck(L_52);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_52, (bool)1, /*hidden argument*/NULL);
		// } else {
		goto IL_0171;
	}

IL_0165:
	{
		// m_goal.SetActive(false);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_53 = __this->get_m_goal_11();
		NullCheck(L_53);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_53, (bool)0, /*hidden argument*/NULL);
	}

IL_0171:
	{
		// int t = 0;
		V_3 = 0;
		// int count = manager.GetArTurnCount();
		LocationManager_t8BEF4C1AFA85AB524CFB93A28DF2478A26E27401 * L_54 = __this->get_manager_4();
		NullCheck(L_54);
		int32_t L_55;
		L_55 = LocationManager_GetArTurnCount_m7AF1AC7D1EB607813A0F823AFAB83D45F4870B52(L_54, /*hidden argument*/NULL);
		V_4 = L_55;
		// for (int i = 0; i < count && t < turns.Length; ++i) {
		V_5 = 0;
		goto IL_020b;
	}

IL_0188:
	{
		// if ((matrix = manager.GetArTurnMatrix(i)) != Matrix4x4.identity) {
		LocationManager_t8BEF4C1AFA85AB524CFB93A28DF2478A26E27401 * L_56 = __this->get_manager_4();
		int32_t L_57 = V_5;
		NullCheck(L_56);
		Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  L_58;
		L_58 = LocationManager_GetArTurnMatrix_mCBE4C044583A3C363CD3163AF90E2E22617F8074(L_56, L_57, /*hidden argument*/NULL);
		Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  L_59 = L_58;
		V_0 = L_59;
		Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  L_60;
		L_60 = Matrix4x4_get_identity_mC91289718DDD3DDBE0A10551BDA59A446414A596(/*hidden argument*/NULL);
		bool L_61;
		L_61 = Matrix4x4_op_Inequality_m6E62E1FDEDC9AF783BE1041726A18BCA5E6CFC6D(L_59, L_60, /*hidden argument*/NULL);
		if (!L_61)
		{
			goto IL_0205;
		}
	}
	{
		// turns[t].transform.rotation = Quaternion.LookRotation(matrix.GetColumn(2), matrix.GetColumn(1));
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_62 = __this->get_turns_13();
		int32_t L_63 = V_3;
		NullCheck(L_62);
		int32_t L_64 = L_63;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_65 = (L_62)->GetAt(static_cast<il2cpp_array_size_t>(L_64));
		NullCheck(L_65);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_66;
		L_66 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_65, /*hidden argument*/NULL);
		Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  L_67;
		L_67 = Matrix4x4_GetColumn_m5CAA237D7FD65AA772B84A1134E8B0551F9F8480((Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 *)(&V_0), 2, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_68;
		L_68 = Vector4_op_Implicit_m5811604E04B684BE3F1A212A7FA46767619AB35B(L_67, /*hidden argument*/NULL);
		Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  L_69;
		L_69 = Matrix4x4_GetColumn_m5CAA237D7FD65AA772B84A1134E8B0551F9F8480((Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 *)(&V_0), 1, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_70;
		L_70 = Vector4_op_Implicit_m5811604E04B684BE3F1A212A7FA46767619AB35B(L_69, /*hidden argument*/NULL);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_71;
		L_71 = Quaternion_LookRotation_m8A7DB5BDBC361586191AB67ACF857F46160EE3F1(L_68, L_70, /*hidden argument*/NULL);
		NullCheck(L_66);
		Transform_set_rotation_m1B5F3D4CE984AB31254615C9C71B0E54978583B4(L_66, L_71, /*hidden argument*/NULL);
		// turns[t].transform.position = matrix.GetColumn(3);
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_72 = __this->get_turns_13();
		int32_t L_73 = V_3;
		NullCheck(L_72);
		int32_t L_74 = L_73;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_75 = (L_72)->GetAt(static_cast<il2cpp_array_size_t>(L_74));
		NullCheck(L_75);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_76;
		L_76 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_75, /*hidden argument*/NULL);
		Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  L_77;
		L_77 = Matrix4x4_GetColumn_m5CAA237D7FD65AA772B84A1134E8B0551F9F8480((Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 *)(&V_0), 3, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_78;
		L_78 = Vector4_op_Implicit_m5811604E04B684BE3F1A212A7FA46767619AB35B(L_77, /*hidden argument*/NULL);
		NullCheck(L_76);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_76, L_78, /*hidden argument*/NULL);
		// turns[t].SetActive(true);
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_79 = __this->get_turns_13();
		int32_t L_80 = V_3;
		NullCheck(L_79);
		int32_t L_81 = L_80;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_82 = (L_79)->GetAt(static_cast<il2cpp_array_size_t>(L_81));
		NullCheck(L_82);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_82, (bool)1, /*hidden argument*/NULL);
		// ++t;
		int32_t L_83 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_83, (int32_t)1));
	}

IL_0205:
	{
		// for (int i = 0; i < count && t < turns.Length; ++i) {
		int32_t L_84 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add((int32_t)L_84, (int32_t)1));
	}

IL_020b:
	{
		// for (int i = 0; i < count && t < turns.Length; ++i) {
		int32_t L_85 = V_5;
		int32_t L_86 = V_4;
		if ((((int32_t)L_85) >= ((int32_t)L_86)))
		{
			goto IL_0233;
		}
	}
	{
		int32_t L_87 = V_3;
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_88 = __this->get_turns_13();
		NullCheck(L_88);
		if ((((int32_t)L_87) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_88)->max_length))))))
		{
			goto IL_0188;
		}
	}
	{
		goto IL_0233;
	}

IL_0221:
	{
		// for (; t < turns.Length; ++t) turns[t].SetActive(false);
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_89 = __this->get_turns_13();
		int32_t L_90 = V_3;
		NullCheck(L_89);
		int32_t L_91 = L_90;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_92 = (L_89)->GetAt(static_cast<il2cpp_array_size_t>(L_91));
		NullCheck(L_92);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_92, (bool)0, /*hidden argument*/NULL);
		// for (; t < turns.Length; ++t) turns[t].SetActive(false);
		int32_t L_93 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_93, (int32_t)1));
	}

IL_0233:
	{
		// for (; t < turns.Length; ++t) turns[t].SetActive(false);
		int32_t L_94 = V_3;
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_95 = __this->get_turns_13();
		NullCheck(L_95);
		if ((((int32_t)L_94) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_95)->max_length))))))
		{
			goto IL_0221;
		}
	}
	{
		// }
		return;
	}
}
// System.Void IndoorAtlas.IndoorAtlasARWayfinding::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IndoorAtlasARWayfinding__ctor_m4122EC2F65BF947D7D0B8A96DD8CA624CE22E458 (IndoorAtlasARWayfinding_tEC5C5F2513334FDA2BC5A261CB74E6E413413904 * __this, const RuntimeMethod* method)
{
	{
		// bool m_wayfinding = true;
		__this->set_m_wayfinding_6((bool)1);
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Double IndoorAtlas.IndoorAtlasSession::get_distanceFilter()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double IndoorAtlasSession_get_distanceFilter_m95B8CC304A32BCDF5A2A6C3BAACE0B8B1D1CBFD5 (IndoorAtlasSession_t481C53C3F6FF3CBB05117D2F9D20BCCE12FB511F * __this, const RuntimeMethod* method)
{
	{
		// get { return m_distanceFilter; }
		double L_0 = __this->get_m_distanceFilter_8();
		return L_0;
	}
}
// System.Void IndoorAtlas.IndoorAtlasSession::set_distanceFilter(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IndoorAtlasSession_set_distanceFilter_m434A6CE7C827327808DCD78B6E99820C84C783A9 (IndoorAtlasSession_t481C53C3F6FF3CBB05117D2F9D20BCCE12FB511F * __this, double ___value0, const RuntimeMethod* method)
{
	{
		// m_distanceFilter = value;
		double L_0 = ___value0;
		__this->set_m_distanceFilter_8(L_0);
		// if (manager != null) manager.SetDistanceFilter(value);
		LocationManager_t8BEF4C1AFA85AB524CFB93A28DF2478A26E27401 * L_1 = __this->get_manager_4();
		if (!L_1)
		{
			goto IL_001b;
		}
	}
	{
		// if (manager != null) manager.SetDistanceFilter(value);
		LocationManager_t8BEF4C1AFA85AB524CFB93A28DF2478A26E27401 * L_2 = __this->get_manager_4();
		double L_3 = ___value0;
		NullCheck(L_2);
		LocationManager_SetDistanceFilter_mA6BEFA3085F374274F2538651F9DE1EF2AD7DEF8(L_2, L_3, /*hidden argument*/NULL);
	}

IL_001b:
	{
		// }
		return;
	}
}
// System.Double IndoorAtlas.IndoorAtlasSession::get_timeFilter()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double IndoorAtlasSession_get_timeFilter_mE26F22864E3CADD58130F87B5EC3A18646AB7B09 (IndoorAtlasSession_t481C53C3F6FF3CBB05117D2F9D20BCCE12FB511F * __this, const RuntimeMethod* method)
{
	{
		// get { return m_timeFilter; }
		double L_0 = __this->get_m_timeFilter_9();
		return L_0;
	}
}
// System.Void IndoorAtlas.IndoorAtlasSession::set_timeFilter(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IndoorAtlasSession_set_timeFilter_mC3B372B4138D11683EE7D2FE62BD558354699CA8 (IndoorAtlasSession_t481C53C3F6FF3CBB05117D2F9D20BCCE12FB511F * __this, double ___value0, const RuntimeMethod* method)
{
	{
		// m_timeFilter = value;
		double L_0 = ___value0;
		__this->set_m_timeFilter_9(L_0);
		// if (manager != null) manager.SetTimeFilter(value);
		LocationManager_t8BEF4C1AFA85AB524CFB93A28DF2478A26E27401 * L_1 = __this->get_manager_4();
		if (!L_1)
		{
			goto IL_001b;
		}
	}
	{
		// if (manager != null) manager.SetTimeFilter(value);
		LocationManager_t8BEF4C1AFA85AB524CFB93A28DF2478A26E27401 * L_2 = __this->get_manager_4();
		double L_3 = ___value0;
		NullCheck(L_2);
		LocationManager_SetTimeFilter_mBE593A3417515514A61CCD998B320B05434C05D0(L_2, L_3, /*hidden argument*/NULL);
	}

IL_001b:
	{
		// }
		return;
	}
}
// System.Double IndoorAtlas.IndoorAtlasSession::get_headingFilter()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double IndoorAtlasSession_get_headingFilter_mA6859CD483144D49CC3EAFA106D178FACA7F3561 (IndoorAtlasSession_t481C53C3F6FF3CBB05117D2F9D20BCCE12FB511F * __this, const RuntimeMethod* method)
{
	{
		// get { return m_headingFilter; }
		double L_0 = __this->get_m_headingFilter_10();
		return L_0;
	}
}
// System.Void IndoorAtlas.IndoorAtlasSession::set_headingFilter(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IndoorAtlasSession_set_headingFilter_m5D3994FA708F5A665C464EDFFE9988AD02925983 (IndoorAtlasSession_t481C53C3F6FF3CBB05117D2F9D20BCCE12FB511F * __this, double ___value0, const RuntimeMethod* method)
{
	{
		// m_headingFilter = value;
		double L_0 = ___value0;
		__this->set_m_headingFilter_10(L_0);
		// if (manager != null) manager.SetHeadingFilter(value);
		LocationManager_t8BEF4C1AFA85AB524CFB93A28DF2478A26E27401 * L_1 = __this->get_manager_4();
		if (!L_1)
		{
			goto IL_001b;
		}
	}
	{
		// if (manager != null) manager.SetHeadingFilter(value);
		LocationManager_t8BEF4C1AFA85AB524CFB93A28DF2478A26E27401 * L_2 = __this->get_manager_4();
		double L_3 = ___value0;
		NullCheck(L_2);
		LocationManager_SetHeadingFilter_mB49774182C58294745C0E29F60C25B7E5A95BF16(L_2, L_3, /*hidden argument*/NULL);
	}

IL_001b:
	{
		// }
		return;
	}
}
// System.Double IndoorAtlas.IndoorAtlasSession::get_attitudeFilter()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double IndoorAtlasSession_get_attitudeFilter_m591E66E7784883B649683B5284A3D609EC445070 (IndoorAtlasSession_t481C53C3F6FF3CBB05117D2F9D20BCCE12FB511F * __this, const RuntimeMethod* method)
{
	{
		// get { return m_attitudeFilter; }
		double L_0 = __this->get_m_attitudeFilter_11();
		return L_0;
	}
}
// System.Void IndoorAtlas.IndoorAtlasSession::set_attitudeFilter(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IndoorAtlasSession_set_attitudeFilter_m3FBFA637139754105A9C04B0795372A9B9AF90FB (IndoorAtlasSession_t481C53C3F6FF3CBB05117D2F9D20BCCE12FB511F * __this, double ___value0, const RuntimeMethod* method)
{
	{
		// m_attitudeFilter = value;
		double L_0 = ___value0;
		__this->set_m_attitudeFilter_11(L_0);
		// if (manager != null) manager.SetAttitudeFilter(value);
		LocationManager_t8BEF4C1AFA85AB524CFB93A28DF2478A26E27401 * L_1 = __this->get_manager_4();
		if (!L_1)
		{
			goto IL_001b;
		}
	}
	{
		// if (manager != null) manager.SetAttitudeFilter(value);
		LocationManager_t8BEF4C1AFA85AB524CFB93A28DF2478A26E27401 * L_2 = __this->get_manager_4();
		double L_3 = ___value0;
		NullCheck(L_2);
		LocationManager_SetAttitudeFilter_m3AEFDB7B5BF23E1A7F6A2726B98B1A009722EE45(L_2, L_3, /*hidden argument*/NULL);
	}

IL_001b:
	{
		// }
		return;
	}
}
// System.Void IndoorAtlas.IndoorAtlasSession::WarnIfMultipleSessions()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IndoorAtlasSession_WarnIfMultipleSessions_m893888A6A9876FC771DA69A56EB1B3E61D0E11C4 (IndoorAtlasSession_t481C53C3F6FF3CBB05117D2F9D20BCCE12FB511F * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_FindObjectsOfType_TisIndoorAtlasSession_t481C53C3F6FF3CBB05117D2F9D20BCCE12FB511F_m74FECDBDD2896EF7C3E03FA97E964C87916D4574_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5B94E24E2B9C3F0FC9E5656838E34EB00EE36E59);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE4A07E5ADA399BB3ED12B8C3A0539F2195289AFF);
		s_Il2CppMethodInitialized = true;
	}
	IndoorAtlasSessionU5BU5D_t9AD63F9432C1B91572F9BA61CB38F80198F4D3A1* V_0 = NULL;
	String_t* V_1 = NULL;
	IndoorAtlasSessionU5BU5D_t9AD63F9432C1B91572F9BA61CB38F80198F4D3A1* V_2 = NULL;
	int32_t V_3 = 0;
	IndoorAtlasSession_t481C53C3F6FF3CBB05117D2F9D20BCCE12FB511F * V_4 = NULL;
	{
		// var sessions = FindObjectsOfType<IndoorAtlasSession>();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		IndoorAtlasSessionU5BU5D_t9AD63F9432C1B91572F9BA61CB38F80198F4D3A1* L_0;
		L_0 = Object_FindObjectsOfType_TisIndoorAtlasSession_t481C53C3F6FF3CBB05117D2F9D20BCCE12FB511F_m74FECDBDD2896EF7C3E03FA97E964C87916D4574(/*hidden argument*/Object_FindObjectsOfType_TisIndoorAtlasSession_t481C53C3F6FF3CBB05117D2F9D20BCCE12FB511F_m74FECDBDD2896EF7C3E03FA97E964C87916D4574_RuntimeMethod_var);
		V_0 = L_0;
		// if (sessions.Length > 1) {
		IndoorAtlasSessionU5BU5D_t9AD63F9432C1B91572F9BA61CB38F80198F4D3A1* L_1 = V_0;
		NullCheck(L_1);
		if ((((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_1)->max_length)))) <= ((int32_t)1)))
		{
			goto IL_0053;
		}
	}
	{
		// string sessionNames = "";
		V_1 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		// foreach (var session in sessions) {
		IndoorAtlasSessionU5BU5D_t9AD63F9432C1B91572F9BA61CB38F80198F4D3A1* L_2 = V_0;
		V_2 = L_2;
		V_3 = 0;
		goto IL_0039;
	}

IL_0018:
	{
		// foreach (var session in sessions) {
		IndoorAtlasSessionU5BU5D_t9AD63F9432C1B91572F9BA61CB38F80198F4D3A1* L_3 = V_2;
		int32_t L_4 = V_3;
		NullCheck(L_3);
		int32_t L_5 = L_4;
		IndoorAtlasSession_t481C53C3F6FF3CBB05117D2F9D20BCCE12FB511F * L_6 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		V_4 = L_6;
		// sessionNames += string.Format("\t{0}\n", session.name);
		String_t* L_7 = V_1;
		IndoorAtlasSession_t481C53C3F6FF3CBB05117D2F9D20BCCE12FB511F * L_8 = V_4;
		NullCheck(L_8);
		String_t* L_9;
		L_9 = Object_get_name_m0C7BC870ED2F0DC5A2FB09628136CD7D1CB82CFB(L_8, /*hidden argument*/NULL);
		String_t* L_10;
		L_10 = String_Format_mB3D38E5238C3164DB4D7D29339D9E225A4496D17(_stringLiteralE4A07E5ADA399BB3ED12B8C3A0539F2195289AFF, L_9, /*hidden argument*/NULL);
		String_t* L_11;
		L_11 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(L_7, L_10, /*hidden argument*/NULL);
		V_1 = L_11;
		int32_t L_12 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_12, (int32_t)1));
	}

IL_0039:
	{
		// foreach (var session in sessions) {
		int32_t L_13 = V_3;
		IndoorAtlasSessionU5BU5D_t9AD63F9432C1B91572F9BA61CB38F80198F4D3A1* L_14 = V_2;
		NullCheck(L_14);
		if ((((int32_t)L_13) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_14)->max_length))))))
		{
			goto IL_0018;
		}
	}
	{
		// Debug.LogWarningFormat(
		//         "Multiple active IndoorAtlas Sessions found. " +
		//         "These will conflict with each other, so " +
		//         "you should only have one active IndoorAtlas Session at a time. " +
		//         "Found these active sessions:\n{0}", sessionNames);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_15 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_16 = L_15;
		String_t* L_17 = V_1;
		NullCheck(L_16);
		ArrayElementTypeCheck (L_16, L_17);
		(L_16)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_17);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_LogWarningFormat_m405E9C0A631F815816F349D7591DD545932FF774(_stringLiteral5B94E24E2B9C3F0FC9E5656838E34EB00EE36E59, L_16, /*hidden argument*/NULL);
	}

IL_0053:
	{
		// }
		return;
	}
}
// System.Void IndoorAtlas.IndoorAtlasSession::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IndoorAtlasSession_OnEnable_m667B555FD3D500004175BC29D67287FBC8B9CF92 (IndoorAtlasSession_t481C53C3F6FF3CBB05117D2F9D20BCCE12FB511F * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LocationManager_t8BEF4C1AFA85AB524CFB93A28DF2478A26E27401_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (manager != null) return;
		LocationManager_t8BEF4C1AFA85AB524CFB93A28DF2478A26E27401 * L_0 = __this->get_manager_4();
		if (!L_0)
		{
			goto IL_0009;
		}
	}
	{
		// if (manager != null) return;
		return;
	}

IL_0009:
	{
		// manager = new LocationManager();
		LocationManager_t8BEF4C1AFA85AB524CFB93A28DF2478A26E27401 * L_1 = (LocationManager_t8BEF4C1AFA85AB524CFB93A28DF2478A26E27401 *)il2cpp_codegen_object_new(LocationManager_t8BEF4C1AFA85AB524CFB93A28DF2478A26E27401_il2cpp_TypeInfo_var);
		LocationManager__ctor_m8A7B0F89185A993CE9C081C9CFEF2903E2365180(L_1, /*hidden argument*/NULL);
		__this->set_manager_4(L_1);
		// manager.Init(apiKey, apiSecret, apiEndpoint, name);
		LocationManager_t8BEF4C1AFA85AB524CFB93A28DF2478A26E27401 * L_2 = __this->get_manager_4();
		String_t* L_3 = __this->get_apiKey_5();
		String_t* L_4 = __this->get_apiSecret_6();
		String_t* L_5 = __this->get_apiEndpoint_7();
		String_t* L_6;
		L_6 = Object_get_name_m0C7BC870ED2F0DC5A2FB09628136CD7D1CB82CFB(__this, /*hidden argument*/NULL);
		NullCheck(L_2);
		LocationManager_Init_mF9ECC915841247295BE7BC0E5C85A5E822B4ADB7(L_2, L_3, L_4, L_5, L_6, /*hidden argument*/NULL);
		// manager.SetDistanceFilter(m_distanceFilter);
		LocationManager_t8BEF4C1AFA85AB524CFB93A28DF2478A26E27401 * L_7 = __this->get_manager_4();
		double L_8 = __this->get_m_distanceFilter_8();
		NullCheck(L_7);
		LocationManager_SetDistanceFilter_mA6BEFA3085F374274F2538651F9DE1EF2AD7DEF8(L_7, L_8, /*hidden argument*/NULL);
		// manager.SetTimeFilter(m_timeFilter);
		LocationManager_t8BEF4C1AFA85AB524CFB93A28DF2478A26E27401 * L_9 = __this->get_manager_4();
		double L_10 = __this->get_m_timeFilter_9();
		NullCheck(L_9);
		LocationManager_SetTimeFilter_mBE593A3417515514A61CCD998B320B05434C05D0(L_9, L_10, /*hidden argument*/NULL);
		// manager.SetHeadingFilter(m_headingFilter);
		LocationManager_t8BEF4C1AFA85AB524CFB93A28DF2478A26E27401 * L_11 = __this->get_manager_4();
		double L_12 = __this->get_m_headingFilter_10();
		NullCheck(L_11);
		LocationManager_SetHeadingFilter_mB49774182C58294745C0E29F60C25B7E5A95BF16(L_11, L_12, /*hidden argument*/NULL);
		// manager.SetAttitudeFilter(m_attitudeFilter);
		LocationManager_t8BEF4C1AFA85AB524CFB93A28DF2478A26E27401 * L_13 = __this->get_manager_4();
		double L_14 = __this->get_m_attitudeFilter_11();
		NullCheck(L_13);
		LocationManager_SetAttitudeFilter_m3AEFDB7B5BF23E1A7F6A2726B98B1A009722EE45(L_13, L_14, /*hidden argument*/NULL);
		// manager.StartUpdatingLocation();
		LocationManager_t8BEF4C1AFA85AB524CFB93A28DF2478A26E27401 * L_15 = __this->get_manager_4();
		NullCheck(L_15);
		LocationManager_StartUpdatingLocation_m9B2BE343A453530CA63EBDC51485122746365470(L_15, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void IndoorAtlas.IndoorAtlasSession::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IndoorAtlasSession_OnDisable_mE62E2E0A4383535F89ABC0EB638B2D028056B13B (IndoorAtlasSession_t481C53C3F6FF3CBB05117D2F9D20BCCE12FB511F * __this, const RuntimeMethod* method)
{
	{
		// if (manager == null) return;
		LocationManager_t8BEF4C1AFA85AB524CFB93A28DF2478A26E27401 * L_0 = __this->get_manager_4();
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		// if (manager == null) return;
		return;
	}

IL_0009:
	{
		// manager.StopUpdatingLocation();
		LocationManager_t8BEF4C1AFA85AB524CFB93A28DF2478A26E27401 * L_1 = __this->get_manager_4();
		NullCheck(L_1);
		LocationManager_StopUpdatingLocation_m52713DEAE75ACB104FD5C70C6B99DEDF7EA32106(L_1, /*hidden argument*/NULL);
		// manager.Close();
		LocationManager_t8BEF4C1AFA85AB524CFB93A28DF2478A26E27401 * L_2 = __this->get_manager_4();
		NullCheck(L_2);
		LocationManager_Close_mCA6E7114846B4399331785DCC658CF25791E879B(L_2, /*hidden argument*/NULL);
		// manager = null;
		__this->set_manager_4((LocationManager_t8BEF4C1AFA85AB524CFB93A28DF2478A26E27401 *)NULL);
		// }
		return;
	}
}
// System.Void IndoorAtlas.IndoorAtlasSession::NativeIndoorAtlasOnLocationChanged(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IndoorAtlasSession_NativeIndoorAtlasOnLocationChanged_m874D21F780D073F41B9BE4B38B63A828C5C2D484 (IndoorAtlasSession_t481C53C3F6FF3CBB05117D2F9D20BCCE12FB511F * __this, String_t* ___data0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonUtility_FromJson_TisLocation_t80005B8E8D4EB97F3D3B810B36FECF5F1D064FF7_m698BA6FDCBCB81AEAC6118A324AF03274726C959_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6086233EAA3983492A99F13A738D20CA3332EE2C);
		s_Il2CppMethodInitialized = true;
	}
	Location_t80005B8E8D4EB97F3D3B810B36FECF5F1D064FF7 * V_0 = NULL;
	{
		// IndoorAtlas.Location location = JsonUtility.FromJson<IndoorAtlas.Location>(data);
		String_t* L_0 = ___data0;
		Location_t80005B8E8D4EB97F3D3B810B36FECF5F1D064FF7 * L_1;
		L_1 = JsonUtility_FromJson_TisLocation_t80005B8E8D4EB97F3D3B810B36FECF5F1D064FF7_m698BA6FDCBCB81AEAC6118A324AF03274726C959(L_0, /*hidden argument*/JsonUtility_FromJson_TisLocation_t80005B8E8D4EB97F3D3B810B36FECF5F1D064FF7_m698BA6FDCBCB81AEAC6118A324AF03274726C959_RuntimeMethod_var);
		V_0 = L_1;
		// Debug.Log(data);
		String_t* L_2 = ___data0;
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(L_2, /*hidden argument*/NULL);
		// Debug.Log(location);
		Location_t80005B8E8D4EB97F3D3B810B36FECF5F1D064FF7 * L_3 = V_0;
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(L_3, /*hidden argument*/NULL);
		// Debug.Log(location.position.coordinate);
		Location_t80005B8E8D4EB97F3D3B810B36FECF5F1D064FF7 * L_4 = V_0;
		NullCheck(L_4);
		LatLngFloor_t4B72E155829094591933053C9C85E867C1C255C3 * L_5 = L_4->get_position_3();
		NullCheck(L_5);
		WGS84_t38213D604BC65CB5C07F37093BA63B9E04E6D816 * L_6 = L_5->get_coordinate_0();
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(L_6, /*hidden argument*/NULL);
		// BroadcastMessage("IndoorAtlasOnLocationChanged", location, SendMessageOptions.DontRequireReceiver);
		Location_t80005B8E8D4EB97F3D3B810B36FECF5F1D064FF7 * L_7 = V_0;
		Component_BroadcastMessage_mF05169CE80661240769300D09DAB34FBD9C93C0C(__this, _stringLiteral6086233EAA3983492A99F13A738D20CA3332EE2C, L_7, 1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void IndoorAtlas.IndoorAtlasSession::NativeIndoorAtlasOnStatusChanged(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IndoorAtlasSession_NativeIndoorAtlasOnStatusChanged_mEF7988A656F758BFDE16441CAE088D04E0C75FEA (IndoorAtlasSession_t481C53C3F6FF3CBB05117D2F9D20BCCE12FB511F * __this, String_t* ___data0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonUtility_FromJson_TisStatus_t18AA7FCE4BA6D9E03B84C464B649B6E514066005_mAD9AEB40892CC21237D3623B4BDCED6794645974_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral56D3B291E760707F08898CB3B0AD1F233EA3D827);
		s_Il2CppMethodInitialized = true;
	}
	Status_t18AA7FCE4BA6D9E03B84C464B649B6E514066005 * V_0 = NULL;
	{
		// IndoorAtlas.Status serviceStatus = JsonUtility.FromJson<IndoorAtlas.Status> (data);
		String_t* L_0 = ___data0;
		Status_t18AA7FCE4BA6D9E03B84C464B649B6E514066005 * L_1;
		L_1 = JsonUtility_FromJson_TisStatus_t18AA7FCE4BA6D9E03B84C464B649B6E514066005_mAD9AEB40892CC21237D3623B4BDCED6794645974(L_0, /*hidden argument*/JsonUtility_FromJson_TisStatus_t18AA7FCE4BA6D9E03B84C464B649B6E514066005_mAD9AEB40892CC21237D3623B4BDCED6794645974_RuntimeMethod_var);
		V_0 = L_1;
		// BroadcastMessage("IndoorAtlasOnStatusChanged", serviceStatus, SendMessageOptions.DontRequireReceiver);
		Status_t18AA7FCE4BA6D9E03B84C464B649B6E514066005 * L_2 = V_0;
		Component_BroadcastMessage_mF05169CE80661240769300D09DAB34FBD9C93C0C(__this, _stringLiteral56D3B291E760707F08898CB3B0AD1F233EA3D827, L_2, 1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void IndoorAtlas.IndoorAtlasSession::NativeIndoorAtlasOnHeadingChanged(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IndoorAtlasSession_NativeIndoorAtlasOnHeadingChanged_m439BA88FCB96940EF210683D8979DD5637E109D8 (IndoorAtlasSession_t481C53C3F6FF3CBB05117D2F9D20BCCE12FB511F * __this, String_t* ___data0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonUtility_FromJson_TisHeading_t690A771FCF76A48B0B0FADBE2B864C6D2F2B5D80_mEB4C078CFC309C41A02510F20F91D19F32932F58_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2C8BBB0286493CA02782F8D9026786BD75AAC371);
		s_Il2CppMethodInitialized = true;
	}
	Heading_t690A771FCF76A48B0B0FADBE2B864C6D2F2B5D80 * V_0 = NULL;
	{
		// IndoorAtlas.Heading heading = JsonUtility.FromJson<IndoorAtlas.Heading>(data);
		String_t* L_0 = ___data0;
		Heading_t690A771FCF76A48B0B0FADBE2B864C6D2F2B5D80 * L_1;
		L_1 = JsonUtility_FromJson_TisHeading_t690A771FCF76A48B0B0FADBE2B864C6D2F2B5D80_mEB4C078CFC309C41A02510F20F91D19F32932F58(L_0, /*hidden argument*/JsonUtility_FromJson_TisHeading_t690A771FCF76A48B0B0FADBE2B864C6D2F2B5D80_mEB4C078CFC309C41A02510F20F91D19F32932F58_RuntimeMethod_var);
		V_0 = L_1;
		// BroadcastMessage("IndoorAtlasOnHeadingChanged", heading, SendMessageOptions.DontRequireReceiver);
		Heading_t690A771FCF76A48B0B0FADBE2B864C6D2F2B5D80 * L_2 = V_0;
		Component_BroadcastMessage_mF05169CE80661240769300D09DAB34FBD9C93C0C(__this, _stringLiteral2C8BBB0286493CA02782F8D9026786BD75AAC371, L_2, 1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void IndoorAtlas.IndoorAtlasSession::NativeIndoorAtlasOnOrientationChanged(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IndoorAtlasSession_NativeIndoorAtlasOnOrientationChanged_mC2398627064566BA680EE517569D2E0B535A1C42 (IndoorAtlasSession_t481C53C3F6FF3CBB05117D2F9D20BCCE12FB511F * __this, String_t* ___data0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonUtility_FromJson_TisOrientation_tA3C51FC6A527FD5C23B350DAE81C5FA79A0510AF_m34164B15BDFF3CDE8299911CB22DCD6895CB1EA6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1ED5181FBE67E31DCCDB86EAB86A65762943BCC3);
		s_Il2CppMethodInitialized = true;
	}
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  V_0;
	memset((&V_0), 0, sizeof(V_0));
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  V_1;
	memset((&V_1), 0, sizeof(V_1));
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		// Quaternion orientation = JsonUtility.FromJson<IndoorAtlas.Orientation>(data).getQuaternion();
		String_t* L_0 = ___data0;
		Orientation_tA3C51FC6A527FD5C23B350DAE81C5FA79A0510AF * L_1;
		L_1 = JsonUtility_FromJson_TisOrientation_tA3C51FC6A527FD5C23B350DAE81C5FA79A0510AF_m34164B15BDFF3CDE8299911CB22DCD6895CB1EA6(L_0, /*hidden argument*/JsonUtility_FromJson_TisOrientation_tA3C51FC6A527FD5C23B350DAE81C5FA79A0510AF_m34164B15BDFF3CDE8299911CB22DCD6895CB1EA6_RuntimeMethod_var);
		NullCheck(L_1);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_2;
		L_2 = Orientation_getQuaternion_mC8A9C8A10238244459A5FA35D137B131303DF835(L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		// Quaternion rot = Quaternion.Inverse(new Quaternion(orientation.x, orientation.y, -orientation.z, orientation.w));
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_3 = V_0;
		float L_4 = L_3.get_x_0();
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_5 = V_0;
		float L_6 = L_5.get_y_1();
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_7 = V_0;
		float L_8 = L_7.get_z_2();
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_9 = V_0;
		float L_10 = L_9.get_w_3();
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_11;
		memset((&L_11), 0, sizeof(L_11));
		Quaternion__ctor_m564FA9302F5B9DA8BAB97B0A2D86FFE83ACAA421((&L_11), L_4, L_6, ((-L_8)), L_10, /*hidden argument*/NULL);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_12;
		L_12 = Quaternion_Inverse_mE2A449C7AC8A40350AAC3761AE1AFC170062CAC9(L_11, /*hidden argument*/NULL);
		V_1 = L_12;
		// Quaternion unityRot = Quaternion.Euler(new Vector3(90.0f, 0.0f, 0.0f)) * rot;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_13;
		memset((&L_13), 0, sizeof(L_13));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_13), (90.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_14;
		L_14 = Quaternion_Euler_m887ABE4F4DD563351E9874D63922C2F53969BBAB(L_13, /*hidden argument*/NULL);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_15 = V_1;
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_16;
		L_16 = Quaternion_op_Multiply_m5C7A60AC0CDCA2C5E2F23E45FBD1B15CA152D7B0(L_14, L_15, /*hidden argument*/NULL);
		V_2 = L_16;
		// BroadcastMessage("IndoorAtlasOnOrientationChanged", unityRot, SendMessageOptions.DontRequireReceiver);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_17 = V_2;
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_18 = L_17;
		RuntimeObject * L_19 = Box(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4_il2cpp_TypeInfo_var, &L_18);
		Component_BroadcastMessage_mF05169CE80661240769300D09DAB34FBD9C93C0C(__this, _stringLiteral1ED5181FBE67E31DCCDB86EAB86A65762943BCC3, L_19, 1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void IndoorAtlas.IndoorAtlasSession::NativeIndoorAtlasOnEnterRegion(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IndoorAtlasSession_NativeIndoorAtlasOnEnterRegion_mE83CEDADA09504E4E9C8408FC4C5362E60DF3DEF (IndoorAtlasSession_t481C53C3F6FF3CBB05117D2F9D20BCCE12FB511F * __this, String_t* ___data0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonUtility_FromJson_TisRegion_t68EA17CE90BDC22C15E4531418B3B123519AADEB_m48D34C14B1AF378686531A102CABBA0F9DA3D915_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC7D6E91349A59BC87552BB7CC509A937FA65C332);
		s_Il2CppMethodInitialized = true;
	}
	Region_t68EA17CE90BDC22C15E4531418B3B123519AADEB * V_0 = NULL;
	{
		// IndoorAtlas.Region region = JsonUtility.FromJson<IndoorAtlas.Region>(data);
		String_t* L_0 = ___data0;
		Region_t68EA17CE90BDC22C15E4531418B3B123519AADEB * L_1;
		L_1 = JsonUtility_FromJson_TisRegion_t68EA17CE90BDC22C15E4531418B3B123519AADEB_m48D34C14B1AF378686531A102CABBA0F9DA3D915(L_0, /*hidden argument*/JsonUtility_FromJson_TisRegion_t68EA17CE90BDC22C15E4531418B3B123519AADEB_m48D34C14B1AF378686531A102CABBA0F9DA3D915_RuntimeMethod_var);
		V_0 = L_1;
		// BroadcastMessage("IndoorAtlasOnEnterRegion", region, SendMessageOptions.DontRequireReceiver);
		Region_t68EA17CE90BDC22C15E4531418B3B123519AADEB * L_2 = V_0;
		Component_BroadcastMessage_mF05169CE80661240769300D09DAB34FBD9C93C0C(__this, _stringLiteralC7D6E91349A59BC87552BB7CC509A937FA65C332, L_2, 1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void IndoorAtlas.IndoorAtlasSession::NativeIndoorAtlasOnExitRegion(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IndoorAtlasSession_NativeIndoorAtlasOnExitRegion_m839AB9F0F9F5405B32534DE177CC5F0F3DC60383 (IndoorAtlasSession_t481C53C3F6FF3CBB05117D2F9D20BCCE12FB511F * __this, String_t* ___data0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonUtility_FromJson_TisRegion_t68EA17CE90BDC22C15E4531418B3B123519AADEB_m48D34C14B1AF378686531A102CABBA0F9DA3D915_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3E81398C712E570F531A0E2EFFA97B407F0CEC89);
		s_Il2CppMethodInitialized = true;
	}
	Region_t68EA17CE90BDC22C15E4531418B3B123519AADEB * V_0 = NULL;
	{
		// IndoorAtlas.Region region = JsonUtility.FromJson<IndoorAtlas.Region>(data);
		String_t* L_0 = ___data0;
		Region_t68EA17CE90BDC22C15E4531418B3B123519AADEB * L_1;
		L_1 = JsonUtility_FromJson_TisRegion_t68EA17CE90BDC22C15E4531418B3B123519AADEB_m48D34C14B1AF378686531A102CABBA0F9DA3D915(L_0, /*hidden argument*/JsonUtility_FromJson_TisRegion_t68EA17CE90BDC22C15E4531418B3B123519AADEB_m48D34C14B1AF378686531A102CABBA0F9DA3D915_RuntimeMethod_var);
		V_0 = L_1;
		// BroadcastMessage("IndoorAtlasOnExitRegion", region, SendMessageOptions.DontRequireReceiver);
		Region_t68EA17CE90BDC22C15E4531418B3B123519AADEB * L_2 = V_0;
		Component_BroadcastMessage_mF05169CE80661240769300D09DAB34FBD9C93C0C(__this, _stringLiteral3E81398C712E570F531A0E2EFFA97B407F0CEC89, L_2, 1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void IndoorAtlas.IndoorAtlasSession::NativeIndoorAtlasOnRoute(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IndoorAtlasSession_NativeIndoorAtlasOnRoute_m6F33C121CB70BC5EEE8EF6830B566E5C76806E5C (IndoorAtlasSession_t481C53C3F6FF3CBB05117D2F9D20BCCE12FB511F * __this, String_t* ___data0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonUtility_FromJson_TisRoute_t8BB2F4499BD36E373F67536902ECDFF016551E5F_mFFABDF2BA9C572F7539565B162CB3B17F1B1BC79_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2C10D33DD497595546CEA8AEB39B124AD2324976);
		s_Il2CppMethodInitialized = true;
	}
	Route_t8BB2F4499BD36E373F67536902ECDFF016551E5F * V_0 = NULL;
	{
		// IndoorAtlas.Route route = JsonUtility.FromJson<IndoorAtlas.Route>(data);
		String_t* L_0 = ___data0;
		Route_t8BB2F4499BD36E373F67536902ECDFF016551E5F * L_1;
		L_1 = JsonUtility_FromJson_TisRoute_t8BB2F4499BD36E373F67536902ECDFF016551E5F_mFFABDF2BA9C572F7539565B162CB3B17F1B1BC79(L_0, /*hidden argument*/JsonUtility_FromJson_TisRoute_t8BB2F4499BD36E373F67536902ECDFF016551E5F_mFFABDF2BA9C572F7539565B162CB3B17F1B1BC79_RuntimeMethod_var);
		V_0 = L_1;
		// BroadcastMessage("IndoorAtlasOnRoute", route, SendMessageOptions.DontRequireReceiver);
		Route_t8BB2F4499BD36E373F67536902ECDFF016551E5F * L_2 = V_0;
		Component_BroadcastMessage_mF05169CE80661240769300D09DAB34FBD9C93C0C(__this, _stringLiteral2C10D33DD497595546CEA8AEB39B124AD2324976, L_2, 1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void IndoorAtlas.IndoorAtlasSession::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IndoorAtlasSession__ctor_m232D45B610992910D22D1EB163256EEE28803342 (IndoorAtlasSession_t481C53C3F6FF3CBB05117D2F9D20BCCE12FB511F * __this, const RuntimeMethod* method)
{
	{
		// double m_distanceFilter = 0.5;
		__this->set_m_distanceFilter_8((0.5));
		// double m_timeFilter = 2.0;
		__this->set_m_timeFilter_9((2.0));
		// double m_headingFilter = 1.0;
		__this->set_m_headingFilter_10((1.0));
		// double m_attitudeFilter = 1.0;
		__this->set_m_attitudeFilter_11((1.0));
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// UnityEngine.UI.Text IndoorAtlas.IndoorAtlasUIInformationProvider::get_traceId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * IndoorAtlasUIInformationProvider_get_traceId_mA8E53E0101973232C8EDC2516808993EB4E26EF8 (IndoorAtlasUIInformationProvider_t78A97B431F32A79E128252E349214170A053E060 * __this, const RuntimeMethod* method)
{
	{
		// get { return m_traceId; }
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_0 = __this->get_m_traceId_7();
		return L_0;
	}
}
// System.Void IndoorAtlas.IndoorAtlasUIInformationProvider::set_traceId(UnityEngine.UI.Text)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IndoorAtlasUIInformationProvider_set_traceId_m67AC6DE89470807647F7A7175BD91A5771B537D8 (IndoorAtlasUIInformationProvider_t78A97B431F32A79E128252E349214170A053E060 * __this, Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___value0, const RuntimeMethod* method)
{
	{
		// set { m_traceId = value; }
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_0 = ___value0;
		__this->set_m_traceId_7(L_0);
		// set { m_traceId = value; }
		return;
	}
}
// UnityEngine.UI.Text IndoorAtlas.IndoorAtlasUIInformationProvider::get_region()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * IndoorAtlasUIInformationProvider_get_region_m891326275C22E4528CA374768074447A6B5A6487 (IndoorAtlasUIInformationProvider_t78A97B431F32A79E128252E349214170A053E060 * __this, const RuntimeMethod* method)
{
	{
		// get { return m_region; }
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_0 = __this->get_m_region_8();
		return L_0;
	}
}
// System.Void IndoorAtlas.IndoorAtlasUIInformationProvider::set_region(UnityEngine.UI.Text)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IndoorAtlasUIInformationProvider_set_region_mCF9CF3D5EEBA89035DC9D34063FD4072D50EA130 (IndoorAtlasUIInformationProvider_t78A97B431F32A79E128252E349214170A053E060 * __this, Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___value0, const RuntimeMethod* method)
{
	{
		// set { m_region = value; }
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_0 = ___value0;
		__this->set_m_region_8(L_0);
		// set { m_region = value; }
		return;
	}
}
// IndoorAtlas.IndoorAtlasARWayfinding IndoorAtlas.IndoorAtlasUIInformationProvider::get_wayfinder()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR IndoorAtlasARWayfinding_tEC5C5F2513334FDA2BC5A261CB74E6E413413904 * IndoorAtlasUIInformationProvider_get_wayfinder_m5FFABB654B99DD221036BB8E1A0A88641A68CE2D (IndoorAtlasUIInformationProvider_t78A97B431F32A79E128252E349214170A053E060 * __this, const RuntimeMethod* method)
{
	{
		// get { return m_wayfinder; }
		IndoorAtlasARWayfinding_tEC5C5F2513334FDA2BC5A261CB74E6E413413904 * L_0 = __this->get_m_wayfinder_9();
		return L_0;
	}
}
// System.Void IndoorAtlas.IndoorAtlasUIInformationProvider::set_wayfinder(IndoorAtlas.IndoorAtlasARWayfinding)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IndoorAtlasUIInformationProvider_set_wayfinder_mBD5C27616C9EA0F15E35336677492C4B04CECC29 (IndoorAtlasUIInformationProvider_t78A97B431F32A79E128252E349214170A053E060 * __this, IndoorAtlasARWayfinding_tEC5C5F2513334FDA2BC5A261CB74E6E413413904 * ___value0, const RuntimeMethod* method)
{
	{
		// set { m_wayfinder = value; }
		IndoorAtlasARWayfinding_tEC5C5F2513334FDA2BC5A261CB74E6E413413904 * L_0 = ___value0;
		__this->set_m_wayfinder_9(L_0);
		// set { m_wayfinder = value; }
		return;
	}
}
// System.Void IndoorAtlas.IndoorAtlasUIInformationProvider::onPoiChanged()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IndoorAtlasUIInformationProvider_onPoiChanged_mCB91CA1CA21DFC7DA4DFF3B38D6451D6F2CAEC50 (IndoorAtlasUIInformationProvider_t78A97B431F32A79E128252E349214170A053E060 * __this, const RuntimeMethod* method)
{
	{
		// if (m_poi.value == 0) {
		Dropdown_t099F5232BB75810BC79EED6E27DDCED46C3BCD96 * L_0 = __this->get_m_poi_10();
		NullCheck(L_0);
		int32_t L_1;
		L_1 = Dropdown_get_value_mFBF47E0C72050C5CB96B8B6D33F41BA2D1368F26_inline(L_0, /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_001a;
		}
	}
	{
		// m_wayfinder.wayfinding = false;
		IndoorAtlasARWayfinding_tEC5C5F2513334FDA2BC5A261CB74E6E413413904 * L_2 = __this->get_m_wayfinder_9();
		NullCheck(L_2);
		IndoorAtlasARWayfinding_set_wayfinding_m95202BBE23364C19B65660B50515064916CCB1E5(L_2, (bool)0, /*hidden argument*/NULL);
		// return;
		return;
	}

IL_001a:
	{
		// if (currentVenue == null) return;
		Region_t68EA17CE90BDC22C15E4531418B3B123519AADEB * L_3 = __this->get_currentVenue_5();
		if (L_3)
		{
			goto IL_0023;
		}
	}
	{
		// if (currentVenue == null) return;
		return;
	}

IL_0023:
	{
		// m_wayfinder.target = currentVenue.venue.pois[m_poi.value - 1].position;
		IndoorAtlasARWayfinding_tEC5C5F2513334FDA2BC5A261CB74E6E413413904 * L_4 = __this->get_m_wayfinder_9();
		Region_t68EA17CE90BDC22C15E4531418B3B123519AADEB * L_5 = __this->get_currentVenue_5();
		NullCheck(L_5);
		Venue_t9B5BBEE12D028C4C1C86A978B6601550D25336B6 * L_6 = L_5->get_venue_4();
		NullCheck(L_6);
		POIU5BU5D_t04FA68210CCDCD2EA133D94A53071C5B93CBF497* L_7 = L_6->get_pois_4();
		Dropdown_t099F5232BB75810BC79EED6E27DDCED46C3BCD96 * L_8 = __this->get_m_poi_10();
		NullCheck(L_8);
		int32_t L_9;
		L_9 = Dropdown_get_value_mFBF47E0C72050C5CB96B8B6D33F41BA2D1368F26_inline(L_8, /*hidden argument*/NULL);
		NullCheck(L_7);
		int32_t L_10 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_9, (int32_t)1));
		POI_t8DBBCA0F0D1DFE03487EF4D0D91C39BA68B90574 * L_11 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		NullCheck(L_11);
		LatLngFloor_t4B72E155829094591933053C9C85E867C1C255C3 * L_12 = L_11->get_position_3();
		NullCheck(L_4);
		IndoorAtlasARWayfinding_set_target_m60F3F2A0370A3DE06C183DFD09F52831AB9A685A(L_4, L_12, /*hidden argument*/NULL);
		// m_wayfinder.wayfinding = true;
		IndoorAtlasARWayfinding_tEC5C5F2513334FDA2BC5A261CB74E6E413413904 * L_13 = __this->get_m_wayfinder_9();
		NullCheck(L_13);
		IndoorAtlasARWayfinding_set_wayfinding_m95202BBE23364C19B65660B50515064916CCB1E5(L_13, (bool)1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// UnityEngine.UI.Dropdown IndoorAtlas.IndoorAtlasUIInformationProvider::get_poi()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Dropdown_t099F5232BB75810BC79EED6E27DDCED46C3BCD96 * IndoorAtlasUIInformationProvider_get_poi_m1D3FF38D952D0D65AF2D16F341868077BA89818E (IndoorAtlasUIInformationProvider_t78A97B431F32A79E128252E349214170A053E060 * __this, const RuntimeMethod* method)
{
	{
		// get { return m_poi; }
		Dropdown_t099F5232BB75810BC79EED6E27DDCED46C3BCD96 * L_0 = __this->get_m_poi_10();
		return L_0;
	}
}
// System.Void IndoorAtlas.IndoorAtlasUIInformationProvider::set_poi(UnityEngine.UI.Dropdown)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IndoorAtlasUIInformationProvider_set_poi_m940195CF0A0C9503E1F451519AF664DC7FAB0B95 (IndoorAtlasUIInformationProvider_t78A97B431F32A79E128252E349214170A053E060 * __this, Dropdown_t099F5232BB75810BC79EED6E27DDCED46C3BCD96 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IndoorAtlasUIInformationProvider_U3Cset_poiU3Eb__19_0_mEDF0386C0F908718BBAE10DA93887EDD1ACA89AE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_1__ctor_m595DA2ECB187B2DF951D640BFEBCE02F3F800A3F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_1_t5CF46572372725E6225588C466A7AF5C8597AA79_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1_AddListener_mFCFAC8ACA3F75283268DC2629ADEB5504E8FC0C2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1_RemoveListener_m0DDD8A7A01D83C10E72C71631F8487FE817B264D_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (poiAction != null) m_poi.onValueChanged.RemoveListener(poiAction);
		UnityAction_1_t5CF46572372725E6225588C466A7AF5C8597AA79 * L_0 = __this->get_poiAction_6();
		if (!L_0)
		{
			goto IL_001e;
		}
	}
	{
		// if (poiAction != null) m_poi.onValueChanged.RemoveListener(poiAction);
		Dropdown_t099F5232BB75810BC79EED6E27DDCED46C3BCD96 * L_1 = __this->get_m_poi_10();
		NullCheck(L_1);
		DropdownEvent_tEB2C75C3DBC789936B31D9A979FD62E047846CFB * L_2;
		L_2 = Dropdown_get_onValueChanged_m05479714AEB528CF5CE93ED09870E98E6EC94CFA_inline(L_1, /*hidden argument*/NULL);
		UnityAction_1_t5CF46572372725E6225588C466A7AF5C8597AA79 * L_3 = __this->get_poiAction_6();
		NullCheck(L_2);
		UnityEvent_1_RemoveListener_m0DDD8A7A01D83C10E72C71631F8487FE817B264D(L_2, L_3, /*hidden argument*/UnityEvent_1_RemoveListener_m0DDD8A7A01D83C10E72C71631F8487FE817B264D_RuntimeMethod_var);
	}

IL_001e:
	{
		// m_poi = value;
		Dropdown_t099F5232BB75810BC79EED6E27DDCED46C3BCD96 * L_4 = ___value0;
		__this->set_m_poi_10(L_4);
		// poiAction = delegate{onPoiChanged();};
		UnityAction_1_t5CF46572372725E6225588C466A7AF5C8597AA79 * L_5 = (UnityAction_1_t5CF46572372725E6225588C466A7AF5C8597AA79 *)il2cpp_codegen_object_new(UnityAction_1_t5CF46572372725E6225588C466A7AF5C8597AA79_il2cpp_TypeInfo_var);
		UnityAction_1__ctor_m595DA2ECB187B2DF951D640BFEBCE02F3F800A3F(L_5, __this, (intptr_t)((intptr_t)IndoorAtlasUIInformationProvider_U3Cset_poiU3Eb__19_0_mEDF0386C0F908718BBAE10DA93887EDD1ACA89AE_RuntimeMethod_var), /*hidden argument*/UnityAction_1__ctor_m595DA2ECB187B2DF951D640BFEBCE02F3F800A3F_RuntimeMethod_var);
		__this->set_poiAction_6(L_5);
		// m_poi.onValueChanged.AddListener(poiAction);
		Dropdown_t099F5232BB75810BC79EED6E27DDCED46C3BCD96 * L_6 = __this->get_m_poi_10();
		NullCheck(L_6);
		DropdownEvent_tEB2C75C3DBC789936B31D9A979FD62E047846CFB * L_7;
		L_7 = Dropdown_get_onValueChanged_m05479714AEB528CF5CE93ED09870E98E6EC94CFA_inline(L_6, /*hidden argument*/NULL);
		UnityAction_1_t5CF46572372725E6225588C466A7AF5C8597AA79 * L_8 = __this->get_poiAction_6();
		NullCheck(L_7);
		UnityEvent_1_AddListener_mFCFAC8ACA3F75283268DC2629ADEB5504E8FC0C2(L_7, L_8, /*hidden argument*/UnityEvent_1_AddListener_mFCFAC8ACA3F75283268DC2629ADEB5504E8FC0C2_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void IndoorAtlas.IndoorAtlasUIInformationProvider::IndoorAtlasOnEnterRegion(IndoorAtlas.Region)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IndoorAtlasUIInformationProvider_IndoorAtlasOnEnterRegion_m4E03FABBB24F8E9CFCC05AD85B002B01C04DF923 (IndoorAtlasUIInformationProvider_t78A97B431F32A79E128252E349214170A053E060 * __this, Region_t68EA17CE90BDC22C15E4531418B3B123519AADEB * ___region0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m627ED3F7C50096BB8934F778CB980E79483BD2AE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m30C52A4F2828D86CA3FAB0B1B583948F4DA9F1F9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral548D93DDB2AC6B24373148B19D9A625571AB2318);
		s_Il2CppMethodInitialized = true;
	}
	List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * V_0 = NULL;
	POIU5BU5D_t04FA68210CCDCD2EA133D94A53071C5B93CBF497* V_1 = NULL;
	int32_t V_2 = 0;
	POI_t8DBBCA0F0D1DFE03487EF4D0D91C39BA68B90574 * V_3 = NULL;
	{
		// m_region.text = region.name;
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_0 = __this->get_m_region_8();
		Region_t68EA17CE90BDC22C15E4531418B3B123519AADEB * L_1 = ___region0;
		NullCheck(L_1);
		String_t* L_2 = L_1->get_name_1();
		NullCheck(L_0);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_0, L_2);
		// if (region.type == Region.Type.Venue) {
		Region_t68EA17CE90BDC22C15E4531418B3B123519AADEB * L_3 = ___region0;
		NullCheck(L_3);
		int32_t L_4 = L_3->get_type_3();
		if ((!(((uint32_t)L_4) == ((uint32_t)2))))
		{
			goto IL_0078;
		}
	}
	{
		// currentVenue = region;
		Region_t68EA17CE90BDC22C15E4531418B3B123519AADEB * L_5 = ___region0;
		__this->set_currentVenue_5(L_5);
		// m_poi.ClearOptions();
		Dropdown_t099F5232BB75810BC79EED6E27DDCED46C3BCD96 * L_6 = __this->get_m_poi_10();
		NullCheck(L_6);
		Dropdown_ClearOptions_m7F59A8B054698715921D2B0E37EB1808BE53C23C(L_6, /*hidden argument*/NULL);
		// List<string> options = new List<string>{"None"};
		List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_7 = (List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 *)il2cpp_codegen_object_new(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3_il2cpp_TypeInfo_var);
		List_1__ctor_m30C52A4F2828D86CA3FAB0B1B583948F4DA9F1F9(L_7, /*hidden argument*/List_1__ctor_m30C52A4F2828D86CA3FAB0B1B583948F4DA9F1F9_RuntimeMethod_var);
		List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_8 = L_7;
		NullCheck(L_8);
		List_1_Add_m627ED3F7C50096BB8934F778CB980E79483BD2AE(L_8, _stringLiteral548D93DDB2AC6B24373148B19D9A625571AB2318, /*hidden argument*/List_1_Add_m627ED3F7C50096BB8934F778CB980E79483BD2AE_RuntimeMethod_var);
		V_0 = L_8;
		// foreach (POI poi in currentVenue.venue.pois) options.Add(poi.name);
		Region_t68EA17CE90BDC22C15E4531418B3B123519AADEB * L_9 = __this->get_currentVenue_5();
		NullCheck(L_9);
		Venue_t9B5BBEE12D028C4C1C86A978B6601550D25336B6 * L_10 = L_9->get_venue_4();
		NullCheck(L_10);
		POIU5BU5D_t04FA68210CCDCD2EA133D94A53071C5B93CBF497* L_11 = L_10->get_pois_4();
		V_1 = L_11;
		V_2 = 0;
		goto IL_0066;
	}

IL_0052:
	{
		// foreach (POI poi in currentVenue.venue.pois) options.Add(poi.name);
		POIU5BU5D_t04FA68210CCDCD2EA133D94A53071C5B93CBF497* L_12 = V_1;
		int32_t L_13 = V_2;
		NullCheck(L_12);
		int32_t L_14 = L_13;
		POI_t8DBBCA0F0D1DFE03487EF4D0D91C39BA68B90574 * L_15 = (L_12)->GetAt(static_cast<il2cpp_array_size_t>(L_14));
		V_3 = L_15;
		// foreach (POI poi in currentVenue.venue.pois) options.Add(poi.name);
		List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_16 = V_0;
		POI_t8DBBCA0F0D1DFE03487EF4D0D91C39BA68B90574 * L_17 = V_3;
		NullCheck(L_17);
		String_t* L_18 = L_17->get_name_1();
		NullCheck(L_16);
		List_1_Add_m627ED3F7C50096BB8934F778CB980E79483BD2AE(L_16, L_18, /*hidden argument*/List_1_Add_m627ED3F7C50096BB8934F778CB980E79483BD2AE_RuntimeMethod_var);
		int32_t L_19 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_19, (int32_t)1));
	}

IL_0066:
	{
		// foreach (POI poi in currentVenue.venue.pois) options.Add(poi.name);
		int32_t L_20 = V_2;
		POIU5BU5D_t04FA68210CCDCD2EA133D94A53071C5B93CBF497* L_21 = V_1;
		NullCheck(L_21);
		if ((((int32_t)L_20) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_21)->max_length))))))
		{
			goto IL_0052;
		}
	}
	{
		// m_poi.AddOptions(options);
		Dropdown_t099F5232BB75810BC79EED6E27DDCED46C3BCD96 * L_22 = __this->get_m_poi_10();
		List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_23 = V_0;
		NullCheck(L_22);
		Dropdown_AddOptions_m2375327887D29ACE452F157863186FC8D0AA4AF9(L_22, L_23, /*hidden argument*/NULL);
	}

IL_0078:
	{
		// }
		return;
	}
}
// System.Void IndoorAtlas.IndoorAtlasUIInformationProvider::IndoorAtlasOnExitRegion(IndoorAtlas.Region)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IndoorAtlasUIInformationProvider_IndoorAtlasOnExitRegion_m6D1011159DB8187833B71DCA98F21621A5B3255A (IndoorAtlasUIInformationProvider_t78A97B431F32A79E128252E349214170A053E060 * __this, Region_t68EA17CE90BDC22C15E4531418B3B123519AADEB * ___region0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m627ED3F7C50096BB8934F778CB980E79483BD2AE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m30C52A4F2828D86CA3FAB0B1B583948F4DA9F1F9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral548D93DDB2AC6B24373148B19D9A625571AB2318);
		s_Il2CppMethodInitialized = true;
	}
	List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * V_0 = NULL;
	{
		// if (region.type == Region.Type.FloorPlan && currentVenue != null) {
		Region_t68EA17CE90BDC22C15E4531418B3B123519AADEB * L_0 = ___region0;
		NullCheck(L_0);
		int32_t L_1 = L_0->get_type_3();
		if ((!(((uint32_t)L_1) == ((uint32_t)1))))
		{
			goto IL_0028;
		}
	}
	{
		Region_t68EA17CE90BDC22C15E4531418B3B123519AADEB * L_2 = __this->get_currentVenue_5();
		if (!L_2)
		{
			goto IL_0028;
		}
	}
	{
		// m_region.text = currentVenue.name;
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_3 = __this->get_m_region_8();
		Region_t68EA17CE90BDC22C15E4531418B3B123519AADEB * L_4 = __this->get_currentVenue_5();
		NullCheck(L_4);
		String_t* L_5 = L_4->get_name_1();
		NullCheck(L_3);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_3, L_5);
		// } else if (region.type == Region.Type.Venue) {
		return;
	}

IL_0028:
	{
		// } else if (region.type == Region.Type.Venue) {
		Region_t68EA17CE90BDC22C15E4531418B3B123519AADEB * L_6 = ___region0;
		NullCheck(L_6);
		int32_t L_7 = L_6->get_type_3();
		if ((!(((uint32_t)L_7) == ((uint32_t)2))))
		{
			goto IL_0060;
		}
	}
	{
		// currentVenue = null;
		__this->set_currentVenue_5((Region_t68EA17CE90BDC22C15E4531418B3B123519AADEB *)NULL);
		// m_poi.ClearOptions();
		Dropdown_t099F5232BB75810BC79EED6E27DDCED46C3BCD96 * L_8 = __this->get_m_poi_10();
		NullCheck(L_8);
		Dropdown_ClearOptions_m7F59A8B054698715921D2B0E37EB1808BE53C23C(L_8, /*hidden argument*/NULL);
		// List<string> options = new List<string>{"None"};
		List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_9 = (List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 *)il2cpp_codegen_object_new(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3_il2cpp_TypeInfo_var);
		List_1__ctor_m30C52A4F2828D86CA3FAB0B1B583948F4DA9F1F9(L_9, /*hidden argument*/List_1__ctor_m30C52A4F2828D86CA3FAB0B1B583948F4DA9F1F9_RuntimeMethod_var);
		List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_10 = L_9;
		NullCheck(L_10);
		List_1_Add_m627ED3F7C50096BB8934F778CB980E79483BD2AE(L_10, _stringLiteral548D93DDB2AC6B24373148B19D9A625571AB2318, /*hidden argument*/List_1_Add_m627ED3F7C50096BB8934F778CB980E79483BD2AE_RuntimeMethod_var);
		V_0 = L_10;
		// m_poi.AddOptions(options);
		Dropdown_t099F5232BB75810BC79EED6E27DDCED46C3BCD96 * L_11 = __this->get_m_poi_10();
		List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_12 = V_0;
		NullCheck(L_11);
		Dropdown_AddOptions_m2375327887D29ACE452F157863186FC8D0AA4AF9(L_11, L_12, /*hidden argument*/NULL);
	}

IL_0060:
	{
		// }
		return;
	}
}
// System.Void IndoorAtlas.IndoorAtlasUIInformationProvider::UpdateText()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IndoorAtlasUIInformationProvider_UpdateText_m2F20840B4AE2F3880E471E212D396ACF9EB93B7E (IndoorAtlasUIInformationProvider_t78A97B431F32A79E128252E349214170A053E060 * __this, const RuntimeMethod* method)
{
	{
		// m_traceId.text = manager.GetTraceId();
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_0 = __this->get_m_traceId_7();
		LocationManager_t8BEF4C1AFA85AB524CFB93A28DF2478A26E27401 * L_1 = __this->get_manager_4();
		NullCheck(L_1);
		String_t* L_2;
		L_2 = LocationManager_GetTraceId_m73C700ED6F1A8AA9395019B8BE95B9E7D420D104(L_1, /*hidden argument*/NULL);
		NullCheck(L_0);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_0, L_2);
		// }
		return;
	}
}
// System.Void IndoorAtlas.IndoorAtlasUIInformationProvider::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IndoorAtlasUIInformationProvider_Awake_m289008F3F97E83FEFE336556F7BDDB6E1182C5DA (IndoorAtlasUIInformationProvider_t78A97B431F32A79E128252E349214170A053E060 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IndoorAtlasUIInformationProvider_U3CAwakeU3Eb__23_0_m13DC550C25F75BF93B575A856B517CB3882036A4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m627ED3F7C50096BB8934F778CB980E79483BD2AE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m30C52A4F2828D86CA3FAB0B1B583948F4DA9F1F9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_1__ctor_m595DA2ECB187B2DF951D640BFEBCE02F3F800A3F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_1_t5CF46572372725E6225588C466A7AF5C8597AA79_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1_AddListener_mFCFAC8ACA3F75283268DC2629ADEB5504E8FC0C2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1_RemoveListener_m0DDD8A7A01D83C10E72C71631F8487FE817B264D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral548D93DDB2AC6B24373148B19D9A625571AB2318);
		s_Il2CppMethodInitialized = true;
	}
	List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * V_0 = NULL;
	{
		// m_poi.ClearOptions();
		Dropdown_t099F5232BB75810BC79EED6E27DDCED46C3BCD96 * L_0 = __this->get_m_poi_10();
		NullCheck(L_0);
		Dropdown_ClearOptions_m7F59A8B054698715921D2B0E37EB1808BE53C23C(L_0, /*hidden argument*/NULL);
		// List<string> options = new List<string>{"None"};
		List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_1 = (List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 *)il2cpp_codegen_object_new(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3_il2cpp_TypeInfo_var);
		List_1__ctor_m30C52A4F2828D86CA3FAB0B1B583948F4DA9F1F9(L_1, /*hidden argument*/List_1__ctor_m30C52A4F2828D86CA3FAB0B1B583948F4DA9F1F9_RuntimeMethod_var);
		List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_2 = L_1;
		NullCheck(L_2);
		List_1_Add_m627ED3F7C50096BB8934F778CB980E79483BD2AE(L_2, _stringLiteral548D93DDB2AC6B24373148B19D9A625571AB2318, /*hidden argument*/List_1_Add_m627ED3F7C50096BB8934F778CB980E79483BD2AE_RuntimeMethod_var);
		V_0 = L_2;
		// m_poi.AddOptions(options);
		Dropdown_t099F5232BB75810BC79EED6E27DDCED46C3BCD96 * L_3 = __this->get_m_poi_10();
		List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_4 = V_0;
		NullCheck(L_3);
		Dropdown_AddOptions_m2375327887D29ACE452F157863186FC8D0AA4AF9(L_3, L_4, /*hidden argument*/NULL);
		// if (poiAction != null) m_poi.onValueChanged.RemoveListener(poiAction);
		UnityAction_1_t5CF46572372725E6225588C466A7AF5C8597AA79 * L_5 = __this->get_poiAction_6();
		if (!L_5)
		{
			goto IL_0046;
		}
	}
	{
		// if (poiAction != null) m_poi.onValueChanged.RemoveListener(poiAction);
		Dropdown_t099F5232BB75810BC79EED6E27DDCED46C3BCD96 * L_6 = __this->get_m_poi_10();
		NullCheck(L_6);
		DropdownEvent_tEB2C75C3DBC789936B31D9A979FD62E047846CFB * L_7;
		L_7 = Dropdown_get_onValueChanged_m05479714AEB528CF5CE93ED09870E98E6EC94CFA_inline(L_6, /*hidden argument*/NULL);
		UnityAction_1_t5CF46572372725E6225588C466A7AF5C8597AA79 * L_8 = __this->get_poiAction_6();
		NullCheck(L_7);
		UnityEvent_1_RemoveListener_m0DDD8A7A01D83C10E72C71631F8487FE817B264D(L_7, L_8, /*hidden argument*/UnityEvent_1_RemoveListener_m0DDD8A7A01D83C10E72C71631F8487FE817B264D_RuntimeMethod_var);
	}

IL_0046:
	{
		// poiAction = delegate{onPoiChanged();};
		UnityAction_1_t5CF46572372725E6225588C466A7AF5C8597AA79 * L_9 = (UnityAction_1_t5CF46572372725E6225588C466A7AF5C8597AA79 *)il2cpp_codegen_object_new(UnityAction_1_t5CF46572372725E6225588C466A7AF5C8597AA79_il2cpp_TypeInfo_var);
		UnityAction_1__ctor_m595DA2ECB187B2DF951D640BFEBCE02F3F800A3F(L_9, __this, (intptr_t)((intptr_t)IndoorAtlasUIInformationProvider_U3CAwakeU3Eb__23_0_m13DC550C25F75BF93B575A856B517CB3882036A4_RuntimeMethod_var), /*hidden argument*/UnityAction_1__ctor_m595DA2ECB187B2DF951D640BFEBCE02F3F800A3F_RuntimeMethod_var);
		__this->set_poiAction_6(L_9);
		// m_poi.onValueChanged.AddListener(poiAction);
		Dropdown_t099F5232BB75810BC79EED6E27DDCED46C3BCD96 * L_10 = __this->get_m_poi_10();
		NullCheck(L_10);
		DropdownEvent_tEB2C75C3DBC789936B31D9A979FD62E047846CFB * L_11;
		L_11 = Dropdown_get_onValueChanged_m05479714AEB528CF5CE93ED09870E98E6EC94CFA_inline(L_10, /*hidden argument*/NULL);
		UnityAction_1_t5CF46572372725E6225588C466A7AF5C8597AA79 * L_12 = __this->get_poiAction_6();
		NullCheck(L_11);
		UnityEvent_1_AddListener_mFCFAC8ACA3F75283268DC2629ADEB5504E8FC0C2(L_11, L_12, /*hidden argument*/UnityEvent_1_AddListener_mFCFAC8ACA3F75283268DC2629ADEB5504E8FC0C2_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void IndoorAtlas.IndoorAtlasUIInformationProvider::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IndoorAtlasUIInformationProvider_OnEnable_m70C79FF0560C1624C72F26B6885FE48A8550C647 (IndoorAtlasUIInformationProvider_t78A97B431F32A79E128252E349214170A053E060 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LocationManager_t8BEF4C1AFA85AB524CFB93A28DF2478A26E27401_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFE9473D9CC7E3B6ABB3637C685E3B1D3EC4F06B3);
		s_Il2CppMethodInitialized = true;
	}
	{
		// manager = new LocationManager();
		LocationManager_t8BEF4C1AFA85AB524CFB93A28DF2478A26E27401 * L_0 = (LocationManager_t8BEF4C1AFA85AB524CFB93A28DF2478A26E27401 *)il2cpp_codegen_object_new(LocationManager_t8BEF4C1AFA85AB524CFB93A28DF2478A26E27401_il2cpp_TypeInfo_var);
		LocationManager__ctor_m8A7B0F89185A993CE9C081C9CFEF2903E2365180(L_0, /*hidden argument*/NULL);
		__this->set_manager_4(L_0);
		// InvokeRepeating("UpdateText", 0.0f, 1.0f);
		MonoBehaviour_InvokeRepeating_mB77F4276826FBA696A150831D190875CB5802C70(__this, _stringLiteralFE9473D9CC7E3B6ABB3637C685E3B1D3EC4F06B3, (0.0f), (1.0f), /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void IndoorAtlas.IndoorAtlasUIInformationProvider::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IndoorAtlasUIInformationProvider_OnDisable_mB41447332CBC082A22F19676225E506838B5BEFA (IndoorAtlasUIInformationProvider_t78A97B431F32A79E128252E349214170A053E060 * __this, const RuntimeMethod* method)
{
	{
		// CancelInvoke();
		MonoBehaviour_CancelInvoke_mAF87B47704B16B114F82AC6914E4DA9AE034095D(__this, /*hidden argument*/NULL);
		// manager = null;
		__this->set_manager_4((LocationManager_t8BEF4C1AFA85AB524CFB93A28DF2478A26E27401 *)NULL);
		// }
		return;
	}
}
// System.Void IndoorAtlas.IndoorAtlasUIInformationProvider::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IndoorAtlasUIInformationProvider__ctor_mBE58DD78E3796C2939BC7C62AB58599D95E7F82D (IndoorAtlasUIInformationProvider_t78A97B431F32A79E128252E349214170A053E060 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void IndoorAtlas.IndoorAtlasUIInformationProvider::<set_poi>b__19_0(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IndoorAtlasUIInformationProvider_U3Cset_poiU3Eb__19_0_mEDF0386C0F908718BBAE10DA93887EDD1ACA89AE (IndoorAtlasUIInformationProvider_t78A97B431F32A79E128252E349214170A053E060 * __this, int32_t ___U3Cp0U3E0, const RuntimeMethod* method)
{
	{
		// poiAction = delegate{onPoiChanged();};
		IndoorAtlasUIInformationProvider_onPoiChanged_mCB91CA1CA21DFC7DA4DFF3B38D6451D6F2CAEC50(__this, /*hidden argument*/NULL);
		// poiAction = delegate{onPoiChanged();};
		return;
	}
}
// System.Void IndoorAtlas.IndoorAtlasUIInformationProvider::<Awake>b__23_0(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IndoorAtlasUIInformationProvider_U3CAwakeU3Eb__23_0_m13DC550C25F75BF93B575A856B517CB3882036A4 (IndoorAtlasUIInformationProvider_t78A97B431F32A79E128252E349214170A053E060 * __this, int32_t ___U3Cp0U3E0, const RuntimeMethod* method)
{
	{
		// poiAction = delegate{onPoiChanged();};
		IndoorAtlasUIInformationProvider_onPoiChanged_mCB91CA1CA21DFC7DA4DFF3B38D6451D6F2CAEC50(__this, /*hidden argument*/NULL);
		// poiAction = delegate{onPoiChanged();};
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
// System.Void IndoorAtlas.IndoorAtlasVRCamera::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IndoorAtlasVRCamera_Awake_m32D4E372F7704E44ED1199FA6054D303FFD765B0 (IndoorAtlasVRCamera_tD5776445679A7A38947F480DCF1D247EC494509C * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisCamera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_mE17146EF5B0D8E9F9D2D2D94567BF211AD00D320_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// m_camera = GetComponent<Camera>();
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_0;
		L_0 = Component_GetComponent_TisCamera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_mE17146EF5B0D8E9F9D2D2D94567BF211AD00D320(__this, /*hidden argument*/Component_GetComponent_TisCamera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_mE17146EF5B0D8E9F9D2D2D94567BF211AD00D320_RuntimeMethod_var);
		__this->set_m_camera_4(L_0);
		// }
		return;
	}
}
// System.Void IndoorAtlas.IndoorAtlasVRCamera::IndoorAtlasOnOrientationChanged(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IndoorAtlasVRCamera_IndoorAtlasOnOrientationChanged_m3377FE9816A82D57D7E46A3C6598D6388BF3A74A (IndoorAtlasVRCamera_tD5776445679A7A38947F480DCF1D247EC494509C * __this, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___orientation0, const RuntimeMethod* method)
{
	{
		// m_camera.transform.rotation = orientation;
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_0 = __this->get_m_camera_4();
		NullCheck(L_0);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_1;
		L_1 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_0, /*hidden argument*/NULL);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_2 = ___orientation0;
		NullCheck(L_1);
		Transform_set_rotation_m1B5F3D4CE984AB31254615C9C71B0E54978583B4(L_1, L_2, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void IndoorAtlas.IndoorAtlasVRCamera::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IndoorAtlasVRCamera__ctor_m41A041AABC10B5DFF0DD8A85543A2B285A56727B (IndoorAtlasVRCamera_tD5776445679A7A38947F480DCF1D247EC494509C * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void IndoorAtlas.LatLngFloor::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LatLngFloor__ctor_m733B0450B7408A682D4C87FFE2C2501758EE47D1 (LatLngFloor_t4B72E155829094591933053C9C85E867C1C255C3 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
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
// System.Void IndoorAtlas.Location::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Location__ctor_m0E4914481DCD7754961ED3D86CA7BE6248062BEE (Location_t80005B8E8D4EB97F3D3B810B36FECF5F1D064FF7 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
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
// System.Boolean IndoorAtlas.LocationManager::indooratlas_init(System.String,System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool LocationManager_indooratlas_init_m63FDAD50BB9EE85109E71B4B7A793EF225194755 (String_t* ___apikey0, String_t* ___apisecret1, String_t* ___apiEndpoint2, String_t* ___session3, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (char*, char*, char*, char*);

	// Marshaling of parameter '___apikey0' to native representation
	char* ____apikey0_marshaled = NULL;
	____apikey0_marshaled = il2cpp_codegen_marshal_string(___apikey0);

	// Marshaling of parameter '___apisecret1' to native representation
	char* ____apisecret1_marshaled = NULL;
	____apisecret1_marshaled = il2cpp_codegen_marshal_string(___apisecret1);

	// Marshaling of parameter '___apiEndpoint2' to native representation
	char* ____apiEndpoint2_marshaled = NULL;
	____apiEndpoint2_marshaled = il2cpp_codegen_marshal_string(___apiEndpoint2);

	// Marshaling of parameter '___session3' to native representation
	char* ____session3_marshaled = NULL;
	____session3_marshaled = il2cpp_codegen_marshal_string(___session3);

	// Native function invocation
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(indooratlas_init)(____apikey0_marshaled, ____apisecret1_marshaled, ____apiEndpoint2_marshaled, ____session3_marshaled);

	// Marshaling cleanup of parameter '___apikey0' native representation
	il2cpp_codegen_marshal_free(____apikey0_marshaled);
	____apikey0_marshaled = NULL;

	// Marshaling cleanup of parameter '___apisecret1' native representation
	il2cpp_codegen_marshal_free(____apisecret1_marshaled);
	____apisecret1_marshaled = NULL;

	// Marshaling cleanup of parameter '___apiEndpoint2' native representation
	il2cpp_codegen_marshal_free(____apiEndpoint2_marshaled);
	____apiEndpoint2_marshaled = NULL;

	// Marshaling cleanup of parameter '___session3' native representation
	il2cpp_codegen_marshal_free(____session3_marshaled);
	____session3_marshaled = NULL;

	return static_cast<bool>(returnValue);
}
// System.Void IndoorAtlas.LocationManager::Init(System.String,System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LocationManager_Init_mF9ECC915841247295BE7BC0E5C85A5E822B4ADB7 (LocationManager_t8BEF4C1AFA85AB524CFB93A28DF2478A26E27401 * __this, String_t* ___apiKey0, String_t* ___apiSecret1, String_t* ___apiEndpoint2, String_t* ___session3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LocationManager_t8BEF4C1AFA85AB524CFB93A28DF2478A26E27401_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!indooratlas_init(apiKey, apiSecret, apiEndpoint, session))
		String_t* L_0 = ___apiKey0;
		String_t* L_1 = ___apiSecret1;
		String_t* L_2 = ___apiEndpoint2;
		String_t* L_3 = ___session3;
		IL2CPP_RUNTIME_CLASS_INIT(LocationManager_t8BEF4C1AFA85AB524CFB93A28DF2478A26E27401_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = LocationManager_indooratlas_init_m63FDAD50BB9EE85109E71B4B7A793EF225194755(L_0, L_1, L_2, L_3, /*hidden argument*/NULL);
		if (L_4)
		{
			goto IL_0017;
		}
	}
	{
		// throw new System.Exception("IndoorAtlas: failed to initialize IndoorAtlasSession, do you have multiple sessions?");
		Exception_t * L_5 = (Exception_t *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		Exception__ctor_m8ECDE8ACA7F2E0EF1144BD1200FB5DB2870B5F11(L_5, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral8097347C46BC229B8FEA1670DC119923EE16226C)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&LocationManager_Init_mF9ECC915841247295BE7BC0E5C85A5E822B4ADB7_RuntimeMethod_var)));
	}

IL_0017:
	{
		// }
		return;
	}
}
// System.Boolean IndoorAtlas.LocationManager::indooratlas_close()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool LocationManager_indooratlas_close_mF93A4EACB9D4A4DE1B1F416218B585D1C2D0FC2D (const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) ();

	// Native function invocation
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(indooratlas_close)();

	return static_cast<bool>(returnValue);
}
// System.Void IndoorAtlas.LocationManager::Close()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LocationManager_Close_mCA6E7114846B4399331785DCC658CF25791E879B (LocationManager_t8BEF4C1AFA85AB524CFB93A28DF2478A26E27401 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LocationManager_t8BEF4C1AFA85AB524CFB93A28DF2478A26E27401_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// indooratlas_close();
		IL2CPP_RUNTIME_CLASS_INIT(LocationManager_t8BEF4C1AFA85AB524CFB93A28DF2478A26E27401_il2cpp_TypeInfo_var);
		bool L_0;
		L_0 = LocationManager_indooratlas_close_mF93A4EACB9D4A4DE1B1F416218B585D1C2D0FC2D(/*hidden argument*/NULL);
		// }
		return;
	}
}
// System.String IndoorAtlas.LocationManager::indooratlas_versionString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* LocationManager_indooratlas_versionString_m1F872EB7D2D315387C0F2001FBCD579465951376 (const RuntimeMethod* method)
{
	typedef char* (DEFAULT_CALL *PInvokeFunc) ();

	// Native function invocation
	char* returnValue = reinterpret_cast<PInvokeFunc>(indooratlas_versionString)();

	// Marshaling of return value back from native representation
	String_t* _returnValue_unmarshaled = NULL;
	_returnValue_unmarshaled = il2cpp_codegen_marshal_string_result(returnValue);

	// Marshaling cleanup of return value native representation
	il2cpp_codegen_marshal_free(returnValue);
	returnValue = NULL;

	return _returnValue_unmarshaled;
}
// System.String IndoorAtlas.LocationManager::VersionString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* LocationManager_VersionString_m999C4A18AF8F49B0D657464A11C43B67EFC5A694 (LocationManager_t8BEF4C1AFA85AB524CFB93A28DF2478A26E27401 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LocationManager_t8BEF4C1AFA85AB524CFB93A28DF2478A26E27401_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return indooratlas_versionString();
		IL2CPP_RUNTIME_CLASS_INIT(LocationManager_t8BEF4C1AFA85AB524CFB93A28DF2478A26E27401_il2cpp_TypeInfo_var);
		String_t* L_0;
		L_0 = LocationManager_indooratlas_versionString_m1F872EB7D2D315387C0F2001FBCD579465951376(/*hidden argument*/NULL);
		return L_0;
	}
}
// System.Void IndoorAtlas.LocationManager::indooratlas_setDistanceFilter(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LocationManager_indooratlas_setDistanceFilter_mBF48FB37A8D420BFDDC3ED933A758EDED80E537D (double ___filter0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (double);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(indooratlas_setDistanceFilter)(___filter0);

}
// System.Void IndoorAtlas.LocationManager::SetDistanceFilter(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LocationManager_SetDistanceFilter_mA6BEFA3085F374274F2538651F9DE1EF2AD7DEF8 (LocationManager_t8BEF4C1AFA85AB524CFB93A28DF2478A26E27401 * __this, double ___filter0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LocationManager_t8BEF4C1AFA85AB524CFB93A28DF2478A26E27401_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// indooratlas_setDistanceFilter(filter);
		double L_0 = ___filter0;
		IL2CPP_RUNTIME_CLASS_INIT(LocationManager_t8BEF4C1AFA85AB524CFB93A28DF2478A26E27401_il2cpp_TypeInfo_var);
		LocationManager_indooratlas_setDistanceFilter_mBF48FB37A8D420BFDDC3ED933A758EDED80E537D(L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Double IndoorAtlas.LocationManager::indooratlas_getDistanceFilter()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double LocationManager_indooratlas_getDistanceFilter_mCA4B6E0DA27162C2672D3F525502C5FB48E1B41F (const RuntimeMethod* method)
{
	typedef double (DEFAULT_CALL *PInvokeFunc) ();

	// Native function invocation
	double returnValue = reinterpret_cast<PInvokeFunc>(indooratlas_getDistanceFilter)();

	return returnValue;
}
// System.Double IndoorAtlas.LocationManager::GetDistanceFilter()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double LocationManager_GetDistanceFilter_m8360EE35A555F84198BF38BAD6E40F2D9251DC00 (LocationManager_t8BEF4C1AFA85AB524CFB93A28DF2478A26E27401 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LocationManager_t8BEF4C1AFA85AB524CFB93A28DF2478A26E27401_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return indooratlas_getDistanceFilter();
		IL2CPP_RUNTIME_CLASS_INIT(LocationManager_t8BEF4C1AFA85AB524CFB93A28DF2478A26E27401_il2cpp_TypeInfo_var);
		double L_0;
		L_0 = LocationManager_indooratlas_getDistanceFilter_mCA4B6E0DA27162C2672D3F525502C5FB48E1B41F(/*hidden argument*/NULL);
		return L_0;
	}
}
// System.Void IndoorAtlas.LocationManager::indooratlas_setTimeFilter(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LocationManager_indooratlas_setTimeFilter_m5846FA5A995BAA90342B0C344450A9DED5C73155 (double ___filter0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (double);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(indooratlas_setTimeFilter)(___filter0);

}
// System.Void IndoorAtlas.LocationManager::SetTimeFilter(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LocationManager_SetTimeFilter_mBE593A3417515514A61CCD998B320B05434C05D0 (LocationManager_t8BEF4C1AFA85AB524CFB93A28DF2478A26E27401 * __this, double ___filter0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LocationManager_t8BEF4C1AFA85AB524CFB93A28DF2478A26E27401_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// indooratlas_setTimeFilter(filter);
		double L_0 = ___filter0;
		IL2CPP_RUNTIME_CLASS_INIT(LocationManager_t8BEF4C1AFA85AB524CFB93A28DF2478A26E27401_il2cpp_TypeInfo_var);
		LocationManager_indooratlas_setTimeFilter_m5846FA5A995BAA90342B0C344450A9DED5C73155(L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Double IndoorAtlas.LocationManager::indooratlas_getTimeFilter()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double LocationManager_indooratlas_getTimeFilter_m49C2337D3A6049F9A0565A66AB8F05674388EAD4 (const RuntimeMethod* method)
{
	typedef double (DEFAULT_CALL *PInvokeFunc) ();

	// Native function invocation
	double returnValue = reinterpret_cast<PInvokeFunc>(indooratlas_getTimeFilter)();

	return returnValue;
}
// System.Double IndoorAtlas.LocationManager::GetTimeFilter()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double LocationManager_GetTimeFilter_m631C33567154877B88C8BB5A8F4282F2CA5874CB (LocationManager_t8BEF4C1AFA85AB524CFB93A28DF2478A26E27401 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LocationManager_t8BEF4C1AFA85AB524CFB93A28DF2478A26E27401_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return indooratlas_getTimeFilter();
		IL2CPP_RUNTIME_CLASS_INIT(LocationManager_t8BEF4C1AFA85AB524CFB93A28DF2478A26E27401_il2cpp_TypeInfo_var);
		double L_0;
		L_0 = LocationManager_indooratlas_getTimeFilter_m49C2337D3A6049F9A0565A66AB8F05674388EAD4(/*hidden argument*/NULL);
		return L_0;
	}
}
// System.Void IndoorAtlas.LocationManager::indooratlas_setHeadingFilter(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LocationManager_indooratlas_setHeadingFilter_mB93BB580C75F6C8DEE64B6691BD84F4E775FFCAD (double ___filter0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (double);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(indooratlas_setHeadingFilter)(___filter0);

}
// System.Void IndoorAtlas.LocationManager::SetHeadingFilter(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LocationManager_SetHeadingFilter_mB49774182C58294745C0E29F60C25B7E5A95BF16 (LocationManager_t8BEF4C1AFA85AB524CFB93A28DF2478A26E27401 * __this, double ___filter0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LocationManager_t8BEF4C1AFA85AB524CFB93A28DF2478A26E27401_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// indooratlas_setHeadingFilter(filter);
		double L_0 = ___filter0;
		IL2CPP_RUNTIME_CLASS_INIT(LocationManager_t8BEF4C1AFA85AB524CFB93A28DF2478A26E27401_il2cpp_TypeInfo_var);
		LocationManager_indooratlas_setHeadingFilter_mB93BB580C75F6C8DEE64B6691BD84F4E775FFCAD(L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Double IndoorAtlas.LocationManager::indooratlas_getHeadingFilter()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double LocationManager_indooratlas_getHeadingFilter_m4836AD637B74D945700C787305CAD065A386E86B (const RuntimeMethod* method)
{
	typedef double (DEFAULT_CALL *PInvokeFunc) ();

	// Native function invocation
	double returnValue = reinterpret_cast<PInvokeFunc>(indooratlas_getHeadingFilter)();

	return returnValue;
}
// System.Double IndoorAtlas.LocationManager::GetHeadingFilter()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double LocationManager_GetHeadingFilter_m835A2D8C7F68913A9035DAFD43A0EB9EEDBFEDFE (LocationManager_t8BEF4C1AFA85AB524CFB93A28DF2478A26E27401 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LocationManager_t8BEF4C1AFA85AB524CFB93A28DF2478A26E27401_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return indooratlas_getHeadingFilter();
		IL2CPP_RUNTIME_CLASS_INIT(LocationManager_t8BEF4C1AFA85AB524CFB93A28DF2478A26E27401_il2cpp_TypeInfo_var);
		double L_0;
		L_0 = LocationManager_indooratlas_getHeadingFilter_m4836AD637B74D945700C787305CAD065A386E86B(/*hidden argument*/NULL);
		return L_0;
	}
}
// System.Void IndoorAtlas.LocationManager::indooratlas_setAttitudeFilter(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LocationManager_indooratlas_setAttitudeFilter_m01A07166B2AB20B645C2DB8817969D4402626282 (double ___filter0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (double);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(indooratlas_setAttitudeFilter)(___filter0);

}
// System.Void IndoorAtlas.LocationManager::SetAttitudeFilter(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LocationManager_SetAttitudeFilter_m3AEFDB7B5BF23E1A7F6A2726B98B1A009722EE45 (LocationManager_t8BEF4C1AFA85AB524CFB93A28DF2478A26E27401 * __this, double ___filter0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LocationManager_t8BEF4C1AFA85AB524CFB93A28DF2478A26E27401_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// indooratlas_setAttitudeFilter(filter);
		double L_0 = ___filter0;
		IL2CPP_RUNTIME_CLASS_INIT(LocationManager_t8BEF4C1AFA85AB524CFB93A28DF2478A26E27401_il2cpp_TypeInfo_var);
		LocationManager_indooratlas_setAttitudeFilter_m01A07166B2AB20B645C2DB8817969D4402626282(L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Double IndoorAtlas.LocationManager::indooratlas_getAttitudeFilter()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double LocationManager_indooratlas_getAttitudeFilter_m3FB3959724BB66B47BA6CEED337C104D823A8C7C (const RuntimeMethod* method)
{
	typedef double (DEFAULT_CALL *PInvokeFunc) ();

	// Native function invocation
	double returnValue = reinterpret_cast<PInvokeFunc>(indooratlas_getAttitudeFilter)();

	return returnValue;
}
// System.Double IndoorAtlas.LocationManager::GetAttitudeFilter()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double LocationManager_GetAttitudeFilter_m206C5113F5D9F4CD0B1F75E57927E129A1B9E234 (LocationManager_t8BEF4C1AFA85AB524CFB93A28DF2478A26E27401 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LocationManager_t8BEF4C1AFA85AB524CFB93A28DF2478A26E27401_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return indooratlas_getAttitudeFilter();
		IL2CPP_RUNTIME_CLASS_INIT(LocationManager_t8BEF4C1AFA85AB524CFB93A28DF2478A26E27401_il2cpp_TypeInfo_var);
		double L_0;
		L_0 = LocationManager_indooratlas_getAttitudeFilter_m3FB3959724BB66B47BA6CEED337C104D823A8C7C(/*hidden argument*/NULL);
		return L_0;
	}
}
// System.Void IndoorAtlas.LocationManager::indooratlas_lockFloor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LocationManager_indooratlas_lockFloor_mE1E2A6D0B6099F47062ADE7F769A39DD32FEA7A0 (int32_t ___floor0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (int32_t);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(indooratlas_lockFloor)(___floor0);

}
// System.Void IndoorAtlas.LocationManager::LockFloor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LocationManager_LockFloor_m33E2BFB61DBA691A3DD037855C8086480E530280 (LocationManager_t8BEF4C1AFA85AB524CFB93A28DF2478A26E27401 * __this, int32_t ___floor0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LocationManager_t8BEF4C1AFA85AB524CFB93A28DF2478A26E27401_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// indooratlas_lockFloor(floor);
		int32_t L_0 = ___floor0;
		IL2CPP_RUNTIME_CLASS_INIT(LocationManager_t8BEF4C1AFA85AB524CFB93A28DF2478A26E27401_il2cpp_TypeInfo_var);
		LocationManager_indooratlas_lockFloor_mE1E2A6D0B6099F47062ADE7F769A39DD32FEA7A0(L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void IndoorAtlas.LocationManager::indooratlas_unlockFloor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LocationManager_indooratlas_unlockFloor_m8A3227D6ABB0F79FE3370939D82D1B931E4794C0 (const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) ();

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(indooratlas_unlockFloor)();

}
// System.Void IndoorAtlas.LocationManager::UnlockFloor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LocationManager_UnlockFloor_m809678E4F51D0B87981AA6FBA08E6FA9E41C17B1 (LocationManager_t8BEF4C1AFA85AB524CFB93A28DF2478A26E27401 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LocationManager_t8BEF4C1AFA85AB524CFB93A28DF2478A26E27401_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// indooratlas_unlockFloor();
		IL2CPP_RUNTIME_CLASS_INIT(LocationManager_t8BEF4C1AFA85AB524CFB93A28DF2478A26E27401_il2cpp_TypeInfo_var);
		LocationManager_indooratlas_unlockFloor_m8A3227D6ABB0F79FE3370939D82D1B931E4794C0(/*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void IndoorAtlas.LocationManager::indooratlas_lockIndoors(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LocationManager_indooratlas_lockIndoors_mDA997CEE5BB39EB30B1E060596A37B78D95508E9 (bool ___flag0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (int32_t);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(indooratlas_lockIndoors)(static_cast<int32_t>(___flag0));

}
// System.Void IndoorAtlas.LocationManager::LockIndoors(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LocationManager_LockIndoors_m3910ED235C1E7564E19D22C3E9F9C6D2EAAC40C3 (LocationManager_t8BEF4C1AFA85AB524CFB93A28DF2478A26E27401 * __this, bool ___flag0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LocationManager_t8BEF4C1AFA85AB524CFB93A28DF2478A26E27401_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// indooratlas_lockIndoors(flag);
		bool L_0 = ___flag0;
		IL2CPP_RUNTIME_CLASS_INIT(LocationManager_t8BEF4C1AFA85AB524CFB93A28DF2478A26E27401_il2cpp_TypeInfo_var);
		LocationManager_indooratlas_lockIndoors_mDA997CEE5BB39EB30B1E060596A37B78D95508E9(L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void IndoorAtlas.LocationManager::indooratlas_startUpdatingLocation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LocationManager_indooratlas_startUpdatingLocation_m8A8C515EAE52E08EE7EC46A27151B96EFF2AC20F (const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) ();

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(indooratlas_startUpdatingLocation)();

}
// System.Void IndoorAtlas.LocationManager::StartUpdatingLocation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LocationManager_StartUpdatingLocation_m9B2BE343A453530CA63EBDC51485122746365470 (LocationManager_t8BEF4C1AFA85AB524CFB93A28DF2478A26E27401 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LocationManager_t8BEF4C1AFA85AB524CFB93A28DF2478A26E27401_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// indooratlas_startUpdatingLocation();
		IL2CPP_RUNTIME_CLASS_INIT(LocationManager_t8BEF4C1AFA85AB524CFB93A28DF2478A26E27401_il2cpp_TypeInfo_var);
		LocationManager_indooratlas_startUpdatingLocation_m8A8C515EAE52E08EE7EC46A27151B96EFF2AC20F(/*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void IndoorAtlas.LocationManager::indooratlas_stopUpdatingLocation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LocationManager_indooratlas_stopUpdatingLocation_m2DDCD8BEB22F842122C8280493AEF53AE5A85734 (const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) ();

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(indooratlas_stopUpdatingLocation)();

}
// System.Void IndoorAtlas.LocationManager::StopUpdatingLocation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LocationManager_StopUpdatingLocation_m52713DEAE75ACB104FD5C70C6B99DEDF7EA32106 (LocationManager_t8BEF4C1AFA85AB524CFB93A28DF2478A26E27401 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LocationManager_t8BEF4C1AFA85AB524CFB93A28DF2478A26E27401_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// indooratlas_stopUpdatingLocation();
		IL2CPP_RUNTIME_CLASS_INIT(LocationManager_t8BEF4C1AFA85AB524CFB93A28DF2478A26E27401_il2cpp_TypeInfo_var);
		LocationManager_indooratlas_stopUpdatingLocation_m2DDCD8BEB22F842122C8280493AEF53AE5A85734(/*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void IndoorAtlas.LocationManager::indooratlas_startMonitoringForWayfinding(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LocationManager_indooratlas_startMonitoringForWayfinding_mBEAD9ACCFFECB48134A2F697272B94F4BF90FA73 (String_t* ___to0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (char*);

	// Marshaling of parameter '___to0' to native representation
	char* ____to0_marshaled = NULL;
	____to0_marshaled = il2cpp_codegen_marshal_string(___to0);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(indooratlas_startMonitoringForWayfinding)(____to0_marshaled);

	// Marshaling cleanup of parameter '___to0' native representation
	il2cpp_codegen_marshal_free(____to0_marshaled);
	____to0_marshaled = NULL;

}
// System.Void IndoorAtlas.LocationManager::StartMonitoringForWayfinding(IndoorAtlas.LatLngFloor)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LocationManager_StartMonitoringForWayfinding_mCC75254D101458738B5CEE422D5D9C42DECFF88C (LocationManager_t8BEF4C1AFA85AB524CFB93A28DF2478A26E27401 * __this, LatLngFloor_t4B72E155829094591933053C9C85E867C1C255C3 * ___to0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LocationManager_t8BEF4C1AFA85AB524CFB93A28DF2478A26E27401_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// indooratlas_startMonitoringForWayfinding(JsonUtility.ToJson(to));
		LatLngFloor_t4B72E155829094591933053C9C85E867C1C255C3 * L_0 = ___to0;
		String_t* L_1;
		L_1 = JsonUtility_ToJson_mF4F097C9AEC7699970E3E7E99EF8FF2F44DA1B5C(L_0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(LocationManager_t8BEF4C1AFA85AB524CFB93A28DF2478A26E27401_il2cpp_TypeInfo_var);
		LocationManager_indooratlas_startMonitoringForWayfinding_mBEAD9ACCFFECB48134A2F697272B94F4BF90FA73(L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void IndoorAtlas.LocationManager::indooratlas_stopMonitoringForWayfinding()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LocationManager_indooratlas_stopMonitoringForWayfinding_m86A922D1801988B5C4032D45A6FA854E2BC1AD2D (const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) ();

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(indooratlas_stopMonitoringForWayfinding)();

}
// System.Void IndoorAtlas.LocationManager::StopMonitoringForWayfinding()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LocationManager_StopMonitoringForWayfinding_m2F5829A7B66849F63247BCACB0FBE45D26ECCF52 (LocationManager_t8BEF4C1AFA85AB524CFB93A28DF2478A26E27401 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LocationManager_t8BEF4C1AFA85AB524CFB93A28DF2478A26E27401_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// indooratlas_stopMonitoringForWayfinding();
		IL2CPP_RUNTIME_CLASS_INIT(LocationManager_t8BEF4C1AFA85AB524CFB93A28DF2478A26E27401_il2cpp_TypeInfo_var);
		LocationManager_indooratlas_stopMonitoringForWayfinding_m86A922D1801988B5C4032D45A6FA854E2BC1AD2D(/*hidden argument*/NULL);
		// }
		return;
	}
}
// System.String IndoorAtlas.LocationManager::indooratlas_traceID()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* LocationManager_indooratlas_traceID_m86AF1BB3BA7E476492ABBB9F75BD1A1F385B04D6 (const RuntimeMethod* method)
{
	typedef char* (DEFAULT_CALL *PInvokeFunc) ();

	// Native function invocation
	char* returnValue = reinterpret_cast<PInvokeFunc>(indooratlas_traceID)();

	// Marshaling of return value back from native representation
	String_t* _returnValue_unmarshaled = NULL;
	_returnValue_unmarshaled = il2cpp_codegen_marshal_string_result(returnValue);

	// Marshaling cleanup of return value native representation
	il2cpp_codegen_marshal_free(returnValue);
	returnValue = NULL;

	return _returnValue_unmarshaled;
}
// System.String IndoorAtlas.LocationManager::GetTraceId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* LocationManager_GetTraceId_m73C700ED6F1A8AA9395019B8BE95B9E7D420D104 (LocationManager_t8BEF4C1AFA85AB524CFB93A28DF2478A26E27401 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LocationManager_t8BEF4C1AFA85AB524CFB93A28DF2478A26E27401_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return indooratlas_traceID();
		IL2CPP_RUNTIME_CLASS_INIT(LocationManager_t8BEF4C1AFA85AB524CFB93A28DF2478A26E27401_il2cpp_TypeInfo_var);
		String_t* L_0;
		L_0 = LocationManager_indooratlas_traceID_m86AF1BB3BA7E476492ABBB9F75BD1A1F385B04D6(/*hidden argument*/NULL);
		return L_0;
	}
}
// System.Void IndoorAtlas.LocationManager::indooratlas_releaseArSession()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LocationManager_indooratlas_releaseArSession_m6B295BFF37E9571EC100C69DB0C11CA6CDBD16DF (const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) ();

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(indooratlas_releaseArSession)();

}
// System.Void IndoorAtlas.LocationManager::ReleaseArSession()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LocationManager_ReleaseArSession_mE30A17ECF1D45F32CA711DC0B9A55F5A356AE463 (LocationManager_t8BEF4C1AFA85AB524CFB93A28DF2478A26E27401 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LocationManager_t8BEF4C1AFA85AB524CFB93A28DF2478A26E27401_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// indooratlas_releaseArSession();
		IL2CPP_RUNTIME_CLASS_INIT(LocationManager_t8BEF4C1AFA85AB524CFB93A28DF2478A26E27401_il2cpp_TypeInfo_var);
		LocationManager_indooratlas_releaseArSession_m6B295BFF37E9571EC100C69DB0C11CA6CDBD16DF(/*hidden argument*/NULL);
		// }
		return;
	}
}
// UnityEngine.Matrix4x4 IndoorAtlas.LocationManager::UnityMatrixToIndoorAtlasMatrix(UnityEngine.Matrix4x4)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  LocationManager_UnityMatrixToIndoorAtlasMatrix_m086EAC6A11A014041A636A2DA85C5BA530A96086 (Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  ___matrix0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LocationManager_t8BEF4C1AFA85AB524CFB93A28DF2478A26E27401_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return m_unityWorldToIndoorAtlasWorld * matrix * m_unityWorldToIndoorAtlasWorld;
		IL2CPP_RUNTIME_CLASS_INIT(LocationManager_t8BEF4C1AFA85AB524CFB93A28DF2478A26E27401_il2cpp_TypeInfo_var);
		Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  L_0 = ((LocationManager_t8BEF4C1AFA85AB524CFB93A28DF2478A26E27401_StaticFields*)il2cpp_codegen_static_fields_for(LocationManager_t8BEF4C1AFA85AB524CFB93A28DF2478A26E27401_il2cpp_TypeInfo_var))->get_m_unityWorldToIndoorAtlasWorld_0();
		Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  L_1 = ___matrix0;
		Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  L_2;
		L_2 = Matrix4x4_op_Multiply_mC2B30D333D4399C1693414F1A73D87FB3450F39F(L_0, L_1, /*hidden argument*/NULL);
		Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  L_3 = ((LocationManager_t8BEF4C1AFA85AB524CFB93A28DF2478A26E27401_StaticFields*)il2cpp_codegen_static_fields_for(LocationManager_t8BEF4C1AFA85AB524CFB93A28DF2478A26E27401_il2cpp_TypeInfo_var))->get_m_unityWorldToIndoorAtlasWorld_0();
		Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  L_4;
		L_4 = Matrix4x4_op_Multiply_mC2B30D333D4399C1693414F1A73D87FB3450F39F(L_2, L_3, /*hidden argument*/NULL);
		return L_4;
	}
}
// UnityEngine.Matrix4x4 IndoorAtlas.LocationManager::IndoorAtlasMatrixToUnityMatrix(UnityEngine.Matrix4x4)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  LocationManager_IndoorAtlasMatrixToUnityMatrix_mC80001C4F8DB4C01D5D3077E75E02E64BC2A2603 (Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  ___matrix0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LocationManager_t8BEF4C1AFA85AB524CFB93A28DF2478A26E27401_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return m_unityWorldToIndoorAtlasWorld * matrix;
		IL2CPP_RUNTIME_CLASS_INIT(LocationManager_t8BEF4C1AFA85AB524CFB93A28DF2478A26E27401_il2cpp_TypeInfo_var);
		Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  L_0 = ((LocationManager_t8BEF4C1AFA85AB524CFB93A28DF2478A26E27401_StaticFields*)il2cpp_codegen_static_fields_for(LocationManager_t8BEF4C1AFA85AB524CFB93A28DF2478A26E27401_il2cpp_TypeInfo_var))->get_m_unityWorldToIndoorAtlasWorld_0();
		Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  L_1 = ___matrix0;
		Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  L_2;
		L_2 = Matrix4x4_op_Multiply_mC2B30D333D4399C1693414F1A73D87FB3450F39F(L_0, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Void IndoorAtlas.LocationManager::indooratlas_setArPoseMatrix(System.Single[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LocationManager_indooratlas_setArPoseMatrix_m28D866B0919FB8C9E58CB7018FE67C0CA1C8AD8B (SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* ___matrix0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (float*);

	// Marshaling of parameter '___matrix0' to native representation
	float* ____matrix0_marshaled = NULL;
	if (___matrix0 != NULL)
	{
		____matrix0_marshaled = reinterpret_cast<float*>((___matrix0)->GetAddressAtUnchecked(0));
	}

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(indooratlas_setArPoseMatrix)(____matrix0_marshaled);

}
// System.Void IndoorAtlas.LocationManager::SetArPoseMatrix(UnityEngine.Matrix4x4)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LocationManager_SetArPoseMatrix_mFC0339939BFCFDADD2F9200DB75C148676368107 (LocationManager_t8BEF4C1AFA85AB524CFB93A28DF2478A26E27401 * __this, Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  ___matrix0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LocationManager_t8BEF4C1AFA85AB524CFB93A28DF2478A26E27401_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  V_0;
	memset((&V_0), 0, sizeof(V_0));
	SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* V_1 = NULL;
	int32_t V_2 = 0;
	{
		// matrix = UnityMatrixToIndoorAtlasMatrix(matrix);
		Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  L_0 = ___matrix0;
		IL2CPP_RUNTIME_CLASS_INIT(LocationManager_t8BEF4C1AFA85AB524CFB93A28DF2478A26E27401_il2cpp_TypeInfo_var);
		Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  L_1;
		L_1 = LocationManager_UnityMatrixToIndoorAtlasMatrix_m086EAC6A11A014041A636A2DA85C5BA530A96086(L_0, /*hidden argument*/NULL);
		___matrix0 = L_1;
		// Matrix4x4 arKitInverse = Matrix4x4.zero;
		Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  L_2;
		L_2 = Matrix4x4_get_zero_m653FAA37D26B00352B992A4B87CE534251FB91CC(/*hidden argument*/NULL);
		V_0 = L_2;
		// arKitInverse[1,0] = -1;
		Matrix4x4_set_Item_mE286A89718710DDF166DF6ACF8A480D15FE06B2F((Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 *)(&V_0), 1, 0, (-1.0f), /*hidden argument*/NULL);
		// arKitInverse[0,1] =  1;
		Matrix4x4_set_Item_mE286A89718710DDF166DF6ACF8A480D15FE06B2F((Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 *)(&V_0), 0, 1, (1.0f), /*hidden argument*/NULL);
		// arKitInverse[2,2] =  1;
		Matrix4x4_set_Item_mE286A89718710DDF166DF6ACF8A480D15FE06B2F((Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 *)(&V_0), 2, 2, (1.0f), /*hidden argument*/NULL);
		// arKitInverse[3,3] =  1;
		Matrix4x4_set_Item_mE286A89718710DDF166DF6ACF8A480D15FE06B2F((Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 *)(&V_0), 3, 3, (1.0f), /*hidden argument*/NULL);
		// matrix *= arKitInverse;
		Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  L_3 = ___matrix0;
		Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  L_4 = V_0;
		Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  L_5;
		L_5 = Matrix4x4_op_Multiply_mC2B30D333D4399C1693414F1A73D87FB3450F39F(L_3, L_4, /*hidden argument*/NULL);
		___matrix0 = L_5;
		// float[] native = new float[16];
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_6 = (SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA*)(SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA*)SZArrayNew(SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA_il2cpp_TypeInfo_var, (uint32_t)((int32_t)16));
		V_1 = L_6;
		// for (int i = 0; i < 16; ++i) native[i] = matrix[i];
		V_2 = 0;
		goto IL_006a;
	}

IL_005b:
	{
		// for (int i = 0; i < 16; ++i) native[i] = matrix[i];
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_7 = V_1;
		int32_t L_8 = V_2;
		int32_t L_9 = V_2;
		float L_10;
		L_10 = Matrix4x4_get_Item_mA0E634EF5A723EA9DD824391D4C62F4100C64813((Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 *)(&___matrix0), L_9, /*hidden argument*/NULL);
		NullCheck(L_7);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(L_8), (float)L_10);
		// for (int i = 0; i < 16; ++i) native[i] = matrix[i];
		int32_t L_11 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_11, (int32_t)1));
	}

IL_006a:
	{
		// for (int i = 0; i < 16; ++i) native[i] = matrix[i];
		int32_t L_12 = V_2;
		if ((((int32_t)L_12) < ((int32_t)((int32_t)16))))
		{
			goto IL_005b;
		}
	}
	{
		// indooratlas_setArPoseMatrix(native);
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_13 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(LocationManager_t8BEF4C1AFA85AB524CFB93A28DF2478A26E27401_il2cpp_TypeInfo_var);
		LocationManager_indooratlas_setArPoseMatrix_m28D866B0919FB8C9E58CB7018FE67C0CA1C8AD8B(L_13, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void IndoorAtlas.LocationManager::indooratlas_setArCameraToWorldMatrix(System.Single[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LocationManager_indooratlas_setArCameraToWorldMatrix_m409055144FB685DDA46B6F78EB1CBDE51FDD5582 (SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* ___matrix0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (float*);

	// Marshaling of parameter '___matrix0' to native representation
	float* ____matrix0_marshaled = NULL;
	if (___matrix0 != NULL)
	{
		____matrix0_marshaled = reinterpret_cast<float*>((___matrix0)->GetAddressAtUnchecked(0));
	}

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(indooratlas_setArCameraToWorldMatrix)(____matrix0_marshaled);

}
// System.Void IndoorAtlas.LocationManager::SetArCameraToWorldMatrix(UnityEngine.Matrix4x4)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LocationManager_SetArCameraToWorldMatrix_m94D63F03ABE808EE83C26BEE1496D05402473A35 (LocationManager_t8BEF4C1AFA85AB524CFB93A28DF2478A26E27401 * __this, Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  ___matrix0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LocationManager_t8BEF4C1AFA85AB524CFB93A28DF2478A26E27401_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* V_0 = NULL;
	int32_t V_1 = 0;
	{
		// matrix = IndoorAtlasMatrixToUnityMatrix(matrix);
		Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  L_0 = ___matrix0;
		IL2CPP_RUNTIME_CLASS_INIT(LocationManager_t8BEF4C1AFA85AB524CFB93A28DF2478A26E27401_il2cpp_TypeInfo_var);
		Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  L_1;
		L_1 = LocationManager_IndoorAtlasMatrixToUnityMatrix_mC80001C4F8DB4C01D5D3077E75E02E64BC2A2603(L_0, /*hidden argument*/NULL);
		___matrix0 = L_1;
		// float[] native = new float[16];
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_2 = (SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA*)(SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA*)SZArrayNew(SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA_il2cpp_TypeInfo_var, (uint32_t)((int32_t)16));
		V_0 = L_2;
		// for (int i = 0; i < 16; ++i) native[i] = matrix[i];
		V_1 = 0;
		goto IL_0023;
	}

IL_0014:
	{
		// for (int i = 0; i < 16; ++i) native[i] = matrix[i];
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_3 = V_0;
		int32_t L_4 = V_1;
		int32_t L_5 = V_1;
		float L_6;
		L_6 = Matrix4x4_get_Item_mA0E634EF5A723EA9DD824391D4C62F4100C64813((Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 *)(&___matrix0), L_5, /*hidden argument*/NULL);
		NullCheck(L_3);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(L_4), (float)L_6);
		// for (int i = 0; i < 16; ++i) native[i] = matrix[i];
		int32_t L_7 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_7, (int32_t)1));
	}

IL_0023:
	{
		// for (int i = 0; i < 16; ++i) native[i] = matrix[i];
		int32_t L_8 = V_1;
		if ((((int32_t)L_8) < ((int32_t)((int32_t)16))))
		{
			goto IL_0014;
		}
	}
	{
		// indooratlas_setArCameraToWorldMatrix(native);
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_9 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(LocationManager_t8BEF4C1AFA85AB524CFB93A28DF2478A26E27401_il2cpp_TypeInfo_var);
		LocationManager_indooratlas_setArCameraToWorldMatrix_m409055144FB685DDA46B6F78EB1CBDE51FDD5582(L_9, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Boolean IndoorAtlas.LocationManager::indooratlas_getArIsConverged()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool LocationManager_indooratlas_getArIsConverged_mABFE269A0873A62B8E19FF774B9F5065A65A1F55 (const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) ();

	// Native function invocation
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(indooratlas_getArIsConverged)();

	return static_cast<bool>(returnValue);
}
// System.Boolean IndoorAtlas.LocationManager::GetArIsConverged()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool LocationManager_GetArIsConverged_m2D858C4AAF7B14882046F22F8D3E2712C5E7DFEB (LocationManager_t8BEF4C1AFA85AB524CFB93A28DF2478A26E27401 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LocationManager_t8BEF4C1AFA85AB524CFB93A28DF2478A26E27401_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return indooratlas_getArIsConverged();
		IL2CPP_RUNTIME_CLASS_INIT(LocationManager_t8BEF4C1AFA85AB524CFB93A28DF2478A26E27401_il2cpp_TypeInfo_var);
		bool L_0;
		L_0 = LocationManager_indooratlas_getArIsConverged_mABFE269A0873A62B8E19FF774B9F5065A65A1F55(/*hidden argument*/NULL);
		return L_0;
	}
}
// System.Boolean IndoorAtlas.LocationManager::indooratlas_getArCompassMatrix(System.Single[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool LocationManager_indooratlas_getArCompassMatrix_m10DF625ACA30365CA1F55C04B8ACA32DCCF79F30 (SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* ___matrix0, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (float*);

	// Marshaling of parameter '___matrix0' to native representation
	float* ____matrix0_marshaled = NULL;
	if (___matrix0 != NULL)
	{
		____matrix0_marshaled = reinterpret_cast<float*>((___matrix0)->GetAddressAtUnchecked(0));
	}

	// Native function invocation
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(indooratlas_getArCompassMatrix)(____matrix0_marshaled);

	return static_cast<bool>(returnValue);
}
// UnityEngine.Matrix4x4 IndoorAtlas.LocationManager::GetArCompassMatrix()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  LocationManager_GetArCompassMatrix_m577C7F3D5B8F6A95CA941A9C483117EC4234E786 (LocationManager_t8BEF4C1AFA85AB524CFB93A28DF2478A26E27401 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LocationManager_t8BEF4C1AFA85AB524CFB93A28DF2478A26E27401_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  V_0;
	memset((&V_0), 0, sizeof(V_0));
	SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* V_1 = NULL;
	int32_t V_2 = 0;
	{
		// Matrix4x4 matrix = Matrix4x4.identity;
		Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  L_0;
		L_0 = Matrix4x4_get_identity_mC91289718DDD3DDBE0A10551BDA59A446414A596(/*hidden argument*/NULL);
		V_0 = L_0;
		// float[] native = new float[16];
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_1 = (SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA*)(SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA*)SZArrayNew(SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA_il2cpp_TypeInfo_var, (uint32_t)((int32_t)16));
		V_1 = L_1;
		// if (indooratlas_getArCompassMatrix(native)) for (int i = 0; i < 16; ++i) matrix[i] = native[i];
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_2 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(LocationManager_t8BEF4C1AFA85AB524CFB93A28DF2478A26E27401_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = LocationManager_indooratlas_getArCompassMatrix_m10DF625ACA30365CA1F55C04B8ACA32DCCF79F30(L_2, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_002e;
		}
	}
	{
		// if (indooratlas_getArCompassMatrix(native)) for (int i = 0; i < 16; ++i) matrix[i] = native[i];
		V_2 = 0;
		goto IL_0029;
	}

IL_001a:
	{
		// if (indooratlas_getArCompassMatrix(native)) for (int i = 0; i < 16; ++i) matrix[i] = native[i];
		int32_t L_4 = V_2;
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_5 = V_1;
		int32_t L_6 = V_2;
		NullCheck(L_5);
		int32_t L_7 = L_6;
		float L_8 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		Matrix4x4_set_Item_m27BC97EE3093FDADFE0804FB80AFF5CDB03D355B((Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 *)(&V_0), L_4, L_8, /*hidden argument*/NULL);
		// if (indooratlas_getArCompassMatrix(native)) for (int i = 0; i < 16; ++i) matrix[i] = native[i];
		int32_t L_9 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_9, (int32_t)1));
	}

IL_0029:
	{
		// if (indooratlas_getArCompassMatrix(native)) for (int i = 0; i < 16; ++i) matrix[i] = native[i];
		int32_t L_10 = V_2;
		if ((((int32_t)L_10) < ((int32_t)((int32_t)16))))
		{
			goto IL_001a;
		}
	}

IL_002e:
	{
		// return (matrix != Matrix4x4.identity ? IndoorAtlasMatrixToUnityMatrix(matrix) : matrix);
		Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  L_11 = V_0;
		Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  L_12;
		L_12 = Matrix4x4_get_identity_mC91289718DDD3DDBE0A10551BDA59A446414A596(/*hidden argument*/NULL);
		bool L_13;
		L_13 = Matrix4x4_op_Inequality_m6E62E1FDEDC9AF783BE1041726A18BCA5E6CFC6D(L_11, L_12, /*hidden argument*/NULL);
		if (L_13)
		{
			goto IL_003d;
		}
	}
	{
		Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  L_14 = V_0;
		return L_14;
	}

IL_003d:
	{
		Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  L_15 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(LocationManager_t8BEF4C1AFA85AB524CFB93A28DF2478A26E27401_il2cpp_TypeInfo_var);
		Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  L_16;
		L_16 = LocationManager_IndoorAtlasMatrixToUnityMatrix_mC80001C4F8DB4C01D5D3077E75E02E64BC2A2603(L_15, /*hidden argument*/NULL);
		return L_16;
	}
}
// System.Boolean IndoorAtlas.LocationManager::indooratlas_getArGoalMatrix(System.Single[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool LocationManager_indooratlas_getArGoalMatrix_mAC25A81728C29D3B8385291888B52D57B674BB25 (SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* ___matrix0, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (float*);

	// Marshaling of parameter '___matrix0' to native representation
	float* ____matrix0_marshaled = NULL;
	if (___matrix0 != NULL)
	{
		____matrix0_marshaled = reinterpret_cast<float*>((___matrix0)->GetAddressAtUnchecked(0));
	}

	// Native function invocation
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(indooratlas_getArGoalMatrix)(____matrix0_marshaled);

	return static_cast<bool>(returnValue);
}
// UnityEngine.Matrix4x4 IndoorAtlas.LocationManager::GetArGoalMatrix()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  LocationManager_GetArGoalMatrix_m07B3D5DEAB94464F11CA1C4C79DFA1A793437084 (LocationManager_t8BEF4C1AFA85AB524CFB93A28DF2478A26E27401 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LocationManager_t8BEF4C1AFA85AB524CFB93A28DF2478A26E27401_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  V_0;
	memset((&V_0), 0, sizeof(V_0));
	SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* V_1 = NULL;
	int32_t V_2 = 0;
	{
		// Matrix4x4 matrix = Matrix4x4.identity;
		Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  L_0;
		L_0 = Matrix4x4_get_identity_mC91289718DDD3DDBE0A10551BDA59A446414A596(/*hidden argument*/NULL);
		V_0 = L_0;
		// float[] native = new float[16];
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_1 = (SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA*)(SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA*)SZArrayNew(SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA_il2cpp_TypeInfo_var, (uint32_t)((int32_t)16));
		V_1 = L_1;
		// if (indooratlas_getArGoalMatrix(native)) for (int i = 0; i < 16; ++i) matrix[i] = native[i];
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_2 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(LocationManager_t8BEF4C1AFA85AB524CFB93A28DF2478A26E27401_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = LocationManager_indooratlas_getArGoalMatrix_mAC25A81728C29D3B8385291888B52D57B674BB25(L_2, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_002e;
		}
	}
	{
		// if (indooratlas_getArGoalMatrix(native)) for (int i = 0; i < 16; ++i) matrix[i] = native[i];
		V_2 = 0;
		goto IL_0029;
	}

IL_001a:
	{
		// if (indooratlas_getArGoalMatrix(native)) for (int i = 0; i < 16; ++i) matrix[i] = native[i];
		int32_t L_4 = V_2;
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_5 = V_1;
		int32_t L_6 = V_2;
		NullCheck(L_5);
		int32_t L_7 = L_6;
		float L_8 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		Matrix4x4_set_Item_m27BC97EE3093FDADFE0804FB80AFF5CDB03D355B((Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 *)(&V_0), L_4, L_8, /*hidden argument*/NULL);
		// if (indooratlas_getArGoalMatrix(native)) for (int i = 0; i < 16; ++i) matrix[i] = native[i];
		int32_t L_9 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_9, (int32_t)1));
	}

IL_0029:
	{
		// if (indooratlas_getArGoalMatrix(native)) for (int i = 0; i < 16; ++i) matrix[i] = native[i];
		int32_t L_10 = V_2;
		if ((((int32_t)L_10) < ((int32_t)((int32_t)16))))
		{
			goto IL_001a;
		}
	}

IL_002e:
	{
		// return (matrix != Matrix4x4.identity ? IndoorAtlasMatrixToUnityMatrix(matrix) : matrix);
		Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  L_11 = V_0;
		Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  L_12;
		L_12 = Matrix4x4_get_identity_mC91289718DDD3DDBE0A10551BDA59A446414A596(/*hidden argument*/NULL);
		bool L_13;
		L_13 = Matrix4x4_op_Inequality_m6E62E1FDEDC9AF783BE1041726A18BCA5E6CFC6D(L_11, L_12, /*hidden argument*/NULL);
		if (L_13)
		{
			goto IL_003d;
		}
	}
	{
		Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  L_14 = V_0;
		return L_14;
	}

IL_003d:
	{
		Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  L_15 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(LocationManager_t8BEF4C1AFA85AB524CFB93A28DF2478A26E27401_il2cpp_TypeInfo_var);
		Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  L_16;
		L_16 = LocationManager_IndoorAtlasMatrixToUnityMatrix_mC80001C4F8DB4C01D5D3077E75E02E64BC2A2603(L_15, /*hidden argument*/NULL);
		return L_16;
	}
}
// System.Int32 IndoorAtlas.LocationManager::indooratlas_getArTurnCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t LocationManager_indooratlas_getArTurnCount_m436A05C0CF2B83950FB654BD9D7FD6F66D8B3E59 (const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) ();

	// Native function invocation
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(indooratlas_getArTurnCount)();

	return returnValue;
}
// System.Int32 IndoorAtlas.LocationManager::GetArTurnCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t LocationManager_GetArTurnCount_m7AF1AC7D1EB607813A0F823AFAB83D45F4870B52 (LocationManager_t8BEF4C1AFA85AB524CFB93A28DF2478A26E27401 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LocationManager_t8BEF4C1AFA85AB524CFB93A28DF2478A26E27401_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return indooratlas_getArTurnCount();
		IL2CPP_RUNTIME_CLASS_INIT(LocationManager_t8BEF4C1AFA85AB524CFB93A28DF2478A26E27401_il2cpp_TypeInfo_var);
		int32_t L_0;
		L_0 = LocationManager_indooratlas_getArTurnCount_m436A05C0CF2B83950FB654BD9D7FD6F66D8B3E59(/*hidden argument*/NULL);
		return L_0;
	}
}
// System.Boolean IndoorAtlas.LocationManager::indooratlas_getArTurnMatrix(System.Int32,System.Single[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool LocationManager_indooratlas_getArTurnMatrix_mACEAB96F3D145C9A2A706322EF0D07611E016241 (int32_t ___index0, SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* ___matrix1, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (int32_t, float*);

	// Marshaling of parameter '___matrix1' to native representation
	float* ____matrix1_marshaled = NULL;
	if (___matrix1 != NULL)
	{
		____matrix1_marshaled = reinterpret_cast<float*>((___matrix1)->GetAddressAtUnchecked(0));
	}

	// Native function invocation
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(indooratlas_getArTurnMatrix)(___index0, ____matrix1_marshaled);

	return static_cast<bool>(returnValue);
}
// UnityEngine.Matrix4x4 IndoorAtlas.LocationManager::GetArTurnMatrix(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  LocationManager_GetArTurnMatrix_mCBE4C044583A3C363CD3163AF90E2E22617F8074 (LocationManager_t8BEF4C1AFA85AB524CFB93A28DF2478A26E27401 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LocationManager_t8BEF4C1AFA85AB524CFB93A28DF2478A26E27401_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  V_0;
	memset((&V_0), 0, sizeof(V_0));
	SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* V_1 = NULL;
	int32_t V_2 = 0;
	{
		// Matrix4x4 matrix = Matrix4x4.identity;
		Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  L_0;
		L_0 = Matrix4x4_get_identity_mC91289718DDD3DDBE0A10551BDA59A446414A596(/*hidden argument*/NULL);
		V_0 = L_0;
		// float[] native = new float[16];
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_1 = (SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA*)(SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA*)SZArrayNew(SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA_il2cpp_TypeInfo_var, (uint32_t)((int32_t)16));
		V_1 = L_1;
		// if (indooratlas_getArTurnMatrix(index, native)) for (int i = 0; i < 16; ++i) matrix[i] = native[i];
		int32_t L_2 = ___index0;
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_3 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(LocationManager_t8BEF4C1AFA85AB524CFB93A28DF2478A26E27401_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = LocationManager_indooratlas_getArTurnMatrix_mACEAB96F3D145C9A2A706322EF0D07611E016241(L_2, L_3, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_002f;
		}
	}
	{
		// if (indooratlas_getArTurnMatrix(index, native)) for (int i = 0; i < 16; ++i) matrix[i] = native[i];
		V_2 = 0;
		goto IL_002a;
	}

IL_001b:
	{
		// if (indooratlas_getArTurnMatrix(index, native)) for (int i = 0; i < 16; ++i) matrix[i] = native[i];
		int32_t L_5 = V_2;
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_6 = V_1;
		int32_t L_7 = V_2;
		NullCheck(L_6);
		int32_t L_8 = L_7;
		float L_9 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		Matrix4x4_set_Item_m27BC97EE3093FDADFE0804FB80AFF5CDB03D355B((Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 *)(&V_0), L_5, L_9, /*hidden argument*/NULL);
		// if (indooratlas_getArTurnMatrix(index, native)) for (int i = 0; i < 16; ++i) matrix[i] = native[i];
		int32_t L_10 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_10, (int32_t)1));
	}

IL_002a:
	{
		// if (indooratlas_getArTurnMatrix(index, native)) for (int i = 0; i < 16; ++i) matrix[i] = native[i];
		int32_t L_11 = V_2;
		if ((((int32_t)L_11) < ((int32_t)((int32_t)16))))
		{
			goto IL_001b;
		}
	}

IL_002f:
	{
		// return (matrix != Matrix4x4.identity ? IndoorAtlasMatrixToUnityMatrix(matrix) : matrix);
		Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  L_12 = V_0;
		Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  L_13;
		L_13 = Matrix4x4_get_identity_mC91289718DDD3DDBE0A10551BDA59A446414A596(/*hidden argument*/NULL);
		bool L_14;
		L_14 = Matrix4x4_op_Inequality_m6E62E1FDEDC9AF783BE1041726A18BCA5E6CFC6D(L_12, L_13, /*hidden argument*/NULL);
		if (L_14)
		{
			goto IL_003e;
		}
	}
	{
		Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  L_15 = V_0;
		return L_15;
	}

IL_003e:
	{
		Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  L_16 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(LocationManager_t8BEF4C1AFA85AB524CFB93A28DF2478A26E27401_il2cpp_TypeInfo_var);
		Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  L_17;
		L_17 = LocationManager_IndoorAtlasMatrixToUnityMatrix_mC80001C4F8DB4C01D5D3077E75E02E64BC2A2603(L_16, /*hidden argument*/NULL);
		return L_17;
	}
}
// System.Void IndoorAtlas.LocationManager::indooratlas_addArPlane(System.Single,System.Single,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LocationManager_indooratlas_addArPlane_m2E916604667F7A94ECDAC0756D662CC0127C12D6 (float ___cx0, float ___cy1, float ___cz2, float ___ex3, float ___ez4, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (float, float, float, float, float);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(indooratlas_addArPlane)(___cx0, ___cy1, ___cz2, ___ex3, ___ez4);

}
// System.Void IndoorAtlas.LocationManager::AddArPlane(System.Single,System.Single,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LocationManager_AddArPlane_m227A719233C25CADDC1F98FEF31133337EE3B987 (LocationManager_t8BEF4C1AFA85AB524CFB93A28DF2478A26E27401 * __this, float ___cx0, float ___cy1, float ___cz2, float ___ex3, float ___ez4, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LocationManager_t8BEF4C1AFA85AB524CFB93A28DF2478A26E27401_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_1;
	memset((&V_1), 0, sizeof(V_1));
	Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		// Vector3 c = m_unityWorldToIndoorAtlasWorld.MultiplyPoint3x4(new Vector3(cx, cy, cz));
		IL2CPP_RUNTIME_CLASS_INIT(LocationManager_t8BEF4C1AFA85AB524CFB93A28DF2478A26E27401_il2cpp_TypeInfo_var);
		Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  L_0 = ((LocationManager_t8BEF4C1AFA85AB524CFB93A28DF2478A26E27401_StaticFields*)il2cpp_codegen_static_fields_for(LocationManager_t8BEF4C1AFA85AB524CFB93A28DF2478A26E27401_il2cpp_TypeInfo_var))->get_m_unityWorldToIndoorAtlasWorld_0();
		V_2 = L_0;
		float L_1 = ___cx0;
		float L_2 = ___cy1;
		float L_3 = ___cz2;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4;
		memset((&L_4), 0, sizeof(L_4));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_4), L_1, L_2, L_3, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_5;
		L_5 = Matrix4x4_MultiplyPoint3x4_mA0A34C5FD162DA8E5421596F1F921436F3E7B2FC((Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 *)(&V_2), L_4, /*hidden argument*/NULL);
		V_0 = L_5;
		// Vector3 e = m_unityWorldToIndoorAtlasWorld.MultiplyPoint3x4(new Vector3(ex, 0, ez));
		Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  L_6 = ((LocationManager_t8BEF4C1AFA85AB524CFB93A28DF2478A26E27401_StaticFields*)il2cpp_codegen_static_fields_for(LocationManager_t8BEF4C1AFA85AB524CFB93A28DF2478A26E27401_il2cpp_TypeInfo_var))->get_m_unityWorldToIndoorAtlasWorld_0();
		V_2 = L_6;
		float L_7 = ___ex3;
		float L_8 = ___ez4;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_9), L_7, (0.0f), L_8, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10;
		L_10 = Matrix4x4_MultiplyPoint3x4_mA0A34C5FD162DA8E5421596F1F921436F3E7B2FC((Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 *)(&V_2), L_9, /*hidden argument*/NULL);
		V_1 = L_10;
		// indooratlas_addArPlane(c.x, c.y, c.z, e.x, e.z);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_11 = V_0;
		float L_12 = L_11.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_13 = V_0;
		float L_14 = L_13.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_15 = V_0;
		float L_16 = L_15.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_17 = V_1;
		float L_18 = L_17.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_19 = V_1;
		float L_20 = L_19.get_z_4();
		LocationManager_indooratlas_addArPlane_m2E916604667F7A94ECDAC0756D662CC0127C12D6(L_12, L_14, L_16, L_18, L_20, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void IndoorAtlas.LocationManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LocationManager__ctor_m8A7B0F89185A993CE9C081C9CFEF2903E2365180 (LocationManager_t8BEF4C1AFA85AB524CFB93A28DF2478A26E27401 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void IndoorAtlas.LocationManager::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LocationManager__cctor_mCB9CF93BF141B0884BB06E4359837417471A7275 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LocationManager_t8BEF4C1AFA85AB524CFB93A28DF2478A26E27401_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private static readonly Matrix4x4 m_unityWorldToIndoorAtlasWorld = Matrix4x4.Scale(new Vector3(1, 1, -1));
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0;
		memset((&L_0), 0, sizeof(L_0));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_0), (1.0f), (1.0f), (-1.0f), /*hidden argument*/NULL);
		Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  L_1;
		L_1 = Matrix4x4_Scale_m62CFAE1F96495BD3F39D6FB21385C04B9ACC50ED(L_0, /*hidden argument*/NULL);
		((LocationManager_t8BEF4C1AFA85AB524CFB93A28DF2478A26E27401_StaticFields*)il2cpp_codegen_static_fields_for(LocationManager_t8BEF4C1AFA85AB524CFB93A28DF2478A26E27401_il2cpp_TypeInfo_var))->set_m_unityWorldToIndoorAtlasWorld_0(L_1);
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
// UnityEngine.Quaternion IndoorAtlas.Orientation::getQuaternion()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  Orientation_getQuaternion_mC8A9C8A10238244459A5FA35D137B131303DF835 (Orientation_tA3C51FC6A527FD5C23B350DAE81C5FA79A0510AF * __this, const RuntimeMethod* method)
{
	{
		// return new Quaternion((float)x, (float)y, (float)z, (float)w);
		double L_0 = __this->get_x_0();
		double L_1 = __this->get_y_1();
		double L_2 = __this->get_z_2();
		double L_3 = __this->get_w_3();
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_4;
		memset((&L_4), 0, sizeof(L_4));
		Quaternion__ctor_m564FA9302F5B9DA8BAB97B0A2D86FFE83ACAA421((&L_4), ((float)((float)L_0)), ((float)((float)L_1)), ((float)((float)L_2)), ((float)((float)L_3)), /*hidden argument*/NULL);
		return L_4;
	}
}
// System.Void IndoorAtlas.Orientation::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Orientation__ctor_m40A9471A36F260180BB3AB5A81774587A114E1C6 (Orientation_tA3C51FC6A527FD5C23B350DAE81C5FA79A0510AF * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
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
// System.Void IndoorAtlas.POI::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void POI__ctor_m232AB0D35A706E533D469C2E391F941893CF0BC1 (POI_t8DBBCA0F0D1DFE03487EF4D0D91C39BA68B90574 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
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
// System.Void IndoorAtlas.Region::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Region__ctor_mD29131C2B341F0A23F8922503E55FFDCB16F28DC (Region_t68EA17CE90BDC22C15E4531418B3B123519AADEB * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
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
// System.Void IndoorAtlas.Route::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Route__ctor_m34CE25C9C6BA842FF5C770741A67506AF9502EF1 (Route_t8BB2F4499BD36E373F67536902ECDFF016551E5F * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
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
// System.Void IndoorAtlas.RouteLeg::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RouteLeg__ctor_mCB2DD01EDB22B3DCC872F16C7A7510B27DBC3820 (RouteLeg_t30013ADF5AD884757D65D6E9612F984618622AC6 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
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
// System.Void IndoorAtlas.RoutePoint::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RoutePoint__ctor_m23698553383C14B635D1D1292414D052A3EDD7A3 (RoutePoint_t1C48DD0E7B4B48088F298CD541233BEE69A3A760 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
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
// System.Void IndoorAtlas.Status::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Status__ctor_mF9DB8C47B1B3EBB41CD48DB9DA464CCABAF69AF5 (Status_t18AA7FCE4BA6D9E03B84C464B649B6E514066005 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
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
// System.Void IndoorAtlas.Venue::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Venue__ctor_m221958A237E4B68B8907E78845FFC75CFB6EA450 (Venue_t9B5BBEE12D028C4C1C86A978B6601550D25336B6 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
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
// System.Void IndoorAtlas.WGS84::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WGS84__ctor_m92EE26712B1F5F54A1E968B756F7D72E105FC7BF (WGS84_t38213D604BC65CB5C07F37093BA63B9E04E6D816 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
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
// System.Void IndoorAtlas.WGSConversion::SetOrigin(System.Double,System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WGSConversion_SetOrigin_m059788520650E34D49AAC6E82A69DCA29D1EB4FA (WGSConversion_t45A89CB883E2ECDC78D8365D7F3FC2C08871546C * __this, double ___latitude0, double ___longitude1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tA269614262430118C9FC5C4D9EF4F61C812568F0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	double V_0 = 0.0;
	double V_1 = 0.0;
	double V_2 = 0.0;
	{
		// lat0 = latitude;
		double L_0 = ___latitude0;
		__this->set_lat0_0(L_0);
		// lon0 = longitude;
		double L_1 = ___longitude1;
		__this->set_lon0_1(L_1);
		// double sinlat = System.Math.Sin(System.Math.PI / 180.0 * latitude);
		double L_2 = ___latitude0;
		IL2CPP_RUNTIME_CLASS_INIT(Math_tA269614262430118C9FC5C4D9EF4F61C812568F0_il2cpp_TypeInfo_var);
		double L_3;
		L_3 = sin(((double)il2cpp_codegen_multiply((double)(0.017453292519943295), (double)L_2)));
		V_0 = L_3;
		// double coslat = System.Math.Cos(System.Math.PI / 180.0 * latitude);
		double L_4 = ___latitude0;
		double L_5;
		L_5 = cos(((double)il2cpp_codegen_multiply((double)(0.017453292519943295), (double)L_4)));
		V_1 = L_5;
		// double tmp = System.Math.Sqrt(a2 * coslat * coslat + b2 * sinlat * sinlat);
		double L_6 = V_1;
		double L_7 = V_1;
		double L_8 = V_0;
		double L_9 = V_0;
		double L_10;
		L_10 = sqrt(((double)il2cpp_codegen_add((double)((double)il2cpp_codegen_multiply((double)((double)il2cpp_codegen_multiply((double)(40680631590769.0), (double)L_6)), (double)L_7)), (double)((double)il2cpp_codegen_multiply((double)((double)il2cpp_codegen_multiply((double)(40408299984661.445), (double)L_8)), (double)L_9)))));
		V_2 = L_10;
		// deltaX = (System.Math.PI / 180.0) * (a2 / tmp) * coslat;
		double L_11 = V_2;
		double L_12 = V_1;
		__this->set_deltaX_2(((double)il2cpp_codegen_multiply((double)((double)il2cpp_codegen_multiply((double)(0.017453292519943295), (double)((double)((double)(40680631590769.0)/(double)L_11)))), (double)L_12)));
		// deltaY = (System.Math.PI / 180.0) * (a2 * b2 / (tmp * tmp * tmp));
		double L_13 = V_2;
		double L_14 = V_2;
		double L_15 = V_2;
		__this->set_deltaY_3(((double)il2cpp_codegen_multiply((double)(0.017453292519943295), (double)((double)((double)(1.643835164885289E+27)/(double)((double)il2cpp_codegen_multiply((double)((double)il2cpp_codegen_multiply((double)L_13, (double)L_14)), (double)L_15)))))));
		// hasLinearizationPoint = true;
		__this->set_hasLinearizationPoint_4((bool)1);
		// }
		return;
	}
}
// UnityEngine.Vector2 IndoorAtlas.WGSConversion::WGStoEN(System.Double,System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  WGSConversion_WGStoEN_m47E33E7C22C975A2786EDF1ADDECAC88C45DCAD6 (WGSConversion_t45A89CB883E2ECDC78D8365D7F3FC2C08871546C * __this, double ___latitude0, double ___longitude1, const RuntimeMethod* method)
{
	{
		// if (!hasLinearizationPoint) throw new System.InvalidOperationException("Origin hasn't been set before the conversion.");
		bool L_0 = __this->get_hasLinearizationPoint_4();
		if (L_0)
		{
			goto IL_0013;
		}
	}
	{
		// if (!hasLinearizationPoint) throw new System.InvalidOperationException("Origin hasn't been set before the conversion.");
		InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB * L_1 = (InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mC012CE552988309733C896F3FEA8249171E4402E(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral9D41C7D7B03563D9E0800844F56DEC5FD63A32E0)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&WGSConversion_WGStoEN_m47E33E7C22C975A2786EDF1ADDECAC88C45DCAD6_RuntimeMethod_var)));
	}

IL_0013:
	{
		// return new Vector2((float)(deltaX * (longitude - lon0)), (float)(deltaY * (latitude - lat0)));
		double L_2 = __this->get_deltaX_2();
		double L_3 = ___longitude1;
		double L_4 = __this->get_lon0_1();
		double L_5 = __this->get_deltaY_3();
		double L_6 = ___latitude0;
		double L_7 = __this->get_lat0_0();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_8;
		memset((&L_8), 0, sizeof(L_8));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_8), ((float)((float)((double)il2cpp_codegen_multiply((double)L_2, (double)((double)il2cpp_codegen_subtract((double)L_3, (double)L_4)))))), ((float)((float)((double)il2cpp_codegen_multiply((double)L_5, (double)((double)il2cpp_codegen_subtract((double)L_6, (double)L_7)))))), /*hidden argument*/NULL);
		return L_8;
	}
}
// System.Boolean IndoorAtlas.WGSConversion::IsReady()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WGSConversion_IsReady_m5E961B490E64F6938E2E3E22AB73114A9D25B4E4 (WGSConversion_t45A89CB883E2ECDC78D8365D7F3FC2C08871546C * __this, const RuntimeMethod* method)
{
	{
		// return hasLinearizationPoint;
		bool L_0 = __this->get_hasLinearizationPoint_4();
		return L_0;
	}
}
// System.Void IndoorAtlas.WGSConversion::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WGSConversion__ctor_m597C7DF4F9DC89163116B6D4944757B8EE5B3A78 (WGSConversion_t45A89CB883E2ECDC78D8365D7F3FC2C08871546C * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method)
{
	{
		float L_0 = ___x0;
		__this->set_x_2(L_0);
		float L_1 = ___y1;
		__this->set_y_3(L_1);
		float L_2 = ___z2;
		__this->set_z_4(L_2);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Subtraction_m2725C96965D5C0B1F9715797E51762B13A5FED58_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___b1, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___a0;
		float L_1 = L_0.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2 = ___b1;
		float L_3 = L_2.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4 = ___a0;
		float L_5 = L_4.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6 = ___b1;
		float L_7 = L_6.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_8 = ___a0;
		float L_9 = L_8.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10 = ___b1;
		float L_11 = L_10.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_12), ((float)il2cpp_codegen_subtract((float)L_1, (float)L_3)), ((float)il2cpp_codegen_subtract((float)L_5, (float)L_7)), ((float)il2cpp_codegen_subtract((float)L_9, (float)L_11)), /*hidden argument*/NULL);
		V_0 = L_12;
		goto IL_0030;
	}

IL_0030:
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_Scale_m8805EE8D2586DE7B6143FA35819B3D5CF1981FB3_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___b1, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___a0;
		float L_1 = L_0.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2 = ___b1;
		float L_3 = L_2.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4 = ___a0;
		float L_5 = L_4.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6 = ___b1;
		float L_7 = L_6.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_8 = ___a0;
		float L_9 = L_8.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10 = ___b1;
		float L_11 = L_10.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_12), ((float)il2cpp_codegen_multiply((float)L_1, (float)L_3)), ((float)il2cpp_codegen_multiply((float)L_5, (float)L_7)), ((float)il2cpp_codegen_multiply((float)L_9, (float)L_11)), /*hidden argument*/NULL);
		V_0 = L_12;
		goto IL_0030;
	}

IL_0030:
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ARSession_get_notTrackingReason_m346D5BD4415CD34223970E3FAF019A78E86B606F_inline (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ARSession_t0ECAFEF41CF9183D33E40174F849B07943DC5D3B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static NotTrackingReason notTrackingReason => s_NotTrackingReason;
		int32_t L_0 = ((ARSession_t0ECAFEF41CF9183D33E40174F849B07943DC5D3B_StaticFields*)il2cpp_codegen_static_fields_for(ARSession_t0ECAFEF41CF9183D33E40174F849B07943DC5D3B_il2cpp_TypeInfo_var))->get_s_NotTrackingReason_12();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Dropdown_get_value_mFBF47E0C72050C5CB96B8B6D33F41BA2D1368F26_inline (Dropdown_t099F5232BB75810BC79EED6E27DDCED46C3BCD96 * __this, const RuntimeMethod* method)
{
	{
		// return m_Value;
		int32_t L_0 = __this->get_m_Value_25();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR DropdownEvent_tEB2C75C3DBC789936B31D9A979FD62E047846CFB * Dropdown_get_onValueChanged_m05479714AEB528CF5CE93ED09870E98E6EC94CFA_inline (Dropdown_t099F5232BB75810BC79EED6E27DDCED46C3BCD96 * __this, const RuntimeMethod* method)
{
	{
		// public DropdownEvent onValueChanged { get { return m_OnValueChanged; } set { m_OnValueChanged = value; } }
		DropdownEvent_tEB2C75C3DBC789936B31D9A979FD62E047846CFB * L_0 = __this->get_m_OnValueChanged_27();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * __this, float ___x0, float ___y1, const RuntimeMethod* method)
{
	{
		float L_0 = ___x0;
		__this->set_x_0(L_0);
		float L_1 = ___y1;
		__this->set_y_1(L_1);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m5D847939ABB9A78203B062CAFFE975792174D00F_gshared_inline (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = (int32_t)__this->get__size_2();
		return (int32_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * List_1_get_Item_mF00B574E58FB078BB753B05A3B86DD0A7A266B63_gshared_inline (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___index0;
		int32_t L_1 = (int32_t)__this->get__size_2();
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929(/*hidden argument*/NULL);
	}

IL_000e:
	{
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_2 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)__this->get__items_1();
		int32_t L_3 = ___index0;
		RuntimeObject * L_4;
		L_4 = IL2CPP_ARRAY_UNSAFE_LOAD((ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)L_2, (int32_t)L_3);
		return (RuntimeObject *)L_4;
	}
}
