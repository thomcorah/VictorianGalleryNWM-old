﻿#include "pch-cpp.hpp"

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
template <typename T1, typename T2, typename T3>
struct VirtActionInvoker3
{
	typedef void (*Action)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3>
struct GenericVirtActionInvoker3
{
	typedef void (*Action)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3>
struct InterfaceActionInvoker3
{
	typedef void (*Action)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3>
struct GenericInterfaceActionInvoker3
{
	typedef void (*Action)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};

// System.Action`2<UnityEngine.XR.ARKit.ARWorldMapRequestStatus,UnityEngine.XR.ARKit.ARWorldMap>
struct Action_2_t6F4217AA55351EE6822133CE02984E6B59F83112;
// System.Action`2<System.Int32Enum,UnityEngine.XR.ARKit.ARWorldMap>
struct Action_2_tBF7C7962F0CD8BFDA2D483FE7CEC080540530A3E;
// System.Collections.Generic.HashSet`1<System.Int32Enum>
struct HashSet_1_tC7075903B74F058503994CAB008D196EF7AFB4AC;
// System.Collections.Generic.HashSet`1<UnityEngine.TextureFormat>
struct HashSet_1_t7981318DC35BC53AD64634B2D643DD6055A39054;
// System.Collections.Generic.IEqualityComparer`1<UnityEngine.TextureFormat>
struct IEqualityComparer_1_t89F4520AF667B3E35E982EDC56414B71FDF77650;
// System.Collections.Generic.List`1<System.Object>
struct List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5;
// System.Collections.Generic.List`1<System.String>
struct List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3;
// System.Collections.Generic.List`1<UnityEngine.XR.ARSubsystems.XRReferenceObject>
struct List_1_t3A1F09045329A30B2867F24E69EC807BE36BEA9B;
// UnityEngine.XR.ARSubsystems.Promise`1<System.Int32Enum>
struct Promise_1_t4A177D2785B1022FAEDD19EC4B7D80529BEAFDAB;
// UnityEngine.XR.ARSubsystems.Promise`1<UnityEngine.XR.ARSubsystems.SessionAvailability>
struct Promise_1_tB8B428F557CD6742430DB416C0B99C79CA1AA167;
// UnityEngine.XR.ARSubsystems.Promise`1<UnityEngine.XR.ARSubsystems.SessionInstallationStatus>
struct Promise_1_tB8B3F3631C923F82F653F3D73D6B3082CF7CDD88;
// System.Collections.Generic.HashSet`1/Slot<UnityEngine.TextureFormat>[]
struct SlotU5BU5D_t31D39DA9F0325BB5955FD10F99B52248A5A3EF86;
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// System.Delegate[]
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;
// System.Int32[]
struct Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32;
// System.IntPtr[]
struct IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6;
// System.Object[]
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971;
// System.String[]
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A;
// UnityEngine.TextureFormat[]
struct TextureFormatU5BU5D_tC081C559AF0CE6678E9673429ADDC9B93B6B45CE;
// System.Type[]
struct TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755;
// UnityEngine.XR.ARKit.ARKitAnchorSubsystem
struct ARKitAnchorSubsystem_t721F48C4B69507D7E38664A68AA42DD1DF75B3DF;
// UnityEngine.XR.ARKit.ARKitCameraSubsystem
struct ARKitCameraSubsystem_tE327D2A1BE7A0BD90A9353C8EDBDE9A882315245;
// UnityEngine.XR.ARKit.ARKitCpuImageApi
struct ARKitCpuImageApi_tD94B983FBF13116F7497F2089555084CCAC47D59;
// UnityEngine.XR.ARKit.ARKitEnvironmentProbeSubsystem
struct ARKitEnvironmentProbeSubsystem_t628136AE15CA16280BA838B37E2B7CDF0473E9D2;
// UnityEngine.XR.ARKit.ARKitHumanBodySubsystem
struct ARKitHumanBodySubsystem_t8BA2C528FDE109FBDDBD0ED2FF8BC1FD081E92B7;
// UnityEngine.XR.ARKit.ARKitImageDatabase
struct ARKitImageDatabase_t1D1B5D985355CF3D2597C8FD863EB46EF55B1F71;
// UnityEngine.XR.ARKit.ARKitImageTrackingSubsystem
struct ARKitImageTrackingSubsystem_t0F98C12C3E36B9F3819FC43494A883B600401237;
// UnityEngine.XR.ARKit.ARKitOcclusionSubsystem
struct ARKitOcclusionSubsystem_tE15296E017A597561D0C3B399ED52577B138F343;
// UnityEngine.XR.ARKit.ARKitParticipantSubsystem
struct ARKitParticipantSubsystem_tFBFB76108F5069693F4F40F8DAA4B6A907A709C3;
// UnityEngine.XR.ARKit.ARKitRaycastSubsystem
struct ARKitRaycastSubsystem_t8DF7A7F21C4610FBBEF6A240FD1790CD47BE9900;
// UnityEngine.XR.ARKit.ARKitSessionSubsystem
struct ARKitSessionSubsystem_tABA1BA2FE3CF0CECDDC519C4B545236FC8B9E216;
// UnityEngine.XR.ARKit.ARKitXRDepthSubsystem
struct ARKitXRDepthSubsystem_t50D82DC2115EED29E5F0EEBA8A0F4FA7876BD2D5;
// UnityEngine.XR.ARKit.ARKitXRObjectTrackingSubsystem
struct ARKitXRObjectTrackingSubsystem_tB611337EA1668BBCB3A7123F14117CB536707A6D;
// UnityEngine.XR.ARKit.ARKitXRPlaneSubsystem
struct ARKitXRPlaneSubsystem_t03042D64756D81EC6B4657CD1323D7404EC7530B;
// System.ArgumentException
struct ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00;
// System.AsyncCallback
struct AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA;
// System.Attribute
struct Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71;
// System.Reflection.Binder
struct Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30;
// System.Byte
struct Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056;
// UnityEngine.XR.ARSubsystems.ConfigurationChooser
struct ConfigurationChooser_t0CCF856A226297A702F306A2217CF17D652E72C4;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288;
// Microsoft.CodeAnalysis.EmbeddedAttribute
struct EmbeddedAttribute_t05629E57A0E96598455481383D6D826715328F7C;
// System.IAsyncResult
struct IAsyncResult_tC9F97BF36FCF122D29D3101D80642278297BF370;
// System.Collections.IDictionary
struct IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A;
// System.InvalidOperationException
struct InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB;
// System.Runtime.CompilerServices.IsReadOnlyAttribute
struct IsReadOnlyAttribute_t49E064784AB175290B77B6E6137930BE53B124B9;
// UnityEngine.Material
struct Material_t8927C00353A72755313F046D0CE85178AE8218EE;
// System.Reflection.MemberFilter
struct MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.NotSupportedException
struct NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339;
// UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A;
// System.Security.Cryptography.RandomNumberGenerator
struct RandomNumberGenerator_t2CB5440F189986116A2FA9F907AE52644047AC50;
// System.Text.RegularExpressions.Regex
struct Regex_t90F443D398F44965EA241A652ED75DF5BA072A1F;
// UnityEngine.Rendering.RenderPipelineAsset
struct RenderPipelineAsset_tA4DBD0F0DD583DF3C9F85AF41F49308D167864EF;
// UnityEngine.XR.ARSubsystems.RuntimeReferenceImageLibrary
struct RuntimeReferenceImageLibrary_t76072EC5637B1F0F8FD0A1BFD3AEAF954D6F8D6B;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1;
// System.String
struct String_t;
// UnityEngine.SubsystemsImplementation.SubsystemProvider
struct SubsystemProvider_t39E89FB8DB1EF1D2B0AF93796AEDB19D76A665F9;
// System.Type
struct Type_t;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;
// UnityEngine.XR.ARSubsystems.XRAnchorSubsystem
struct XRAnchorSubsystem_t625D9B76C590AB601CF85525DB9396BE84425AA7;
// UnityEngine.XR.ARSubsystems.XRAnchorSubsystemDescriptor
struct XRAnchorSubsystemDescriptor_t3BD7F9922EF5C04185D59349C76D625BC1E44E3B;
// UnityEngine.XR.ARSubsystems.XRCameraSubsystem
struct XRCameraSubsystem_t3B32F6EA8A2E4D23AF240B5D21C34759D2613AC9;
// UnityEngine.XR.ARSubsystems.XRCameraSubsystemDescriptor
struct XRCameraSubsystemDescriptor_t1F8A45C69031E2981B1863518C43793D26E2C5E5;
// UnityEngine.XR.ARSubsystems.XRDepthSubsystem
struct XRDepthSubsystem_t808E21F0192095B08FA03AC535314FB5EF3B7E28;
// UnityEngine.XR.ARSubsystems.XRDepthSubsystemDescriptor
struct XRDepthSubsystemDescriptor_t745DBB7D313FB52F756E0B7AA993FBBC26B412C2;
// UnityEngine.XR.ARSubsystems.XREnvironmentProbeSubsystem
struct XREnvironmentProbeSubsystem_t0C60258F565400E7C5AF0E0B7FA933F2BCF83CB6;
// UnityEngine.XR.ARSubsystems.XREnvironmentProbeSubsystemDescriptor
struct XREnvironmentProbeSubsystemDescriptor_t7C10519F545418330347AC7434FBB10F39DD4243;
// UnityEngine.XR.ARSubsystems.XRHumanBodySubsystem
struct XRHumanBodySubsystem_t71FBF94503DCE781657FA4F362464EA389CD9F2B;
// UnityEngine.XR.ARSubsystems.XRHumanBodySubsystemDescriptor
struct XRHumanBodySubsystemDescriptor_t00E75DD05B03BCC1BF5A794547615692B7A55C04;
// UnityEngine.XR.ARSubsystems.XRImageTrackingSubsystem
struct XRImageTrackingSubsystem_tBC68AD21C11D8D67F3343844E129DF505FF705CE;
// UnityEngine.XR.ARSubsystems.XRImageTrackingSubsystemDescriptor
struct XRImageTrackingSubsystemDescriptor_t3EC191739B144A8AA00CEEE03E8F7FF01D7F833B;
// UnityEngine.XR.ARSubsystems.XRObjectTrackingSubsystem
struct XRObjectTrackingSubsystem_t3F31F4C8BCA868FE69BD8EC75BA5A1116026C881;
// UnityEngine.XR.ARSubsystems.XRObjectTrackingSubsystemDescriptor
struct XRObjectTrackingSubsystemDescriptor_t831B568A9BE175A6A79BB87E25DEFAC519A6C472;
// UnityEngine.XR.ARSubsystems.XROcclusionSubsystem
struct XROcclusionSubsystem_t7546B929F9B5B6EB13B975FE4DB1F4099EE533B8;
// UnityEngine.XR.ARSubsystems.XROcclusionSubsystemDescriptor
struct XROcclusionSubsystemDescriptor_tC9C8F2EFB7768358C203968CA71D353F0DD234FB;
// UnityEngine.XR.ARSubsystems.XRParticipantSubsystem
struct XRParticipantSubsystem_t7F710E46FC5A17967E7CAE126DE9443C752C36FC;
// UnityEngine.XR.ARSubsystems.XRParticipantSubsystemDescriptor
struct XRParticipantSubsystemDescriptor_t533EE70DC8D4B105B9C87B76D35A7D59A84BCA55;
// UnityEngine.XR.ARSubsystems.XRPlaneSubsystem
struct XRPlaneSubsystem_t7C76F9D2C993B0DC38F0A7CDCE745EA7C12417EE;
// UnityEngine.XR.ARSubsystems.XRPlaneSubsystemDescriptor
struct XRPlaneSubsystemDescriptor_t98B66B6D99804656DDDB45C9BDA61C2EE4EDB483;
// UnityEngine.XR.ARSubsystems.XRRaycastSubsystem
struct XRRaycastSubsystem_t62FDAC9AA1BD44C4557AEE3FEF3D2FA24C71B6B8;
// UnityEngine.XR.ARSubsystems.XRRaycastSubsystemDescriptor
struct XRRaycastSubsystemDescriptor_tB9891F63FC4871797BCD04DB7167142BE2049B2C;
// UnityEngine.XR.ARSubsystems.XRReferenceObjectLibrary
struct XRReferenceObjectLibrary_t07704B2996E507F23EE3C99CFC3BB73A83C99A7C;
// UnityEngine.XR.ARSubsystems.XRSessionSubsystem
struct XRSessionSubsystem_t8AD3C01568AA19BF038D23A6031FF9814CAF93CD;
// UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor
struct XRSessionSubsystemDescriptor_tC45A49D1179090D5C6D3B3DC1DC31CAB5A627B1C;
// UnityEngine.XR.ARKit.ARKitAnchorSubsystem/ARKitProvider
struct ARKitProvider_tE10DC6803776ECE42E55F127E68C47E50319202E;
// UnityEngine.XR.ARKit.ARKitCameraSubsystem/ARKitProvider
struct ARKitProvider_tA94DC507BD799F0EB939B5D43E47850858DD9252;
// UnityEngine.XR.ARKit.ARKitEnvironmentProbeSubsystem/ARKitProvider
struct ARKitProvider_tBED347A85C19012D5B5F124BC8C0FB4876FBEACC;
// UnityEngine.XR.ARKit.ARKitHumanBodySubsystem/ARKitProvider
struct ARKitProvider_t5CC80E0D6F9A6EFFA70F54E8CDBEDB36D0CC4ED0;
// UnityEngine.XR.ARKit.ARKitImageTrackingSubsystem/ARKitProvider
struct ARKitProvider_t6838013201F7369104C65DD65159D910B116E8AC;
// UnityEngine.XR.ARKit.ARKitOcclusionSubsystem/ARKitProvider
struct ARKitProvider_t8C73B4487170F7B34DF431897CADB4B9CA84C611;
// UnityEngine.XR.ARKit.ARKitParticipantSubsystem/ARKitProvider
struct ARKitProvider_t9908B32D1E5398BA2FD0D825E9343F8CA0277B4C;
// UnityEngine.XR.ARKit.ARKitRaycastSubsystem/ARKitProvider
struct ARKitProvider_t3FB2A65F0CF8BCD91C4CC54F3841159E7F7DAA88;
// UnityEngine.XR.ARKit.ARKitSessionSubsystem/ARKitProvider
struct ARKitProvider_t9AF751FC81DD6B052A462DBB30F46C946CE9E7CF;
// UnityEngine.XR.ARKit.ARKitXRDepthSubsystem/ARKitProvider
struct ARKitProvider_tC6BBA25F076F6D64FA8E6336E6860D7DBD41A7A1;
// UnityEngine.XR.ARKit.ARKitXRObjectTrackingSubsystem/ARKitProvider
struct ARKitProvider_tDDBF5C474A3543A0F5FA7FB07A058B223F6DA8EC;
// UnityEngine.XR.ARKit.ARKitXRPlaneSubsystem/ARKitProvider
struct ARKitProvider_tF9F620C89E671C028D10768C5300D3539661A2C1;
// UnityEngine.XR.ARSubsystems.XRAnchorSubsystem/Provider
struct Provider_t9F286D20EB73EBBA4B6E7203C7A9051BE673C2E2;
// UnityEngine.XR.ARSubsystems.XRCameraSubsystem/Provider
struct Provider_t55916B0D2766C320DCA36A0C870BA2FD80F8B6D1;
// UnityEngine.XR.ARSubsystems.XRCpuImage/Api
struct Api_t7C92F00C6416A2C636A44AAC833C3773C567DC3E;
// UnityEngine.XR.ARSubsystems.XRDepthSubsystem/Provider
struct Provider_t8E88C17A70269CD3E96909AFCCA952AAA7DEC0B6;
// UnityEngine.XR.ARSubsystems.XREnvironmentProbeSubsystem/Provider
struct Provider_tAF87FE3E906FDBF14F06488A1AA5E80400EFE190;
// UnityEngine.XR.ARSubsystems.XRHumanBodySubsystem/Provider
struct Provider_t055C90C34B2BCE8D134DF44C12823E320519168C;
// UnityEngine.XR.ARSubsystems.XRImageTrackingSubsystem/Provider
struct Provider_tA7CEF856C3BC486ADEBD656F5535E24262AAAE9E;
// UnityEngine.XR.ARSubsystems.XRObjectTrackingSubsystem/Provider
struct Provider_t35977A2A0AA6C338BC9893668DD32F0294A9C01E;
// UnityEngine.XR.ARSubsystems.XROcclusionSubsystem/Provider
struct Provider_t5B60C630FB68EFEAB6FA2F3D9A732C144003B7FB;
// UnityEngine.XR.ARSubsystems.XRParticipantSubsystem/Provider
struct Provider_t1D0BC515976D24FD30341AC456ACFCB2DE4A344E;
// UnityEngine.XR.ARSubsystems.XRPlaneSubsystem/Provider
struct Provider_t6CB5B1036B0AAED1379F3828D695A6942B72BA12;
// UnityEngine.XR.ARSubsystems.XRRaycastSubsystem/Provider
struct Provider_tF185BE0541D2066CD242583CEFE7709DD22DD227;
// UnityEngine.XR.ARSubsystems.XRSessionSubsystem/Provider
struct Provider_t4C3675997BB8AF3A6A32C3EC3C93C10E4D3E8D1A;
// UnityEngine.XR.ARKit.ARKitSessionSubsystem/NativeApi/OnAsyncConversionCompleteDelegate
struct OnAsyncConversionCompleteDelegate_tFE6205610918E7A87E7867F879A863FD2FE8ECDF;

IL2CPP_EXTERN_C RuntimeClass* ARKitCameraSubsystem_tE327D2A1BE7A0BD90A9353C8EDBDE9A882315245_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ARKitCpuImageApi_tD94B983FBF13116F7497F2089555084CCAC47D59_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ARKitImageDatabase_t1D1B5D985355CF3D2597C8FD863EB46EF55B1F71_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ARKitProvider_t8C73B4487170F7B34DF431897CADB4B9CA84C611_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ARKitProvider_tA94DC507BD799F0EB939B5D43E47850858DD9252_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ARKitSessionSubsystem_tABA1BA2FE3CF0CECDDC519C4B545236FC8B9E216_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ARWorldMapRequestStatus_t9A2ABBA3D64593F57CCFC959D7D294CE5E54E73C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ARWorldMap_t90151C78B15487234BE2E76D169DA191819704A2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_2_t6F4217AA55351EE6822133CE02984E6B59F83112_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* HashSet_1_t7981318DC35BC53AD64634B2D643DD6055A39054_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IntPtr_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NativeChanges_t2AB4CBD7DD7F23F421DFD0CE4D4CDB26402D6D76_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* OnAsyncConversionCompleteDelegate_tFE6205610918E7A87E7867F879A863FD2FE8ECDF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TextureFormatU5BU5D_tC081C559AF0CE6678E9673429ADDC9B93B6B45CE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3E_t52768071AC670B242659CF974483AF846D6828BF____E8CF6E95EA720603B480AF38C38D806DF25A1A1623EB6551AA9285B2F4C83C50_0_FieldInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral00D54E4228F0F7653E4C33C608B8CF61178F3D9A;
IL2CPP_EXTERN_C String_t* _stringLiteral07F1FFB4A562EF77B8E6F92DD7CB0B8CBE6FD659;
IL2CPP_EXTERN_C String_t* _stringLiteral0C168A523D6584C552B5A228A16476728129945A;
IL2CPP_EXTERN_C String_t* _stringLiteral118D53AE05F479FE7B8ACAE7DF6D75BC38DB9D15;
IL2CPP_EXTERN_C String_t* _stringLiteral14D6457B7A8B0589F52EF9A221CF9F7AE60EE03D;
IL2CPP_EXTERN_C String_t* _stringLiteral204051CF17AEF25F8EC14EA0CC3613989F08A085;
IL2CPP_EXTERN_C String_t* _stringLiteral27A6CC657F8ED2A275DD6DEDF21758C293901878;
IL2CPP_EXTERN_C String_t* _stringLiteral27C9E1A43FEDCD3787CDA8261B6C0BC620D2A6A6;
IL2CPP_EXTERN_C String_t* _stringLiteral307DAB1687CC4BB751F43E3E120187922C5F0743;
IL2CPP_EXTERN_C String_t* _stringLiteral3316E29454B30FF00FD499D58FB9EB6E3D6D4A62;
IL2CPP_EXTERN_C String_t* _stringLiteral34DB7C411D03036F0D06F00351078A370EA0A603;
IL2CPP_EXTERN_C String_t* _stringLiteral40C3DDA396CBEA338D1EE3CA26F62BC0B97C14A0;
IL2CPP_EXTERN_C String_t* _stringLiteral41B38D9A9414CB491AD9A85E56E1C5392C4603F0;
IL2CPP_EXTERN_C String_t* _stringLiteral46F273EF641E07D271D91E0DC24A4392582671F8;
IL2CPP_EXTERN_C String_t* _stringLiteral519D03084902B0B64CDE2E6BF3DBCCEBF9ED3FBB;
IL2CPP_EXTERN_C String_t* _stringLiteral55C304E493F724D1EBE0D4BECC9C0128DA553B92;
IL2CPP_EXTERN_C String_t* _stringLiteral5E34B980C4794FBA7B6A70F2B66E0D25426A5431;
IL2CPP_EXTERN_C String_t* _stringLiteral60B3375B7F69D26143C8EDC55A184541E18FFD78;
IL2CPP_EXTERN_C String_t* _stringLiteral613041BC1E9D977B51D034A222856620A49BDB6B;
IL2CPP_EXTERN_C String_t* _stringLiteral61805FB8A9F8CCBCA7560EFE4D0B15AE0A7AA489;
IL2CPP_EXTERN_C String_t* _stringLiteral64B5C8CA3DBCCD4684E840D0AB3E6C8D55ACA47A;
IL2CPP_EXTERN_C String_t* _stringLiteral6D7125BFB6B08212CAAD55197B7FE167CE82051D;
IL2CPP_EXTERN_C String_t* _stringLiteral8710D8B4E16855F019CB68A747E4078E34957226;
IL2CPP_EXTERN_C String_t* _stringLiteral8F75ECDB116DCBBF6FC5A38C92B230BE664085FE;
IL2CPP_EXTERN_C String_t* _stringLiteral8FCD874487FC15E93E93290A9C751C9F9195F03E;
IL2CPP_EXTERN_C String_t* _stringLiteralA0DE801F3FD2CC4DE455E4C342CDC681CD2516B3;
IL2CPP_EXTERN_C String_t* _stringLiteralAFA4D3E582500163B4301BAFF6220E10DCA1A77A;
IL2CPP_EXTERN_C String_t* _stringLiteralCFA86DA9F9B859D235587DD8755E3EF4827AEEF1;
IL2CPP_EXTERN_C String_t* _stringLiteralD38E90B12339F5EFCA46BFCA27FFDE337FA3B996;
IL2CPP_EXTERN_C String_t* _stringLiteralD4CE57F143C3072D95F7AF2A8FDB45BD297B7097;
IL2CPP_EXTERN_C String_t* _stringLiteralDBBEAF4ECB9786E611900CC10F653FF3E2F78D53;
IL2CPP_EXTERN_C String_t* _stringLiteralDD3E96C069D13F79F8B9D6B0CD486B4507747763;
IL2CPP_EXTERN_C String_t* _stringLiteralE5FB67D700F9220F7DD24AC9022E732D8FE871B6;
IL2CPP_EXTERN_C String_t* _stringLiteralF79D74BDD6DF0D984C05241131A8A14AF293EE1B;
IL2CPP_EXTERN_C const RuntimeMethod* ARKitProvider_GetChanges_m263F7177209EBBDC83D9AF1FF5263F44498AEE11_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ARKitProvider_InstallAsync_m90DA07980968C958C21FF74E01BD6477ADE67B12_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ARKitProvider_Start_m0FB26FC072299E0A37D941AEFBDE6EB18FAF414A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ARKitProvider_Stop_m839275C2C059392AB397DBB4BD197CB3857F96DE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ARKitProvider_Update_mFCFAF8B947B25F2357A679710D9CF3F54851585A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ARKitProvider_set_currentConfiguration_m616D6D3B9CA248AA782CFF34203865F403E269CF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ARKitProvider_set_imageLibrary_m0F9A23065C475903A73FDA7F5FCCBECBCBC4875D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ARKitProvider_set_library_mBBCD56DA4D9E1D8CF81D68B4272781BAE8E651E9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ARKitSessionSubsystem_OnAsyncConversionComplete_m83F502F9F96A05BA35A9FDE4C56FDB7A7843942F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Action_2_Invoke_m062C6716117B97F904C309212B9BF73078717C7E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HashSet_1_Add_mF5186C7EFED02C844FC23546EFB8A3CB5B1E62CA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HashSet_1__ctor_m42658446DE9E2709FD2DAF4F47CE5FC2A42351CD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* IJobExtensions_Schedule_TisFlipBoundaryWindingJob_t726CFFAB953CC7C841EE74365C27322E57A2A5DA_m8E69469832F0E700BA5C13EF4E0E27930D985893_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* IJobParallelForExtensions_Schedule_TisTransformBoundaryPositionsJob_t538BF69F9F744EBC94AA0487075746AD113A64FE_m2890CB8839F696FCA3C3B4EC83DD4D59F87412B3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m627ED3F7C50096BB8934F778CB980E79483BD2AE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m30C52A4F2828D86CA3FAB0B1B583948F4DA9F1F9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisVector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_m48ABE60010404D61E53ED29A3DF2AB278D4888D9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NativeArrayUnsafeUtility_GetUnsafePtr_TisConfigurationDescriptor_t5CD12F017FCCF861DC33D7C0D6F0121015DEEA78_m38F4EB734FEAE74086322152D46FCAFEB2DB1C72_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NativeArrayUnsafeUtility_GetUnsafePtr_TisTrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B_m92549A9C2F4BEF557CB12A078D51054FA135F761_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NativeArrayUnsafeUtility_GetUnsafePtr_TisXRParticipant_t8CFF46A2CDD860A7591AD0FC0EE563458C8FA13F_mB0A664D2C49A4691B407A65D546E88FF50F0C378_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NativeArrayUnsafeUtility_GetUnsafePtr_TisXRRaycastHit_t94A3D13B245A9D0A7A7F2D0919DCAAC7C8DF8DDB_m752D0AAC76475B17F91A7623AE587CF73699C92E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NativeArray_1__ctor_m3975925019B935FC0405A56C2A4431D16DFE641F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NativeArray_1__ctor_m9BC70C00CBBD2A630F434033F04D9A1ADBCD2440_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NativeCopyUtility_PtrToNativeArrayWithDefault_TisXRCameraConfiguration_t2393055E5547307393E9C73AB13B95E0785A4F7A_m201412E1B5E1CFD5D5FC127661E8FBE015A47072_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NativeCopyUtility_PtrToNativeArrayWithDefault_TisXRTextureDescriptor_t9CA857DCCC1208B74376787BE4F3008A01B29A57_m1546885E4894E2676D1C8E5E9B8C0B1E41B24C63_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NativeSliceUnsafeUtility_GetUnsafePtr_TisByte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_m48BDB55277094F65920898D8EF5953BB2D1138B4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1__ctor_mC8B2FF6D15E5BD1BF52356C2621F2BE4AD504054_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1_get_Value_m061AC618B4B3A1EFA9F3B0970437705C72EA10BD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Promise_1_CreateResolvedPromise_m5C98DBF8D42B75866FC1F8CFFBB38C8E9D36D97C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Provider_CreateOrResizeNativeArrayIfNecessary_TisVector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_m2DB299A15665775F0B5BDFF92CF4FA10166B614A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TrackableChanges_1__ctor_m269B8E537869D288000375F719F5C5B87861E120_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TrackableChanges_1__ctor_m592AE08978C647130F8181BD1802AAE7EF3623B4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TrackableChanges_1__ctor_m6F60AB8591361352FE9F0FB2C9A50988CD5530E8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TrackableChanges_1__ctor_m8B32DEE7C39CA08A7523D0D553B26079265524E1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TrackableChanges_1__ctor_mA73D215CA80356F8179EB02A8F9BBC14329AD7D4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TrackableChanges_1__ctor_mBF738909EFD3DE1CE7CEC8B5BF81B3AB51A682CD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TrackableChanges_1__ctor_mD2CDA364CBC507E983239E807C8C6EE8D3453B42_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TrackableChanges_1__ctor_mF1B701B0766D8E5230EC1A878ADF490273ED75BC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TrackableChanges_1__ctor_mFA2451C6E10AF00118A809C94BB646C6B774012E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TrackableChanges_1_get_added_mE2DAB671C35440089855E3FA56312B779914939F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TrackableChanges_1_get_removed_mEF24C86CF94D54D18AE8E112F4CA05CB76E8933D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TrackableChanges_1_get_updated_mDD1EA7192EFEFC4A8FB5949F6F995268E940D5AC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnsafeUtility_AddressOf_TisXRRaycastHit_t94A3D13B245A9D0A7A7F2D0919DCAAC7C8DF8DDB_mCFB5A27460535DA449EA9CD73BE6BE4955FEC37B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnsafeUtility_SizeOf_TisXRParticipant_t8CFF46A2CDD860A7591AD0FC0EE563458C8FA13F_m00E843B9705969489FCA43AAF5B4BDF0DAE674C9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnsafeUtility_SizeOf_TisXRRaycastHit_t94A3D13B245A9D0A7A7F2D0919DCAAC7C8DF8DDB_m51E2C6221DC8163F580478B984D0562A95A715BA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* XRObjectTrackingSubsystem_Register_TisARKitProvider_tDDBF5C474A3543A0F5FA7FB07A058B223F6DA8EC_TisARKitXRObjectTrackingSubsystem_tB611337EA1668BBCB3A7123F14117CB536707A6D_mA3DD9643C5278A166FD6901EA76410470E237E4D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* XRParticipantSubsystemDescriptor_Register_TisARKitProvider_t9908B32D1E5398BA2FD0D825E9343F8CA0277B4C_TisARKitParticipantSubsystem_tFBFB76108F5069693F4F40F8DAA4B6A907A709C3_m48662D8FE9C230C66490A64B7F56FA91D20DAA48_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeType* ARKitAnchorSubsystem_t721F48C4B69507D7E38664A68AA42DD1DF75B3DF_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* ARKitCameraSubsystem_tE327D2A1BE7A0BD90A9353C8EDBDE9A882315245_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* ARKitEnvironmentProbeSubsystem_t628136AE15CA16280BA838B37E2B7CDF0473E9D2_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* ARKitHumanBodySubsystem_t8BA2C528FDE109FBDDBD0ED2FF8BC1FD081E92B7_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* ARKitImageTrackingSubsystem_t0F98C12C3E36B9F3819FC43494A883B600401237_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* ARKitOcclusionSubsystem_tE15296E017A597561D0C3B399ED52577B138F343_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* ARKitParticipantSubsystem_tFBFB76108F5069693F4F40F8DAA4B6A907A709C3_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* ARKitProvider_t3FB2A65F0CF8BCD91C4CC54F3841159E7F7DAA88_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* ARKitProvider_t5CC80E0D6F9A6EFFA70F54E8CDBEDB36D0CC4ED0_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* ARKitProvider_t6838013201F7369104C65DD65159D910B116E8AC_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* ARKitProvider_t8C73B4487170F7B34DF431897CADB4B9CA84C611_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* ARKitProvider_t9AF751FC81DD6B052A462DBB30F46C946CE9E7CF_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* ARKitProvider_tA94DC507BD799F0EB939B5D43E47850858DD9252_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* ARKitProvider_tBED347A85C19012D5B5F124BC8C0FB4876FBEACC_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* ARKitProvider_tC6BBA25F076F6D64FA8E6336E6860D7DBD41A7A1_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* ARKitProvider_tE10DC6803776ECE42E55F127E68C47E50319202E_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* ARKitProvider_tF9F620C89E671C028D10768C5300D3539661A2C1_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* ARKitRaycastSubsystem_t8DF7A7F21C4610FBBEF6A240FD1790CD47BE9900_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* ARKitSessionSubsystem_tABA1BA2FE3CF0CECDDC519C4B545236FC8B9E216_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* ARKitXRDepthSubsystem_t50D82DC2115EED29E5F0EEBA8A0F4FA7876BD2D5_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* ARKitXRPlaneSubsystem_t03042D64756D81EC6B4657CD1323D7404EC7530B_0_0_0_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;
struct TextureFormatU5BU5D_tC081C559AF0CE6678E9673429ADDC9B93B6B45CE;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct  U3CModuleU3E_tEB1A1F441D3E4E8A35F3B9EE4147916810B1DD3B 
{
public:

public:
};


// System.Object


// System.Collections.Generic.HashSet`1<UnityEngine.TextureFormat>
struct  HashSet_1_t7981318DC35BC53AD64634B2D643DD6055A39054  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.HashSet`1::_buckets
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ____buckets_7;
	// System.Collections.Generic.HashSet`1/Slot<T>[] System.Collections.Generic.HashSet`1::_slots
	SlotU5BU5D_t31D39DA9F0325BB5955FD10F99B52248A5A3EF86* ____slots_8;
	// System.Int32 System.Collections.Generic.HashSet`1::_count
	int32_t ____count_9;
	// System.Int32 System.Collections.Generic.HashSet`1::_lastIndex
	int32_t ____lastIndex_10;
	// System.Int32 System.Collections.Generic.HashSet`1::_freeList
	int32_t ____freeList_11;
	// System.Collections.Generic.IEqualityComparer`1<T> System.Collections.Generic.HashSet`1::_comparer
	RuntimeObject* ____comparer_12;
	// System.Int32 System.Collections.Generic.HashSet`1::_version
	int32_t ____version_13;
	// System.Runtime.Serialization.SerializationInfo System.Collections.Generic.HashSet`1::_siInfo
	SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * ____siInfo_14;

public:
	inline static int32_t get_offset_of__buckets_7() { return static_cast<int32_t>(offsetof(HashSet_1_t7981318DC35BC53AD64634B2D643DD6055A39054, ____buckets_7)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get__buckets_7() const { return ____buckets_7; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of__buckets_7() { return &____buckets_7; }
	inline void set__buckets_7(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		____buckets_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____buckets_7), (void*)value);
	}

	inline static int32_t get_offset_of__slots_8() { return static_cast<int32_t>(offsetof(HashSet_1_t7981318DC35BC53AD64634B2D643DD6055A39054, ____slots_8)); }
	inline SlotU5BU5D_t31D39DA9F0325BB5955FD10F99B52248A5A3EF86* get__slots_8() const { return ____slots_8; }
	inline SlotU5BU5D_t31D39DA9F0325BB5955FD10F99B52248A5A3EF86** get_address_of__slots_8() { return &____slots_8; }
	inline void set__slots_8(SlotU5BU5D_t31D39DA9F0325BB5955FD10F99B52248A5A3EF86* value)
	{
		____slots_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____slots_8), (void*)value);
	}

	inline static int32_t get_offset_of__count_9() { return static_cast<int32_t>(offsetof(HashSet_1_t7981318DC35BC53AD64634B2D643DD6055A39054, ____count_9)); }
	inline int32_t get__count_9() const { return ____count_9; }
	inline int32_t* get_address_of__count_9() { return &____count_9; }
	inline void set__count_9(int32_t value)
	{
		____count_9 = value;
	}

	inline static int32_t get_offset_of__lastIndex_10() { return static_cast<int32_t>(offsetof(HashSet_1_t7981318DC35BC53AD64634B2D643DD6055A39054, ____lastIndex_10)); }
	inline int32_t get__lastIndex_10() const { return ____lastIndex_10; }
	inline int32_t* get_address_of__lastIndex_10() { return &____lastIndex_10; }
	inline void set__lastIndex_10(int32_t value)
	{
		____lastIndex_10 = value;
	}

	inline static int32_t get_offset_of__freeList_11() { return static_cast<int32_t>(offsetof(HashSet_1_t7981318DC35BC53AD64634B2D643DD6055A39054, ____freeList_11)); }
	inline int32_t get__freeList_11() const { return ____freeList_11; }
	inline int32_t* get_address_of__freeList_11() { return &____freeList_11; }
	inline void set__freeList_11(int32_t value)
	{
		____freeList_11 = value;
	}

	inline static int32_t get_offset_of__comparer_12() { return static_cast<int32_t>(offsetof(HashSet_1_t7981318DC35BC53AD64634B2D643DD6055A39054, ____comparer_12)); }
	inline RuntimeObject* get__comparer_12() const { return ____comparer_12; }
	inline RuntimeObject** get_address_of__comparer_12() { return &____comparer_12; }
	inline void set__comparer_12(RuntimeObject* value)
	{
		____comparer_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____comparer_12), (void*)value);
	}

	inline static int32_t get_offset_of__version_13() { return static_cast<int32_t>(offsetof(HashSet_1_t7981318DC35BC53AD64634B2D643DD6055A39054, ____version_13)); }
	inline int32_t get__version_13() const { return ____version_13; }
	inline int32_t* get_address_of__version_13() { return &____version_13; }
	inline void set__version_13(int32_t value)
	{
		____version_13 = value;
	}

	inline static int32_t get_offset_of__siInfo_14() { return static_cast<int32_t>(offsetof(HashSet_1_t7981318DC35BC53AD64634B2D643DD6055A39054, ____siInfo_14)); }
	inline SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * get__siInfo_14() const { return ____siInfo_14; }
	inline SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 ** get_address_of__siInfo_14() { return &____siInfo_14; }
	inline void set__siInfo_14(SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * value)
	{
		____siInfo_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____siInfo_14), (void*)value);
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


// UnityEngine.XR.ARKit.ARWorldMapRequestStatusExtensions
struct  ARWorldMapRequestStatusExtensions_tBA8B558AE95AA57A9FB348869D8F63494FDB5C1A  : public RuntimeObject
{
public:

public:
};


// UnityEngine.XR.ARKit.Api
struct  Api_tA818DF9363CED72D41D212D7B479C32A793F1D9C  : public RuntimeObject
{
public:

public:
};

struct Il2CppArrayBounds;

// System.Array


// System.Attribute
struct  Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71  : public RuntimeObject
{
public:

public:
};


// UnityEngine.CustomYieldInstruction
struct  CustomYieldInstruction_t4ED1543FBAA3143362854EB1867B42E5D190A5C7  : public RuntimeObject
{
public:

public:
};


// UnityEngine.XR.ARKit.EnvironmentProbeApi
struct  EnvironmentProbeApi_t2B36D33D812E48CB4615B2FB0B41BD22D184BB19  : public RuntimeObject
{
public:

public:
};


// System.Reflection.MemberInfo
struct  MemberInfo_t  : public RuntimeObject
{
public:

public:
};


// UnityEngine.XR.ARSubsystems.RuntimeReferenceImageLibrary
struct  RuntimeReferenceImageLibrary_t76072EC5637B1F0F8FD0A1BFD3AEAF954D6F8D6B  : public RuntimeObject
{
public:

public:
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


// UnityEngine.SubsystemsImplementation.SubsystemProvider
struct  SubsystemProvider_t39E89FB8DB1EF1D2B0AF93796AEDB19D76A665F9  : public RuntimeObject
{
public:
	// System.Boolean UnityEngine.SubsystemsImplementation.SubsystemProvider::m_Running
	bool ___m_Running_0;

public:
	inline static int32_t get_offset_of_m_Running_0() { return static_cast<int32_t>(offsetof(SubsystemProvider_t39E89FB8DB1EF1D2B0AF93796AEDB19D76A665F9, ___m_Running_0)); }
	inline bool get_m_Running_0() const { return ___m_Running_0; }
	inline bool* get_address_of_m_Running_0() { return &___m_Running_0; }
	inline void set_m_Running_0(bool value)
	{
		___m_Running_0 = value;
	}
};


// UnityEngine.SubsystemsImplementation.SubsystemWithProvider
struct  SubsystemWithProvider_t1C1868CF8676F5596C1AD20A7CE69BDF7C7DE73E  : public RuntimeObject
{
public:
	// System.Boolean UnityEngine.SubsystemsImplementation.SubsystemWithProvider::<running>k__BackingField
	bool ___U3CrunningU3Ek__BackingField_0;
	// UnityEngine.SubsystemsImplementation.SubsystemProvider UnityEngine.SubsystemsImplementation.SubsystemWithProvider::<providerBase>k__BackingField
	SubsystemProvider_t39E89FB8DB1EF1D2B0AF93796AEDB19D76A665F9 * ___U3CproviderBaseU3Ek__BackingField_1;

public:
	inline static int32_t get_offset_of_U3CrunningU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(SubsystemWithProvider_t1C1868CF8676F5596C1AD20A7CE69BDF7C7DE73E, ___U3CrunningU3Ek__BackingField_0)); }
	inline bool get_U3CrunningU3Ek__BackingField_0() const { return ___U3CrunningU3Ek__BackingField_0; }
	inline bool* get_address_of_U3CrunningU3Ek__BackingField_0() { return &___U3CrunningU3Ek__BackingField_0; }
	inline void set_U3CrunningU3Ek__BackingField_0(bool value)
	{
		___U3CrunningU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of_U3CproviderBaseU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(SubsystemWithProvider_t1C1868CF8676F5596C1AD20A7CE69BDF7C7DE73E, ___U3CproviderBaseU3Ek__BackingField_1)); }
	inline SubsystemProvider_t39E89FB8DB1EF1D2B0AF93796AEDB19D76A665F9 * get_U3CproviderBaseU3Ek__BackingField_1() const { return ___U3CproviderBaseU3Ek__BackingField_1; }
	inline SubsystemProvider_t39E89FB8DB1EF1D2B0AF93796AEDB19D76A665F9 ** get_address_of_U3CproviderBaseU3Ek__BackingField_1() { return &___U3CproviderBaseU3Ek__BackingField_1; }
	inline void set_U3CproviderBaseU3Ek__BackingField_1(SubsystemProvider_t39E89FB8DB1EF1D2B0AF93796AEDB19D76A665F9 * value)
	{
		___U3CproviderBaseU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CproviderBaseU3Ek__BackingField_1), (void*)value);
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

// UnityEngine.XR.ARKit.ARKitCameraSubsystem/NativeApi
struct  NativeApi_tA8D79572A35E338F74C186C460AA1780DD18222A  : public RuntimeObject
{
public:

public:
};


// UnityEngine.XR.ARKit.ARKitCpuImageApi/Native
struct  Native_tF04A9C18AA77B29062CE0428C310D081D0D35E77  : public RuntimeObject
{
public:

public:
};


// UnityEngine.XR.ARKit.ARKitHumanBodySubsystem/NativeApi
struct  NativeApi_tD8D7F6FC5A365EA4D3189425623AC3D23A7ED03B  : public RuntimeObject
{
public:

public:
};


// UnityEngine.XR.ARKit.ARKitOcclusionSubsystem/NativeApi
struct  NativeApi_tFF41350E0941271CB10B461CA357ABF510ACB223  : public RuntimeObject
{
public:

public:
};


// UnityEngine.XR.ARKit.ARKitRaycastSubsystem/NativeApi
struct  NativeApi_t62CE96BA0CF6D47C5FD80B91223590E60F948070  : public RuntimeObject
{
public:

public:
};


// UnityEngine.XR.ARKit.ARKitSessionSubsystem/NativeApi
struct  NativeApi_t14734856858FD58426CAE2F6A09FA522E550C226  : public RuntimeObject
{
public:

public:
};


// UnityEngine.XR.ARKit.ARKitXRPlaneSubsystem/NativeApi
struct  NativeApi_tB65E4D304D37EA8B8ED6329919AEE7845A85C55E  : public RuntimeObject
{
public:

public:
};


// UnityEngine.XR.ARSubsystems.XRCpuImage/Api
struct  Api_t7C92F00C6416A2C636A44AAC833C3773C567DC3E  : public RuntimeObject
{
public:

public:
};


// Unity.Collections.NativeSlice`1<System.Byte>
struct  NativeSlice_1_tA05D3BC7EB042685CBFD3369ECB6140D114C911B 
{
public:
	// System.Byte* Unity.Collections.NativeSlice`1::m_Buffer
	uint8_t* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeSlice`1::m_Stride
	int32_t ___m_Stride_1;
	// System.Int32 Unity.Collections.NativeSlice`1::m_Length
	int32_t ___m_Length_2;

public:
	inline static int32_t get_offset_of_m_Buffer_0() { return static_cast<int32_t>(offsetof(NativeSlice_1_tA05D3BC7EB042685CBFD3369ECB6140D114C911B, ___m_Buffer_0)); }
	inline uint8_t* get_m_Buffer_0() const { return ___m_Buffer_0; }
	inline uint8_t** get_address_of_m_Buffer_0() { return &___m_Buffer_0; }
	inline void set_m_Buffer_0(uint8_t* value)
	{
		___m_Buffer_0 = value;
	}

	inline static int32_t get_offset_of_m_Stride_1() { return static_cast<int32_t>(offsetof(NativeSlice_1_tA05D3BC7EB042685CBFD3369ECB6140D114C911B, ___m_Stride_1)); }
	inline int32_t get_m_Stride_1() const { return ___m_Stride_1; }
	inline int32_t* get_address_of_m_Stride_1() { return &___m_Stride_1; }
	inline void set_m_Stride_1(int32_t value)
	{
		___m_Stride_1 = value;
	}

	inline static int32_t get_offset_of_m_Length_2() { return static_cast<int32_t>(offsetof(NativeSlice_1_tA05D3BC7EB042685CBFD3369ECB6140D114C911B, ___m_Length_2)); }
	inline int32_t get_m_Length_2() const { return ___m_Length_2; }
	inline int32_t* get_address_of_m_Length_2() { return &___m_Length_2; }
	inline void set_m_Length_2(int32_t value)
	{
		___m_Length_2 = value;
	}
};


// UnityEngine.SubsystemsImplementation.SubsystemProvider`1<UnityEngine.XR.ARSubsystems.XRAnchorSubsystem>
struct  SubsystemProvider_1_t302358330269847780327C2298A4FFA7D79AF2BF  : public SubsystemProvider_t39E89FB8DB1EF1D2B0AF93796AEDB19D76A665F9
{
public:

public:
};


// UnityEngine.SubsystemsImplementation.SubsystemProvider`1<UnityEngine.XR.ARSubsystems.XRCameraSubsystem>
struct  SubsystemProvider_1_t3B6396AEE76B5D8268802608E3593AA3D48DB307  : public SubsystemProvider_t39E89FB8DB1EF1D2B0AF93796AEDB19D76A665F9
{
public:

public:
};


// UnityEngine.SubsystemsImplementation.SubsystemProvider`1<UnityEngine.XR.ARSubsystems.XRDepthSubsystem>
struct  SubsystemProvider_1_tBB539901FE99992CAA10A1EFDFA610E048498E98  : public SubsystemProvider_t39E89FB8DB1EF1D2B0AF93796AEDB19D76A665F9
{
public:

public:
};


// UnityEngine.SubsystemsImplementation.SubsystemProvider`1<UnityEngine.XR.ARSubsystems.XREnvironmentProbeSubsystem>
struct  SubsystemProvider_1_tC3DB99A11F9F3210CE2ABA9FE09C127C5B13FF80  : public SubsystemProvider_t39E89FB8DB1EF1D2B0AF93796AEDB19D76A665F9
{
public:

public:
};


// UnityEngine.SubsystemsImplementation.SubsystemProvider`1<UnityEngine.XR.ARSubsystems.XRHumanBodySubsystem>
struct  SubsystemProvider_1_tBF37BFFB47314B7D87E24F4C4903C90930C0302C  : public SubsystemProvider_t39E89FB8DB1EF1D2B0AF93796AEDB19D76A665F9
{
public:

public:
};


// UnityEngine.SubsystemsImplementation.SubsystemProvider`1<UnityEngine.XR.ARSubsystems.XRImageTrackingSubsystem>
struct  SubsystemProvider_1_t3086BC462E1384FBB8137E64FA6C513FC002E440  : public SubsystemProvider_t39E89FB8DB1EF1D2B0AF93796AEDB19D76A665F9
{
public:

public:
};


// UnityEngine.SubsystemsImplementation.SubsystemProvider`1<UnityEngine.XR.ARSubsystems.XRObjectTrackingSubsystem>
struct  SubsystemProvider_1_t71FE677A1A2F32123FE4C7868D5943892028AE12  : public SubsystemProvider_t39E89FB8DB1EF1D2B0AF93796AEDB19D76A665F9
{
public:

public:
};


// UnityEngine.SubsystemsImplementation.SubsystemProvider`1<UnityEngine.XR.ARSubsystems.XROcclusionSubsystem>
struct  SubsystemProvider_1_t57D5C398A7A30AC3C3674CA126FAE612BC00F597  : public SubsystemProvider_t39E89FB8DB1EF1D2B0AF93796AEDB19D76A665F9
{
public:

public:
};


// UnityEngine.SubsystemsImplementation.SubsystemProvider`1<UnityEngine.XR.ARSubsystems.XRParticipantSubsystem>
struct  SubsystemProvider_1_t3D6D4D936F16F3264F75D1BAB46A4A398F18F204  : public SubsystemProvider_t39E89FB8DB1EF1D2B0AF93796AEDB19D76A665F9
{
public:

public:
};


// UnityEngine.SubsystemsImplementation.SubsystemProvider`1<UnityEngine.XR.ARSubsystems.XRPlaneSubsystem>
struct  SubsystemProvider_1_tF2F3B0C041BDD07A00CD49B25AE6016B61F24816  : public SubsystemProvider_t39E89FB8DB1EF1D2B0AF93796AEDB19D76A665F9
{
public:

public:
};


// UnityEngine.SubsystemsImplementation.SubsystemProvider`1<UnityEngine.XR.ARSubsystems.XRRaycastSubsystem>
struct  SubsystemProvider_1_t7ACBE98539B067B19E2D5BCC2B852277F4A38875  : public SubsystemProvider_t39E89FB8DB1EF1D2B0AF93796AEDB19D76A665F9
{
public:

public:
};


// UnityEngine.SubsystemsImplementation.SubsystemProvider`1<UnityEngine.XR.ARSubsystems.XRSessionSubsystem>
struct  SubsystemProvider_1_tFA56F133FD9BCE90A1C4C7D15FFE2571963D8DE4  : public SubsystemProvider_t39E89FB8DB1EF1D2B0AF93796AEDB19D76A665F9
{
public:

public:
};


// UnityEngine.SubsystemsImplementation.SubsystemWithProvider`3<UnityEngine.XR.ARSubsystems.XRAnchorSubsystem,UnityEngine.XR.ARSubsystems.XRAnchorSubsystemDescriptor,UnityEngine.XR.ARSubsystems.XRAnchorSubsystem/Provider>
struct  SubsystemWithProvider_3_tD91EB2F57F19DA2CDB9A5E0011978CA1EA351BA2  : public SubsystemWithProvider_t1C1868CF8676F5596C1AD20A7CE69BDF7C7DE73E
{
public:
	// TSubsystemDescriptor UnityEngine.SubsystemsImplementation.SubsystemWithProvider`3::<subsystemDescriptor>k__BackingField
	XRAnchorSubsystemDescriptor_t3BD7F9922EF5C04185D59349C76D625BC1E44E3B * ___U3CsubsystemDescriptorU3Ek__BackingField_2;
	// TProvider UnityEngine.SubsystemsImplementation.SubsystemWithProvider`3::<provider>k__BackingField
	Provider_t9F286D20EB73EBBA4B6E7203C7A9051BE673C2E2 * ___U3CproviderU3Ek__BackingField_3;

public:
	inline static int32_t get_offset_of_U3CsubsystemDescriptorU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(SubsystemWithProvider_3_tD91EB2F57F19DA2CDB9A5E0011978CA1EA351BA2, ___U3CsubsystemDescriptorU3Ek__BackingField_2)); }
	inline XRAnchorSubsystemDescriptor_t3BD7F9922EF5C04185D59349C76D625BC1E44E3B * get_U3CsubsystemDescriptorU3Ek__BackingField_2() const { return ___U3CsubsystemDescriptorU3Ek__BackingField_2; }
	inline XRAnchorSubsystemDescriptor_t3BD7F9922EF5C04185D59349C76D625BC1E44E3B ** get_address_of_U3CsubsystemDescriptorU3Ek__BackingField_2() { return &___U3CsubsystemDescriptorU3Ek__BackingField_2; }
	inline void set_U3CsubsystemDescriptorU3Ek__BackingField_2(XRAnchorSubsystemDescriptor_t3BD7F9922EF5C04185D59349C76D625BC1E44E3B * value)
	{
		___U3CsubsystemDescriptorU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CsubsystemDescriptorU3Ek__BackingField_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CproviderU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(SubsystemWithProvider_3_tD91EB2F57F19DA2CDB9A5E0011978CA1EA351BA2, ___U3CproviderU3Ek__BackingField_3)); }
	inline Provider_t9F286D20EB73EBBA4B6E7203C7A9051BE673C2E2 * get_U3CproviderU3Ek__BackingField_3() const { return ___U3CproviderU3Ek__BackingField_3; }
	inline Provider_t9F286D20EB73EBBA4B6E7203C7A9051BE673C2E2 ** get_address_of_U3CproviderU3Ek__BackingField_3() { return &___U3CproviderU3Ek__BackingField_3; }
	inline void set_U3CproviderU3Ek__BackingField_3(Provider_t9F286D20EB73EBBA4B6E7203C7A9051BE673C2E2 * value)
	{
		___U3CproviderU3Ek__BackingField_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CproviderU3Ek__BackingField_3), (void*)value);
	}
};


// UnityEngine.SubsystemsImplementation.SubsystemWithProvider`3<UnityEngine.XR.ARSubsystems.XRCameraSubsystem,UnityEngine.XR.ARSubsystems.XRCameraSubsystemDescriptor,UnityEngine.XR.ARSubsystems.XRCameraSubsystem/Provider>
struct  SubsystemWithProvider_3_tA938665692EBC0CA746A276F8413E462E8930FD4  : public SubsystemWithProvider_t1C1868CF8676F5596C1AD20A7CE69BDF7C7DE73E
{
public:
	// TSubsystemDescriptor UnityEngine.SubsystemsImplementation.SubsystemWithProvider`3::<subsystemDescriptor>k__BackingField
	XRCameraSubsystemDescriptor_t1F8A45C69031E2981B1863518C43793D26E2C5E5 * ___U3CsubsystemDescriptorU3Ek__BackingField_2;
	// TProvider UnityEngine.SubsystemsImplementation.SubsystemWithProvider`3::<provider>k__BackingField
	Provider_t55916B0D2766C320DCA36A0C870BA2FD80F8B6D1 * ___U3CproviderU3Ek__BackingField_3;

public:
	inline static int32_t get_offset_of_U3CsubsystemDescriptorU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(SubsystemWithProvider_3_tA938665692EBC0CA746A276F8413E462E8930FD4, ___U3CsubsystemDescriptorU3Ek__BackingField_2)); }
	inline XRCameraSubsystemDescriptor_t1F8A45C69031E2981B1863518C43793D26E2C5E5 * get_U3CsubsystemDescriptorU3Ek__BackingField_2() const { return ___U3CsubsystemDescriptorU3Ek__BackingField_2; }
	inline XRCameraSubsystemDescriptor_t1F8A45C69031E2981B1863518C43793D26E2C5E5 ** get_address_of_U3CsubsystemDescriptorU3Ek__BackingField_2() { return &___U3CsubsystemDescriptorU3Ek__BackingField_2; }
	inline void set_U3CsubsystemDescriptorU3Ek__BackingField_2(XRCameraSubsystemDescriptor_t1F8A45C69031E2981B1863518C43793D26E2C5E5 * value)
	{
		___U3CsubsystemDescriptorU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CsubsystemDescriptorU3Ek__BackingField_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CproviderU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(SubsystemWithProvider_3_tA938665692EBC0CA746A276F8413E462E8930FD4, ___U3CproviderU3Ek__BackingField_3)); }
	inline Provider_t55916B0D2766C320DCA36A0C870BA2FD80F8B6D1 * get_U3CproviderU3Ek__BackingField_3() const { return ___U3CproviderU3Ek__BackingField_3; }
	inline Provider_t55916B0D2766C320DCA36A0C870BA2FD80F8B6D1 ** get_address_of_U3CproviderU3Ek__BackingField_3() { return &___U3CproviderU3Ek__BackingField_3; }
	inline void set_U3CproviderU3Ek__BackingField_3(Provider_t55916B0D2766C320DCA36A0C870BA2FD80F8B6D1 * value)
	{
		___U3CproviderU3Ek__BackingField_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CproviderU3Ek__BackingField_3), (void*)value);
	}
};


// UnityEngine.SubsystemsImplementation.SubsystemWithProvider`3<UnityEngine.XR.ARSubsystems.XRDepthSubsystem,UnityEngine.XR.ARSubsystems.XRDepthSubsystemDescriptor,UnityEngine.XR.ARSubsystems.XRDepthSubsystem/Provider>
struct  SubsystemWithProvider_3_tD436D6BE4AA164ED727D09EFDE50FF8DCAA50D98  : public SubsystemWithProvider_t1C1868CF8676F5596C1AD20A7CE69BDF7C7DE73E
{
public:
	// TSubsystemDescriptor UnityEngine.SubsystemsImplementation.SubsystemWithProvider`3::<subsystemDescriptor>k__BackingField
	XRDepthSubsystemDescriptor_t745DBB7D313FB52F756E0B7AA993FBBC26B412C2 * ___U3CsubsystemDescriptorU3Ek__BackingField_2;
	// TProvider UnityEngine.SubsystemsImplementation.SubsystemWithProvider`3::<provider>k__BackingField
	Provider_t8E88C17A70269CD3E96909AFCCA952AAA7DEC0B6 * ___U3CproviderU3Ek__BackingField_3;

public:
	inline static int32_t get_offset_of_U3CsubsystemDescriptorU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(SubsystemWithProvider_3_tD436D6BE4AA164ED727D09EFDE50FF8DCAA50D98, ___U3CsubsystemDescriptorU3Ek__BackingField_2)); }
	inline XRDepthSubsystemDescriptor_t745DBB7D313FB52F756E0B7AA993FBBC26B412C2 * get_U3CsubsystemDescriptorU3Ek__BackingField_2() const { return ___U3CsubsystemDescriptorU3Ek__BackingField_2; }
	inline XRDepthSubsystemDescriptor_t745DBB7D313FB52F756E0B7AA993FBBC26B412C2 ** get_address_of_U3CsubsystemDescriptorU3Ek__BackingField_2() { return &___U3CsubsystemDescriptorU3Ek__BackingField_2; }
	inline void set_U3CsubsystemDescriptorU3Ek__BackingField_2(XRDepthSubsystemDescriptor_t745DBB7D313FB52F756E0B7AA993FBBC26B412C2 * value)
	{
		___U3CsubsystemDescriptorU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CsubsystemDescriptorU3Ek__BackingField_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CproviderU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(SubsystemWithProvider_3_tD436D6BE4AA164ED727D09EFDE50FF8DCAA50D98, ___U3CproviderU3Ek__BackingField_3)); }
	inline Provider_t8E88C17A70269CD3E96909AFCCA952AAA7DEC0B6 * get_U3CproviderU3Ek__BackingField_3() const { return ___U3CproviderU3Ek__BackingField_3; }
	inline Provider_t8E88C17A70269CD3E96909AFCCA952AAA7DEC0B6 ** get_address_of_U3CproviderU3Ek__BackingField_3() { return &___U3CproviderU3Ek__BackingField_3; }
	inline void set_U3CproviderU3Ek__BackingField_3(Provider_t8E88C17A70269CD3E96909AFCCA952AAA7DEC0B6 * value)
	{
		___U3CproviderU3Ek__BackingField_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CproviderU3Ek__BackingField_3), (void*)value);
	}
};


// UnityEngine.SubsystemsImplementation.SubsystemWithProvider`3<UnityEngine.XR.ARSubsystems.XREnvironmentProbeSubsystem,UnityEngine.XR.ARSubsystems.XREnvironmentProbeSubsystemDescriptor,UnityEngine.XR.ARSubsystems.XREnvironmentProbeSubsystem/Provider>
struct  SubsystemWithProvider_3_t8B33A21A2B183DB3F429FD3F0A899D7ED1BB4DEA  : public SubsystemWithProvider_t1C1868CF8676F5596C1AD20A7CE69BDF7C7DE73E
{
public:
	// TSubsystemDescriptor UnityEngine.SubsystemsImplementation.SubsystemWithProvider`3::<subsystemDescriptor>k__BackingField
	XREnvironmentProbeSubsystemDescriptor_t7C10519F545418330347AC7434FBB10F39DD4243 * ___U3CsubsystemDescriptorU3Ek__BackingField_2;
	// TProvider UnityEngine.SubsystemsImplementation.SubsystemWithProvider`3::<provider>k__BackingField
	Provider_tAF87FE3E906FDBF14F06488A1AA5E80400EFE190 * ___U3CproviderU3Ek__BackingField_3;

public:
	inline static int32_t get_offset_of_U3CsubsystemDescriptorU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(SubsystemWithProvider_3_t8B33A21A2B183DB3F429FD3F0A899D7ED1BB4DEA, ___U3CsubsystemDescriptorU3Ek__BackingField_2)); }
	inline XREnvironmentProbeSubsystemDescriptor_t7C10519F545418330347AC7434FBB10F39DD4243 * get_U3CsubsystemDescriptorU3Ek__BackingField_2() const { return ___U3CsubsystemDescriptorU3Ek__BackingField_2; }
	inline XREnvironmentProbeSubsystemDescriptor_t7C10519F545418330347AC7434FBB10F39DD4243 ** get_address_of_U3CsubsystemDescriptorU3Ek__BackingField_2() { return &___U3CsubsystemDescriptorU3Ek__BackingField_2; }
	inline void set_U3CsubsystemDescriptorU3Ek__BackingField_2(XREnvironmentProbeSubsystemDescriptor_t7C10519F545418330347AC7434FBB10F39DD4243 * value)
	{
		___U3CsubsystemDescriptorU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CsubsystemDescriptorU3Ek__BackingField_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CproviderU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(SubsystemWithProvider_3_t8B33A21A2B183DB3F429FD3F0A899D7ED1BB4DEA, ___U3CproviderU3Ek__BackingField_3)); }
	inline Provider_tAF87FE3E906FDBF14F06488A1AA5E80400EFE190 * get_U3CproviderU3Ek__BackingField_3() const { return ___U3CproviderU3Ek__BackingField_3; }
	inline Provider_tAF87FE3E906FDBF14F06488A1AA5E80400EFE190 ** get_address_of_U3CproviderU3Ek__BackingField_3() { return &___U3CproviderU3Ek__BackingField_3; }
	inline void set_U3CproviderU3Ek__BackingField_3(Provider_tAF87FE3E906FDBF14F06488A1AA5E80400EFE190 * value)
	{
		___U3CproviderU3Ek__BackingField_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CproviderU3Ek__BackingField_3), (void*)value);
	}
};


// UnityEngine.SubsystemsImplementation.SubsystemWithProvider`3<UnityEngine.XR.ARSubsystems.XRHumanBodySubsystem,UnityEngine.XR.ARSubsystems.XRHumanBodySubsystemDescriptor,UnityEngine.XR.ARSubsystems.XRHumanBodySubsystem/Provider>
struct  SubsystemWithProvider_3_t152AEC9946809B23BD9A7DE32A2113E12B8CE2C2  : public SubsystemWithProvider_t1C1868CF8676F5596C1AD20A7CE69BDF7C7DE73E
{
public:
	// TSubsystemDescriptor UnityEngine.SubsystemsImplementation.SubsystemWithProvider`3::<subsystemDescriptor>k__BackingField
	XRHumanBodySubsystemDescriptor_t00E75DD05B03BCC1BF5A794547615692B7A55C04 * ___U3CsubsystemDescriptorU3Ek__BackingField_2;
	// TProvider UnityEngine.SubsystemsImplementation.SubsystemWithProvider`3::<provider>k__BackingField
	Provider_t055C90C34B2BCE8D134DF44C12823E320519168C * ___U3CproviderU3Ek__BackingField_3;

public:
	inline static int32_t get_offset_of_U3CsubsystemDescriptorU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(SubsystemWithProvider_3_t152AEC9946809B23BD9A7DE32A2113E12B8CE2C2, ___U3CsubsystemDescriptorU3Ek__BackingField_2)); }
	inline XRHumanBodySubsystemDescriptor_t00E75DD05B03BCC1BF5A794547615692B7A55C04 * get_U3CsubsystemDescriptorU3Ek__BackingField_2() const { return ___U3CsubsystemDescriptorU3Ek__BackingField_2; }
	inline XRHumanBodySubsystemDescriptor_t00E75DD05B03BCC1BF5A794547615692B7A55C04 ** get_address_of_U3CsubsystemDescriptorU3Ek__BackingField_2() { return &___U3CsubsystemDescriptorU3Ek__BackingField_2; }
	inline void set_U3CsubsystemDescriptorU3Ek__BackingField_2(XRHumanBodySubsystemDescriptor_t00E75DD05B03BCC1BF5A794547615692B7A55C04 * value)
	{
		___U3CsubsystemDescriptorU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CsubsystemDescriptorU3Ek__BackingField_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CproviderU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(SubsystemWithProvider_3_t152AEC9946809B23BD9A7DE32A2113E12B8CE2C2, ___U3CproviderU3Ek__BackingField_3)); }
	inline Provider_t055C90C34B2BCE8D134DF44C12823E320519168C * get_U3CproviderU3Ek__BackingField_3() const { return ___U3CproviderU3Ek__BackingField_3; }
	inline Provider_t055C90C34B2BCE8D134DF44C12823E320519168C ** get_address_of_U3CproviderU3Ek__BackingField_3() { return &___U3CproviderU3Ek__BackingField_3; }
	inline void set_U3CproviderU3Ek__BackingField_3(Provider_t055C90C34B2BCE8D134DF44C12823E320519168C * value)
	{
		___U3CproviderU3Ek__BackingField_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CproviderU3Ek__BackingField_3), (void*)value);
	}
};


// UnityEngine.SubsystemsImplementation.SubsystemWithProvider`3<UnityEngine.XR.ARSubsystems.XRImageTrackingSubsystem,UnityEngine.XR.ARSubsystems.XRImageTrackingSubsystemDescriptor,UnityEngine.XR.ARSubsystems.XRImageTrackingSubsystem/Provider>
struct  SubsystemWithProvider_3_t249D82EF0730E7FF15F2B19C4BB45B2E08CF620B  : public SubsystemWithProvider_t1C1868CF8676F5596C1AD20A7CE69BDF7C7DE73E
{
public:
	// TSubsystemDescriptor UnityEngine.SubsystemsImplementation.SubsystemWithProvider`3::<subsystemDescriptor>k__BackingField
	XRImageTrackingSubsystemDescriptor_t3EC191739B144A8AA00CEEE03E8F7FF01D7F833B * ___U3CsubsystemDescriptorU3Ek__BackingField_2;
	// TProvider UnityEngine.SubsystemsImplementation.SubsystemWithProvider`3::<provider>k__BackingField
	Provider_tA7CEF856C3BC486ADEBD656F5535E24262AAAE9E * ___U3CproviderU3Ek__BackingField_3;

public:
	inline static int32_t get_offset_of_U3CsubsystemDescriptorU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(SubsystemWithProvider_3_t249D82EF0730E7FF15F2B19C4BB45B2E08CF620B, ___U3CsubsystemDescriptorU3Ek__BackingField_2)); }
	inline XRImageTrackingSubsystemDescriptor_t3EC191739B144A8AA00CEEE03E8F7FF01D7F833B * get_U3CsubsystemDescriptorU3Ek__BackingField_2() const { return ___U3CsubsystemDescriptorU3Ek__BackingField_2; }
	inline XRImageTrackingSubsystemDescriptor_t3EC191739B144A8AA00CEEE03E8F7FF01D7F833B ** get_address_of_U3CsubsystemDescriptorU3Ek__BackingField_2() { return &___U3CsubsystemDescriptorU3Ek__BackingField_2; }
	inline void set_U3CsubsystemDescriptorU3Ek__BackingField_2(XRImageTrackingSubsystemDescriptor_t3EC191739B144A8AA00CEEE03E8F7FF01D7F833B * value)
	{
		___U3CsubsystemDescriptorU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CsubsystemDescriptorU3Ek__BackingField_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CproviderU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(SubsystemWithProvider_3_t249D82EF0730E7FF15F2B19C4BB45B2E08CF620B, ___U3CproviderU3Ek__BackingField_3)); }
	inline Provider_tA7CEF856C3BC486ADEBD656F5535E24262AAAE9E * get_U3CproviderU3Ek__BackingField_3() const { return ___U3CproviderU3Ek__BackingField_3; }
	inline Provider_tA7CEF856C3BC486ADEBD656F5535E24262AAAE9E ** get_address_of_U3CproviderU3Ek__BackingField_3() { return &___U3CproviderU3Ek__BackingField_3; }
	inline void set_U3CproviderU3Ek__BackingField_3(Provider_tA7CEF856C3BC486ADEBD656F5535E24262AAAE9E * value)
	{
		___U3CproviderU3Ek__BackingField_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CproviderU3Ek__BackingField_3), (void*)value);
	}
};


// UnityEngine.SubsystemsImplementation.SubsystemWithProvider`3<UnityEngine.XR.ARSubsystems.XRObjectTrackingSubsystem,UnityEngine.XR.ARSubsystems.XRObjectTrackingSubsystemDescriptor,UnityEngine.XR.ARSubsystems.XRObjectTrackingSubsystem/Provider>
struct  SubsystemWithProvider_3_t2622D99FF6F2A6B95B2E82547A76A7E7712AA7DB  : public SubsystemWithProvider_t1C1868CF8676F5596C1AD20A7CE69BDF7C7DE73E
{
public:
	// TSubsystemDescriptor UnityEngine.SubsystemsImplementation.SubsystemWithProvider`3::<subsystemDescriptor>k__BackingField
	XRObjectTrackingSubsystemDescriptor_t831B568A9BE175A6A79BB87E25DEFAC519A6C472 * ___U3CsubsystemDescriptorU3Ek__BackingField_2;
	// TProvider UnityEngine.SubsystemsImplementation.SubsystemWithProvider`3::<provider>k__BackingField
	Provider_t35977A2A0AA6C338BC9893668DD32F0294A9C01E * ___U3CproviderU3Ek__BackingField_3;

public:
	inline static int32_t get_offset_of_U3CsubsystemDescriptorU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(SubsystemWithProvider_3_t2622D99FF6F2A6B95B2E82547A76A7E7712AA7DB, ___U3CsubsystemDescriptorU3Ek__BackingField_2)); }
	inline XRObjectTrackingSubsystemDescriptor_t831B568A9BE175A6A79BB87E25DEFAC519A6C472 * get_U3CsubsystemDescriptorU3Ek__BackingField_2() const { return ___U3CsubsystemDescriptorU3Ek__BackingField_2; }
	inline XRObjectTrackingSubsystemDescriptor_t831B568A9BE175A6A79BB87E25DEFAC519A6C472 ** get_address_of_U3CsubsystemDescriptorU3Ek__BackingField_2() { return &___U3CsubsystemDescriptorU3Ek__BackingField_2; }
	inline void set_U3CsubsystemDescriptorU3Ek__BackingField_2(XRObjectTrackingSubsystemDescriptor_t831B568A9BE175A6A79BB87E25DEFAC519A6C472 * value)
	{
		___U3CsubsystemDescriptorU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CsubsystemDescriptorU3Ek__BackingField_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CproviderU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(SubsystemWithProvider_3_t2622D99FF6F2A6B95B2E82547A76A7E7712AA7DB, ___U3CproviderU3Ek__BackingField_3)); }
	inline Provider_t35977A2A0AA6C338BC9893668DD32F0294A9C01E * get_U3CproviderU3Ek__BackingField_3() const { return ___U3CproviderU3Ek__BackingField_3; }
	inline Provider_t35977A2A0AA6C338BC9893668DD32F0294A9C01E ** get_address_of_U3CproviderU3Ek__BackingField_3() { return &___U3CproviderU3Ek__BackingField_3; }
	inline void set_U3CproviderU3Ek__BackingField_3(Provider_t35977A2A0AA6C338BC9893668DD32F0294A9C01E * value)
	{
		___U3CproviderU3Ek__BackingField_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CproviderU3Ek__BackingField_3), (void*)value);
	}
};


// UnityEngine.SubsystemsImplementation.SubsystemWithProvider`3<UnityEngine.XR.ARSubsystems.XROcclusionSubsystem,UnityEngine.XR.ARSubsystems.XROcclusionSubsystemDescriptor,UnityEngine.XR.ARSubsystems.XROcclusionSubsystem/Provider>
struct  SubsystemWithProvider_3_t2838D413336061A31AFDEA49065AD29BD1EB3A1B  : public SubsystemWithProvider_t1C1868CF8676F5596C1AD20A7CE69BDF7C7DE73E
{
public:
	// TSubsystemDescriptor UnityEngine.SubsystemsImplementation.SubsystemWithProvider`3::<subsystemDescriptor>k__BackingField
	XROcclusionSubsystemDescriptor_tC9C8F2EFB7768358C203968CA71D353F0DD234FB * ___U3CsubsystemDescriptorU3Ek__BackingField_2;
	// TProvider UnityEngine.SubsystemsImplementation.SubsystemWithProvider`3::<provider>k__BackingField
	Provider_t5B60C630FB68EFEAB6FA2F3D9A732C144003B7FB * ___U3CproviderU3Ek__BackingField_3;

public:
	inline static int32_t get_offset_of_U3CsubsystemDescriptorU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(SubsystemWithProvider_3_t2838D413336061A31AFDEA49065AD29BD1EB3A1B, ___U3CsubsystemDescriptorU3Ek__BackingField_2)); }
	inline XROcclusionSubsystemDescriptor_tC9C8F2EFB7768358C203968CA71D353F0DD234FB * get_U3CsubsystemDescriptorU3Ek__BackingField_2() const { return ___U3CsubsystemDescriptorU3Ek__BackingField_2; }
	inline XROcclusionSubsystemDescriptor_tC9C8F2EFB7768358C203968CA71D353F0DD234FB ** get_address_of_U3CsubsystemDescriptorU3Ek__BackingField_2() { return &___U3CsubsystemDescriptorU3Ek__BackingField_2; }
	inline void set_U3CsubsystemDescriptorU3Ek__BackingField_2(XROcclusionSubsystemDescriptor_tC9C8F2EFB7768358C203968CA71D353F0DD234FB * value)
	{
		___U3CsubsystemDescriptorU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CsubsystemDescriptorU3Ek__BackingField_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CproviderU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(SubsystemWithProvider_3_t2838D413336061A31AFDEA49065AD29BD1EB3A1B, ___U3CproviderU3Ek__BackingField_3)); }
	inline Provider_t5B60C630FB68EFEAB6FA2F3D9A732C144003B7FB * get_U3CproviderU3Ek__BackingField_3() const { return ___U3CproviderU3Ek__BackingField_3; }
	inline Provider_t5B60C630FB68EFEAB6FA2F3D9A732C144003B7FB ** get_address_of_U3CproviderU3Ek__BackingField_3() { return &___U3CproviderU3Ek__BackingField_3; }
	inline void set_U3CproviderU3Ek__BackingField_3(Provider_t5B60C630FB68EFEAB6FA2F3D9A732C144003B7FB * value)
	{
		___U3CproviderU3Ek__BackingField_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CproviderU3Ek__BackingField_3), (void*)value);
	}
};


// UnityEngine.SubsystemsImplementation.SubsystemWithProvider`3<UnityEngine.XR.ARSubsystems.XRParticipantSubsystem,UnityEngine.XR.ARSubsystems.XRParticipantSubsystemDescriptor,UnityEngine.XR.ARSubsystems.XRParticipantSubsystem/Provider>
struct  SubsystemWithProvider_3_t0293B6FD1251DCA5DC0D3396C57B87118ECE01DF  : public SubsystemWithProvider_t1C1868CF8676F5596C1AD20A7CE69BDF7C7DE73E
{
public:
	// TSubsystemDescriptor UnityEngine.SubsystemsImplementation.SubsystemWithProvider`3::<subsystemDescriptor>k__BackingField
	XRParticipantSubsystemDescriptor_t533EE70DC8D4B105B9C87B76D35A7D59A84BCA55 * ___U3CsubsystemDescriptorU3Ek__BackingField_2;
	// TProvider UnityEngine.SubsystemsImplementation.SubsystemWithProvider`3::<provider>k__BackingField
	Provider_t1D0BC515976D24FD30341AC456ACFCB2DE4A344E * ___U3CproviderU3Ek__BackingField_3;

public:
	inline static int32_t get_offset_of_U3CsubsystemDescriptorU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(SubsystemWithProvider_3_t0293B6FD1251DCA5DC0D3396C57B87118ECE01DF, ___U3CsubsystemDescriptorU3Ek__BackingField_2)); }
	inline XRParticipantSubsystemDescriptor_t533EE70DC8D4B105B9C87B76D35A7D59A84BCA55 * get_U3CsubsystemDescriptorU3Ek__BackingField_2() const { return ___U3CsubsystemDescriptorU3Ek__BackingField_2; }
	inline XRParticipantSubsystemDescriptor_t533EE70DC8D4B105B9C87B76D35A7D59A84BCA55 ** get_address_of_U3CsubsystemDescriptorU3Ek__BackingField_2() { return &___U3CsubsystemDescriptorU3Ek__BackingField_2; }
	inline void set_U3CsubsystemDescriptorU3Ek__BackingField_2(XRParticipantSubsystemDescriptor_t533EE70DC8D4B105B9C87B76D35A7D59A84BCA55 * value)
	{
		___U3CsubsystemDescriptorU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CsubsystemDescriptorU3Ek__BackingField_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CproviderU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(SubsystemWithProvider_3_t0293B6FD1251DCA5DC0D3396C57B87118ECE01DF, ___U3CproviderU3Ek__BackingField_3)); }
	inline Provider_t1D0BC515976D24FD30341AC456ACFCB2DE4A344E * get_U3CproviderU3Ek__BackingField_3() const { return ___U3CproviderU3Ek__BackingField_3; }
	inline Provider_t1D0BC515976D24FD30341AC456ACFCB2DE4A344E ** get_address_of_U3CproviderU3Ek__BackingField_3() { return &___U3CproviderU3Ek__BackingField_3; }
	inline void set_U3CproviderU3Ek__BackingField_3(Provider_t1D0BC515976D24FD30341AC456ACFCB2DE4A344E * value)
	{
		___U3CproviderU3Ek__BackingField_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CproviderU3Ek__BackingField_3), (void*)value);
	}
};


// UnityEngine.SubsystemsImplementation.SubsystemWithProvider`3<UnityEngine.XR.ARSubsystems.XRPlaneSubsystem,UnityEngine.XR.ARSubsystems.XRPlaneSubsystemDescriptor,UnityEngine.XR.ARSubsystems.XRPlaneSubsystem/Provider>
struct  SubsystemWithProvider_3_t2D48685843F3C8CD4AE71F1303F357DCAE9FD683  : public SubsystemWithProvider_t1C1868CF8676F5596C1AD20A7CE69BDF7C7DE73E
{
public:
	// TSubsystemDescriptor UnityEngine.SubsystemsImplementation.SubsystemWithProvider`3::<subsystemDescriptor>k__BackingField
	XRPlaneSubsystemDescriptor_t98B66B6D99804656DDDB45C9BDA61C2EE4EDB483 * ___U3CsubsystemDescriptorU3Ek__BackingField_2;
	// TProvider UnityEngine.SubsystemsImplementation.SubsystemWithProvider`3::<provider>k__BackingField
	Provider_t6CB5B1036B0AAED1379F3828D695A6942B72BA12 * ___U3CproviderU3Ek__BackingField_3;

public:
	inline static int32_t get_offset_of_U3CsubsystemDescriptorU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(SubsystemWithProvider_3_t2D48685843F3C8CD4AE71F1303F357DCAE9FD683, ___U3CsubsystemDescriptorU3Ek__BackingField_2)); }
	inline XRPlaneSubsystemDescriptor_t98B66B6D99804656DDDB45C9BDA61C2EE4EDB483 * get_U3CsubsystemDescriptorU3Ek__BackingField_2() const { return ___U3CsubsystemDescriptorU3Ek__BackingField_2; }
	inline XRPlaneSubsystemDescriptor_t98B66B6D99804656DDDB45C9BDA61C2EE4EDB483 ** get_address_of_U3CsubsystemDescriptorU3Ek__BackingField_2() { return &___U3CsubsystemDescriptorU3Ek__BackingField_2; }
	inline void set_U3CsubsystemDescriptorU3Ek__BackingField_2(XRPlaneSubsystemDescriptor_t98B66B6D99804656DDDB45C9BDA61C2EE4EDB483 * value)
	{
		___U3CsubsystemDescriptorU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CsubsystemDescriptorU3Ek__BackingField_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CproviderU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(SubsystemWithProvider_3_t2D48685843F3C8CD4AE71F1303F357DCAE9FD683, ___U3CproviderU3Ek__BackingField_3)); }
	inline Provider_t6CB5B1036B0AAED1379F3828D695A6942B72BA12 * get_U3CproviderU3Ek__BackingField_3() const { return ___U3CproviderU3Ek__BackingField_3; }
	inline Provider_t6CB5B1036B0AAED1379F3828D695A6942B72BA12 ** get_address_of_U3CproviderU3Ek__BackingField_3() { return &___U3CproviderU3Ek__BackingField_3; }
	inline void set_U3CproviderU3Ek__BackingField_3(Provider_t6CB5B1036B0AAED1379F3828D695A6942B72BA12 * value)
	{
		___U3CproviderU3Ek__BackingField_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CproviderU3Ek__BackingField_3), (void*)value);
	}
};


// UnityEngine.SubsystemsImplementation.SubsystemWithProvider`3<UnityEngine.XR.ARSubsystems.XRRaycastSubsystem,UnityEngine.XR.ARSubsystems.XRRaycastSubsystemDescriptor,UnityEngine.XR.ARSubsystems.XRRaycastSubsystem/Provider>
struct  SubsystemWithProvider_3_t6C72A4BB6DC4A9CC6B00E99D4A5EF1E1C9BBAF1E  : public SubsystemWithProvider_t1C1868CF8676F5596C1AD20A7CE69BDF7C7DE73E
{
public:
	// TSubsystemDescriptor UnityEngine.SubsystemsImplementation.SubsystemWithProvider`3::<subsystemDescriptor>k__BackingField
	XRRaycastSubsystemDescriptor_tB9891F63FC4871797BCD04DB7167142BE2049B2C * ___U3CsubsystemDescriptorU3Ek__BackingField_2;
	// TProvider UnityEngine.SubsystemsImplementation.SubsystemWithProvider`3::<provider>k__BackingField
	Provider_tF185BE0541D2066CD242583CEFE7709DD22DD227 * ___U3CproviderU3Ek__BackingField_3;

public:
	inline static int32_t get_offset_of_U3CsubsystemDescriptorU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(SubsystemWithProvider_3_t6C72A4BB6DC4A9CC6B00E99D4A5EF1E1C9BBAF1E, ___U3CsubsystemDescriptorU3Ek__BackingField_2)); }
	inline XRRaycastSubsystemDescriptor_tB9891F63FC4871797BCD04DB7167142BE2049B2C * get_U3CsubsystemDescriptorU3Ek__BackingField_2() const { return ___U3CsubsystemDescriptorU3Ek__BackingField_2; }
	inline XRRaycastSubsystemDescriptor_tB9891F63FC4871797BCD04DB7167142BE2049B2C ** get_address_of_U3CsubsystemDescriptorU3Ek__BackingField_2() { return &___U3CsubsystemDescriptorU3Ek__BackingField_2; }
	inline void set_U3CsubsystemDescriptorU3Ek__BackingField_2(XRRaycastSubsystemDescriptor_tB9891F63FC4871797BCD04DB7167142BE2049B2C * value)
	{
		___U3CsubsystemDescriptorU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CsubsystemDescriptorU3Ek__BackingField_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CproviderU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(SubsystemWithProvider_3_t6C72A4BB6DC4A9CC6B00E99D4A5EF1E1C9BBAF1E, ___U3CproviderU3Ek__BackingField_3)); }
	inline Provider_tF185BE0541D2066CD242583CEFE7709DD22DD227 * get_U3CproviderU3Ek__BackingField_3() const { return ___U3CproviderU3Ek__BackingField_3; }
	inline Provider_tF185BE0541D2066CD242583CEFE7709DD22DD227 ** get_address_of_U3CproviderU3Ek__BackingField_3() { return &___U3CproviderU3Ek__BackingField_3; }
	inline void set_U3CproviderU3Ek__BackingField_3(Provider_tF185BE0541D2066CD242583CEFE7709DD22DD227 * value)
	{
		___U3CproviderU3Ek__BackingField_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CproviderU3Ek__BackingField_3), (void*)value);
	}
};


// UnityEngine.SubsystemsImplementation.SubsystemWithProvider`3<UnityEngine.XR.ARSubsystems.XRSessionSubsystem,UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor,UnityEngine.XR.ARSubsystems.XRSessionSubsystem/Provider>
struct  SubsystemWithProvider_3_t646DFCE31181130FB557E4AFA37198CF3170977F  : public SubsystemWithProvider_t1C1868CF8676F5596C1AD20A7CE69BDF7C7DE73E
{
public:
	// TSubsystemDescriptor UnityEngine.SubsystemsImplementation.SubsystemWithProvider`3::<subsystemDescriptor>k__BackingField
	XRSessionSubsystemDescriptor_tC45A49D1179090D5C6D3B3DC1DC31CAB5A627B1C * ___U3CsubsystemDescriptorU3Ek__BackingField_2;
	// TProvider UnityEngine.SubsystemsImplementation.SubsystemWithProvider`3::<provider>k__BackingField
	Provider_t4C3675997BB8AF3A6A32C3EC3C93C10E4D3E8D1A * ___U3CproviderU3Ek__BackingField_3;

public:
	inline static int32_t get_offset_of_U3CsubsystemDescriptorU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(SubsystemWithProvider_3_t646DFCE31181130FB557E4AFA37198CF3170977F, ___U3CsubsystemDescriptorU3Ek__BackingField_2)); }
	inline XRSessionSubsystemDescriptor_tC45A49D1179090D5C6D3B3DC1DC31CAB5A627B1C * get_U3CsubsystemDescriptorU3Ek__BackingField_2() const { return ___U3CsubsystemDescriptorU3Ek__BackingField_2; }
	inline XRSessionSubsystemDescriptor_tC45A49D1179090D5C6D3B3DC1DC31CAB5A627B1C ** get_address_of_U3CsubsystemDescriptorU3Ek__BackingField_2() { return &___U3CsubsystemDescriptorU3Ek__BackingField_2; }
	inline void set_U3CsubsystemDescriptorU3Ek__BackingField_2(XRSessionSubsystemDescriptor_tC45A49D1179090D5C6D3B3DC1DC31CAB5A627B1C * value)
	{
		___U3CsubsystemDescriptorU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CsubsystemDescriptorU3Ek__BackingField_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CproviderU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(SubsystemWithProvider_3_t646DFCE31181130FB557E4AFA37198CF3170977F, ___U3CproviderU3Ek__BackingField_3)); }
	inline Provider_t4C3675997BB8AF3A6A32C3EC3C93C10E4D3E8D1A * get_U3CproviderU3Ek__BackingField_3() const { return ___U3CproviderU3Ek__BackingField_3; }
	inline Provider_t4C3675997BB8AF3A6A32C3EC3C93C10E4D3E8D1A ** get_address_of_U3CproviderU3Ek__BackingField_3() { return &___U3CproviderU3Ek__BackingField_3; }
	inline void set_U3CproviderU3Ek__BackingField_3(Provider_t4C3675997BB8AF3A6A32C3EC3C93C10E4D3E8D1A * value)
	{
		___U3CproviderU3Ek__BackingField_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CproviderU3Ek__BackingField_3), (void*)value);
	}
};


// UnityEngine.XR.ARKit.ARKitCpuImageApi
struct  ARKitCpuImageApi_tD94B983FBF13116F7497F2089555084CCAC47D59  : public Api_t7C92F00C6416A2C636A44AAC833C3773C567DC3E
{
public:

public:
};

struct ARKitCpuImageApi_tD94B983FBF13116F7497F2089555084CCAC47D59_StaticFields
{
public:
	// UnityEngine.XR.ARKit.ARKitCpuImageApi UnityEngine.XR.ARKit.ARKitCpuImageApi::<instance>k__BackingField
	ARKitCpuImageApi_tD94B983FBF13116F7497F2089555084CCAC47D59 * ___U3CinstanceU3Ek__BackingField_0;
	// System.Collections.Generic.HashSet`1<UnityEngine.TextureFormat> UnityEngine.XR.ARKit.ARKitCpuImageApi::s_SupportedVideoConversionFormats
	HashSet_1_t7981318DC35BC53AD64634B2D643DD6055A39054 * ___s_SupportedVideoConversionFormats_1;

public:
	inline static int32_t get_offset_of_U3CinstanceU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(ARKitCpuImageApi_tD94B983FBF13116F7497F2089555084CCAC47D59_StaticFields, ___U3CinstanceU3Ek__BackingField_0)); }
	inline ARKitCpuImageApi_tD94B983FBF13116F7497F2089555084CCAC47D59 * get_U3CinstanceU3Ek__BackingField_0() const { return ___U3CinstanceU3Ek__BackingField_0; }
	inline ARKitCpuImageApi_tD94B983FBF13116F7497F2089555084CCAC47D59 ** get_address_of_U3CinstanceU3Ek__BackingField_0() { return &___U3CinstanceU3Ek__BackingField_0; }
	inline void set_U3CinstanceU3Ek__BackingField_0(ARKitCpuImageApi_tD94B983FBF13116F7497F2089555084CCAC47D59 * value)
	{
		___U3CinstanceU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CinstanceU3Ek__BackingField_0), (void*)value);
	}

	inline static int32_t get_offset_of_s_SupportedVideoConversionFormats_1() { return static_cast<int32_t>(offsetof(ARKitCpuImageApi_tD94B983FBF13116F7497F2089555084CCAC47D59_StaticFields, ___s_SupportedVideoConversionFormats_1)); }
	inline HashSet_1_t7981318DC35BC53AD64634B2D643DD6055A39054 * get_s_SupportedVideoConversionFormats_1() const { return ___s_SupportedVideoConversionFormats_1; }
	inline HashSet_1_t7981318DC35BC53AD64634B2D643DD6055A39054 ** get_address_of_s_SupportedVideoConversionFormats_1() { return &___s_SupportedVideoConversionFormats_1; }
	inline void set_s_SupportedVideoConversionFormats_1(HashSet_1_t7981318DC35BC53AD64634B2D643DD6055A39054 * value)
	{
		___s_SupportedVideoConversionFormats_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_SupportedVideoConversionFormats_1), (void*)value);
	}
};


// UnityEngine.XR.ARKit.ARWorldMap
struct  ARWorldMap_t90151C78B15487234BE2E76D169DA191819704A2 
{
public:
	// System.Int32 UnityEngine.XR.ARKit.ARWorldMap::<nativeHandle>k__BackingField
	int32_t ___U3CnativeHandleU3Ek__BackingField_0;

public:
	inline static int32_t get_offset_of_U3CnativeHandleU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(ARWorldMap_t90151C78B15487234BE2E76D169DA191819704A2, ___U3CnativeHandleU3Ek__BackingField_0)); }
	inline int32_t get_U3CnativeHandleU3Ek__BackingField_0() const { return ___U3CnativeHandleU3Ek__BackingField_0; }
	inline int32_t* get_address_of_U3CnativeHandleU3Ek__BackingField_0() { return &___U3CnativeHandleU3Ek__BackingField_0; }
	inline void set_U3CnativeHandleU3Ek__BackingField_0(int32_t value)
	{
		___U3CnativeHandleU3Ek__BackingField_0 = value;
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


// Microsoft.CodeAnalysis.EmbeddedAttribute
struct  EmbeddedAttribute_t05629E57A0E96598455481383D6D826715328F7C  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:

public:
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

// System.Runtime.InteropServices.GCHandle
struct  GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603 
{
public:
	// System.Int32 System.Runtime.InteropServices.GCHandle::handle
	int32_t ___handle_0;

public:
	inline static int32_t get_offset_of_handle_0() { return static_cast<int32_t>(offsetof(GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603, ___handle_0)); }
	inline int32_t get_handle_0() const { return ___handle_0; }
	inline int32_t* get_address_of_handle_0() { return &___handle_0; }
	inline void set_handle_0(int32_t value)
	{
		___handle_0 = value;
	}
};


// System.Guid
struct  Guid_t 
{
public:
	// System.Int32 System.Guid::_a
	int32_t ____a_1;
	// System.Int16 System.Guid::_b
	int16_t ____b_2;
	// System.Int16 System.Guid::_c
	int16_t ____c_3;
	// System.Byte System.Guid::_d
	uint8_t ____d_4;
	// System.Byte System.Guid::_e
	uint8_t ____e_5;
	// System.Byte System.Guid::_f
	uint8_t ____f_6;
	// System.Byte System.Guid::_g
	uint8_t ____g_7;
	// System.Byte System.Guid::_h
	uint8_t ____h_8;
	// System.Byte System.Guid::_i
	uint8_t ____i_9;
	// System.Byte System.Guid::_j
	uint8_t ____j_10;
	// System.Byte System.Guid::_k
	uint8_t ____k_11;

public:
	inline static int32_t get_offset_of__a_1() { return static_cast<int32_t>(offsetof(Guid_t, ____a_1)); }
	inline int32_t get__a_1() const { return ____a_1; }
	inline int32_t* get_address_of__a_1() { return &____a_1; }
	inline void set__a_1(int32_t value)
	{
		____a_1 = value;
	}

	inline static int32_t get_offset_of__b_2() { return static_cast<int32_t>(offsetof(Guid_t, ____b_2)); }
	inline int16_t get__b_2() const { return ____b_2; }
	inline int16_t* get_address_of__b_2() { return &____b_2; }
	inline void set__b_2(int16_t value)
	{
		____b_2 = value;
	}

	inline static int32_t get_offset_of__c_3() { return static_cast<int32_t>(offsetof(Guid_t, ____c_3)); }
	inline int16_t get__c_3() const { return ____c_3; }
	inline int16_t* get_address_of__c_3() { return &____c_3; }
	inline void set__c_3(int16_t value)
	{
		____c_3 = value;
	}

	inline static int32_t get_offset_of__d_4() { return static_cast<int32_t>(offsetof(Guid_t, ____d_4)); }
	inline uint8_t get__d_4() const { return ____d_4; }
	inline uint8_t* get_address_of__d_4() { return &____d_4; }
	inline void set__d_4(uint8_t value)
	{
		____d_4 = value;
	}

	inline static int32_t get_offset_of__e_5() { return static_cast<int32_t>(offsetof(Guid_t, ____e_5)); }
	inline uint8_t get__e_5() const { return ____e_5; }
	inline uint8_t* get_address_of__e_5() { return &____e_5; }
	inline void set__e_5(uint8_t value)
	{
		____e_5 = value;
	}

	inline static int32_t get_offset_of__f_6() { return static_cast<int32_t>(offsetof(Guid_t, ____f_6)); }
	inline uint8_t get__f_6() const { return ____f_6; }
	inline uint8_t* get_address_of__f_6() { return &____f_6; }
	inline void set__f_6(uint8_t value)
	{
		____f_6 = value;
	}

	inline static int32_t get_offset_of__g_7() { return static_cast<int32_t>(offsetof(Guid_t, ____g_7)); }
	inline uint8_t get__g_7() const { return ____g_7; }
	inline uint8_t* get_address_of__g_7() { return &____g_7; }
	inline void set__g_7(uint8_t value)
	{
		____g_7 = value;
	}

	inline static int32_t get_offset_of__h_8() { return static_cast<int32_t>(offsetof(Guid_t, ____h_8)); }
	inline uint8_t get__h_8() const { return ____h_8; }
	inline uint8_t* get_address_of__h_8() { return &____h_8; }
	inline void set__h_8(uint8_t value)
	{
		____h_8 = value;
	}

	inline static int32_t get_offset_of__i_9() { return static_cast<int32_t>(offsetof(Guid_t, ____i_9)); }
	inline uint8_t get__i_9() const { return ____i_9; }
	inline uint8_t* get_address_of__i_9() { return &____i_9; }
	inline void set__i_9(uint8_t value)
	{
		____i_9 = value;
	}

	inline static int32_t get_offset_of__j_10() { return static_cast<int32_t>(offsetof(Guid_t, ____j_10)); }
	inline uint8_t get__j_10() const { return ____j_10; }
	inline uint8_t* get_address_of__j_10() { return &____j_10; }
	inline void set__j_10(uint8_t value)
	{
		____j_10 = value;
	}

	inline static int32_t get_offset_of__k_11() { return static_cast<int32_t>(offsetof(Guid_t, ____k_11)); }
	inline uint8_t get__k_11() const { return ____k_11; }
	inline uint8_t* get_address_of__k_11() { return &____k_11; }
	inline void set__k_11(uint8_t value)
	{
		____k_11 = value;
	}
};

struct Guid_t_StaticFields
{
public:
	// System.Guid System.Guid::Empty
	Guid_t  ___Empty_0;
	// System.Object System.Guid::_rngAccess
	RuntimeObject * ____rngAccess_12;
	// System.Security.Cryptography.RandomNumberGenerator System.Guid::_rng
	RandomNumberGenerator_t2CB5440F189986116A2FA9F907AE52644047AC50 * ____rng_13;
	// System.Security.Cryptography.RandomNumberGenerator System.Guid::_fastRng
	RandomNumberGenerator_t2CB5440F189986116A2FA9F907AE52644047AC50 * ____fastRng_14;

public:
	inline static int32_t get_offset_of_Empty_0() { return static_cast<int32_t>(offsetof(Guid_t_StaticFields, ___Empty_0)); }
	inline Guid_t  get_Empty_0() const { return ___Empty_0; }
	inline Guid_t * get_address_of_Empty_0() { return &___Empty_0; }
	inline void set_Empty_0(Guid_t  value)
	{
		___Empty_0 = value;
	}

	inline static int32_t get_offset_of__rngAccess_12() { return static_cast<int32_t>(offsetof(Guid_t_StaticFields, ____rngAccess_12)); }
	inline RuntimeObject * get__rngAccess_12() const { return ____rngAccess_12; }
	inline RuntimeObject ** get_address_of__rngAccess_12() { return &____rngAccess_12; }
	inline void set__rngAccess_12(RuntimeObject * value)
	{
		____rngAccess_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____rngAccess_12), (void*)value);
	}

	inline static int32_t get_offset_of__rng_13() { return static_cast<int32_t>(offsetof(Guid_t_StaticFields, ____rng_13)); }
	inline RandomNumberGenerator_t2CB5440F189986116A2FA9F907AE52644047AC50 * get__rng_13() const { return ____rng_13; }
	inline RandomNumberGenerator_t2CB5440F189986116A2FA9F907AE52644047AC50 ** get_address_of__rng_13() { return &____rng_13; }
	inline void set__rng_13(RandomNumberGenerator_t2CB5440F189986116A2FA9F907AE52644047AC50 * value)
	{
		____rng_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____rng_13), (void*)value);
	}

	inline static int32_t get_offset_of__fastRng_14() { return static_cast<int32_t>(offsetof(Guid_t_StaticFields, ____fastRng_14)); }
	inline RandomNumberGenerator_t2CB5440F189986116A2FA9F907AE52644047AC50 * get__fastRng_14() const { return ____fastRng_14; }
	inline RandomNumberGenerator_t2CB5440F189986116A2FA9F907AE52644047AC50 ** get_address_of__fastRng_14() { return &____fastRng_14; }
	inline void set__fastRng_14(RandomNumberGenerator_t2CB5440F189986116A2FA9F907AE52644047AC50 * value)
	{
		____fastRng_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____fastRng_14), (void*)value);
	}
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


// System.Runtime.CompilerServices.IsReadOnlyAttribute
struct  IsReadOnlyAttribute_t49E064784AB175290B77B6E6137930BE53B124B9  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:

public:
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


// UnityEngine.XR.ARSubsystems.MutableRuntimeReferenceImageLibrary
struct  MutableRuntimeReferenceImageLibrary_t887376CE46B48DEEC6E8655D429BADCA6E3C7EAA  : public RuntimeReferenceImageLibrary_t76072EC5637B1F0F8FD0A1BFD3AEAF954D6F8D6B
{
public:

public:
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


// UnityEngine.Vector2Int
struct  Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9 
{
public:
	// System.Int32 UnityEngine.Vector2Int::m_X
	int32_t ___m_X_0;
	// System.Int32 UnityEngine.Vector2Int::m_Y
	int32_t ___m_Y_1;

public:
	inline static int32_t get_offset_of_m_X_0() { return static_cast<int32_t>(offsetof(Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9, ___m_X_0)); }
	inline int32_t get_m_X_0() const { return ___m_X_0; }
	inline int32_t* get_address_of_m_X_0() { return &___m_X_0; }
	inline void set_m_X_0(int32_t value)
	{
		___m_X_0 = value;
	}

	inline static int32_t get_offset_of_m_Y_1() { return static_cast<int32_t>(offsetof(Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9, ___m_Y_1)); }
	inline int32_t get_m_Y_1() const { return ___m_Y_1; }
	inline int32_t* get_address_of_m_Y_1() { return &___m_Y_1; }
	inline void set_m_Y_1(int32_t value)
	{
		___m_Y_1 = value;
	}
};

struct Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9_StaticFields
{
public:
	// UnityEngine.Vector2Int UnityEngine.Vector2Int::s_Zero
	Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  ___s_Zero_2;
	// UnityEngine.Vector2Int UnityEngine.Vector2Int::s_One
	Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  ___s_One_3;
	// UnityEngine.Vector2Int UnityEngine.Vector2Int::s_Up
	Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  ___s_Up_4;
	// UnityEngine.Vector2Int UnityEngine.Vector2Int::s_Down
	Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  ___s_Down_5;
	// UnityEngine.Vector2Int UnityEngine.Vector2Int::s_Left
	Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  ___s_Left_6;
	// UnityEngine.Vector2Int UnityEngine.Vector2Int::s_Right
	Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  ___s_Right_7;

public:
	inline static int32_t get_offset_of_s_Zero_2() { return static_cast<int32_t>(offsetof(Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9_StaticFields, ___s_Zero_2)); }
	inline Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  get_s_Zero_2() const { return ___s_Zero_2; }
	inline Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9 * get_address_of_s_Zero_2() { return &___s_Zero_2; }
	inline void set_s_Zero_2(Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  value)
	{
		___s_Zero_2 = value;
	}

	inline static int32_t get_offset_of_s_One_3() { return static_cast<int32_t>(offsetof(Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9_StaticFields, ___s_One_3)); }
	inline Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  get_s_One_3() const { return ___s_One_3; }
	inline Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9 * get_address_of_s_One_3() { return &___s_One_3; }
	inline void set_s_One_3(Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  value)
	{
		___s_One_3 = value;
	}

	inline static int32_t get_offset_of_s_Up_4() { return static_cast<int32_t>(offsetof(Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9_StaticFields, ___s_Up_4)); }
	inline Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  get_s_Up_4() const { return ___s_Up_4; }
	inline Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9 * get_address_of_s_Up_4() { return &___s_Up_4; }
	inline void set_s_Up_4(Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  value)
	{
		___s_Up_4 = value;
	}

	inline static int32_t get_offset_of_s_Down_5() { return static_cast<int32_t>(offsetof(Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9_StaticFields, ___s_Down_5)); }
	inline Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  get_s_Down_5() const { return ___s_Down_5; }
	inline Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9 * get_address_of_s_Down_5() { return &___s_Down_5; }
	inline void set_s_Down_5(Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  value)
	{
		___s_Down_5 = value;
	}

	inline static int32_t get_offset_of_s_Left_6() { return static_cast<int32_t>(offsetof(Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9_StaticFields, ___s_Left_6)); }
	inline Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  get_s_Left_6() const { return ___s_Left_6; }
	inline Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9 * get_address_of_s_Left_6() { return &___s_Left_6; }
	inline void set_s_Left_6(Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  value)
	{
		___s_Left_6 = value;
	}

	inline static int32_t get_offset_of_s_Right_7() { return static_cast<int32_t>(offsetof(Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9_StaticFields, ___s_Right_7)); }
	inline Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  get_s_Right_7() const { return ___s_Right_7; }
	inline Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9 * get_address_of_s_Right_7() { return &___s_Right_7; }
	inline void set_s_Right_7(Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  value)
	{
		___s_Right_7 = value;
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


// UnityEngine.XR.ARSubsystems.XRCameraSubsystemCinfo
struct  XRCameraSubsystemCinfo_tFC7E8E15AD29D15868FBCE758A26ADCB5E9A5096 
{
public:
	// System.String UnityEngine.XR.ARSubsystems.XRCameraSubsystemCinfo::<id>k__BackingField
	String_t* ___U3CidU3Ek__BackingField_0;
	// System.Type UnityEngine.XR.ARSubsystems.XRCameraSubsystemCinfo::<providerType>k__BackingField
	Type_t * ___U3CproviderTypeU3Ek__BackingField_1;
	// System.Type UnityEngine.XR.ARSubsystems.XRCameraSubsystemCinfo::<subsystemTypeOverride>k__BackingField
	Type_t * ___U3CsubsystemTypeOverrideU3Ek__BackingField_2;
	// System.Type UnityEngine.XR.ARSubsystems.XRCameraSubsystemCinfo::<implementationType>k__BackingField
	Type_t * ___U3CimplementationTypeU3Ek__BackingField_3;
	// System.Boolean UnityEngine.XR.ARSubsystems.XRCameraSubsystemCinfo::<supportsAverageBrightness>k__BackingField
	bool ___U3CsupportsAverageBrightnessU3Ek__BackingField_4;
	// System.Boolean UnityEngine.XR.ARSubsystems.XRCameraSubsystemCinfo::<supportsAverageColorTemperature>k__BackingField
	bool ___U3CsupportsAverageColorTemperatureU3Ek__BackingField_5;
	// System.Boolean UnityEngine.XR.ARSubsystems.XRCameraSubsystemCinfo::<supportsColorCorrection>k__BackingField
	bool ___U3CsupportsColorCorrectionU3Ek__BackingField_6;
	// System.Boolean UnityEngine.XR.ARSubsystems.XRCameraSubsystemCinfo::<supportsDisplayMatrix>k__BackingField
	bool ___U3CsupportsDisplayMatrixU3Ek__BackingField_7;
	// System.Boolean UnityEngine.XR.ARSubsystems.XRCameraSubsystemCinfo::<supportsProjectionMatrix>k__BackingField
	bool ___U3CsupportsProjectionMatrixU3Ek__BackingField_8;
	// System.Boolean UnityEngine.XR.ARSubsystems.XRCameraSubsystemCinfo::<supportsTimestamp>k__BackingField
	bool ___U3CsupportsTimestampU3Ek__BackingField_9;
	// System.Boolean UnityEngine.XR.ARSubsystems.XRCameraSubsystemCinfo::<supportsCameraConfigurations>k__BackingField
	bool ___U3CsupportsCameraConfigurationsU3Ek__BackingField_10;
	// System.Boolean UnityEngine.XR.ARSubsystems.XRCameraSubsystemCinfo::<supportsCameraImage>k__BackingField
	bool ___U3CsupportsCameraImageU3Ek__BackingField_11;
	// System.Boolean UnityEngine.XR.ARSubsystems.XRCameraSubsystemCinfo::<supportsAverageIntensityInLumens>k__BackingField
	bool ___U3CsupportsAverageIntensityInLumensU3Ek__BackingField_12;
	// System.Boolean UnityEngine.XR.ARSubsystems.XRCameraSubsystemCinfo::<supportsFaceTrackingAmbientIntensityLightEstimation>k__BackingField
	bool ___U3CsupportsFaceTrackingAmbientIntensityLightEstimationU3Ek__BackingField_13;
	// System.Boolean UnityEngine.XR.ARSubsystems.XRCameraSubsystemCinfo::<supportsFaceTrackingHDRLightEstimation>k__BackingField
	bool ___U3CsupportsFaceTrackingHDRLightEstimationU3Ek__BackingField_14;
	// System.Boolean UnityEngine.XR.ARSubsystems.XRCameraSubsystemCinfo::<supportsWorldTrackingAmbientIntensityLightEstimation>k__BackingField
	bool ___U3CsupportsWorldTrackingAmbientIntensityLightEstimationU3Ek__BackingField_15;
	// System.Boolean UnityEngine.XR.ARSubsystems.XRCameraSubsystemCinfo::<supportsWorldTrackingHDRLightEstimation>k__BackingField
	bool ___U3CsupportsWorldTrackingHDRLightEstimationU3Ek__BackingField_16;
	// System.Boolean UnityEngine.XR.ARSubsystems.XRCameraSubsystemCinfo::<supportsFocusModes>k__BackingField
	bool ___U3CsupportsFocusModesU3Ek__BackingField_17;
	// System.Boolean UnityEngine.XR.ARSubsystems.XRCameraSubsystemCinfo::<supportsCameraGrain>k__BackingField
	bool ___U3CsupportsCameraGrainU3Ek__BackingField_18;

public:
	inline static int32_t get_offset_of_U3CidU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(XRCameraSubsystemCinfo_tFC7E8E15AD29D15868FBCE758A26ADCB5E9A5096, ___U3CidU3Ek__BackingField_0)); }
	inline String_t* get_U3CidU3Ek__BackingField_0() const { return ___U3CidU3Ek__BackingField_0; }
	inline String_t** get_address_of_U3CidU3Ek__BackingField_0() { return &___U3CidU3Ek__BackingField_0; }
	inline void set_U3CidU3Ek__BackingField_0(String_t* value)
	{
		___U3CidU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CidU3Ek__BackingField_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CproviderTypeU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(XRCameraSubsystemCinfo_tFC7E8E15AD29D15868FBCE758A26ADCB5E9A5096, ___U3CproviderTypeU3Ek__BackingField_1)); }
	inline Type_t * get_U3CproviderTypeU3Ek__BackingField_1() const { return ___U3CproviderTypeU3Ek__BackingField_1; }
	inline Type_t ** get_address_of_U3CproviderTypeU3Ek__BackingField_1() { return &___U3CproviderTypeU3Ek__BackingField_1; }
	inline void set_U3CproviderTypeU3Ek__BackingField_1(Type_t * value)
	{
		___U3CproviderTypeU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CproviderTypeU3Ek__BackingField_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CsubsystemTypeOverrideU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(XRCameraSubsystemCinfo_tFC7E8E15AD29D15868FBCE758A26ADCB5E9A5096, ___U3CsubsystemTypeOverrideU3Ek__BackingField_2)); }
	inline Type_t * get_U3CsubsystemTypeOverrideU3Ek__BackingField_2() const { return ___U3CsubsystemTypeOverrideU3Ek__BackingField_2; }
	inline Type_t ** get_address_of_U3CsubsystemTypeOverrideU3Ek__BackingField_2() { return &___U3CsubsystemTypeOverrideU3Ek__BackingField_2; }
	inline void set_U3CsubsystemTypeOverrideU3Ek__BackingField_2(Type_t * value)
	{
		___U3CsubsystemTypeOverrideU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CsubsystemTypeOverrideU3Ek__BackingField_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CimplementationTypeU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(XRCameraSubsystemCinfo_tFC7E8E15AD29D15868FBCE758A26ADCB5E9A5096, ___U3CimplementationTypeU3Ek__BackingField_3)); }
	inline Type_t * get_U3CimplementationTypeU3Ek__BackingField_3() const { return ___U3CimplementationTypeU3Ek__BackingField_3; }
	inline Type_t ** get_address_of_U3CimplementationTypeU3Ek__BackingField_3() { return &___U3CimplementationTypeU3Ek__BackingField_3; }
	inline void set_U3CimplementationTypeU3Ek__BackingField_3(Type_t * value)
	{
		___U3CimplementationTypeU3Ek__BackingField_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CimplementationTypeU3Ek__BackingField_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3CsupportsAverageBrightnessU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(XRCameraSubsystemCinfo_tFC7E8E15AD29D15868FBCE758A26ADCB5E9A5096, ___U3CsupportsAverageBrightnessU3Ek__BackingField_4)); }
	inline bool get_U3CsupportsAverageBrightnessU3Ek__BackingField_4() const { return ___U3CsupportsAverageBrightnessU3Ek__BackingField_4; }
	inline bool* get_address_of_U3CsupportsAverageBrightnessU3Ek__BackingField_4() { return &___U3CsupportsAverageBrightnessU3Ek__BackingField_4; }
	inline void set_U3CsupportsAverageBrightnessU3Ek__BackingField_4(bool value)
	{
		___U3CsupportsAverageBrightnessU3Ek__BackingField_4 = value;
	}

	inline static int32_t get_offset_of_U3CsupportsAverageColorTemperatureU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(XRCameraSubsystemCinfo_tFC7E8E15AD29D15868FBCE758A26ADCB5E9A5096, ___U3CsupportsAverageColorTemperatureU3Ek__BackingField_5)); }
	inline bool get_U3CsupportsAverageColorTemperatureU3Ek__BackingField_5() const { return ___U3CsupportsAverageColorTemperatureU3Ek__BackingField_5; }
	inline bool* get_address_of_U3CsupportsAverageColorTemperatureU3Ek__BackingField_5() { return &___U3CsupportsAverageColorTemperatureU3Ek__BackingField_5; }
	inline void set_U3CsupportsAverageColorTemperatureU3Ek__BackingField_5(bool value)
	{
		___U3CsupportsAverageColorTemperatureU3Ek__BackingField_5 = value;
	}

	inline static int32_t get_offset_of_U3CsupportsColorCorrectionU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(XRCameraSubsystemCinfo_tFC7E8E15AD29D15868FBCE758A26ADCB5E9A5096, ___U3CsupportsColorCorrectionU3Ek__BackingField_6)); }
	inline bool get_U3CsupportsColorCorrectionU3Ek__BackingField_6() const { return ___U3CsupportsColorCorrectionU3Ek__BackingField_6; }
	inline bool* get_address_of_U3CsupportsColorCorrectionU3Ek__BackingField_6() { return &___U3CsupportsColorCorrectionU3Ek__BackingField_6; }
	inline void set_U3CsupportsColorCorrectionU3Ek__BackingField_6(bool value)
	{
		___U3CsupportsColorCorrectionU3Ek__BackingField_6 = value;
	}

	inline static int32_t get_offset_of_U3CsupportsDisplayMatrixU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(XRCameraSubsystemCinfo_tFC7E8E15AD29D15868FBCE758A26ADCB5E9A5096, ___U3CsupportsDisplayMatrixU3Ek__BackingField_7)); }
	inline bool get_U3CsupportsDisplayMatrixU3Ek__BackingField_7() const { return ___U3CsupportsDisplayMatrixU3Ek__BackingField_7; }
	inline bool* get_address_of_U3CsupportsDisplayMatrixU3Ek__BackingField_7() { return &___U3CsupportsDisplayMatrixU3Ek__BackingField_7; }
	inline void set_U3CsupportsDisplayMatrixU3Ek__BackingField_7(bool value)
	{
		___U3CsupportsDisplayMatrixU3Ek__BackingField_7 = value;
	}

	inline static int32_t get_offset_of_U3CsupportsProjectionMatrixU3Ek__BackingField_8() { return static_cast<int32_t>(offsetof(XRCameraSubsystemCinfo_tFC7E8E15AD29D15868FBCE758A26ADCB5E9A5096, ___U3CsupportsProjectionMatrixU3Ek__BackingField_8)); }
	inline bool get_U3CsupportsProjectionMatrixU3Ek__BackingField_8() const { return ___U3CsupportsProjectionMatrixU3Ek__BackingField_8; }
	inline bool* get_address_of_U3CsupportsProjectionMatrixU3Ek__BackingField_8() { return &___U3CsupportsProjectionMatrixU3Ek__BackingField_8; }
	inline void set_U3CsupportsProjectionMatrixU3Ek__BackingField_8(bool value)
	{
		___U3CsupportsProjectionMatrixU3Ek__BackingField_8 = value;
	}

	inline static int32_t get_offset_of_U3CsupportsTimestampU3Ek__BackingField_9() { return static_cast<int32_t>(offsetof(XRCameraSubsystemCinfo_tFC7E8E15AD29D15868FBCE758A26ADCB5E9A5096, ___U3CsupportsTimestampU3Ek__BackingField_9)); }
	inline bool get_U3CsupportsTimestampU3Ek__BackingField_9() const { return ___U3CsupportsTimestampU3Ek__BackingField_9; }
	inline bool* get_address_of_U3CsupportsTimestampU3Ek__BackingField_9() { return &___U3CsupportsTimestampU3Ek__BackingField_9; }
	inline void set_U3CsupportsTimestampU3Ek__BackingField_9(bool value)
	{
		___U3CsupportsTimestampU3Ek__BackingField_9 = value;
	}

	inline static int32_t get_offset_of_U3CsupportsCameraConfigurationsU3Ek__BackingField_10() { return static_cast<int32_t>(offsetof(XRCameraSubsystemCinfo_tFC7E8E15AD29D15868FBCE758A26ADCB5E9A5096, ___U3CsupportsCameraConfigurationsU3Ek__BackingField_10)); }
	inline bool get_U3CsupportsCameraConfigurationsU3Ek__BackingField_10() const { return ___U3CsupportsCameraConfigurationsU3Ek__BackingField_10; }
	inline bool* get_address_of_U3CsupportsCameraConfigurationsU3Ek__BackingField_10() { return &___U3CsupportsCameraConfigurationsU3Ek__BackingField_10; }
	inline void set_U3CsupportsCameraConfigurationsU3Ek__BackingField_10(bool value)
	{
		___U3CsupportsCameraConfigurationsU3Ek__BackingField_10 = value;
	}

	inline static int32_t get_offset_of_U3CsupportsCameraImageU3Ek__BackingField_11() { return static_cast<int32_t>(offsetof(XRCameraSubsystemCinfo_tFC7E8E15AD29D15868FBCE758A26ADCB5E9A5096, ___U3CsupportsCameraImageU3Ek__BackingField_11)); }
	inline bool get_U3CsupportsCameraImageU3Ek__BackingField_11() const { return ___U3CsupportsCameraImageU3Ek__BackingField_11; }
	inline bool* get_address_of_U3CsupportsCameraImageU3Ek__BackingField_11() { return &___U3CsupportsCameraImageU3Ek__BackingField_11; }
	inline void set_U3CsupportsCameraImageU3Ek__BackingField_11(bool value)
	{
		___U3CsupportsCameraImageU3Ek__BackingField_11 = value;
	}

	inline static int32_t get_offset_of_U3CsupportsAverageIntensityInLumensU3Ek__BackingField_12() { return static_cast<int32_t>(offsetof(XRCameraSubsystemCinfo_tFC7E8E15AD29D15868FBCE758A26ADCB5E9A5096, ___U3CsupportsAverageIntensityInLumensU3Ek__BackingField_12)); }
	inline bool get_U3CsupportsAverageIntensityInLumensU3Ek__BackingField_12() const { return ___U3CsupportsAverageIntensityInLumensU3Ek__BackingField_12; }
	inline bool* get_address_of_U3CsupportsAverageIntensityInLumensU3Ek__BackingField_12() { return &___U3CsupportsAverageIntensityInLumensU3Ek__BackingField_12; }
	inline void set_U3CsupportsAverageIntensityInLumensU3Ek__BackingField_12(bool value)
	{
		___U3CsupportsAverageIntensityInLumensU3Ek__BackingField_12 = value;
	}

	inline static int32_t get_offset_of_U3CsupportsFaceTrackingAmbientIntensityLightEstimationU3Ek__BackingField_13() { return static_cast<int32_t>(offsetof(XRCameraSubsystemCinfo_tFC7E8E15AD29D15868FBCE758A26ADCB5E9A5096, ___U3CsupportsFaceTrackingAmbientIntensityLightEstimationU3Ek__BackingField_13)); }
	inline bool get_U3CsupportsFaceTrackingAmbientIntensityLightEstimationU3Ek__BackingField_13() const { return ___U3CsupportsFaceTrackingAmbientIntensityLightEstimationU3Ek__BackingField_13; }
	inline bool* get_address_of_U3CsupportsFaceTrackingAmbientIntensityLightEstimationU3Ek__BackingField_13() { return &___U3CsupportsFaceTrackingAmbientIntensityLightEstimationU3Ek__BackingField_13; }
	inline void set_U3CsupportsFaceTrackingAmbientIntensityLightEstimationU3Ek__BackingField_13(bool value)
	{
		___U3CsupportsFaceTrackingAmbientIntensityLightEstimationU3Ek__BackingField_13 = value;
	}

	inline static int32_t get_offset_of_U3CsupportsFaceTrackingHDRLightEstimationU3Ek__BackingField_14() { return static_cast<int32_t>(offsetof(XRCameraSubsystemCinfo_tFC7E8E15AD29D15868FBCE758A26ADCB5E9A5096, ___U3CsupportsFaceTrackingHDRLightEstimationU3Ek__BackingField_14)); }
	inline bool get_U3CsupportsFaceTrackingHDRLightEstimationU3Ek__BackingField_14() const { return ___U3CsupportsFaceTrackingHDRLightEstimationU3Ek__BackingField_14; }
	inline bool* get_address_of_U3CsupportsFaceTrackingHDRLightEstimationU3Ek__BackingField_14() { return &___U3CsupportsFaceTrackingHDRLightEstimationU3Ek__BackingField_14; }
	inline void set_U3CsupportsFaceTrackingHDRLightEstimationU3Ek__BackingField_14(bool value)
	{
		___U3CsupportsFaceTrackingHDRLightEstimationU3Ek__BackingField_14 = value;
	}

	inline static int32_t get_offset_of_U3CsupportsWorldTrackingAmbientIntensityLightEstimationU3Ek__BackingField_15() { return static_cast<int32_t>(offsetof(XRCameraSubsystemCinfo_tFC7E8E15AD29D15868FBCE758A26ADCB5E9A5096, ___U3CsupportsWorldTrackingAmbientIntensityLightEstimationU3Ek__BackingField_15)); }
	inline bool get_U3CsupportsWorldTrackingAmbientIntensityLightEstimationU3Ek__BackingField_15() const { return ___U3CsupportsWorldTrackingAmbientIntensityLightEstimationU3Ek__BackingField_15; }
	inline bool* get_address_of_U3CsupportsWorldTrackingAmbientIntensityLightEstimationU3Ek__BackingField_15() { return &___U3CsupportsWorldTrackingAmbientIntensityLightEstimationU3Ek__BackingField_15; }
	inline void set_U3CsupportsWorldTrackingAmbientIntensityLightEstimationU3Ek__BackingField_15(bool value)
	{
		___U3CsupportsWorldTrackingAmbientIntensityLightEstimationU3Ek__BackingField_15 = value;
	}

	inline static int32_t get_offset_of_U3CsupportsWorldTrackingHDRLightEstimationU3Ek__BackingField_16() { return static_cast<int32_t>(offsetof(XRCameraSubsystemCinfo_tFC7E8E15AD29D15868FBCE758A26ADCB5E9A5096, ___U3CsupportsWorldTrackingHDRLightEstimationU3Ek__BackingField_16)); }
	inline bool get_U3CsupportsWorldTrackingHDRLightEstimationU3Ek__BackingField_16() const { return ___U3CsupportsWorldTrackingHDRLightEstimationU3Ek__BackingField_16; }
	inline bool* get_address_of_U3CsupportsWorldTrackingHDRLightEstimationU3Ek__BackingField_16() { return &___U3CsupportsWorldTrackingHDRLightEstimationU3Ek__BackingField_16; }
	inline void set_U3CsupportsWorldTrackingHDRLightEstimationU3Ek__BackingField_16(bool value)
	{
		___U3CsupportsWorldTrackingHDRLightEstimationU3Ek__BackingField_16 = value;
	}

	inline static int32_t get_offset_of_U3CsupportsFocusModesU3Ek__BackingField_17() { return static_cast<int32_t>(offsetof(XRCameraSubsystemCinfo_tFC7E8E15AD29D15868FBCE758A26ADCB5E9A5096, ___U3CsupportsFocusModesU3Ek__BackingField_17)); }
	inline bool get_U3CsupportsFocusModesU3Ek__BackingField_17() const { return ___U3CsupportsFocusModesU3Ek__BackingField_17; }
	inline bool* get_address_of_U3CsupportsFocusModesU3Ek__BackingField_17() { return &___U3CsupportsFocusModesU3Ek__BackingField_17; }
	inline void set_U3CsupportsFocusModesU3Ek__BackingField_17(bool value)
	{
		___U3CsupportsFocusModesU3Ek__BackingField_17 = value;
	}

	inline static int32_t get_offset_of_U3CsupportsCameraGrainU3Ek__BackingField_18() { return static_cast<int32_t>(offsetof(XRCameraSubsystemCinfo_tFC7E8E15AD29D15868FBCE758A26ADCB5E9A5096, ___U3CsupportsCameraGrainU3Ek__BackingField_18)); }
	inline bool get_U3CsupportsCameraGrainU3Ek__BackingField_18() const { return ___U3CsupportsCameraGrainU3Ek__BackingField_18; }
	inline bool* get_address_of_U3CsupportsCameraGrainU3Ek__BackingField_18() { return &___U3CsupportsCameraGrainU3Ek__BackingField_18; }
	inline void set_U3CsupportsCameraGrainU3Ek__BackingField_18(bool value)
	{
		___U3CsupportsCameraGrainU3Ek__BackingField_18 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.XR.ARSubsystems.XRCameraSubsystemCinfo
struct XRCameraSubsystemCinfo_tFC7E8E15AD29D15868FBCE758A26ADCB5E9A5096_marshaled_pinvoke
{
	char* ___U3CidU3Ek__BackingField_0;
	Type_t * ___U3CproviderTypeU3Ek__BackingField_1;
	Type_t * ___U3CsubsystemTypeOverrideU3Ek__BackingField_2;
	Type_t * ___U3CimplementationTypeU3Ek__BackingField_3;
	int32_t ___U3CsupportsAverageBrightnessU3Ek__BackingField_4;
	int32_t ___U3CsupportsAverageColorTemperatureU3Ek__BackingField_5;
	int32_t ___U3CsupportsColorCorrectionU3Ek__BackingField_6;
	int32_t ___U3CsupportsDisplayMatrixU3Ek__BackingField_7;
	int32_t ___U3CsupportsProjectionMatrixU3Ek__BackingField_8;
	int32_t ___U3CsupportsTimestampU3Ek__BackingField_9;
	int32_t ___U3CsupportsCameraConfigurationsU3Ek__BackingField_10;
	int32_t ___U3CsupportsCameraImageU3Ek__BackingField_11;
	int32_t ___U3CsupportsAverageIntensityInLumensU3Ek__BackingField_12;
	int32_t ___U3CsupportsFaceTrackingAmbientIntensityLightEstimationU3Ek__BackingField_13;
	int32_t ___U3CsupportsFaceTrackingHDRLightEstimationU3Ek__BackingField_14;
	int32_t ___U3CsupportsWorldTrackingAmbientIntensityLightEstimationU3Ek__BackingField_15;
	int32_t ___U3CsupportsWorldTrackingHDRLightEstimationU3Ek__BackingField_16;
	int32_t ___U3CsupportsFocusModesU3Ek__BackingField_17;
	int32_t ___U3CsupportsCameraGrainU3Ek__BackingField_18;
};
// Native definition for COM marshalling of UnityEngine.XR.ARSubsystems.XRCameraSubsystemCinfo
struct XRCameraSubsystemCinfo_tFC7E8E15AD29D15868FBCE758A26ADCB5E9A5096_marshaled_com
{
	Il2CppChar* ___U3CidU3Ek__BackingField_0;
	Type_t * ___U3CproviderTypeU3Ek__BackingField_1;
	Type_t * ___U3CsubsystemTypeOverrideU3Ek__BackingField_2;
	Type_t * ___U3CimplementationTypeU3Ek__BackingField_3;
	int32_t ___U3CsupportsAverageBrightnessU3Ek__BackingField_4;
	int32_t ___U3CsupportsAverageColorTemperatureU3Ek__BackingField_5;
	int32_t ___U3CsupportsColorCorrectionU3Ek__BackingField_6;
	int32_t ___U3CsupportsDisplayMatrixU3Ek__BackingField_7;
	int32_t ___U3CsupportsProjectionMatrixU3Ek__BackingField_8;
	int32_t ___U3CsupportsTimestampU3Ek__BackingField_9;
	int32_t ___U3CsupportsCameraConfigurationsU3Ek__BackingField_10;
	int32_t ___U3CsupportsCameraImageU3Ek__BackingField_11;
	int32_t ___U3CsupportsAverageIntensityInLumensU3Ek__BackingField_12;
	int32_t ___U3CsupportsFaceTrackingAmbientIntensityLightEstimationU3Ek__BackingField_13;
	int32_t ___U3CsupportsFaceTrackingHDRLightEstimationU3Ek__BackingField_14;
	int32_t ___U3CsupportsWorldTrackingAmbientIntensityLightEstimationU3Ek__BackingField_15;
	int32_t ___U3CsupportsWorldTrackingHDRLightEstimationU3Ek__BackingField_16;
	int32_t ___U3CsupportsFocusModesU3Ek__BackingField_17;
	int32_t ___U3CsupportsCameraGrainU3Ek__BackingField_18;
};

// UnityEngine.XR.ARSubsystems.XREnvironmentProbeSubsystemCinfo
struct  XREnvironmentProbeSubsystemCinfo_t6D9368EC95B6B356A67B7289270F27BB6A4440B2 
{
public:
	// System.String UnityEngine.XR.ARSubsystems.XREnvironmentProbeSubsystemCinfo::<id>k__BackingField
	String_t* ___U3CidU3Ek__BackingField_0;
	// System.Type UnityEngine.XR.ARSubsystems.XREnvironmentProbeSubsystemCinfo::<providerType>k__BackingField
	Type_t * ___U3CproviderTypeU3Ek__BackingField_1;
	// System.Type UnityEngine.XR.ARSubsystems.XREnvironmentProbeSubsystemCinfo::<subsystemTypeOverride>k__BackingField
	Type_t * ___U3CsubsystemTypeOverrideU3Ek__BackingField_2;
	// System.Type UnityEngine.XR.ARSubsystems.XREnvironmentProbeSubsystemCinfo::<implementationType>k__BackingField
	Type_t * ___U3CimplementationTypeU3Ek__BackingField_3;
	// System.Boolean UnityEngine.XR.ARSubsystems.XREnvironmentProbeSubsystemCinfo::<supportsManualPlacement>k__BackingField
	bool ___U3CsupportsManualPlacementU3Ek__BackingField_4;
	// System.Boolean UnityEngine.XR.ARSubsystems.XREnvironmentProbeSubsystemCinfo::<supportsRemovalOfManual>k__BackingField
	bool ___U3CsupportsRemovalOfManualU3Ek__BackingField_5;
	// System.Boolean UnityEngine.XR.ARSubsystems.XREnvironmentProbeSubsystemCinfo::<supportsAutomaticPlacement>k__BackingField
	bool ___U3CsupportsAutomaticPlacementU3Ek__BackingField_6;
	// System.Boolean UnityEngine.XR.ARSubsystems.XREnvironmentProbeSubsystemCinfo::<supportsRemovalOfAutomatic>k__BackingField
	bool ___U3CsupportsRemovalOfAutomaticU3Ek__BackingField_7;
	// System.Boolean UnityEngine.XR.ARSubsystems.XREnvironmentProbeSubsystemCinfo::<supportsEnvironmentTexture>k__BackingField
	bool ___U3CsupportsEnvironmentTextureU3Ek__BackingField_8;
	// System.Boolean UnityEngine.XR.ARSubsystems.XREnvironmentProbeSubsystemCinfo::<supportsEnvironmentTextureHDR>k__BackingField
	bool ___U3CsupportsEnvironmentTextureHDRU3Ek__BackingField_9;

public:
	inline static int32_t get_offset_of_U3CidU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(XREnvironmentProbeSubsystemCinfo_t6D9368EC95B6B356A67B7289270F27BB6A4440B2, ___U3CidU3Ek__BackingField_0)); }
	inline String_t* get_U3CidU3Ek__BackingField_0() const { return ___U3CidU3Ek__BackingField_0; }
	inline String_t** get_address_of_U3CidU3Ek__BackingField_0() { return &___U3CidU3Ek__BackingField_0; }
	inline void set_U3CidU3Ek__BackingField_0(String_t* value)
	{
		___U3CidU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CidU3Ek__BackingField_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CproviderTypeU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(XREnvironmentProbeSubsystemCinfo_t6D9368EC95B6B356A67B7289270F27BB6A4440B2, ___U3CproviderTypeU3Ek__BackingField_1)); }
	inline Type_t * get_U3CproviderTypeU3Ek__BackingField_1() const { return ___U3CproviderTypeU3Ek__BackingField_1; }
	inline Type_t ** get_address_of_U3CproviderTypeU3Ek__BackingField_1() { return &___U3CproviderTypeU3Ek__BackingField_1; }
	inline void set_U3CproviderTypeU3Ek__BackingField_1(Type_t * value)
	{
		___U3CproviderTypeU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CproviderTypeU3Ek__BackingField_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CsubsystemTypeOverrideU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(XREnvironmentProbeSubsystemCinfo_t6D9368EC95B6B356A67B7289270F27BB6A4440B2, ___U3CsubsystemTypeOverrideU3Ek__BackingField_2)); }
	inline Type_t * get_U3CsubsystemTypeOverrideU3Ek__BackingField_2() const { return ___U3CsubsystemTypeOverrideU3Ek__BackingField_2; }
	inline Type_t ** get_address_of_U3CsubsystemTypeOverrideU3Ek__BackingField_2() { return &___U3CsubsystemTypeOverrideU3Ek__BackingField_2; }
	inline void set_U3CsubsystemTypeOverrideU3Ek__BackingField_2(Type_t * value)
	{
		___U3CsubsystemTypeOverrideU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CsubsystemTypeOverrideU3Ek__BackingField_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CimplementationTypeU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(XREnvironmentProbeSubsystemCinfo_t6D9368EC95B6B356A67B7289270F27BB6A4440B2, ___U3CimplementationTypeU3Ek__BackingField_3)); }
	inline Type_t * get_U3CimplementationTypeU3Ek__BackingField_3() const { return ___U3CimplementationTypeU3Ek__BackingField_3; }
	inline Type_t ** get_address_of_U3CimplementationTypeU3Ek__BackingField_3() { return &___U3CimplementationTypeU3Ek__BackingField_3; }
	inline void set_U3CimplementationTypeU3Ek__BackingField_3(Type_t * value)
	{
		___U3CimplementationTypeU3Ek__BackingField_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CimplementationTypeU3Ek__BackingField_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3CsupportsManualPlacementU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(XREnvironmentProbeSubsystemCinfo_t6D9368EC95B6B356A67B7289270F27BB6A4440B2, ___U3CsupportsManualPlacementU3Ek__BackingField_4)); }
	inline bool get_U3CsupportsManualPlacementU3Ek__BackingField_4() const { return ___U3CsupportsManualPlacementU3Ek__BackingField_4; }
	inline bool* get_address_of_U3CsupportsManualPlacementU3Ek__BackingField_4() { return &___U3CsupportsManualPlacementU3Ek__BackingField_4; }
	inline void set_U3CsupportsManualPlacementU3Ek__BackingField_4(bool value)
	{
		___U3CsupportsManualPlacementU3Ek__BackingField_4 = value;
	}

	inline static int32_t get_offset_of_U3CsupportsRemovalOfManualU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(XREnvironmentProbeSubsystemCinfo_t6D9368EC95B6B356A67B7289270F27BB6A4440B2, ___U3CsupportsRemovalOfManualU3Ek__BackingField_5)); }
	inline bool get_U3CsupportsRemovalOfManualU3Ek__BackingField_5() const { return ___U3CsupportsRemovalOfManualU3Ek__BackingField_5; }
	inline bool* get_address_of_U3CsupportsRemovalOfManualU3Ek__BackingField_5() { return &___U3CsupportsRemovalOfManualU3Ek__BackingField_5; }
	inline void set_U3CsupportsRemovalOfManualU3Ek__BackingField_5(bool value)
	{
		___U3CsupportsRemovalOfManualU3Ek__BackingField_5 = value;
	}

	inline static int32_t get_offset_of_U3CsupportsAutomaticPlacementU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(XREnvironmentProbeSubsystemCinfo_t6D9368EC95B6B356A67B7289270F27BB6A4440B2, ___U3CsupportsAutomaticPlacementU3Ek__BackingField_6)); }
	inline bool get_U3CsupportsAutomaticPlacementU3Ek__BackingField_6() const { return ___U3CsupportsAutomaticPlacementU3Ek__BackingField_6; }
	inline bool* get_address_of_U3CsupportsAutomaticPlacementU3Ek__BackingField_6() { return &___U3CsupportsAutomaticPlacementU3Ek__BackingField_6; }
	inline void set_U3CsupportsAutomaticPlacementU3Ek__BackingField_6(bool value)
	{
		___U3CsupportsAutomaticPlacementU3Ek__BackingField_6 = value;
	}

	inline static int32_t get_offset_of_U3CsupportsRemovalOfAutomaticU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(XREnvironmentProbeSubsystemCinfo_t6D9368EC95B6B356A67B7289270F27BB6A4440B2, ___U3CsupportsRemovalOfAutomaticU3Ek__BackingField_7)); }
	inline bool get_U3CsupportsRemovalOfAutomaticU3Ek__BackingField_7() const { return ___U3CsupportsRemovalOfAutomaticU3Ek__BackingField_7; }
	inline bool* get_address_of_U3CsupportsRemovalOfAutomaticU3Ek__BackingField_7() { return &___U3CsupportsRemovalOfAutomaticU3Ek__BackingField_7; }
	inline void set_U3CsupportsRemovalOfAutomaticU3Ek__BackingField_7(bool value)
	{
		___U3CsupportsRemovalOfAutomaticU3Ek__BackingField_7 = value;
	}

	inline static int32_t get_offset_of_U3CsupportsEnvironmentTextureU3Ek__BackingField_8() { return static_cast<int32_t>(offsetof(XREnvironmentProbeSubsystemCinfo_t6D9368EC95B6B356A67B7289270F27BB6A4440B2, ___U3CsupportsEnvironmentTextureU3Ek__BackingField_8)); }
	inline bool get_U3CsupportsEnvironmentTextureU3Ek__BackingField_8() const { return ___U3CsupportsEnvironmentTextureU3Ek__BackingField_8; }
	inline bool* get_address_of_U3CsupportsEnvironmentTextureU3Ek__BackingField_8() { return &___U3CsupportsEnvironmentTextureU3Ek__BackingField_8; }
	inline void set_U3CsupportsEnvironmentTextureU3Ek__BackingField_8(bool value)
	{
		___U3CsupportsEnvironmentTextureU3Ek__BackingField_8 = value;
	}

	inline static int32_t get_offset_of_U3CsupportsEnvironmentTextureHDRU3Ek__BackingField_9() { return static_cast<int32_t>(offsetof(XREnvironmentProbeSubsystemCinfo_t6D9368EC95B6B356A67B7289270F27BB6A4440B2, ___U3CsupportsEnvironmentTextureHDRU3Ek__BackingField_9)); }
	inline bool get_U3CsupportsEnvironmentTextureHDRU3Ek__BackingField_9() const { return ___U3CsupportsEnvironmentTextureHDRU3Ek__BackingField_9; }
	inline bool* get_address_of_U3CsupportsEnvironmentTextureHDRU3Ek__BackingField_9() { return &___U3CsupportsEnvironmentTextureHDRU3Ek__BackingField_9; }
	inline void set_U3CsupportsEnvironmentTextureHDRU3Ek__BackingField_9(bool value)
	{
		___U3CsupportsEnvironmentTextureHDRU3Ek__BackingField_9 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.XR.ARSubsystems.XREnvironmentProbeSubsystemCinfo
struct XREnvironmentProbeSubsystemCinfo_t6D9368EC95B6B356A67B7289270F27BB6A4440B2_marshaled_pinvoke
{
	char* ___U3CidU3Ek__BackingField_0;
	Type_t * ___U3CproviderTypeU3Ek__BackingField_1;
	Type_t * ___U3CsubsystemTypeOverrideU3Ek__BackingField_2;
	Type_t * ___U3CimplementationTypeU3Ek__BackingField_3;
	int32_t ___U3CsupportsManualPlacementU3Ek__BackingField_4;
	int32_t ___U3CsupportsRemovalOfManualU3Ek__BackingField_5;
	int32_t ___U3CsupportsAutomaticPlacementU3Ek__BackingField_6;
	int32_t ___U3CsupportsRemovalOfAutomaticU3Ek__BackingField_7;
	int32_t ___U3CsupportsEnvironmentTextureU3Ek__BackingField_8;
	int32_t ___U3CsupportsEnvironmentTextureHDRU3Ek__BackingField_9;
};
// Native definition for COM marshalling of UnityEngine.XR.ARSubsystems.XREnvironmentProbeSubsystemCinfo
struct XREnvironmentProbeSubsystemCinfo_t6D9368EC95B6B356A67B7289270F27BB6A4440B2_marshaled_com
{
	Il2CppChar* ___U3CidU3Ek__BackingField_0;
	Type_t * ___U3CproviderTypeU3Ek__BackingField_1;
	Type_t * ___U3CsubsystemTypeOverrideU3Ek__BackingField_2;
	Type_t * ___U3CimplementationTypeU3Ek__BackingField_3;
	int32_t ___U3CsupportsManualPlacementU3Ek__BackingField_4;
	int32_t ___U3CsupportsRemovalOfManualU3Ek__BackingField_5;
	int32_t ___U3CsupportsAutomaticPlacementU3Ek__BackingField_6;
	int32_t ___U3CsupportsRemovalOfAutomaticU3Ek__BackingField_7;
	int32_t ___U3CsupportsEnvironmentTextureU3Ek__BackingField_8;
	int32_t ___U3CsupportsEnvironmentTextureHDRU3Ek__BackingField_9;
};

// UnityEngine.XR.ARSubsystems.XRHumanBodySubsystemCinfo
struct  XRHumanBodySubsystemCinfo_tAFFD9EF9197B51AA2EAC628F54C90C842B7E54CC 
{
public:
	// System.String UnityEngine.XR.ARSubsystems.XRHumanBodySubsystemCinfo::<id>k__BackingField
	String_t* ___U3CidU3Ek__BackingField_0;
	// System.Type UnityEngine.XR.ARSubsystems.XRHumanBodySubsystemCinfo::<providerType>k__BackingField
	Type_t * ___U3CproviderTypeU3Ek__BackingField_1;
	// System.Type UnityEngine.XR.ARSubsystems.XRHumanBodySubsystemCinfo::<subsystemTypeOverride>k__BackingField
	Type_t * ___U3CsubsystemTypeOverrideU3Ek__BackingField_2;
	// System.Type UnityEngine.XR.ARSubsystems.XRHumanBodySubsystemCinfo::<implementationType>k__BackingField
	Type_t * ___U3CimplementationTypeU3Ek__BackingField_3;
	// System.Boolean UnityEngine.XR.ARSubsystems.XRHumanBodySubsystemCinfo::<supportsHumanBody2D>k__BackingField
	bool ___U3CsupportsHumanBody2DU3Ek__BackingField_4;
	// System.Boolean UnityEngine.XR.ARSubsystems.XRHumanBodySubsystemCinfo::<supportsHumanBody3D>k__BackingField
	bool ___U3CsupportsHumanBody3DU3Ek__BackingField_5;
	// System.Boolean UnityEngine.XR.ARSubsystems.XRHumanBodySubsystemCinfo::<supportsHumanBody3DScaleEstimation>k__BackingField
	bool ___U3CsupportsHumanBody3DScaleEstimationU3Ek__BackingField_6;

public:
	inline static int32_t get_offset_of_U3CidU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(XRHumanBodySubsystemCinfo_tAFFD9EF9197B51AA2EAC628F54C90C842B7E54CC, ___U3CidU3Ek__BackingField_0)); }
	inline String_t* get_U3CidU3Ek__BackingField_0() const { return ___U3CidU3Ek__BackingField_0; }
	inline String_t** get_address_of_U3CidU3Ek__BackingField_0() { return &___U3CidU3Ek__BackingField_0; }
	inline void set_U3CidU3Ek__BackingField_0(String_t* value)
	{
		___U3CidU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CidU3Ek__BackingField_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CproviderTypeU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(XRHumanBodySubsystemCinfo_tAFFD9EF9197B51AA2EAC628F54C90C842B7E54CC, ___U3CproviderTypeU3Ek__BackingField_1)); }
	inline Type_t * get_U3CproviderTypeU3Ek__BackingField_1() const { return ___U3CproviderTypeU3Ek__BackingField_1; }
	inline Type_t ** get_address_of_U3CproviderTypeU3Ek__BackingField_1() { return &___U3CproviderTypeU3Ek__BackingField_1; }
	inline void set_U3CproviderTypeU3Ek__BackingField_1(Type_t * value)
	{
		___U3CproviderTypeU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CproviderTypeU3Ek__BackingField_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CsubsystemTypeOverrideU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(XRHumanBodySubsystemCinfo_tAFFD9EF9197B51AA2EAC628F54C90C842B7E54CC, ___U3CsubsystemTypeOverrideU3Ek__BackingField_2)); }
	inline Type_t * get_U3CsubsystemTypeOverrideU3Ek__BackingField_2() const { return ___U3CsubsystemTypeOverrideU3Ek__BackingField_2; }
	inline Type_t ** get_address_of_U3CsubsystemTypeOverrideU3Ek__BackingField_2() { return &___U3CsubsystemTypeOverrideU3Ek__BackingField_2; }
	inline void set_U3CsubsystemTypeOverrideU3Ek__BackingField_2(Type_t * value)
	{
		___U3CsubsystemTypeOverrideU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CsubsystemTypeOverrideU3Ek__BackingField_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CimplementationTypeU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(XRHumanBodySubsystemCinfo_tAFFD9EF9197B51AA2EAC628F54C90C842B7E54CC, ___U3CimplementationTypeU3Ek__BackingField_3)); }
	inline Type_t * get_U3CimplementationTypeU3Ek__BackingField_3() const { return ___U3CimplementationTypeU3Ek__BackingField_3; }
	inline Type_t ** get_address_of_U3CimplementationTypeU3Ek__BackingField_3() { return &___U3CimplementationTypeU3Ek__BackingField_3; }
	inline void set_U3CimplementationTypeU3Ek__BackingField_3(Type_t * value)
	{
		___U3CimplementationTypeU3Ek__BackingField_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CimplementationTypeU3Ek__BackingField_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3CsupportsHumanBody2DU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(XRHumanBodySubsystemCinfo_tAFFD9EF9197B51AA2EAC628F54C90C842B7E54CC, ___U3CsupportsHumanBody2DU3Ek__BackingField_4)); }
	inline bool get_U3CsupportsHumanBody2DU3Ek__BackingField_4() const { return ___U3CsupportsHumanBody2DU3Ek__BackingField_4; }
	inline bool* get_address_of_U3CsupportsHumanBody2DU3Ek__BackingField_4() { return &___U3CsupportsHumanBody2DU3Ek__BackingField_4; }
	inline void set_U3CsupportsHumanBody2DU3Ek__BackingField_4(bool value)
	{
		___U3CsupportsHumanBody2DU3Ek__BackingField_4 = value;
	}

	inline static int32_t get_offset_of_U3CsupportsHumanBody3DU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(XRHumanBodySubsystemCinfo_tAFFD9EF9197B51AA2EAC628F54C90C842B7E54CC, ___U3CsupportsHumanBody3DU3Ek__BackingField_5)); }
	inline bool get_U3CsupportsHumanBody3DU3Ek__BackingField_5() const { return ___U3CsupportsHumanBody3DU3Ek__BackingField_5; }
	inline bool* get_address_of_U3CsupportsHumanBody3DU3Ek__BackingField_5() { return &___U3CsupportsHumanBody3DU3Ek__BackingField_5; }
	inline void set_U3CsupportsHumanBody3DU3Ek__BackingField_5(bool value)
	{
		___U3CsupportsHumanBody3DU3Ek__BackingField_5 = value;
	}

	inline static int32_t get_offset_of_U3CsupportsHumanBody3DScaleEstimationU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(XRHumanBodySubsystemCinfo_tAFFD9EF9197B51AA2EAC628F54C90C842B7E54CC, ___U3CsupportsHumanBody3DScaleEstimationU3Ek__BackingField_6)); }
	inline bool get_U3CsupportsHumanBody3DScaleEstimationU3Ek__BackingField_6() const { return ___U3CsupportsHumanBody3DScaleEstimationU3Ek__BackingField_6; }
	inline bool* get_address_of_U3CsupportsHumanBody3DScaleEstimationU3Ek__BackingField_6() { return &___U3CsupportsHumanBody3DScaleEstimationU3Ek__BackingField_6; }
	inline void set_U3CsupportsHumanBody3DScaleEstimationU3Ek__BackingField_6(bool value)
	{
		___U3CsupportsHumanBody3DScaleEstimationU3Ek__BackingField_6 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.XR.ARSubsystems.XRHumanBodySubsystemCinfo
struct XRHumanBodySubsystemCinfo_tAFFD9EF9197B51AA2EAC628F54C90C842B7E54CC_marshaled_pinvoke
{
	char* ___U3CidU3Ek__BackingField_0;
	Type_t * ___U3CproviderTypeU3Ek__BackingField_1;
	Type_t * ___U3CsubsystemTypeOverrideU3Ek__BackingField_2;
	Type_t * ___U3CimplementationTypeU3Ek__BackingField_3;
	int32_t ___U3CsupportsHumanBody2DU3Ek__BackingField_4;
	int32_t ___U3CsupportsHumanBody3DU3Ek__BackingField_5;
	int32_t ___U3CsupportsHumanBody3DScaleEstimationU3Ek__BackingField_6;
};
// Native definition for COM marshalling of UnityEngine.XR.ARSubsystems.XRHumanBodySubsystemCinfo
struct XRHumanBodySubsystemCinfo_tAFFD9EF9197B51AA2EAC628F54C90C842B7E54CC_marshaled_com
{
	Il2CppChar* ___U3CidU3Ek__BackingField_0;
	Type_t * ___U3CproviderTypeU3Ek__BackingField_1;
	Type_t * ___U3CsubsystemTypeOverrideU3Ek__BackingField_2;
	Type_t * ___U3CimplementationTypeU3Ek__BackingField_3;
	int32_t ___U3CsupportsHumanBody2DU3Ek__BackingField_4;
	int32_t ___U3CsupportsHumanBody3DU3Ek__BackingField_5;
	int32_t ___U3CsupportsHumanBody3DScaleEstimationU3Ek__BackingField_6;
};

// UnityEngine.XR.ARSubsystems.XROcclusionSubsystemCinfo
struct  XROcclusionSubsystemCinfo_tA29FDBA57EBA835927124FC18780DDD9CC4D84FD 
{
public:
	// System.String UnityEngine.XR.ARSubsystems.XROcclusionSubsystemCinfo::<id>k__BackingField
	String_t* ___U3CidU3Ek__BackingField_0;
	// System.Type UnityEngine.XR.ARSubsystems.XROcclusionSubsystemCinfo::<providerType>k__BackingField
	Type_t * ___U3CproviderTypeU3Ek__BackingField_1;
	// System.Type UnityEngine.XR.ARSubsystems.XROcclusionSubsystemCinfo::<subsystemTypeOverride>k__BackingField
	Type_t * ___U3CsubsystemTypeOverrideU3Ek__BackingField_2;
	// System.Type UnityEngine.XR.ARSubsystems.XROcclusionSubsystemCinfo::<implementationType>k__BackingField
	Type_t * ___U3CimplementationTypeU3Ek__BackingField_3;
	// System.Boolean UnityEngine.XR.ARSubsystems.XROcclusionSubsystemCinfo::<supportsHumanSegmentationStencilImage>k__BackingField
	bool ___U3CsupportsHumanSegmentationStencilImageU3Ek__BackingField_4;
	// System.Boolean UnityEngine.XR.ARSubsystems.XROcclusionSubsystemCinfo::<supportsHumanSegmentationDepthImage>k__BackingField
	bool ___U3CsupportsHumanSegmentationDepthImageU3Ek__BackingField_5;

public:
	inline static int32_t get_offset_of_U3CidU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(XROcclusionSubsystemCinfo_tA29FDBA57EBA835927124FC18780DDD9CC4D84FD, ___U3CidU3Ek__BackingField_0)); }
	inline String_t* get_U3CidU3Ek__BackingField_0() const { return ___U3CidU3Ek__BackingField_0; }
	inline String_t** get_address_of_U3CidU3Ek__BackingField_0() { return &___U3CidU3Ek__BackingField_0; }
	inline void set_U3CidU3Ek__BackingField_0(String_t* value)
	{
		___U3CidU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CidU3Ek__BackingField_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CproviderTypeU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(XROcclusionSubsystemCinfo_tA29FDBA57EBA835927124FC18780DDD9CC4D84FD, ___U3CproviderTypeU3Ek__BackingField_1)); }
	inline Type_t * get_U3CproviderTypeU3Ek__BackingField_1() const { return ___U3CproviderTypeU3Ek__BackingField_1; }
	inline Type_t ** get_address_of_U3CproviderTypeU3Ek__BackingField_1() { return &___U3CproviderTypeU3Ek__BackingField_1; }
	inline void set_U3CproviderTypeU3Ek__BackingField_1(Type_t * value)
	{
		___U3CproviderTypeU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CproviderTypeU3Ek__BackingField_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CsubsystemTypeOverrideU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(XROcclusionSubsystemCinfo_tA29FDBA57EBA835927124FC18780DDD9CC4D84FD, ___U3CsubsystemTypeOverrideU3Ek__BackingField_2)); }
	inline Type_t * get_U3CsubsystemTypeOverrideU3Ek__BackingField_2() const { return ___U3CsubsystemTypeOverrideU3Ek__BackingField_2; }
	inline Type_t ** get_address_of_U3CsubsystemTypeOverrideU3Ek__BackingField_2() { return &___U3CsubsystemTypeOverrideU3Ek__BackingField_2; }
	inline void set_U3CsubsystemTypeOverrideU3Ek__BackingField_2(Type_t * value)
	{
		___U3CsubsystemTypeOverrideU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CsubsystemTypeOverrideU3Ek__BackingField_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CimplementationTypeU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(XROcclusionSubsystemCinfo_tA29FDBA57EBA835927124FC18780DDD9CC4D84FD, ___U3CimplementationTypeU3Ek__BackingField_3)); }
	inline Type_t * get_U3CimplementationTypeU3Ek__BackingField_3() const { return ___U3CimplementationTypeU3Ek__BackingField_3; }
	inline Type_t ** get_address_of_U3CimplementationTypeU3Ek__BackingField_3() { return &___U3CimplementationTypeU3Ek__BackingField_3; }
	inline void set_U3CimplementationTypeU3Ek__BackingField_3(Type_t * value)
	{
		___U3CimplementationTypeU3Ek__BackingField_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CimplementationTypeU3Ek__BackingField_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3CsupportsHumanSegmentationStencilImageU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(XROcclusionSubsystemCinfo_tA29FDBA57EBA835927124FC18780DDD9CC4D84FD, ___U3CsupportsHumanSegmentationStencilImageU3Ek__BackingField_4)); }
	inline bool get_U3CsupportsHumanSegmentationStencilImageU3Ek__BackingField_4() const { return ___U3CsupportsHumanSegmentationStencilImageU3Ek__BackingField_4; }
	inline bool* get_address_of_U3CsupportsHumanSegmentationStencilImageU3Ek__BackingField_4() { return &___U3CsupportsHumanSegmentationStencilImageU3Ek__BackingField_4; }
	inline void set_U3CsupportsHumanSegmentationStencilImageU3Ek__BackingField_4(bool value)
	{
		___U3CsupportsHumanSegmentationStencilImageU3Ek__BackingField_4 = value;
	}

	inline static int32_t get_offset_of_U3CsupportsHumanSegmentationDepthImageU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(XROcclusionSubsystemCinfo_tA29FDBA57EBA835927124FC18780DDD9CC4D84FD, ___U3CsupportsHumanSegmentationDepthImageU3Ek__BackingField_5)); }
	inline bool get_U3CsupportsHumanSegmentationDepthImageU3Ek__BackingField_5() const { return ___U3CsupportsHumanSegmentationDepthImageU3Ek__BackingField_5; }
	inline bool* get_address_of_U3CsupportsHumanSegmentationDepthImageU3Ek__BackingField_5() { return &___U3CsupportsHumanSegmentationDepthImageU3Ek__BackingField_5; }
	inline void set_U3CsupportsHumanSegmentationDepthImageU3Ek__BackingField_5(bool value)
	{
		___U3CsupportsHumanSegmentationDepthImageU3Ek__BackingField_5 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.XR.ARSubsystems.XROcclusionSubsystemCinfo
struct XROcclusionSubsystemCinfo_tA29FDBA57EBA835927124FC18780DDD9CC4D84FD_marshaled_pinvoke
{
	char* ___U3CidU3Ek__BackingField_0;
	Type_t * ___U3CproviderTypeU3Ek__BackingField_1;
	Type_t * ___U3CsubsystemTypeOverrideU3Ek__BackingField_2;
	Type_t * ___U3CimplementationTypeU3Ek__BackingField_3;
	int32_t ___U3CsupportsHumanSegmentationStencilImageU3Ek__BackingField_4;
	int32_t ___U3CsupportsHumanSegmentationDepthImageU3Ek__BackingField_5;
};
// Native definition for COM marshalling of UnityEngine.XR.ARSubsystems.XROcclusionSubsystemCinfo
struct XROcclusionSubsystemCinfo_tA29FDBA57EBA835927124FC18780DDD9CC4D84FD_marshaled_com
{
	Il2CppChar* ___U3CidU3Ek__BackingField_0;
	Type_t * ___U3CproviderTypeU3Ek__BackingField_1;
	Type_t * ___U3CsubsystemTypeOverrideU3Ek__BackingField_2;
	Type_t * ___U3CimplementationTypeU3Ek__BackingField_3;
	int32_t ___U3CsupportsHumanSegmentationStencilImageU3Ek__BackingField_4;
	int32_t ___U3CsupportsHumanSegmentationDepthImageU3Ek__BackingField_5;
};

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=32
struct  __StaticArrayInitTypeSizeU3D32_t0BFEA9C6F9BC1DDA1D7FB61D35C94D361B765A5C 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D32_t0BFEA9C6F9BC1DDA1D7FB61D35C94D361B765A5C__padding[32];
	};

public:
};


// UnityEngine.XR.ARSubsystems.XRAnchorSubsystemDescriptor/Cinfo
struct  Cinfo_tF42131D7F2B721976AAF20DD0240D9C46397F7F7 
{
public:
	// System.String UnityEngine.XR.ARSubsystems.XRAnchorSubsystemDescriptor/Cinfo::<id>k__BackingField
	String_t* ___U3CidU3Ek__BackingField_0;
	// System.Type UnityEngine.XR.ARSubsystems.XRAnchorSubsystemDescriptor/Cinfo::<providerType>k__BackingField
	Type_t * ___U3CproviderTypeU3Ek__BackingField_1;
	// System.Type UnityEngine.XR.ARSubsystems.XRAnchorSubsystemDescriptor/Cinfo::<subsystemTypeOverride>k__BackingField
	Type_t * ___U3CsubsystemTypeOverrideU3Ek__BackingField_2;
	// System.Type UnityEngine.XR.ARSubsystems.XRAnchorSubsystemDescriptor/Cinfo::<subsystemImplementationType>k__BackingField
	Type_t * ___U3CsubsystemImplementationTypeU3Ek__BackingField_3;
	// System.Boolean UnityEngine.XR.ARSubsystems.XRAnchorSubsystemDescriptor/Cinfo::<supportsTrackableAttachments>k__BackingField
	bool ___U3CsupportsTrackableAttachmentsU3Ek__BackingField_4;

public:
	inline static int32_t get_offset_of_U3CidU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(Cinfo_tF42131D7F2B721976AAF20DD0240D9C46397F7F7, ___U3CidU3Ek__BackingField_0)); }
	inline String_t* get_U3CidU3Ek__BackingField_0() const { return ___U3CidU3Ek__BackingField_0; }
	inline String_t** get_address_of_U3CidU3Ek__BackingField_0() { return &___U3CidU3Ek__BackingField_0; }
	inline void set_U3CidU3Ek__BackingField_0(String_t* value)
	{
		___U3CidU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CidU3Ek__BackingField_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CproviderTypeU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(Cinfo_tF42131D7F2B721976AAF20DD0240D9C46397F7F7, ___U3CproviderTypeU3Ek__BackingField_1)); }
	inline Type_t * get_U3CproviderTypeU3Ek__BackingField_1() const { return ___U3CproviderTypeU3Ek__BackingField_1; }
	inline Type_t ** get_address_of_U3CproviderTypeU3Ek__BackingField_1() { return &___U3CproviderTypeU3Ek__BackingField_1; }
	inline void set_U3CproviderTypeU3Ek__BackingField_1(Type_t * value)
	{
		___U3CproviderTypeU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CproviderTypeU3Ek__BackingField_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CsubsystemTypeOverrideU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(Cinfo_tF42131D7F2B721976AAF20DD0240D9C46397F7F7, ___U3CsubsystemTypeOverrideU3Ek__BackingField_2)); }
	inline Type_t * get_U3CsubsystemTypeOverrideU3Ek__BackingField_2() const { return ___U3CsubsystemTypeOverrideU3Ek__BackingField_2; }
	inline Type_t ** get_address_of_U3CsubsystemTypeOverrideU3Ek__BackingField_2() { return &___U3CsubsystemTypeOverrideU3Ek__BackingField_2; }
	inline void set_U3CsubsystemTypeOverrideU3Ek__BackingField_2(Type_t * value)
	{
		___U3CsubsystemTypeOverrideU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CsubsystemTypeOverrideU3Ek__BackingField_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CsubsystemImplementationTypeU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(Cinfo_tF42131D7F2B721976AAF20DD0240D9C46397F7F7, ___U3CsubsystemImplementationTypeU3Ek__BackingField_3)); }
	inline Type_t * get_U3CsubsystemImplementationTypeU3Ek__BackingField_3() const { return ___U3CsubsystemImplementationTypeU3Ek__BackingField_3; }
	inline Type_t ** get_address_of_U3CsubsystemImplementationTypeU3Ek__BackingField_3() { return &___U3CsubsystemImplementationTypeU3Ek__BackingField_3; }
	inline void set_U3CsubsystemImplementationTypeU3Ek__BackingField_3(Type_t * value)
	{
		___U3CsubsystemImplementationTypeU3Ek__BackingField_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CsubsystemImplementationTypeU3Ek__BackingField_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3CsupportsTrackableAttachmentsU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(Cinfo_tF42131D7F2B721976AAF20DD0240D9C46397F7F7, ___U3CsupportsTrackableAttachmentsU3Ek__BackingField_4)); }
	inline bool get_U3CsupportsTrackableAttachmentsU3Ek__BackingField_4() const { return ___U3CsupportsTrackableAttachmentsU3Ek__BackingField_4; }
	inline bool* get_address_of_U3CsupportsTrackableAttachmentsU3Ek__BackingField_4() { return &___U3CsupportsTrackableAttachmentsU3Ek__BackingField_4; }
	inline void set_U3CsupportsTrackableAttachmentsU3Ek__BackingField_4(bool value)
	{
		___U3CsupportsTrackableAttachmentsU3Ek__BackingField_4 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.XR.ARSubsystems.XRAnchorSubsystemDescriptor/Cinfo
struct Cinfo_tF42131D7F2B721976AAF20DD0240D9C46397F7F7_marshaled_pinvoke
{
	char* ___U3CidU3Ek__BackingField_0;
	Type_t * ___U3CproviderTypeU3Ek__BackingField_1;
	Type_t * ___U3CsubsystemTypeOverrideU3Ek__BackingField_2;
	Type_t * ___U3CsubsystemImplementationTypeU3Ek__BackingField_3;
	int32_t ___U3CsupportsTrackableAttachmentsU3Ek__BackingField_4;
};
// Native definition for COM marshalling of UnityEngine.XR.ARSubsystems.XRAnchorSubsystemDescriptor/Cinfo
struct Cinfo_tF42131D7F2B721976AAF20DD0240D9C46397F7F7_marshaled_com
{
	Il2CppChar* ___U3CidU3Ek__BackingField_0;
	Type_t * ___U3CproviderTypeU3Ek__BackingField_1;
	Type_t * ___U3CsubsystemTypeOverrideU3Ek__BackingField_2;
	Type_t * ___U3CsubsystemImplementationTypeU3Ek__BackingField_3;
	int32_t ___U3CsupportsTrackableAttachmentsU3Ek__BackingField_4;
};

// UnityEngine.XR.ARSubsystems.XRImageTrackingSubsystemDescriptor/Cinfo
struct  Cinfo_tED92D7CBD16BE657927A6B7DB64A22DA21EB7D32 
{
public:
	// System.String UnityEngine.XR.ARSubsystems.XRImageTrackingSubsystemDescriptor/Cinfo::<id>k__BackingField
	String_t* ___U3CidU3Ek__BackingField_0;
	// System.Type UnityEngine.XR.ARSubsystems.XRImageTrackingSubsystemDescriptor/Cinfo::<providerType>k__BackingField
	Type_t * ___U3CproviderTypeU3Ek__BackingField_1;
	// System.Type UnityEngine.XR.ARSubsystems.XRImageTrackingSubsystemDescriptor/Cinfo::<subsystemTypeOverride>k__BackingField
	Type_t * ___U3CsubsystemTypeOverrideU3Ek__BackingField_2;
	// System.Type UnityEngine.XR.ARSubsystems.XRImageTrackingSubsystemDescriptor/Cinfo::<subsystemImplementationType>k__BackingField
	Type_t * ___U3CsubsystemImplementationTypeU3Ek__BackingField_3;
	// System.Boolean UnityEngine.XR.ARSubsystems.XRImageTrackingSubsystemDescriptor/Cinfo::<supportsMovingImages>k__BackingField
	bool ___U3CsupportsMovingImagesU3Ek__BackingField_4;
	// System.Boolean UnityEngine.XR.ARSubsystems.XRImageTrackingSubsystemDescriptor/Cinfo::<requiresPhysicalImageDimensions>k__BackingField
	bool ___U3CrequiresPhysicalImageDimensionsU3Ek__BackingField_5;
	// System.Boolean UnityEngine.XR.ARSubsystems.XRImageTrackingSubsystemDescriptor/Cinfo::<supportsMutableLibrary>k__BackingField
	bool ___U3CsupportsMutableLibraryU3Ek__BackingField_6;

public:
	inline static int32_t get_offset_of_U3CidU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(Cinfo_tED92D7CBD16BE657927A6B7DB64A22DA21EB7D32, ___U3CidU3Ek__BackingField_0)); }
	inline String_t* get_U3CidU3Ek__BackingField_0() const { return ___U3CidU3Ek__BackingField_0; }
	inline String_t** get_address_of_U3CidU3Ek__BackingField_0() { return &___U3CidU3Ek__BackingField_0; }
	inline void set_U3CidU3Ek__BackingField_0(String_t* value)
	{
		___U3CidU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CidU3Ek__BackingField_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CproviderTypeU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(Cinfo_tED92D7CBD16BE657927A6B7DB64A22DA21EB7D32, ___U3CproviderTypeU3Ek__BackingField_1)); }
	inline Type_t * get_U3CproviderTypeU3Ek__BackingField_1() const { return ___U3CproviderTypeU3Ek__BackingField_1; }
	inline Type_t ** get_address_of_U3CproviderTypeU3Ek__BackingField_1() { return &___U3CproviderTypeU3Ek__BackingField_1; }
	inline void set_U3CproviderTypeU3Ek__BackingField_1(Type_t * value)
	{
		___U3CproviderTypeU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CproviderTypeU3Ek__BackingField_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CsubsystemTypeOverrideU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(Cinfo_tED92D7CBD16BE657927A6B7DB64A22DA21EB7D32, ___U3CsubsystemTypeOverrideU3Ek__BackingField_2)); }
	inline Type_t * get_U3CsubsystemTypeOverrideU3Ek__BackingField_2() const { return ___U3CsubsystemTypeOverrideU3Ek__BackingField_2; }
	inline Type_t ** get_address_of_U3CsubsystemTypeOverrideU3Ek__BackingField_2() { return &___U3CsubsystemTypeOverrideU3Ek__BackingField_2; }
	inline void set_U3CsubsystemTypeOverrideU3Ek__BackingField_2(Type_t * value)
	{
		___U3CsubsystemTypeOverrideU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CsubsystemTypeOverrideU3Ek__BackingField_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CsubsystemImplementationTypeU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(Cinfo_tED92D7CBD16BE657927A6B7DB64A22DA21EB7D32, ___U3CsubsystemImplementationTypeU3Ek__BackingField_3)); }
	inline Type_t * get_U3CsubsystemImplementationTypeU3Ek__BackingField_3() const { return ___U3CsubsystemImplementationTypeU3Ek__BackingField_3; }
	inline Type_t ** get_address_of_U3CsubsystemImplementationTypeU3Ek__BackingField_3() { return &___U3CsubsystemImplementationTypeU3Ek__BackingField_3; }
	inline void set_U3CsubsystemImplementationTypeU3Ek__BackingField_3(Type_t * value)
	{
		___U3CsubsystemImplementationTypeU3Ek__BackingField_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CsubsystemImplementationTypeU3Ek__BackingField_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3CsupportsMovingImagesU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(Cinfo_tED92D7CBD16BE657927A6B7DB64A22DA21EB7D32, ___U3CsupportsMovingImagesU3Ek__BackingField_4)); }
	inline bool get_U3CsupportsMovingImagesU3Ek__BackingField_4() const { return ___U3CsupportsMovingImagesU3Ek__BackingField_4; }
	inline bool* get_address_of_U3CsupportsMovingImagesU3Ek__BackingField_4() { return &___U3CsupportsMovingImagesU3Ek__BackingField_4; }
	inline void set_U3CsupportsMovingImagesU3Ek__BackingField_4(bool value)
	{
		___U3CsupportsMovingImagesU3Ek__BackingField_4 = value;
	}

	inline static int32_t get_offset_of_U3CrequiresPhysicalImageDimensionsU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(Cinfo_tED92D7CBD16BE657927A6B7DB64A22DA21EB7D32, ___U3CrequiresPhysicalImageDimensionsU3Ek__BackingField_5)); }
	inline bool get_U3CrequiresPhysicalImageDimensionsU3Ek__BackingField_5() const { return ___U3CrequiresPhysicalImageDimensionsU3Ek__BackingField_5; }
	inline bool* get_address_of_U3CrequiresPhysicalImageDimensionsU3Ek__BackingField_5() { return &___U3CrequiresPhysicalImageDimensionsU3Ek__BackingField_5; }
	inline void set_U3CrequiresPhysicalImageDimensionsU3Ek__BackingField_5(bool value)
	{
		___U3CrequiresPhysicalImageDimensionsU3Ek__BackingField_5 = value;
	}

	inline static int32_t get_offset_of_U3CsupportsMutableLibraryU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(Cinfo_tED92D7CBD16BE657927A6B7DB64A22DA21EB7D32, ___U3CsupportsMutableLibraryU3Ek__BackingField_6)); }
	inline bool get_U3CsupportsMutableLibraryU3Ek__BackingField_6() const { return ___U3CsupportsMutableLibraryU3Ek__BackingField_6; }
	inline bool* get_address_of_U3CsupportsMutableLibraryU3Ek__BackingField_6() { return &___U3CsupportsMutableLibraryU3Ek__BackingField_6; }
	inline void set_U3CsupportsMutableLibraryU3Ek__BackingField_6(bool value)
	{
		___U3CsupportsMutableLibraryU3Ek__BackingField_6 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.XR.ARSubsystems.XRImageTrackingSubsystemDescriptor/Cinfo
struct Cinfo_tED92D7CBD16BE657927A6B7DB64A22DA21EB7D32_marshaled_pinvoke
{
	char* ___U3CidU3Ek__BackingField_0;
	Type_t * ___U3CproviderTypeU3Ek__BackingField_1;
	Type_t * ___U3CsubsystemTypeOverrideU3Ek__BackingField_2;
	Type_t * ___U3CsubsystemImplementationTypeU3Ek__BackingField_3;
	int32_t ___U3CsupportsMovingImagesU3Ek__BackingField_4;
	int32_t ___U3CrequiresPhysicalImageDimensionsU3Ek__BackingField_5;
	int32_t ___U3CsupportsMutableLibraryU3Ek__BackingField_6;
};
// Native definition for COM marshalling of UnityEngine.XR.ARSubsystems.XRImageTrackingSubsystemDescriptor/Cinfo
struct Cinfo_tED92D7CBD16BE657927A6B7DB64A22DA21EB7D32_marshaled_com
{
	Il2CppChar* ___U3CidU3Ek__BackingField_0;
	Type_t * ___U3CproviderTypeU3Ek__BackingField_1;
	Type_t * ___U3CsubsystemTypeOverrideU3Ek__BackingField_2;
	Type_t * ___U3CsubsystemImplementationTypeU3Ek__BackingField_3;
	int32_t ___U3CsupportsMovingImagesU3Ek__BackingField_4;
	int32_t ___U3CrequiresPhysicalImageDimensionsU3Ek__BackingField_5;
	int32_t ___U3CsupportsMutableLibraryU3Ek__BackingField_6;
};

// UnityEngine.XR.ARSubsystems.XRObjectTrackingSubsystemDescriptor/Capabilities
struct  Capabilities_tC6F329DD5C73C6B9E04BE77A3AE0E52390BD8685 
{
public:
	union
	{
		struct
		{
		};
		uint8_t Capabilities_tC6F329DD5C73C6B9E04BE77A3AE0E52390BD8685__padding[1];
	};

public:
};


// UnityEngine.XR.ARSubsystems.XRPlaneSubsystemDescriptor/Cinfo
struct  Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD 
{
public:
	// System.String UnityEngine.XR.ARSubsystems.XRPlaneSubsystemDescriptor/Cinfo::<id>k__BackingField
	String_t* ___U3CidU3Ek__BackingField_0;
	// System.Type UnityEngine.XR.ARSubsystems.XRPlaneSubsystemDescriptor/Cinfo::<providerType>k__BackingField
	Type_t * ___U3CproviderTypeU3Ek__BackingField_1;
	// System.Type UnityEngine.XR.ARSubsystems.XRPlaneSubsystemDescriptor/Cinfo::<subsystemTypeOverride>k__BackingField
	Type_t * ___U3CsubsystemTypeOverrideU3Ek__BackingField_2;
	// System.Type UnityEngine.XR.ARSubsystems.XRPlaneSubsystemDescriptor/Cinfo::<subsystemImplementationType>k__BackingField
	Type_t * ___U3CsubsystemImplementationTypeU3Ek__BackingField_3;
	// System.Boolean UnityEngine.XR.ARSubsystems.XRPlaneSubsystemDescriptor/Cinfo::<supportsHorizontalPlaneDetection>k__BackingField
	bool ___U3CsupportsHorizontalPlaneDetectionU3Ek__BackingField_4;
	// System.Boolean UnityEngine.XR.ARSubsystems.XRPlaneSubsystemDescriptor/Cinfo::<supportsVerticalPlaneDetection>k__BackingField
	bool ___U3CsupportsVerticalPlaneDetectionU3Ek__BackingField_5;
	// System.Boolean UnityEngine.XR.ARSubsystems.XRPlaneSubsystemDescriptor/Cinfo::<supportsArbitraryPlaneDetection>k__BackingField
	bool ___U3CsupportsArbitraryPlaneDetectionU3Ek__BackingField_6;
	// System.Boolean UnityEngine.XR.ARSubsystems.XRPlaneSubsystemDescriptor/Cinfo::<supportsBoundaryVertices>k__BackingField
	bool ___U3CsupportsBoundaryVerticesU3Ek__BackingField_7;
	// System.Boolean UnityEngine.XR.ARSubsystems.XRPlaneSubsystemDescriptor/Cinfo::<supportsClassification>k__BackingField
	bool ___U3CsupportsClassificationU3Ek__BackingField_8;

public:
	inline static int32_t get_offset_of_U3CidU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD, ___U3CidU3Ek__BackingField_0)); }
	inline String_t* get_U3CidU3Ek__BackingField_0() const { return ___U3CidU3Ek__BackingField_0; }
	inline String_t** get_address_of_U3CidU3Ek__BackingField_0() { return &___U3CidU3Ek__BackingField_0; }
	inline void set_U3CidU3Ek__BackingField_0(String_t* value)
	{
		___U3CidU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CidU3Ek__BackingField_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CproviderTypeU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD, ___U3CproviderTypeU3Ek__BackingField_1)); }
	inline Type_t * get_U3CproviderTypeU3Ek__BackingField_1() const { return ___U3CproviderTypeU3Ek__BackingField_1; }
	inline Type_t ** get_address_of_U3CproviderTypeU3Ek__BackingField_1() { return &___U3CproviderTypeU3Ek__BackingField_1; }
	inline void set_U3CproviderTypeU3Ek__BackingField_1(Type_t * value)
	{
		___U3CproviderTypeU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CproviderTypeU3Ek__BackingField_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CsubsystemTypeOverrideU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD, ___U3CsubsystemTypeOverrideU3Ek__BackingField_2)); }
	inline Type_t * get_U3CsubsystemTypeOverrideU3Ek__BackingField_2() const { return ___U3CsubsystemTypeOverrideU3Ek__BackingField_2; }
	inline Type_t ** get_address_of_U3CsubsystemTypeOverrideU3Ek__BackingField_2() { return &___U3CsubsystemTypeOverrideU3Ek__BackingField_2; }
	inline void set_U3CsubsystemTypeOverrideU3Ek__BackingField_2(Type_t * value)
	{
		___U3CsubsystemTypeOverrideU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CsubsystemTypeOverrideU3Ek__BackingField_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CsubsystemImplementationTypeU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD, ___U3CsubsystemImplementationTypeU3Ek__BackingField_3)); }
	inline Type_t * get_U3CsubsystemImplementationTypeU3Ek__BackingField_3() const { return ___U3CsubsystemImplementationTypeU3Ek__BackingField_3; }
	inline Type_t ** get_address_of_U3CsubsystemImplementationTypeU3Ek__BackingField_3() { return &___U3CsubsystemImplementationTypeU3Ek__BackingField_3; }
	inline void set_U3CsubsystemImplementationTypeU3Ek__BackingField_3(Type_t * value)
	{
		___U3CsubsystemImplementationTypeU3Ek__BackingField_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CsubsystemImplementationTypeU3Ek__BackingField_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3CsupportsHorizontalPlaneDetectionU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD, ___U3CsupportsHorizontalPlaneDetectionU3Ek__BackingField_4)); }
	inline bool get_U3CsupportsHorizontalPlaneDetectionU3Ek__BackingField_4() const { return ___U3CsupportsHorizontalPlaneDetectionU3Ek__BackingField_4; }
	inline bool* get_address_of_U3CsupportsHorizontalPlaneDetectionU3Ek__BackingField_4() { return &___U3CsupportsHorizontalPlaneDetectionU3Ek__BackingField_4; }
	inline void set_U3CsupportsHorizontalPlaneDetectionU3Ek__BackingField_4(bool value)
	{
		___U3CsupportsHorizontalPlaneDetectionU3Ek__BackingField_4 = value;
	}

	inline static int32_t get_offset_of_U3CsupportsVerticalPlaneDetectionU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD, ___U3CsupportsVerticalPlaneDetectionU3Ek__BackingField_5)); }
	inline bool get_U3CsupportsVerticalPlaneDetectionU3Ek__BackingField_5() const { return ___U3CsupportsVerticalPlaneDetectionU3Ek__BackingField_5; }
	inline bool* get_address_of_U3CsupportsVerticalPlaneDetectionU3Ek__BackingField_5() { return &___U3CsupportsVerticalPlaneDetectionU3Ek__BackingField_5; }
	inline void set_U3CsupportsVerticalPlaneDetectionU3Ek__BackingField_5(bool value)
	{
		___U3CsupportsVerticalPlaneDetectionU3Ek__BackingField_5 = value;
	}

	inline static int32_t get_offset_of_U3CsupportsArbitraryPlaneDetectionU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD, ___U3CsupportsArbitraryPlaneDetectionU3Ek__BackingField_6)); }
	inline bool get_U3CsupportsArbitraryPlaneDetectionU3Ek__BackingField_6() const { return ___U3CsupportsArbitraryPlaneDetectionU3Ek__BackingField_6; }
	inline bool* get_address_of_U3CsupportsArbitraryPlaneDetectionU3Ek__BackingField_6() { return &___U3CsupportsArbitraryPlaneDetectionU3Ek__BackingField_6; }
	inline void set_U3CsupportsArbitraryPlaneDetectionU3Ek__BackingField_6(bool value)
	{
		___U3CsupportsArbitraryPlaneDetectionU3Ek__BackingField_6 = value;
	}

	inline static int32_t get_offset_of_U3CsupportsBoundaryVerticesU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD, ___U3CsupportsBoundaryVerticesU3Ek__BackingField_7)); }
	inline bool get_U3CsupportsBoundaryVerticesU3Ek__BackingField_7() const { return ___U3CsupportsBoundaryVerticesU3Ek__BackingField_7; }
	inline bool* get_address_of_U3CsupportsBoundaryVerticesU3Ek__BackingField_7() { return &___U3CsupportsBoundaryVerticesU3Ek__BackingField_7; }
	inline void set_U3CsupportsBoundaryVerticesU3Ek__BackingField_7(bool value)
	{
		___U3CsupportsBoundaryVerticesU3Ek__BackingField_7 = value;
	}

	inline static int32_t get_offset_of_U3CsupportsClassificationU3Ek__BackingField_8() { return static_cast<int32_t>(offsetof(Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD, ___U3CsupportsClassificationU3Ek__BackingField_8)); }
	inline bool get_U3CsupportsClassificationU3Ek__BackingField_8() const { return ___U3CsupportsClassificationU3Ek__BackingField_8; }
	inline bool* get_address_of_U3CsupportsClassificationU3Ek__BackingField_8() { return &___U3CsupportsClassificationU3Ek__BackingField_8; }
	inline void set_U3CsupportsClassificationU3Ek__BackingField_8(bool value)
	{
		___U3CsupportsClassificationU3Ek__BackingField_8 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.XR.ARSubsystems.XRPlaneSubsystemDescriptor/Cinfo
struct Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD_marshaled_pinvoke
{
	char* ___U3CidU3Ek__BackingField_0;
	Type_t * ___U3CproviderTypeU3Ek__BackingField_1;
	Type_t * ___U3CsubsystemTypeOverrideU3Ek__BackingField_2;
	Type_t * ___U3CsubsystemImplementationTypeU3Ek__BackingField_3;
	int32_t ___U3CsupportsHorizontalPlaneDetectionU3Ek__BackingField_4;
	int32_t ___U3CsupportsVerticalPlaneDetectionU3Ek__BackingField_5;
	int32_t ___U3CsupportsArbitraryPlaneDetectionU3Ek__BackingField_6;
	int32_t ___U3CsupportsBoundaryVerticesU3Ek__BackingField_7;
	int32_t ___U3CsupportsClassificationU3Ek__BackingField_8;
};
// Native definition for COM marshalling of UnityEngine.XR.ARSubsystems.XRPlaneSubsystemDescriptor/Cinfo
struct Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD_marshaled_com
{
	Il2CppChar* ___U3CidU3Ek__BackingField_0;
	Type_t * ___U3CproviderTypeU3Ek__BackingField_1;
	Type_t * ___U3CsubsystemTypeOverrideU3Ek__BackingField_2;
	Type_t * ___U3CsubsystemImplementationTypeU3Ek__BackingField_3;
	int32_t ___U3CsupportsHorizontalPlaneDetectionU3Ek__BackingField_4;
	int32_t ___U3CsupportsVerticalPlaneDetectionU3Ek__BackingField_5;
	int32_t ___U3CsupportsArbitraryPlaneDetectionU3Ek__BackingField_6;
	int32_t ___U3CsupportsBoundaryVerticesU3Ek__BackingField_7;
	int32_t ___U3CsupportsClassificationU3Ek__BackingField_8;
};

// UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor/Cinfo
struct  Cinfo_t2842A97DA95F40ECADDCA24A291B6114A3A5F71A 
{
public:
	// System.Boolean UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor/Cinfo::<supportsInstall>k__BackingField
	bool ___U3CsupportsInstallU3Ek__BackingField_0;
	// System.Boolean UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor/Cinfo::<supportsMatchFrameRate>k__BackingField
	bool ___U3CsupportsMatchFrameRateU3Ek__BackingField_1;
	// System.String UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor/Cinfo::<id>k__BackingField
	String_t* ___U3CidU3Ek__BackingField_2;
	// System.Type UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor/Cinfo::<providerType>k__BackingField
	Type_t * ___U3CproviderTypeU3Ek__BackingField_3;
	// System.Type UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor/Cinfo::<subsystemTypeOverride>k__BackingField
	Type_t * ___U3CsubsystemTypeOverrideU3Ek__BackingField_4;
	// System.Type UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor/Cinfo::<subsystemImplementationType>k__BackingField
	Type_t * ___U3CsubsystemImplementationTypeU3Ek__BackingField_5;

public:
	inline static int32_t get_offset_of_U3CsupportsInstallU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(Cinfo_t2842A97DA95F40ECADDCA24A291B6114A3A5F71A, ___U3CsupportsInstallU3Ek__BackingField_0)); }
	inline bool get_U3CsupportsInstallU3Ek__BackingField_0() const { return ___U3CsupportsInstallU3Ek__BackingField_0; }
	inline bool* get_address_of_U3CsupportsInstallU3Ek__BackingField_0() { return &___U3CsupportsInstallU3Ek__BackingField_0; }
	inline void set_U3CsupportsInstallU3Ek__BackingField_0(bool value)
	{
		___U3CsupportsInstallU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of_U3CsupportsMatchFrameRateU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(Cinfo_t2842A97DA95F40ECADDCA24A291B6114A3A5F71A, ___U3CsupportsMatchFrameRateU3Ek__BackingField_1)); }
	inline bool get_U3CsupportsMatchFrameRateU3Ek__BackingField_1() const { return ___U3CsupportsMatchFrameRateU3Ek__BackingField_1; }
	inline bool* get_address_of_U3CsupportsMatchFrameRateU3Ek__BackingField_1() { return &___U3CsupportsMatchFrameRateU3Ek__BackingField_1; }
	inline void set_U3CsupportsMatchFrameRateU3Ek__BackingField_1(bool value)
	{
		___U3CsupportsMatchFrameRateU3Ek__BackingField_1 = value;
	}

	inline static int32_t get_offset_of_U3CidU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(Cinfo_t2842A97DA95F40ECADDCA24A291B6114A3A5F71A, ___U3CidU3Ek__BackingField_2)); }
	inline String_t* get_U3CidU3Ek__BackingField_2() const { return ___U3CidU3Ek__BackingField_2; }
	inline String_t** get_address_of_U3CidU3Ek__BackingField_2() { return &___U3CidU3Ek__BackingField_2; }
	inline void set_U3CidU3Ek__BackingField_2(String_t* value)
	{
		___U3CidU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CidU3Ek__BackingField_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CproviderTypeU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(Cinfo_t2842A97DA95F40ECADDCA24A291B6114A3A5F71A, ___U3CproviderTypeU3Ek__BackingField_3)); }
	inline Type_t * get_U3CproviderTypeU3Ek__BackingField_3() const { return ___U3CproviderTypeU3Ek__BackingField_3; }
	inline Type_t ** get_address_of_U3CproviderTypeU3Ek__BackingField_3() { return &___U3CproviderTypeU3Ek__BackingField_3; }
	inline void set_U3CproviderTypeU3Ek__BackingField_3(Type_t * value)
	{
		___U3CproviderTypeU3Ek__BackingField_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CproviderTypeU3Ek__BackingField_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3CsubsystemTypeOverrideU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(Cinfo_t2842A97DA95F40ECADDCA24A291B6114A3A5F71A, ___U3CsubsystemTypeOverrideU3Ek__BackingField_4)); }
	inline Type_t * get_U3CsubsystemTypeOverrideU3Ek__BackingField_4() const { return ___U3CsubsystemTypeOverrideU3Ek__BackingField_4; }
	inline Type_t ** get_address_of_U3CsubsystemTypeOverrideU3Ek__BackingField_4() { return &___U3CsubsystemTypeOverrideU3Ek__BackingField_4; }
	inline void set_U3CsubsystemTypeOverrideU3Ek__BackingField_4(Type_t * value)
	{
		___U3CsubsystemTypeOverrideU3Ek__BackingField_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CsubsystemTypeOverrideU3Ek__BackingField_4), (void*)value);
	}

	inline static int32_t get_offset_of_U3CsubsystemImplementationTypeU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(Cinfo_t2842A97DA95F40ECADDCA24A291B6114A3A5F71A, ___U3CsubsystemImplementationTypeU3Ek__BackingField_5)); }
	inline Type_t * get_U3CsubsystemImplementationTypeU3Ek__BackingField_5() const { return ___U3CsubsystemImplementationTypeU3Ek__BackingField_5; }
	inline Type_t ** get_address_of_U3CsubsystemImplementationTypeU3Ek__BackingField_5() { return &___U3CsubsystemImplementationTypeU3Ek__BackingField_5; }
	inline void set_U3CsubsystemImplementationTypeU3Ek__BackingField_5(Type_t * value)
	{
		___U3CsubsystemImplementationTypeU3Ek__BackingField_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CsubsystemImplementationTypeU3Ek__BackingField_5), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor/Cinfo
struct Cinfo_t2842A97DA95F40ECADDCA24A291B6114A3A5F71A_marshaled_pinvoke
{
	int32_t ___U3CsupportsInstallU3Ek__BackingField_0;
	int32_t ___U3CsupportsMatchFrameRateU3Ek__BackingField_1;
	char* ___U3CidU3Ek__BackingField_2;
	Type_t * ___U3CproviderTypeU3Ek__BackingField_3;
	Type_t * ___U3CsubsystemTypeOverrideU3Ek__BackingField_4;
	Type_t * ___U3CsubsystemImplementationTypeU3Ek__BackingField_5;
};
// Native definition for COM marshalling of UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor/Cinfo
struct Cinfo_t2842A97DA95F40ECADDCA24A291B6114A3A5F71A_marshaled_com
{
	int32_t ___U3CsupportsInstallU3Ek__BackingField_0;
	int32_t ___U3CsupportsMatchFrameRateU3Ek__BackingField_1;
	Il2CppChar* ___U3CidU3Ek__BackingField_2;
	Type_t * ___U3CproviderTypeU3Ek__BackingField_3;
	Type_t * ___U3CsubsystemTypeOverrideU3Ek__BackingField_4;
	Type_t * ___U3CsubsystemImplementationTypeU3Ek__BackingField_5;
};

// UnityEngine.XR.ARSubsystems.TrackingSubsystem`4<UnityEngine.XR.ARSubsystems.BoundedPlane,UnityEngine.XR.ARSubsystems.XRPlaneSubsystem,UnityEngine.XR.ARSubsystems.XRPlaneSubsystemDescriptor,UnityEngine.XR.ARSubsystems.XRPlaneSubsystem/Provider>
struct  TrackingSubsystem_4_t4CF696722E0C05A2C0234E78E673F4F17EEC1C94  : public SubsystemWithProvider_3_t2D48685843F3C8CD4AE71F1303F357DCAE9FD683
{
public:

public:
};


// UnityEngine.XR.ARSubsystems.TrackingSubsystem`4<UnityEngine.XR.ARSubsystems.XRAnchor,UnityEngine.XR.ARSubsystems.XRAnchorSubsystem,UnityEngine.XR.ARSubsystems.XRAnchorSubsystemDescriptor,UnityEngine.XR.ARSubsystems.XRAnchorSubsystem/Provider>
struct  TrackingSubsystem_4_t5C7E2B8B7A9943DF8B9FF5B46FB5AFA71E9826F1  : public SubsystemWithProvider_3_tD91EB2F57F19DA2CDB9A5E0011978CA1EA351BA2
{
public:

public:
};


// UnityEngine.XR.ARSubsystems.TrackingSubsystem`4<UnityEngine.XR.ARSubsystems.XREnvironmentProbe,UnityEngine.XR.ARSubsystems.XREnvironmentProbeSubsystem,UnityEngine.XR.ARSubsystems.XREnvironmentProbeSubsystemDescriptor,UnityEngine.XR.ARSubsystems.XREnvironmentProbeSubsystem/Provider>
struct  TrackingSubsystem_4_t3D5C3B3749ABE82CC258AD552288C51FAE67DA1A  : public SubsystemWithProvider_3_t8B33A21A2B183DB3F429FD3F0A899D7ED1BB4DEA
{
public:

public:
};


// UnityEngine.XR.ARSubsystems.TrackingSubsystem`4<UnityEngine.XR.ARSubsystems.XRHumanBody,UnityEngine.XR.ARSubsystems.XRHumanBodySubsystem,UnityEngine.XR.ARSubsystems.XRHumanBodySubsystemDescriptor,UnityEngine.XR.ARSubsystems.XRHumanBodySubsystem/Provider>
struct  TrackingSubsystem_4_tB0BB38AE7B56DA9BE6D8463DD64E4766AD686B86  : public SubsystemWithProvider_3_t152AEC9946809B23BD9A7DE32A2113E12B8CE2C2
{
public:

public:
};


// UnityEngine.XR.ARSubsystems.TrackingSubsystem`4<UnityEngine.XR.ARSubsystems.XRParticipant,UnityEngine.XR.ARSubsystems.XRParticipantSubsystem,UnityEngine.XR.ARSubsystems.XRParticipantSubsystemDescriptor,UnityEngine.XR.ARSubsystems.XRParticipantSubsystem/Provider>
struct  TrackingSubsystem_4_tF2C9DD677702042D71E5050214FE516389400277  : public SubsystemWithProvider_3_t0293B6FD1251DCA5DC0D3396C57B87118ECE01DF
{
public:

public:
};


// UnityEngine.XR.ARSubsystems.TrackingSubsystem`4<UnityEngine.XR.ARSubsystems.XRPointCloud,UnityEngine.XR.ARSubsystems.XRDepthSubsystem,UnityEngine.XR.ARSubsystems.XRDepthSubsystemDescriptor,UnityEngine.XR.ARSubsystems.XRDepthSubsystem/Provider>
struct  TrackingSubsystem_4_t52B43FDBB6E641E351193D790222EA1C68B2984E  : public SubsystemWithProvider_3_tD436D6BE4AA164ED727D09EFDE50FF8DCAA50D98
{
public:

public:
};


// UnityEngine.XR.ARSubsystems.TrackingSubsystem`4<UnityEngine.XR.ARSubsystems.XRRaycast,UnityEngine.XR.ARSubsystems.XRRaycastSubsystem,UnityEngine.XR.ARSubsystems.XRRaycastSubsystemDescriptor,UnityEngine.XR.ARSubsystems.XRRaycastSubsystem/Provider>
struct  TrackingSubsystem_4_t87A57AE1E1117ED73BBD3B84DD595F36FA975077  : public SubsystemWithProvider_3_t6C72A4BB6DC4A9CC6B00E99D4A5EF1E1C9BBAF1E
{
public:

public:
};


// UnityEngine.XR.ARSubsystems.TrackingSubsystem`4<UnityEngine.XR.ARSubsystems.XRTrackedImage,UnityEngine.XR.ARSubsystems.XRImageTrackingSubsystem,UnityEngine.XR.ARSubsystems.XRImageTrackingSubsystemDescriptor,UnityEngine.XR.ARSubsystems.XRImageTrackingSubsystem/Provider>
struct  TrackingSubsystem_4_tCE5EA1B7325877FD88C7CF41F681F25B1FC1717A  : public SubsystemWithProvider_3_t249D82EF0730E7FF15F2B19C4BB45B2E08CF620B
{
public:

public:
};


// UnityEngine.XR.ARSubsystems.TrackingSubsystem`4<UnityEngine.XR.ARSubsystems.XRTrackedObject,UnityEngine.XR.ARSubsystems.XRObjectTrackingSubsystem,UnityEngine.XR.ARSubsystems.XRObjectTrackingSubsystemDescriptor,UnityEngine.XR.ARSubsystems.XRObjectTrackingSubsystem/Provider>
struct  TrackingSubsystem_4_t1E41FDFF37B1529EED554D89481040B067E300EB  : public SubsystemWithProvider_3_t2622D99FF6F2A6B95B2E82547A76A7E7712AA7DB
{
public:

public:
};


// <PrivateImplementationDetails>
struct  U3CPrivateImplementationDetailsU3E_t52768071AC670B242659CF974483AF846D6828BF  : public RuntimeObject
{
public:

public:
};

struct U3CPrivateImplementationDetailsU3E_t52768071AC670B242659CF974483AF846D6828BF_StaticFields
{
public:
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=32 <PrivateImplementationDetails>::E8CF6E95EA720603B480AF38C38D806DF25A1A1623EB6551AA9285B2F4C83C50
	__StaticArrayInitTypeSizeU3D32_t0BFEA9C6F9BC1DDA1D7FB61D35C94D361B765A5C  ___E8CF6E95EA720603B480AF38C38D806DF25A1A1623EB6551AA9285B2F4C83C50_0;

public:
	inline static int32_t get_offset_of_E8CF6E95EA720603B480AF38C38D806DF25A1A1623EB6551AA9285B2F4C83C50_0() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t52768071AC670B242659CF974483AF846D6828BF_StaticFields, ___E8CF6E95EA720603B480AF38C38D806DF25A1A1623EB6551AA9285B2F4C83C50_0)); }
	inline __StaticArrayInitTypeSizeU3D32_t0BFEA9C6F9BC1DDA1D7FB61D35C94D361B765A5C  get_E8CF6E95EA720603B480AF38C38D806DF25A1A1623EB6551AA9285B2F4C83C50_0() const { return ___E8CF6E95EA720603B480AF38C38D806DF25A1A1623EB6551AA9285B2F4C83C50_0; }
	inline __StaticArrayInitTypeSizeU3D32_t0BFEA9C6F9BC1DDA1D7FB61D35C94D361B765A5C * get_address_of_E8CF6E95EA720603B480AF38C38D806DF25A1A1623EB6551AA9285B2F4C83C50_0() { return &___E8CF6E95EA720603B480AF38C38D806DF25A1A1623EB6551AA9285B2F4C83C50_0; }
	inline void set_E8CF6E95EA720603B480AF38C38D806DF25A1A1623EB6551AA9285B2F4C83C50_0(__StaticArrayInitTypeSizeU3D32_t0BFEA9C6F9BC1DDA1D7FB61D35C94D361B765A5C  value)
	{
		___E8CF6E95EA720603B480AF38C38D806DF25A1A1623EB6551AA9285B2F4C83C50_0 = value;
	}
};


// UnityEngine.XR.ARKit.ARKitImageDatabase
struct  ARKitImageDatabase_t1D1B5D985355CF3D2597C8FD863EB46EF55B1F71  : public MutableRuntimeReferenceImageLibrary_t887376CE46B48DEEC6E8655D429BADCA6E3C7EAA
{
public:
	// System.IntPtr UnityEngine.XR.ARKit.ARKitImageDatabase::<nativePtr>k__BackingField
	intptr_t ___U3CnativePtrU3Ek__BackingField_0;

public:
	inline static int32_t get_offset_of_U3CnativePtrU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(ARKitImageDatabase_t1D1B5D985355CF3D2597C8FD863EB46EF55B1F71, ___U3CnativePtrU3Ek__BackingField_0)); }
	inline intptr_t get_U3CnativePtrU3Ek__BackingField_0() const { return ___U3CnativePtrU3Ek__BackingField_0; }
	inline intptr_t* get_address_of_U3CnativePtrU3Ek__BackingField_0() { return &___U3CnativePtrU3Ek__BackingField_0; }
	inline void set_U3CnativePtrU3Ek__BackingField_0(intptr_t value)
	{
		___U3CnativePtrU3Ek__BackingField_0 = value;
	}
};

struct ARKitImageDatabase_t1D1B5D985355CF3D2597C8FD863EB46EF55B1F71_StaticFields
{
public:
	// UnityEngine.TextureFormat[] UnityEngine.XR.ARKit.ARKitImageDatabase::k_SupportedFormats
	TextureFormatU5BU5D_tC081C559AF0CE6678E9673429ADDC9B93B6B45CE* ___k_SupportedFormats_1;

public:
	inline static int32_t get_offset_of_k_SupportedFormats_1() { return static_cast<int32_t>(offsetof(ARKitImageDatabase_t1D1B5D985355CF3D2597C8FD863EB46EF55B1F71_StaticFields, ___k_SupportedFormats_1)); }
	inline TextureFormatU5BU5D_tC081C559AF0CE6678E9673429ADDC9B93B6B45CE* get_k_SupportedFormats_1() const { return ___k_SupportedFormats_1; }
	inline TextureFormatU5BU5D_tC081C559AF0CE6678E9673429ADDC9B93B6B45CE** get_address_of_k_SupportedFormats_1() { return &___k_SupportedFormats_1; }
	inline void set_k_SupportedFormats_1(TextureFormatU5BU5D_tC081C559AF0CE6678E9673429ADDC9B93B6B45CE* value)
	{
		___k_SupportedFormats_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___k_SupportedFormats_1), (void*)value);
	}
};


// UnityEngine.XR.ARKit.ARWorldMapRequestStatus
struct  ARWorldMapRequestStatus_t9A2ABBA3D64593F57CCFC959D7D294CE5E54E73C 
{
public:
	// System.Int32 UnityEngine.XR.ARKit.ARWorldMapRequestStatus::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ARWorldMapRequestStatus_t9A2ABBA3D64593F57CCFC959D7D294CE5E54E73C, ___value___2)); }
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

// UnityEngine.XR.ARSubsystems.Feature
struct  Feature_t079F5923A4893A9E07B968C27F44AC5FCAC87C83 
{
public:
	// System.UInt64 UnityEngine.XR.ARSubsystems.Feature::value__
	uint64_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Feature_t079F5923A4893A9E07B968C27F44AC5FCAC87C83, ___value___2)); }
	inline uint64_t get_value___2() const { return ___value___2; }
	inline uint64_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(uint64_t value)
	{
		___value___2 = value;
	}
};


// System.Int32Enum
struct  Int32Enum_t9B63F771913F2B6D586F1173B44A41FBE26F6B5C 
{
public:
	// System.Int32 System.Int32Enum::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Int32Enum_t9B63F771913F2B6D586F1173B44A41FBE26F6B5C, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Unity.Jobs.JobHandle
struct  JobHandle_t8AEB8D31C25D7774C71D62B0C662525E6E36D847 
{
public:
	// System.IntPtr Unity.Jobs.JobHandle::jobGroup
	intptr_t ___jobGroup_0;
	// System.Int32 Unity.Jobs.JobHandle::version
	int32_t ___version_1;

public:
	inline static int32_t get_offset_of_jobGroup_0() { return static_cast<int32_t>(offsetof(JobHandle_t8AEB8D31C25D7774C71D62B0C662525E6E36D847, ___jobGroup_0)); }
	inline intptr_t get_jobGroup_0() const { return ___jobGroup_0; }
	inline intptr_t* get_address_of_jobGroup_0() { return &___jobGroup_0; }
	inline void set_jobGroup_0(intptr_t value)
	{
		___jobGroup_0 = value;
	}

	inline static int32_t get_offset_of_version_1() { return static_cast<int32_t>(offsetof(JobHandle_t8AEB8D31C25D7774C71D62B0C662525E6E36D847, ___version_1)); }
	inline int32_t get_version_1() const { return ___version_1; }
	inline int32_t* get_address_of_version_1() { return &___version_1; }
	inline void set_version_1(int32_t value)
	{
		___version_1 = value;
	}
};


// UnityEngine.XR.ARKit.ManagedReferenceImage
struct  ManagedReferenceImage_t867FD513C8CBF1F9824DBFB215783BE8C33F0FA1 
{
public:
	// System.Guid UnityEngine.XR.ARKit.ManagedReferenceImage::guid
	Guid_t  ___guid_0;
	// System.Guid UnityEngine.XR.ARKit.ManagedReferenceImage::textureGuid
	Guid_t  ___textureGuid_1;
	// UnityEngine.Vector2 UnityEngine.XR.ARKit.ManagedReferenceImage::size
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___size_2;
	// System.IntPtr UnityEngine.XR.ARKit.ManagedReferenceImage::name
	intptr_t ___name_3;
	// System.IntPtr UnityEngine.XR.ARKit.ManagedReferenceImage::texture
	intptr_t ___texture_4;

public:
	inline static int32_t get_offset_of_guid_0() { return static_cast<int32_t>(offsetof(ManagedReferenceImage_t867FD513C8CBF1F9824DBFB215783BE8C33F0FA1, ___guid_0)); }
	inline Guid_t  get_guid_0() const { return ___guid_0; }
	inline Guid_t * get_address_of_guid_0() { return &___guid_0; }
	inline void set_guid_0(Guid_t  value)
	{
		___guid_0 = value;
	}

	inline static int32_t get_offset_of_textureGuid_1() { return static_cast<int32_t>(offsetof(ManagedReferenceImage_t867FD513C8CBF1F9824DBFB215783BE8C33F0FA1, ___textureGuid_1)); }
	inline Guid_t  get_textureGuid_1() const { return ___textureGuid_1; }
	inline Guid_t * get_address_of_textureGuid_1() { return &___textureGuid_1; }
	inline void set_textureGuid_1(Guid_t  value)
	{
		___textureGuid_1 = value;
	}

	inline static int32_t get_offset_of_size_2() { return static_cast<int32_t>(offsetof(ManagedReferenceImage_t867FD513C8CBF1F9824DBFB215783BE8C33F0FA1, ___size_2)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_size_2() const { return ___size_2; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_size_2() { return &___size_2; }
	inline void set_size_2(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___size_2 = value;
	}

	inline static int32_t get_offset_of_name_3() { return static_cast<int32_t>(offsetof(ManagedReferenceImage_t867FD513C8CBF1F9824DBFB215783BE8C33F0FA1, ___name_3)); }
	inline intptr_t get_name_3() const { return ___name_3; }
	inline intptr_t* get_address_of_name_3() { return &___name_3; }
	inline void set_name_3(intptr_t value)
	{
		___name_3 = value;
	}

	inline static int32_t get_offset_of_texture_4() { return static_cast<int32_t>(offsetof(ManagedReferenceImage_t867FD513C8CBF1F9824DBFB215783BE8C33F0FA1, ___texture_4)); }
	inline intptr_t get_texture_4() const { return ___texture_4; }
	inline intptr_t* get_address_of_texture_4() { return &___texture_4; }
	inline void set_texture_4(intptr_t value)
	{
		___texture_4 = value;
	}
};


// Unity.Collections.NativeArrayOptions
struct  NativeArrayOptions_t181E2A9B49F6D62868DE6428E4CDF148AEF558E3 
{
public:
	// System.Int32 Unity.Collections.NativeArrayOptions::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(NativeArrayOptions_t181E2A9B49F6D62868DE6428E4CDF148AEF558E3, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.XR.ARKit.NativeChanges
struct  NativeChanges_t2AB4CBD7DD7F23F421DFD0CE4D4CDB26402D6D76 
{
public:
	// System.IntPtr UnityEngine.XR.ARKit.NativeChanges::m_Ptr
	intptr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(NativeChanges_t2AB4CBD7DD7F23F421DFD0CE4D4CDB26402D6D76, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
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


// UnityEngine.Ray
struct  Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6 
{
public:
	// UnityEngine.Vector3 UnityEngine.Ray::m_Origin
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___m_Origin_0;
	// UnityEngine.Vector3 UnityEngine.Ray::m_Direction
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___m_Direction_1;

public:
	inline static int32_t get_offset_of_m_Origin_0() { return static_cast<int32_t>(offsetof(Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6, ___m_Origin_0)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_m_Origin_0() const { return ___m_Origin_0; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_m_Origin_0() { return &___m_Origin_0; }
	inline void set_m_Origin_0(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___m_Origin_0 = value;
	}

	inline static int32_t get_offset_of_m_Direction_1() { return static_cast<int32_t>(offsetof(Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6, ___m_Direction_1)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_m_Direction_1() const { return ___m_Direction_1; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_m_Direction_1() { return &___m_Direction_1; }
	inline void set_m_Direction_1(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___m_Direction_1 = value;
	}
};


// System.RuntimeFieldHandle
struct  RuntimeFieldHandle_t7BE65FC857501059EBAC9772C93B02CD413D9C96 
{
public:
	// System.IntPtr System.RuntimeFieldHandle::value
	intptr_t ___value_0;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(RuntimeFieldHandle_t7BE65FC857501059EBAC9772C93B02CD413D9C96, ___value_0)); }
	inline intptr_t get_value_0() const { return ___value_0; }
	inline intptr_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(intptr_t value)
	{
		___value_0 = value;
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


// UnityEngine.ScreenOrientation
struct  ScreenOrientation_tDD9EF2729A0D580721770597532935B0A7ADE020 
{
public:
	// System.Int32 UnityEngine.ScreenOrientation::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ScreenOrientation_tDD9EF2729A0D580721770597532935B0A7ADE020, ___value___2)); }
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


// UnityEngine.XR.ARSubsystems.SessionInstallationStatus
struct  SessionInstallationStatus_t5298F0EEA216D050FFE923AE490498BBF0792F7E 
{
public:
	// System.Int32 UnityEngine.XR.ARSubsystems.SessionInstallationStatus::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(SessionInstallationStatus_t5298F0EEA216D050FFE923AE490498BBF0792F7E, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.XR.ARKit.SetReferenceLibraryResult
struct  SetReferenceLibraryResult_t5F5FC87DC43CB92C6332217BE1C755F59E8E5303 
{
public:
	// System.Int32 UnityEngine.XR.ARKit.SetReferenceLibraryResult::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(SetReferenceLibraryResult_t5F5FC87DC43CB92C6332217BE1C755F59E8E5303, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
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


// UnityEngine.XR.ARSubsystems.TrackableType
struct  TrackableType_t2352F7091A5BE0192C8D908019BA7481A347C85F 
{
public:
	// System.Int32 UnityEngine.XR.ARSubsystems.TrackableType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TrackableType_t2352F7091A5BE0192C8D908019BA7481A347C85F, ___value___2)); }
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


// UnityEngine.XR.ARSubsystems.XRCameraConfiguration
struct  XRCameraConfiguration_t2393055E5547307393E9C73AB13B95E0785A4F7A 
{
public:
	// UnityEngine.Vector2Int UnityEngine.XR.ARSubsystems.XRCameraConfiguration::m_Resolution
	Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  ___m_Resolution_0;
	// System.Int32 UnityEngine.XR.ARSubsystems.XRCameraConfiguration::m_Framerate
	int32_t ___m_Framerate_1;
	// System.IntPtr UnityEngine.XR.ARSubsystems.XRCameraConfiguration::m_NativeConfigurationHandle
	intptr_t ___m_NativeConfigurationHandle_2;

public:
	inline static int32_t get_offset_of_m_Resolution_0() { return static_cast<int32_t>(offsetof(XRCameraConfiguration_t2393055E5547307393E9C73AB13B95E0785A4F7A, ___m_Resolution_0)); }
	inline Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  get_m_Resolution_0() const { return ___m_Resolution_0; }
	inline Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9 * get_address_of_m_Resolution_0() { return &___m_Resolution_0; }
	inline void set_m_Resolution_0(Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  value)
	{
		___m_Resolution_0 = value;
	}

	inline static int32_t get_offset_of_m_Framerate_1() { return static_cast<int32_t>(offsetof(XRCameraConfiguration_t2393055E5547307393E9C73AB13B95E0785A4F7A, ___m_Framerate_1)); }
	inline int32_t get_m_Framerate_1() const { return ___m_Framerate_1; }
	inline int32_t* get_address_of_m_Framerate_1() { return &___m_Framerate_1; }
	inline void set_m_Framerate_1(int32_t value)
	{
		___m_Framerate_1 = value;
	}

	inline static int32_t get_offset_of_m_NativeConfigurationHandle_2() { return static_cast<int32_t>(offsetof(XRCameraConfiguration_t2393055E5547307393E9C73AB13B95E0785A4F7A, ___m_NativeConfigurationHandle_2)); }
	inline intptr_t get_m_NativeConfigurationHandle_2() const { return ___m_NativeConfigurationHandle_2; }
	inline intptr_t* get_address_of_m_NativeConfigurationHandle_2() { return &___m_NativeConfigurationHandle_2; }
	inline void set_m_NativeConfigurationHandle_2(intptr_t value)
	{
		___m_NativeConfigurationHandle_2 = value;
	}
};


// UnityEngine.XR.ARSubsystems.XRCameraFrameProperties
struct  XRCameraFrameProperties_t57C3A208DCCC01241BA413286A98B1726773200C 
{
public:
	// System.Int32 UnityEngine.XR.ARSubsystems.XRCameraFrameProperties::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(XRCameraFrameProperties_t57C3A208DCCC01241BA413286A98B1726773200C, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.XR.ARSubsystems.XRCameraIntrinsics
struct  XRCameraIntrinsics_t85F1514E263A6C6DE96DBA5448B44F11F35395FD 
{
public:
	// UnityEngine.Vector2 UnityEngine.XR.ARSubsystems.XRCameraIntrinsics::m_FocalLength
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___m_FocalLength_0;
	// UnityEngine.Vector2 UnityEngine.XR.ARSubsystems.XRCameraIntrinsics::m_PrincipalPoint
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___m_PrincipalPoint_1;
	// UnityEngine.Vector2Int UnityEngine.XR.ARSubsystems.XRCameraIntrinsics::m_Resolution
	Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  ___m_Resolution_2;

public:
	inline static int32_t get_offset_of_m_FocalLength_0() { return static_cast<int32_t>(offsetof(XRCameraIntrinsics_t85F1514E263A6C6DE96DBA5448B44F11F35395FD, ___m_FocalLength_0)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_m_FocalLength_0() const { return ___m_FocalLength_0; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_m_FocalLength_0() { return &___m_FocalLength_0; }
	inline void set_m_FocalLength_0(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___m_FocalLength_0 = value;
	}

	inline static int32_t get_offset_of_m_PrincipalPoint_1() { return static_cast<int32_t>(offsetof(XRCameraIntrinsics_t85F1514E263A6C6DE96DBA5448B44F11F35395FD, ___m_PrincipalPoint_1)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_m_PrincipalPoint_1() const { return ___m_PrincipalPoint_1; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_m_PrincipalPoint_1() { return &___m_PrincipalPoint_1; }
	inline void set_m_PrincipalPoint_1(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___m_PrincipalPoint_1 = value;
	}

	inline static int32_t get_offset_of_m_Resolution_2() { return static_cast<int32_t>(offsetof(XRCameraIntrinsics_t85F1514E263A6C6DE96DBA5448B44F11F35395FD, ___m_Resolution_2)); }
	inline Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  get_m_Resolution_2() const { return ___m_Resolution_2; }
	inline Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9 * get_address_of_m_Resolution_2() { return &___m_Resolution_2; }
	inline void set_m_Resolution_2(Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  value)
	{
		___m_Resolution_2 = value;
	}
};


// UnityEngine.XR.ARSubsystems.XRCameraSubsystem
struct  XRCameraSubsystem_t3B32F6EA8A2E4D23AF240B5D21C34759D2613AC9  : public SubsystemWithProvider_3_tA938665692EBC0CA746A276F8413E462E8930FD4
{
public:

public:
};


// UnityEngine.XR.ARSubsystems.XROcclusionSubsystem
struct  XROcclusionSubsystem_t7546B929F9B5B6EB13B975FE4DB1F4099EE533B8  : public SubsystemWithProvider_3_t2838D413336061A31AFDEA49065AD29BD1EB3A1B
{
public:

public:
};


// UnityEngine.XR.ARKit.ARKitCameraSubsystem/CameraConfigurationResult
struct  CameraConfigurationResult_t88B2CEBCA2C7C5310468B805A6C738A5ED5D04E9 
{
public:
	// System.Int32 UnityEngine.XR.ARKit.ARKitCameraSubsystem/CameraConfigurationResult::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(CameraConfigurationResult_t88B2CEBCA2C7C5310468B805A6C738A5ED5D04E9, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.XR.ARKit.ARKitCpuImageApi/ImageType
struct  ImageType_tA6813318BDBCD6CA15A1A64D300FD2A32911CEE4 
{
public:
	// System.Int32 UnityEngine.XR.ARKit.ARKitCpuImageApi/ImageType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ImageType_tA6813318BDBCD6CA15A1A64D300FD2A32911CEE4, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.XR.ARSubsystems.XRAnchorSubsystem/Provider
struct  Provider_t9F286D20EB73EBBA4B6E7203C7A9051BE673C2E2  : public SubsystemProvider_1_t302358330269847780327C2298A4FFA7D79AF2BF
{
public:

public:
};


// UnityEngine.XR.ARSubsystems.XRCameraSubsystem/Provider
struct  Provider_t55916B0D2766C320DCA36A0C870BA2FD80F8B6D1  : public SubsystemProvider_1_t3B6396AEE76B5D8268802608E3593AA3D48DB307
{
public:

public:
};


// UnityEngine.XR.ARSubsystems.XRCpuImage/Format
struct  Format_tC8D4CDE6941B0CAE3E1C07EC826E7E253846168A 
{
public:
	// System.Int32 UnityEngine.XR.ARSubsystems.XRCpuImage/Format::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Format_tC8D4CDE6941B0CAE3E1C07EC826E7E253846168A, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.XR.ARSubsystems.XRDepthSubsystem/Provider
struct  Provider_t8E88C17A70269CD3E96909AFCCA952AAA7DEC0B6  : public SubsystemProvider_1_tBB539901FE99992CAA10A1EFDFA610E048498E98
{
public:

public:
};


// UnityEngine.XR.ARSubsystems.XRDepthSubsystemDescriptor/Capabilities
struct  Capabilities_t6199DDFE580DA802DBAEC0155BA1C345525286CC 
{
public:
	// System.Int32 UnityEngine.XR.ARSubsystems.XRDepthSubsystemDescriptor/Capabilities::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Capabilities_t6199DDFE580DA802DBAEC0155BA1C345525286CC, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.XR.ARSubsystems.XREnvironmentProbeSubsystem/Provider
struct  Provider_tAF87FE3E906FDBF14F06488A1AA5E80400EFE190  : public SubsystemProvider_1_tC3DB99A11F9F3210CE2ABA9FE09C127C5B13FF80
{
public:

public:
};


// UnityEngine.XR.ARSubsystems.XRHumanBodySubsystem/Provider
struct  Provider_t055C90C34B2BCE8D134DF44C12823E320519168C  : public SubsystemProvider_1_tBF37BFFB47314B7D87E24F4C4903C90930C0302C
{
public:

public:
};


// UnityEngine.XR.ARSubsystems.XRImageTrackingSubsystem/Provider
struct  Provider_tA7CEF856C3BC486ADEBD656F5535E24262AAAE9E  : public SubsystemProvider_1_t3086BC462E1384FBB8137E64FA6C513FC002E440
{
public:

public:
};


// UnityEngine.XR.ARSubsystems.XRObjectTrackingSubsystem/Provider
struct  Provider_t35977A2A0AA6C338BC9893668DD32F0294A9C01E  : public SubsystemProvider_1_t71FE677A1A2F32123FE4C7868D5943892028AE12
{
public:

public:
};


// UnityEngine.XR.ARSubsystems.XROcclusionSubsystem/Provider
struct  Provider_t5B60C630FB68EFEAB6FA2F3D9A732C144003B7FB  : public SubsystemProvider_1_t57D5C398A7A30AC3C3674CA126FAE612BC00F597
{
public:

public:
};


// UnityEngine.XR.ARSubsystems.XRParticipantSubsystem/Provider
struct  Provider_t1D0BC515976D24FD30341AC456ACFCB2DE4A344E  : public SubsystemProvider_1_t3D6D4D936F16F3264F75D1BAB46A4A398F18F204
{
public:

public:
};


// UnityEngine.XR.ARSubsystems.XRParticipantSubsystemDescriptor/Capabilities
struct  Capabilities_t9DF0D3D327C4E491811A4DFCF21EBD355596C4D0 
{
public:
	// System.Int32 UnityEngine.XR.ARSubsystems.XRParticipantSubsystemDescriptor/Capabilities::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Capabilities_t9DF0D3D327C4E491811A4DFCF21EBD355596C4D0, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.XR.ARSubsystems.XRPlaneSubsystem/Provider
struct  Provider_t6CB5B1036B0AAED1379F3828D695A6942B72BA12  : public SubsystemProvider_1_tF2F3B0C041BDD07A00CD49B25AE6016B61F24816
{
public:

public:
};


// UnityEngine.XR.ARSubsystems.XRRaycastSubsystem/Provider
struct  Provider_tF185BE0541D2066CD242583CEFE7709DD22DD227  : public SubsystemProvider_1_t7ACBE98539B067B19E2D5BCC2B852277F4A38875
{
public:

public:
};


// UnityEngine.XR.ARSubsystems.XRSessionSubsystem/Provider
struct  Provider_t4C3675997BB8AF3A6A32C3EC3C93C10E4D3E8D1A  : public SubsystemProvider_1_tFA56F133FD9BCE90A1C4C7D15FFE2571963D8DE4
{
public:

public:
};


// UnityEngine.XR.ARKit.ARKitSessionSubsystem/NativeApi/Availability
struct  Availability_tC71B9EC590C2DBAC608742646F563CEC07C89E79 
{
public:
	// System.Int32 UnityEngine.XR.ARKit.ARKitSessionSubsystem/NativeApi/Availability::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Availability_tC71B9EC590C2DBAC608742646F563CEC07C89E79, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.BoundedPlane>
struct  NativeArray_1_t056649BD2D6D7DDC87945B1C2AEE66C39F4667B3 
{
public:
	// System.Void* Unity.Collections.NativeArray`1::m_Buffer
	void* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeArray`1::m_Length
	int32_t ___m_Length_1;
	// Unity.Collections.Allocator Unity.Collections.NativeArray`1::m_AllocatorLabel
	int32_t ___m_AllocatorLabel_2;

public:
	inline static int32_t get_offset_of_m_Buffer_0() { return static_cast<int32_t>(offsetof(NativeArray_1_t056649BD2D6D7DDC87945B1C2AEE66C39F4667B3, ___m_Buffer_0)); }
	inline void* get_m_Buffer_0() const { return ___m_Buffer_0; }
	inline void** get_address_of_m_Buffer_0() { return &___m_Buffer_0; }
	inline void set_m_Buffer_0(void* value)
	{
		___m_Buffer_0 = value;
	}

	inline static int32_t get_offset_of_m_Length_1() { return static_cast<int32_t>(offsetof(NativeArray_1_t056649BD2D6D7DDC87945B1C2AEE66C39F4667B3, ___m_Length_1)); }
	inline int32_t get_m_Length_1() const { return ___m_Length_1; }
	inline int32_t* get_address_of_m_Length_1() { return &___m_Length_1; }
	inline void set_m_Length_1(int32_t value)
	{
		___m_Length_1 = value;
	}

	inline static int32_t get_offset_of_m_AllocatorLabel_2() { return static_cast<int32_t>(offsetof(NativeArray_1_t056649BD2D6D7DDC87945B1C2AEE66C39F4667B3, ___m_AllocatorLabel_2)); }
	inline int32_t get_m_AllocatorLabel_2() const { return ___m_AllocatorLabel_2; }
	inline int32_t* get_address_of_m_AllocatorLabel_2() { return &___m_AllocatorLabel_2; }
	inline void set_m_AllocatorLabel_2(int32_t value)
	{
		___m_AllocatorLabel_2 = value;
	}
};


// Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.ConfigurationDescriptor>
struct  NativeArray_1_tC9A9DFD8C5E8BBF71F83CBC0CCF7C4BC38E3A4CA 
{
public:
	// System.Void* Unity.Collections.NativeArray`1::m_Buffer
	void* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeArray`1::m_Length
	int32_t ___m_Length_1;
	// Unity.Collections.Allocator Unity.Collections.NativeArray`1::m_AllocatorLabel
	int32_t ___m_AllocatorLabel_2;

public:
	inline static int32_t get_offset_of_m_Buffer_0() { return static_cast<int32_t>(offsetof(NativeArray_1_tC9A9DFD8C5E8BBF71F83CBC0CCF7C4BC38E3A4CA, ___m_Buffer_0)); }
	inline void* get_m_Buffer_0() const { return ___m_Buffer_0; }
	inline void** get_address_of_m_Buffer_0() { return &___m_Buffer_0; }
	inline void set_m_Buffer_0(void* value)
	{
		___m_Buffer_0 = value;
	}

	inline static int32_t get_offset_of_m_Length_1() { return static_cast<int32_t>(offsetof(NativeArray_1_tC9A9DFD8C5E8BBF71F83CBC0CCF7C4BC38E3A4CA, ___m_Length_1)); }
	inline int32_t get_m_Length_1() const { return ___m_Length_1; }
	inline int32_t* get_address_of_m_Length_1() { return &___m_Length_1; }
	inline void set_m_Length_1(int32_t value)
	{
		___m_Length_1 = value;
	}

	inline static int32_t get_offset_of_m_AllocatorLabel_2() { return static_cast<int32_t>(offsetof(NativeArray_1_tC9A9DFD8C5E8BBF71F83CBC0CCF7C4BC38E3A4CA, ___m_AllocatorLabel_2)); }
	inline int32_t get_m_AllocatorLabel_2() const { return ___m_AllocatorLabel_2; }
	inline int32_t* get_address_of_m_AllocatorLabel_2() { return &___m_AllocatorLabel_2; }
	inline void set_m_AllocatorLabel_2(int32_t value)
	{
		___m_AllocatorLabel_2 = value;
	}
};


// Unity.Collections.NativeArray`1<UnityEngine.Quaternion>
struct  NativeArray_1_t2672EA3A09E3FE76419439DC581905D460584A60 
{
public:
	// System.Void* Unity.Collections.NativeArray`1::m_Buffer
	void* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeArray`1::m_Length
	int32_t ___m_Length_1;
	// Unity.Collections.Allocator Unity.Collections.NativeArray`1::m_AllocatorLabel
	int32_t ___m_AllocatorLabel_2;

public:
	inline static int32_t get_offset_of_m_Buffer_0() { return static_cast<int32_t>(offsetof(NativeArray_1_t2672EA3A09E3FE76419439DC581905D460584A60, ___m_Buffer_0)); }
	inline void* get_m_Buffer_0() const { return ___m_Buffer_0; }
	inline void** get_address_of_m_Buffer_0() { return &___m_Buffer_0; }
	inline void set_m_Buffer_0(void* value)
	{
		___m_Buffer_0 = value;
	}

	inline static int32_t get_offset_of_m_Length_1() { return static_cast<int32_t>(offsetof(NativeArray_1_t2672EA3A09E3FE76419439DC581905D460584A60, ___m_Length_1)); }
	inline int32_t get_m_Length_1() const { return ___m_Length_1; }
	inline int32_t* get_address_of_m_Length_1() { return &___m_Length_1; }
	inline void set_m_Length_1(int32_t value)
	{
		___m_Length_1 = value;
	}

	inline static int32_t get_offset_of_m_AllocatorLabel_2() { return static_cast<int32_t>(offsetof(NativeArray_1_t2672EA3A09E3FE76419439DC581905D460584A60, ___m_AllocatorLabel_2)); }
	inline int32_t get_m_AllocatorLabel_2() const { return ___m_AllocatorLabel_2; }
	inline int32_t* get_address_of_m_AllocatorLabel_2() { return &___m_AllocatorLabel_2; }
	inline void set_m_AllocatorLabel_2(int32_t value)
	{
		___m_AllocatorLabel_2 = value;
	}
};


// Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.TrackableId>
struct  NativeArray_1_t991E9C764228B2B65D9688847CCDA8CE903F5D77 
{
public:
	// System.Void* Unity.Collections.NativeArray`1::m_Buffer
	void* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeArray`1::m_Length
	int32_t ___m_Length_1;
	// Unity.Collections.Allocator Unity.Collections.NativeArray`1::m_AllocatorLabel
	int32_t ___m_AllocatorLabel_2;

public:
	inline static int32_t get_offset_of_m_Buffer_0() { return static_cast<int32_t>(offsetof(NativeArray_1_t991E9C764228B2B65D9688847CCDA8CE903F5D77, ___m_Buffer_0)); }
	inline void* get_m_Buffer_0() const { return ___m_Buffer_0; }
	inline void** get_address_of_m_Buffer_0() { return &___m_Buffer_0; }
	inline void set_m_Buffer_0(void* value)
	{
		___m_Buffer_0 = value;
	}

	inline static int32_t get_offset_of_m_Length_1() { return static_cast<int32_t>(offsetof(NativeArray_1_t991E9C764228B2B65D9688847CCDA8CE903F5D77, ___m_Length_1)); }
	inline int32_t get_m_Length_1() const { return ___m_Length_1; }
	inline int32_t* get_address_of_m_Length_1() { return &___m_Length_1; }
	inline void set_m_Length_1(int32_t value)
	{
		___m_Length_1 = value;
	}

	inline static int32_t get_offset_of_m_AllocatorLabel_2() { return static_cast<int32_t>(offsetof(NativeArray_1_t991E9C764228B2B65D9688847CCDA8CE903F5D77, ___m_AllocatorLabel_2)); }
	inline int32_t get_m_AllocatorLabel_2() const { return ___m_AllocatorLabel_2; }
	inline int32_t* get_address_of_m_AllocatorLabel_2() { return &___m_AllocatorLabel_2; }
	inline void set_m_AllocatorLabel_2(int32_t value)
	{
		___m_AllocatorLabel_2 = value;
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


// Unity.Collections.NativeArray`1<UnityEngine.Vector3>
struct  NativeArray_1_t2577BCA09CA248EFB78BD7FDA7F09D5C395DFF52 
{
public:
	// System.Void* Unity.Collections.NativeArray`1::m_Buffer
	void* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeArray`1::m_Length
	int32_t ___m_Length_1;
	// Unity.Collections.Allocator Unity.Collections.NativeArray`1::m_AllocatorLabel
	int32_t ___m_AllocatorLabel_2;

public:
	inline static int32_t get_offset_of_m_Buffer_0() { return static_cast<int32_t>(offsetof(NativeArray_1_t2577BCA09CA248EFB78BD7FDA7F09D5C395DFF52, ___m_Buffer_0)); }
	inline void* get_m_Buffer_0() const { return ___m_Buffer_0; }
	inline void** get_address_of_m_Buffer_0() { return &___m_Buffer_0; }
	inline void set_m_Buffer_0(void* value)
	{
		___m_Buffer_0 = value;
	}

	inline static int32_t get_offset_of_m_Length_1() { return static_cast<int32_t>(offsetof(NativeArray_1_t2577BCA09CA248EFB78BD7FDA7F09D5C395DFF52, ___m_Length_1)); }
	inline int32_t get_m_Length_1() const { return ___m_Length_1; }
	inline int32_t* get_address_of_m_Length_1() { return &___m_Length_1; }
	inline void set_m_Length_1(int32_t value)
	{
		___m_Length_1 = value;
	}

	inline static int32_t get_offset_of_m_AllocatorLabel_2() { return static_cast<int32_t>(offsetof(NativeArray_1_t2577BCA09CA248EFB78BD7FDA7F09D5C395DFF52, ___m_AllocatorLabel_2)); }
	inline int32_t get_m_AllocatorLabel_2() const { return ___m_AllocatorLabel_2; }
	inline int32_t* get_address_of_m_AllocatorLabel_2() { return &___m_AllocatorLabel_2; }
	inline void set_m_AllocatorLabel_2(int32_t value)
	{
		___m_AllocatorLabel_2 = value;
	}
};


// Unity.Collections.NativeArray`1<UnityEngine.Vector4>
struct  NativeArray_1_t381CA7D92591F9C96DB84965C31AF8713A546156 
{
public:
	// System.Void* Unity.Collections.NativeArray`1::m_Buffer
	void* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeArray`1::m_Length
	int32_t ___m_Length_1;
	// Unity.Collections.Allocator Unity.Collections.NativeArray`1::m_AllocatorLabel
	int32_t ___m_AllocatorLabel_2;

public:
	inline static int32_t get_offset_of_m_Buffer_0() { return static_cast<int32_t>(offsetof(NativeArray_1_t381CA7D92591F9C96DB84965C31AF8713A546156, ___m_Buffer_0)); }
	inline void* get_m_Buffer_0() const { return ___m_Buffer_0; }
	inline void** get_address_of_m_Buffer_0() { return &___m_Buffer_0; }
	inline void set_m_Buffer_0(void* value)
	{
		___m_Buffer_0 = value;
	}

	inline static int32_t get_offset_of_m_Length_1() { return static_cast<int32_t>(offsetof(NativeArray_1_t381CA7D92591F9C96DB84965C31AF8713A546156, ___m_Length_1)); }
	inline int32_t get_m_Length_1() const { return ___m_Length_1; }
	inline int32_t* get_address_of_m_Length_1() { return &___m_Length_1; }
	inline void set_m_Length_1(int32_t value)
	{
		___m_Length_1 = value;
	}

	inline static int32_t get_offset_of_m_AllocatorLabel_2() { return static_cast<int32_t>(offsetof(NativeArray_1_t381CA7D92591F9C96DB84965C31AF8713A546156, ___m_AllocatorLabel_2)); }
	inline int32_t get_m_AllocatorLabel_2() const { return ___m_AllocatorLabel_2; }
	inline int32_t* get_address_of_m_AllocatorLabel_2() { return &___m_AllocatorLabel_2; }
	inline void set_m_AllocatorLabel_2(int32_t value)
	{
		___m_AllocatorLabel_2 = value;
	}
};


// Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.XRAnchor>
struct  NativeArray_1_tC0FA6F80F8C779BABF802ACD23BC7304CA5FD5E9 
{
public:
	// System.Void* Unity.Collections.NativeArray`1::m_Buffer
	void* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeArray`1::m_Length
	int32_t ___m_Length_1;
	// Unity.Collections.Allocator Unity.Collections.NativeArray`1::m_AllocatorLabel
	int32_t ___m_AllocatorLabel_2;

public:
	inline static int32_t get_offset_of_m_Buffer_0() { return static_cast<int32_t>(offsetof(NativeArray_1_tC0FA6F80F8C779BABF802ACD23BC7304CA5FD5E9, ___m_Buffer_0)); }
	inline void* get_m_Buffer_0() const { return ___m_Buffer_0; }
	inline void** get_address_of_m_Buffer_0() { return &___m_Buffer_0; }
	inline void set_m_Buffer_0(void* value)
	{
		___m_Buffer_0 = value;
	}

	inline static int32_t get_offset_of_m_Length_1() { return static_cast<int32_t>(offsetof(NativeArray_1_tC0FA6F80F8C779BABF802ACD23BC7304CA5FD5E9, ___m_Length_1)); }
	inline int32_t get_m_Length_1() const { return ___m_Length_1; }
	inline int32_t* get_address_of_m_Length_1() { return &___m_Length_1; }
	inline void set_m_Length_1(int32_t value)
	{
		___m_Length_1 = value;
	}

	inline static int32_t get_offset_of_m_AllocatorLabel_2() { return static_cast<int32_t>(offsetof(NativeArray_1_tC0FA6F80F8C779BABF802ACD23BC7304CA5FD5E9, ___m_AllocatorLabel_2)); }
	inline int32_t get_m_AllocatorLabel_2() const { return ___m_AllocatorLabel_2; }
	inline int32_t* get_address_of_m_AllocatorLabel_2() { return &___m_AllocatorLabel_2; }
	inline void set_m_AllocatorLabel_2(int32_t value)
	{
		___m_AllocatorLabel_2 = value;
	}
};


// Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.XRCameraConfiguration>
struct  NativeArray_1_t80D42D57D2D76B05EFDA2CF74AE660AB5FDD9545 
{
public:
	// System.Void* Unity.Collections.NativeArray`1::m_Buffer
	void* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeArray`1::m_Length
	int32_t ___m_Length_1;
	// Unity.Collections.Allocator Unity.Collections.NativeArray`1::m_AllocatorLabel
	int32_t ___m_AllocatorLabel_2;

public:
	inline static int32_t get_offset_of_m_Buffer_0() { return static_cast<int32_t>(offsetof(NativeArray_1_t80D42D57D2D76B05EFDA2CF74AE660AB5FDD9545, ___m_Buffer_0)); }
	inline void* get_m_Buffer_0() const { return ___m_Buffer_0; }
	inline void** get_address_of_m_Buffer_0() { return &___m_Buffer_0; }
	inline void set_m_Buffer_0(void* value)
	{
		___m_Buffer_0 = value;
	}

	inline static int32_t get_offset_of_m_Length_1() { return static_cast<int32_t>(offsetof(NativeArray_1_t80D42D57D2D76B05EFDA2CF74AE660AB5FDD9545, ___m_Length_1)); }
	inline int32_t get_m_Length_1() const { return ___m_Length_1; }
	inline int32_t* get_address_of_m_Length_1() { return &___m_Length_1; }
	inline void set_m_Length_1(int32_t value)
	{
		___m_Length_1 = value;
	}

	inline static int32_t get_offset_of_m_AllocatorLabel_2() { return static_cast<int32_t>(offsetof(NativeArray_1_t80D42D57D2D76B05EFDA2CF74AE660AB5FDD9545, ___m_AllocatorLabel_2)); }
	inline int32_t get_m_AllocatorLabel_2() const { return ___m_AllocatorLabel_2; }
	inline int32_t* get_address_of_m_AllocatorLabel_2() { return &___m_AllocatorLabel_2; }
	inline void set_m_AllocatorLabel_2(int32_t value)
	{
		___m_AllocatorLabel_2 = value;
	}
};


// Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.XREnvironmentProbe>
struct  NativeArray_1_t901047647D1B0577009EA387273335B841552234 
{
public:
	// System.Void* Unity.Collections.NativeArray`1::m_Buffer
	void* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeArray`1::m_Length
	int32_t ___m_Length_1;
	// Unity.Collections.Allocator Unity.Collections.NativeArray`1::m_AllocatorLabel
	int32_t ___m_AllocatorLabel_2;

public:
	inline static int32_t get_offset_of_m_Buffer_0() { return static_cast<int32_t>(offsetof(NativeArray_1_t901047647D1B0577009EA387273335B841552234, ___m_Buffer_0)); }
	inline void* get_m_Buffer_0() const { return ___m_Buffer_0; }
	inline void** get_address_of_m_Buffer_0() { return &___m_Buffer_0; }
	inline void set_m_Buffer_0(void* value)
	{
		___m_Buffer_0 = value;
	}

	inline static int32_t get_offset_of_m_Length_1() { return static_cast<int32_t>(offsetof(NativeArray_1_t901047647D1B0577009EA387273335B841552234, ___m_Length_1)); }
	inline int32_t get_m_Length_1() const { return ___m_Length_1; }
	inline int32_t* get_address_of_m_Length_1() { return &___m_Length_1; }
	inline void set_m_Length_1(int32_t value)
	{
		___m_Length_1 = value;
	}

	inline static int32_t get_offset_of_m_AllocatorLabel_2() { return static_cast<int32_t>(offsetof(NativeArray_1_t901047647D1B0577009EA387273335B841552234, ___m_AllocatorLabel_2)); }
	inline int32_t get_m_AllocatorLabel_2() const { return ___m_AllocatorLabel_2; }
	inline int32_t* get_address_of_m_AllocatorLabel_2() { return &___m_AllocatorLabel_2; }
	inline void set_m_AllocatorLabel_2(int32_t value)
	{
		___m_AllocatorLabel_2 = value;
	}
};


// Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.XRHumanBody>
struct  NativeArray_1_t6C80982A5077ED9524455B5005D72276BA2ECB62 
{
public:
	// System.Void* Unity.Collections.NativeArray`1::m_Buffer
	void* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeArray`1::m_Length
	int32_t ___m_Length_1;
	// Unity.Collections.Allocator Unity.Collections.NativeArray`1::m_AllocatorLabel
	int32_t ___m_AllocatorLabel_2;

public:
	inline static int32_t get_offset_of_m_Buffer_0() { return static_cast<int32_t>(offsetof(NativeArray_1_t6C80982A5077ED9524455B5005D72276BA2ECB62, ___m_Buffer_0)); }
	inline void* get_m_Buffer_0() const { return ___m_Buffer_0; }
	inline void** get_address_of_m_Buffer_0() { return &___m_Buffer_0; }
	inline void set_m_Buffer_0(void* value)
	{
		___m_Buffer_0 = value;
	}

	inline static int32_t get_offset_of_m_Length_1() { return static_cast<int32_t>(offsetof(NativeArray_1_t6C80982A5077ED9524455B5005D72276BA2ECB62, ___m_Length_1)); }
	inline int32_t get_m_Length_1() const { return ___m_Length_1; }
	inline int32_t* get_address_of_m_Length_1() { return &___m_Length_1; }
	inline void set_m_Length_1(int32_t value)
	{
		___m_Length_1 = value;
	}

	inline static int32_t get_offset_of_m_AllocatorLabel_2() { return static_cast<int32_t>(offsetof(NativeArray_1_t6C80982A5077ED9524455B5005D72276BA2ECB62, ___m_AllocatorLabel_2)); }
	inline int32_t get_m_AllocatorLabel_2() const { return ___m_AllocatorLabel_2; }
	inline int32_t* get_address_of_m_AllocatorLabel_2() { return &___m_AllocatorLabel_2; }
	inline void set_m_AllocatorLabel_2(int32_t value)
	{
		___m_AllocatorLabel_2 = value;
	}
};


// Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.XRParticipant>
struct  NativeArray_1_t20D7C7F2BCDC04B6238E113A2CA21BBDD326A535 
{
public:
	// System.Void* Unity.Collections.NativeArray`1::m_Buffer
	void* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeArray`1::m_Length
	int32_t ___m_Length_1;
	// Unity.Collections.Allocator Unity.Collections.NativeArray`1::m_AllocatorLabel
	int32_t ___m_AllocatorLabel_2;

public:
	inline static int32_t get_offset_of_m_Buffer_0() { return static_cast<int32_t>(offsetof(NativeArray_1_t20D7C7F2BCDC04B6238E113A2CA21BBDD326A535, ___m_Buffer_0)); }
	inline void* get_m_Buffer_0() const { return ___m_Buffer_0; }
	inline void** get_address_of_m_Buffer_0() { return &___m_Buffer_0; }
	inline void set_m_Buffer_0(void* value)
	{
		___m_Buffer_0 = value;
	}

	inline static int32_t get_offset_of_m_Length_1() { return static_cast<int32_t>(offsetof(NativeArray_1_t20D7C7F2BCDC04B6238E113A2CA21BBDD326A535, ___m_Length_1)); }
	inline int32_t get_m_Length_1() const { return ___m_Length_1; }
	inline int32_t* get_address_of_m_Length_1() { return &___m_Length_1; }
	inline void set_m_Length_1(int32_t value)
	{
		___m_Length_1 = value;
	}

	inline static int32_t get_offset_of_m_AllocatorLabel_2() { return static_cast<int32_t>(offsetof(NativeArray_1_t20D7C7F2BCDC04B6238E113A2CA21BBDD326A535, ___m_AllocatorLabel_2)); }
	inline int32_t get_m_AllocatorLabel_2() const { return ___m_AllocatorLabel_2; }
	inline int32_t* get_address_of_m_AllocatorLabel_2() { return &___m_AllocatorLabel_2; }
	inline void set_m_AllocatorLabel_2(int32_t value)
	{
		___m_AllocatorLabel_2 = value;
	}
};


// Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.XRPointCloud>
struct  NativeArray_1_t535D1A4490F010FAA0D1D1732065C9F9078ED3CA 
{
public:
	// System.Void* Unity.Collections.NativeArray`1::m_Buffer
	void* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeArray`1::m_Length
	int32_t ___m_Length_1;
	// Unity.Collections.Allocator Unity.Collections.NativeArray`1::m_AllocatorLabel
	int32_t ___m_AllocatorLabel_2;

public:
	inline static int32_t get_offset_of_m_Buffer_0() { return static_cast<int32_t>(offsetof(NativeArray_1_t535D1A4490F010FAA0D1D1732065C9F9078ED3CA, ___m_Buffer_0)); }
	inline void* get_m_Buffer_0() const { return ___m_Buffer_0; }
	inline void** get_address_of_m_Buffer_0() { return &___m_Buffer_0; }
	inline void set_m_Buffer_0(void* value)
	{
		___m_Buffer_0 = value;
	}

	inline static int32_t get_offset_of_m_Length_1() { return static_cast<int32_t>(offsetof(NativeArray_1_t535D1A4490F010FAA0D1D1732065C9F9078ED3CA, ___m_Length_1)); }
	inline int32_t get_m_Length_1() const { return ___m_Length_1; }
	inline int32_t* get_address_of_m_Length_1() { return &___m_Length_1; }
	inline void set_m_Length_1(int32_t value)
	{
		___m_Length_1 = value;
	}

	inline static int32_t get_offset_of_m_AllocatorLabel_2() { return static_cast<int32_t>(offsetof(NativeArray_1_t535D1A4490F010FAA0D1D1732065C9F9078ED3CA, ___m_AllocatorLabel_2)); }
	inline int32_t get_m_AllocatorLabel_2() const { return ___m_AllocatorLabel_2; }
	inline int32_t* get_address_of_m_AllocatorLabel_2() { return &___m_AllocatorLabel_2; }
	inline void set_m_AllocatorLabel_2(int32_t value)
	{
		___m_AllocatorLabel_2 = value;
	}
};


// Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.XRRaycast>
struct  NativeArray_1_t7CC8D0A91D6B929CE8AF86EF904CA11B5437074E 
{
public:
	// System.Void* Unity.Collections.NativeArray`1::m_Buffer
	void* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeArray`1::m_Length
	int32_t ___m_Length_1;
	// Unity.Collections.Allocator Unity.Collections.NativeArray`1::m_AllocatorLabel
	int32_t ___m_AllocatorLabel_2;

public:
	inline static int32_t get_offset_of_m_Buffer_0() { return static_cast<int32_t>(offsetof(NativeArray_1_t7CC8D0A91D6B929CE8AF86EF904CA11B5437074E, ___m_Buffer_0)); }
	inline void* get_m_Buffer_0() const { return ___m_Buffer_0; }
	inline void** get_address_of_m_Buffer_0() { return &___m_Buffer_0; }
	inline void set_m_Buffer_0(void* value)
	{
		___m_Buffer_0 = value;
	}

	inline static int32_t get_offset_of_m_Length_1() { return static_cast<int32_t>(offsetof(NativeArray_1_t7CC8D0A91D6B929CE8AF86EF904CA11B5437074E, ___m_Length_1)); }
	inline int32_t get_m_Length_1() const { return ___m_Length_1; }
	inline int32_t* get_address_of_m_Length_1() { return &___m_Length_1; }
	inline void set_m_Length_1(int32_t value)
	{
		___m_Length_1 = value;
	}

	inline static int32_t get_offset_of_m_AllocatorLabel_2() { return static_cast<int32_t>(offsetof(NativeArray_1_t7CC8D0A91D6B929CE8AF86EF904CA11B5437074E, ___m_AllocatorLabel_2)); }
	inline int32_t get_m_AllocatorLabel_2() const { return ___m_AllocatorLabel_2; }
	inline int32_t* get_address_of_m_AllocatorLabel_2() { return &___m_AllocatorLabel_2; }
	inline void set_m_AllocatorLabel_2(int32_t value)
	{
		___m_AllocatorLabel_2 = value;
	}
};


// Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.XRRaycastHit>
struct  NativeArray_1_t35F2E89DF840C06C68595E9289A07A26CBB07FCB 
{
public:
	// System.Void* Unity.Collections.NativeArray`1::m_Buffer
	void* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeArray`1::m_Length
	int32_t ___m_Length_1;
	// Unity.Collections.Allocator Unity.Collections.NativeArray`1::m_AllocatorLabel
	int32_t ___m_AllocatorLabel_2;

public:
	inline static int32_t get_offset_of_m_Buffer_0() { return static_cast<int32_t>(offsetof(NativeArray_1_t35F2E89DF840C06C68595E9289A07A26CBB07FCB, ___m_Buffer_0)); }
	inline void* get_m_Buffer_0() const { return ___m_Buffer_0; }
	inline void** get_address_of_m_Buffer_0() { return &___m_Buffer_0; }
	inline void set_m_Buffer_0(void* value)
	{
		___m_Buffer_0 = value;
	}

	inline static int32_t get_offset_of_m_Length_1() { return static_cast<int32_t>(offsetof(NativeArray_1_t35F2E89DF840C06C68595E9289A07A26CBB07FCB, ___m_Length_1)); }
	inline int32_t get_m_Length_1() const { return ___m_Length_1; }
	inline int32_t* get_address_of_m_Length_1() { return &___m_Length_1; }
	inline void set_m_Length_1(int32_t value)
	{
		___m_Length_1 = value;
	}

	inline static int32_t get_offset_of_m_AllocatorLabel_2() { return static_cast<int32_t>(offsetof(NativeArray_1_t35F2E89DF840C06C68595E9289A07A26CBB07FCB, ___m_AllocatorLabel_2)); }
	inline int32_t get_m_AllocatorLabel_2() const { return ___m_AllocatorLabel_2; }
	inline int32_t* get_address_of_m_AllocatorLabel_2() { return &___m_AllocatorLabel_2; }
	inline void set_m_AllocatorLabel_2(int32_t value)
	{
		___m_AllocatorLabel_2 = value;
	}
};


// Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.XRTextureDescriptor>
struct  NativeArray_1_t290DD5A348463DD4415AFE27775047312478F952 
{
public:
	// System.Void* Unity.Collections.NativeArray`1::m_Buffer
	void* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeArray`1::m_Length
	int32_t ___m_Length_1;
	// Unity.Collections.Allocator Unity.Collections.NativeArray`1::m_AllocatorLabel
	int32_t ___m_AllocatorLabel_2;

public:
	inline static int32_t get_offset_of_m_Buffer_0() { return static_cast<int32_t>(offsetof(NativeArray_1_t290DD5A348463DD4415AFE27775047312478F952, ___m_Buffer_0)); }
	inline void* get_m_Buffer_0() const { return ___m_Buffer_0; }
	inline void** get_address_of_m_Buffer_0() { return &___m_Buffer_0; }
	inline void set_m_Buffer_0(void* value)
	{
		___m_Buffer_0 = value;
	}

	inline static int32_t get_offset_of_m_Length_1() { return static_cast<int32_t>(offsetof(NativeArray_1_t290DD5A348463DD4415AFE27775047312478F952, ___m_Length_1)); }
	inline int32_t get_m_Length_1() const { return ___m_Length_1; }
	inline int32_t* get_address_of_m_Length_1() { return &___m_Length_1; }
	inline void set_m_Length_1(int32_t value)
	{
		___m_Length_1 = value;
	}

	inline static int32_t get_offset_of_m_AllocatorLabel_2() { return static_cast<int32_t>(offsetof(NativeArray_1_t290DD5A348463DD4415AFE27775047312478F952, ___m_AllocatorLabel_2)); }
	inline int32_t get_m_AllocatorLabel_2() const { return ___m_AllocatorLabel_2; }
	inline int32_t* get_address_of_m_AllocatorLabel_2() { return &___m_AllocatorLabel_2; }
	inline void set_m_AllocatorLabel_2(int32_t value)
	{
		___m_AllocatorLabel_2 = value;
	}
};


// Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.XRTrackedImage>
struct  NativeArray_1_tFB9CDB932CB697229DBAB814E66E25DEF44F827F 
{
public:
	// System.Void* Unity.Collections.NativeArray`1::m_Buffer
	void* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeArray`1::m_Length
	int32_t ___m_Length_1;
	// Unity.Collections.Allocator Unity.Collections.NativeArray`1::m_AllocatorLabel
	int32_t ___m_AllocatorLabel_2;

public:
	inline static int32_t get_offset_of_m_Buffer_0() { return static_cast<int32_t>(offsetof(NativeArray_1_tFB9CDB932CB697229DBAB814E66E25DEF44F827F, ___m_Buffer_0)); }
	inline void* get_m_Buffer_0() const { return ___m_Buffer_0; }
	inline void** get_address_of_m_Buffer_0() { return &___m_Buffer_0; }
	inline void set_m_Buffer_0(void* value)
	{
		___m_Buffer_0 = value;
	}

	inline static int32_t get_offset_of_m_Length_1() { return static_cast<int32_t>(offsetof(NativeArray_1_tFB9CDB932CB697229DBAB814E66E25DEF44F827F, ___m_Length_1)); }
	inline int32_t get_m_Length_1() const { return ___m_Length_1; }
	inline int32_t* get_address_of_m_Length_1() { return &___m_Length_1; }
	inline void set_m_Length_1(int32_t value)
	{
		___m_Length_1 = value;
	}

	inline static int32_t get_offset_of_m_AllocatorLabel_2() { return static_cast<int32_t>(offsetof(NativeArray_1_tFB9CDB932CB697229DBAB814E66E25DEF44F827F, ___m_AllocatorLabel_2)); }
	inline int32_t get_m_AllocatorLabel_2() const { return ___m_AllocatorLabel_2; }
	inline int32_t* get_address_of_m_AllocatorLabel_2() { return &___m_AllocatorLabel_2; }
	inline void set_m_AllocatorLabel_2(int32_t value)
	{
		___m_AllocatorLabel_2 = value;
	}
};


// Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.XRTrackedObject>
struct  NativeArray_1_t91984250D9080A7D07E6D31D2FFD73DBBAA4B9C3 
{
public:
	// System.Void* Unity.Collections.NativeArray`1::m_Buffer
	void* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeArray`1::m_Length
	int32_t ___m_Length_1;
	// Unity.Collections.Allocator Unity.Collections.NativeArray`1::m_AllocatorLabel
	int32_t ___m_AllocatorLabel_2;

public:
	inline static int32_t get_offset_of_m_Buffer_0() { return static_cast<int32_t>(offsetof(NativeArray_1_t91984250D9080A7D07E6D31D2FFD73DBBAA4B9C3, ___m_Buffer_0)); }
	inline void* get_m_Buffer_0() const { return ___m_Buffer_0; }
	inline void** get_address_of_m_Buffer_0() { return &___m_Buffer_0; }
	inline void set_m_Buffer_0(void* value)
	{
		___m_Buffer_0 = value;
	}

	inline static int32_t get_offset_of_m_Length_1() { return static_cast<int32_t>(offsetof(NativeArray_1_t91984250D9080A7D07E6D31D2FFD73DBBAA4B9C3, ___m_Length_1)); }
	inline int32_t get_m_Length_1() const { return ___m_Length_1; }
	inline int32_t* get_address_of_m_Length_1() { return &___m_Length_1; }
	inline void set_m_Length_1(int32_t value)
	{
		___m_Length_1 = value;
	}

	inline static int32_t get_offset_of_m_AllocatorLabel_2() { return static_cast<int32_t>(offsetof(NativeArray_1_t91984250D9080A7D07E6D31D2FFD73DBBAA4B9C3, ___m_AllocatorLabel_2)); }
	inline int32_t get_m_AllocatorLabel_2() const { return ___m_AllocatorLabel_2; }
	inline int32_t* get_address_of_m_AllocatorLabel_2() { return &___m_AllocatorLabel_2; }
	inline void set_m_AllocatorLabel_2(int32_t value)
	{
		___m_AllocatorLabel_2 = value;
	}
};


// System.Nullable`1<UnityEngine.XR.ARSubsystems.XRCameraConfiguration>
struct  Nullable_1_t661141E668063C73311C9DF09B3AE945EA9A1D8C 
{
public:
	// T System.Nullable`1::value
	XRCameraConfiguration_t2393055E5547307393E9C73AB13B95E0785A4F7A  ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_t661141E668063C73311C9DF09B3AE945EA9A1D8C, ___value_0)); }
	inline XRCameraConfiguration_t2393055E5547307393E9C73AB13B95E0785A4F7A  get_value_0() const { return ___value_0; }
	inline XRCameraConfiguration_t2393055E5547307393E9C73AB13B95E0785A4F7A * get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(XRCameraConfiguration_t2393055E5547307393E9C73AB13B95E0785A4F7A  value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_t661141E668063C73311C9DF09B3AE945EA9A1D8C, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
	}
};


// UnityEngine.XR.ARSubsystems.Promise`1<UnityEngine.XR.ARSubsystems.SessionAvailability>
struct  Promise_1_tB8B428F557CD6742430DB416C0B99C79CA1AA167  : public CustomYieldInstruction_t4ED1543FBAA3143362854EB1867B42E5D190A5C7
{
public:
	// T UnityEngine.XR.ARSubsystems.Promise`1::<result>k__BackingField
	int32_t ___U3CresultU3Ek__BackingField_0;
	// System.Boolean UnityEngine.XR.ARSubsystems.Promise`1::m_Complete
	bool ___m_Complete_1;

public:
	inline static int32_t get_offset_of_U3CresultU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(Promise_1_tB8B428F557CD6742430DB416C0B99C79CA1AA167, ___U3CresultU3Ek__BackingField_0)); }
	inline int32_t get_U3CresultU3Ek__BackingField_0() const { return ___U3CresultU3Ek__BackingField_0; }
	inline int32_t* get_address_of_U3CresultU3Ek__BackingField_0() { return &___U3CresultU3Ek__BackingField_0; }
	inline void set_U3CresultU3Ek__BackingField_0(int32_t value)
	{
		___U3CresultU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of_m_Complete_1() { return static_cast<int32_t>(offsetof(Promise_1_tB8B428F557CD6742430DB416C0B99C79CA1AA167, ___m_Complete_1)); }
	inline bool get_m_Complete_1() const { return ___m_Complete_1; }
	inline bool* get_address_of_m_Complete_1() { return &___m_Complete_1; }
	inline void set_m_Complete_1(bool value)
	{
		___m_Complete_1 = value;
	}
};


// UnityEngine.XR.ARSubsystems.Promise`1<UnityEngine.XR.ARSubsystems.SessionInstallationStatus>
struct  Promise_1_tB8B3F3631C923F82F653F3D73D6B3082CF7CDD88  : public CustomYieldInstruction_t4ED1543FBAA3143362854EB1867B42E5D190A5C7
{
public:
	// T UnityEngine.XR.ARSubsystems.Promise`1::<result>k__BackingField
	int32_t ___U3CresultU3Ek__BackingField_0;
	// System.Boolean UnityEngine.XR.ARSubsystems.Promise`1::m_Complete
	bool ___m_Complete_1;

public:
	inline static int32_t get_offset_of_U3CresultU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(Promise_1_tB8B3F3631C923F82F653F3D73D6B3082CF7CDD88, ___U3CresultU3Ek__BackingField_0)); }
	inline int32_t get_U3CresultU3Ek__BackingField_0() const { return ___U3CresultU3Ek__BackingField_0; }
	inline int32_t* get_address_of_U3CresultU3Ek__BackingField_0() { return &___U3CresultU3Ek__BackingField_0; }
	inline void set_U3CresultU3Ek__BackingField_0(int32_t value)
	{
		___U3CresultU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of_m_Complete_1() { return static_cast<int32_t>(offsetof(Promise_1_tB8B3F3631C923F82F653F3D73D6B3082CF7CDD88, ___m_Complete_1)); }
	inline bool get_m_Complete_1() const { return ___m_Complete_1; }
	inline bool* get_address_of_m_Complete_1() { return &___m_Complete_1; }
	inline void set_m_Complete_1(bool value)
	{
		___m_Complete_1 = value;
	}
};


// UnityEngine.XR.ARKit.ARKitCameraSubsystem
struct  ARKitCameraSubsystem_tE327D2A1BE7A0BD90A9353C8EDBDE9A882315245  : public XRCameraSubsystem_t3B32F6EA8A2E4D23AF240B5D21C34759D2613AC9
{
public:

public:
};

struct ARKitCameraSubsystem_tE327D2A1BE7A0BD90A9353C8EDBDE9A882315245_StaticFields
{
public:
	// System.Collections.Generic.List`1<System.String> UnityEngine.XR.ARKit.ARKitCameraSubsystem::k_BackgroundShaderKeywordsToNotCompile
	List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * ___k_BackgroundShaderKeywordsToNotCompile_4;

public:
	inline static int32_t get_offset_of_k_BackgroundShaderKeywordsToNotCompile_4() { return static_cast<int32_t>(offsetof(ARKitCameraSubsystem_tE327D2A1BE7A0BD90A9353C8EDBDE9A882315245_StaticFields, ___k_BackgroundShaderKeywordsToNotCompile_4)); }
	inline List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * get_k_BackgroundShaderKeywordsToNotCompile_4() const { return ___k_BackgroundShaderKeywordsToNotCompile_4; }
	inline List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 ** get_address_of_k_BackgroundShaderKeywordsToNotCompile_4() { return &___k_BackgroundShaderKeywordsToNotCompile_4; }
	inline void set_k_BackgroundShaderKeywordsToNotCompile_4(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * value)
	{
		___k_BackgroundShaderKeywordsToNotCompile_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___k_BackgroundShaderKeywordsToNotCompile_4), (void*)value);
	}
};


// UnityEngine.XR.ARKit.ARKitOcclusionSubsystem
struct  ARKitOcclusionSubsystem_tE15296E017A597561D0C3B399ED52577B138F343  : public XROcclusionSubsystem_t7546B929F9B5B6EB13B975FE4DB1F4099EE533B8
{
public:

public:
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


// UnityEngine.XR.ARSubsystems.ConfigurationDescriptor
struct  ConfigurationDescriptor_t5CD12F017FCCF861DC33D7C0D6F0121015DEEA78 
{
public:
	// System.IntPtr UnityEngine.XR.ARSubsystems.ConfigurationDescriptor::m_Identifier
	intptr_t ___m_Identifier_0;
	// UnityEngine.XR.ARSubsystems.Feature UnityEngine.XR.ARSubsystems.ConfigurationDescriptor::m_Capabilities
	uint64_t ___m_Capabilities_1;
	// System.Int32 UnityEngine.XR.ARSubsystems.ConfigurationDescriptor::m_Rank
	int32_t ___m_Rank_2;

public:
	inline static int32_t get_offset_of_m_Identifier_0() { return static_cast<int32_t>(offsetof(ConfigurationDescriptor_t5CD12F017FCCF861DC33D7C0D6F0121015DEEA78, ___m_Identifier_0)); }
	inline intptr_t get_m_Identifier_0() const { return ___m_Identifier_0; }
	inline intptr_t* get_address_of_m_Identifier_0() { return &___m_Identifier_0; }
	inline void set_m_Identifier_0(intptr_t value)
	{
		___m_Identifier_0 = value;
	}

	inline static int32_t get_offset_of_m_Capabilities_1() { return static_cast<int32_t>(offsetof(ConfigurationDescriptor_t5CD12F017FCCF861DC33D7C0D6F0121015DEEA78, ___m_Capabilities_1)); }
	inline uint64_t get_m_Capabilities_1() const { return ___m_Capabilities_1; }
	inline uint64_t* get_address_of_m_Capabilities_1() { return &___m_Capabilities_1; }
	inline void set_m_Capabilities_1(uint64_t value)
	{
		___m_Capabilities_1 = value;
	}

	inline static int32_t get_offset_of_m_Rank_2() { return static_cast<int32_t>(offsetof(ConfigurationDescriptor_t5CD12F017FCCF861DC33D7C0D6F0121015DEEA78, ___m_Rank_2)); }
	inline int32_t get_m_Rank_2() const { return ___m_Rank_2; }
	inline int32_t* get_address_of_m_Rank_2() { return &___m_Rank_2; }
	inline void set_m_Rank_2(int32_t value)
	{
		___m_Rank_2 = value;
	}
};


// UnityEngine.Material
struct  Material_t8927C00353A72755313F046D0CE85178AE8218EE  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
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

// UnityEngine.ScriptableObject
struct  ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};

// Native definition for P/Invoke marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A_marshaled_pinvoke : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A_marshaled_com : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_com
{
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


// UnityEngine.XR.ARSubsystems.XRAnchor
struct  XRAnchor_t8E92DD70D9FA9B3ED2799305E05228184932099C 
{
public:
	// UnityEngine.XR.ARSubsystems.TrackableId UnityEngine.XR.ARSubsystems.XRAnchor::m_Id
	TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  ___m_Id_1;
	// UnityEngine.Pose UnityEngine.XR.ARSubsystems.XRAnchor::m_Pose
	Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  ___m_Pose_2;
	// UnityEngine.XR.ARSubsystems.TrackingState UnityEngine.XR.ARSubsystems.XRAnchor::m_TrackingState
	int32_t ___m_TrackingState_3;
	// System.IntPtr UnityEngine.XR.ARSubsystems.XRAnchor::m_NativePtr
	intptr_t ___m_NativePtr_4;
	// System.Guid UnityEngine.XR.ARSubsystems.XRAnchor::m_SessionId
	Guid_t  ___m_SessionId_5;

public:
	inline static int32_t get_offset_of_m_Id_1() { return static_cast<int32_t>(offsetof(XRAnchor_t8E92DD70D9FA9B3ED2799305E05228184932099C, ___m_Id_1)); }
	inline TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  get_m_Id_1() const { return ___m_Id_1; }
	inline TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B * get_address_of_m_Id_1() { return &___m_Id_1; }
	inline void set_m_Id_1(TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  value)
	{
		___m_Id_1 = value;
	}

	inline static int32_t get_offset_of_m_Pose_2() { return static_cast<int32_t>(offsetof(XRAnchor_t8E92DD70D9FA9B3ED2799305E05228184932099C, ___m_Pose_2)); }
	inline Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  get_m_Pose_2() const { return ___m_Pose_2; }
	inline Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A * get_address_of_m_Pose_2() { return &___m_Pose_2; }
	inline void set_m_Pose_2(Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  value)
	{
		___m_Pose_2 = value;
	}

	inline static int32_t get_offset_of_m_TrackingState_3() { return static_cast<int32_t>(offsetof(XRAnchor_t8E92DD70D9FA9B3ED2799305E05228184932099C, ___m_TrackingState_3)); }
	inline int32_t get_m_TrackingState_3() const { return ___m_TrackingState_3; }
	inline int32_t* get_address_of_m_TrackingState_3() { return &___m_TrackingState_3; }
	inline void set_m_TrackingState_3(int32_t value)
	{
		___m_TrackingState_3 = value;
	}

	inline static int32_t get_offset_of_m_NativePtr_4() { return static_cast<int32_t>(offsetof(XRAnchor_t8E92DD70D9FA9B3ED2799305E05228184932099C, ___m_NativePtr_4)); }
	inline intptr_t get_m_NativePtr_4() const { return ___m_NativePtr_4; }
	inline intptr_t* get_address_of_m_NativePtr_4() { return &___m_NativePtr_4; }
	inline void set_m_NativePtr_4(intptr_t value)
	{
		___m_NativePtr_4 = value;
	}

	inline static int32_t get_offset_of_m_SessionId_5() { return static_cast<int32_t>(offsetof(XRAnchor_t8E92DD70D9FA9B3ED2799305E05228184932099C, ___m_SessionId_5)); }
	inline Guid_t  get_m_SessionId_5() const { return ___m_SessionId_5; }
	inline Guid_t * get_address_of_m_SessionId_5() { return &___m_SessionId_5; }
	inline void set_m_SessionId_5(Guid_t  value)
	{
		___m_SessionId_5 = value;
	}
};

struct XRAnchor_t8E92DD70D9FA9B3ED2799305E05228184932099C_StaticFields
{
public:
	// UnityEngine.XR.ARSubsystems.XRAnchor UnityEngine.XR.ARSubsystems.XRAnchor::s_Default
	XRAnchor_t8E92DD70D9FA9B3ED2799305E05228184932099C  ___s_Default_0;

public:
	inline static int32_t get_offset_of_s_Default_0() { return static_cast<int32_t>(offsetof(XRAnchor_t8E92DD70D9FA9B3ED2799305E05228184932099C_StaticFields, ___s_Default_0)); }
	inline XRAnchor_t8E92DD70D9FA9B3ED2799305E05228184932099C  get_s_Default_0() const { return ___s_Default_0; }
	inline XRAnchor_t8E92DD70D9FA9B3ED2799305E05228184932099C * get_address_of_s_Default_0() { return &___s_Default_0; }
	inline void set_s_Default_0(XRAnchor_t8E92DD70D9FA9B3ED2799305E05228184932099C  value)
	{
		___s_Default_0 = value;
	}
};


// UnityEngine.XR.ARSubsystems.XRAnchorSubsystem
struct  XRAnchorSubsystem_t625D9B76C590AB601CF85525DB9396BE84425AA7  : public TrackingSubsystem_4_t5C7E2B8B7A9943DF8B9FF5B46FB5AFA71E9826F1
{
public:

public:
};


// UnityEngine.XR.ARSubsystems.XRCameraParams
struct  XRCameraParams_t9FCECBDAEFCC1084042B75393990959B28B64B18 
{
public:
	// System.Single UnityEngine.XR.ARSubsystems.XRCameraParams::m_ZNear
	float ___m_ZNear_0;
	// System.Single UnityEngine.XR.ARSubsystems.XRCameraParams::m_ZFar
	float ___m_ZFar_1;
	// System.Single UnityEngine.XR.ARSubsystems.XRCameraParams::m_ScreenWidth
	float ___m_ScreenWidth_2;
	// System.Single UnityEngine.XR.ARSubsystems.XRCameraParams::m_ScreenHeight
	float ___m_ScreenHeight_3;
	// UnityEngine.ScreenOrientation UnityEngine.XR.ARSubsystems.XRCameraParams::m_ScreenOrientation
	int32_t ___m_ScreenOrientation_4;

public:
	inline static int32_t get_offset_of_m_ZNear_0() { return static_cast<int32_t>(offsetof(XRCameraParams_t9FCECBDAEFCC1084042B75393990959B28B64B18, ___m_ZNear_0)); }
	inline float get_m_ZNear_0() const { return ___m_ZNear_0; }
	inline float* get_address_of_m_ZNear_0() { return &___m_ZNear_0; }
	inline void set_m_ZNear_0(float value)
	{
		___m_ZNear_0 = value;
	}

	inline static int32_t get_offset_of_m_ZFar_1() { return static_cast<int32_t>(offsetof(XRCameraParams_t9FCECBDAEFCC1084042B75393990959B28B64B18, ___m_ZFar_1)); }
	inline float get_m_ZFar_1() const { return ___m_ZFar_1; }
	inline float* get_address_of_m_ZFar_1() { return &___m_ZFar_1; }
	inline void set_m_ZFar_1(float value)
	{
		___m_ZFar_1 = value;
	}

	inline static int32_t get_offset_of_m_ScreenWidth_2() { return static_cast<int32_t>(offsetof(XRCameraParams_t9FCECBDAEFCC1084042B75393990959B28B64B18, ___m_ScreenWidth_2)); }
	inline float get_m_ScreenWidth_2() const { return ___m_ScreenWidth_2; }
	inline float* get_address_of_m_ScreenWidth_2() { return &___m_ScreenWidth_2; }
	inline void set_m_ScreenWidth_2(float value)
	{
		___m_ScreenWidth_2 = value;
	}

	inline static int32_t get_offset_of_m_ScreenHeight_3() { return static_cast<int32_t>(offsetof(XRCameraParams_t9FCECBDAEFCC1084042B75393990959B28B64B18, ___m_ScreenHeight_3)); }
	inline float get_m_ScreenHeight_3() const { return ___m_ScreenHeight_3; }
	inline float* get_address_of_m_ScreenHeight_3() { return &___m_ScreenHeight_3; }
	inline void set_m_ScreenHeight_3(float value)
	{
		___m_ScreenHeight_3 = value;
	}

	inline static int32_t get_offset_of_m_ScreenOrientation_4() { return static_cast<int32_t>(offsetof(XRCameraParams_t9FCECBDAEFCC1084042B75393990959B28B64B18, ___m_ScreenOrientation_4)); }
	inline int32_t get_m_ScreenOrientation_4() const { return ___m_ScreenOrientation_4; }
	inline int32_t* get_address_of_m_ScreenOrientation_4() { return &___m_ScreenOrientation_4; }
	inline void set_m_ScreenOrientation_4(int32_t value)
	{
		___m_ScreenOrientation_4 = value;
	}
};


// UnityEngine.XR.ARSubsystems.XRDepthSubsystem
struct  XRDepthSubsystem_t808E21F0192095B08FA03AC535314FB5EF3B7E28  : public TrackingSubsystem_4_t52B43FDBB6E641E351193D790222EA1C68B2984E
{
public:

public:
};


// UnityEngine.XR.ARSubsystems.XREnvironmentProbeSubsystem
struct  XREnvironmentProbeSubsystem_t0C60258F565400E7C5AF0E0B7FA933F2BCF83CB6  : public TrackingSubsystem_4_t3D5C3B3749ABE82CC258AD552288C51FAE67DA1A
{
public:

public:
};


// UnityEngine.XR.ARSubsystems.XRHumanBody
struct  XRHumanBody_t1AA9DC3BEBCF86A64BE2B83452AC5704AD08C13B 
{
public:
	// UnityEngine.XR.ARSubsystems.TrackableId UnityEngine.XR.ARSubsystems.XRHumanBody::m_TrackableId
	TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  ___m_TrackableId_0;
	// UnityEngine.Pose UnityEngine.XR.ARSubsystems.XRHumanBody::m_Pose
	Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  ___m_Pose_1;
	// System.Single UnityEngine.XR.ARSubsystems.XRHumanBody::m_EstimatedHeightScaleFactor
	float ___m_EstimatedHeightScaleFactor_2;
	// UnityEngine.XR.ARSubsystems.TrackingState UnityEngine.XR.ARSubsystems.XRHumanBody::m_TrackingState
	int32_t ___m_TrackingState_3;
	// System.IntPtr UnityEngine.XR.ARSubsystems.XRHumanBody::m_NativePtr
	intptr_t ___m_NativePtr_4;

public:
	inline static int32_t get_offset_of_m_TrackableId_0() { return static_cast<int32_t>(offsetof(XRHumanBody_t1AA9DC3BEBCF86A64BE2B83452AC5704AD08C13B, ___m_TrackableId_0)); }
	inline TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  get_m_TrackableId_0() const { return ___m_TrackableId_0; }
	inline TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B * get_address_of_m_TrackableId_0() { return &___m_TrackableId_0; }
	inline void set_m_TrackableId_0(TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  value)
	{
		___m_TrackableId_0 = value;
	}

	inline static int32_t get_offset_of_m_Pose_1() { return static_cast<int32_t>(offsetof(XRHumanBody_t1AA9DC3BEBCF86A64BE2B83452AC5704AD08C13B, ___m_Pose_1)); }
	inline Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  get_m_Pose_1() const { return ___m_Pose_1; }
	inline Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A * get_address_of_m_Pose_1() { return &___m_Pose_1; }
	inline void set_m_Pose_1(Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  value)
	{
		___m_Pose_1 = value;
	}

	inline static int32_t get_offset_of_m_EstimatedHeightScaleFactor_2() { return static_cast<int32_t>(offsetof(XRHumanBody_t1AA9DC3BEBCF86A64BE2B83452AC5704AD08C13B, ___m_EstimatedHeightScaleFactor_2)); }
	inline float get_m_EstimatedHeightScaleFactor_2() const { return ___m_EstimatedHeightScaleFactor_2; }
	inline float* get_address_of_m_EstimatedHeightScaleFactor_2() { return &___m_EstimatedHeightScaleFactor_2; }
	inline void set_m_EstimatedHeightScaleFactor_2(float value)
	{
		___m_EstimatedHeightScaleFactor_2 = value;
	}

	inline static int32_t get_offset_of_m_TrackingState_3() { return static_cast<int32_t>(offsetof(XRHumanBody_t1AA9DC3BEBCF86A64BE2B83452AC5704AD08C13B, ___m_TrackingState_3)); }
	inline int32_t get_m_TrackingState_3() const { return ___m_TrackingState_3; }
	inline int32_t* get_address_of_m_TrackingState_3() { return &___m_TrackingState_3; }
	inline void set_m_TrackingState_3(int32_t value)
	{
		___m_TrackingState_3 = value;
	}

	inline static int32_t get_offset_of_m_NativePtr_4() { return static_cast<int32_t>(offsetof(XRHumanBody_t1AA9DC3BEBCF86A64BE2B83452AC5704AD08C13B, ___m_NativePtr_4)); }
	inline intptr_t get_m_NativePtr_4() const { return ___m_NativePtr_4; }
	inline intptr_t* get_address_of_m_NativePtr_4() { return &___m_NativePtr_4; }
	inline void set_m_NativePtr_4(intptr_t value)
	{
		___m_NativePtr_4 = value;
	}
};

struct XRHumanBody_t1AA9DC3BEBCF86A64BE2B83452AC5704AD08C13B_StaticFields
{
public:
	// UnityEngine.XR.ARSubsystems.XRHumanBody UnityEngine.XR.ARSubsystems.XRHumanBody::s_Default
	XRHumanBody_t1AA9DC3BEBCF86A64BE2B83452AC5704AD08C13B  ___s_Default_5;

public:
	inline static int32_t get_offset_of_s_Default_5() { return static_cast<int32_t>(offsetof(XRHumanBody_t1AA9DC3BEBCF86A64BE2B83452AC5704AD08C13B_StaticFields, ___s_Default_5)); }
	inline XRHumanBody_t1AA9DC3BEBCF86A64BE2B83452AC5704AD08C13B  get_s_Default_5() const { return ___s_Default_5; }
	inline XRHumanBody_t1AA9DC3BEBCF86A64BE2B83452AC5704AD08C13B * get_address_of_s_Default_5() { return &___s_Default_5; }
	inline void set_s_Default_5(XRHumanBody_t1AA9DC3BEBCF86A64BE2B83452AC5704AD08C13B  value)
	{
		___s_Default_5 = value;
	}
};


// UnityEngine.XR.ARSubsystems.XRHumanBodySubsystem
struct  XRHumanBodySubsystem_t71FBF94503DCE781657FA4F362464EA389CD9F2B  : public TrackingSubsystem_4_tB0BB38AE7B56DA9BE6D8463DD64E4766AD686B86
{
public:

public:
};


// UnityEngine.XR.ARSubsystems.XRImageTrackingSubsystem
struct  XRImageTrackingSubsystem_tBC68AD21C11D8D67F3343844E129DF505FF705CE  : public TrackingSubsystem_4_tCE5EA1B7325877FD88C7CF41F681F25B1FC1717A
{
public:
	// UnityEngine.XR.ARSubsystems.RuntimeReferenceImageLibrary UnityEngine.XR.ARSubsystems.XRImageTrackingSubsystem::m_ImageLibrary
	RuntimeReferenceImageLibrary_t76072EC5637B1F0F8FD0A1BFD3AEAF954D6F8D6B * ___m_ImageLibrary_4;

public:
	inline static int32_t get_offset_of_m_ImageLibrary_4() { return static_cast<int32_t>(offsetof(XRImageTrackingSubsystem_tBC68AD21C11D8D67F3343844E129DF505FF705CE, ___m_ImageLibrary_4)); }
	inline RuntimeReferenceImageLibrary_t76072EC5637B1F0F8FD0A1BFD3AEAF954D6F8D6B * get_m_ImageLibrary_4() const { return ___m_ImageLibrary_4; }
	inline RuntimeReferenceImageLibrary_t76072EC5637B1F0F8FD0A1BFD3AEAF954D6F8D6B ** get_address_of_m_ImageLibrary_4() { return &___m_ImageLibrary_4; }
	inline void set_m_ImageLibrary_4(RuntimeReferenceImageLibrary_t76072EC5637B1F0F8FD0A1BFD3AEAF954D6F8D6B * value)
	{
		___m_ImageLibrary_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ImageLibrary_4), (void*)value);
	}
};


// UnityEngine.XR.ARSubsystems.XRObjectTrackingSubsystem
struct  XRObjectTrackingSubsystem_t3F31F4C8BCA868FE69BD8EC75BA5A1116026C881  : public TrackingSubsystem_4_t1E41FDFF37B1529EED554D89481040B067E300EB
{
public:
	// UnityEngine.XR.ARSubsystems.XRReferenceObjectLibrary UnityEngine.XR.ARSubsystems.XRObjectTrackingSubsystem::m_Library
	XRReferenceObjectLibrary_t07704B2996E507F23EE3C99CFC3BB73A83C99A7C * ___m_Library_4;

public:
	inline static int32_t get_offset_of_m_Library_4() { return static_cast<int32_t>(offsetof(XRObjectTrackingSubsystem_t3F31F4C8BCA868FE69BD8EC75BA5A1116026C881, ___m_Library_4)); }
	inline XRReferenceObjectLibrary_t07704B2996E507F23EE3C99CFC3BB73A83C99A7C * get_m_Library_4() const { return ___m_Library_4; }
	inline XRReferenceObjectLibrary_t07704B2996E507F23EE3C99CFC3BB73A83C99A7C ** get_address_of_m_Library_4() { return &___m_Library_4; }
	inline void set_m_Library_4(XRReferenceObjectLibrary_t07704B2996E507F23EE3C99CFC3BB73A83C99A7C * value)
	{
		___m_Library_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Library_4), (void*)value);
	}
};


// UnityEngine.XR.ARSubsystems.XRParticipant
struct  XRParticipant_t8CFF46A2CDD860A7591AD0FC0EE563458C8FA13F 
{
public:
	// UnityEngine.XR.ARSubsystems.TrackableId UnityEngine.XR.ARSubsystems.XRParticipant::m_TrackableId
	TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  ___m_TrackableId_0;
	// UnityEngine.Pose UnityEngine.XR.ARSubsystems.XRParticipant::m_Pose
	Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  ___m_Pose_1;
	// UnityEngine.XR.ARSubsystems.TrackingState UnityEngine.XR.ARSubsystems.XRParticipant::m_TrackingState
	int32_t ___m_TrackingState_2;
	// System.IntPtr UnityEngine.XR.ARSubsystems.XRParticipant::m_NativePtr
	intptr_t ___m_NativePtr_3;
	// System.Guid UnityEngine.XR.ARSubsystems.XRParticipant::m_SessionId
	Guid_t  ___m_SessionId_4;

public:
	inline static int32_t get_offset_of_m_TrackableId_0() { return static_cast<int32_t>(offsetof(XRParticipant_t8CFF46A2CDD860A7591AD0FC0EE563458C8FA13F, ___m_TrackableId_0)); }
	inline TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  get_m_TrackableId_0() const { return ___m_TrackableId_0; }
	inline TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B * get_address_of_m_TrackableId_0() { return &___m_TrackableId_0; }
	inline void set_m_TrackableId_0(TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  value)
	{
		___m_TrackableId_0 = value;
	}

	inline static int32_t get_offset_of_m_Pose_1() { return static_cast<int32_t>(offsetof(XRParticipant_t8CFF46A2CDD860A7591AD0FC0EE563458C8FA13F, ___m_Pose_1)); }
	inline Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  get_m_Pose_1() const { return ___m_Pose_1; }
	inline Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A * get_address_of_m_Pose_1() { return &___m_Pose_1; }
	inline void set_m_Pose_1(Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  value)
	{
		___m_Pose_1 = value;
	}

	inline static int32_t get_offset_of_m_TrackingState_2() { return static_cast<int32_t>(offsetof(XRParticipant_t8CFF46A2CDD860A7591AD0FC0EE563458C8FA13F, ___m_TrackingState_2)); }
	inline int32_t get_m_TrackingState_2() const { return ___m_TrackingState_2; }
	inline int32_t* get_address_of_m_TrackingState_2() { return &___m_TrackingState_2; }
	inline void set_m_TrackingState_2(int32_t value)
	{
		___m_TrackingState_2 = value;
	}

	inline static int32_t get_offset_of_m_NativePtr_3() { return static_cast<int32_t>(offsetof(XRParticipant_t8CFF46A2CDD860A7591AD0FC0EE563458C8FA13F, ___m_NativePtr_3)); }
	inline intptr_t get_m_NativePtr_3() const { return ___m_NativePtr_3; }
	inline intptr_t* get_address_of_m_NativePtr_3() { return &___m_NativePtr_3; }
	inline void set_m_NativePtr_3(intptr_t value)
	{
		___m_NativePtr_3 = value;
	}

	inline static int32_t get_offset_of_m_SessionId_4() { return static_cast<int32_t>(offsetof(XRParticipant_t8CFF46A2CDD860A7591AD0FC0EE563458C8FA13F, ___m_SessionId_4)); }
	inline Guid_t  get_m_SessionId_4() const { return ___m_SessionId_4; }
	inline Guid_t * get_address_of_m_SessionId_4() { return &___m_SessionId_4; }
	inline void set_m_SessionId_4(Guid_t  value)
	{
		___m_SessionId_4 = value;
	}
};

struct XRParticipant_t8CFF46A2CDD860A7591AD0FC0EE563458C8FA13F_StaticFields
{
public:
	// UnityEngine.XR.ARSubsystems.XRParticipant UnityEngine.XR.ARSubsystems.XRParticipant::k_Default
	XRParticipant_t8CFF46A2CDD860A7591AD0FC0EE563458C8FA13F  ___k_Default_5;

public:
	inline static int32_t get_offset_of_k_Default_5() { return static_cast<int32_t>(offsetof(XRParticipant_t8CFF46A2CDD860A7591AD0FC0EE563458C8FA13F_StaticFields, ___k_Default_5)); }
	inline XRParticipant_t8CFF46A2CDD860A7591AD0FC0EE563458C8FA13F  get_k_Default_5() const { return ___k_Default_5; }
	inline XRParticipant_t8CFF46A2CDD860A7591AD0FC0EE563458C8FA13F * get_address_of_k_Default_5() { return &___k_Default_5; }
	inline void set_k_Default_5(XRParticipant_t8CFF46A2CDD860A7591AD0FC0EE563458C8FA13F  value)
	{
		___k_Default_5 = value;
	}
};


// UnityEngine.XR.ARSubsystems.XRParticipantSubsystem
struct  XRParticipantSubsystem_t7F710E46FC5A17967E7CAE126DE9443C752C36FC  : public TrackingSubsystem_4_tF2C9DD677702042D71E5050214FE516389400277
{
public:

public:
};


// UnityEngine.XR.ARSubsystems.XRPlaneSubsystem
struct  XRPlaneSubsystem_t7C76F9D2C993B0DC38F0A7CDCE745EA7C12417EE  : public TrackingSubsystem_4_t4CF696722E0C05A2C0234E78E673F4F17EEC1C94
{
public:

public:
};


// UnityEngine.XR.ARSubsystems.XRPointCloud
struct  XRPointCloud_t08B41A05528E45CE709F8C14CA6C484D360A62F2 
{
public:
	// UnityEngine.XR.ARSubsystems.TrackableId UnityEngine.XR.ARSubsystems.XRPointCloud::m_TrackableId
	TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  ___m_TrackableId_1;
	// UnityEngine.Pose UnityEngine.XR.ARSubsystems.XRPointCloud::m_Pose
	Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  ___m_Pose_2;
	// UnityEngine.XR.ARSubsystems.TrackingState UnityEngine.XR.ARSubsystems.XRPointCloud::m_TrackingState
	int32_t ___m_TrackingState_3;
	// System.IntPtr UnityEngine.XR.ARSubsystems.XRPointCloud::m_NativePtr
	intptr_t ___m_NativePtr_4;

public:
	inline static int32_t get_offset_of_m_TrackableId_1() { return static_cast<int32_t>(offsetof(XRPointCloud_t08B41A05528E45CE709F8C14CA6C484D360A62F2, ___m_TrackableId_1)); }
	inline TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  get_m_TrackableId_1() const { return ___m_TrackableId_1; }
	inline TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B * get_address_of_m_TrackableId_1() { return &___m_TrackableId_1; }
	inline void set_m_TrackableId_1(TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  value)
	{
		___m_TrackableId_1 = value;
	}

	inline static int32_t get_offset_of_m_Pose_2() { return static_cast<int32_t>(offsetof(XRPointCloud_t08B41A05528E45CE709F8C14CA6C484D360A62F2, ___m_Pose_2)); }
	inline Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  get_m_Pose_2() const { return ___m_Pose_2; }
	inline Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A * get_address_of_m_Pose_2() { return &___m_Pose_2; }
	inline void set_m_Pose_2(Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  value)
	{
		___m_Pose_2 = value;
	}

	inline static int32_t get_offset_of_m_TrackingState_3() { return static_cast<int32_t>(offsetof(XRPointCloud_t08B41A05528E45CE709F8C14CA6C484D360A62F2, ___m_TrackingState_3)); }
	inline int32_t get_m_TrackingState_3() const { return ___m_TrackingState_3; }
	inline int32_t* get_address_of_m_TrackingState_3() { return &___m_TrackingState_3; }
	inline void set_m_TrackingState_3(int32_t value)
	{
		___m_TrackingState_3 = value;
	}

	inline static int32_t get_offset_of_m_NativePtr_4() { return static_cast<int32_t>(offsetof(XRPointCloud_t08B41A05528E45CE709F8C14CA6C484D360A62F2, ___m_NativePtr_4)); }
	inline intptr_t get_m_NativePtr_4() const { return ___m_NativePtr_4; }
	inline intptr_t* get_address_of_m_NativePtr_4() { return &___m_NativePtr_4; }
	inline void set_m_NativePtr_4(intptr_t value)
	{
		___m_NativePtr_4 = value;
	}
};

struct XRPointCloud_t08B41A05528E45CE709F8C14CA6C484D360A62F2_StaticFields
{
public:
	// UnityEngine.XR.ARSubsystems.XRPointCloud UnityEngine.XR.ARSubsystems.XRPointCloud::s_Default
	XRPointCloud_t08B41A05528E45CE709F8C14CA6C484D360A62F2  ___s_Default_0;

public:
	inline static int32_t get_offset_of_s_Default_0() { return static_cast<int32_t>(offsetof(XRPointCloud_t08B41A05528E45CE709F8C14CA6C484D360A62F2_StaticFields, ___s_Default_0)); }
	inline XRPointCloud_t08B41A05528E45CE709F8C14CA6C484D360A62F2  get_s_Default_0() const { return ___s_Default_0; }
	inline XRPointCloud_t08B41A05528E45CE709F8C14CA6C484D360A62F2 * get_address_of_s_Default_0() { return &___s_Default_0; }
	inline void set_s_Default_0(XRPointCloud_t08B41A05528E45CE709F8C14CA6C484D360A62F2  value)
	{
		___s_Default_0 = value;
	}
};


// UnityEngine.XR.ARSubsystems.XRRaycast
struct  XRRaycast_tA18F9107EFF1D692E70EF15233BB6134A5F66C55 
{
public:
	// UnityEngine.XR.ARSubsystems.TrackableId UnityEngine.XR.ARSubsystems.XRRaycast::m_TrackableId
	TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  ___m_TrackableId_1;
	// UnityEngine.Pose UnityEngine.XR.ARSubsystems.XRRaycast::m_Pose
	Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  ___m_Pose_2;
	// UnityEngine.XR.ARSubsystems.TrackingState UnityEngine.XR.ARSubsystems.XRRaycast::m_TrackingState
	int32_t ___m_TrackingState_3;
	// System.IntPtr UnityEngine.XR.ARSubsystems.XRRaycast::m_NativePtr
	intptr_t ___m_NativePtr_4;
	// System.Single UnityEngine.XR.ARSubsystems.XRRaycast::m_Distance
	float ___m_Distance_5;
	// UnityEngine.XR.ARSubsystems.TrackableId UnityEngine.XR.ARSubsystems.XRRaycast::m_HitTrackableId
	TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  ___m_HitTrackableId_6;

public:
	inline static int32_t get_offset_of_m_TrackableId_1() { return static_cast<int32_t>(offsetof(XRRaycast_tA18F9107EFF1D692E70EF15233BB6134A5F66C55, ___m_TrackableId_1)); }
	inline TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  get_m_TrackableId_1() const { return ___m_TrackableId_1; }
	inline TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B * get_address_of_m_TrackableId_1() { return &___m_TrackableId_1; }
	inline void set_m_TrackableId_1(TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  value)
	{
		___m_TrackableId_1 = value;
	}

	inline static int32_t get_offset_of_m_Pose_2() { return static_cast<int32_t>(offsetof(XRRaycast_tA18F9107EFF1D692E70EF15233BB6134A5F66C55, ___m_Pose_2)); }
	inline Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  get_m_Pose_2() const { return ___m_Pose_2; }
	inline Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A * get_address_of_m_Pose_2() { return &___m_Pose_2; }
	inline void set_m_Pose_2(Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  value)
	{
		___m_Pose_2 = value;
	}

	inline static int32_t get_offset_of_m_TrackingState_3() { return static_cast<int32_t>(offsetof(XRRaycast_tA18F9107EFF1D692E70EF15233BB6134A5F66C55, ___m_TrackingState_3)); }
	inline int32_t get_m_TrackingState_3() const { return ___m_TrackingState_3; }
	inline int32_t* get_address_of_m_TrackingState_3() { return &___m_TrackingState_3; }
	inline void set_m_TrackingState_3(int32_t value)
	{
		___m_TrackingState_3 = value;
	}

	inline static int32_t get_offset_of_m_NativePtr_4() { return static_cast<int32_t>(offsetof(XRRaycast_tA18F9107EFF1D692E70EF15233BB6134A5F66C55, ___m_NativePtr_4)); }
	inline intptr_t get_m_NativePtr_4() const { return ___m_NativePtr_4; }
	inline intptr_t* get_address_of_m_NativePtr_4() { return &___m_NativePtr_4; }
	inline void set_m_NativePtr_4(intptr_t value)
	{
		___m_NativePtr_4 = value;
	}

	inline static int32_t get_offset_of_m_Distance_5() { return static_cast<int32_t>(offsetof(XRRaycast_tA18F9107EFF1D692E70EF15233BB6134A5F66C55, ___m_Distance_5)); }
	inline float get_m_Distance_5() const { return ___m_Distance_5; }
	inline float* get_address_of_m_Distance_5() { return &___m_Distance_5; }
	inline void set_m_Distance_5(float value)
	{
		___m_Distance_5 = value;
	}

	inline static int32_t get_offset_of_m_HitTrackableId_6() { return static_cast<int32_t>(offsetof(XRRaycast_tA18F9107EFF1D692E70EF15233BB6134A5F66C55, ___m_HitTrackableId_6)); }
	inline TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  get_m_HitTrackableId_6() const { return ___m_HitTrackableId_6; }
	inline TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B * get_address_of_m_HitTrackableId_6() { return &___m_HitTrackableId_6; }
	inline void set_m_HitTrackableId_6(TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  value)
	{
		___m_HitTrackableId_6 = value;
	}
};

struct XRRaycast_tA18F9107EFF1D692E70EF15233BB6134A5F66C55_StaticFields
{
public:
	// UnityEngine.XR.ARSubsystems.XRRaycast UnityEngine.XR.ARSubsystems.XRRaycast::s_Default
	XRRaycast_tA18F9107EFF1D692E70EF15233BB6134A5F66C55  ___s_Default_0;

public:
	inline static int32_t get_offset_of_s_Default_0() { return static_cast<int32_t>(offsetof(XRRaycast_tA18F9107EFF1D692E70EF15233BB6134A5F66C55_StaticFields, ___s_Default_0)); }
	inline XRRaycast_tA18F9107EFF1D692E70EF15233BB6134A5F66C55  get_s_Default_0() const { return ___s_Default_0; }
	inline XRRaycast_tA18F9107EFF1D692E70EF15233BB6134A5F66C55 * get_address_of_s_Default_0() { return &___s_Default_0; }
	inline void set_s_Default_0(XRRaycast_tA18F9107EFF1D692E70EF15233BB6134A5F66C55  value)
	{
		___s_Default_0 = value;
	}
};


// UnityEngine.XR.ARSubsystems.XRRaycastHit
struct  XRRaycastHit_t94A3D13B245A9D0A7A7F2D0919DCAAC7C8DF8DDB 
{
public:
	// UnityEngine.XR.ARSubsystems.TrackableId UnityEngine.XR.ARSubsystems.XRRaycastHit::m_TrackableId
	TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  ___m_TrackableId_1;
	// UnityEngine.Pose UnityEngine.XR.ARSubsystems.XRRaycastHit::m_Pose
	Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  ___m_Pose_2;
	// System.Single UnityEngine.XR.ARSubsystems.XRRaycastHit::m_Distance
	float ___m_Distance_3;
	// UnityEngine.XR.ARSubsystems.TrackableType UnityEngine.XR.ARSubsystems.XRRaycastHit::m_HitType
	int32_t ___m_HitType_4;

public:
	inline static int32_t get_offset_of_m_TrackableId_1() { return static_cast<int32_t>(offsetof(XRRaycastHit_t94A3D13B245A9D0A7A7F2D0919DCAAC7C8DF8DDB, ___m_TrackableId_1)); }
	inline TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  get_m_TrackableId_1() const { return ___m_TrackableId_1; }
	inline TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B * get_address_of_m_TrackableId_1() { return &___m_TrackableId_1; }
	inline void set_m_TrackableId_1(TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  value)
	{
		___m_TrackableId_1 = value;
	}

	inline static int32_t get_offset_of_m_Pose_2() { return static_cast<int32_t>(offsetof(XRRaycastHit_t94A3D13B245A9D0A7A7F2D0919DCAAC7C8DF8DDB, ___m_Pose_2)); }
	inline Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  get_m_Pose_2() const { return ___m_Pose_2; }
	inline Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A * get_address_of_m_Pose_2() { return &___m_Pose_2; }
	inline void set_m_Pose_2(Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  value)
	{
		___m_Pose_2 = value;
	}

	inline static int32_t get_offset_of_m_Distance_3() { return static_cast<int32_t>(offsetof(XRRaycastHit_t94A3D13B245A9D0A7A7F2D0919DCAAC7C8DF8DDB, ___m_Distance_3)); }
	inline float get_m_Distance_3() const { return ___m_Distance_3; }
	inline float* get_address_of_m_Distance_3() { return &___m_Distance_3; }
	inline void set_m_Distance_3(float value)
	{
		___m_Distance_3 = value;
	}

	inline static int32_t get_offset_of_m_HitType_4() { return static_cast<int32_t>(offsetof(XRRaycastHit_t94A3D13B245A9D0A7A7F2D0919DCAAC7C8DF8DDB, ___m_HitType_4)); }
	inline int32_t get_m_HitType_4() const { return ___m_HitType_4; }
	inline int32_t* get_address_of_m_HitType_4() { return &___m_HitType_4; }
	inline void set_m_HitType_4(int32_t value)
	{
		___m_HitType_4 = value;
	}
};

struct XRRaycastHit_t94A3D13B245A9D0A7A7F2D0919DCAAC7C8DF8DDB_StaticFields
{
public:
	// UnityEngine.XR.ARSubsystems.XRRaycastHit UnityEngine.XR.ARSubsystems.XRRaycastHit::s_Default
	XRRaycastHit_t94A3D13B245A9D0A7A7F2D0919DCAAC7C8DF8DDB  ___s_Default_0;

public:
	inline static int32_t get_offset_of_s_Default_0() { return static_cast<int32_t>(offsetof(XRRaycastHit_t94A3D13B245A9D0A7A7F2D0919DCAAC7C8DF8DDB_StaticFields, ___s_Default_0)); }
	inline XRRaycastHit_t94A3D13B245A9D0A7A7F2D0919DCAAC7C8DF8DDB  get_s_Default_0() const { return ___s_Default_0; }
	inline XRRaycastHit_t94A3D13B245A9D0A7A7F2D0919DCAAC7C8DF8DDB * get_address_of_s_Default_0() { return &___s_Default_0; }
	inline void set_s_Default_0(XRRaycastHit_t94A3D13B245A9D0A7A7F2D0919DCAAC7C8DF8DDB  value)
	{
		___s_Default_0 = value;
	}
};


// UnityEngine.XR.ARSubsystems.XRRaycastSubsystem
struct  XRRaycastSubsystem_t62FDAC9AA1BD44C4557AEE3FEF3D2FA24C71B6B8  : public TrackingSubsystem_4_t87A57AE1E1117ED73BBD3B84DD595F36FA975077
{
public:

public:
};


// UnityEngine.XR.ARSubsystems.XRSessionUpdateParams
struct  XRSessionUpdateParams_t106E075C3B348969D6F3B634195F295CE47DB77F 
{
public:
	// UnityEngine.ScreenOrientation UnityEngine.XR.ARSubsystems.XRSessionUpdateParams::<screenOrientation>k__BackingField
	int32_t ___U3CscreenOrientationU3Ek__BackingField_0;
	// UnityEngine.Vector2Int UnityEngine.XR.ARSubsystems.XRSessionUpdateParams::<screenDimensions>k__BackingField
	Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  ___U3CscreenDimensionsU3Ek__BackingField_1;

public:
	inline static int32_t get_offset_of_U3CscreenOrientationU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(XRSessionUpdateParams_t106E075C3B348969D6F3B634195F295CE47DB77F, ___U3CscreenOrientationU3Ek__BackingField_0)); }
	inline int32_t get_U3CscreenOrientationU3Ek__BackingField_0() const { return ___U3CscreenOrientationU3Ek__BackingField_0; }
	inline int32_t* get_address_of_U3CscreenOrientationU3Ek__BackingField_0() { return &___U3CscreenOrientationU3Ek__BackingField_0; }
	inline void set_U3CscreenOrientationU3Ek__BackingField_0(int32_t value)
	{
		___U3CscreenOrientationU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of_U3CscreenDimensionsU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(XRSessionUpdateParams_t106E075C3B348969D6F3B634195F295CE47DB77F, ___U3CscreenDimensionsU3Ek__BackingField_1)); }
	inline Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  get_U3CscreenDimensionsU3Ek__BackingField_1() const { return ___U3CscreenDimensionsU3Ek__BackingField_1; }
	inline Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9 * get_address_of_U3CscreenDimensionsU3Ek__BackingField_1() { return &___U3CscreenDimensionsU3Ek__BackingField_1; }
	inline void set_U3CscreenDimensionsU3Ek__BackingField_1(Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  value)
	{
		___U3CscreenDimensionsU3Ek__BackingField_1 = value;
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


// UnityEngine.XR.ARSubsystems.XRTrackedImage
struct  XRTrackedImage_t92B53E0621C6D2E930761110E719F0E9580A722F 
{
public:
	// UnityEngine.XR.ARSubsystems.TrackableId UnityEngine.XR.ARSubsystems.XRTrackedImage::m_Id
	TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  ___m_Id_1;
	// System.Guid UnityEngine.XR.ARSubsystems.XRTrackedImage::m_SourceImageId
	Guid_t  ___m_SourceImageId_2;
	// UnityEngine.Pose UnityEngine.XR.ARSubsystems.XRTrackedImage::m_Pose
	Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  ___m_Pose_3;
	// UnityEngine.Vector2 UnityEngine.XR.ARSubsystems.XRTrackedImage::m_Size
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___m_Size_4;
	// UnityEngine.XR.ARSubsystems.TrackingState UnityEngine.XR.ARSubsystems.XRTrackedImage::m_TrackingState
	int32_t ___m_TrackingState_5;
	// System.IntPtr UnityEngine.XR.ARSubsystems.XRTrackedImage::m_NativePtr
	intptr_t ___m_NativePtr_6;

public:
	inline static int32_t get_offset_of_m_Id_1() { return static_cast<int32_t>(offsetof(XRTrackedImage_t92B53E0621C6D2E930761110E719F0E9580A722F, ___m_Id_1)); }
	inline TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  get_m_Id_1() const { return ___m_Id_1; }
	inline TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B * get_address_of_m_Id_1() { return &___m_Id_1; }
	inline void set_m_Id_1(TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  value)
	{
		___m_Id_1 = value;
	}

	inline static int32_t get_offset_of_m_SourceImageId_2() { return static_cast<int32_t>(offsetof(XRTrackedImage_t92B53E0621C6D2E930761110E719F0E9580A722F, ___m_SourceImageId_2)); }
	inline Guid_t  get_m_SourceImageId_2() const { return ___m_SourceImageId_2; }
	inline Guid_t * get_address_of_m_SourceImageId_2() { return &___m_SourceImageId_2; }
	inline void set_m_SourceImageId_2(Guid_t  value)
	{
		___m_SourceImageId_2 = value;
	}

	inline static int32_t get_offset_of_m_Pose_3() { return static_cast<int32_t>(offsetof(XRTrackedImage_t92B53E0621C6D2E930761110E719F0E9580A722F, ___m_Pose_3)); }
	inline Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  get_m_Pose_3() const { return ___m_Pose_3; }
	inline Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A * get_address_of_m_Pose_3() { return &___m_Pose_3; }
	inline void set_m_Pose_3(Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  value)
	{
		___m_Pose_3 = value;
	}

	inline static int32_t get_offset_of_m_Size_4() { return static_cast<int32_t>(offsetof(XRTrackedImage_t92B53E0621C6D2E930761110E719F0E9580A722F, ___m_Size_4)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_m_Size_4() const { return ___m_Size_4; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_m_Size_4() { return &___m_Size_4; }
	inline void set_m_Size_4(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___m_Size_4 = value;
	}

	inline static int32_t get_offset_of_m_TrackingState_5() { return static_cast<int32_t>(offsetof(XRTrackedImage_t92B53E0621C6D2E930761110E719F0E9580A722F, ___m_TrackingState_5)); }
	inline int32_t get_m_TrackingState_5() const { return ___m_TrackingState_5; }
	inline int32_t* get_address_of_m_TrackingState_5() { return &___m_TrackingState_5; }
	inline void set_m_TrackingState_5(int32_t value)
	{
		___m_TrackingState_5 = value;
	}

	inline static int32_t get_offset_of_m_NativePtr_6() { return static_cast<int32_t>(offsetof(XRTrackedImage_t92B53E0621C6D2E930761110E719F0E9580A722F, ___m_NativePtr_6)); }
	inline intptr_t get_m_NativePtr_6() const { return ___m_NativePtr_6; }
	inline intptr_t* get_address_of_m_NativePtr_6() { return &___m_NativePtr_6; }
	inline void set_m_NativePtr_6(intptr_t value)
	{
		___m_NativePtr_6 = value;
	}
};

struct XRTrackedImage_t92B53E0621C6D2E930761110E719F0E9580A722F_StaticFields
{
public:
	// UnityEngine.XR.ARSubsystems.XRTrackedImage UnityEngine.XR.ARSubsystems.XRTrackedImage::s_Default
	XRTrackedImage_t92B53E0621C6D2E930761110E719F0E9580A722F  ___s_Default_0;

public:
	inline static int32_t get_offset_of_s_Default_0() { return static_cast<int32_t>(offsetof(XRTrackedImage_t92B53E0621C6D2E930761110E719F0E9580A722F_StaticFields, ___s_Default_0)); }
	inline XRTrackedImage_t92B53E0621C6D2E930761110E719F0E9580A722F  get_s_Default_0() const { return ___s_Default_0; }
	inline XRTrackedImage_t92B53E0621C6D2E930761110E719F0E9580A722F * get_address_of_s_Default_0() { return &___s_Default_0; }
	inline void set_s_Default_0(XRTrackedImage_t92B53E0621C6D2E930761110E719F0E9580A722F  value)
	{
		___s_Default_0 = value;
	}
};


// UnityEngine.XR.ARSubsystems.XRTrackedObject
struct  XRTrackedObject_t247BBE67D4F9308544C4BAD807F321E0C404EC58 
{
public:
	// UnityEngine.XR.ARSubsystems.TrackableId UnityEngine.XR.ARSubsystems.XRTrackedObject::m_TrackableId
	TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  ___m_TrackableId_0;
	// UnityEngine.Pose UnityEngine.XR.ARSubsystems.XRTrackedObject::m_Pose
	Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  ___m_Pose_1;
	// UnityEngine.XR.ARSubsystems.TrackingState UnityEngine.XR.ARSubsystems.XRTrackedObject::m_TrackingState
	int32_t ___m_TrackingState_2;
	// System.IntPtr UnityEngine.XR.ARSubsystems.XRTrackedObject::m_NativePtr
	intptr_t ___m_NativePtr_3;
	// System.Guid UnityEngine.XR.ARSubsystems.XRTrackedObject::m_ReferenceObjectGuid
	Guid_t  ___m_ReferenceObjectGuid_4;

public:
	inline static int32_t get_offset_of_m_TrackableId_0() { return static_cast<int32_t>(offsetof(XRTrackedObject_t247BBE67D4F9308544C4BAD807F321E0C404EC58, ___m_TrackableId_0)); }
	inline TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  get_m_TrackableId_0() const { return ___m_TrackableId_0; }
	inline TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B * get_address_of_m_TrackableId_0() { return &___m_TrackableId_0; }
	inline void set_m_TrackableId_0(TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  value)
	{
		___m_TrackableId_0 = value;
	}

	inline static int32_t get_offset_of_m_Pose_1() { return static_cast<int32_t>(offsetof(XRTrackedObject_t247BBE67D4F9308544C4BAD807F321E0C404EC58, ___m_Pose_1)); }
	inline Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  get_m_Pose_1() const { return ___m_Pose_1; }
	inline Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A * get_address_of_m_Pose_1() { return &___m_Pose_1; }
	inline void set_m_Pose_1(Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  value)
	{
		___m_Pose_1 = value;
	}

	inline static int32_t get_offset_of_m_TrackingState_2() { return static_cast<int32_t>(offsetof(XRTrackedObject_t247BBE67D4F9308544C4BAD807F321E0C404EC58, ___m_TrackingState_2)); }
	inline int32_t get_m_TrackingState_2() const { return ___m_TrackingState_2; }
	inline int32_t* get_address_of_m_TrackingState_2() { return &___m_TrackingState_2; }
	inline void set_m_TrackingState_2(int32_t value)
	{
		___m_TrackingState_2 = value;
	}

	inline static int32_t get_offset_of_m_NativePtr_3() { return static_cast<int32_t>(offsetof(XRTrackedObject_t247BBE67D4F9308544C4BAD807F321E0C404EC58, ___m_NativePtr_3)); }
	inline intptr_t get_m_NativePtr_3() const { return ___m_NativePtr_3; }
	inline intptr_t* get_address_of_m_NativePtr_3() { return &___m_NativePtr_3; }
	inline void set_m_NativePtr_3(intptr_t value)
	{
		___m_NativePtr_3 = value;
	}

	inline static int32_t get_offset_of_m_ReferenceObjectGuid_4() { return static_cast<int32_t>(offsetof(XRTrackedObject_t247BBE67D4F9308544C4BAD807F321E0C404EC58, ___m_ReferenceObjectGuid_4)); }
	inline Guid_t  get_m_ReferenceObjectGuid_4() const { return ___m_ReferenceObjectGuid_4; }
	inline Guid_t * get_address_of_m_ReferenceObjectGuid_4() { return &___m_ReferenceObjectGuid_4; }
	inline void set_m_ReferenceObjectGuid_4(Guid_t  value)
	{
		___m_ReferenceObjectGuid_4 = value;
	}
};

struct XRTrackedObject_t247BBE67D4F9308544C4BAD807F321E0C404EC58_StaticFields
{
public:
	// UnityEngine.XR.ARSubsystems.XRTrackedObject UnityEngine.XR.ARSubsystems.XRTrackedObject::s_Default
	XRTrackedObject_t247BBE67D4F9308544C4BAD807F321E0C404EC58  ___s_Default_5;

public:
	inline static int32_t get_offset_of_s_Default_5() { return static_cast<int32_t>(offsetof(XRTrackedObject_t247BBE67D4F9308544C4BAD807F321E0C404EC58_StaticFields, ___s_Default_5)); }
	inline XRTrackedObject_t247BBE67D4F9308544C4BAD807F321E0C404EC58  get_s_Default_5() const { return ___s_Default_5; }
	inline XRTrackedObject_t247BBE67D4F9308544C4BAD807F321E0C404EC58 * get_address_of_s_Default_5() { return &___s_Default_5; }
	inline void set_s_Default_5(XRTrackedObject_t247BBE67D4F9308544C4BAD807F321E0C404EC58  value)
	{
		___s_Default_5 = value;
	}
};


// UnityEngine.XR.ARKit.ARKitAnchorSubsystem/ARKitProvider
struct  ARKitProvider_tE10DC6803776ECE42E55F127E68C47E50319202E  : public Provider_t9F286D20EB73EBBA4B6E7203C7A9051BE673C2E2
{
public:

public:
};


// UnityEngine.XR.ARKit.ARKitCameraSubsystem/ARKitProvider
struct  ARKitProvider_tA94DC507BD799F0EB939B5D43E47850858DD9252  : public Provider_t55916B0D2766C320DCA36A0C870BA2FD80F8B6D1
{
public:
	// UnityEngine.Material UnityEngine.XR.ARKit.ARKitCameraSubsystem/ARKitProvider::m_CameraMaterial
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___m_CameraMaterial_5;

public:
	inline static int32_t get_offset_of_m_CameraMaterial_5() { return static_cast<int32_t>(offsetof(ARKitProvider_tA94DC507BD799F0EB939B5D43E47850858DD9252, ___m_CameraMaterial_5)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_m_CameraMaterial_5() const { return ___m_CameraMaterial_5; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_m_CameraMaterial_5() { return &___m_CameraMaterial_5; }
	inline void set_m_CameraMaterial_5(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___m_CameraMaterial_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CameraMaterial_5), (void*)value);
	}
};

struct ARKitProvider_tA94DC507BD799F0EB939B5D43E47850858DD9252_StaticFields
{
public:
	// System.Int32 UnityEngine.XR.ARKit.ARKitCameraSubsystem/ARKitProvider::k_TextureYPropertyNameId
	int32_t ___k_TextureYPropertyNameId_1;
	// System.Int32 UnityEngine.XR.ARKit.ARKitCameraSubsystem/ARKitProvider::k_TextureCbCrPropertyNameId
	int32_t ___k_TextureCbCrPropertyNameId_2;
	// System.Collections.Generic.List`1<System.String> UnityEngine.XR.ARKit.ARKitCameraSubsystem/ARKitProvider::k_LegacyRPEnabledMaterialKeywords
	List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * ___k_LegacyRPEnabledMaterialKeywords_3;
	// System.Collections.Generic.List`1<System.String> UnityEngine.XR.ARKit.ARKitCameraSubsystem/ARKitProvider::k_LegacyRPDisabledMaterialKeywords
	List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * ___k_LegacyRPDisabledMaterialKeywords_4;

public:
	inline static int32_t get_offset_of_k_TextureYPropertyNameId_1() { return static_cast<int32_t>(offsetof(ARKitProvider_tA94DC507BD799F0EB939B5D43E47850858DD9252_StaticFields, ___k_TextureYPropertyNameId_1)); }
	inline int32_t get_k_TextureYPropertyNameId_1() const { return ___k_TextureYPropertyNameId_1; }
	inline int32_t* get_address_of_k_TextureYPropertyNameId_1() { return &___k_TextureYPropertyNameId_1; }
	inline void set_k_TextureYPropertyNameId_1(int32_t value)
	{
		___k_TextureYPropertyNameId_1 = value;
	}

	inline static int32_t get_offset_of_k_TextureCbCrPropertyNameId_2() { return static_cast<int32_t>(offsetof(ARKitProvider_tA94DC507BD799F0EB939B5D43E47850858DD9252_StaticFields, ___k_TextureCbCrPropertyNameId_2)); }
	inline int32_t get_k_TextureCbCrPropertyNameId_2() const { return ___k_TextureCbCrPropertyNameId_2; }
	inline int32_t* get_address_of_k_TextureCbCrPropertyNameId_2() { return &___k_TextureCbCrPropertyNameId_2; }
	inline void set_k_TextureCbCrPropertyNameId_2(int32_t value)
	{
		___k_TextureCbCrPropertyNameId_2 = value;
	}

	inline static int32_t get_offset_of_k_LegacyRPEnabledMaterialKeywords_3() { return static_cast<int32_t>(offsetof(ARKitProvider_tA94DC507BD799F0EB939B5D43E47850858DD9252_StaticFields, ___k_LegacyRPEnabledMaterialKeywords_3)); }
	inline List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * get_k_LegacyRPEnabledMaterialKeywords_3() const { return ___k_LegacyRPEnabledMaterialKeywords_3; }
	inline List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 ** get_address_of_k_LegacyRPEnabledMaterialKeywords_3() { return &___k_LegacyRPEnabledMaterialKeywords_3; }
	inline void set_k_LegacyRPEnabledMaterialKeywords_3(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * value)
	{
		___k_LegacyRPEnabledMaterialKeywords_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___k_LegacyRPEnabledMaterialKeywords_3), (void*)value);
	}

	inline static int32_t get_offset_of_k_LegacyRPDisabledMaterialKeywords_4() { return static_cast<int32_t>(offsetof(ARKitProvider_tA94DC507BD799F0EB939B5D43E47850858DD9252_StaticFields, ___k_LegacyRPDisabledMaterialKeywords_4)); }
	inline List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * get_k_LegacyRPDisabledMaterialKeywords_4() const { return ___k_LegacyRPDisabledMaterialKeywords_4; }
	inline List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 ** get_address_of_k_LegacyRPDisabledMaterialKeywords_4() { return &___k_LegacyRPDisabledMaterialKeywords_4; }
	inline void set_k_LegacyRPDisabledMaterialKeywords_4(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * value)
	{
		___k_LegacyRPDisabledMaterialKeywords_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___k_LegacyRPDisabledMaterialKeywords_4), (void*)value);
	}
};


// UnityEngine.XR.ARKit.ARKitEnvironmentProbeSubsystem/ARKitProvider
struct  ARKitProvider_tBED347A85C19012D5B5F124BC8C0FB4876FBEACC  : public Provider_tAF87FE3E906FDBF14F06488A1AA5E80400EFE190
{
public:

public:
};


// UnityEngine.XR.ARKit.ARKitHumanBodySubsystem/ARKitProvider
struct  ARKitProvider_t5CC80E0D6F9A6EFFA70F54E8CDBEDB36D0CC4ED0  : public Provider_t055C90C34B2BCE8D134DF44C12823E320519168C
{
public:

public:
};


// UnityEngine.XR.ARKit.ARKitImageDatabase/AddImageJob
struct  AddImageJob_t8EC95C9EA777B31823D128D52F383B45EF7F3AA5 
{
public:
	// Unity.Collections.NativeSlice`1<System.Byte> UnityEngine.XR.ARKit.ARKitImageDatabase/AddImageJob::image
	NativeSlice_1_tA05D3BC7EB042685CBFD3369ECB6140D114C911B  ___image_0;
	// System.IntPtr UnityEngine.XR.ARKit.ARKitImageDatabase/AddImageJob::database
	intptr_t ___database_1;
	// System.Int32 UnityEngine.XR.ARKit.ARKitImageDatabase/AddImageJob::width
	int32_t ___width_2;
	// System.Int32 UnityEngine.XR.ARKit.ARKitImageDatabase/AddImageJob::height
	int32_t ___height_3;
	// System.Single UnityEngine.XR.ARKit.ARKitImageDatabase/AddImageJob::physicalWidth
	float ___physicalWidth_4;
	// UnityEngine.TextureFormat UnityEngine.XR.ARKit.ARKitImageDatabase/AddImageJob::format
	int32_t ___format_5;
	// UnityEngine.XR.ARKit.ManagedReferenceImage UnityEngine.XR.ARKit.ARKitImageDatabase/AddImageJob::managedReferenceImage
	ManagedReferenceImage_t867FD513C8CBF1F9824DBFB215783BE8C33F0FA1  ___managedReferenceImage_6;

public:
	inline static int32_t get_offset_of_image_0() { return static_cast<int32_t>(offsetof(AddImageJob_t8EC95C9EA777B31823D128D52F383B45EF7F3AA5, ___image_0)); }
	inline NativeSlice_1_tA05D3BC7EB042685CBFD3369ECB6140D114C911B  get_image_0() const { return ___image_0; }
	inline NativeSlice_1_tA05D3BC7EB042685CBFD3369ECB6140D114C911B * get_address_of_image_0() { return &___image_0; }
	inline void set_image_0(NativeSlice_1_tA05D3BC7EB042685CBFD3369ECB6140D114C911B  value)
	{
		___image_0 = value;
	}

	inline static int32_t get_offset_of_database_1() { return static_cast<int32_t>(offsetof(AddImageJob_t8EC95C9EA777B31823D128D52F383B45EF7F3AA5, ___database_1)); }
	inline intptr_t get_database_1() const { return ___database_1; }
	inline intptr_t* get_address_of_database_1() { return &___database_1; }
	inline void set_database_1(intptr_t value)
	{
		___database_1 = value;
	}

	inline static int32_t get_offset_of_width_2() { return static_cast<int32_t>(offsetof(AddImageJob_t8EC95C9EA777B31823D128D52F383B45EF7F3AA5, ___width_2)); }
	inline int32_t get_width_2() const { return ___width_2; }
	inline int32_t* get_address_of_width_2() { return &___width_2; }
	inline void set_width_2(int32_t value)
	{
		___width_2 = value;
	}

	inline static int32_t get_offset_of_height_3() { return static_cast<int32_t>(offsetof(AddImageJob_t8EC95C9EA777B31823D128D52F383B45EF7F3AA5, ___height_3)); }
	inline int32_t get_height_3() const { return ___height_3; }
	inline int32_t* get_address_of_height_3() { return &___height_3; }
	inline void set_height_3(int32_t value)
	{
		___height_3 = value;
	}

	inline static int32_t get_offset_of_physicalWidth_4() { return static_cast<int32_t>(offsetof(AddImageJob_t8EC95C9EA777B31823D128D52F383B45EF7F3AA5, ___physicalWidth_4)); }
	inline float get_physicalWidth_4() const { return ___physicalWidth_4; }
	inline float* get_address_of_physicalWidth_4() { return &___physicalWidth_4; }
	inline void set_physicalWidth_4(float value)
	{
		___physicalWidth_4 = value;
	}

	inline static int32_t get_offset_of_format_5() { return static_cast<int32_t>(offsetof(AddImageJob_t8EC95C9EA777B31823D128D52F383B45EF7F3AA5, ___format_5)); }
	inline int32_t get_format_5() const { return ___format_5; }
	inline int32_t* get_address_of_format_5() { return &___format_5; }
	inline void set_format_5(int32_t value)
	{
		___format_5 = value;
	}

	inline static int32_t get_offset_of_managedReferenceImage_6() { return static_cast<int32_t>(offsetof(AddImageJob_t8EC95C9EA777B31823D128D52F383B45EF7F3AA5, ___managedReferenceImage_6)); }
	inline ManagedReferenceImage_t867FD513C8CBF1F9824DBFB215783BE8C33F0FA1  get_managedReferenceImage_6() const { return ___managedReferenceImage_6; }
	inline ManagedReferenceImage_t867FD513C8CBF1F9824DBFB215783BE8C33F0FA1 * get_address_of_managedReferenceImage_6() { return &___managedReferenceImage_6; }
	inline void set_managedReferenceImage_6(ManagedReferenceImage_t867FD513C8CBF1F9824DBFB215783BE8C33F0FA1  value)
	{
		___managedReferenceImage_6 = value;
	}
};


// UnityEngine.XR.ARKit.ARKitImageTrackingSubsystem/ARKitProvider
struct  ARKitProvider_t6838013201F7369104C65DD65159D910B116E8AC  : public Provider_tA7CEF856C3BC486ADEBD656F5535E24262AAAE9E
{
public:

public:
};


// UnityEngine.XR.ARKit.ARKitOcclusionSubsystem/ARKitProvider
struct  ARKitProvider_t8C73B4487170F7B34DF431897CADB4B9CA84C611  : public Provider_t5B60C630FB68EFEAB6FA2F3D9A732C144003B7FB
{
public:

public:
};

struct ARKitProvider_t8C73B4487170F7B34DF431897CADB4B9CA84C611_StaticFields
{
public:
	// System.Int32 UnityEngine.XR.ARKit.ARKitOcclusionSubsystem/ARKitProvider::k_TextureHumanStencilPropertyId
	int32_t ___k_TextureHumanStencilPropertyId_1;
	// System.Int32 UnityEngine.XR.ARKit.ARKitOcclusionSubsystem/ARKitProvider::k_TextureHumanDepthPropertyId
	int32_t ___k_TextureHumanDepthPropertyId_2;
	// System.Collections.Generic.List`1<System.String> UnityEngine.XR.ARKit.ARKitOcclusionSubsystem/ARKitProvider::m_HumanEnabledMaterialKeywords
	List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * ___m_HumanEnabledMaterialKeywords_3;

public:
	inline static int32_t get_offset_of_k_TextureHumanStencilPropertyId_1() { return static_cast<int32_t>(offsetof(ARKitProvider_t8C73B4487170F7B34DF431897CADB4B9CA84C611_StaticFields, ___k_TextureHumanStencilPropertyId_1)); }
	inline int32_t get_k_TextureHumanStencilPropertyId_1() const { return ___k_TextureHumanStencilPropertyId_1; }
	inline int32_t* get_address_of_k_TextureHumanStencilPropertyId_1() { return &___k_TextureHumanStencilPropertyId_1; }
	inline void set_k_TextureHumanStencilPropertyId_1(int32_t value)
	{
		___k_TextureHumanStencilPropertyId_1 = value;
	}

	inline static int32_t get_offset_of_k_TextureHumanDepthPropertyId_2() { return static_cast<int32_t>(offsetof(ARKitProvider_t8C73B4487170F7B34DF431897CADB4B9CA84C611_StaticFields, ___k_TextureHumanDepthPropertyId_2)); }
	inline int32_t get_k_TextureHumanDepthPropertyId_2() const { return ___k_TextureHumanDepthPropertyId_2; }
	inline int32_t* get_address_of_k_TextureHumanDepthPropertyId_2() { return &___k_TextureHumanDepthPropertyId_2; }
	inline void set_k_TextureHumanDepthPropertyId_2(int32_t value)
	{
		___k_TextureHumanDepthPropertyId_2 = value;
	}

	inline static int32_t get_offset_of_m_HumanEnabledMaterialKeywords_3() { return static_cast<int32_t>(offsetof(ARKitProvider_t8C73B4487170F7B34DF431897CADB4B9CA84C611_StaticFields, ___m_HumanEnabledMaterialKeywords_3)); }
	inline List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * get_m_HumanEnabledMaterialKeywords_3() const { return ___m_HumanEnabledMaterialKeywords_3; }
	inline List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 ** get_address_of_m_HumanEnabledMaterialKeywords_3() { return &___m_HumanEnabledMaterialKeywords_3; }
	inline void set_m_HumanEnabledMaterialKeywords_3(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * value)
	{
		___m_HumanEnabledMaterialKeywords_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_HumanEnabledMaterialKeywords_3), (void*)value);
	}
};


// UnityEngine.XR.ARKit.ARKitParticipantSubsystem/ARKitProvider
struct  ARKitProvider_t9908B32D1E5398BA2FD0D825E9343F8CA0277B4C  : public Provider_t1D0BC515976D24FD30341AC456ACFCB2DE4A344E
{
public:
	// System.IntPtr UnityEngine.XR.ARKit.ARKitParticipantSubsystem/ARKitProvider::m_Ptr
	intptr_t ___m_Ptr_1;

public:
	inline static int32_t get_offset_of_m_Ptr_1() { return static_cast<int32_t>(offsetof(ARKitProvider_t9908B32D1E5398BA2FD0D825E9343F8CA0277B4C, ___m_Ptr_1)); }
	inline intptr_t get_m_Ptr_1() const { return ___m_Ptr_1; }
	inline intptr_t* get_address_of_m_Ptr_1() { return &___m_Ptr_1; }
	inline void set_m_Ptr_1(intptr_t value)
	{
		___m_Ptr_1 = value;
	}
};


// UnityEngine.XR.ARKit.ARKitRaycastSubsystem/ARKitProvider
struct  ARKitProvider_t3FB2A65F0CF8BCD91C4CC54F3841159E7F7DAA88  : public Provider_tF185BE0541D2066CD242583CEFE7709DD22DD227
{
public:
	// System.IntPtr UnityEngine.XR.ARKit.ARKitRaycastSubsystem/ARKitProvider::m_Self
	intptr_t ___m_Self_1;

public:
	inline static int32_t get_offset_of_m_Self_1() { return static_cast<int32_t>(offsetof(ARKitProvider_t3FB2A65F0CF8BCD91C4CC54F3841159E7F7DAA88, ___m_Self_1)); }
	inline intptr_t get_m_Self_1() const { return ___m_Self_1; }
	inline intptr_t* get_address_of_m_Self_1() { return &___m_Self_1; }
	inline void set_m_Self_1(intptr_t value)
	{
		___m_Self_1 = value;
	}
};


// UnityEngine.XR.ARKit.ARKitSessionSubsystem/ARKitProvider
struct  ARKitProvider_t9AF751FC81DD6B052A462DBB30F46C946CE9E7CF  : public Provider_t4C3675997BB8AF3A6A32C3EC3C93C10E4D3E8D1A
{
public:
	// System.IntPtr UnityEngine.XR.ARKit.ARKitSessionSubsystem/ARKitProvider::m_Self
	intptr_t ___m_Self_1;

public:
	inline static int32_t get_offset_of_m_Self_1() { return static_cast<int32_t>(offsetof(ARKitProvider_t9AF751FC81DD6B052A462DBB30F46C946CE9E7CF, ___m_Self_1)); }
	inline intptr_t get_m_Self_1() const { return ___m_Self_1; }
	inline intptr_t* get_address_of_m_Self_1() { return &___m_Self_1; }
	inline void set_m_Self_1(intptr_t value)
	{
		___m_Self_1 = value;
	}
};


// UnityEngine.XR.ARKit.ARKitXRDepthSubsystem/ARKitProvider
struct  ARKitProvider_tC6BBA25F076F6D64FA8E6336E6860D7DBD41A7A1  : public Provider_t8E88C17A70269CD3E96909AFCCA952AAA7DEC0B6
{
public:

public:
};


// UnityEngine.XR.ARKit.ARKitXRObjectTrackingSubsystem/ARKitProvider
struct  ARKitProvider_tDDBF5C474A3543A0F5FA7FB07A058B223F6DA8EC  : public Provider_t35977A2A0AA6C338BC9893668DD32F0294A9C01E
{
public:

public:
};


// UnityEngine.XR.ARKit.ARKitXRPlaneSubsystem/ARKitProvider
struct  ARKitProvider_tF9F620C89E671C028D10768C5300D3539661A2C1  : public Provider_t6CB5B1036B0AAED1379F3828D695A6942B72BA12
{
public:

public:
};


// UnityEngine.XR.ARSubsystems.XRCpuImage/Cinfo
struct  Cinfo_t4E32E30AF6973611F1DD0F47FC041ED3A8775DA6 
{
public:
	// System.Int32 UnityEngine.XR.ARSubsystems.XRCpuImage/Cinfo::m_NativeHandle
	int32_t ___m_NativeHandle_0;
	// UnityEngine.Vector2Int UnityEngine.XR.ARSubsystems.XRCpuImage/Cinfo::m_Dimensions
	Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  ___m_Dimensions_1;
	// System.Int32 UnityEngine.XR.ARSubsystems.XRCpuImage/Cinfo::m_PlaneCount
	int32_t ___m_PlaneCount_2;
	// System.Double UnityEngine.XR.ARSubsystems.XRCpuImage/Cinfo::m_Timestamp
	double ___m_Timestamp_3;
	// UnityEngine.XR.ARSubsystems.XRCpuImage/Format UnityEngine.XR.ARSubsystems.XRCpuImage/Cinfo::m_Format
	int32_t ___m_Format_4;

public:
	inline static int32_t get_offset_of_m_NativeHandle_0() { return static_cast<int32_t>(offsetof(Cinfo_t4E32E30AF6973611F1DD0F47FC041ED3A8775DA6, ___m_NativeHandle_0)); }
	inline int32_t get_m_NativeHandle_0() const { return ___m_NativeHandle_0; }
	inline int32_t* get_address_of_m_NativeHandle_0() { return &___m_NativeHandle_0; }
	inline void set_m_NativeHandle_0(int32_t value)
	{
		___m_NativeHandle_0 = value;
	}

	inline static int32_t get_offset_of_m_Dimensions_1() { return static_cast<int32_t>(offsetof(Cinfo_t4E32E30AF6973611F1DD0F47FC041ED3A8775DA6, ___m_Dimensions_1)); }
	inline Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  get_m_Dimensions_1() const { return ___m_Dimensions_1; }
	inline Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9 * get_address_of_m_Dimensions_1() { return &___m_Dimensions_1; }
	inline void set_m_Dimensions_1(Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  value)
	{
		___m_Dimensions_1 = value;
	}

	inline static int32_t get_offset_of_m_PlaneCount_2() { return static_cast<int32_t>(offsetof(Cinfo_t4E32E30AF6973611F1DD0F47FC041ED3A8775DA6, ___m_PlaneCount_2)); }
	inline int32_t get_m_PlaneCount_2() const { return ___m_PlaneCount_2; }
	inline int32_t* get_address_of_m_PlaneCount_2() { return &___m_PlaneCount_2; }
	inline void set_m_PlaneCount_2(int32_t value)
	{
		___m_PlaneCount_2 = value;
	}

	inline static int32_t get_offset_of_m_Timestamp_3() { return static_cast<int32_t>(offsetof(Cinfo_t4E32E30AF6973611F1DD0F47FC041ED3A8775DA6, ___m_Timestamp_3)); }
	inline double get_m_Timestamp_3() const { return ___m_Timestamp_3; }
	inline double* get_address_of_m_Timestamp_3() { return &___m_Timestamp_3; }
	inline void set_m_Timestamp_3(double value)
	{
		___m_Timestamp_3 = value;
	}

	inline static int32_t get_offset_of_m_Format_4() { return static_cast<int32_t>(offsetof(Cinfo_t4E32E30AF6973611F1DD0F47FC041ED3A8775DA6, ___m_Format_4)); }
	inline int32_t get_m_Format_4() const { return ___m_Format_4; }
	inline int32_t* get_address_of_m_Format_4() { return &___m_Format_4; }
	inline void set_m_Format_4(int32_t value)
	{
		___m_Format_4 = value;
	}
};


// UnityEngine.XR.ARSubsystems.XRDepthSubsystemDescriptor/Cinfo
struct  Cinfo_t37F91E88FCD8623834BE1898FC146620538C08B1 
{
public:
	// System.String UnityEngine.XR.ARSubsystems.XRDepthSubsystemDescriptor/Cinfo::id
	String_t* ___id_0;
	// System.Type UnityEngine.XR.ARSubsystems.XRDepthSubsystemDescriptor/Cinfo::<providerType>k__BackingField
	Type_t * ___U3CproviderTypeU3Ek__BackingField_1;
	// System.Type UnityEngine.XR.ARSubsystems.XRDepthSubsystemDescriptor/Cinfo::<subsystemTypeOverride>k__BackingField
	Type_t * ___U3CsubsystemTypeOverrideU3Ek__BackingField_2;
	// System.Type UnityEngine.XR.ARSubsystems.XRDepthSubsystemDescriptor/Cinfo::implementationType
	Type_t * ___implementationType_3;
	// UnityEngine.XR.ARSubsystems.XRDepthSubsystemDescriptor/Capabilities UnityEngine.XR.ARSubsystems.XRDepthSubsystemDescriptor/Cinfo::<capabilities>k__BackingField
	int32_t ___U3CcapabilitiesU3Ek__BackingField_4;

public:
	inline static int32_t get_offset_of_id_0() { return static_cast<int32_t>(offsetof(Cinfo_t37F91E88FCD8623834BE1898FC146620538C08B1, ___id_0)); }
	inline String_t* get_id_0() const { return ___id_0; }
	inline String_t** get_address_of_id_0() { return &___id_0; }
	inline void set_id_0(String_t* value)
	{
		___id_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___id_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CproviderTypeU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(Cinfo_t37F91E88FCD8623834BE1898FC146620538C08B1, ___U3CproviderTypeU3Ek__BackingField_1)); }
	inline Type_t * get_U3CproviderTypeU3Ek__BackingField_1() const { return ___U3CproviderTypeU3Ek__BackingField_1; }
	inline Type_t ** get_address_of_U3CproviderTypeU3Ek__BackingField_1() { return &___U3CproviderTypeU3Ek__BackingField_1; }
	inline void set_U3CproviderTypeU3Ek__BackingField_1(Type_t * value)
	{
		___U3CproviderTypeU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CproviderTypeU3Ek__BackingField_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CsubsystemTypeOverrideU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(Cinfo_t37F91E88FCD8623834BE1898FC146620538C08B1, ___U3CsubsystemTypeOverrideU3Ek__BackingField_2)); }
	inline Type_t * get_U3CsubsystemTypeOverrideU3Ek__BackingField_2() const { return ___U3CsubsystemTypeOverrideU3Ek__BackingField_2; }
	inline Type_t ** get_address_of_U3CsubsystemTypeOverrideU3Ek__BackingField_2() { return &___U3CsubsystemTypeOverrideU3Ek__BackingField_2; }
	inline void set_U3CsubsystemTypeOverrideU3Ek__BackingField_2(Type_t * value)
	{
		___U3CsubsystemTypeOverrideU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CsubsystemTypeOverrideU3Ek__BackingField_2), (void*)value);
	}

	inline static int32_t get_offset_of_implementationType_3() { return static_cast<int32_t>(offsetof(Cinfo_t37F91E88FCD8623834BE1898FC146620538C08B1, ___implementationType_3)); }
	inline Type_t * get_implementationType_3() const { return ___implementationType_3; }
	inline Type_t ** get_address_of_implementationType_3() { return &___implementationType_3; }
	inline void set_implementationType_3(Type_t * value)
	{
		___implementationType_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___implementationType_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3CcapabilitiesU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(Cinfo_t37F91E88FCD8623834BE1898FC146620538C08B1, ___U3CcapabilitiesU3Ek__BackingField_4)); }
	inline int32_t get_U3CcapabilitiesU3Ek__BackingField_4() const { return ___U3CcapabilitiesU3Ek__BackingField_4; }
	inline int32_t* get_address_of_U3CcapabilitiesU3Ek__BackingField_4() { return &___U3CcapabilitiesU3Ek__BackingField_4; }
	inline void set_U3CcapabilitiesU3Ek__BackingField_4(int32_t value)
	{
		___U3CcapabilitiesU3Ek__BackingField_4 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.XR.ARSubsystems.XRDepthSubsystemDescriptor/Cinfo
struct Cinfo_t37F91E88FCD8623834BE1898FC146620538C08B1_marshaled_pinvoke
{
	char* ___id_0;
	Type_t * ___U3CproviderTypeU3Ek__BackingField_1;
	Type_t * ___U3CsubsystemTypeOverrideU3Ek__BackingField_2;
	Type_t * ___implementationType_3;
	int32_t ___U3CcapabilitiesU3Ek__BackingField_4;
};
// Native definition for COM marshalling of UnityEngine.XR.ARSubsystems.XRDepthSubsystemDescriptor/Cinfo
struct Cinfo_t37F91E88FCD8623834BE1898FC146620538C08B1_marshaled_com
{
	Il2CppChar* ___id_0;
	Type_t * ___U3CproviderTypeU3Ek__BackingField_1;
	Type_t * ___U3CsubsystemTypeOverrideU3Ek__BackingField_2;
	Type_t * ___implementationType_3;
	int32_t ___U3CcapabilitiesU3Ek__BackingField_4;
};

// UnityEngine.XR.ARSubsystems.XRRaycastSubsystemDescriptor/Cinfo
struct  Cinfo_tAC330BB49E2D0C7E18C66AB4018927A6EC856E01 
{
public:
	// System.String UnityEngine.XR.ARSubsystems.XRRaycastSubsystemDescriptor/Cinfo::<id>k__BackingField
	String_t* ___U3CidU3Ek__BackingField_0;
	// System.Type UnityEngine.XR.ARSubsystems.XRRaycastSubsystemDescriptor/Cinfo::<providerType>k__BackingField
	Type_t * ___U3CproviderTypeU3Ek__BackingField_1;
	// System.Type UnityEngine.XR.ARSubsystems.XRRaycastSubsystemDescriptor/Cinfo::<subsystemTypeOverride>k__BackingField
	Type_t * ___U3CsubsystemTypeOverrideU3Ek__BackingField_2;
	// System.Type UnityEngine.XR.ARSubsystems.XRRaycastSubsystemDescriptor/Cinfo::<subsystemImplementationType>k__BackingField
	Type_t * ___U3CsubsystemImplementationTypeU3Ek__BackingField_3;
	// System.Boolean UnityEngine.XR.ARSubsystems.XRRaycastSubsystemDescriptor/Cinfo::<supportsViewportBasedRaycast>k__BackingField
	bool ___U3CsupportsViewportBasedRaycastU3Ek__BackingField_4;
	// System.Boolean UnityEngine.XR.ARSubsystems.XRRaycastSubsystemDescriptor/Cinfo::<supportsWorldBasedRaycast>k__BackingField
	bool ___U3CsupportsWorldBasedRaycastU3Ek__BackingField_5;
	// UnityEngine.XR.ARSubsystems.TrackableType UnityEngine.XR.ARSubsystems.XRRaycastSubsystemDescriptor/Cinfo::<supportedTrackableTypes>k__BackingField
	int32_t ___U3CsupportedTrackableTypesU3Ek__BackingField_6;
	// System.Boolean UnityEngine.XR.ARSubsystems.XRRaycastSubsystemDescriptor/Cinfo::<supportsTrackedRaycasts>k__BackingField
	bool ___U3CsupportsTrackedRaycastsU3Ek__BackingField_7;

public:
	inline static int32_t get_offset_of_U3CidU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(Cinfo_tAC330BB49E2D0C7E18C66AB4018927A6EC856E01, ___U3CidU3Ek__BackingField_0)); }
	inline String_t* get_U3CidU3Ek__BackingField_0() const { return ___U3CidU3Ek__BackingField_0; }
	inline String_t** get_address_of_U3CidU3Ek__BackingField_0() { return &___U3CidU3Ek__BackingField_0; }
	inline void set_U3CidU3Ek__BackingField_0(String_t* value)
	{
		___U3CidU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CidU3Ek__BackingField_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CproviderTypeU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(Cinfo_tAC330BB49E2D0C7E18C66AB4018927A6EC856E01, ___U3CproviderTypeU3Ek__BackingField_1)); }
	inline Type_t * get_U3CproviderTypeU3Ek__BackingField_1() const { return ___U3CproviderTypeU3Ek__BackingField_1; }
	inline Type_t ** get_address_of_U3CproviderTypeU3Ek__BackingField_1() { return &___U3CproviderTypeU3Ek__BackingField_1; }
	inline void set_U3CproviderTypeU3Ek__BackingField_1(Type_t * value)
	{
		___U3CproviderTypeU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CproviderTypeU3Ek__BackingField_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CsubsystemTypeOverrideU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(Cinfo_tAC330BB49E2D0C7E18C66AB4018927A6EC856E01, ___U3CsubsystemTypeOverrideU3Ek__BackingField_2)); }
	inline Type_t * get_U3CsubsystemTypeOverrideU3Ek__BackingField_2() const { return ___U3CsubsystemTypeOverrideU3Ek__BackingField_2; }
	inline Type_t ** get_address_of_U3CsubsystemTypeOverrideU3Ek__BackingField_2() { return &___U3CsubsystemTypeOverrideU3Ek__BackingField_2; }
	inline void set_U3CsubsystemTypeOverrideU3Ek__BackingField_2(Type_t * value)
	{
		___U3CsubsystemTypeOverrideU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CsubsystemTypeOverrideU3Ek__BackingField_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CsubsystemImplementationTypeU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(Cinfo_tAC330BB49E2D0C7E18C66AB4018927A6EC856E01, ___U3CsubsystemImplementationTypeU3Ek__BackingField_3)); }
	inline Type_t * get_U3CsubsystemImplementationTypeU3Ek__BackingField_3() const { return ___U3CsubsystemImplementationTypeU3Ek__BackingField_3; }
	inline Type_t ** get_address_of_U3CsubsystemImplementationTypeU3Ek__BackingField_3() { return &___U3CsubsystemImplementationTypeU3Ek__BackingField_3; }
	inline void set_U3CsubsystemImplementationTypeU3Ek__BackingField_3(Type_t * value)
	{
		___U3CsubsystemImplementationTypeU3Ek__BackingField_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CsubsystemImplementationTypeU3Ek__BackingField_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3CsupportsViewportBasedRaycastU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(Cinfo_tAC330BB49E2D0C7E18C66AB4018927A6EC856E01, ___U3CsupportsViewportBasedRaycastU3Ek__BackingField_4)); }
	inline bool get_U3CsupportsViewportBasedRaycastU3Ek__BackingField_4() const { return ___U3CsupportsViewportBasedRaycastU3Ek__BackingField_4; }
	inline bool* get_address_of_U3CsupportsViewportBasedRaycastU3Ek__BackingField_4() { return &___U3CsupportsViewportBasedRaycastU3Ek__BackingField_4; }
	inline void set_U3CsupportsViewportBasedRaycastU3Ek__BackingField_4(bool value)
	{
		___U3CsupportsViewportBasedRaycastU3Ek__BackingField_4 = value;
	}

	inline static int32_t get_offset_of_U3CsupportsWorldBasedRaycastU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(Cinfo_tAC330BB49E2D0C7E18C66AB4018927A6EC856E01, ___U3CsupportsWorldBasedRaycastU3Ek__BackingField_5)); }
	inline bool get_U3CsupportsWorldBasedRaycastU3Ek__BackingField_5() const { return ___U3CsupportsWorldBasedRaycastU3Ek__BackingField_5; }
	inline bool* get_address_of_U3CsupportsWorldBasedRaycastU3Ek__BackingField_5() { return &___U3CsupportsWorldBasedRaycastU3Ek__BackingField_5; }
	inline void set_U3CsupportsWorldBasedRaycastU3Ek__BackingField_5(bool value)
	{
		___U3CsupportsWorldBasedRaycastU3Ek__BackingField_5 = value;
	}

	inline static int32_t get_offset_of_U3CsupportedTrackableTypesU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(Cinfo_tAC330BB49E2D0C7E18C66AB4018927A6EC856E01, ___U3CsupportedTrackableTypesU3Ek__BackingField_6)); }
	inline int32_t get_U3CsupportedTrackableTypesU3Ek__BackingField_6() const { return ___U3CsupportedTrackableTypesU3Ek__BackingField_6; }
	inline int32_t* get_address_of_U3CsupportedTrackableTypesU3Ek__BackingField_6() { return &___U3CsupportedTrackableTypesU3Ek__BackingField_6; }
	inline void set_U3CsupportedTrackableTypesU3Ek__BackingField_6(int32_t value)
	{
		___U3CsupportedTrackableTypesU3Ek__BackingField_6 = value;
	}

	inline static int32_t get_offset_of_U3CsupportsTrackedRaycastsU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(Cinfo_tAC330BB49E2D0C7E18C66AB4018927A6EC856E01, ___U3CsupportsTrackedRaycastsU3Ek__BackingField_7)); }
	inline bool get_U3CsupportsTrackedRaycastsU3Ek__BackingField_7() const { return ___U3CsupportsTrackedRaycastsU3Ek__BackingField_7; }
	inline bool* get_address_of_U3CsupportsTrackedRaycastsU3Ek__BackingField_7() { return &___U3CsupportsTrackedRaycastsU3Ek__BackingField_7; }
	inline void set_U3CsupportsTrackedRaycastsU3Ek__BackingField_7(bool value)
	{
		___U3CsupportsTrackedRaycastsU3Ek__BackingField_7 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.XR.ARSubsystems.XRRaycastSubsystemDescriptor/Cinfo
struct Cinfo_tAC330BB49E2D0C7E18C66AB4018927A6EC856E01_marshaled_pinvoke
{
	char* ___U3CidU3Ek__BackingField_0;
	Type_t * ___U3CproviderTypeU3Ek__BackingField_1;
	Type_t * ___U3CsubsystemTypeOverrideU3Ek__BackingField_2;
	Type_t * ___U3CsubsystemImplementationTypeU3Ek__BackingField_3;
	int32_t ___U3CsupportsViewportBasedRaycastU3Ek__BackingField_4;
	int32_t ___U3CsupportsWorldBasedRaycastU3Ek__BackingField_5;
	int32_t ___U3CsupportedTrackableTypesU3Ek__BackingField_6;
	int32_t ___U3CsupportsTrackedRaycastsU3Ek__BackingField_7;
};
// Native definition for COM marshalling of UnityEngine.XR.ARSubsystems.XRRaycastSubsystemDescriptor/Cinfo
struct Cinfo_tAC330BB49E2D0C7E18C66AB4018927A6EC856E01_marshaled_com
{
	Il2CppChar* ___U3CidU3Ek__BackingField_0;
	Type_t * ___U3CproviderTypeU3Ek__BackingField_1;
	Type_t * ___U3CsubsystemTypeOverrideU3Ek__BackingField_2;
	Type_t * ___U3CsubsystemImplementationTypeU3Ek__BackingField_3;
	int32_t ___U3CsupportsViewportBasedRaycastU3Ek__BackingField_4;
	int32_t ___U3CsupportsWorldBasedRaycastU3Ek__BackingField_5;
	int32_t ___U3CsupportedTrackableTypesU3Ek__BackingField_6;
	int32_t ___U3CsupportsTrackedRaycastsU3Ek__BackingField_7;
};

// System.Action`2<UnityEngine.XR.ARKit.ARWorldMapRequestStatus,UnityEngine.XR.ARKit.ARWorldMap>
struct  Action_2_t6F4217AA55351EE6822133CE02984E6B59F83112  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.BoundedPlane>
struct  TrackableChanges_1_t8B0834EED4AC44A71FC9071BDA349BA9D8FE0717 
{
public:
	// System.Boolean UnityEngine.XR.ARSubsystems.TrackableChanges`1::<isCreated>k__BackingField
	bool ___U3CisCreatedU3Ek__BackingField_0;
	// Unity.Collections.NativeArray`1<T> UnityEngine.XR.ARSubsystems.TrackableChanges`1::m_Added
	NativeArray_1_t056649BD2D6D7DDC87945B1C2AEE66C39F4667B3  ___m_Added_1;
	// Unity.Collections.NativeArray`1<T> UnityEngine.XR.ARSubsystems.TrackableChanges`1::m_Updated
	NativeArray_1_t056649BD2D6D7DDC87945B1C2AEE66C39F4667B3  ___m_Updated_2;
	// Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.TrackableId> UnityEngine.XR.ARSubsystems.TrackableChanges`1::m_Removed
	NativeArray_1_t991E9C764228B2B65D9688847CCDA8CE903F5D77  ___m_Removed_3;

public:
	inline static int32_t get_offset_of_U3CisCreatedU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(TrackableChanges_1_t8B0834EED4AC44A71FC9071BDA349BA9D8FE0717, ___U3CisCreatedU3Ek__BackingField_0)); }
	inline bool get_U3CisCreatedU3Ek__BackingField_0() const { return ___U3CisCreatedU3Ek__BackingField_0; }
	inline bool* get_address_of_U3CisCreatedU3Ek__BackingField_0() { return &___U3CisCreatedU3Ek__BackingField_0; }
	inline void set_U3CisCreatedU3Ek__BackingField_0(bool value)
	{
		___U3CisCreatedU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of_m_Added_1() { return static_cast<int32_t>(offsetof(TrackableChanges_1_t8B0834EED4AC44A71FC9071BDA349BA9D8FE0717, ___m_Added_1)); }
	inline NativeArray_1_t056649BD2D6D7DDC87945B1C2AEE66C39F4667B3  get_m_Added_1() const { return ___m_Added_1; }
	inline NativeArray_1_t056649BD2D6D7DDC87945B1C2AEE66C39F4667B3 * get_address_of_m_Added_1() { return &___m_Added_1; }
	inline void set_m_Added_1(NativeArray_1_t056649BD2D6D7DDC87945B1C2AEE66C39F4667B3  value)
	{
		___m_Added_1 = value;
	}

	inline static int32_t get_offset_of_m_Updated_2() { return static_cast<int32_t>(offsetof(TrackableChanges_1_t8B0834EED4AC44A71FC9071BDA349BA9D8FE0717, ___m_Updated_2)); }
	inline NativeArray_1_t056649BD2D6D7DDC87945B1C2AEE66C39F4667B3  get_m_Updated_2() const { return ___m_Updated_2; }
	inline NativeArray_1_t056649BD2D6D7DDC87945B1C2AEE66C39F4667B3 * get_address_of_m_Updated_2() { return &___m_Updated_2; }
	inline void set_m_Updated_2(NativeArray_1_t056649BD2D6D7DDC87945B1C2AEE66C39F4667B3  value)
	{
		___m_Updated_2 = value;
	}

	inline static int32_t get_offset_of_m_Removed_3() { return static_cast<int32_t>(offsetof(TrackableChanges_1_t8B0834EED4AC44A71FC9071BDA349BA9D8FE0717, ___m_Removed_3)); }
	inline NativeArray_1_t991E9C764228B2B65D9688847CCDA8CE903F5D77  get_m_Removed_3() const { return ___m_Removed_3; }
	inline NativeArray_1_t991E9C764228B2B65D9688847CCDA8CE903F5D77 * get_address_of_m_Removed_3() { return &___m_Removed_3; }
	inline void set_m_Removed_3(NativeArray_1_t991E9C764228B2B65D9688847CCDA8CE903F5D77  value)
	{
		___m_Removed_3 = value;
	}
};


// UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRAnchor>
struct  TrackableChanges_1_tF38314CFF715F232D6DA3415FD2F68CE504CFF9B 
{
public:
	// System.Boolean UnityEngine.XR.ARSubsystems.TrackableChanges`1::<isCreated>k__BackingField
	bool ___U3CisCreatedU3Ek__BackingField_0;
	// Unity.Collections.NativeArray`1<T> UnityEngine.XR.ARSubsystems.TrackableChanges`1::m_Added
	NativeArray_1_tC0FA6F80F8C779BABF802ACD23BC7304CA5FD5E9  ___m_Added_1;
	// Unity.Collections.NativeArray`1<T> UnityEngine.XR.ARSubsystems.TrackableChanges`1::m_Updated
	NativeArray_1_tC0FA6F80F8C779BABF802ACD23BC7304CA5FD5E9  ___m_Updated_2;
	// Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.TrackableId> UnityEngine.XR.ARSubsystems.TrackableChanges`1::m_Removed
	NativeArray_1_t991E9C764228B2B65D9688847CCDA8CE903F5D77  ___m_Removed_3;

public:
	inline static int32_t get_offset_of_U3CisCreatedU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(TrackableChanges_1_tF38314CFF715F232D6DA3415FD2F68CE504CFF9B, ___U3CisCreatedU3Ek__BackingField_0)); }
	inline bool get_U3CisCreatedU3Ek__BackingField_0() const { return ___U3CisCreatedU3Ek__BackingField_0; }
	inline bool* get_address_of_U3CisCreatedU3Ek__BackingField_0() { return &___U3CisCreatedU3Ek__BackingField_0; }
	inline void set_U3CisCreatedU3Ek__BackingField_0(bool value)
	{
		___U3CisCreatedU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of_m_Added_1() { return static_cast<int32_t>(offsetof(TrackableChanges_1_tF38314CFF715F232D6DA3415FD2F68CE504CFF9B, ___m_Added_1)); }
	inline NativeArray_1_tC0FA6F80F8C779BABF802ACD23BC7304CA5FD5E9  get_m_Added_1() const { return ___m_Added_1; }
	inline NativeArray_1_tC0FA6F80F8C779BABF802ACD23BC7304CA5FD5E9 * get_address_of_m_Added_1() { return &___m_Added_1; }
	inline void set_m_Added_1(NativeArray_1_tC0FA6F80F8C779BABF802ACD23BC7304CA5FD5E9  value)
	{
		___m_Added_1 = value;
	}

	inline static int32_t get_offset_of_m_Updated_2() { return static_cast<int32_t>(offsetof(TrackableChanges_1_tF38314CFF715F232D6DA3415FD2F68CE504CFF9B, ___m_Updated_2)); }
	inline NativeArray_1_tC0FA6F80F8C779BABF802ACD23BC7304CA5FD5E9  get_m_Updated_2() const { return ___m_Updated_2; }
	inline NativeArray_1_tC0FA6F80F8C779BABF802ACD23BC7304CA5FD5E9 * get_address_of_m_Updated_2() { return &___m_Updated_2; }
	inline void set_m_Updated_2(NativeArray_1_tC0FA6F80F8C779BABF802ACD23BC7304CA5FD5E9  value)
	{
		___m_Updated_2 = value;
	}

	inline static int32_t get_offset_of_m_Removed_3() { return static_cast<int32_t>(offsetof(TrackableChanges_1_tF38314CFF715F232D6DA3415FD2F68CE504CFF9B, ___m_Removed_3)); }
	inline NativeArray_1_t991E9C764228B2B65D9688847CCDA8CE903F5D77  get_m_Removed_3() const { return ___m_Removed_3; }
	inline NativeArray_1_t991E9C764228B2B65D9688847CCDA8CE903F5D77 * get_address_of_m_Removed_3() { return &___m_Removed_3; }
	inline void set_m_Removed_3(NativeArray_1_t991E9C764228B2B65D9688847CCDA8CE903F5D77  value)
	{
		___m_Removed_3 = value;
	}
};


// UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XREnvironmentProbe>
struct  TrackableChanges_1_tBC1B6352E3D11F9F7BC4E567480BDF8AE39A547F 
{
public:
	// System.Boolean UnityEngine.XR.ARSubsystems.TrackableChanges`1::<isCreated>k__BackingField
	bool ___U3CisCreatedU3Ek__BackingField_0;
	// Unity.Collections.NativeArray`1<T> UnityEngine.XR.ARSubsystems.TrackableChanges`1::m_Added
	NativeArray_1_t901047647D1B0577009EA387273335B841552234  ___m_Added_1;
	// Unity.Collections.NativeArray`1<T> UnityEngine.XR.ARSubsystems.TrackableChanges`1::m_Updated
	NativeArray_1_t901047647D1B0577009EA387273335B841552234  ___m_Updated_2;
	// Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.TrackableId> UnityEngine.XR.ARSubsystems.TrackableChanges`1::m_Removed
	NativeArray_1_t991E9C764228B2B65D9688847CCDA8CE903F5D77  ___m_Removed_3;

public:
	inline static int32_t get_offset_of_U3CisCreatedU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(TrackableChanges_1_tBC1B6352E3D11F9F7BC4E567480BDF8AE39A547F, ___U3CisCreatedU3Ek__BackingField_0)); }
	inline bool get_U3CisCreatedU3Ek__BackingField_0() const { return ___U3CisCreatedU3Ek__BackingField_0; }
	inline bool* get_address_of_U3CisCreatedU3Ek__BackingField_0() { return &___U3CisCreatedU3Ek__BackingField_0; }
	inline void set_U3CisCreatedU3Ek__BackingField_0(bool value)
	{
		___U3CisCreatedU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of_m_Added_1() { return static_cast<int32_t>(offsetof(TrackableChanges_1_tBC1B6352E3D11F9F7BC4E567480BDF8AE39A547F, ___m_Added_1)); }
	inline NativeArray_1_t901047647D1B0577009EA387273335B841552234  get_m_Added_1() const { return ___m_Added_1; }
	inline NativeArray_1_t901047647D1B0577009EA387273335B841552234 * get_address_of_m_Added_1() { return &___m_Added_1; }
	inline void set_m_Added_1(NativeArray_1_t901047647D1B0577009EA387273335B841552234  value)
	{
		___m_Added_1 = value;
	}

	inline static int32_t get_offset_of_m_Updated_2() { return static_cast<int32_t>(offsetof(TrackableChanges_1_tBC1B6352E3D11F9F7BC4E567480BDF8AE39A547F, ___m_Updated_2)); }
	inline NativeArray_1_t901047647D1B0577009EA387273335B841552234  get_m_Updated_2() const { return ___m_Updated_2; }
	inline NativeArray_1_t901047647D1B0577009EA387273335B841552234 * get_address_of_m_Updated_2() { return &___m_Updated_2; }
	inline void set_m_Updated_2(NativeArray_1_t901047647D1B0577009EA387273335B841552234  value)
	{
		___m_Updated_2 = value;
	}

	inline static int32_t get_offset_of_m_Removed_3() { return static_cast<int32_t>(offsetof(TrackableChanges_1_tBC1B6352E3D11F9F7BC4E567480BDF8AE39A547F, ___m_Removed_3)); }
	inline NativeArray_1_t991E9C764228B2B65D9688847CCDA8CE903F5D77  get_m_Removed_3() const { return ___m_Removed_3; }
	inline NativeArray_1_t991E9C764228B2B65D9688847CCDA8CE903F5D77 * get_address_of_m_Removed_3() { return &___m_Removed_3; }
	inline void set_m_Removed_3(NativeArray_1_t991E9C764228B2B65D9688847CCDA8CE903F5D77  value)
	{
		___m_Removed_3 = value;
	}
};


// UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRHumanBody>
struct  TrackableChanges_1_t4BEBDDB9C8CBFF65EC7028CE5BA562A5728C8B82 
{
public:
	// System.Boolean UnityEngine.XR.ARSubsystems.TrackableChanges`1::<isCreated>k__BackingField
	bool ___U3CisCreatedU3Ek__BackingField_0;
	// Unity.Collections.NativeArray`1<T> UnityEngine.XR.ARSubsystems.TrackableChanges`1::m_Added
	NativeArray_1_t6C80982A5077ED9524455B5005D72276BA2ECB62  ___m_Added_1;
	// Unity.Collections.NativeArray`1<T> UnityEngine.XR.ARSubsystems.TrackableChanges`1::m_Updated
	NativeArray_1_t6C80982A5077ED9524455B5005D72276BA2ECB62  ___m_Updated_2;
	// Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.TrackableId> UnityEngine.XR.ARSubsystems.TrackableChanges`1::m_Removed
	NativeArray_1_t991E9C764228B2B65D9688847CCDA8CE903F5D77  ___m_Removed_3;

public:
	inline static int32_t get_offset_of_U3CisCreatedU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(TrackableChanges_1_t4BEBDDB9C8CBFF65EC7028CE5BA562A5728C8B82, ___U3CisCreatedU3Ek__BackingField_0)); }
	inline bool get_U3CisCreatedU3Ek__BackingField_0() const { return ___U3CisCreatedU3Ek__BackingField_0; }
	inline bool* get_address_of_U3CisCreatedU3Ek__BackingField_0() { return &___U3CisCreatedU3Ek__BackingField_0; }
	inline void set_U3CisCreatedU3Ek__BackingField_0(bool value)
	{
		___U3CisCreatedU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of_m_Added_1() { return static_cast<int32_t>(offsetof(TrackableChanges_1_t4BEBDDB9C8CBFF65EC7028CE5BA562A5728C8B82, ___m_Added_1)); }
	inline NativeArray_1_t6C80982A5077ED9524455B5005D72276BA2ECB62  get_m_Added_1() const { return ___m_Added_1; }
	inline NativeArray_1_t6C80982A5077ED9524455B5005D72276BA2ECB62 * get_address_of_m_Added_1() { return &___m_Added_1; }
	inline void set_m_Added_1(NativeArray_1_t6C80982A5077ED9524455B5005D72276BA2ECB62  value)
	{
		___m_Added_1 = value;
	}

	inline static int32_t get_offset_of_m_Updated_2() { return static_cast<int32_t>(offsetof(TrackableChanges_1_t4BEBDDB9C8CBFF65EC7028CE5BA562A5728C8B82, ___m_Updated_2)); }
	inline NativeArray_1_t6C80982A5077ED9524455B5005D72276BA2ECB62  get_m_Updated_2() const { return ___m_Updated_2; }
	inline NativeArray_1_t6C80982A5077ED9524455B5005D72276BA2ECB62 * get_address_of_m_Updated_2() { return &___m_Updated_2; }
	inline void set_m_Updated_2(NativeArray_1_t6C80982A5077ED9524455B5005D72276BA2ECB62  value)
	{
		___m_Updated_2 = value;
	}

	inline static int32_t get_offset_of_m_Removed_3() { return static_cast<int32_t>(offsetof(TrackableChanges_1_t4BEBDDB9C8CBFF65EC7028CE5BA562A5728C8B82, ___m_Removed_3)); }
	inline NativeArray_1_t991E9C764228B2B65D9688847CCDA8CE903F5D77  get_m_Removed_3() const { return ___m_Removed_3; }
	inline NativeArray_1_t991E9C764228B2B65D9688847CCDA8CE903F5D77 * get_address_of_m_Removed_3() { return &___m_Removed_3; }
	inline void set_m_Removed_3(NativeArray_1_t991E9C764228B2B65D9688847CCDA8CE903F5D77  value)
	{
		___m_Removed_3 = value;
	}
};


// UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRParticipant>
struct  TrackableChanges_1_tCBDEADFC15FC0570F012431A5227C2E6B92BAC3F 
{
public:
	// System.Boolean UnityEngine.XR.ARSubsystems.TrackableChanges`1::<isCreated>k__BackingField
	bool ___U3CisCreatedU3Ek__BackingField_0;
	// Unity.Collections.NativeArray`1<T> UnityEngine.XR.ARSubsystems.TrackableChanges`1::m_Added
	NativeArray_1_t20D7C7F2BCDC04B6238E113A2CA21BBDD326A535  ___m_Added_1;
	// Unity.Collections.NativeArray`1<T> UnityEngine.XR.ARSubsystems.TrackableChanges`1::m_Updated
	NativeArray_1_t20D7C7F2BCDC04B6238E113A2CA21BBDD326A535  ___m_Updated_2;
	// Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.TrackableId> UnityEngine.XR.ARSubsystems.TrackableChanges`1::m_Removed
	NativeArray_1_t991E9C764228B2B65D9688847CCDA8CE903F5D77  ___m_Removed_3;

public:
	inline static int32_t get_offset_of_U3CisCreatedU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(TrackableChanges_1_tCBDEADFC15FC0570F012431A5227C2E6B92BAC3F, ___U3CisCreatedU3Ek__BackingField_0)); }
	inline bool get_U3CisCreatedU3Ek__BackingField_0() const { return ___U3CisCreatedU3Ek__BackingField_0; }
	inline bool* get_address_of_U3CisCreatedU3Ek__BackingField_0() { return &___U3CisCreatedU3Ek__BackingField_0; }
	inline void set_U3CisCreatedU3Ek__BackingField_0(bool value)
	{
		___U3CisCreatedU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of_m_Added_1() { return static_cast<int32_t>(offsetof(TrackableChanges_1_tCBDEADFC15FC0570F012431A5227C2E6B92BAC3F, ___m_Added_1)); }
	inline NativeArray_1_t20D7C7F2BCDC04B6238E113A2CA21BBDD326A535  get_m_Added_1() const { return ___m_Added_1; }
	inline NativeArray_1_t20D7C7F2BCDC04B6238E113A2CA21BBDD326A535 * get_address_of_m_Added_1() { return &___m_Added_1; }
	inline void set_m_Added_1(NativeArray_1_t20D7C7F2BCDC04B6238E113A2CA21BBDD326A535  value)
	{
		___m_Added_1 = value;
	}

	inline static int32_t get_offset_of_m_Updated_2() { return static_cast<int32_t>(offsetof(TrackableChanges_1_tCBDEADFC15FC0570F012431A5227C2E6B92BAC3F, ___m_Updated_2)); }
	inline NativeArray_1_t20D7C7F2BCDC04B6238E113A2CA21BBDD326A535  get_m_Updated_2() const { return ___m_Updated_2; }
	inline NativeArray_1_t20D7C7F2BCDC04B6238E113A2CA21BBDD326A535 * get_address_of_m_Updated_2() { return &___m_Updated_2; }
	inline void set_m_Updated_2(NativeArray_1_t20D7C7F2BCDC04B6238E113A2CA21BBDD326A535  value)
	{
		___m_Updated_2 = value;
	}

	inline static int32_t get_offset_of_m_Removed_3() { return static_cast<int32_t>(offsetof(TrackableChanges_1_tCBDEADFC15FC0570F012431A5227C2E6B92BAC3F, ___m_Removed_3)); }
	inline NativeArray_1_t991E9C764228B2B65D9688847CCDA8CE903F5D77  get_m_Removed_3() const { return ___m_Removed_3; }
	inline NativeArray_1_t991E9C764228B2B65D9688847CCDA8CE903F5D77 * get_address_of_m_Removed_3() { return &___m_Removed_3; }
	inline void set_m_Removed_3(NativeArray_1_t991E9C764228B2B65D9688847CCDA8CE903F5D77  value)
	{
		___m_Removed_3 = value;
	}
};


// UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRPointCloud>
struct  TrackableChanges_1_t77AFD32F12A88AC162E5B41E66265CAF9D8E6435 
{
public:
	// System.Boolean UnityEngine.XR.ARSubsystems.TrackableChanges`1::<isCreated>k__BackingField
	bool ___U3CisCreatedU3Ek__BackingField_0;
	// Unity.Collections.NativeArray`1<T> UnityEngine.XR.ARSubsystems.TrackableChanges`1::m_Added
	NativeArray_1_t535D1A4490F010FAA0D1D1732065C9F9078ED3CA  ___m_Added_1;
	// Unity.Collections.NativeArray`1<T> UnityEngine.XR.ARSubsystems.TrackableChanges`1::m_Updated
	NativeArray_1_t535D1A4490F010FAA0D1D1732065C9F9078ED3CA  ___m_Updated_2;
	// Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.TrackableId> UnityEngine.XR.ARSubsystems.TrackableChanges`1::m_Removed
	NativeArray_1_t991E9C764228B2B65D9688847CCDA8CE903F5D77  ___m_Removed_3;

public:
	inline static int32_t get_offset_of_U3CisCreatedU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(TrackableChanges_1_t77AFD32F12A88AC162E5B41E66265CAF9D8E6435, ___U3CisCreatedU3Ek__BackingField_0)); }
	inline bool get_U3CisCreatedU3Ek__BackingField_0() const { return ___U3CisCreatedU3Ek__BackingField_0; }
	inline bool* get_address_of_U3CisCreatedU3Ek__BackingField_0() { return &___U3CisCreatedU3Ek__BackingField_0; }
	inline void set_U3CisCreatedU3Ek__BackingField_0(bool value)
	{
		___U3CisCreatedU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of_m_Added_1() { return static_cast<int32_t>(offsetof(TrackableChanges_1_t77AFD32F12A88AC162E5B41E66265CAF9D8E6435, ___m_Added_1)); }
	inline NativeArray_1_t535D1A4490F010FAA0D1D1732065C9F9078ED3CA  get_m_Added_1() const { return ___m_Added_1; }
	inline NativeArray_1_t535D1A4490F010FAA0D1D1732065C9F9078ED3CA * get_address_of_m_Added_1() { return &___m_Added_1; }
	inline void set_m_Added_1(NativeArray_1_t535D1A4490F010FAA0D1D1732065C9F9078ED3CA  value)
	{
		___m_Added_1 = value;
	}

	inline static int32_t get_offset_of_m_Updated_2() { return static_cast<int32_t>(offsetof(TrackableChanges_1_t77AFD32F12A88AC162E5B41E66265CAF9D8E6435, ___m_Updated_2)); }
	inline NativeArray_1_t535D1A4490F010FAA0D1D1732065C9F9078ED3CA  get_m_Updated_2() const { return ___m_Updated_2; }
	inline NativeArray_1_t535D1A4490F010FAA0D1D1732065C9F9078ED3CA * get_address_of_m_Updated_2() { return &___m_Updated_2; }
	inline void set_m_Updated_2(NativeArray_1_t535D1A4490F010FAA0D1D1732065C9F9078ED3CA  value)
	{
		___m_Updated_2 = value;
	}

	inline static int32_t get_offset_of_m_Removed_3() { return static_cast<int32_t>(offsetof(TrackableChanges_1_t77AFD32F12A88AC162E5B41E66265CAF9D8E6435, ___m_Removed_3)); }
	inline NativeArray_1_t991E9C764228B2B65D9688847CCDA8CE903F5D77  get_m_Removed_3() const { return ___m_Removed_3; }
	inline NativeArray_1_t991E9C764228B2B65D9688847CCDA8CE903F5D77 * get_address_of_m_Removed_3() { return &___m_Removed_3; }
	inline void set_m_Removed_3(NativeArray_1_t991E9C764228B2B65D9688847CCDA8CE903F5D77  value)
	{
		___m_Removed_3 = value;
	}
};


// UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRRaycast>
struct  TrackableChanges_1_t092C2BBB89690C350B949DDFFA9F551F85536ED3 
{
public:
	// System.Boolean UnityEngine.XR.ARSubsystems.TrackableChanges`1::<isCreated>k__BackingField
	bool ___U3CisCreatedU3Ek__BackingField_0;
	// Unity.Collections.NativeArray`1<T> UnityEngine.XR.ARSubsystems.TrackableChanges`1::m_Added
	NativeArray_1_t7CC8D0A91D6B929CE8AF86EF904CA11B5437074E  ___m_Added_1;
	// Unity.Collections.NativeArray`1<T> UnityEngine.XR.ARSubsystems.TrackableChanges`1::m_Updated
	NativeArray_1_t7CC8D0A91D6B929CE8AF86EF904CA11B5437074E  ___m_Updated_2;
	// Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.TrackableId> UnityEngine.XR.ARSubsystems.TrackableChanges`1::m_Removed
	NativeArray_1_t991E9C764228B2B65D9688847CCDA8CE903F5D77  ___m_Removed_3;

public:
	inline static int32_t get_offset_of_U3CisCreatedU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(TrackableChanges_1_t092C2BBB89690C350B949DDFFA9F551F85536ED3, ___U3CisCreatedU3Ek__BackingField_0)); }
	inline bool get_U3CisCreatedU3Ek__BackingField_0() const { return ___U3CisCreatedU3Ek__BackingField_0; }
	inline bool* get_address_of_U3CisCreatedU3Ek__BackingField_0() { return &___U3CisCreatedU3Ek__BackingField_0; }
	inline void set_U3CisCreatedU3Ek__BackingField_0(bool value)
	{
		___U3CisCreatedU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of_m_Added_1() { return static_cast<int32_t>(offsetof(TrackableChanges_1_t092C2BBB89690C350B949DDFFA9F551F85536ED3, ___m_Added_1)); }
	inline NativeArray_1_t7CC8D0A91D6B929CE8AF86EF904CA11B5437074E  get_m_Added_1() const { return ___m_Added_1; }
	inline NativeArray_1_t7CC8D0A91D6B929CE8AF86EF904CA11B5437074E * get_address_of_m_Added_1() { return &___m_Added_1; }
	inline void set_m_Added_1(NativeArray_1_t7CC8D0A91D6B929CE8AF86EF904CA11B5437074E  value)
	{
		___m_Added_1 = value;
	}

	inline static int32_t get_offset_of_m_Updated_2() { return static_cast<int32_t>(offsetof(TrackableChanges_1_t092C2BBB89690C350B949DDFFA9F551F85536ED3, ___m_Updated_2)); }
	inline NativeArray_1_t7CC8D0A91D6B929CE8AF86EF904CA11B5437074E  get_m_Updated_2() const { return ___m_Updated_2; }
	inline NativeArray_1_t7CC8D0A91D6B929CE8AF86EF904CA11B5437074E * get_address_of_m_Updated_2() { return &___m_Updated_2; }
	inline void set_m_Updated_2(NativeArray_1_t7CC8D0A91D6B929CE8AF86EF904CA11B5437074E  value)
	{
		___m_Updated_2 = value;
	}

	inline static int32_t get_offset_of_m_Removed_3() { return static_cast<int32_t>(offsetof(TrackableChanges_1_t092C2BBB89690C350B949DDFFA9F551F85536ED3, ___m_Removed_3)); }
	inline NativeArray_1_t991E9C764228B2B65D9688847CCDA8CE903F5D77  get_m_Removed_3() const { return ___m_Removed_3; }
	inline NativeArray_1_t991E9C764228B2B65D9688847CCDA8CE903F5D77 * get_address_of_m_Removed_3() { return &___m_Removed_3; }
	inline void set_m_Removed_3(NativeArray_1_t991E9C764228B2B65D9688847CCDA8CE903F5D77  value)
	{
		___m_Removed_3 = value;
	}
};


// UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRTrackedImage>
struct  TrackableChanges_1_tDE6975A36D16B9E01B5B7D815A77EDD62A3EA629 
{
public:
	// System.Boolean UnityEngine.XR.ARSubsystems.TrackableChanges`1::<isCreated>k__BackingField
	bool ___U3CisCreatedU3Ek__BackingField_0;
	// Unity.Collections.NativeArray`1<T> UnityEngine.XR.ARSubsystems.TrackableChanges`1::m_Added
	NativeArray_1_tFB9CDB932CB697229DBAB814E66E25DEF44F827F  ___m_Added_1;
	// Unity.Collections.NativeArray`1<T> UnityEngine.XR.ARSubsystems.TrackableChanges`1::m_Updated
	NativeArray_1_tFB9CDB932CB697229DBAB814E66E25DEF44F827F  ___m_Updated_2;
	// Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.TrackableId> UnityEngine.XR.ARSubsystems.TrackableChanges`1::m_Removed
	NativeArray_1_t991E9C764228B2B65D9688847CCDA8CE903F5D77  ___m_Removed_3;

public:
	inline static int32_t get_offset_of_U3CisCreatedU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(TrackableChanges_1_tDE6975A36D16B9E01B5B7D815A77EDD62A3EA629, ___U3CisCreatedU3Ek__BackingField_0)); }
	inline bool get_U3CisCreatedU3Ek__BackingField_0() const { return ___U3CisCreatedU3Ek__BackingField_0; }
	inline bool* get_address_of_U3CisCreatedU3Ek__BackingField_0() { return &___U3CisCreatedU3Ek__BackingField_0; }
	inline void set_U3CisCreatedU3Ek__BackingField_0(bool value)
	{
		___U3CisCreatedU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of_m_Added_1() { return static_cast<int32_t>(offsetof(TrackableChanges_1_tDE6975A36D16B9E01B5B7D815A77EDD62A3EA629, ___m_Added_1)); }
	inline NativeArray_1_tFB9CDB932CB697229DBAB814E66E25DEF44F827F  get_m_Added_1() const { return ___m_Added_1; }
	inline NativeArray_1_tFB9CDB932CB697229DBAB814E66E25DEF44F827F * get_address_of_m_Added_1() { return &___m_Added_1; }
	inline void set_m_Added_1(NativeArray_1_tFB9CDB932CB697229DBAB814E66E25DEF44F827F  value)
	{
		___m_Added_1 = value;
	}

	inline static int32_t get_offset_of_m_Updated_2() { return static_cast<int32_t>(offsetof(TrackableChanges_1_tDE6975A36D16B9E01B5B7D815A77EDD62A3EA629, ___m_Updated_2)); }
	inline NativeArray_1_tFB9CDB932CB697229DBAB814E66E25DEF44F827F  get_m_Updated_2() const { return ___m_Updated_2; }
	inline NativeArray_1_tFB9CDB932CB697229DBAB814E66E25DEF44F827F * get_address_of_m_Updated_2() { return &___m_Updated_2; }
	inline void set_m_Updated_2(NativeArray_1_tFB9CDB932CB697229DBAB814E66E25DEF44F827F  value)
	{
		___m_Updated_2 = value;
	}

	inline static int32_t get_offset_of_m_Removed_3() { return static_cast<int32_t>(offsetof(TrackableChanges_1_tDE6975A36D16B9E01B5B7D815A77EDD62A3EA629, ___m_Removed_3)); }
	inline NativeArray_1_t991E9C764228B2B65D9688847CCDA8CE903F5D77  get_m_Removed_3() const { return ___m_Removed_3; }
	inline NativeArray_1_t991E9C764228B2B65D9688847CCDA8CE903F5D77 * get_address_of_m_Removed_3() { return &___m_Removed_3; }
	inline void set_m_Removed_3(NativeArray_1_t991E9C764228B2B65D9688847CCDA8CE903F5D77  value)
	{
		___m_Removed_3 = value;
	}
};


// UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRTrackedObject>
struct  TrackableChanges_1_t388C13B0BF202AE5F24D0BB3AE0D672AA355E1B1 
{
public:
	// System.Boolean UnityEngine.XR.ARSubsystems.TrackableChanges`1::<isCreated>k__BackingField
	bool ___U3CisCreatedU3Ek__BackingField_0;
	// Unity.Collections.NativeArray`1<T> UnityEngine.XR.ARSubsystems.TrackableChanges`1::m_Added
	NativeArray_1_t91984250D9080A7D07E6D31D2FFD73DBBAA4B9C3  ___m_Added_1;
	// Unity.Collections.NativeArray`1<T> UnityEngine.XR.ARSubsystems.TrackableChanges`1::m_Updated
	NativeArray_1_t91984250D9080A7D07E6D31D2FFD73DBBAA4B9C3  ___m_Updated_2;
	// Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.TrackableId> UnityEngine.XR.ARSubsystems.TrackableChanges`1::m_Removed
	NativeArray_1_t991E9C764228B2B65D9688847CCDA8CE903F5D77  ___m_Removed_3;

public:
	inline static int32_t get_offset_of_U3CisCreatedU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(TrackableChanges_1_t388C13B0BF202AE5F24D0BB3AE0D672AA355E1B1, ___U3CisCreatedU3Ek__BackingField_0)); }
	inline bool get_U3CisCreatedU3Ek__BackingField_0() const { return ___U3CisCreatedU3Ek__BackingField_0; }
	inline bool* get_address_of_U3CisCreatedU3Ek__BackingField_0() { return &___U3CisCreatedU3Ek__BackingField_0; }
	inline void set_U3CisCreatedU3Ek__BackingField_0(bool value)
	{
		___U3CisCreatedU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of_m_Added_1() { return static_cast<int32_t>(offsetof(TrackableChanges_1_t388C13B0BF202AE5F24D0BB3AE0D672AA355E1B1, ___m_Added_1)); }
	inline NativeArray_1_t91984250D9080A7D07E6D31D2FFD73DBBAA4B9C3  get_m_Added_1() const { return ___m_Added_1; }
	inline NativeArray_1_t91984250D9080A7D07E6D31D2FFD73DBBAA4B9C3 * get_address_of_m_Added_1() { return &___m_Added_1; }
	inline void set_m_Added_1(NativeArray_1_t91984250D9080A7D07E6D31D2FFD73DBBAA4B9C3  value)
	{
		___m_Added_1 = value;
	}

	inline static int32_t get_offset_of_m_Updated_2() { return static_cast<int32_t>(offsetof(TrackableChanges_1_t388C13B0BF202AE5F24D0BB3AE0D672AA355E1B1, ___m_Updated_2)); }
	inline NativeArray_1_t91984250D9080A7D07E6D31D2FFD73DBBAA4B9C3  get_m_Updated_2() const { return ___m_Updated_2; }
	inline NativeArray_1_t91984250D9080A7D07E6D31D2FFD73DBBAA4B9C3 * get_address_of_m_Updated_2() { return &___m_Updated_2; }
	inline void set_m_Updated_2(NativeArray_1_t91984250D9080A7D07E6D31D2FFD73DBBAA4B9C3  value)
	{
		___m_Updated_2 = value;
	}

	inline static int32_t get_offset_of_m_Removed_3() { return static_cast<int32_t>(offsetof(TrackableChanges_1_t388C13B0BF202AE5F24D0BB3AE0D672AA355E1B1, ___m_Removed_3)); }
	inline NativeArray_1_t991E9C764228B2B65D9688847CCDA8CE903F5D77  get_m_Removed_3() const { return ___m_Removed_3; }
	inline NativeArray_1_t991E9C764228B2B65D9688847CCDA8CE903F5D77 * get_address_of_m_Removed_3() { return &___m_Removed_3; }
	inline void set_m_Removed_3(NativeArray_1_t991E9C764228B2B65D9688847CCDA8CE903F5D77  value)
	{
		___m_Removed_3 = value;
	}
};


// UnityEngine.XR.ARKit.ARKitAnchorSubsystem
struct  ARKitAnchorSubsystem_t721F48C4B69507D7E38664A68AA42DD1DF75B3DF  : public XRAnchorSubsystem_t625D9B76C590AB601CF85525DB9396BE84425AA7
{
public:

public:
};


// UnityEngine.XR.ARKit.ARKitEnvironmentProbeSubsystem
struct  ARKitEnvironmentProbeSubsystem_t628136AE15CA16280BA838B37E2B7CDF0473E9D2  : public XREnvironmentProbeSubsystem_t0C60258F565400E7C5AF0E0B7FA933F2BCF83CB6
{
public:

public:
};


// UnityEngine.XR.ARKit.ARKitHumanBodySubsystem
struct  ARKitHumanBodySubsystem_t8BA2C528FDE109FBDDBD0ED2FF8BC1FD081E92B7  : public XRHumanBodySubsystem_t71FBF94503DCE781657FA4F362464EA389CD9F2B
{
public:

public:
};


// UnityEngine.XR.ARKit.ARKitImageTrackingSubsystem
struct  ARKitImageTrackingSubsystem_t0F98C12C3E36B9F3819FC43494A883B600401237  : public XRImageTrackingSubsystem_tBC68AD21C11D8D67F3343844E129DF505FF705CE
{
public:

public:
};


// UnityEngine.XR.ARKit.ARKitParticipantSubsystem
struct  ARKitParticipantSubsystem_tFBFB76108F5069693F4F40F8DAA4B6A907A709C3  : public XRParticipantSubsystem_t7F710E46FC5A17967E7CAE126DE9443C752C36FC
{
public:

public:
};


// UnityEngine.XR.ARKit.ARKitRaycastSubsystem
struct  ARKitRaycastSubsystem_t8DF7A7F21C4610FBBEF6A240FD1790CD47BE9900  : public XRRaycastSubsystem_t62FDAC9AA1BD44C4557AEE3FEF3D2FA24C71B6B8
{
public:

public:
};


// UnityEngine.XR.ARKit.ARKitXRDepthSubsystem
struct  ARKitXRDepthSubsystem_t50D82DC2115EED29E5F0EEBA8A0F4FA7876BD2D5  : public XRDepthSubsystem_t808E21F0192095B08FA03AC535314FB5EF3B7E28
{
public:

public:
};


// UnityEngine.XR.ARKit.ARKitXRObjectTrackingSubsystem
struct  ARKitXRObjectTrackingSubsystem_tB611337EA1668BBCB3A7123F14117CB536707A6D  : public XRObjectTrackingSubsystem_t3F31F4C8BCA868FE69BD8EC75BA5A1116026C881
{
public:

public:
};


// UnityEngine.XR.ARKit.ARKitXRPlaneSubsystem
struct  ARKitXRPlaneSubsystem_t03042D64756D81EC6B4657CD1323D7404EC7530B  : public XRPlaneSubsystem_t7C76F9D2C993B0DC38F0A7CDCE745EA7C12417EE
{
public:

public:
};


// System.ArgumentException
struct  ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00  : public SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62
{
public:
	// System.String System.ArgumentException::m_paramName
	String_t* ___m_paramName_17;

public:
	inline static int32_t get_offset_of_m_paramName_17() { return static_cast<int32_t>(offsetof(ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00, ___m_paramName_17)); }
	inline String_t* get_m_paramName_17() const { return ___m_paramName_17; }
	inline String_t** get_address_of_m_paramName_17() { return &___m_paramName_17; }
	inline void set_m_paramName_17(String_t* value)
	{
		___m_paramName_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_paramName_17), (void*)value);
	}
};


// System.AsyncCallback
struct  AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.XR.ARSubsystems.Configuration
struct  Configuration_t29C11C7E576D64F717543048BDA1EBCEF0CF60C0 
{
public:
	// UnityEngine.XR.ARSubsystems.ConfigurationDescriptor UnityEngine.XR.ARSubsystems.Configuration::<descriptor>k__BackingField
	ConfigurationDescriptor_t5CD12F017FCCF861DC33D7C0D6F0121015DEEA78  ___U3CdescriptorU3Ek__BackingField_0;
	// UnityEngine.XR.ARSubsystems.Feature UnityEngine.XR.ARSubsystems.Configuration::<features>k__BackingField
	uint64_t ___U3CfeaturesU3Ek__BackingField_1;

public:
	inline static int32_t get_offset_of_U3CdescriptorU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(Configuration_t29C11C7E576D64F717543048BDA1EBCEF0CF60C0, ___U3CdescriptorU3Ek__BackingField_0)); }
	inline ConfigurationDescriptor_t5CD12F017FCCF861DC33D7C0D6F0121015DEEA78  get_U3CdescriptorU3Ek__BackingField_0() const { return ___U3CdescriptorU3Ek__BackingField_0; }
	inline ConfigurationDescriptor_t5CD12F017FCCF861DC33D7C0D6F0121015DEEA78 * get_address_of_U3CdescriptorU3Ek__BackingField_0() { return &___U3CdescriptorU3Ek__BackingField_0; }
	inline void set_U3CdescriptorU3Ek__BackingField_0(ConfigurationDescriptor_t5CD12F017FCCF861DC33D7C0D6F0121015DEEA78  value)
	{
		___U3CdescriptorU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of_U3CfeaturesU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(Configuration_t29C11C7E576D64F717543048BDA1EBCEF0CF60C0, ___U3CfeaturesU3Ek__BackingField_1)); }
	inline uint64_t get_U3CfeaturesU3Ek__BackingField_1() const { return ___U3CfeaturesU3Ek__BackingField_1; }
	inline uint64_t* get_address_of_U3CfeaturesU3Ek__BackingField_1() { return &___U3CfeaturesU3Ek__BackingField_1; }
	inline void set_U3CfeaturesU3Ek__BackingField_1(uint64_t value)
	{
		___U3CfeaturesU3Ek__BackingField_1 = value;
	}
};


// System.InvalidOperationException
struct  InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB  : public SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62
{
public:

public:
};


// System.NotSupportedException
struct  NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339  : public SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62
{
public:

public:
};


// UnityEngine.Rendering.RenderPipelineAsset
struct  RenderPipelineAsset_tA4DBD0F0DD583DF3C9F85AF41F49308D167864EF  : public ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A
{
public:

public:
};


// UnityEngine.XR.ARSubsystems.XRCameraFrame
struct  XRCameraFrame_t5FD7B7FC22B478AC6B00AD01A0AD6F2295EA1BA8 
{
public:
	// System.Int64 UnityEngine.XR.ARSubsystems.XRCameraFrame::m_TimestampNs
	int64_t ___m_TimestampNs_0;
	// System.Single UnityEngine.XR.ARSubsystems.XRCameraFrame::m_AverageBrightness
	float ___m_AverageBrightness_1;
	// System.Single UnityEngine.XR.ARSubsystems.XRCameraFrame::m_AverageColorTemperature
	float ___m_AverageColorTemperature_2;
	// UnityEngine.Color UnityEngine.XR.ARSubsystems.XRCameraFrame::m_ColorCorrection
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_ColorCorrection_3;
	// UnityEngine.Matrix4x4 UnityEngine.XR.ARSubsystems.XRCameraFrame::m_ProjectionMatrix
	Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  ___m_ProjectionMatrix_4;
	// UnityEngine.Matrix4x4 UnityEngine.XR.ARSubsystems.XRCameraFrame::m_DisplayMatrix
	Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  ___m_DisplayMatrix_5;
	// UnityEngine.XR.ARSubsystems.TrackingState UnityEngine.XR.ARSubsystems.XRCameraFrame::m_TrackingState
	int32_t ___m_TrackingState_6;
	// System.IntPtr UnityEngine.XR.ARSubsystems.XRCameraFrame::m_NativePtr
	intptr_t ___m_NativePtr_7;
	// UnityEngine.XR.ARSubsystems.XRCameraFrameProperties UnityEngine.XR.ARSubsystems.XRCameraFrame::m_Properties
	int32_t ___m_Properties_8;
	// System.Single UnityEngine.XR.ARSubsystems.XRCameraFrame::m_AverageIntensityInLumens
	float ___m_AverageIntensityInLumens_9;
	// System.Double UnityEngine.XR.ARSubsystems.XRCameraFrame::m_ExposureDuration
	double ___m_ExposureDuration_10;
	// System.Single UnityEngine.XR.ARSubsystems.XRCameraFrame::m_ExposureOffset
	float ___m_ExposureOffset_11;
	// System.Single UnityEngine.XR.ARSubsystems.XRCameraFrame::m_MainLightIntensityLumens
	float ___m_MainLightIntensityLumens_12;
	// UnityEngine.Color UnityEngine.XR.ARSubsystems.XRCameraFrame::m_MainLightColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_MainLightColor_13;
	// UnityEngine.Vector3 UnityEngine.XR.ARSubsystems.XRCameraFrame::m_MainLightDirection
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___m_MainLightDirection_14;
	// UnityEngine.Rendering.SphericalHarmonicsL2 UnityEngine.XR.ARSubsystems.XRCameraFrame::m_AmbientSphericalHarmonics
	SphericalHarmonicsL2_tD2EC2ADCA26B9BE05036C3ABCF3CC049EC73EA64  ___m_AmbientSphericalHarmonics_15;
	// UnityEngine.XR.ARSubsystems.XRTextureDescriptor UnityEngine.XR.ARSubsystems.XRCameraFrame::m_CameraGrain
	XRTextureDescriptor_t9CA857DCCC1208B74376787BE4F3008A01B29A57  ___m_CameraGrain_16;
	// System.Single UnityEngine.XR.ARSubsystems.XRCameraFrame::m_NoiseIntensity
	float ___m_NoiseIntensity_17;

public:
	inline static int32_t get_offset_of_m_TimestampNs_0() { return static_cast<int32_t>(offsetof(XRCameraFrame_t5FD7B7FC22B478AC6B00AD01A0AD6F2295EA1BA8, ___m_TimestampNs_0)); }
	inline int64_t get_m_TimestampNs_0() const { return ___m_TimestampNs_0; }
	inline int64_t* get_address_of_m_TimestampNs_0() { return &___m_TimestampNs_0; }
	inline void set_m_TimestampNs_0(int64_t value)
	{
		___m_TimestampNs_0 = value;
	}

	inline static int32_t get_offset_of_m_AverageBrightness_1() { return static_cast<int32_t>(offsetof(XRCameraFrame_t5FD7B7FC22B478AC6B00AD01A0AD6F2295EA1BA8, ___m_AverageBrightness_1)); }
	inline float get_m_AverageBrightness_1() const { return ___m_AverageBrightness_1; }
	inline float* get_address_of_m_AverageBrightness_1() { return &___m_AverageBrightness_1; }
	inline void set_m_AverageBrightness_1(float value)
	{
		___m_AverageBrightness_1 = value;
	}

	inline static int32_t get_offset_of_m_AverageColorTemperature_2() { return static_cast<int32_t>(offsetof(XRCameraFrame_t5FD7B7FC22B478AC6B00AD01A0AD6F2295EA1BA8, ___m_AverageColorTemperature_2)); }
	inline float get_m_AverageColorTemperature_2() const { return ___m_AverageColorTemperature_2; }
	inline float* get_address_of_m_AverageColorTemperature_2() { return &___m_AverageColorTemperature_2; }
	inline void set_m_AverageColorTemperature_2(float value)
	{
		___m_AverageColorTemperature_2 = value;
	}

	inline static int32_t get_offset_of_m_ColorCorrection_3() { return static_cast<int32_t>(offsetof(XRCameraFrame_t5FD7B7FC22B478AC6B00AD01A0AD6F2295EA1BA8, ___m_ColorCorrection_3)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_m_ColorCorrection_3() const { return ___m_ColorCorrection_3; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_m_ColorCorrection_3() { return &___m_ColorCorrection_3; }
	inline void set_m_ColorCorrection_3(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___m_ColorCorrection_3 = value;
	}

	inline static int32_t get_offset_of_m_ProjectionMatrix_4() { return static_cast<int32_t>(offsetof(XRCameraFrame_t5FD7B7FC22B478AC6B00AD01A0AD6F2295EA1BA8, ___m_ProjectionMatrix_4)); }
	inline Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  get_m_ProjectionMatrix_4() const { return ___m_ProjectionMatrix_4; }
	inline Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 * get_address_of_m_ProjectionMatrix_4() { return &___m_ProjectionMatrix_4; }
	inline void set_m_ProjectionMatrix_4(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  value)
	{
		___m_ProjectionMatrix_4 = value;
	}

	inline static int32_t get_offset_of_m_DisplayMatrix_5() { return static_cast<int32_t>(offsetof(XRCameraFrame_t5FD7B7FC22B478AC6B00AD01A0AD6F2295EA1BA8, ___m_DisplayMatrix_5)); }
	inline Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  get_m_DisplayMatrix_5() const { return ___m_DisplayMatrix_5; }
	inline Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 * get_address_of_m_DisplayMatrix_5() { return &___m_DisplayMatrix_5; }
	inline void set_m_DisplayMatrix_5(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  value)
	{
		___m_DisplayMatrix_5 = value;
	}

	inline static int32_t get_offset_of_m_TrackingState_6() { return static_cast<int32_t>(offsetof(XRCameraFrame_t5FD7B7FC22B478AC6B00AD01A0AD6F2295EA1BA8, ___m_TrackingState_6)); }
	inline int32_t get_m_TrackingState_6() const { return ___m_TrackingState_6; }
	inline int32_t* get_address_of_m_TrackingState_6() { return &___m_TrackingState_6; }
	inline void set_m_TrackingState_6(int32_t value)
	{
		___m_TrackingState_6 = value;
	}

	inline static int32_t get_offset_of_m_NativePtr_7() { return static_cast<int32_t>(offsetof(XRCameraFrame_t5FD7B7FC22B478AC6B00AD01A0AD6F2295EA1BA8, ___m_NativePtr_7)); }
	inline intptr_t get_m_NativePtr_7() const { return ___m_NativePtr_7; }
	inline intptr_t* get_address_of_m_NativePtr_7() { return &___m_NativePtr_7; }
	inline void set_m_NativePtr_7(intptr_t value)
	{
		___m_NativePtr_7 = value;
	}

	inline static int32_t get_offset_of_m_Properties_8() { return static_cast<int32_t>(offsetof(XRCameraFrame_t5FD7B7FC22B478AC6B00AD01A0AD6F2295EA1BA8, ___m_Properties_8)); }
	inline int32_t get_m_Properties_8() const { return ___m_Properties_8; }
	inline int32_t* get_address_of_m_Properties_8() { return &___m_Properties_8; }
	inline void set_m_Properties_8(int32_t value)
	{
		___m_Properties_8 = value;
	}

	inline static int32_t get_offset_of_m_AverageIntensityInLumens_9() { return static_cast<int32_t>(offsetof(XRCameraFrame_t5FD7B7FC22B478AC6B00AD01A0AD6F2295EA1BA8, ___m_AverageIntensityInLumens_9)); }
	inline float get_m_AverageIntensityInLumens_9() const { return ___m_AverageIntensityInLumens_9; }
	inline float* get_address_of_m_AverageIntensityInLumens_9() { return &___m_AverageIntensityInLumens_9; }
	inline void set_m_AverageIntensityInLumens_9(float value)
	{
		___m_AverageIntensityInLumens_9 = value;
	}

	inline static int32_t get_offset_of_m_ExposureDuration_10() { return static_cast<int32_t>(offsetof(XRCameraFrame_t5FD7B7FC22B478AC6B00AD01A0AD6F2295EA1BA8, ___m_ExposureDuration_10)); }
	inline double get_m_ExposureDuration_10() const { return ___m_ExposureDuration_10; }
	inline double* get_address_of_m_ExposureDuration_10() { return &___m_ExposureDuration_10; }
	inline void set_m_ExposureDuration_10(double value)
	{
		___m_ExposureDuration_10 = value;
	}

	inline static int32_t get_offset_of_m_ExposureOffset_11() { return static_cast<int32_t>(offsetof(XRCameraFrame_t5FD7B7FC22B478AC6B00AD01A0AD6F2295EA1BA8, ___m_ExposureOffset_11)); }
	inline float get_m_ExposureOffset_11() const { return ___m_ExposureOffset_11; }
	inline float* get_address_of_m_ExposureOffset_11() { return &___m_ExposureOffset_11; }
	inline void set_m_ExposureOffset_11(float value)
	{
		___m_ExposureOffset_11 = value;
	}

	inline static int32_t get_offset_of_m_MainLightIntensityLumens_12() { return static_cast<int32_t>(offsetof(XRCameraFrame_t5FD7B7FC22B478AC6B00AD01A0AD6F2295EA1BA8, ___m_MainLightIntensityLumens_12)); }
	inline float get_m_MainLightIntensityLumens_12() const { return ___m_MainLightIntensityLumens_12; }
	inline float* get_address_of_m_MainLightIntensityLumens_12() { return &___m_MainLightIntensityLumens_12; }
	inline void set_m_MainLightIntensityLumens_12(float value)
	{
		___m_MainLightIntensityLumens_12 = value;
	}

	inline static int32_t get_offset_of_m_MainLightColor_13() { return static_cast<int32_t>(offsetof(XRCameraFrame_t5FD7B7FC22B478AC6B00AD01A0AD6F2295EA1BA8, ___m_MainLightColor_13)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_m_MainLightColor_13() const { return ___m_MainLightColor_13; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_m_MainLightColor_13() { return &___m_MainLightColor_13; }
	inline void set_m_MainLightColor_13(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___m_MainLightColor_13 = value;
	}

	inline static int32_t get_offset_of_m_MainLightDirection_14() { return static_cast<int32_t>(offsetof(XRCameraFrame_t5FD7B7FC22B478AC6B00AD01A0AD6F2295EA1BA8, ___m_MainLightDirection_14)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_m_MainLightDirection_14() const { return ___m_MainLightDirection_14; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_m_MainLightDirection_14() { return &___m_MainLightDirection_14; }
	inline void set_m_MainLightDirection_14(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___m_MainLightDirection_14 = value;
	}

	inline static int32_t get_offset_of_m_AmbientSphericalHarmonics_15() { return static_cast<int32_t>(offsetof(XRCameraFrame_t5FD7B7FC22B478AC6B00AD01A0AD6F2295EA1BA8, ___m_AmbientSphericalHarmonics_15)); }
	inline SphericalHarmonicsL2_tD2EC2ADCA26B9BE05036C3ABCF3CC049EC73EA64  get_m_AmbientSphericalHarmonics_15() const { return ___m_AmbientSphericalHarmonics_15; }
	inline SphericalHarmonicsL2_tD2EC2ADCA26B9BE05036C3ABCF3CC049EC73EA64 * get_address_of_m_AmbientSphericalHarmonics_15() { return &___m_AmbientSphericalHarmonics_15; }
	inline void set_m_AmbientSphericalHarmonics_15(SphericalHarmonicsL2_tD2EC2ADCA26B9BE05036C3ABCF3CC049EC73EA64  value)
	{
		___m_AmbientSphericalHarmonics_15 = value;
	}

	inline static int32_t get_offset_of_m_CameraGrain_16() { return static_cast<int32_t>(offsetof(XRCameraFrame_t5FD7B7FC22B478AC6B00AD01A0AD6F2295EA1BA8, ___m_CameraGrain_16)); }
	inline XRTextureDescriptor_t9CA857DCCC1208B74376787BE4F3008A01B29A57  get_m_CameraGrain_16() const { return ___m_CameraGrain_16; }
	inline XRTextureDescriptor_t9CA857DCCC1208B74376787BE4F3008A01B29A57 * get_address_of_m_CameraGrain_16() { return &___m_CameraGrain_16; }
	inline void set_m_CameraGrain_16(XRTextureDescriptor_t9CA857DCCC1208B74376787BE4F3008A01B29A57  value)
	{
		___m_CameraGrain_16 = value;
	}

	inline static int32_t get_offset_of_m_NoiseIntensity_17() { return static_cast<int32_t>(offsetof(XRCameraFrame_t5FD7B7FC22B478AC6B00AD01A0AD6F2295EA1BA8, ___m_NoiseIntensity_17)); }
	inline float get_m_NoiseIntensity_17() const { return ___m_NoiseIntensity_17; }
	inline float* get_address_of_m_NoiseIntensity_17() { return &___m_NoiseIntensity_17; }
	inline void set_m_NoiseIntensity_17(float value)
	{
		___m_NoiseIntensity_17 = value;
	}
};


// UnityEngine.XR.ARSubsystems.XREnvironmentProbe
struct  XREnvironmentProbe_t4D75B5DF95135D1BA45222CBE3E7677E823B8D4C 
{
public:
	// UnityEngine.XR.ARSubsystems.TrackableId UnityEngine.XR.ARSubsystems.XREnvironmentProbe::m_TrackableId
	TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  ___m_TrackableId_1;
	// UnityEngine.Vector3 UnityEngine.XR.ARSubsystems.XREnvironmentProbe::m_Scale
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___m_Scale_2;
	// UnityEngine.Pose UnityEngine.XR.ARSubsystems.XREnvironmentProbe::m_Pose
	Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  ___m_Pose_3;
	// UnityEngine.Vector3 UnityEngine.XR.ARSubsystems.XREnvironmentProbe::m_Size
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___m_Size_4;
	// UnityEngine.XR.ARSubsystems.XRTextureDescriptor UnityEngine.XR.ARSubsystems.XREnvironmentProbe::m_TextureDescriptor
	XRTextureDescriptor_t9CA857DCCC1208B74376787BE4F3008A01B29A57  ___m_TextureDescriptor_5;
	// UnityEngine.XR.ARSubsystems.TrackingState UnityEngine.XR.ARSubsystems.XREnvironmentProbe::m_TrackingState
	int32_t ___m_TrackingState_6;
	// System.IntPtr UnityEngine.XR.ARSubsystems.XREnvironmentProbe::m_NativePtr
	intptr_t ___m_NativePtr_7;

public:
	inline static int32_t get_offset_of_m_TrackableId_1() { return static_cast<int32_t>(offsetof(XREnvironmentProbe_t4D75B5DF95135D1BA45222CBE3E7677E823B8D4C, ___m_TrackableId_1)); }
	inline TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  get_m_TrackableId_1() const { return ___m_TrackableId_1; }
	inline TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B * get_address_of_m_TrackableId_1() { return &___m_TrackableId_1; }
	inline void set_m_TrackableId_1(TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  value)
	{
		___m_TrackableId_1 = value;
	}

	inline static int32_t get_offset_of_m_Scale_2() { return static_cast<int32_t>(offsetof(XREnvironmentProbe_t4D75B5DF95135D1BA45222CBE3E7677E823B8D4C, ___m_Scale_2)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_m_Scale_2() const { return ___m_Scale_2; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_m_Scale_2() { return &___m_Scale_2; }
	inline void set_m_Scale_2(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___m_Scale_2 = value;
	}

	inline static int32_t get_offset_of_m_Pose_3() { return static_cast<int32_t>(offsetof(XREnvironmentProbe_t4D75B5DF95135D1BA45222CBE3E7677E823B8D4C, ___m_Pose_3)); }
	inline Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  get_m_Pose_3() const { return ___m_Pose_3; }
	inline Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A * get_address_of_m_Pose_3() { return &___m_Pose_3; }
	inline void set_m_Pose_3(Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  value)
	{
		___m_Pose_3 = value;
	}

	inline static int32_t get_offset_of_m_Size_4() { return static_cast<int32_t>(offsetof(XREnvironmentProbe_t4D75B5DF95135D1BA45222CBE3E7677E823B8D4C, ___m_Size_4)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_m_Size_4() const { return ___m_Size_4; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_m_Size_4() { return &___m_Size_4; }
	inline void set_m_Size_4(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___m_Size_4 = value;
	}

	inline static int32_t get_offset_of_m_TextureDescriptor_5() { return static_cast<int32_t>(offsetof(XREnvironmentProbe_t4D75B5DF95135D1BA45222CBE3E7677E823B8D4C, ___m_TextureDescriptor_5)); }
	inline XRTextureDescriptor_t9CA857DCCC1208B74376787BE4F3008A01B29A57  get_m_TextureDescriptor_5() const { return ___m_TextureDescriptor_5; }
	inline XRTextureDescriptor_t9CA857DCCC1208B74376787BE4F3008A01B29A57 * get_address_of_m_TextureDescriptor_5() { return &___m_TextureDescriptor_5; }
	inline void set_m_TextureDescriptor_5(XRTextureDescriptor_t9CA857DCCC1208B74376787BE4F3008A01B29A57  value)
	{
		___m_TextureDescriptor_5 = value;
	}

	inline static int32_t get_offset_of_m_TrackingState_6() { return static_cast<int32_t>(offsetof(XREnvironmentProbe_t4D75B5DF95135D1BA45222CBE3E7677E823B8D4C, ___m_TrackingState_6)); }
	inline int32_t get_m_TrackingState_6() const { return ___m_TrackingState_6; }
	inline int32_t* get_address_of_m_TrackingState_6() { return &___m_TrackingState_6; }
	inline void set_m_TrackingState_6(int32_t value)
	{
		___m_TrackingState_6 = value;
	}

	inline static int32_t get_offset_of_m_NativePtr_7() { return static_cast<int32_t>(offsetof(XREnvironmentProbe_t4D75B5DF95135D1BA45222CBE3E7677E823B8D4C, ___m_NativePtr_7)); }
	inline intptr_t get_m_NativePtr_7() const { return ___m_NativePtr_7; }
	inline intptr_t* get_address_of_m_NativePtr_7() { return &___m_NativePtr_7; }
	inline void set_m_NativePtr_7(intptr_t value)
	{
		___m_NativePtr_7 = value;
	}
};

struct XREnvironmentProbe_t4D75B5DF95135D1BA45222CBE3E7677E823B8D4C_StaticFields
{
public:
	// UnityEngine.XR.ARSubsystems.XREnvironmentProbe UnityEngine.XR.ARSubsystems.XREnvironmentProbe::s_Default
	XREnvironmentProbe_t4D75B5DF95135D1BA45222CBE3E7677E823B8D4C  ___s_Default_0;

public:
	inline static int32_t get_offset_of_s_Default_0() { return static_cast<int32_t>(offsetof(XREnvironmentProbe_t4D75B5DF95135D1BA45222CBE3E7677E823B8D4C_StaticFields, ___s_Default_0)); }
	inline XREnvironmentProbe_t4D75B5DF95135D1BA45222CBE3E7677E823B8D4C  get_s_Default_0() const { return ___s_Default_0; }
	inline XREnvironmentProbe_t4D75B5DF95135D1BA45222CBE3E7677E823B8D4C * get_address_of_s_Default_0() { return &___s_Default_0; }
	inline void set_s_Default_0(XREnvironmentProbe_t4D75B5DF95135D1BA45222CBE3E7677E823B8D4C  value)
	{
		___s_Default_0 = value;
	}
};


// UnityEngine.XR.ARSubsystems.XRReferenceObjectLibrary
struct  XRReferenceObjectLibrary_t07704B2996E507F23EE3C99CFC3BB73A83C99A7C  : public ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A
{
public:
	// System.UInt64 UnityEngine.XR.ARSubsystems.XRReferenceObjectLibrary::m_GuidLow
	uint64_t ___m_GuidLow_4;
	// System.UInt64 UnityEngine.XR.ARSubsystems.XRReferenceObjectLibrary::m_GuidHigh
	uint64_t ___m_GuidHigh_5;
	// System.Collections.Generic.List`1<UnityEngine.XR.ARSubsystems.XRReferenceObject> UnityEngine.XR.ARSubsystems.XRReferenceObjectLibrary::m_ReferenceObjects
	List_1_t3A1F09045329A30B2867F24E69EC807BE36BEA9B * ___m_ReferenceObjects_6;

public:
	inline static int32_t get_offset_of_m_GuidLow_4() { return static_cast<int32_t>(offsetof(XRReferenceObjectLibrary_t07704B2996E507F23EE3C99CFC3BB73A83C99A7C, ___m_GuidLow_4)); }
	inline uint64_t get_m_GuidLow_4() const { return ___m_GuidLow_4; }
	inline uint64_t* get_address_of_m_GuidLow_4() { return &___m_GuidLow_4; }
	inline void set_m_GuidLow_4(uint64_t value)
	{
		___m_GuidLow_4 = value;
	}

	inline static int32_t get_offset_of_m_GuidHigh_5() { return static_cast<int32_t>(offsetof(XRReferenceObjectLibrary_t07704B2996E507F23EE3C99CFC3BB73A83C99A7C, ___m_GuidHigh_5)); }
	inline uint64_t get_m_GuidHigh_5() const { return ___m_GuidHigh_5; }
	inline uint64_t* get_address_of_m_GuidHigh_5() { return &___m_GuidHigh_5; }
	inline void set_m_GuidHigh_5(uint64_t value)
	{
		___m_GuidHigh_5 = value;
	}

	inline static int32_t get_offset_of_m_ReferenceObjects_6() { return static_cast<int32_t>(offsetof(XRReferenceObjectLibrary_t07704B2996E507F23EE3C99CFC3BB73A83C99A7C, ___m_ReferenceObjects_6)); }
	inline List_1_t3A1F09045329A30B2867F24E69EC807BE36BEA9B * get_m_ReferenceObjects_6() const { return ___m_ReferenceObjects_6; }
	inline List_1_t3A1F09045329A30B2867F24E69EC807BE36BEA9B ** get_address_of_m_ReferenceObjects_6() { return &___m_ReferenceObjects_6; }
	inline void set_m_ReferenceObjects_6(List_1_t3A1F09045329A30B2867F24E69EC807BE36BEA9B * value)
	{
		___m_ReferenceObjects_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ReferenceObjects_6), (void*)value);
	}
};


// UnityEngine.XR.ARKit.ARKitXRDepthSubsystem/TransformPositionsJob
struct  TransformPositionsJob_t76836F51EABF9ECE4503F3ECAC1DA2C32D0DA468 
{
public:
	// Unity.Collections.NativeArray`1<UnityEngine.Quaternion> UnityEngine.XR.ARKit.ARKitXRDepthSubsystem/TransformPositionsJob::positionsIn
	NativeArray_1_t2672EA3A09E3FE76419439DC581905D460584A60  ___positionsIn_0;
	// Unity.Collections.NativeArray`1<UnityEngine.Vector3> UnityEngine.XR.ARKit.ARKitXRDepthSubsystem/TransformPositionsJob::positionsOut
	NativeArray_1_t2577BCA09CA248EFB78BD7FDA7F09D5C395DFF52  ___positionsOut_1;

public:
	inline static int32_t get_offset_of_positionsIn_0() { return static_cast<int32_t>(offsetof(TransformPositionsJob_t76836F51EABF9ECE4503F3ECAC1DA2C32D0DA468, ___positionsIn_0)); }
	inline NativeArray_1_t2672EA3A09E3FE76419439DC581905D460584A60  get_positionsIn_0() const { return ___positionsIn_0; }
	inline NativeArray_1_t2672EA3A09E3FE76419439DC581905D460584A60 * get_address_of_positionsIn_0() { return &___positionsIn_0; }
	inline void set_positionsIn_0(NativeArray_1_t2672EA3A09E3FE76419439DC581905D460584A60  value)
	{
		___positionsIn_0 = value;
	}

	inline static int32_t get_offset_of_positionsOut_1() { return static_cast<int32_t>(offsetof(TransformPositionsJob_t76836F51EABF9ECE4503F3ECAC1DA2C32D0DA468, ___positionsOut_1)); }
	inline NativeArray_1_t2577BCA09CA248EFB78BD7FDA7F09D5C395DFF52  get_positionsOut_1() const { return ___positionsOut_1; }
	inline NativeArray_1_t2577BCA09CA248EFB78BD7FDA7F09D5C395DFF52 * get_address_of_positionsOut_1() { return &___positionsOut_1; }
	inline void set_positionsOut_1(NativeArray_1_t2577BCA09CA248EFB78BD7FDA7F09D5C395DFF52  value)
	{
		___positionsOut_1 = value;
	}
};


// UnityEngine.XR.ARKit.ARKitSessionSubsystem/NativeApi/OnAsyncConversionCompleteDelegate
struct  OnAsyncConversionCompleteDelegate_tFE6205610918E7A87E7867F879A863FD2FE8ECDF  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.XR.ARKit.ARKitXRPlaneSubsystem/ARKitProvider/FlipBoundaryWindingJob
struct  FlipBoundaryWindingJob_t726CFFAB953CC7C841EE74365C27322E57A2A5DA 
{
public:
	// Unity.Collections.NativeArray`1<UnityEngine.Vector2> UnityEngine.XR.ARKit.ARKitXRPlaneSubsystem/ARKitProvider/FlipBoundaryWindingJob::positions
	NativeArray_1_t431C85F30275831D1F5D458AB73DFCE050693BC0  ___positions_0;

public:
	inline static int32_t get_offset_of_positions_0() { return static_cast<int32_t>(offsetof(FlipBoundaryWindingJob_t726CFFAB953CC7C841EE74365C27322E57A2A5DA, ___positions_0)); }
	inline NativeArray_1_t431C85F30275831D1F5D458AB73DFCE050693BC0  get_positions_0() const { return ___positions_0; }
	inline NativeArray_1_t431C85F30275831D1F5D458AB73DFCE050693BC0 * get_address_of_positions_0() { return &___positions_0; }
	inline void set_positions_0(NativeArray_1_t431C85F30275831D1F5D458AB73DFCE050693BC0  value)
	{
		___positions_0 = value;
	}
};


// UnityEngine.XR.ARKit.ARKitXRPlaneSubsystem/ARKitProvider/TransformBoundaryPositionsJob
struct  TransformBoundaryPositionsJob_t538BF69F9F744EBC94AA0487075746AD113A64FE 
{
public:
	// Unity.Collections.NativeArray`1<UnityEngine.Vector4> UnityEngine.XR.ARKit.ARKitXRPlaneSubsystem/ARKitProvider/TransformBoundaryPositionsJob::positionsIn
	NativeArray_1_t381CA7D92591F9C96DB84965C31AF8713A546156  ___positionsIn_0;
	// Unity.Collections.NativeArray`1<UnityEngine.Vector2> UnityEngine.XR.ARKit.ARKitXRPlaneSubsystem/ARKitProvider/TransformBoundaryPositionsJob::positionsOut
	NativeArray_1_t431C85F30275831D1F5D458AB73DFCE050693BC0  ___positionsOut_1;

public:
	inline static int32_t get_offset_of_positionsIn_0() { return static_cast<int32_t>(offsetof(TransformBoundaryPositionsJob_t538BF69F9F744EBC94AA0487075746AD113A64FE, ___positionsIn_0)); }
	inline NativeArray_1_t381CA7D92591F9C96DB84965C31AF8713A546156  get_positionsIn_0() const { return ___positionsIn_0; }
	inline NativeArray_1_t381CA7D92591F9C96DB84965C31AF8713A546156 * get_address_of_positionsIn_0() { return &___positionsIn_0; }
	inline void set_positionsIn_0(NativeArray_1_t381CA7D92591F9C96DB84965C31AF8713A546156  value)
	{
		___positionsIn_0 = value;
	}

	inline static int32_t get_offset_of_positionsOut_1() { return static_cast<int32_t>(offsetof(TransformBoundaryPositionsJob_t538BF69F9F744EBC94AA0487075746AD113A64FE, ___positionsOut_1)); }
	inline NativeArray_1_t431C85F30275831D1F5D458AB73DFCE050693BC0  get_positionsOut_1() const { return ___positionsOut_1; }
	inline NativeArray_1_t431C85F30275831D1F5D458AB73DFCE050693BC0 * get_address_of_positionsOut_1() { return &___positionsOut_1; }
	inline void set_positionsOut_1(NativeArray_1_t431C85F30275831D1F5D458AB73DFCE050693BC0  value)
	{
		___positionsOut_1 = value;
	}
};


// System.Nullable`1<UnityEngine.XR.ARSubsystems.Configuration>
struct  Nullable_1_t0FF36C2ABCA6430FFCD4ED32922F18F36382E494 
{
public:
	// T System.Nullable`1::value
	Configuration_t29C11C7E576D64F717543048BDA1EBCEF0CF60C0  ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_t0FF36C2ABCA6430FFCD4ED32922F18F36382E494, ___value_0)); }
	inline Configuration_t29C11C7E576D64F717543048BDA1EBCEF0CF60C0  get_value_0() const { return ___value_0; }
	inline Configuration_t29C11C7E576D64F717543048BDA1EBCEF0CF60C0 * get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(Configuration_t29C11C7E576D64F717543048BDA1EBCEF0CF60C0  value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_t0FF36C2ABCA6430FFCD4ED32922F18F36382E494, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
	}
};


// UnityEngine.XR.ARSubsystems.XRSessionSubsystem
struct  XRSessionSubsystem_t8AD3C01568AA19BF038D23A6031FF9814CAF93CD  : public SubsystemWithProvider_3_t646DFCE31181130FB557E4AFA37198CF3170977F
{
public:
	// System.Nullable`1<UnityEngine.XR.ARSubsystems.Configuration> UnityEngine.XR.ARSubsystems.XRSessionSubsystem::<currentConfiguration>k__BackingField
	Nullable_1_t0FF36C2ABCA6430FFCD4ED32922F18F36382E494  ___U3CcurrentConfigurationU3Ek__BackingField_4;
	// UnityEngine.XR.ARSubsystems.ConfigurationChooser UnityEngine.XR.ARSubsystems.XRSessionSubsystem::m_DefaultConfigurationChooser
	ConfigurationChooser_t0CCF856A226297A702F306A2217CF17D652E72C4 * ___m_DefaultConfigurationChooser_5;
	// UnityEngine.XR.ARSubsystems.ConfigurationChooser UnityEngine.XR.ARSubsystems.XRSessionSubsystem::m_ConfigurationChooser
	ConfigurationChooser_t0CCF856A226297A702F306A2217CF17D652E72C4 * ___m_ConfigurationChooser_6;

public:
	inline static int32_t get_offset_of_U3CcurrentConfigurationU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(XRSessionSubsystem_t8AD3C01568AA19BF038D23A6031FF9814CAF93CD, ___U3CcurrentConfigurationU3Ek__BackingField_4)); }
	inline Nullable_1_t0FF36C2ABCA6430FFCD4ED32922F18F36382E494  get_U3CcurrentConfigurationU3Ek__BackingField_4() const { return ___U3CcurrentConfigurationU3Ek__BackingField_4; }
	inline Nullable_1_t0FF36C2ABCA6430FFCD4ED32922F18F36382E494 * get_address_of_U3CcurrentConfigurationU3Ek__BackingField_4() { return &___U3CcurrentConfigurationU3Ek__BackingField_4; }
	inline void set_U3CcurrentConfigurationU3Ek__BackingField_4(Nullable_1_t0FF36C2ABCA6430FFCD4ED32922F18F36382E494  value)
	{
		___U3CcurrentConfigurationU3Ek__BackingField_4 = value;
	}

	inline static int32_t get_offset_of_m_DefaultConfigurationChooser_5() { return static_cast<int32_t>(offsetof(XRSessionSubsystem_t8AD3C01568AA19BF038D23A6031FF9814CAF93CD, ___m_DefaultConfigurationChooser_5)); }
	inline ConfigurationChooser_t0CCF856A226297A702F306A2217CF17D652E72C4 * get_m_DefaultConfigurationChooser_5() const { return ___m_DefaultConfigurationChooser_5; }
	inline ConfigurationChooser_t0CCF856A226297A702F306A2217CF17D652E72C4 ** get_address_of_m_DefaultConfigurationChooser_5() { return &___m_DefaultConfigurationChooser_5; }
	inline void set_m_DefaultConfigurationChooser_5(ConfigurationChooser_t0CCF856A226297A702F306A2217CF17D652E72C4 * value)
	{
		___m_DefaultConfigurationChooser_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_DefaultConfigurationChooser_5), (void*)value);
	}

	inline static int32_t get_offset_of_m_ConfigurationChooser_6() { return static_cast<int32_t>(offsetof(XRSessionSubsystem_t8AD3C01568AA19BF038D23A6031FF9814CAF93CD, ___m_ConfigurationChooser_6)); }
	inline ConfigurationChooser_t0CCF856A226297A702F306A2217CF17D652E72C4 * get_m_ConfigurationChooser_6() const { return ___m_ConfigurationChooser_6; }
	inline ConfigurationChooser_t0CCF856A226297A702F306A2217CF17D652E72C4 ** get_address_of_m_ConfigurationChooser_6() { return &___m_ConfigurationChooser_6; }
	inline void set_m_ConfigurationChooser_6(ConfigurationChooser_t0CCF856A226297A702F306A2217CF17D652E72C4 * value)
	{
		___m_ConfigurationChooser_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ConfigurationChooser_6), (void*)value);
	}
};


// UnityEngine.XR.ARKit.ARKitSessionSubsystem
struct  ARKitSessionSubsystem_tABA1BA2FE3CF0CECDDC519C4B545236FC8B9E216  : public XRSessionSubsystem_t8AD3C01568AA19BF038D23A6031FF9814CAF93CD
{
public:

public:
};

struct ARKitSessionSubsystem_tABA1BA2FE3CF0CECDDC519C4B545236FC8B9E216_StaticFields
{
public:
	// UnityEngine.XR.ARKit.ARKitSessionSubsystem/NativeApi/OnAsyncConversionCompleteDelegate UnityEngine.XR.ARKit.ARKitSessionSubsystem::s_OnAsyncWorldMapCompleted
	OnAsyncConversionCompleteDelegate_tFE6205610918E7A87E7867F879A863FD2FE8ECDF * ___s_OnAsyncWorldMapCompleted_7;

public:
	inline static int32_t get_offset_of_s_OnAsyncWorldMapCompleted_7() { return static_cast<int32_t>(offsetof(ARKitSessionSubsystem_tABA1BA2FE3CF0CECDDC519C4B545236FC8B9E216_StaticFields, ___s_OnAsyncWorldMapCompleted_7)); }
	inline OnAsyncConversionCompleteDelegate_tFE6205610918E7A87E7867F879A863FD2FE8ECDF * get_s_OnAsyncWorldMapCompleted_7() const { return ___s_OnAsyncWorldMapCompleted_7; }
	inline OnAsyncConversionCompleteDelegate_tFE6205610918E7A87E7867F879A863FD2FE8ECDF ** get_address_of_s_OnAsyncWorldMapCompleted_7() { return &___s_OnAsyncWorldMapCompleted_7; }
	inline void set_s_OnAsyncWorldMapCompleted_7(OnAsyncConversionCompleteDelegate_tFE6205610918E7A87E7867F879A863FD2FE8ECDF * value)
	{
		___s_OnAsyncWorldMapCompleted_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_OnAsyncWorldMapCompleted_7), (void*)value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
// UnityEngine.TextureFormat[]
struct TextureFormatU5BU5D_tC081C559AF0CE6678E9673429ADDC9B93B6B45CE  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) int32_t m_Items[1];

public:
	inline int32_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline int32_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, int32_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline int32_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline int32_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, int32_t value)
	{
		m_Items[index] = value;
	}
};
// System.Delegate[]
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Delegate_t * m_Items[1];

public:
	inline Delegate_t * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Delegate_t ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Delegate_t * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Delegate_t * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Delegate_t ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Delegate_t * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::Add(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Add_mE5B3CBB3A625606D9BC4337FEAAF1D66BCB6F96E_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, RuntimeObject * ___item0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.HashSet`1<System.Int32Enum>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1__ctor_mA1FA65D2BDDB74D6F5325CA4930F68574451ABDB_gshared (HashSet_1_tC7075903B74F058503994CAB008D196EF7AFB4AC * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.HashSet`1<System.Int32Enum>::Add(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_Add_mF0E415613429EC5A13A04C9CBDD519C91B56C235_gshared (HashSet_1_tC7075903B74F058503994CAB008D196EF7AFB4AC * __this, int32_t ___item0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.XRParticipantSubsystemDescriptor::Register<System.Object,System.Object>(System.String,UnityEngine.XR.ARSubsystems.XRParticipantSubsystemDescriptor/Capabilities)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRParticipantSubsystemDescriptor_Register_TisRuntimeObject_TisRuntimeObject_m77779CD44165EB52B7D758C6A46D010D3BCCB1FA_gshared (String_t* ___subsystemId0, int32_t ___capabilities1, const RuntimeMethod* method);
// System.Void System.Action`2<System.Int32Enum,UnityEngine.XR.ARKit.ARWorldMap>::Invoke(!0,!1)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_2_Invoke_m33B0110C8FDDB4C5DE28702625FA53D2CC43EB53_gshared (Action_2_tBF7C7962F0CD8BFDA2D483FE7CEC080540530A3E * __this, int32_t ___arg10, ARWorldMap_t90151C78B15487234BE2E76D169DA191819704A2  ___arg21, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.XRObjectTrackingSubsystem::Register<System.Object,System.Object>(System.String,UnityEngine.XR.ARSubsystems.XRObjectTrackingSubsystemDescriptor/Capabilities)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRObjectTrackingSubsystem_Register_TisRuntimeObject_TisRuntimeObject_mAD339CA933DF8B8D705E23C725E78FF7599EC36F_gshared (String_t* ___id0, Capabilities_tC6F329DD5C73C6B9E04BE77A3AE0E52390BD8685  ___capabilities1, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRAnchor>::.ctor(System.Void*,System.Int32,System.Void*,System.Int32,System.Void*,System.Int32,!0,System.Int32,Unity.Collections.Allocator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrackableChanges_1__ctor_mA73D215CA80356F8179EB02A8F9BBC14329AD7D4_gshared (TrackableChanges_1_tF38314CFF715F232D6DA3415FD2F68CE504CFF9B * __this, void* ___addedPtr0, int32_t ___addedCount1, void* ___updatedPtr2, int32_t ___updatedCount3, void* ___removedPtr4, int32_t ___removedCount5, XRAnchor_t8E92DD70D9FA9B3ED2799305E05228184932099C  ___defaultT6, int32_t ___stride7, int32_t ___allocator8, const RuntimeMethod* method);
// Unity.Collections.NativeArray`1<!!0> UnityEngine.XR.ARSubsystems.NativeCopyUtility::PtrToNativeArrayWithDefault<UnityEngine.XR.ARSubsystems.XRCameraConfiguration>(!!0,System.Void*,System.Int32,System.Int32,Unity.Collections.Allocator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t80D42D57D2D76B05EFDA2CF74AE660AB5FDD9545  NativeCopyUtility_PtrToNativeArrayWithDefault_TisXRCameraConfiguration_t2393055E5547307393E9C73AB13B95E0785A4F7A_m201412E1B5E1CFD5D5FC127661E8FBE015A47072_gshared (XRCameraConfiguration_t2393055E5547307393E9C73AB13B95E0785A4F7A  ___defaultT0, void* ___source1, int32_t ___sourceElementSize2, int32_t ___length3, int32_t ___allocator4, const RuntimeMethod* method);
// System.Void System.Nullable`1<UnityEngine.XR.ARSubsystems.XRCameraConfiguration>::.ctor(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Nullable_1__ctor_mC8B2FF6D15E5BD1BF52356C2621F2BE4AD504054_gshared (Nullable_1_t661141E668063C73311C9DF09B3AE945EA9A1D8C * __this, XRCameraConfiguration_t2393055E5547307393E9C73AB13B95E0785A4F7A  ___value0, const RuntimeMethod* method);
// !0 System.Nullable`1<UnityEngine.XR.ARSubsystems.XRCameraConfiguration>::get_Value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR XRCameraConfiguration_t2393055E5547307393E9C73AB13B95E0785A4F7A  Nullable_1_get_Value_m061AC618B4B3A1EFA9F3B0970437705C72EA10BD_gshared (Nullable_1_t661141E668063C73311C9DF09B3AE945EA9A1D8C * __this, const RuntimeMethod* method);
// Unity.Collections.NativeArray`1<!!0> UnityEngine.XR.ARSubsystems.NativeCopyUtility::PtrToNativeArrayWithDefault<UnityEngine.XR.ARSubsystems.XRTextureDescriptor>(!!0,System.Void*,System.Int32,System.Int32,Unity.Collections.Allocator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t290DD5A348463DD4415AFE27775047312478F952  NativeCopyUtility_PtrToNativeArrayWithDefault_TisXRTextureDescriptor_t9CA857DCCC1208B74376787BE4F3008A01B29A57_m1546885E4894E2676D1C8E5E9B8C0B1E41B24C63_gshared (XRTextureDescriptor_t9CA857DCCC1208B74376787BE4F3008A01B29A57  ___defaultT0, void* ___source1, int32_t ___sourceElementSize2, int32_t ___length3, int32_t ___allocator4, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XREnvironmentProbe>::.ctor(System.Void*,System.Int32,System.Void*,System.Int32,System.Void*,System.Int32,!0,System.Int32,Unity.Collections.Allocator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrackableChanges_1__ctor_m8B32DEE7C39CA08A7523D0D553B26079265524E1_gshared (TrackableChanges_1_tBC1B6352E3D11F9F7BC4E567480BDF8AE39A547F * __this, void* ___addedPtr0, int32_t ___addedCount1, void* ___updatedPtr2, int32_t ___updatedCount3, void* ___removedPtr4, int32_t ___removedCount5, XREnvironmentProbe_t4D75B5DF95135D1BA45222CBE3E7677E823B8D4C  ___defaultT6, int32_t ___stride7, int32_t ___allocator8, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRHumanBody>::.ctor(System.Void*,System.Int32,System.Void*,System.Int32,System.Void*,System.Int32,!0,System.Int32,Unity.Collections.Allocator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrackableChanges_1__ctor_mF1B701B0766D8E5230EC1A878ADF490273ED75BC_gshared (TrackableChanges_1_t4BEBDDB9C8CBFF65EC7028CE5BA562A5728C8B82 * __this, void* ___addedPtr0, int32_t ___addedCount1, void* ___updatedPtr2, int32_t ___updatedCount3, void* ___removedPtr4, int32_t ___removedCount5, XRHumanBody_t1AA9DC3BEBCF86A64BE2B83452AC5704AD08C13B  ___defaultT6, int32_t ___stride7, int32_t ___allocator8, const RuntimeMethod* method);
// System.Void* Unity.Collections.LowLevel.Unsafe.NativeSliceUnsafeUtility::GetUnsafePtr<System.Byte>(Unity.Collections.NativeSlice`1<!!0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* NativeSliceUnsafeUtility_GetUnsafePtr_TisByte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_m48BDB55277094F65920898D8EF5953BB2D1138B4_gshared (NativeSlice_1_tA05D3BC7EB042685CBFD3369ECB6140D114C911B  ___nativeSlice0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRTrackedImage>::.ctor(System.Void*,System.Int32,System.Void*,System.Int32,System.Void*,System.Int32,!0,System.Int32,Unity.Collections.Allocator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrackableChanges_1__ctor_m6F60AB8591361352FE9F0FB2C9A50988CD5530E8_gshared (TrackableChanges_1_tDE6975A36D16B9E01B5B7D815A77EDD62A3EA629 * __this, void* ___addedPtr0, int32_t ___addedCount1, void* ___updatedPtr2, int32_t ___updatedCount3, void* ___removedPtr4, int32_t ___removedCount5, XRTrackedImage_t92B53E0621C6D2E930761110E719F0E9580A722F  ___defaultT6, int32_t ___stride7, int32_t ___allocator8, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRParticipant>::.ctor(System.Int32,System.Int32,System.Int32,Unity.Collections.Allocator,!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrackableChanges_1__ctor_mFA2451C6E10AF00118A809C94BB646C6B774012E_gshared (TrackableChanges_1_tCBDEADFC15FC0570F012431A5227C2E6B92BAC3F * __this, int32_t ___addedCount0, int32_t ___updatedCount1, int32_t ___removedCount2, int32_t ___allocator3, XRParticipant_t8CFF46A2CDD860A7591AD0FC0EE563458C8FA13F  ___defaultValue4, const RuntimeMethod* method);
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::SizeOf<UnityEngine.XR.ARSubsystems.XRParticipant>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisXRParticipant_t8CFF46A2CDD860A7591AD0FC0EE563458C8FA13F_m00E843B9705969489FCA43AAF5B4BDF0DAE674C9_gshared (const RuntimeMethod* method);
// Unity.Collections.NativeArray`1<!0> UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRParticipant>::get_added()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR NativeArray_1_t20D7C7F2BCDC04B6238E113A2CA21BBDD326A535  TrackableChanges_1_get_added_mE2DAB671C35440089855E3FA56312B779914939F_gshared_inline (TrackableChanges_1_tCBDEADFC15FC0570F012431A5227C2E6B92BAC3F * __this, const RuntimeMethod* method);
// System.Void* Unity.Collections.LowLevel.Unsafe.NativeArrayUnsafeUtility::GetUnsafePtr<UnityEngine.XR.ARSubsystems.XRParticipant>(Unity.Collections.NativeArray`1<!!0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* NativeArrayUnsafeUtility_GetUnsafePtr_TisXRParticipant_t8CFF46A2CDD860A7591AD0FC0EE563458C8FA13F_mB0A664D2C49A4691B407A65D546E88FF50F0C378_gshared (NativeArray_1_t20D7C7F2BCDC04B6238E113A2CA21BBDD326A535  ___nativeArray0, const RuntimeMethod* method);
// Unity.Collections.NativeArray`1<!0> UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRParticipant>::get_updated()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR NativeArray_1_t20D7C7F2BCDC04B6238E113A2CA21BBDD326A535  TrackableChanges_1_get_updated_mDD1EA7192EFEFC4A8FB5949F6F995268E940D5AC_gshared_inline (TrackableChanges_1_tCBDEADFC15FC0570F012431A5227C2E6B92BAC3F * __this, const RuntimeMethod* method);
// Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.TrackableId> UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRParticipant>::get_removed()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR NativeArray_1_t991E9C764228B2B65D9688847CCDA8CE903F5D77  TrackableChanges_1_get_removed_mEF24C86CF94D54D18AE8E112F4CA05CB76E8933D_gshared_inline (TrackableChanges_1_tCBDEADFC15FC0570F012431A5227C2E6B92BAC3F * __this, const RuntimeMethod* method);
// System.Void* Unity.Collections.LowLevel.Unsafe.NativeArrayUnsafeUtility::GetUnsafePtr<UnityEngine.XR.ARSubsystems.TrackableId>(Unity.Collections.NativeArray`1<!!0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* NativeArrayUnsafeUtility_GetUnsafePtr_TisTrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B_m92549A9C2F4BEF557CB12A078D51054FA135F761_gshared (NativeArray_1_t991E9C764228B2B65D9688847CCDA8CE903F5D77  ___nativeArray0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRRaycast>::.ctor(System.Void*,System.Int32,System.Void*,System.Int32,System.Void*,System.Int32,!0,System.Int32,Unity.Collections.Allocator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrackableChanges_1__ctor_m592AE08978C647130F8181BD1802AAE7EF3623B4_gshared (TrackableChanges_1_t092C2BBB89690C350B949DDFFA9F551F85536ED3 * __this, void* ___addedPtr0, int32_t ___addedCount1, void* ___updatedPtr2, int32_t ___updatedCount3, void* ___removedPtr4, int32_t ___removedCount5, XRRaycast_tA18F9107EFF1D692E70EF15233BB6134A5F66C55  ___defaultT6, int32_t ___stride7, int32_t ___allocator8, const RuntimeMethod* method);
// System.Void Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.XRRaycastHit>::.ctor(System.Int32,Unity.Collections.Allocator,Unity.Collections.NativeArrayOptions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeArray_1__ctor_m3975925019B935FC0405A56C2A4431D16DFE641F_gshared (NativeArray_1_t35F2E89DF840C06C68595E9289A07A26CBB07FCB * __this, int32_t ___length0, int32_t ___allocator1, int32_t ___options2, const RuntimeMethod* method);
// System.Void* Unity.Collections.LowLevel.Unsafe.UnsafeUtility::AddressOf<UnityEngine.XR.ARSubsystems.XRRaycastHit>(!!0&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* UnsafeUtility_AddressOf_TisXRRaycastHit_t94A3D13B245A9D0A7A7F2D0919DCAAC7C8DF8DDB_mCFB5A27460535DA449EA9CD73BE6BE4955FEC37B_gshared (XRRaycastHit_t94A3D13B245A9D0A7A7F2D0919DCAAC7C8DF8DDB * ___output0, const RuntimeMethod* method);
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::SizeOf<UnityEngine.XR.ARSubsystems.XRRaycastHit>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisXRRaycastHit_t94A3D13B245A9D0A7A7F2D0919DCAAC7C8DF8DDB_m51E2C6221DC8163F580478B984D0562A95A715BA_gshared (const RuntimeMethod* method);
// System.Void* Unity.Collections.LowLevel.Unsafe.NativeArrayUnsafeUtility::GetUnsafePtr<UnityEngine.XR.ARSubsystems.XRRaycastHit>(Unity.Collections.NativeArray`1<!!0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* NativeArrayUnsafeUtility_GetUnsafePtr_TisXRRaycastHit_t94A3D13B245A9D0A7A7F2D0919DCAAC7C8DF8DDB_m752D0AAC76475B17F91A7623AE587CF73699C92E_gshared (NativeArray_1_t35F2E89DF840C06C68595E9289A07A26CBB07FCB  ___nativeArray0, const RuntimeMethod* method);
// System.Void Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.ConfigurationDescriptor>::.ctor(System.Int32,Unity.Collections.Allocator,Unity.Collections.NativeArrayOptions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeArray_1__ctor_m9BC70C00CBBD2A630F434033F04D9A1ADBCD2440_gshared (NativeArray_1_tC9A9DFD8C5E8BBF71F83CBC0CCF7C4BC38E3A4CA * __this, int32_t ___length0, int32_t ___allocator1, int32_t ___options2, const RuntimeMethod* method);
// System.Void* Unity.Collections.LowLevel.Unsafe.NativeArrayUnsafeUtility::GetUnsafePtr<UnityEngine.XR.ARSubsystems.ConfigurationDescriptor>(Unity.Collections.NativeArray`1<!!0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* NativeArrayUnsafeUtility_GetUnsafePtr_TisConfigurationDescriptor_t5CD12F017FCCF861DC33D7C0D6F0121015DEEA78_m38F4EB734FEAE74086322152D46FCAFEB2DB1C72_gshared (NativeArray_1_tC9A9DFD8C5E8BBF71F83CBC0CCF7C4BC38E3A4CA  ___nativeArray0, const RuntimeMethod* method);
// UnityEngine.XR.ARSubsystems.Promise`1<!0> UnityEngine.XR.ARSubsystems.Promise`1<System.Int32Enum>::CreateResolvedPromise(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Promise_1_t4A177D2785B1022FAEDD19EC4B7D80529BEAFDAB * Promise_1_CreateResolvedPromise_m4772DECEBD5DFF6811D242285DE7B47DD5749CE4_gshared (int32_t ___result0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRPointCloud>::.ctor(System.Void*,System.Int32,System.Void*,System.Int32,System.Void*,System.Int32,!0,System.Int32,Unity.Collections.Allocator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrackableChanges_1__ctor_mBF738909EFD3DE1CE7CEC8B5BF81B3AB51A682CD_gshared (TrackableChanges_1_t77AFD32F12A88AC162E5B41E66265CAF9D8E6435 * __this, void* ___addedPtr0, int32_t ___addedCount1, void* ___updatedPtr2, int32_t ___updatedCount3, void* ___removedPtr4, int32_t ___removedCount5, XRPointCloud_t08B41A05528E45CE709F8C14CA6C484D360A62F2  ___defaultT6, int32_t ___stride7, int32_t ___allocator8, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRTrackedObject>::.ctor(System.Void*,System.Int32,System.Void*,System.Int32,System.Void*,System.Int32,!0,System.Int32,Unity.Collections.Allocator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrackableChanges_1__ctor_m269B8E537869D288000375F719F5C5B87861E120_gshared (TrackableChanges_1_t388C13B0BF202AE5F24D0BB3AE0D672AA355E1B1 * __this, void* ___addedPtr0, int32_t ___addedCount1, void* ___updatedPtr2, int32_t ___updatedCount3, void* ___removedPtr4, int32_t ___removedCount5, XRTrackedObject_t247BBE67D4F9308544C4BAD807F321E0C404EC58  ___defaultT6, int32_t ___stride7, int32_t ___allocator8, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.XRPlaneSubsystem/Provider::CreateOrResizeNativeArrayIfNecessary<UnityEngine.Vector2>(System.Int32,Unity.Collections.Allocator,Unity.Collections.NativeArray`1<!!0>&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Provider_CreateOrResizeNativeArrayIfNecessary_TisVector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_m2DB299A15665775F0B5BDFF92CF4FA10166B614A_gshared (int32_t ___length0, int32_t ___allocator1, NativeArray_1_t431C85F30275831D1F5D458AB73DFCE050693BC0 * ___array2, const RuntimeMethod* method);
// Unity.Collections.NativeArray`1<!!0> Unity.Collections.LowLevel.Unsafe.NativeArrayUnsafeUtility::ConvertExistingDataToNativeArray<UnityEngine.Vector4>(System.Void*,System.Int32,Unity.Collections.Allocator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t381CA7D92591F9C96DB84965C31AF8713A546156  NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisVector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_m48ABE60010404D61E53ED29A3DF2AB278D4888D9_gshared (void* ___dataPointer0, int32_t ___length1, int32_t ___allocator2, const RuntimeMethod* method);
// Unity.Jobs.JobHandle Unity.Jobs.IJobParallelForExtensions::Schedule<UnityEngine.XR.ARKit.ARKitXRPlaneSubsystem/ARKitProvider/TransformBoundaryPositionsJob>(!!0,System.Int32,System.Int32,Unity.Jobs.JobHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JobHandle_t8AEB8D31C25D7774C71D62B0C662525E6E36D847  IJobParallelForExtensions_Schedule_TisTransformBoundaryPositionsJob_t538BF69F9F744EBC94AA0487075746AD113A64FE_m2890CB8839F696FCA3C3B4EC83DD4D59F87412B3_gshared (TransformBoundaryPositionsJob_t538BF69F9F744EBC94AA0487075746AD113A64FE  ___jobData0, int32_t ___arrayLength1, int32_t ___innerloopBatchCount2, JobHandle_t8AEB8D31C25D7774C71D62B0C662525E6E36D847  ___dependsOn3, const RuntimeMethod* method);
// Unity.Jobs.JobHandle Unity.Jobs.IJobExtensions::Schedule<UnityEngine.XR.ARKit.ARKitXRPlaneSubsystem/ARKitProvider/FlipBoundaryWindingJob>(!!0,Unity.Jobs.JobHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JobHandle_t8AEB8D31C25D7774C71D62B0C662525E6E36D847  IJobExtensions_Schedule_TisFlipBoundaryWindingJob_t726CFFAB953CC7C841EE74365C27322E57A2A5DA_m8E69469832F0E700BA5C13EF4E0E27930D985893_gshared (FlipBoundaryWindingJob_t726CFFAB953CC7C841EE74365C27322E57A2A5DA  ___jobData0, JobHandle_t8AEB8D31C25D7774C71D62B0C662525E6E36D847  ___dependsOn1, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.BoundedPlane>::.ctor(System.Void*,System.Int32,System.Void*,System.Int32,System.Void*,System.Int32,!0,System.Int32,Unity.Collections.Allocator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrackableChanges_1__ctor_mD2CDA364CBC507E983239E807C8C6EE8D3453B42_gshared (TrackableChanges_1_t8B0834EED4AC44A71FC9071BDA349BA9D8FE0717 * __this, void* ___addedPtr0, int32_t ___addedCount1, void* ___updatedPtr2, int32_t ___updatedCount3, void* ___removedPtr4, int32_t ___removedCount5, BoundedPlane_t9001963C43ACDF4CDEA8BBF97CD783B7969B79C5  ___defaultT6, int32_t ___stride7, int32_t ___allocator8, const RuntimeMethod* method);

// System.Void UnityEngine.XR.ARSubsystems.XRAnchorSubsystemDescriptor/Cinfo::set_id(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Cinfo_set_id_mCB169DF169C36D9D12651785DCBF71ABCC10FD9D_inline (Cinfo_tF42131D7F2B721976AAF20DD0240D9C46397F7F7 * __this, String_t* ___value0, const RuntimeMethod* method);
// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t * Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E (RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  ___handle0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.XRAnchorSubsystemDescriptor/Cinfo::set_providerType(System.Type)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Cinfo_set_providerType_m9E012FF4CD325826F838F663BAEE045C452A3C26_inline (Cinfo_tF42131D7F2B721976AAF20DD0240D9C46397F7F7 * __this, Type_t * ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.XRAnchorSubsystemDescriptor/Cinfo::set_subsystemTypeOverride(System.Type)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Cinfo_set_subsystemTypeOverride_mC525A48B08F8F826275950FFB61C780C4AEA6A6B_inline (Cinfo_tF42131D7F2B721976AAF20DD0240D9C46397F7F7 * __this, Type_t * ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.XRAnchorSubsystemDescriptor/Cinfo::set_supportsTrackableAttachments(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Cinfo_set_supportsTrackableAttachments_m0B0516A50FFA22C3F60483E3498DC6BB1D460995_inline (Cinfo_tF42131D7F2B721976AAF20DD0240D9C46397F7F7 * __this, bool ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.XRAnchorSubsystemDescriptor::Create(UnityEngine.XR.ARSubsystems.XRAnchorSubsystemDescriptor/Cinfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRAnchorSubsystemDescriptor_Create_m32C16A0DDC60ED2D374EFB884CF807E62B37C0A8 (Cinfo_tF42131D7F2B721976AAF20DD0240D9C46397F7F7  ___cinfo0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.XRAnchorSubsystem::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRAnchorSubsystem__ctor_mB5F70C2E39B5EA531C05244611590F400365265A (XRAnchorSubsystem_t625D9B76C590AB601CF85525DB9396BE84425AA7 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.ARKit.Api::AtLeast11_0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Api_AtLeast11_0_m8F8F08B2547F4D98BD2665B403F20F9F95ACA48F (const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.XRCameraSubsystemCinfo::set_id(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void XRCameraSubsystemCinfo_set_id_m768994793A205C7D5CE603B354D350A34D47720D_inline (XRCameraSubsystemCinfo_tFC7E8E15AD29D15868FBCE758A26ADCB5E9A5096 * __this, String_t* ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.XRCameraSubsystemCinfo::set_providerType(System.Type)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void XRCameraSubsystemCinfo_set_providerType_m78F56C5CEF9FF62F60DE6073B8AD0FB0AFD00730_inline (XRCameraSubsystemCinfo_tFC7E8E15AD29D15868FBCE758A26ADCB5E9A5096 * __this, Type_t * ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.XRCameraSubsystemCinfo::set_subsystemTypeOverride(System.Type)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void XRCameraSubsystemCinfo_set_subsystemTypeOverride_mD4D22BB1EC102CA40AF084B06DA3C957139EF2D4_inline (XRCameraSubsystemCinfo_tFC7E8E15AD29D15868FBCE758A26ADCB5E9A5096 * __this, Type_t * ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.XRCameraSubsystemCinfo::set_supportsAverageBrightness(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void XRCameraSubsystemCinfo_set_supportsAverageBrightness_mC20A88BD3C8D137A1F34888C64DC5FFF37787759_inline (XRCameraSubsystemCinfo_tFC7E8E15AD29D15868FBCE758A26ADCB5E9A5096 * __this, bool ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.XRCameraSubsystemCinfo::set_supportsAverageColorTemperature(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void XRCameraSubsystemCinfo_set_supportsAverageColorTemperature_m77727C8CBAB59D0D078B0A634EB0A56F1BF368E4_inline (XRCameraSubsystemCinfo_tFC7E8E15AD29D15868FBCE758A26ADCB5E9A5096 * __this, bool ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.XRCameraSubsystemCinfo::set_supportsColorCorrection(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void XRCameraSubsystemCinfo_set_supportsColorCorrection_m1CBB9181A21D2A964705AD5E22F78735DCFE2C01_inline (XRCameraSubsystemCinfo_tFC7E8E15AD29D15868FBCE758A26ADCB5E9A5096 * __this, bool ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.XRCameraSubsystemCinfo::set_supportsDisplayMatrix(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void XRCameraSubsystemCinfo_set_supportsDisplayMatrix_m2E11C0B7442273252613BDB41BB8B6F02698FBEA_inline (XRCameraSubsystemCinfo_tFC7E8E15AD29D15868FBCE758A26ADCB5E9A5096 * __this, bool ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.XRCameraSubsystemCinfo::set_supportsProjectionMatrix(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void XRCameraSubsystemCinfo_set_supportsProjectionMatrix_mFC886F8859FDF308D7980935474AA0E66ECF66B4_inline (XRCameraSubsystemCinfo_tFC7E8E15AD29D15868FBCE758A26ADCB5E9A5096 * __this, bool ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.XRCameraSubsystemCinfo::set_supportsTimestamp(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void XRCameraSubsystemCinfo_set_supportsTimestamp_mAA6157EC368F6358F155571E257A578729D368D4_inline (XRCameraSubsystemCinfo_tFC7E8E15AD29D15868FBCE758A26ADCB5E9A5096 * __this, bool ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.XRCameraSubsystemCinfo::set_supportsCameraConfigurations(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void XRCameraSubsystemCinfo_set_supportsCameraConfigurations_mD0F431DDAB4F82DDC6E35AB7583572D25244E0F0_inline (XRCameraSubsystemCinfo_tFC7E8E15AD29D15868FBCE758A26ADCB5E9A5096 * __this, bool ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.XRCameraSubsystemCinfo::set_supportsCameraImage(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void XRCameraSubsystemCinfo_set_supportsCameraImage_m2140EBB7ACEA9B1634F56DE2DCB85F26CB8C4D7D_inline (XRCameraSubsystemCinfo_tFC7E8E15AD29D15868FBCE758A26ADCB5E9A5096 * __this, bool ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.XRCameraSubsystemCinfo::set_supportsAverageIntensityInLumens(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void XRCameraSubsystemCinfo_set_supportsAverageIntensityInLumens_m49462C178EF35B3E688EE6711FD3E41E9C1976AB_inline (XRCameraSubsystemCinfo_tFC7E8E15AD29D15868FBCE758A26ADCB5E9A5096 * __this, bool ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.XRCameraSubsystemCinfo::set_supportsFocusModes(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void XRCameraSubsystemCinfo_set_supportsFocusModes_m2F70E7EFC54E2F930DEA28DC4922125E01FE3026_inline (XRCameraSubsystemCinfo_tFC7E8E15AD29D15868FBCE758A26ADCB5E9A5096 * __this, bool ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.XRCameraSubsystemCinfo::set_supportsFaceTrackingAmbientIntensityLightEstimation(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void XRCameraSubsystemCinfo_set_supportsFaceTrackingAmbientIntensityLightEstimation_m93740733F66607C53F3928946A79CE732EAF9EF9_inline (XRCameraSubsystemCinfo_tFC7E8E15AD29D15868FBCE758A26ADCB5E9A5096 * __this, bool ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.XRCameraSubsystemCinfo::set_supportsFaceTrackingHDRLightEstimation(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void XRCameraSubsystemCinfo_set_supportsFaceTrackingHDRLightEstimation_mD76A9A9A127118388FBD2E971246303BB2BE0F0C_inline (XRCameraSubsystemCinfo_tFC7E8E15AD29D15868FBCE758A26ADCB5E9A5096 * __this, bool ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.XRCameraSubsystemCinfo::set_supportsWorldTrackingAmbientIntensityLightEstimation(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void XRCameraSubsystemCinfo_set_supportsWorldTrackingAmbientIntensityLightEstimation_mE9B47A05DA11B6C6FFCB6FFED773ADB464130C5B_inline (XRCameraSubsystemCinfo_tFC7E8E15AD29D15868FBCE758A26ADCB5E9A5096 * __this, bool ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.XRCameraSubsystemCinfo::set_supportsWorldTrackingHDRLightEstimation(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void XRCameraSubsystemCinfo_set_supportsWorldTrackingHDRLightEstimation_m92AC9270D4D5FA4C61ED353406511B3877E5D9D4_inline (XRCameraSubsystemCinfo_tFC7E8E15AD29D15868FBCE758A26ADCB5E9A5096 * __this, bool ___value0, const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.ARKit.Api::AtLeast13_0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Api_AtLeast13_0_m360C671110F052FFD92FF0FC1A18BBDBF8D1576E (const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.XRCameraSubsystemCinfo::set_supportsCameraGrain(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void XRCameraSubsystemCinfo_set_supportsCameraGrain_m8BF26C263FED0D5106C436091BD8C25BFF8FD755_inline (XRCameraSubsystemCinfo_tFC7E8E15AD29D15868FBCE758A26ADCB5E9A5096 * __this, bool ___value0, const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.ARSubsystems.XRCameraSubsystem::Register(UnityEngine.XR.ARSubsystems.XRCameraSubsystemCinfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRCameraSubsystem_Register_m8E9CD378020A98CC1728A5C0A3324D25439921F4 (XRCameraSubsystemCinfo_tFC7E8E15AD29D15868FBCE758A26ADCB5E9A5096  ___cameraSubsystemParams0, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::LogErrorFormat(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogErrorFormat_mDBF43684A22EAAB187285C9B4174C9555DB11E83 (String_t* ___format0, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___args1, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.XRCameraSubsystem::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRCameraSubsystem__ctor_m9DB793A0291AEB063BE13955137FCF52B8A6E222 (XRCameraSubsystem_t3B32F6EA8A2E4D23AF240B5D21C34759D2613AC9 * __this, const RuntimeMethod* method);
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
// System.Void UnityEngine.XR.ARKit.ARKitCpuImageApi/Native::DisposeImage(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Native_DisposeImage_mF9DCD764FDD0B24A9FF7019AEBBA12EDF1EF28A5 (int32_t ___nativeHandle0, const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.ARKit.ARKitCpuImageApi/Native::TryAcquireLatestImage(UnityEngine.XR.ARKit.ARKitCpuImageApi/ImageType,UnityEngine.XR.ARSubsystems.XRCpuImage/Cinfo&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Native_TryAcquireLatestImage_mCCB4F92708AFADE4D71E26B87A57DC0BD8569487 (int32_t ___imageType0, Cinfo_t4E32E30AF6973611F1DD0F47FC041ED3A8775DA6 * ___cinfo1, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.XRCpuImage/Api::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Api__ctor_mEC96F88C341E160F9DDE41F5FA275DFAFF8522BA (Api_t7C92F00C6416A2C636A44AAC833C3773C567DC3E * __this, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARKit.ARKitCpuImageApi::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARKitCpuImageApi__ctor_mF5D85DE3D54CF57425137A6940450F57A3C3C553 (ARKitCpuImageApi_tD94B983FBF13116F7497F2089555084CCAC47D59 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.HashSet`1<UnityEngine.TextureFormat>::.ctor()
inline void HashSet_1__ctor_m42658446DE9E2709FD2DAF4F47CE5FC2A42351CD (HashSet_1_t7981318DC35BC53AD64634B2D643DD6055A39054 * __this, const RuntimeMethod* method)
{
	((  void (*) (HashSet_1_t7981318DC35BC53AD64634B2D643DD6055A39054 *, const RuntimeMethod*))HashSet_1__ctor_mA1FA65D2BDDB74D6F5325CA4930F68574451ABDB_gshared)(__this, method);
}
// System.Boolean System.Collections.Generic.HashSet`1<UnityEngine.TextureFormat>::Add(!0)
inline bool HashSet_1_Add_mF5186C7EFED02C844FC23546EFB8A3CB5B1E62CA (HashSet_1_t7981318DC35BC53AD64634B2D643DD6055A39054 * __this, int32_t ___item0, const RuntimeMethod* method)
{
	return ((  bool (*) (HashSet_1_t7981318DC35BC53AD64634B2D643DD6055A39054 *, int32_t, const RuntimeMethod*))HashSet_1_Add_mF0E415613429EC5A13A04C9CBDD519C91B56C235_gshared)(__this, ___item0, method);
}
// System.Boolean UnityEngine.XR.ARKit.Api::AtLeast12_0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Api_AtLeast12_0_mAAFC00E0EDE398EB11BDD874936E970CC4D78C1C (const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.XREnvironmentProbeSubsystemCinfo::set_id(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void XREnvironmentProbeSubsystemCinfo_set_id_m5C48BD3E879410D5C622BE7DC74D5C798E151731_inline (XREnvironmentProbeSubsystemCinfo_t6D9368EC95B6B356A67B7289270F27BB6A4440B2 * __this, String_t* ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.XREnvironmentProbeSubsystemCinfo::set_providerType(System.Type)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void XREnvironmentProbeSubsystemCinfo_set_providerType_m70C42D1F210DE19AB5E7D82F2D0BDB467E94FC2F_inline (XREnvironmentProbeSubsystemCinfo_t6D9368EC95B6B356A67B7289270F27BB6A4440B2 * __this, Type_t * ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.XREnvironmentProbeSubsystemCinfo::set_subsystemTypeOverride(System.Type)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void XREnvironmentProbeSubsystemCinfo_set_subsystemTypeOverride_mB35BB7FC1C0C42E0A7773365C147F539E7AC27EE_inline (XREnvironmentProbeSubsystemCinfo_t6D9368EC95B6B356A67B7289270F27BB6A4440B2 * __this, Type_t * ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.XREnvironmentProbeSubsystemCinfo::set_supportsManualPlacement(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void XREnvironmentProbeSubsystemCinfo_set_supportsManualPlacement_m2D1156DE760E47CBDDC345AD5CAE5D23AC23E524_inline (XREnvironmentProbeSubsystemCinfo_t6D9368EC95B6B356A67B7289270F27BB6A4440B2 * __this, bool ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.XREnvironmentProbeSubsystemCinfo::set_supportsRemovalOfManual(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void XREnvironmentProbeSubsystemCinfo_set_supportsRemovalOfManual_m01CE117FEA37EE9BEF79903754E396C35B859419_inline (XREnvironmentProbeSubsystemCinfo_t6D9368EC95B6B356A67B7289270F27BB6A4440B2 * __this, bool ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.XREnvironmentProbeSubsystemCinfo::set_supportsAutomaticPlacement(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void XREnvironmentProbeSubsystemCinfo_set_supportsAutomaticPlacement_mC4DBFBBD4DBB44D6B1154C4759A3175F9AC33D46_inline (XREnvironmentProbeSubsystemCinfo_t6D9368EC95B6B356A67B7289270F27BB6A4440B2 * __this, bool ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.XREnvironmentProbeSubsystemCinfo::set_supportsRemovalOfAutomatic(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void XREnvironmentProbeSubsystemCinfo_set_supportsRemovalOfAutomatic_m6FCC1E3ACDC01E4447E385A1B89C96DEE16B7EF2_inline (XREnvironmentProbeSubsystemCinfo_t6D9368EC95B6B356A67B7289270F27BB6A4440B2 * __this, bool ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.XREnvironmentProbeSubsystemCinfo::set_supportsEnvironmentTexture(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void XREnvironmentProbeSubsystemCinfo_set_supportsEnvironmentTexture_mE30B73C6AC37C6DF8F5B7DBDBC90A975A498D3E4_inline (XREnvironmentProbeSubsystemCinfo_t6D9368EC95B6B356A67B7289270F27BB6A4440B2 * __this, bool ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.XREnvironmentProbeSubsystemCinfo::set_supportsEnvironmentTextureHDR(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void XREnvironmentProbeSubsystemCinfo_set_supportsEnvironmentTextureHDR_mA465A23A4DC052895F8F634892B7C8E3A49F4777_inline (XREnvironmentProbeSubsystemCinfo_t6D9368EC95B6B356A67B7289270F27BB6A4440B2 * __this, bool ___value0, const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.ARSubsystems.XREnvironmentProbeSubsystem::Register(UnityEngine.XR.ARSubsystems.XREnvironmentProbeSubsystemCinfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XREnvironmentProbeSubsystem_Register_m20EFD30E3B31DD3ED37EA42B6E465AFAE132EA37 (XREnvironmentProbeSubsystemCinfo_t6D9368EC95B6B356A67B7289270F27BB6A4440B2  ___environmentProbeSubsystemCinfo0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.XREnvironmentProbeSubsystem::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XREnvironmentProbeSubsystem__ctor_m72F971761AF7B66CBABFF9ABC8468A52406001A2 (XREnvironmentProbeSubsystem_t0C60258F565400E7C5AF0E0B7FA933F2BCF83CB6 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.XRHumanBodySubsystemCinfo::set_id(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void XRHumanBodySubsystemCinfo_set_id_m379B96A2CE563FFD6CAC41112068975C8875B3A7_inline (XRHumanBodySubsystemCinfo_tAFFD9EF9197B51AA2EAC628F54C90C842B7E54CC * __this, String_t* ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.XRHumanBodySubsystemCinfo::set_providerType(System.Type)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void XRHumanBodySubsystemCinfo_set_providerType_mA34C98EF6EDDFADFF83C4062C0AF33F3C7BA61A5_inline (XRHumanBodySubsystemCinfo_tAFFD9EF9197B51AA2EAC628F54C90C842B7E54CC * __this, Type_t * ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.XRHumanBodySubsystemCinfo::set_subsystemTypeOverride(System.Type)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void XRHumanBodySubsystemCinfo_set_subsystemTypeOverride_m73A633BECC2393CEB62B95FCF9CD7B32BFDB19FF_inline (XRHumanBodySubsystemCinfo_tAFFD9EF9197B51AA2EAC628F54C90C842B7E54CC * __this, Type_t * ___value0, const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.ARKit.ARKitHumanBodySubsystem/NativeApi::UnityARKit_HumanBodyProvider_DoesSupportBodyPose2DEstimation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NativeApi_UnityARKit_HumanBodyProvider_DoesSupportBodyPose2DEstimation_m3F55EB9C8A46785373DA478B65241314E212465E (const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.XRHumanBodySubsystemCinfo::set_supportsHumanBody2D(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void XRHumanBodySubsystemCinfo_set_supportsHumanBody2D_m33B2A01C8E5F61DFE604BDCD2D438EC0B3C45551_inline (XRHumanBodySubsystemCinfo_tAFFD9EF9197B51AA2EAC628F54C90C842B7E54CC * __this, bool ___value0, const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.ARKit.ARKitHumanBodySubsystem/NativeApi::UnityARKit_HumanBodyProvider_DoesSupportBodyPose3DEstimation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NativeApi_UnityARKit_HumanBodyProvider_DoesSupportBodyPose3DEstimation_m3F72467EA9E6D4086407310A05699B99EBD27CED (const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.XRHumanBodySubsystemCinfo::set_supportsHumanBody3D(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void XRHumanBodySubsystemCinfo_set_supportsHumanBody3D_mE30720F10B501314868ABDBE2EDCE11D0A333D24_inline (XRHumanBodySubsystemCinfo_tAFFD9EF9197B51AA2EAC628F54C90C842B7E54CC * __this, bool ___value0, const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.ARKit.ARKitHumanBodySubsystem/NativeApi::UnityARKit_HumanBodyProvider_DoesSupportBodyPose3DScaleEstimation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NativeApi_UnityARKit_HumanBodyProvider_DoesSupportBodyPose3DScaleEstimation_m6664F1CBDA0B428D4DFB10284C1289CB1C025FE3 (const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.XRHumanBodySubsystemCinfo::set_supportsHumanBody3DScaleEstimation(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void XRHumanBodySubsystemCinfo_set_supportsHumanBody3DScaleEstimation_m72411E882EB28AB5BD33F4D266918FA3DB355782_inline (XRHumanBodySubsystemCinfo_tAFFD9EF9197B51AA2EAC628F54C90C842B7E54CC * __this, bool ___value0, const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.ARSubsystems.XRHumanBodySubsystem::Register(UnityEngine.XR.ARSubsystems.XRHumanBodySubsystemCinfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRHumanBodySubsystem_Register_m6BB9F0962D03E5A76F3D7434D1F4161A51E7485B (XRHumanBodySubsystemCinfo_tAFFD9EF9197B51AA2EAC628F54C90C842B7E54CC  ___humanBodySubsystemCinfo0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.XRHumanBodySubsystem::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRHumanBodySubsystem__ctor_mF3C86058EA4CFF10DFE59744ACC2DB437B3F8E84 (XRHumanBodySubsystem_t71FBF94503DCE781657FA4F362464EA389CD9F2B * __this, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.RuntimeHelpers::InitializeArray(System.Array,System.RuntimeFieldHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RuntimeHelpers_InitializeArray_mE27238308FED781F2D6A719F0903F2E1311B058F (RuntimeArray * ___array0, RuntimeFieldHandle_t7BE65FC857501059EBAC9772C93B02CD413D9C96  ___fldHandle1, const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.ARKit.Api::AtLeast11_3()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Api_AtLeast11_3_m39519EDB5753578410DF3E5E6FB01560F74CCBA5 (const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.XRImageTrackingSubsystemDescriptor/Cinfo::set_id(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Cinfo_set_id_m57970CF355AB638BAD860B9673F0E76B42126C1A_inline (Cinfo_tED92D7CBD16BE657927A6B7DB64A22DA21EB7D32 * __this, String_t* ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.XRImageTrackingSubsystemDescriptor/Cinfo::set_providerType(System.Type)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Cinfo_set_providerType_mCACA6EC48AB4B305E1515A312B32DC196AD9B92C_inline (Cinfo_tED92D7CBD16BE657927A6B7DB64A22DA21EB7D32 * __this, Type_t * ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.XRImageTrackingSubsystemDescriptor/Cinfo::set_subsystemTypeOverride(System.Type)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Cinfo_set_subsystemTypeOverride_m167DE9461D1FE4E4D8AB0EE25A7A4B0A947151D8_inline (Cinfo_tED92D7CBD16BE657927A6B7DB64A22DA21EB7D32 * __this, Type_t * ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.XRImageTrackingSubsystemDescriptor/Cinfo::set_supportsMovingImages(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Cinfo_set_supportsMovingImages_m04BB57385FC0A2025414437DB1BEFBE97372E579_inline (Cinfo_tED92D7CBD16BE657927A6B7DB64A22DA21EB7D32 * __this, bool ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.XRImageTrackingSubsystemDescriptor/Cinfo::set_supportsMutableLibrary(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Cinfo_set_supportsMutableLibrary_m434D9A05D0025989AA711BA50139FD348D127661_inline (Cinfo_tED92D7CBD16BE657927A6B7DB64A22DA21EB7D32 * __this, bool ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.XRImageTrackingSubsystemDescriptor/Cinfo::set_requiresPhysicalImageDimensions(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Cinfo_set_requiresPhysicalImageDimensions_mC794914720C62ACB74173F165B3015ED9B5CA2A6_inline (Cinfo_tED92D7CBD16BE657927A6B7DB64A22DA21EB7D32 * __this, bool ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.XRImageTrackingSubsystemDescriptor::Create(UnityEngine.XR.ARSubsystems.XRImageTrackingSubsystemDescriptor/Cinfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRImageTrackingSubsystemDescriptor_Create_m3B9A00008CACA91AEC367F5D5EC19E57EA3D22A1 (Cinfo_tED92D7CBD16BE657927A6B7DB64A22DA21EB7D32  ___cinfo0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.XRImageTrackingSubsystem::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRImageTrackingSubsystem__ctor_m411C7B39B354BFB6468A5450B91D63A46CAC3A52 (XRImageTrackingSubsystem_tBC68AD21C11D8D67F3343844E129DF505FF705CE * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.ARKit.ARKitOcclusionSubsystem/NativeApi::UnityARKit_OcclusionProvider_DoesSupportBodySegmentationStencil()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NativeApi_UnityARKit_OcclusionProvider_DoesSupportBodySegmentationStencil_m64B90F3C9ACFB794BA2081C0EEFEB6984E074C5C (const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.ARKit.ARKitOcclusionSubsystem/NativeApi::UnityARKit_OcclusionProvider_DoesSupportBodySegmentationDepth()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NativeApi_UnityARKit_OcclusionProvider_DoesSupportBodySegmentationDepth_m8723F4AA9E21F51DC8D16CA860A5CC007805CC8D (const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.XROcclusionSubsystemCinfo::set_id(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void XROcclusionSubsystemCinfo_set_id_m19076B4B5E6D6AA32BE751C1F2611CB7C3C152A0_inline (XROcclusionSubsystemCinfo_tA29FDBA57EBA835927124FC18780DDD9CC4D84FD * __this, String_t* ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.XROcclusionSubsystemCinfo::set_providerType(System.Type)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void XROcclusionSubsystemCinfo_set_providerType_mA9E2685FC29652BBF41CD7398D8A434B72B68556_inline (XROcclusionSubsystemCinfo_tA29FDBA57EBA835927124FC18780DDD9CC4D84FD * __this, Type_t * ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.XROcclusionSubsystemCinfo::set_subsystemTypeOverride(System.Type)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void XROcclusionSubsystemCinfo_set_subsystemTypeOverride_mC5D9DB3F2CDC007F826FC2AB790F1622DFBA0F63_inline (XROcclusionSubsystemCinfo_tA29FDBA57EBA835927124FC18780DDD9CC4D84FD * __this, Type_t * ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.XROcclusionSubsystemCinfo::set_supportsHumanSegmentationStencilImage(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void XROcclusionSubsystemCinfo_set_supportsHumanSegmentationStencilImage_mEC6C58C95DF515008316ED9A33A37ABBFBFD88BD_inline (XROcclusionSubsystemCinfo_tA29FDBA57EBA835927124FC18780DDD9CC4D84FD * __this, bool ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.XROcclusionSubsystemCinfo::set_supportsHumanSegmentationDepthImage(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void XROcclusionSubsystemCinfo_set_supportsHumanSegmentationDepthImage_mF08FD3863AEB93D47CCF50BD197780D2AB6F0705_inline (XROcclusionSubsystemCinfo_tA29FDBA57EBA835927124FC18780DDD9CC4D84FD * __this, bool ___value0, const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.ARSubsystems.XROcclusionSubsystem::Register(UnityEngine.XR.ARSubsystems.XROcclusionSubsystemCinfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XROcclusionSubsystem_Register_mC754EFF602648A08D654B4CAFF0906CBFEFB9EB0 (XROcclusionSubsystemCinfo_tA29FDBA57EBA835927124FC18780DDD9CC4D84FD  ___occlusionSubsystemCinfo0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.XROcclusionSubsystem::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XROcclusionSubsystem__ctor_m9EA3B861371659A5607CA2D36A77EAF9023696DD (XROcclusionSubsystem_t7546B929F9B5B6EB13B975FE4DB1F4099EE533B8 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.XRParticipantSubsystemDescriptor::Register<UnityEngine.XR.ARKit.ARKitParticipantSubsystem/ARKitProvider,UnityEngine.XR.ARKit.ARKitParticipantSubsystem>(System.String,UnityEngine.XR.ARSubsystems.XRParticipantSubsystemDescriptor/Capabilities)
inline void XRParticipantSubsystemDescriptor_Register_TisARKitProvider_t9908B32D1E5398BA2FD0D825E9343F8CA0277B4C_TisARKitParticipantSubsystem_tFBFB76108F5069693F4F40F8DAA4B6A907A709C3_m48662D8FE9C230C66490A64B7F56FA91D20DAA48 (String_t* ___subsystemId0, int32_t ___capabilities1, const RuntimeMethod* method)
{
	((  void (*) (String_t*, int32_t, const RuntimeMethod*))XRParticipantSubsystemDescriptor_Register_TisRuntimeObject_TisRuntimeObject_m77779CD44165EB52B7D758C6A46D010D3BCCB1FA_gshared)(___subsystemId0, ___capabilities1, method);
}
// System.Void UnityEngine.XR.ARSubsystems.XRParticipantSubsystem::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRParticipantSubsystem__ctor_mC7EB236E3A4BBC45C055B94C26493FBB19DF4056 (XRParticipantSubsystem_t7F710E46FC5A17967E7CAE126DE9443C752C36FC * __this, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.XRRaycastSubsystemDescriptor/Cinfo::set_id(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Cinfo_set_id_m0CB4DA3E552ED7940FBA88D8EE3BB6379EA255D6_inline (Cinfo_tAC330BB49E2D0C7E18C66AB4018927A6EC856E01 * __this, String_t* ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.XRRaycastSubsystemDescriptor/Cinfo::set_providerType(System.Type)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Cinfo_set_providerType_m20992869A706183D7180A2030C84B5445DCF0BE3_inline (Cinfo_tAC330BB49E2D0C7E18C66AB4018927A6EC856E01 * __this, Type_t * ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.XRRaycastSubsystemDescriptor/Cinfo::set_subsystemTypeOverride(System.Type)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Cinfo_set_subsystemTypeOverride_mD5425E55455A21B7361B847FD6B78998AC70CD5B_inline (Cinfo_tAC330BB49E2D0C7E18C66AB4018927A6EC856E01 * __this, Type_t * ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.XRRaycastSubsystemDescriptor/Cinfo::set_supportsViewportBasedRaycast(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Cinfo_set_supportsViewportBasedRaycast_mCF77DEFDDC3931682A33A063DF2F25FFBF07B807_inline (Cinfo_tAC330BB49E2D0C7E18C66AB4018927A6EC856E01 * __this, bool ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.XRRaycastSubsystemDescriptor/Cinfo::set_supportsWorldBasedRaycast(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Cinfo_set_supportsWorldBasedRaycast_m74BF70E612BCAFAD380C108700905E5B8C5425FA_inline (Cinfo_tAC330BB49E2D0C7E18C66AB4018927A6EC856E01 * __this, bool ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.XRRaycastSubsystemDescriptor/Cinfo::set_supportedTrackableTypes(UnityEngine.XR.ARSubsystems.TrackableType)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Cinfo_set_supportedTrackableTypes_mABC320F641164FC1DB2AB9DB3F1E075B6235A785_inline (Cinfo_tAC330BB49E2D0C7E18C66AB4018927A6EC856E01 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.XRRaycastSubsystemDescriptor/Cinfo::set_supportsTrackedRaycasts(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Cinfo_set_supportsTrackedRaycasts_mD7575B5CAA4BB3652786E2AE2C1B94CF8BEB423C_inline (Cinfo_tAC330BB49E2D0C7E18C66AB4018927A6EC856E01 * __this, bool ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.XRRaycastSubsystemDescriptor::RegisterDescriptor(UnityEngine.XR.ARSubsystems.XRRaycastSubsystemDescriptor/Cinfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRRaycastSubsystemDescriptor_RegisterDescriptor_mD9A0FD5846AA09D7D7D32A1093566607D0082ABA (Cinfo_tAC330BB49E2D0C7E18C66AB4018927A6EC856E01  ___cinfo0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.XRRaycastSubsystem::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRRaycastSubsystem__ctor_m73E44C9109F84F8DFB603F6E480200EF0A62A15B (XRRaycastSubsystem_t62FDAC9AA1BD44C4557AEE3FEF3D2FA24C71B6B8 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARKit.ARKitSessionSubsystem::OnAsyncConversionComplete(UnityEngine.XR.ARKit.ARWorldMapRequestStatus,System.Int32,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARKitSessionSubsystem_OnAsyncConversionComplete_m83F502F9F96A05BA35A9FDE4C56FDB7A7843942F (int32_t ___status0, int32_t ___worldMapId1, intptr_t ___context2, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARKit.ARKitSessionSubsystem/NativeApi/OnAsyncConversionCompleteDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnAsyncConversionCompleteDelegate__ctor_m7CA5713A91DE5942CF727FBB3C771DDE3D563DCD (OnAsyncConversionCompleteDelegate_tFE6205610918E7A87E7867F879A863FD2FE8ECDF * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Runtime.InteropServices.GCHandle System.Runtime.InteropServices.GCHandle::FromIntPtr(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603  GCHandle_FromIntPtr_m033776D73699CAC85FAE41FD5A52895EFB9E3AB8 (intptr_t ___value0, const RuntimeMethod* method);
// System.Object System.Runtime.InteropServices.GCHandle::get_Target()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * GCHandle_get_Target_m6C296AD6520ECDAFC9498E9387677F522871F883 (GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.ARKit.ARWorldMapRequestStatusExtensions::IsError(UnityEngine.XR.ARKit.ARWorldMapRequestStatus)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ARWorldMapRequestStatusExtensions_IsError_m5A4B5A00C002887CEB0596D920DDC272513A696E (int32_t ___status0, const RuntimeMethod* method);
// System.Void System.Action`2<UnityEngine.XR.ARKit.ARWorldMapRequestStatus,UnityEngine.XR.ARKit.ARWorldMap>::Invoke(!0,!1)
inline void Action_2_Invoke_m062C6716117B97F904C309212B9BF73078717C7E (Action_2_t6F4217AA55351EE6822133CE02984E6B59F83112 * __this, int32_t ___arg10, ARWorldMap_t90151C78B15487234BE2E76D169DA191819704A2  ___arg21, const RuntimeMethod* method)
{
	((  void (*) (Action_2_t6F4217AA55351EE6822133CE02984E6B59F83112 *, int32_t, ARWorldMap_t90151C78B15487234BE2E76D169DA191819704A2 , const RuntimeMethod*))Action_2_Invoke_m33B0110C8FDDB4C5DE28702625FA53D2CC43EB53_gshared)(__this, ___arg10, ___arg21, method);
}
// System.Void UnityEngine.XR.ARKit.ARWorldMap::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARWorldMap__ctor_m43EA558358719448EB3CA73E007EE77EBEAF6817 (ARWorldMap_t90151C78B15487234BE2E76D169DA191819704A2 * __this, int32_t ___nativeHandle0, const RuntimeMethod* method);
// System.Void System.Runtime.InteropServices.GCHandle::Free()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GCHandle_Free_mB4E9415544FC9F0075C02AB17E270E49AF006025 (GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARKit.Api::EnsureRootViewIsSetup()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Api_EnsureRootViewIsSetup_mB89CE58DDCE3C6F90077A56AA7C907CA377FD22D (const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor/Cinfo::set_id(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Cinfo_set_id_m6A2CAB13FAD54AB05458DC5DE1FAB5C651E9D656_inline (Cinfo_t2842A97DA95F40ECADDCA24A291B6114A3A5F71A * __this, String_t* ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor/Cinfo::set_providerType(System.Type)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Cinfo_set_providerType_m2BCF5FEFC25D812C3E7F00725B49AE02540B2F8E_inline (Cinfo_t2842A97DA95F40ECADDCA24A291B6114A3A5F71A * __this, Type_t * ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor/Cinfo::set_subsystemTypeOverride(System.Type)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Cinfo_set_subsystemTypeOverride_m30FDD93193E0D694ABB33E184552AAF1A8AA36E6_inline (Cinfo_t2842A97DA95F40ECADDCA24A291B6114A3A5F71A * __this, Type_t * ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor/Cinfo::set_supportsInstall(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Cinfo_set_supportsInstall_m05EE61C58E505A8F20DEA68862395341F1DAD3FD_inline (Cinfo_t2842A97DA95F40ECADDCA24A291B6114A3A5F71A * __this, bool ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor/Cinfo::set_supportsMatchFrameRate(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Cinfo_set_supportsMatchFrameRate_m9CB328CEF43BCE3E59F26A97D32AEE1D201F8787_inline (Cinfo_t2842A97DA95F40ECADDCA24A291B6114A3A5F71A * __this, bool ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor::RegisterDescriptor(UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor/Cinfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRSessionSubsystemDescriptor_RegisterDescriptor_m60DE0DD6782289BAD4D67D15E2361D1B7B71C262 (Cinfo_t2842A97DA95F40ECADDCA24A291B6114A3A5F71A  ___cinfo0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.XRSessionSubsystem::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRSessionSubsystem__ctor_m8485F39F339764D3FCA4FD0E1D77ADE16CAE1676 (XRSessionSubsystem_t8AD3C01568AA19BF038D23A6031FF9814CAF93CD * __this, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.XRDepthSubsystemDescriptor/Cinfo::set_providerType(System.Type)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Cinfo_set_providerType_m79B371C14F188233806BAB677302143650CD9A29_inline (Cinfo_t37F91E88FCD8623834BE1898FC146620538C08B1 * __this, Type_t * ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.XRDepthSubsystemDescriptor/Cinfo::set_subsystemTypeOverride(System.Type)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Cinfo_set_subsystemTypeOverride_mEF323B6CBB63FB7E5ECB4A6849F06C57BFDF8120_inline (Cinfo_t37F91E88FCD8623834BE1898FC146620538C08B1 * __this, Type_t * ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.XRDepthSubsystemDescriptor/Cinfo::set_supportsFeaturePoints(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Cinfo_set_supportsFeaturePoints_mD44DBE0A79D63D3234369E573653A81DC7FB8E1D (Cinfo_t37F91E88FCD8623834BE1898FC146620538C08B1 * __this, bool ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.XRDepthSubsystemDescriptor/Cinfo::set_supportsConfidence(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Cinfo_set_supportsConfidence_m78F76CAAFD5D667ADBED1580E1F8A1286B59C46D (Cinfo_t37F91E88FCD8623834BE1898FC146620538C08B1 * __this, bool ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.XRDepthSubsystemDescriptor/Cinfo::set_supportsUniqueIds(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Cinfo_set_supportsUniqueIds_mFF68A678A13F7C1BD9E157690649255A27369514 (Cinfo_t37F91E88FCD8623834BE1898FC146620538C08B1 * __this, bool ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.XRDepthSubsystemDescriptor::RegisterDescriptor(UnityEngine.XR.ARSubsystems.XRDepthSubsystemDescriptor/Cinfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRDepthSubsystemDescriptor_RegisterDescriptor_mB5908D568E8943B143747EDA81FF550FE2BB3A33 (Cinfo_t37F91E88FCD8623834BE1898FC146620538C08B1  ___descriptorParams0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.XRDepthSubsystem::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRDepthSubsystem__ctor_mCD27ED98C0FCF9538A67023E02DDD4AFB3B04D86 (XRDepthSubsystem_t808E21F0192095B08FA03AC535314FB5EF3B7E28 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.XRObjectTrackingSubsystem::Register<UnityEngine.XR.ARKit.ARKitXRObjectTrackingSubsystem/ARKitProvider,UnityEngine.XR.ARKit.ARKitXRObjectTrackingSubsystem>(System.String,UnityEngine.XR.ARSubsystems.XRObjectTrackingSubsystemDescriptor/Capabilities)
inline void XRObjectTrackingSubsystem_Register_TisARKitProvider_tDDBF5C474A3543A0F5FA7FB07A058B223F6DA8EC_TisARKitXRObjectTrackingSubsystem_tB611337EA1668BBCB3A7123F14117CB536707A6D_mA3DD9643C5278A166FD6901EA76410470E237E4D (String_t* ___id0, Capabilities_tC6F329DD5C73C6B9E04BE77A3AE0E52390BD8685  ___capabilities1, const RuntimeMethod* method)
{
	((  void (*) (String_t*, Capabilities_tC6F329DD5C73C6B9E04BE77A3AE0E52390BD8685 , const RuntimeMethod*))XRObjectTrackingSubsystem_Register_TisRuntimeObject_TisRuntimeObject_mAD339CA933DF8B8D705E23C725E78FF7599EC36F_gshared)(___id0, ___capabilities1, method);
}
// System.Void UnityEngine.XR.ARSubsystems.XRObjectTrackingSubsystem::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRObjectTrackingSubsystem__ctor_m75C4A1A4820B9795DEF1CAED15ACC38796F76BDD (XRObjectTrackingSubsystem_t3F31F4C8BCA868FE69BD8EC75BA5A1116026C881 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.XRPlaneSubsystemDescriptor/Cinfo::set_id(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Cinfo_set_id_m940361693A3C925B2180733D87611B5FDF0357D7_inline (Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD * __this, String_t* ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.XRPlaneSubsystemDescriptor/Cinfo::set_providerType(System.Type)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Cinfo_set_providerType_m8B6A7EE025CCB9B5B5E26E6F4C779DFE09955744_inline (Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD * __this, Type_t * ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.XRPlaneSubsystemDescriptor/Cinfo::set_subsystemTypeOverride(System.Type)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Cinfo_set_subsystemTypeOverride_mBC4F1CC20B4DF3D551BAFC1C38245F457E262A58_inline (Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD * __this, Type_t * ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.XRPlaneSubsystemDescriptor/Cinfo::set_supportsHorizontalPlaneDetection(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Cinfo_set_supportsHorizontalPlaneDetection_mBC9B4572592B71328A96AF58DEB047528470C440_inline (Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD * __this, bool ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.XRPlaneSubsystemDescriptor/Cinfo::set_supportsVerticalPlaneDetection(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Cinfo_set_supportsVerticalPlaneDetection_mFF310EF7B9F8D9C9F9689CF9D1D2BEDDFF93F9F0_inline (Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD * __this, bool ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.XRPlaneSubsystemDescriptor/Cinfo::set_supportsArbitraryPlaneDetection(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Cinfo_set_supportsArbitraryPlaneDetection_m70B1D6D27946FB12BF0D3D3AF8C6DC8DC3F399B9_inline (Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD * __this, bool ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.XRPlaneSubsystemDescriptor/Cinfo::set_supportsBoundaryVertices(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Cinfo_set_supportsBoundaryVertices_mC6F86EB28D38CC483AD8F9FD161013BDE3F4AFEF_inline (Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD * __this, bool ___value0, const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.ARKit.ARKitXRPlaneSubsystem/NativeApi::UnityARKit_Planes_SupportsClassification()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NativeApi_UnityARKit_Planes_SupportsClassification_m038F0FACAABAF4489F01E9E52A5A632A33FF7B7E (const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.XRPlaneSubsystemDescriptor/Cinfo::set_supportsClassification(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Cinfo_set_supportsClassification_mA3B11D7CA4F960C89E729E5161AD7CC3211B933C_inline (Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD * __this, bool ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.XRPlaneSubsystemDescriptor::Create(UnityEngine.XR.ARSubsystems.XRPlaneSubsystemDescriptor/Cinfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRPlaneSubsystemDescriptor_Create_mB69A44F54AB64DF4361D3C16AE48C2F1B474EA32 (Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD  ___cinfo0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.XRPlaneSubsystem::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRPlaneSubsystem__ctor_mDD4F1B44F90E2F50D3C78601413F01D05990B20C (XRPlaneSubsystem_t7C76F9D2C993B0DC38F0A7CDCE745EA7C12417EE * __this, const RuntimeMethod* method);
// System.Int32 UnityEngine.XR.ARKit.ARWorldMap::get_nativeHandle()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ARWorldMap_get_nativeHandle_m26CA181591D8E7863F4274AF93319497EC8CC86F_inline (ARWorldMap_t90151C78B15487234BE2E76D169DA191819704A2 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARKit.Api::UnityARKit_disposeWorldMap(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Api_UnityARKit_disposeWorldMap_m7961172E9B6D535070D54E86C0ED0F6B12970847 (int32_t ___worldMapId0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARKit.ARWorldMap::set_nativeHandle(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ARWorldMap_set_nativeHandle_mEAB7C65A965E0F40860B613E3190B2E59FE4D083_inline (ARWorldMap_t90151C78B15487234BE2E76D169DA191819704A2 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARKit.ARWorldMap::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARWorldMap_Dispose_m9B50247399932A662994E8C25BEBE535DB7DC8B2 (ARWorldMap_t90151C78B15487234BE2E76D169DA191819704A2 * __this, const RuntimeMethod* method);
// System.Int32 System.Int32::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Int32_GetHashCode_mEDD3F492A5F7CF021125AE3F38E2B8F8743FC667 (int32_t* __this, const RuntimeMethod* method);
// System.Int32 UnityEngine.XR.ARKit.ARWorldMap::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ARWorldMap_GetHashCode_m539F3BE2588CF435F4A672BB8D38641B92619555 (ARWorldMap_t90151C78B15487234BE2E76D169DA191819704A2 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.ARKit.ARWorldMap::Equals(UnityEngine.XR.ARKit.ARWorldMap)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ARWorldMap_Equals_m99615F40202D61E0BFCB3E5609E454BB29DD0B86 (ARWorldMap_t90151C78B15487234BE2E76D169DA191819704A2 * __this, ARWorldMap_t90151C78B15487234BE2E76D169DA191819704A2  ___other0, const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.ARKit.ARWorldMap::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ARWorldMap_Equals_m594655912BCCCE5F6029540795777AD70FA25D58 (ARWorldMap_t90151C78B15487234BE2E76D169DA191819704A2 * __this, RuntimeObject * ___obj0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARKit.Api::UnityARKit_CFRelease(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Api_UnityARKit_CFRelease_m7C7E4145668373632B71D221A5FBE46D651EF671 (intptr_t ___ptr0, const RuntimeMethod* method);
// System.Void System.Attribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Attribute__ctor_m5C1862A7DFC2C25A4797A8C5F681FBB5CB53ECE1 (Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARKit.ManagedReferenceImage::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ManagedReferenceImage_Dispose_m51ED357BF8C931DDD82BDA2C487B909D90CEF881 (ManagedReferenceImage_t867FD513C8CBF1F9824DBFB215783BE8C33F0FA1 * __this, const RuntimeMethod* method);
// System.Int32 UnityEngine.XR.ARKit.NativeChanges::GetAddedLength(UnityEngine.XR.ARKit.NativeChanges)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeChanges_GetAddedLength_m178969F9DCD9B9A07EECAB7DCE1E51467A2C7DFF (NativeChanges_t2AB4CBD7DD7F23F421DFD0CE4D4CDB26402D6D76  ___self0, const RuntimeMethod* method);
// System.Int32 UnityEngine.XR.ARKit.NativeChanges::get_addedLength()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeChanges_get_addedLength_mD51DB306B9E731D637BC6146AC02F44E7092EA61 (NativeChanges_t2AB4CBD7DD7F23F421DFD0CE4D4CDB26402D6D76 * __this, const RuntimeMethod* method);
// System.Int32 UnityEngine.XR.ARKit.NativeChanges::GetUpdatedLength(UnityEngine.XR.ARKit.NativeChanges)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeChanges_GetUpdatedLength_m56285C6AE9E8D78238231EB029156C734E681D1D (NativeChanges_t2AB4CBD7DD7F23F421DFD0CE4D4CDB26402D6D76  ___self0, const RuntimeMethod* method);
// System.Int32 UnityEngine.XR.ARKit.NativeChanges::get_updatedLength()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeChanges_get_updatedLength_m26B6698778BE656EB28586EBA13D00936F2BEA9A (NativeChanges_t2AB4CBD7DD7F23F421DFD0CE4D4CDB26402D6D76 * __this, const RuntimeMethod* method);
// System.Int32 UnityEngine.XR.ARKit.NativeChanges::GetRemovedLength(UnityEngine.XR.ARKit.NativeChanges)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeChanges_GetRemovedLength_m56F8F6E5396DE527D059203FBF54B6A844F06F17 (NativeChanges_t2AB4CBD7DD7F23F421DFD0CE4D4CDB26402D6D76  ___self0, const RuntimeMethod* method);
// System.Int32 UnityEngine.XR.ARKit.NativeChanges::get_removedLength()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeChanges_get_removedLength_mD6BA6E4217D492D6FD7DF127166122A0D35E2989 (NativeChanges_t2AB4CBD7DD7F23F421DFD0CE4D4CDB26402D6D76 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARKit.Api::CFRelease(System.IntPtr&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Api_CFRelease_m6A7AAD46BF01508785DA9A9275F057D310468ECA (intptr_t* ___ptr0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARKit.NativeChanges::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeChanges_Dispose_m494F37A0E04A0110C5480CCFB401225F4DD66263 (NativeChanges_t2AB4CBD7DD7F23F421DFD0CE4D4CDB26402D6D76 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.ARKit.NativeChanges::Equals(UnityEngine.XR.ARKit.NativeChanges)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NativeChanges_Equals_m4522A3606B1A9F994F9C7F4E9A04F1E0C7C35E20 (NativeChanges_t2AB4CBD7DD7F23F421DFD0CE4D4CDB26402D6D76 * __this, NativeChanges_t2AB4CBD7DD7F23F421DFD0CE4D4CDB26402D6D76  ___other0, const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.ARKit.NativeChanges::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NativeChanges_Equals_mE0137E0E1EB130C19E2DBDED1F3D76B847645027 (NativeChanges_t2AB4CBD7DD7F23F421DFD0CE4D4CDB26402D6D76 * __this, RuntimeObject * ___obj0, const RuntimeMethod* method);
// System.Int32 System.IntPtr::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t IntPtr_GetHashCode_m55E65FB52EFE7C0EBC3C28E66A5D7542F3B1D35D (intptr_t* __this, const RuntimeMethod* method);
// System.Int32 UnityEngine.XR.ARKit.NativeChanges::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeChanges_GetHashCode_m0DC27513D96E9BD611BBEADDFE428A684C364976 (NativeChanges_t2AB4CBD7DD7F23F421DFD0CE4D4CDB26402D6D76 * __this, const RuntimeMethod* method);
// System.Boolean System.IntPtr::op_Equality(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool IntPtr_op_Equality_mD94F3FE43A65684EFF984A7B95E70D2520C0AC73 (intptr_t ___value10, intptr_t ___value21, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARKit.ARKitAnchorSubsystem/ARKitProvider::UnityARKit_refPoints_onStart()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARKitProvider_UnityARKit_refPoints_onStart_m3CBAA3F20990A8A850230AE925E6F6AF10997C3B (const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARKit.ARKitAnchorSubsystem/ARKitProvider::UnityARKit_refPoints_onStop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARKitProvider_UnityARKit_refPoints_onStop_m57B1A0BEB96ABCCF501CBBC1315EBC7D7B27CBEA (const RuntimeMethod* method);
// System.Void* UnityEngine.XR.ARKit.ARKitAnchorSubsystem/ARKitProvider::UnityARKit_refPoints_acquireChanges(System.Void*&,System.Int32&,System.Void*&,System.Int32&,System.Void*&,System.Int32&,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* ARKitProvider_UnityARKit_refPoints_acquireChanges_m5E42BE1BC93F2643DEDAAC2D288FDB038352B84B (void** ___addedPtr0, int32_t* ___addedCount1, void** ___updatedPtr2, int32_t* ___updatedCount3, void** ___removedPtr4, int32_t* ___removedCount5, int32_t* ___elementSize6, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRAnchor>::.ctor(System.Void*,System.Int32,System.Void*,System.Int32,System.Void*,System.Int32,!0,System.Int32,Unity.Collections.Allocator)
inline void TrackableChanges_1__ctor_mA73D215CA80356F8179EB02A8F9BBC14329AD7D4 (TrackableChanges_1_tF38314CFF715F232D6DA3415FD2F68CE504CFF9B * __this, void* ___addedPtr0, int32_t ___addedCount1, void* ___updatedPtr2, int32_t ___updatedCount3, void* ___removedPtr4, int32_t ___removedCount5, XRAnchor_t8E92DD70D9FA9B3ED2799305E05228184932099C  ___defaultT6, int32_t ___stride7, int32_t ___allocator8, const RuntimeMethod* method)
{
	((  void (*) (TrackableChanges_1_tF38314CFF715F232D6DA3415FD2F68CE504CFF9B *, void*, int32_t, void*, int32_t, void*, int32_t, XRAnchor_t8E92DD70D9FA9B3ED2799305E05228184932099C , int32_t, int32_t, const RuntimeMethod*))TrackableChanges_1__ctor_mA73D215CA80356F8179EB02A8F9BBC14329AD7D4_gshared)(__this, ___addedPtr0, ___addedCount1, ___updatedPtr2, ___updatedCount3, ___removedPtr4, ___removedCount5, ___defaultT6, ___stride7, ___allocator8, method);
}
// System.Void UnityEngine.XR.ARKit.ARKitAnchorSubsystem/ARKitProvider::UnityARKit_refPoints_releaseChanges(System.Void*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARKitProvider_UnityARKit_refPoints_releaseChanges_m65C9CF48FDB6095AEB02F2A6A8C7CFA8B7CED644 (void* ___changes0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.XRAnchorSubsystem/Provider::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Provider__ctor_mFE4941CFC3CA511BBD7C0A498BB2C74DE96FF498 (Provider_t9F286D20EB73EBBA4B6E7203C7A9051BE673C2E2 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.ARKit.ARKitCameraSubsystem/NativeApi::UnityARKit_Camera_IsCameraPermissionGranted()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NativeApi_UnityARKit_Camera_IsCameraPermissionGranted_mF6CDDCDD3C45DFAB0B13B25ADC329725F2175E79 (const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.XRCameraSubsystem/Provider::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Provider__ctor_mA61CB0610059584FC8190F2C54D845C7612D82BE (Provider_t55916B0D2766C320DCA36A0C870BA2FD80F8B6D1 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARKit.ARKitCameraSubsystem/NativeApi::UnityARKit_Camera_Construct(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeApi_UnityARKit_Camera_Construct_m85F5550F4DF7C866799A325444B1DA96A2F41265 (int32_t ___textureYPropertyNameId0, int32_t ___textureCbCrPropertyNameId1, const RuntimeMethod* method);
// System.String UnityEngine.XR.ARKit.ARKitCameraSubsystem::get_backgroundShaderName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ARKitCameraSubsystem_get_backgroundShaderName_m0856B4F3C1E036760386F1BED04D029698D0F94F (const RuntimeMethod* method);
// System.Void UnityEngine.Debug::LogError(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogError_m8850D65592770A364D494025FF3A73E8D4D70485 (RuntimeObject * ___message0, const RuntimeMethod* method);
// UnityEngine.Material UnityEngine.XR.ARSubsystems.XRCameraSubsystem/Provider::CreateCameraMaterial(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Material_t8927C00353A72755313F046D0CE85178AE8218EE * Provider_CreateCameraMaterial_mE1F6AD1B1D9F9BA80FE1B8DB3138262545FC018C (Provider_t55916B0D2766C320DCA36A0C870BA2FD80F8B6D1 * __this, String_t* ___cameraShaderName0, const RuntimeMethod* method);
// UnityEngine.XR.ARSubsystems.Feature UnityEngine.XR.ARKit.ARKitCameraSubsystem/NativeApi::UnityARKit_Camera_GetCurrentCamera()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t NativeApi_UnityARKit_Camera_GetCurrentCamera_mD4523891F66251548B2EA91873A6E33F73C8B390 (const RuntimeMethod* method);
// UnityEngine.XR.ARSubsystems.Feature UnityEngine.XR.ARKit.Api::GetRequestedFeatures()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t Api_GetRequestedFeatures_m31758CAAF7E8C545E0E99626EA2E993D2C398DDA (const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARKit.Api::SetFeatureRequested(UnityEngine.XR.ARSubsystems.Feature,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Api_SetFeatureRequested_m5F97A8E9C25203A781BCC2601D85A90D187546F2 (uint64_t ___feature0, bool ___enabled1, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARKit.ARKitCameraSubsystem/NativeApi::UnityARKit_Camera_Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeApi_UnityARKit_Camera_Start_m1DC45696F7FA84212AA4A3343FCC0D051B0A7BB3 (const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARKit.ARKitCameraSubsystem/NativeApi::UnityARKit_Camera_Stop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeApi_UnityARKit_Camera_Stop_mBC2C5BDFC53F5838382C83CD1BCE5594F5AFF787 (const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.ARKit.ARKitCameraSubsystem/NativeApi::UnityARKit_Camera_TryGetFrame(UnityEngine.XR.ARSubsystems.XRCameraParams,UnityEngine.XR.ARSubsystems.XRCameraFrame&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NativeApi_UnityARKit_Camera_TryGetFrame_m06408A0B449D7766A2BFC01295E856A5CCDE2462 (XRCameraParams_t9FCECBDAEFCC1084042B75393990959B28B64B18  ___cameraParams0, XRCameraFrame_t5FD7B7FC22B478AC6B00AD01A0AD6F2295EA1BA8 * ___cameraFrame1, const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.ARKit.ARKitCameraSubsystem/NativeApi::UnityARKit_Camera_GetAutoFocusEnabled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NativeApi_UnityARKit_Camera_GetAutoFocusEnabled_m8881BC22C92BBCD11E627535D9B5BD310A2D3104 (const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.ARSubsystems.FeatureExtensions::All(UnityEngine.XR.ARSubsystems.Feature,UnityEngine.XR.ARSubsystems.Feature)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool FeatureExtensions_All_mE045F59D960EB11FE1A7B31076D0132109B28160 (uint64_t ___self0, uint64_t ___features1, const RuntimeMethod* method);
// UnityEngine.XR.ARSubsystems.Feature UnityEngine.XR.ARKit.ARKitCameraSubsystem/NativeApi::GetCurrentLightEstimation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t NativeApi_GetCurrentLightEstimation_mBDCE98860E1DC9555997B2AE659EA3A2358C13D6 (const RuntimeMethod* method);
// UnityEngine.XR.ARSubsystems.Feature UnityEngine.XR.ARSubsystems.FeatureExtensions::Intersection(UnityEngine.XR.ARSubsystems.Feature,UnityEngine.XR.ARSubsystems.Feature)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t FeatureExtensions_Intersection_m2CA900F610313CDD88F981646EBE46B1AD8AC5E9 (uint64_t ___self0, uint64_t ___features1, const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.ARKit.ARKitCameraSubsystem/NativeApi::UnityARKit_Camera_TryGetIntrinsics(UnityEngine.XR.ARSubsystems.XRCameraIntrinsics&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NativeApi_UnityARKit_Camera_TryGetIntrinsics_m323E8F14DDDB3EE994960D18A2BBF0B9A631FF95 (XRCameraIntrinsics_t85F1514E263A6C6DE96DBA5448B44F11F35395FD * ___cameraIntrinsics0, const RuntimeMethod* method);
// System.IntPtr UnityEngine.XR.ARKit.ARKitCameraSubsystem/NativeApi::UnityARKit_Camera_AcquireConfigurations(System.Int32&,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t NativeApi_UnityARKit_Camera_AcquireConfigurations_mD6539AE63C0A2F12563F169DF9BA0EEAD5976503 (int32_t* ___configurationsCount0, int32_t* ___configurationSize1, const RuntimeMethod* method);
// System.Void* System.IntPtr::op_Explicit(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* IntPtr_op_Explicit_mE8B472FDC632CBD121F7ADF4F94546D6610BACDD (intptr_t ___value0, const RuntimeMethod* method);
// Unity.Collections.NativeArray`1<!!0> UnityEngine.XR.ARSubsystems.NativeCopyUtility::PtrToNativeArrayWithDefault<UnityEngine.XR.ARSubsystems.XRCameraConfiguration>(!!0,System.Void*,System.Int32,System.Int32,Unity.Collections.Allocator)
inline NativeArray_1_t80D42D57D2D76B05EFDA2CF74AE660AB5FDD9545  NativeCopyUtility_PtrToNativeArrayWithDefault_TisXRCameraConfiguration_t2393055E5547307393E9C73AB13B95E0785A4F7A_m201412E1B5E1CFD5D5FC127661E8FBE015A47072 (XRCameraConfiguration_t2393055E5547307393E9C73AB13B95E0785A4F7A  ___defaultT0, void* ___source1, int32_t ___sourceElementSize2, int32_t ___length3, int32_t ___allocator4, const RuntimeMethod* method)
{
	return ((  NativeArray_1_t80D42D57D2D76B05EFDA2CF74AE660AB5FDD9545  (*) (XRCameraConfiguration_t2393055E5547307393E9C73AB13B95E0785A4F7A , void*, int32_t, int32_t, int32_t, const RuntimeMethod*))NativeCopyUtility_PtrToNativeArrayWithDefault_TisXRCameraConfiguration_t2393055E5547307393E9C73AB13B95E0785A4F7A_m201412E1B5E1CFD5D5FC127661E8FBE015A47072_gshared)(___defaultT0, ___source1, ___sourceElementSize2, ___length3, ___allocator4, method);
}
// System.Void UnityEngine.XR.ARKit.ARKitCameraSubsystem/NativeApi::UnityARKit_Camera_ReleaseConfigurations(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeApi_UnityARKit_Camera_ReleaseConfigurations_m5B124F82E03471C63AE0AD39CCE1BDBE66192377 (intptr_t ___configurations0, const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.ARKit.ARKitCameraSubsystem/NativeApi::UnityARKit_Camera_TryGetCurrentConfiguration(UnityEngine.XR.ARSubsystems.XRCameraConfiguration&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NativeApi_UnityARKit_Camera_TryGetCurrentConfiguration_m8EAAEA8A2E92DD892E3A9EFCA3A298FED78CEC2C (XRCameraConfiguration_t2393055E5547307393E9C73AB13B95E0785A4F7A * ___cameraConfiguration0, const RuntimeMethod* method);
// System.Void System.Nullable`1<UnityEngine.XR.ARSubsystems.XRCameraConfiguration>::.ctor(!0)
inline void Nullable_1__ctor_mC8B2FF6D15E5BD1BF52356C2621F2BE4AD504054 (Nullable_1_t661141E668063C73311C9DF09B3AE945EA9A1D8C * __this, XRCameraConfiguration_t2393055E5547307393E9C73AB13B95E0785A4F7A  ___value0, const RuntimeMethod* method)
{
	((  void (*) (Nullable_1_t661141E668063C73311C9DF09B3AE945EA9A1D8C *, XRCameraConfiguration_t2393055E5547307393E9C73AB13B95E0785A4F7A , const RuntimeMethod*))Nullable_1__ctor_mC8B2FF6D15E5BD1BF52356C2621F2BE4AD504054_gshared)(__this, ___value0, method);
}
// !0 System.Nullable`1<UnityEngine.XR.ARSubsystems.XRCameraConfiguration>::get_Value()
inline XRCameraConfiguration_t2393055E5547307393E9C73AB13B95E0785A4F7A  Nullable_1_get_Value_m061AC618B4B3A1EFA9F3B0970437705C72EA10BD (Nullable_1_t661141E668063C73311C9DF09B3AE945EA9A1D8C * __this, const RuntimeMethod* method)
{
	return ((  XRCameraConfiguration_t2393055E5547307393E9C73AB13B95E0785A4F7A  (*) (Nullable_1_t661141E668063C73311C9DF09B3AE945EA9A1D8C *, const RuntimeMethod*))Nullable_1_get_Value_m061AC618B4B3A1EFA9F3B0970437705C72EA10BD_gshared)(__this, method);
}
// UnityEngine.XR.ARKit.ARKitCameraSubsystem/CameraConfigurationResult UnityEngine.XR.ARKit.ARKitCameraSubsystem/NativeApi::UnityARKit_Camera_TrySetCurrentConfiguration(UnityEngine.XR.ARSubsystems.XRCameraConfiguration)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeApi_UnityARKit_Camera_TrySetCurrentConfiguration_mE3C365F90DEAA2F7F8FCFB1FEFFDFC0F2D2E30B7 (XRCameraConfiguration_t2393055E5547307393E9C73AB13B95E0785A4F7A  ___cameraConfiguration0, const RuntimeMethod* method);
// System.Void System.InvalidOperationException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvalidOperationException__ctor_mC012CE552988309733C896F3FEA8249171E4402E (InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB * __this, String_t* ___message0, const RuntimeMethod* method);
// System.Void System.ArgumentException::.ctor(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentException__ctor_m71044C2110E357B71A1C30D2561C3F861AF1DC0D (ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 * __this, String_t* ___message0, String_t* ___paramName1, const RuntimeMethod* method);
// System.Void* UnityEngine.XR.ARKit.ARKitCameraSubsystem/NativeApi::UnityARKit_Camera_AcquireTextureDescriptors(System.Int32&,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* NativeApi_UnityARKit_Camera_AcquireTextureDescriptors_mB910D215B897887CD01B74FCAE5C90A05AEBBC99 (int32_t* ___length0, int32_t* ___elementSize1, const RuntimeMethod* method);
// Unity.Collections.NativeArray`1<!!0> UnityEngine.XR.ARSubsystems.NativeCopyUtility::PtrToNativeArrayWithDefault<UnityEngine.XR.ARSubsystems.XRTextureDescriptor>(!!0,System.Void*,System.Int32,System.Int32,Unity.Collections.Allocator)
inline NativeArray_1_t290DD5A348463DD4415AFE27775047312478F952  NativeCopyUtility_PtrToNativeArrayWithDefault_TisXRTextureDescriptor_t9CA857DCCC1208B74376787BE4F3008A01B29A57_m1546885E4894E2676D1C8E5E9B8C0B1E41B24C63 (XRTextureDescriptor_t9CA857DCCC1208B74376787BE4F3008A01B29A57  ___defaultT0, void* ___source1, int32_t ___sourceElementSize2, int32_t ___length3, int32_t ___allocator4, const RuntimeMethod* method)
{
	return ((  NativeArray_1_t290DD5A348463DD4415AFE27775047312478F952  (*) (XRTextureDescriptor_t9CA857DCCC1208B74376787BE4F3008A01B29A57 , void*, int32_t, int32_t, int32_t, const RuntimeMethod*))NativeCopyUtility_PtrToNativeArrayWithDefault_TisXRTextureDescriptor_t9CA857DCCC1208B74376787BE4F3008A01B29A57_m1546885E4894E2676D1C8E5E9B8C0B1E41B24C63_gshared)(___defaultT0, ___source1, ___sourceElementSize2, ___length3, ___allocator4, method);
}
// System.Void UnityEngine.XR.ARKit.ARKitCameraSubsystem/NativeApi::UnityARKit_Camera_ReleaseTextureDescriptors(System.Void*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeApi_UnityARKit_Camera_ReleaseTextureDescriptors_m98B6B82D4283D3378679A8210C7037A581209D8D (void* ___descriptors0, const RuntimeMethod* method);
// UnityEngine.Rendering.RenderPipelineAsset UnityEngine.Rendering.GraphicsSettings::get_currentRenderPipeline()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RenderPipelineAsset_tA4DBD0F0DD583DF3C9F85AF41F49308D167864EF * GraphicsSettings_get_currentRenderPipeline_mDEBD1CD71B0917F918D9860C9351943A9677ADCA (const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___x0, Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___y1, const RuntimeMethod* method);
// UnityEngine.XR.ARKit.ARKitCpuImageApi UnityEngine.XR.ARKit.ARKitCpuImageApi::get_instance()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ARKitCpuImageApi_tD94B983FBF13116F7497F2089555084CCAC47D59 * ARKitCpuImageApi_get_instance_m6514121C177EF3FE7E2FD99C430A48C29D9245CA_inline (const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.ARKit.ARKitCpuImageApi::TryAcquireLatestImage(UnityEngine.XR.ARKit.ARKitCpuImageApi/ImageType,UnityEngine.XR.ARSubsystems.XRCpuImage/Cinfo&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ARKitCpuImageApi_TryAcquireLatestImage_m70DB2A52D021DD6A02E767699383A7E151C0D8E2 (int32_t ___imageType0, Cinfo_t4E32E30AF6973611F1DD0F47FC041ED3A8775DA6 * ___cinfo1, const RuntimeMethod* method);
// System.Int32 UnityEngine.Shader::PropertyToID(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Shader_PropertyToID_m8C1BEBBAC0CC3015B142AF0FA856495D5D239F5F (String_t* ___name0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.XREnvironmentProbeSubsystem/Provider::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Provider__ctor_m82E278812C6826F3F89A708912491AB72058B700 (Provider_tAF87FE3E906FDBF14F06488A1AA5E80400EFE190 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARKit.EnvironmentProbeApi::UnityARKit_EnvironmentProbeProvider_Construct()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnvironmentProbeApi_UnityARKit_EnvironmentProbeProvider_Construct_m5D69AFAA42866A78CC2B64C4457F3612E0627B46 (const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARKit.EnvironmentProbeApi::UnityARKit_EnvironmentProbeProvider_Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnvironmentProbeApi_UnityARKit_EnvironmentProbeProvider_Start_mBB72F3877A91955C57C9DD1150F073E312EADB58 (const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARKit.EnvironmentProbeApi::UnityARKit_EnvironmentProbeProvider_Stop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnvironmentProbeApi_UnityARKit_EnvironmentProbeProvider_Stop_mC4EA40B91E241DECA3A2146C68385DB70033E18B (const RuntimeMethod* method);
// System.IntPtr UnityEngine.XR.ARKit.EnvironmentProbeApi::UnityARKit_EnvironmentProbeProvider_AcquireChanges(System.Int32&,System.IntPtr&,System.Int32&,System.IntPtr&,System.Int32&,System.IntPtr&,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t EnvironmentProbeApi_UnityARKit_EnvironmentProbeProvider_AcquireChanges_mBF125AB519AAAB01B5CA4B6A3CC9693946394C09 (int32_t* ___numAddedEnvironmentProbes0, intptr_t* ___addedEnvironmentProbes1, int32_t* ___numUpdatedEnvironmentProbes2, intptr_t* ___updatedEnvironmentProbes3, int32_t* ___numRemovedEnvironmentProbeIds4, intptr_t* ___removedEnvironmentProbeIds5, int32_t* ___stride6, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XREnvironmentProbe>::.ctor(System.Void*,System.Int32,System.Void*,System.Int32,System.Void*,System.Int32,!0,System.Int32,Unity.Collections.Allocator)
inline void TrackableChanges_1__ctor_m8B32DEE7C39CA08A7523D0D553B26079265524E1 (TrackableChanges_1_tBC1B6352E3D11F9F7BC4E567480BDF8AE39A547F * __this, void* ___addedPtr0, int32_t ___addedCount1, void* ___updatedPtr2, int32_t ___updatedCount3, void* ___removedPtr4, int32_t ___removedCount5, XREnvironmentProbe_t4D75B5DF95135D1BA45222CBE3E7677E823B8D4C  ___defaultT6, int32_t ___stride7, int32_t ___allocator8, const RuntimeMethod* method)
{
	((  void (*) (TrackableChanges_1_tBC1B6352E3D11F9F7BC4E567480BDF8AE39A547F *, void*, int32_t, void*, int32_t, void*, int32_t, XREnvironmentProbe_t4D75B5DF95135D1BA45222CBE3E7677E823B8D4C , int32_t, int32_t, const RuntimeMethod*))TrackableChanges_1__ctor_m8B32DEE7C39CA08A7523D0D553B26079265524E1_gshared)(__this, ___addedPtr0, ___addedCount1, ___updatedPtr2, ___updatedCount3, ___removedPtr4, ___removedCount5, ___defaultT6, ___stride7, ___allocator8, method);
}
// System.Void UnityEngine.XR.ARKit.EnvironmentProbeApi::UnityARKit_EnvironmentProbeProvider_ReleaseChanges(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnvironmentProbeApi_UnityARKit_EnvironmentProbeProvider_ReleaseChanges_m9C8712C98A37F7206733C97EB3D7D2495CFB9C00 (intptr_t ___context0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.XRHumanBodySubsystem/Provider::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Provider__ctor_mA98EFA82A2BD0B6E60094A95912A2CFF487D0252 (Provider_t055C90C34B2BCE8D134DF44C12823E320519168C * __this, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARKit.ARKitHumanBodySubsystem/NativeApi::UnityARKit_HumanBodyProvider_Construct()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeApi_UnityARKit_HumanBodyProvider_Construct_m9A1DE74E132179DA742D9BE6F7F578B7A9B82669 (const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARKit.ARKitHumanBodySubsystem/NativeApi::UnityARKit_HumanBodyProvider_Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeApi_UnityARKit_HumanBodyProvider_Start_m5437A13DF66041FFC9581B7FE20883082004F230 (const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARKit.ARKitHumanBodySubsystem/NativeApi::UnityARKit_HumanBodyProvider_Stop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeApi_UnityARKit_HumanBodyProvider_Stop_m66F073E5BAAA31F763F59A95E45097D8FFE92C8B (const RuntimeMethod* method);
// System.Void* UnityEngine.XR.ARKit.ARKitHumanBodySubsystem/NativeApi::UnityARKit_HumanBodyProvider_AcquireChanges(System.Int32&,System.Void*&,System.Int32&,System.Void*&,System.Int32&,System.Void*&,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* NativeApi_UnityARKit_HumanBodyProvider_AcquireChanges_mB17B770AC64052E2B891EBB8302FF69F1CFEF60B (int32_t* ___numAddedHumanBodies0, void** ___addedBodys1, int32_t* ___numUpdatedHumanBodies2, void** ___updatedBodys3, int32_t* ___numRemovedHumanBodyIds4, void** ___removedBodyIds5, int32_t* ___stride6, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRHumanBody>::.ctor(System.Void*,System.Int32,System.Void*,System.Int32,System.Void*,System.Int32,!0,System.Int32,Unity.Collections.Allocator)
inline void TrackableChanges_1__ctor_mF1B701B0766D8E5230EC1A878ADF490273ED75BC (TrackableChanges_1_t4BEBDDB9C8CBFF65EC7028CE5BA562A5728C8B82 * __this, void* ___addedPtr0, int32_t ___addedCount1, void* ___updatedPtr2, int32_t ___updatedCount3, void* ___removedPtr4, int32_t ___removedCount5, XRHumanBody_t1AA9DC3BEBCF86A64BE2B83452AC5704AD08C13B  ___defaultT6, int32_t ___stride7, int32_t ___allocator8, const RuntimeMethod* method)
{
	((  void (*) (TrackableChanges_1_t4BEBDDB9C8CBFF65EC7028CE5BA562A5728C8B82 *, void*, int32_t, void*, int32_t, void*, int32_t, XRHumanBody_t1AA9DC3BEBCF86A64BE2B83452AC5704AD08C13B , int32_t, int32_t, const RuntimeMethod*))TrackableChanges_1__ctor_mF1B701B0766D8E5230EC1A878ADF490273ED75BC_gshared)(__this, ___addedPtr0, ___addedCount1, ___updatedPtr2, ___updatedCount3, ___removedPtr4, ___removedCount5, ___defaultT6, ___stride7, ___allocator8, method);
}
// System.Void UnityEngine.XR.ARKit.ARKitHumanBodySubsystem/NativeApi::UnityARKit_HumanBodyProvider_ReleaseChanges(System.Void*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeApi_UnityARKit_HumanBodyProvider_ReleaseChanges_m82AB9E945F905582E96D7E91FF8104BE93F24AFD (void* ___context0, const RuntimeMethod* method);
// System.Void* Unity.Collections.LowLevel.Unsafe.NativeSliceUnsafeUtility::GetUnsafePtr<System.Byte>(Unity.Collections.NativeSlice`1<!!0>)
inline void* NativeSliceUnsafeUtility_GetUnsafePtr_TisByte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_m48BDB55277094F65920898D8EF5953BB2D1138B4 (NativeSlice_1_tA05D3BC7EB042685CBFD3369ECB6140D114C911B  ___nativeSlice0, const RuntimeMethod* method)
{
	return ((  void* (*) (NativeSlice_1_tA05D3BC7EB042685CBFD3369ECB6140D114C911B , const RuntimeMethod*))NativeSliceUnsafeUtility_GetUnsafePtr_TisByte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_m48BDB55277094F65920898D8EF5953BB2D1138B4_gshared)(___nativeSlice0, method);
}
// System.Boolean UnityEngine.XR.ARKit.ARKitImageDatabase/AddImageJob::UnityARKit_ImageDatabase_AddImage(System.IntPtr,System.Void*,UnityEngine.TextureFormat,System.Int32,System.Int32,System.Single,UnityEngine.XR.ARKit.ManagedReferenceImage&)
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR bool AddImageJob_UnityARKit_ImageDatabase_AddImage_mB6AD8DF83ADC350F099DC08D255EF39685892EF6 (intptr_t ___database0, void* ___bytes1, int32_t ___format2, int32_t ___width3, int32_t ___height4, float ___physicalWidth5, ManagedReferenceImage_t867FD513C8CBF1F9824DBFB215783BE8C33F0FA1 * ___managedReferenceImage6, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARKit.ARKitImageDatabase::UnityARKit_CFRelease(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARKitImageDatabase_UnityARKit_CFRelease_m101DDEAB4CD9A57523E6752438BF65A93339D9A9 (intptr_t ___ptr0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARKit.ARKitImageDatabase/AddImageJob::Execute()
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void AddImageJob_Execute_m8F6676684DBA5306E5F2B735A65D34CF349E503E (AddImageJob_t8EC95C9EA777B31823D128D52F383B45EF7F3AA5 * IL2CPP_PARAMETER_RESTRICT __this, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARKit.ARKitImageTrackingSubsystem::UnityARKit_ImageTracking_Stop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARKitImageTrackingSubsystem_UnityARKit_ImageTracking_Stop_mC4A571D7E5AE4A50E304F003DA57B677B1175E12 (const RuntimeMethod* method);
// System.IntPtr UnityEngine.XR.ARKit.ARKitImageDatabase::get_nativePtr()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR intptr_t ARKitImageDatabase_get_nativePtr_mFE4F7A4306D72B71FFAC9E1C2F3D9FF5354627B3_inline (ARKitImageDatabase_t1D1B5D985355CF3D2597C8FD863EB46EF55B1F71 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARKit.ARKitImageTrackingSubsystem::UnityARKit_ImageTracking_SetDatabase(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARKitImageTrackingSubsystem_UnityARKit_ImageTracking_SetDatabase_mDB53D72973E1A12F0C8662DCA17A0A9442E16819 (intptr_t ___database0, const RuntimeMethod* method);
// System.Type System.Object::GetType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t * Object_GetType_m571FE8360C10B98C23AAF1F066D92C08CC94F45B (RuntimeObject * __this, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method);
// System.Void System.ArgumentException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentException__ctor_m2D35EAD113C2ADC99EB17B940A2097A93FD23EFC (ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 * __this, String_t* ___message0, const RuntimeMethod* method);
// System.Void* UnityEngine.XR.ARKit.ARKitImageTrackingSubsystem::UnityARKit_ImageTracking_AcquireChanges(System.Void*&,System.Int32&,System.Void*&,System.Int32&,System.Void*&,System.Int32&,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* ARKitImageTrackingSubsystem_UnityARKit_ImageTracking_AcquireChanges_mFDBAEB21E5E67D7E748A3BA6AAB2421E91F7E8D4 (void** ___addedPtr0, int32_t* ___addedLength1, void** ___updatedPtr2, int32_t* ___updatedLength3, void** ___removedPtr4, int32_t* ___removedLength5, int32_t* ___stride6, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRTrackedImage>::.ctor(System.Void*,System.Int32,System.Void*,System.Int32,System.Void*,System.Int32,!0,System.Int32,Unity.Collections.Allocator)
inline void TrackableChanges_1__ctor_m6F60AB8591361352FE9F0FB2C9A50988CD5530E8 (TrackableChanges_1_tDE6975A36D16B9E01B5B7D815A77EDD62A3EA629 * __this, void* ___addedPtr0, int32_t ___addedCount1, void* ___updatedPtr2, int32_t ___updatedCount3, void* ___removedPtr4, int32_t ___removedCount5, XRTrackedImage_t92B53E0621C6D2E930761110E719F0E9580A722F  ___defaultT6, int32_t ___stride7, int32_t ___allocator8, const RuntimeMethod* method)
{
	((  void (*) (TrackableChanges_1_tDE6975A36D16B9E01B5B7D815A77EDD62A3EA629 *, void*, int32_t, void*, int32_t, void*, int32_t, XRTrackedImage_t92B53E0621C6D2E930761110E719F0E9580A722F , int32_t, int32_t, const RuntimeMethod*))TrackableChanges_1__ctor_m6F60AB8591361352FE9F0FB2C9A50988CD5530E8_gshared)(__this, ___addedPtr0, ___addedCount1, ___updatedPtr2, ___updatedCount3, ___removedPtr4, ___removedCount5, ___defaultT6, ___stride7, ___allocator8, method);
}
// System.Void UnityEngine.XR.ARKit.ARKitImageTrackingSubsystem::UnityARKit_ImageTracking_ReleaseChanges(System.Void*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARKitImageTrackingSubsystem_UnityARKit_ImageTracking_ReleaseChanges_m97CDB40BE0CE9EB7D98D7790AC7333CDF6D58C57 (void* ___changes0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.XRImageTrackingSubsystem/Provider::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Provider__ctor_mE0C779A245EE703B26578F529ABFD6F18E002AC0 (Provider_tA7CEF856C3BC486ADEBD656F5535E24262AAAE9E * __this, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.XROcclusionSubsystem/Provider::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Provider__ctor_m4B36FAF10D278F373035E446EFFC7C4C5B32C4FD (Provider_t5B60C630FB68EFEAB6FA2F3D9A732C144003B7FB * __this, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARKit.ARKitOcclusionSubsystem/NativeApi::UnityARKit_OcclusionProvider_Construct(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeApi_UnityARKit_OcclusionProvider_Construct_mE0D5F866F8C33EB19A5779464B6D67B71CC8D108 (int32_t ___textureHumanStencilPropertyId0, int32_t ___textureHumanDepthPropertyId1, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARKit.ARKitOcclusionSubsystem/NativeApi::UnityARKit_OcclusionProvider_Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeApi_UnityARKit_OcclusionProvider_Start_mAE8071BB5F21E9FCBD80F85081A6045AC499D5DB (const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARKit.ARKitOcclusionSubsystem/NativeApi::UnityARKit_OcclusionProvider_Stop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeApi_UnityARKit_OcclusionProvider_Stop_m66A4A43D62C2A677ADBB92E89F0B20B27C76ECAB (const RuntimeMethod* method);
// System.Boolean System.IntPtr::op_Inequality(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool IntPtr_op_Inequality_m212AF0E66AA81FEDC982B1C8A44ADDA24B995EB8 (intptr_t ___value10, intptr_t ___value21, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.XRParticipantSubsystem/Provider::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Provider__ctor_m29C158581A2B8BF6DE3F03DDACC1A2F8FFB1F875 (Provider_t1D0BC515976D24FD30341AC456ACFCB2DE4A344E * __this, const RuntimeMethod* method);
// System.IntPtr UnityEngine.XR.ARKit.ARKitParticipantSubsystem/ARKitProvider::UnityARKit_Participant_init()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t ARKitProvider_UnityARKit_Participant_init_m439EC3BAB13C15A4AFB8FDEDD7AFF2999C15AFEB (const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.ARKit.ARKitParticipantSubsystem/ARKitProvider::get_created()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ARKitProvider_get_created_mE824BF041D0630E971111FF26FE9134FD9AB5C37 (ARKitProvider_t9908B32D1E5398BA2FD0D825E9343F8CA0277B4C * __this, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m89EAB4C6A96B0E5C3F87300D6BE78D386B9EFC44 (String_t* ___str00, String_t* ___str11, String_t* ___str22, const RuntimeMethod* method);
// System.IntPtr UnityEngine.XR.ARKit.Api::UnityARKit_TrackableProvider_start(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t Api_UnityARKit_TrackableProvider_start_m5B2100D934A363E895FBC8FC68D8A07D77448417 (intptr_t ___self0, const RuntimeMethod* method);
// System.IntPtr UnityEngine.XR.ARKit.Api::UnityARKit_TrackableProvider_stop(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t Api_UnityARKit_TrackableProvider_stop_mF7B6E1ABDAB3707DBBA16221CC4320A023E27966 (intptr_t ___self0, const RuntimeMethod* method);
// UnityEngine.XR.ARKit.NativeChanges UnityEngine.XR.ARKit.Api::UnityARKit_TrackableProvider_acquireChanges(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeChanges_t2AB4CBD7DD7F23F421DFD0CE4D4CDB26402D6D76  Api_UnityARKit_TrackableProvider_acquireChanges_mD96BAB877284BA60893800C20E72851C072DAC59 (intptr_t ___self0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRParticipant>::.ctor(System.Int32,System.Int32,System.Int32,Unity.Collections.Allocator,!0)
inline void TrackableChanges_1__ctor_mFA2451C6E10AF00118A809C94BB646C6B774012E (TrackableChanges_1_tCBDEADFC15FC0570F012431A5227C2E6B92BAC3F * __this, int32_t ___addedCount0, int32_t ___updatedCount1, int32_t ___removedCount2, int32_t ___allocator3, XRParticipant_t8CFF46A2CDD860A7591AD0FC0EE563458C8FA13F  ___defaultValue4, const RuntimeMethod* method)
{
	((  void (*) (TrackableChanges_1_tCBDEADFC15FC0570F012431A5227C2E6B92BAC3F *, int32_t, int32_t, int32_t, int32_t, XRParticipant_t8CFF46A2CDD860A7591AD0FC0EE563458C8FA13F , const RuntimeMethod*))TrackableChanges_1__ctor_mFA2451C6E10AF00118A809C94BB646C6B774012E_gshared)(__this, ___addedCount0, ___updatedCount1, ___removedCount2, ___allocator3, ___defaultValue4, method);
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::SizeOf<UnityEngine.XR.ARSubsystems.XRParticipant>()
inline int32_t UnsafeUtility_SizeOf_TisXRParticipant_t8CFF46A2CDD860A7591AD0FC0EE563458C8FA13F_m00E843B9705969489FCA43AAF5B4BDF0DAE674C9 (const RuntimeMethod* method)
{
	return ((  int32_t (*) (const RuntimeMethod*))UnsafeUtility_SizeOf_TisXRParticipant_t8CFF46A2CDD860A7591AD0FC0EE563458C8FA13F_m00E843B9705969489FCA43AAF5B4BDF0DAE674C9_gshared)(method);
}
// Unity.Collections.NativeArray`1<!0> UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRParticipant>::get_added()
inline NativeArray_1_t20D7C7F2BCDC04B6238E113A2CA21BBDD326A535  TrackableChanges_1_get_added_mE2DAB671C35440089855E3FA56312B779914939F_inline (TrackableChanges_1_tCBDEADFC15FC0570F012431A5227C2E6B92BAC3F * __this, const RuntimeMethod* method)
{
	return ((  NativeArray_1_t20D7C7F2BCDC04B6238E113A2CA21BBDD326A535  (*) (TrackableChanges_1_tCBDEADFC15FC0570F012431A5227C2E6B92BAC3F *, const RuntimeMethod*))TrackableChanges_1_get_added_mE2DAB671C35440089855E3FA56312B779914939F_gshared_inline)(__this, method);
}
// System.Void* Unity.Collections.LowLevel.Unsafe.NativeArrayUnsafeUtility::GetUnsafePtr<UnityEngine.XR.ARSubsystems.XRParticipant>(Unity.Collections.NativeArray`1<!!0>)
inline void* NativeArrayUnsafeUtility_GetUnsafePtr_TisXRParticipant_t8CFF46A2CDD860A7591AD0FC0EE563458C8FA13F_mB0A664D2C49A4691B407A65D546E88FF50F0C378 (NativeArray_1_t20D7C7F2BCDC04B6238E113A2CA21BBDD326A535  ___nativeArray0, const RuntimeMethod* method)
{
	return ((  void* (*) (NativeArray_1_t20D7C7F2BCDC04B6238E113A2CA21BBDD326A535 , const RuntimeMethod*))NativeArrayUnsafeUtility_GetUnsafePtr_TisXRParticipant_t8CFF46A2CDD860A7591AD0FC0EE563458C8FA13F_mB0A664D2C49A4691B407A65D546E88FF50F0C378_gshared)(___nativeArray0, method);
}
// Unity.Collections.NativeArray`1<!0> UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRParticipant>::get_updated()
inline NativeArray_1_t20D7C7F2BCDC04B6238E113A2CA21BBDD326A535  TrackableChanges_1_get_updated_mDD1EA7192EFEFC4A8FB5949F6F995268E940D5AC_inline (TrackableChanges_1_tCBDEADFC15FC0570F012431A5227C2E6B92BAC3F * __this, const RuntimeMethod* method)
{
	return ((  NativeArray_1_t20D7C7F2BCDC04B6238E113A2CA21BBDD326A535  (*) (TrackableChanges_1_tCBDEADFC15FC0570F012431A5227C2E6B92BAC3F *, const RuntimeMethod*))TrackableChanges_1_get_updated_mDD1EA7192EFEFC4A8FB5949F6F995268E940D5AC_gshared_inline)(__this, method);
}
// Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.TrackableId> UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRParticipant>::get_removed()
inline NativeArray_1_t991E9C764228B2B65D9688847CCDA8CE903F5D77  TrackableChanges_1_get_removed_mEF24C86CF94D54D18AE8E112F4CA05CB76E8933D_inline (TrackableChanges_1_tCBDEADFC15FC0570F012431A5227C2E6B92BAC3F * __this, const RuntimeMethod* method)
{
	return ((  NativeArray_1_t991E9C764228B2B65D9688847CCDA8CE903F5D77  (*) (TrackableChanges_1_tCBDEADFC15FC0570F012431A5227C2E6B92BAC3F *, const RuntimeMethod*))TrackableChanges_1_get_removed_mEF24C86CF94D54D18AE8E112F4CA05CB76E8933D_gshared_inline)(__this, method);
}
// System.Void* Unity.Collections.LowLevel.Unsafe.NativeArrayUnsafeUtility::GetUnsafePtr<UnityEngine.XR.ARSubsystems.TrackableId>(Unity.Collections.NativeArray`1<!!0>)
inline void* NativeArrayUnsafeUtility_GetUnsafePtr_TisTrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B_m92549A9C2F4BEF557CB12A078D51054FA135F761 (NativeArray_1_t991E9C764228B2B65D9688847CCDA8CE903F5D77  ___nativeArray0, const RuntimeMethod* method)
{
	return ((  void* (*) (NativeArray_1_t991E9C764228B2B65D9688847CCDA8CE903F5D77 , const RuntimeMethod*))NativeArrayUnsafeUtility_GetUnsafePtr_TisTrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B_m92549A9C2F4BEF557CB12A078D51054FA135F761_gshared)(___nativeArray0, method);
}
// System.Void UnityEngine.XR.ARKit.Api::UnityARKit_TrackableProvider_copyChanges(System.IntPtr,UnityEngine.XR.ARKit.NativeChanges,System.Int32,System.Void*,System.Void*,System.Void*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Api_UnityARKit_TrackableProvider_copyChanges_m0DBCBEE86560E14161F422044F969ABF1468B4D1 (intptr_t ___self0, NativeChanges_t2AB4CBD7DD7F23F421DFD0CE4D4CDB26402D6D76  ___changes1, int32_t ___stride2, void* ___added3, void* ___updated4, void* ___removed5, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.XRRaycastSubsystem/Provider::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Provider__ctor_m58E4226B4157880E60C02C82B5FB24D9760EA94F (Provider_tF185BE0541D2066CD242583CEFE7709DD22DD227 * __this, const RuntimeMethod* method);
// System.IntPtr UnityEngine.XR.ARKit.ARKitRaycastSubsystem/NativeApi::Construct()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t NativeApi_Construct_m6DE0A0FE05883F496C2822E29EEF5E9D8B68FC5F (const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARKit.ARKitRaycastSubsystem/NativeApi::Start(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeApi_Start_m1ED955772F08A510C7EE94392389A757BDFB5B64 (intptr_t ___self0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARKit.ARKitRaycastSubsystem/NativeApi::Stop(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeApi_Stop_m824F57BFD9FD74787BA28507962DC73555039041 (intptr_t ___self0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARKit.ARKitRaycastSubsystem/NativeApi::AcquireChanges(System.IntPtr,UnityEngine.XR.ARSubsystems.XRRaycast*&,System.Int32&,UnityEngine.XR.ARSubsystems.XRRaycast*&,System.Int32&,UnityEngine.XR.ARSubsystems.TrackableId*&,System.Int32&,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeApi_AcquireChanges_m84A45D9686034EF9A80E60FB67B4825FE804F857 (intptr_t ___self0, XRRaycast_tA18F9107EFF1D692E70EF15233BB6134A5F66C55 ** ___added1, int32_t* ___addedCount2, XRRaycast_tA18F9107EFF1D692E70EF15233BB6134A5F66C55 ** ___updated3, int32_t* ___updatedCount4, TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B ** ___removed5, int32_t* ___removedCount6, int32_t* ___elementSize7, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRRaycast>::.ctor(System.Void*,System.Int32,System.Void*,System.Int32,System.Void*,System.Int32,!0,System.Int32,Unity.Collections.Allocator)
inline void TrackableChanges_1__ctor_m592AE08978C647130F8181BD1802AAE7EF3623B4 (TrackableChanges_1_t092C2BBB89690C350B949DDFFA9F551F85536ED3 * __this, void* ___addedPtr0, int32_t ___addedCount1, void* ___updatedPtr2, int32_t ___updatedCount3, void* ___removedPtr4, int32_t ___removedCount5, XRRaycast_tA18F9107EFF1D692E70EF15233BB6134A5F66C55  ___defaultT6, int32_t ___stride7, int32_t ___allocator8, const RuntimeMethod* method)
{
	((  void (*) (TrackableChanges_1_t092C2BBB89690C350B949DDFFA9F551F85536ED3 *, void*, int32_t, void*, int32_t, void*, int32_t, XRRaycast_tA18F9107EFF1D692E70EF15233BB6134A5F66C55 , int32_t, int32_t, const RuntimeMethod*))TrackableChanges_1__ctor_m592AE08978C647130F8181BD1802AAE7EF3623B4_gshared)(__this, ___addedPtr0, ___addedCount1, ___updatedPtr2, ___updatedCount3, ___removedPtr4, ___removedCount5, ___defaultT6, ___stride7, ___allocator8, method);
}
// System.Void UnityEngine.XR.ARKit.ARKitRaycastSubsystem/NativeApi::ReleaseChanges(UnityEngine.XR.ARSubsystems.XRRaycast*,UnityEngine.XR.ARSubsystems.XRRaycast*,UnityEngine.XR.ARSubsystems.TrackableId*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeApi_ReleaseChanges_m5D8C484D64063118B1AB3DE4951F3F9CBD8E3A60 (XRRaycast_tA18F9107EFF1D692E70EF15233BB6134A5F66C55 * ___added0, XRRaycast_tA18F9107EFF1D692E70EF15233BB6134A5F66C55 * ___updated1, TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B * ___removed2, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Ray::get_origin()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Ray_get_origin_m0C1B2BFF99CDF5231AC29AC031C161F55B53C1D0 (Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Ray::get_direction()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Ray_get_direction_m2B31F86F19B64474A901B28D3808011AE7A13EFC (Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.ARKit.ARKitRaycastSubsystem/NativeApi::TryAddRaycast(System.IntPtr,UnityEngine.Vector3,UnityEngine.Vector3,System.Single,UnityEngine.XR.ARSubsystems.XRRaycast&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NativeApi_TryAddRaycast_mDA0EB2370860A3D049C9465C99EEE308DB023E2C (intptr_t ___self0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___origin1, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___direction2, float ___estimatedDistance3, XRRaycast_tA18F9107EFF1D692E70EF15233BB6134A5F66C55 * ___raycast4, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARKit.ARKitRaycastSubsystem/NativeApi::RemoveRaycast(System.IntPtr,UnityEngine.XR.ARSubsystems.TrackableId)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeApi_RemoveRaycast_m244B44FD32FCF72613792F048CF6F90319CBEFA0 (intptr_t ___self0, TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  ___trackableId1, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARKit.ARKitRaycastSubsystem/NativeApi::UnityARKit_Raycast_AcquireHitResults(UnityEngine.Vector2,UnityEngine.XR.ARSubsystems.TrackableType,System.Void*&,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeApi_UnityARKit_Raycast_AcquireHitResults_m70B58AAD7786FED41837245FB68AAB0B5788F009 (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___screenPoint0, int32_t ___filter1, void** ___hitResults2, int32_t* ___hitCount3, const RuntimeMethod* method);
// System.Void Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.XRRaycastHit>::.ctor(System.Int32,Unity.Collections.Allocator,Unity.Collections.NativeArrayOptions)
inline void NativeArray_1__ctor_m3975925019B935FC0405A56C2A4431D16DFE641F (NativeArray_1_t35F2E89DF840C06C68595E9289A07A26CBB07FCB * __this, int32_t ___length0, int32_t ___allocator1, int32_t ___options2, const RuntimeMethod* method)
{
	((  void (*) (NativeArray_1_t35F2E89DF840C06C68595E9289A07A26CBB07FCB *, int32_t, int32_t, int32_t, const RuntimeMethod*))NativeArray_1__ctor_m3975925019B935FC0405A56C2A4431D16DFE641F_gshared)(__this, ___length0, ___allocator1, ___options2, method);
}
// System.Void* Unity.Collections.LowLevel.Unsafe.UnsafeUtility::AddressOf<UnityEngine.XR.ARSubsystems.XRRaycastHit>(!!0&)
inline void* UnsafeUtility_AddressOf_TisXRRaycastHit_t94A3D13B245A9D0A7A7F2D0919DCAAC7C8DF8DDB_mCFB5A27460535DA449EA9CD73BE6BE4955FEC37B (XRRaycastHit_t94A3D13B245A9D0A7A7F2D0919DCAAC7C8DF8DDB * ___output0, const RuntimeMethod* method)
{
	return ((  void* (*) (XRRaycastHit_t94A3D13B245A9D0A7A7F2D0919DCAAC7C8DF8DDB *, const RuntimeMethod*))UnsafeUtility_AddressOf_TisXRRaycastHit_t94A3D13B245A9D0A7A7F2D0919DCAAC7C8DF8DDB_mCFB5A27460535DA449EA9CD73BE6BE4955FEC37B_gshared)(___output0, method);
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::SizeOf<UnityEngine.XR.ARSubsystems.XRRaycastHit>()
inline int32_t UnsafeUtility_SizeOf_TisXRRaycastHit_t94A3D13B245A9D0A7A7F2D0919DCAAC7C8DF8DDB_m51E2C6221DC8163F580478B984D0562A95A715BA (const RuntimeMethod* method)
{
	return ((  int32_t (*) (const RuntimeMethod*))UnsafeUtility_SizeOf_TisXRRaycastHit_t94A3D13B245A9D0A7A7F2D0919DCAAC7C8DF8DDB_m51E2C6221DC8163F580478B984D0562A95A715BA_gshared)(method);
}
// System.Void* Unity.Collections.LowLevel.Unsafe.NativeArrayUnsafeUtility::GetUnsafePtr<UnityEngine.XR.ARSubsystems.XRRaycastHit>(Unity.Collections.NativeArray`1<!!0>)
inline void* NativeArrayUnsafeUtility_GetUnsafePtr_TisXRRaycastHit_t94A3D13B245A9D0A7A7F2D0919DCAAC7C8DF8DDB_m752D0AAC76475B17F91A7623AE587CF73699C92E (NativeArray_1_t35F2E89DF840C06C68595E9289A07A26CBB07FCB  ___nativeArray0, const RuntimeMethod* method)
{
	return ((  void* (*) (NativeArray_1_t35F2E89DF840C06C68595E9289A07A26CBB07FCB , const RuntimeMethod*))NativeArrayUnsafeUtility_GetUnsafePtr_TisXRRaycastHit_t94A3D13B245A9D0A7A7F2D0919DCAAC7C8DF8DDB_m752D0AAC76475B17F91A7623AE587CF73699C92E_gshared)(___nativeArray0, method);
}
// System.Void UnityEngine.XR.ARKit.ARKitRaycastSubsystem/NativeApi::UnityARKit_Raycast_CopyAndReleaseHitResults(System.Void*,System.Int32,System.Void*,System.Void*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeApi_UnityARKit_Raycast_CopyAndReleaseHitResults_m8152EEFB15DD57649BC66013FE88109E9B64B784 (void* ___defaultHit0, int32_t ___stride1, void* ___hitResults2, void* ___dstBuffer3, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.XRSessionSubsystem/Provider::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Provider__ctor_m921D9E5D94AB32804689C972E36ECA2601BB2AAE (Provider_t4C3675997BB8AF3A6A32C3EC3C93C10E4D3E8D1A * __this, const RuntimeMethod* method);
// System.IntPtr UnityEngine.XR.ARKit.ARKitSessionSubsystem/NativeApi::UnityARKit_Session_Construct()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t NativeApi_UnityARKit_Session_Construct_mDDDB00F18369E7FD28003E2791FB94E9C6F342D6 (const RuntimeMethod* method);
// System.Int32 UnityEngine.XR.ARKit.ARKitSessionSubsystem/NativeApi::UnityARKit_Session_GetConfigurationDescriptors(System.IntPtr,System.IntPtr,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeApi_UnityARKit_Session_GetConfigurationDescriptors_mD7ADC376E9170C6779B02A4E749859D68A885E4E (intptr_t ___self0, intptr_t ___buffer1, int32_t ___capacity2, int32_t ___stride3, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARKit.ARKitSessionSubsystem/NativeApi::UnityARKit_Session_Resume(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeApi_UnityARKit_Session_Resume_m2AB1F20C092413BD51E598F2016432E5A2C0B902 (intptr_t ___self0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARKit.ARKitSessionSubsystem/NativeApi::UnityARKit_Session_Pause(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeApi_UnityARKit_Session_Pause_m3EE2DE7BBB66B473E76C6DC6A378802EA59F00A9 (intptr_t ___self0, const RuntimeMethod* method);
// System.Void System.NotSupportedException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_m40BC57BDA6E0E119B73700CC809A14B57DC65A90 (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * __this, String_t* ___message0, const RuntimeMethod* method);
// UnityEngine.XR.ARSubsystems.ConfigurationDescriptor UnityEngine.XR.ARSubsystems.Configuration::get_descriptor()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ConfigurationDescriptor_t5CD12F017FCCF861DC33D7C0D6F0121015DEEA78  Configuration_get_descriptor_mD7539C193666CFFB9258CE40D88EB7DA3C48DDDA_inline (Configuration_t29C11C7E576D64F717543048BDA1EBCEF0CF60C0 * __this, const RuntimeMethod* method);
// System.IntPtr UnityEngine.XR.ARSubsystems.ConfigurationDescriptor::get_identifier()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR intptr_t ConfigurationDescriptor_get_identifier_m829E6611B4E4B0E33E8E87902FDFCDAEC0F2B8A0_inline (ConfigurationDescriptor_t5CD12F017FCCF861DC33D7C0D6F0121015DEEA78 * __this, const RuntimeMethod* method);
// UnityEngine.XR.ARSubsystems.Feature UnityEngine.XR.ARSubsystems.Configuration::get_features()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint64_t Configuration_get_features_m8F2353DC080AF51D657C4CBD8E9DB4DAEAB72B5A_inline (Configuration_t29C11C7E576D64F717543048BDA1EBCEF0CF60C0 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARKit.ARKitSessionSubsystem/NativeApi::UnityARKit_Session_Update(System.IntPtr,System.IntPtr,UnityEngine.XR.ARSubsystems.Feature)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeApi_UnityARKit_Session_Update_mB92AA0121D0F70ECF11011FC30DC1C17DC7ACDB1 (intptr_t ___self0, intptr_t ___desiredConfigurationClass1, uint64_t ___features2, const RuntimeMethod* method);
// System.Void Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.ConfigurationDescriptor>::.ctor(System.Int32,Unity.Collections.Allocator,Unity.Collections.NativeArrayOptions)
inline void NativeArray_1__ctor_m9BC70C00CBBD2A630F434033F04D9A1ADBCD2440 (NativeArray_1_tC9A9DFD8C5E8BBF71F83CBC0CCF7C4BC38E3A4CA * __this, int32_t ___length0, int32_t ___allocator1, int32_t ___options2, const RuntimeMethod* method)
{
	((  void (*) (NativeArray_1_tC9A9DFD8C5E8BBF71F83CBC0CCF7C4BC38E3A4CA *, int32_t, int32_t, int32_t, const RuntimeMethod*))NativeArray_1__ctor_m9BC70C00CBBD2A630F434033F04D9A1ADBCD2440_gshared)(__this, ___length0, ___allocator1, ___options2, method);
}
// System.Void* Unity.Collections.LowLevel.Unsafe.NativeArrayUnsafeUtility::GetUnsafePtr<UnityEngine.XR.ARSubsystems.ConfigurationDescriptor>(Unity.Collections.NativeArray`1<!!0>)
inline void* NativeArrayUnsafeUtility_GetUnsafePtr_TisConfigurationDescriptor_t5CD12F017FCCF861DC33D7C0D6F0121015DEEA78_m38F4EB734FEAE74086322152D46FCAFEB2DB1C72 (NativeArray_1_tC9A9DFD8C5E8BBF71F83CBC0CCF7C4BC38E3A4CA  ___nativeArray0, const RuntimeMethod* method)
{
	return ((  void* (*) (NativeArray_1_tC9A9DFD8C5E8BBF71F83CBC0CCF7C4BC38E3A4CA , const RuntimeMethod*))NativeArrayUnsafeUtility_GetUnsafePtr_TisConfigurationDescriptor_t5CD12F017FCCF861DC33D7C0D6F0121015DEEA78_m38F4EB734FEAE74086322152D46FCAFEB2DB1C72_gshared)(___nativeArray0, method);
}
// System.Void System.IntPtr::.ctor(System.Void*)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void IntPtr__ctor_mBB7AF6DA6350129AD6422DE474FD52F715CC0C40_inline (intptr_t* __this, void* ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARKit.ARKitSessionSubsystem/NativeApi::UnityARKit_Session_Reset(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeApi_UnityARKit_Session_Reset_m6E5BDC9217A791D46AB29473AECF87C6AA23C151 (intptr_t ___self0, const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.ARKit.ARKitSessionSubsystem/NativeApi::UnityARKit_Session_IsSupported()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NativeApi_UnityARKit_Session_IsSupported_m47F84EF0D7E063ED761CAF1DB7ADDAFB4117ECC0 (const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.ARKit.ARKitSessionSubsystem/ARKitProvider::AtLeastOneConfigurationExists()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ARKitProvider_AtLeastOneConfigurationExists_m3D372B9D347706851AE175874CA9C1025FB186ED (ARKitProvider_t9AF751FC81DD6B052A462DBB30F46C946CE9E7CF * __this, const RuntimeMethod* method);
// UnityEngine.XR.ARSubsystems.Promise`1<!0> UnityEngine.XR.ARSubsystems.Promise`1<UnityEngine.XR.ARSubsystems.SessionAvailability>::CreateResolvedPromise(!0)
inline Promise_1_tB8B428F557CD6742430DB416C0B99C79CA1AA167 * Promise_1_CreateResolvedPromise_m5C98DBF8D42B75866FC1F8CFFBB38C8E9D36D97C (int32_t ___result0, const RuntimeMethod* method)
{
	return ((  Promise_1_tB8B428F557CD6742430DB416C0B99C79CA1AA167 * (*) (int32_t, const RuntimeMethod*))Promise_1_CreateResolvedPromise_m4772DECEBD5DFF6811D242285DE7B47DD5749CE4_gshared)(___result0, method);
}
// UnityEngine.XR.ARSubsystems.TrackingState UnityEngine.XR.ARKit.ARKitSessionSubsystem/NativeApi::UnityARKit_Session_GetTrackingState(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeApi_UnityARKit_Session_GetTrackingState_mC5652B568DE0239CB0E65B568B045C96C6BFA443 (intptr_t ___self0, const RuntimeMethod* method);
// UnityEngine.XR.ARSubsystems.NotTrackingReason UnityEngine.XR.ARKit.ARKitSessionSubsystem/NativeApi::UnityARKit_Session_GetNotTrackingReason(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeApi_UnityARKit_Session_GetNotTrackingReason_mF5ADC571097240C6274904D21130F9822AB4A143 (intptr_t ___self0, const RuntimeMethod* method);
// UnityEngine.XR.ARSubsystems.Feature UnityEngine.XR.ARKit.ARKitSessionSubsystem/NativeApi::UnityARKit_Session_GetCurrentTrackingMode(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t NativeApi_UnityARKit_Session_GetCurrentTrackingMode_mE49011F730CE22C788FB5EDF4B2D66877A145558 (intptr_t ___self0, const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.ARKit.ARKitSessionSubsystem/NativeApi::UnityARKit_Session_GetMatchFrameRateEnabled(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NativeApi_UnityARKit_Session_GetMatchFrameRateEnabled_mA3FE1542D5E6285BF2F76BC6555F918C55D3E093 (intptr_t ___self0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARKit.ARKitSessionSubsystem/NativeApi::UnityARKit_Session_SetMatchFrameRateEnabled(System.IntPtr,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeApi_UnityARKit_Session_SetMatchFrameRateEnabled_m7FA9599E9CEAA4C689F17C658C0FB04329980070 (intptr_t ___self0, bool ___enabled1, const RuntimeMethod* method);
// System.Int32 UnityEngine.XR.ARKit.ARKitSessionSubsystem/NativeApi::UnityARKit_Session_GetFrameRate(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeApi_UnityARKit_Session_GetFrameRate_mB0AF3BB53798E92113056FCEBACF3E36D1576762 (intptr_t ___self0, const RuntimeMethod* method);
// System.Void* UnityEngine.XR.ARKit.ARKitXRDepthSubsystem/ARKitProvider::UnityARKit_depth_acquireChanges(System.Void*&,System.Int32&,System.Void*&,System.Int32&,System.Void*&,System.Int32&,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* ARKitProvider_UnityARKit_depth_acquireChanges_m88E52456DB69677D14B4B21C9D7818AB56BA8412 (void** ___addedPtr0, int32_t* ___addedLength1, void** ___updatedPtr2, int32_t* ___updatedLength3, void** ___removedPtr4, int32_t* ___removedLength5, int32_t* ___elementSize6, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRPointCloud>::.ctor(System.Void*,System.Int32,System.Void*,System.Int32,System.Void*,System.Int32,!0,System.Int32,Unity.Collections.Allocator)
inline void TrackableChanges_1__ctor_mBF738909EFD3DE1CE7CEC8B5BF81B3AB51A682CD (TrackableChanges_1_t77AFD32F12A88AC162E5B41E66265CAF9D8E6435 * __this, void* ___addedPtr0, int32_t ___addedCount1, void* ___updatedPtr2, int32_t ___updatedCount3, void* ___removedPtr4, int32_t ___removedCount5, XRPointCloud_t08B41A05528E45CE709F8C14CA6C484D360A62F2  ___defaultT6, int32_t ___stride7, int32_t ___allocator8, const RuntimeMethod* method)
{
	((  void (*) (TrackableChanges_1_t77AFD32F12A88AC162E5B41E66265CAF9D8E6435 *, void*, int32_t, void*, int32_t, void*, int32_t, XRPointCloud_t08B41A05528E45CE709F8C14CA6C484D360A62F2 , int32_t, int32_t, const RuntimeMethod*))TrackableChanges_1__ctor_mBF738909EFD3DE1CE7CEC8B5BF81B3AB51A682CD_gshared)(__this, ___addedPtr0, ___addedCount1, ___updatedPtr2, ___updatedCount3, ___removedPtr4, ___removedCount5, ___defaultT6, ___stride7, ___allocator8, method);
}
// System.Void UnityEngine.XR.ARKit.ARKitXRDepthSubsystem/ARKitProvider::UnityARKit_depth_releaseChanges(System.Void*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARKitProvider_UnityARKit_depth_releaseChanges_m5E1FC86524897CCECA94CF50F0A2037E1BC36388 (void* ___changes0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARKit.ARKitXRDepthSubsystem/ARKitProvider::UnityARKit_depth_start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARKitProvider_UnityARKit_depth_start_mB9EAD72797CC6CD76A98666084EA7FD857D8BFCD (const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARKit.ARKitXRDepthSubsystem/ARKitProvider::UnityARKit_depth_stop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARKitProvider_UnityARKit_depth_stop_mA83D7E9F0EF1B35E1BB4C21B4A5336767E2DCF0E (const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.XRDepthSubsystem/Provider::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Provider__ctor_m1A368071CFCB91BC39B9760441A777FE20F86A57 (Provider_t8E88C17A70269CD3E96909AFCCA952AAA7DEC0B6 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARKit.ARKitXRDepthSubsystem/TransformPositionsJob::Execute(System.Int32)
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void TransformPositionsJob_Execute_m5ABC7C53AF619783BD8C58CB66FB8F7AF220A791 (TransformPositionsJob_t76836F51EABF9ECE4503F3ECAC1DA2C32D0DA468 * IL2CPP_PARAMETER_RESTRICT __this, int32_t ___index0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARKit.ARKitXRObjectTrackingSubsystem/ARKitProvider::UnityARKit_ObjectTracking_Stop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARKitProvider_UnityARKit_ObjectTracking_Stop_mC382D0FD771768A7B69AF8B082471D5568C09C19 (const RuntimeMethod* method);
// System.String UnityEngine.Object::get_name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Object_get_name_m0C7BC870ED2F0DC5A2FB09628136CD7D1CB82CFB (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * __this, const RuntimeMethod* method);
// System.Int32 System.String::get_Length()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline (String_t* __this, const RuntimeMethod* method);
// System.Guid UnityEngine.XR.ARSubsystems.XRReferenceObjectLibrary::get_guid()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Guid_t  XRReferenceObjectLibrary_get_guid_m47C1EC317BB367A2C7B631E20D0755C617F23728 (XRReferenceObjectLibrary_t07704B2996E507F23EE3C99CFC3BB73A83C99A7C * __this, const RuntimeMethod* method);
// UnityEngine.XR.ARKit.SetReferenceLibraryResult UnityEngine.XR.ARKit.ARKitXRObjectTrackingSubsystem/ARKitProvider::UnityARKit_ObjectTracking_TrySetLibrary(System.String,System.Int32,System.Guid)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ARKitProvider_UnityARKit_ObjectTracking_TrySetLibrary_m23987ED29F2526A2617DC8B585A79CD4C4D3E041 (String_t* ___name0, int32_t ___nameLength1, Guid_t  ___guid2, const RuntimeMethod* method);
// System.String System.String::Format(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mB3D38E5238C3164DB4D7D29339D9E225A4496D17 (String_t* ___format0, RuntimeObject * ___arg01, const RuntimeMethod* method);
// System.Void* UnityEngine.XR.ARKit.ARKitXRObjectTrackingSubsystem/ARKitProvider::UnityARKit_ObjectTracking_AcquireChanges(System.Void*&,System.Int32&,System.Void*&,System.Int32&,System.Void*&,System.Int32&,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* ARKitProvider_UnityARKit_ObjectTracking_AcquireChanges_mDFE62CF64E19EED60424B5744647B24F0F8EB1AD (void** ___addedPtr0, int32_t* ___addedLength1, void** ___updatedPtr2, int32_t* ___updatedLength3, void** ___removedPtr4, int32_t* ___removedLength5, int32_t* ___elementSize6, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRTrackedObject>::.ctor(System.Void*,System.Int32,System.Void*,System.Int32,System.Void*,System.Int32,!0,System.Int32,Unity.Collections.Allocator)
inline void TrackableChanges_1__ctor_m269B8E537869D288000375F719F5C5B87861E120 (TrackableChanges_1_t388C13B0BF202AE5F24D0BB3AE0D672AA355E1B1 * __this, void* ___addedPtr0, int32_t ___addedCount1, void* ___updatedPtr2, int32_t ___updatedCount3, void* ___removedPtr4, int32_t ___removedCount5, XRTrackedObject_t247BBE67D4F9308544C4BAD807F321E0C404EC58  ___defaultT6, int32_t ___stride7, int32_t ___allocator8, const RuntimeMethod* method)
{
	((  void (*) (TrackableChanges_1_t388C13B0BF202AE5F24D0BB3AE0D672AA355E1B1 *, void*, int32_t, void*, int32_t, void*, int32_t, XRTrackedObject_t247BBE67D4F9308544C4BAD807F321E0C404EC58 , int32_t, int32_t, const RuntimeMethod*))TrackableChanges_1__ctor_m269B8E537869D288000375F719F5C5B87861E120_gshared)(__this, ___addedPtr0, ___addedCount1, ___updatedPtr2, ___updatedCount3, ___removedPtr4, ___removedCount5, ___defaultT6, ___stride7, ___allocator8, method);
}
// System.Void UnityEngine.XR.ARKit.ARKitXRObjectTrackingSubsystem/ARKitProvider::UnityARKit_ObjectTracking_ReleaseChanges(System.Void*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARKitProvider_UnityARKit_ObjectTracking_ReleaseChanges_mCECE209C0468C8D874EE2AB5816DC9F41F463D3B (void* ___changes0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.XRObjectTrackingSubsystem/Provider::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Provider__ctor_m8E2A200EE478D4971BDAE03A8E40C9A0C7DBF576 (Provider_t35977A2A0AA6C338BC9893668DD32F0294A9C01E * __this, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARKit.ARKitXRObjectTrackingSubsystem/ARKitProvider::UnityARKit_ObjectTracking_Initialize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARKitProvider_UnityARKit_ObjectTracking_Initialize_m2D3E9211EB013DDCC555F5B0F37C767A3C13EFA2 (const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARKit.ARKitXRPlaneSubsystem/NativeApi::UnityARKit_Planes_Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeApi_UnityARKit_Planes_Start_m4C09F10B50210419AD4C94177252888CE92F7B09 (const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARKit.ARKitXRPlaneSubsystem/NativeApi::UnityARKit_Planes_Stop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeApi_UnityARKit_Planes_Stop_mB41AE77A316FED65165845418F6C9B7F5397CDBE (const RuntimeMethod* method);
// System.Void* UnityEngine.XR.ARKit.ARKitXRPlaneSubsystem/NativeApi::UnityARKit_Planes_AcquireBoundary(UnityEngine.XR.ARSubsystems.TrackableId,System.Void*&,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* NativeApi_UnityARKit_Planes_AcquireBoundary_m1AFC93AE0ADCCB51908E8643C764370B816ECAA2 (TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  ___trackableId0, void** ___verticiesPtr1, int32_t* ___numPoints2, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.XRPlaneSubsystem/Provider::CreateOrResizeNativeArrayIfNecessary<UnityEngine.Vector2>(System.Int32,Unity.Collections.Allocator,Unity.Collections.NativeArray`1<!!0>&)
inline void Provider_CreateOrResizeNativeArrayIfNecessary_TisVector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_m2DB299A15665775F0B5BDFF92CF4FA10166B614A (int32_t ___length0, int32_t ___allocator1, NativeArray_1_t431C85F30275831D1F5D458AB73DFCE050693BC0 * ___array2, const RuntimeMethod* method)
{
	((  void (*) (int32_t, int32_t, NativeArray_1_t431C85F30275831D1F5D458AB73DFCE050693BC0 *, const RuntimeMethod*))Provider_CreateOrResizeNativeArrayIfNecessary_TisVector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_m2DB299A15665775F0B5BDFF92CF4FA10166B614A_gshared)(___length0, ___allocator1, ___array2, method);
}
// Unity.Collections.NativeArray`1<!!0> Unity.Collections.LowLevel.Unsafe.NativeArrayUnsafeUtility::ConvertExistingDataToNativeArray<UnityEngine.Vector4>(System.Void*,System.Int32,Unity.Collections.Allocator)
inline NativeArray_1_t381CA7D92591F9C96DB84965C31AF8713A546156  NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisVector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_m48ABE60010404D61E53ED29A3DF2AB278D4888D9 (void* ___dataPointer0, int32_t ___length1, int32_t ___allocator2, const RuntimeMethod* method)
{
	return ((  NativeArray_1_t381CA7D92591F9C96DB84965C31AF8713A546156  (*) (void*, int32_t, int32_t, const RuntimeMethod*))NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisVector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_m48ABE60010404D61E53ED29A3DF2AB278D4888D9_gshared)(___dataPointer0, ___length1, ___allocator2, method);
}
// Unity.Jobs.JobHandle Unity.Jobs.IJobParallelForExtensions::Schedule<UnityEngine.XR.ARKit.ARKitXRPlaneSubsystem/ARKitProvider/TransformBoundaryPositionsJob>(!!0,System.Int32,System.Int32,Unity.Jobs.JobHandle)
inline JobHandle_t8AEB8D31C25D7774C71D62B0C662525E6E36D847  IJobParallelForExtensions_Schedule_TisTransformBoundaryPositionsJob_t538BF69F9F744EBC94AA0487075746AD113A64FE_m2890CB8839F696FCA3C3B4EC83DD4D59F87412B3 (TransformBoundaryPositionsJob_t538BF69F9F744EBC94AA0487075746AD113A64FE  ___jobData0, int32_t ___arrayLength1, int32_t ___innerloopBatchCount2, JobHandle_t8AEB8D31C25D7774C71D62B0C662525E6E36D847  ___dependsOn3, const RuntimeMethod* method)
{
	return ((  JobHandle_t8AEB8D31C25D7774C71D62B0C662525E6E36D847  (*) (TransformBoundaryPositionsJob_t538BF69F9F744EBC94AA0487075746AD113A64FE , int32_t, int32_t, JobHandle_t8AEB8D31C25D7774C71D62B0C662525E6E36D847 , const RuntimeMethod*))IJobParallelForExtensions_Schedule_TisTransformBoundaryPositionsJob_t538BF69F9F744EBC94AA0487075746AD113A64FE_m2890CB8839F696FCA3C3B4EC83DD4D59F87412B3_gshared)(___jobData0, ___arrayLength1, ___innerloopBatchCount2, ___dependsOn3, method);
}
// Unity.Jobs.JobHandle Unity.Jobs.IJobExtensions::Schedule<UnityEngine.XR.ARKit.ARKitXRPlaneSubsystem/ARKitProvider/FlipBoundaryWindingJob>(!!0,Unity.Jobs.JobHandle)
inline JobHandle_t8AEB8D31C25D7774C71D62B0C662525E6E36D847  IJobExtensions_Schedule_TisFlipBoundaryWindingJob_t726CFFAB953CC7C841EE74365C27322E57A2A5DA_m8E69469832F0E700BA5C13EF4E0E27930D985893 (FlipBoundaryWindingJob_t726CFFAB953CC7C841EE74365C27322E57A2A5DA  ___jobData0, JobHandle_t8AEB8D31C25D7774C71D62B0C662525E6E36D847  ___dependsOn1, const RuntimeMethod* method)
{
	return ((  JobHandle_t8AEB8D31C25D7774C71D62B0C662525E6E36D847  (*) (FlipBoundaryWindingJob_t726CFFAB953CC7C841EE74365C27322E57A2A5DA , JobHandle_t8AEB8D31C25D7774C71D62B0C662525E6E36D847 , const RuntimeMethod*))IJobExtensions_Schedule_TisFlipBoundaryWindingJob_t726CFFAB953CC7C841EE74365C27322E57A2A5DA_m8E69469832F0E700BA5C13EF4E0E27930D985893_gshared)(___jobData0, ___dependsOn1, method);
}
// System.Void Unity.Jobs.JobHandle::Complete()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JobHandle_Complete_m947DF01E0F87C3B0A24AECEBF72D245A6CDBE148 (JobHandle_t8AEB8D31C25D7774C71D62B0C662525E6E36D847 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARKit.ARKitXRPlaneSubsystem/NativeApi::UnityARKit_Planes_ReleaseBoundary(System.Void*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeApi_UnityARKit_Planes_ReleaseBoundary_m7BBCC8573ECE81635DEC9EA454FD2F92949E726D (void* ___boundary0, const RuntimeMethod* method);
// System.Void* UnityEngine.XR.ARKit.ARKitXRPlaneSubsystem/NativeApi::UnityARKit_Planes_AcquireChanges(System.Void*&,System.Int32&,System.Void*&,System.Int32&,System.Void*&,System.Int32&,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* NativeApi_UnityARKit_Planes_AcquireChanges_mAC1A778331DD752B84415A6735EA2FA2E9F67F61 (void** ___addedPtr0, int32_t* ___addedLength1, void** ___updatedPtr2, int32_t* ___updatedLength3, void** ___removedPtr4, int32_t* ___removedLength5, int32_t* ___elementSize6, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.BoundedPlane>::.ctor(System.Void*,System.Int32,System.Void*,System.Int32,System.Void*,System.Int32,!0,System.Int32,Unity.Collections.Allocator)
inline void TrackableChanges_1__ctor_mD2CDA364CBC507E983239E807C8C6EE8D3453B42 (TrackableChanges_1_t8B0834EED4AC44A71FC9071BDA349BA9D8FE0717 * __this, void* ___addedPtr0, int32_t ___addedCount1, void* ___updatedPtr2, int32_t ___updatedCount3, void* ___removedPtr4, int32_t ___removedCount5, BoundedPlane_t9001963C43ACDF4CDEA8BBF97CD783B7969B79C5  ___defaultT6, int32_t ___stride7, int32_t ___allocator8, const RuntimeMethod* method)
{
	((  void (*) (TrackableChanges_1_t8B0834EED4AC44A71FC9071BDA349BA9D8FE0717 *, void*, int32_t, void*, int32_t, void*, int32_t, BoundedPlane_t9001963C43ACDF4CDEA8BBF97CD783B7969B79C5 , int32_t, int32_t, const RuntimeMethod*))TrackableChanges_1__ctor_mD2CDA364CBC507E983239E807C8C6EE8D3453B42_gshared)(__this, ___addedPtr0, ___addedCount1, ___updatedPtr2, ___updatedCount3, ___removedPtr4, ___removedCount5, ___defaultT6, ___stride7, ___allocator8, method);
}
// System.Void UnityEngine.XR.ARKit.ARKitXRPlaneSubsystem/NativeApi::UnityARKit_Planes_ReleaseChanges(System.Void*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeApi_UnityARKit_Planes_ReleaseChanges_m55C4588490267E7189F71696755814AF1E9704DC (void* ___changes0, const RuntimeMethod* method);
// UnityEngine.XR.ARSubsystems.PlaneDetectionMode UnityEngine.XR.ARKit.ARKitXRPlaneSubsystem/NativeApi::UnityARKit_Planes_GetRequestedPlaneDetectionMode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeApi_UnityARKit_Planes_GetRequestedPlaneDetectionMode_mFE847650714117C4A01DD09F88DFD9E00F0DD89A (const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARKit.ARKitXRPlaneSubsystem/NativeApi::UnityARKit_Planes_SetRequestedPlaneDetectionMode(UnityEngine.XR.ARSubsystems.PlaneDetectionMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeApi_UnityARKit_Planes_SetRequestedPlaneDetectionMode_m6DCEFBF9E9DA72B66754360B0E8E92E12A694F46 (int32_t ___mode0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.XRPlaneSubsystem/Provider::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Provider__ctor_mDEDB208301BBA3CC96FFF2DA6AC90F5D241CE524 (Provider_t6CB5B1036B0AAED1379F3828D695A6942B72BA12 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARKit.ARKitXRPlaneSubsystem/ARKitProvider/FlipBoundaryWindingJob::Execute()
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void FlipBoundaryWindingJob_Execute_m1B890B66AFCDE4172FE7B5486839623FE89B520F (FlipBoundaryWindingJob_t726CFFAB953CC7C841EE74365C27322E57A2A5DA * IL2CPP_PARAMETER_RESTRICT __this, const RuntimeMethod* method);
// System.Void UnityEngine.Vector2::.ctor(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * __this, float ___x0, float ___y1, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARKit.ARKitXRPlaneSubsystem/ARKitProvider/TransformBoundaryPositionsJob::Execute(System.Int32)
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void TransformBoundaryPositionsJob_Execute_m4550D5EF8FB5A54ECFC43502835F7FA5EEB661CF (TransformBoundaryPositionsJob_t538BF69F9F744EBC94AA0487075746AD113A64FE * IL2CPP_PARAMETER_RESTRICT __this, int32_t ___index0, const RuntimeMethod* method);
IL2CPP_EXTERN_C void DEFAULT_CALL UnityARKit_CFRelease(intptr_t);
IL2CPP_EXTERN_C void DEFAULT_CALL UnityARKit_ImageTracking_SetDatabase(intptr_t);
IL2CPP_EXTERN_C void DEFAULT_CALL UnityARKit_ImageTracking_Stop();
IL2CPP_EXTERN_C void* DEFAULT_CALL UnityARKit_ImageTracking_AcquireChanges(void**, int32_t*, void**, int32_t*, void**, int32_t*, int32_t*);
IL2CPP_EXTERN_C void DEFAULT_CALL UnityARKit_ImageTracking_ReleaseChanges(void*);
IL2CPP_EXTERN_C intptr_t DEFAULT_CALL UnityARKit_TrackableProvider_start(intptr_t);
IL2CPP_EXTERN_C intptr_t DEFAULT_CALL UnityARKit_TrackableProvider_stop(intptr_t);
IL2CPP_EXTERN_C NativeChanges_t2AB4CBD7DD7F23F421DFD0CE4D4CDB26402D6D76  DEFAULT_CALL UnityARKit_TrackableProvider_acquireChanges(intptr_t);
IL2CPP_EXTERN_C void DEFAULT_CALL UnityARKit_TrackableProvider_copyChanges(intptr_t, NativeChanges_t2AB4CBD7DD7F23F421DFD0CE4D4CDB26402D6D76 , int32_t, void*, void*, void*);
IL2CPP_EXTERN_C int32_t DEFAULT_CALL UnityARKit_Version_AtLeast11_0();
IL2CPP_EXTERN_C int32_t DEFAULT_CALL UnityARKit_Version_AtLeast11_3();
IL2CPP_EXTERN_C int32_t DEFAULT_CALL UnityARKit_Version_AtLeast12_0();
IL2CPP_EXTERN_C int32_t DEFAULT_CALL UnityARKit_Version_AtLeast13_0();
IL2CPP_EXTERN_C void DEFAULT_CALL UnityARKit_EnsureRootViewIsSetup();
IL2CPP_EXTERN_C void DEFAULT_CALL UnityARKit_Session_SetFeatureRequested(uint64_t, int32_t);
IL2CPP_EXTERN_C uint64_t DEFAULT_CALL UnityARKit_Session_GetRequestedFeatures();
IL2CPP_EXTERN_C void DEFAULT_CALL UnityARKit_disposeWorldMap(int32_t);
IL2CPP_EXTERN_C void DEFAULT_CALL UnityARKit_EnvironmentProbeProvider_Construct();
IL2CPP_EXTERN_C void DEFAULT_CALL UnityARKit_EnvironmentProbeProvider_Start();
IL2CPP_EXTERN_C void DEFAULT_CALL UnityARKit_EnvironmentProbeProvider_Stop();
IL2CPP_EXTERN_C intptr_t DEFAULT_CALL UnityARKit_EnvironmentProbeProvider_AcquireChanges(int32_t*, intptr_t*, int32_t*, intptr_t*, int32_t*, intptr_t*, int32_t*);
IL2CPP_EXTERN_C void DEFAULT_CALL UnityARKit_EnvironmentProbeProvider_ReleaseChanges(intptr_t);
IL2CPP_EXTERN_C int32_t DEFAULT_CALL UnityARKit_TrackableChanges_addedLength(NativeChanges_t2AB4CBD7DD7F23F421DFD0CE4D4CDB26402D6D76 );
IL2CPP_EXTERN_C int32_t DEFAULT_CALL UnityARKit_TrackableChanges_updatedLength(NativeChanges_t2AB4CBD7DD7F23F421DFD0CE4D4CDB26402D6D76 );
IL2CPP_EXTERN_C int32_t DEFAULT_CALL UnityARKit_TrackableChanges_removedLength(NativeChanges_t2AB4CBD7DD7F23F421DFD0CE4D4CDB26402D6D76 );
IL2CPP_EXTERN_C void DEFAULT_CALL UnityARKit_refPoints_onStart();
IL2CPP_EXTERN_C void DEFAULT_CALL UnityARKit_refPoints_onStop();
IL2CPP_EXTERN_C void* DEFAULT_CALL UnityARKit_refPoints_acquireChanges(void**, int32_t*, void**, int32_t*, void**, int32_t*, int32_t*);
IL2CPP_EXTERN_C void DEFAULT_CALL UnityARKit_refPoints_releaseChanges(void*);
IL2CPP_EXTERN_C uint64_t DEFAULT_CALL UnityARKit_Camera_GetCurrentLightEstimation();
IL2CPP_EXTERN_C void DEFAULT_CALL UnityARKit_Camera_Construct(int32_t, int32_t);
IL2CPP_EXTERN_C void DEFAULT_CALL UnityARKit_Camera_Start();
IL2CPP_EXTERN_C void DEFAULT_CALL UnityARKit_Camera_Stop();
IL2CPP_EXTERN_C int32_t DEFAULT_CALL UnityARKit_Camera_TryGetFrame(XRCameraParams_t9FCECBDAEFCC1084042B75393990959B28B64B18 , XRCameraFrame_t5FD7B7FC22B478AC6B00AD01A0AD6F2295EA1BA8 *);
IL2CPP_EXTERN_C int32_t DEFAULT_CALL UnityARKit_Camera_TryGetIntrinsics(XRCameraIntrinsics_t85F1514E263A6C6DE96DBA5448B44F11F35395FD *);
IL2CPP_EXTERN_C int32_t DEFAULT_CALL UnityARKit_Camera_IsCameraPermissionGranted();
IL2CPP_EXTERN_C intptr_t DEFAULT_CALL UnityARKit_Camera_AcquireConfigurations(int32_t*, int32_t*);
IL2CPP_EXTERN_C void DEFAULT_CALL UnityARKit_Camera_ReleaseConfigurations(intptr_t);
IL2CPP_EXTERN_C int32_t DEFAULT_CALL UnityARKit_Camera_TryGetCurrentConfiguration(XRCameraConfiguration_t2393055E5547307393E9C73AB13B95E0785A4F7A *);
IL2CPP_EXTERN_C int32_t DEFAULT_CALL UnityARKit_Camera_TrySetCurrentConfiguration(XRCameraConfiguration_t2393055E5547307393E9C73AB13B95E0785A4F7A );
IL2CPP_EXTERN_C void* DEFAULT_CALL UnityARKit_Camera_AcquireTextureDescriptors(int32_t*, int32_t*);
IL2CPP_EXTERN_C void DEFAULT_CALL UnityARKit_Camera_ReleaseTextureDescriptors(void*);
IL2CPP_EXTERN_C uint64_t DEFAULT_CALL UnityARKit_Camera_GetCurrentCamera();
IL2CPP_EXTERN_C int32_t DEFAULT_CALL UnityARKit_Camera_GetAutoFocusEnabled();
IL2CPP_EXTERN_C int32_t DEFAULT_CALL UnityARKit_CpuImage_TryAcquireLatestImage(int32_t, Cinfo_t4E32E30AF6973611F1DD0F47FC041ED3A8775DA6 *);
IL2CPP_EXTERN_C void DEFAULT_CALL UnityARKit_CpuImage_DisposeImage(int32_t);
IL2CPP_EXTERN_C void DEFAULT_CALL UnityARKit_HumanBodyProvider_Construct();
IL2CPP_EXTERN_C void DEFAULT_CALL UnityARKit_HumanBodyProvider_Start();
IL2CPP_EXTERN_C void DEFAULT_CALL UnityARKit_HumanBodyProvider_Stop();
IL2CPP_EXTERN_C void* DEFAULT_CALL UnityARKit_HumanBodyProvider_AcquireChanges(int32_t*, void**, int32_t*, void**, int32_t*, void**, int32_t*);
IL2CPP_EXTERN_C void DEFAULT_CALL UnityARKit_HumanBodyProvider_ReleaseChanges(void*);
IL2CPP_EXTERN_C int32_t DEFAULT_CALL UnityARKit_HumanBodyProvider_DoesSupportBodyPose2DEstimation();
IL2CPP_EXTERN_C int32_t DEFAULT_CALL UnityARKit_HumanBodyProvider_DoesSupportBodyPose3DEstimation();
IL2CPP_EXTERN_C int32_t DEFAULT_CALL UnityARKit_HumanBodyProvider_DoesSupportBodyPose3DScaleEstimation();
IL2CPP_EXTERN_C int32_t DEFAULT_CALL UnityARKit_ImageDatabase_AddImage(intptr_t, void*, int32_t, int32_t, int32_t, float, ManagedReferenceImage_t867FD513C8CBF1F9824DBFB215783BE8C33F0FA1 *);
IL2CPP_EXTERN_C void DEFAULT_CALL UnityARKit_OcclusionProvider_Construct(int32_t, int32_t);
IL2CPP_EXTERN_C void DEFAULT_CALL UnityARKit_OcclusionProvider_Start();
IL2CPP_EXTERN_C void DEFAULT_CALL UnityARKit_OcclusionProvider_Stop();
IL2CPP_EXTERN_C int32_t DEFAULT_CALL UnityARKit_OcclusionProvider_DoesSupportBodySegmentationStencil();
IL2CPP_EXTERN_C int32_t DEFAULT_CALL UnityARKit_OcclusionProvider_DoesSupportBodySegmentationDepth();
IL2CPP_EXTERN_C intptr_t DEFAULT_CALL UnityARKit_Participant_init();
IL2CPP_EXTERN_C void DEFAULT_CALL UnityARKit_Raycast_AcquireHitResults(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 , int32_t, void**, int32_t*);
IL2CPP_EXTERN_C void DEFAULT_CALL UnityARKit_Raycast_CopyAndReleaseHitResults(void*, int32_t, void*, void*);
IL2CPP_EXTERN_C intptr_t DEFAULT_CALL UnityARKit_Raycast_Construct();
IL2CPP_EXTERN_C void DEFAULT_CALL UnityARKit_Raycast_Start(intptr_t);
IL2CPP_EXTERN_C void DEFAULT_CALL UnityARKit_Raycast_Stop(intptr_t);
IL2CPP_EXTERN_C void DEFAULT_CALL UnityARKit_Raycast_AcquireChanges(intptr_t, XRRaycast_tA18F9107EFF1D692E70EF15233BB6134A5F66C55 **, int32_t*, XRRaycast_tA18F9107EFF1D692E70EF15233BB6134A5F66C55 **, int32_t*, TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B **, int32_t*, int32_t*);
IL2CPP_EXTERN_C void DEFAULT_CALL UnityARKit_Raycast_ReleaseChanges(XRRaycast_tA18F9107EFF1D692E70EF15233BB6134A5F66C55 *, XRRaycast_tA18F9107EFF1D692E70EF15233BB6134A5F66C55 *, TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B *);
IL2CPP_EXTERN_C int32_t DEFAULT_CALL UnityARKit_Raycast_TryAddRaycast(intptr_t, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E , Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E , float, XRRaycast_tA18F9107EFF1D692E70EF15233BB6134A5F66C55 *);
IL2CPP_EXTERN_C void DEFAULT_CALL UnityARKit_Raycast_RemoveRaycast(intptr_t, TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B );
IL2CPP_EXTERN_C int32_t DEFAULT_CALL UnityARKit_Session_IsSupported();
IL2CPP_EXTERN_C void DEFAULT_CALL UnityARKit_Session_Update(intptr_t, intptr_t, uint64_t);
IL2CPP_EXTERN_C int32_t DEFAULT_CALL UnityARKit_Session_GetConfigurationDescriptors(intptr_t, intptr_t, int32_t, int32_t);
IL2CPP_EXTERN_C intptr_t DEFAULT_CALL UnityARKit_Session_Construct();
IL2CPP_EXTERN_C void DEFAULT_CALL UnityARKit_Session_Resume(intptr_t);
IL2CPP_EXTERN_C void DEFAULT_CALL UnityARKit_Session_Pause(intptr_t);
IL2CPP_EXTERN_C void DEFAULT_CALL UnityARKit_Session_Reset(intptr_t);
IL2CPP_EXTERN_C int32_t DEFAULT_CALL UnityARKit_Session_GetTrackingState(intptr_t);
IL2CPP_EXTERN_C int32_t DEFAULT_CALL UnityARKit_Session_GetNotTrackingReason(intptr_t);
IL2CPP_EXTERN_C int32_t DEFAULT_CALL UnityARKit_Session_GetMatchFrameRateEnabled(intptr_t);
IL2CPP_EXTERN_C void DEFAULT_CALL UnityARKit_Session_SetMatchFrameRateEnabled(intptr_t, int32_t);
IL2CPP_EXTERN_C int32_t DEFAULT_CALL UnityARKit_Session_GetFrameRate(intptr_t);
IL2CPP_EXTERN_C uint64_t DEFAULT_CALL UnityARKit_Session_GetCurrentTrackingMode(intptr_t);
IL2CPP_EXTERN_C void DEFAULT_CALL UnityARKit_depth_start();
IL2CPP_EXTERN_C void DEFAULT_CALL UnityARKit_depth_stop();
IL2CPP_EXTERN_C void* DEFAULT_CALL UnityARKit_depth_acquireChanges(void**, int32_t*, void**, int32_t*, void**, int32_t*, int32_t*);
IL2CPP_EXTERN_C void DEFAULT_CALL UnityARKit_depth_releaseChanges(void*);
IL2CPP_EXTERN_C void DEFAULT_CALL UnityARKit_ObjectTracking_Initialize();
IL2CPP_EXTERN_C void DEFAULT_CALL UnityARKit_ObjectTracking_Stop();
IL2CPP_EXTERN_C int32_t DEFAULT_CALL UnityARKit_ObjectTracking_TrySetLibrary(Il2CppChar*, int32_t, Guid_t );
IL2CPP_EXTERN_C void* DEFAULT_CALL UnityARKit_ObjectTracking_AcquireChanges(void**, int32_t*, void**, int32_t*, void**, int32_t*, int32_t*);
IL2CPP_EXTERN_C void DEFAULT_CALL UnityARKit_ObjectTracking_ReleaseChanges(void*);
IL2CPP_EXTERN_C int32_t DEFAULT_CALL UnityARKit_Planes_SupportsClassification();
IL2CPP_EXTERN_C void DEFAULT_CALL UnityARKit_Planes_Start();
IL2CPP_EXTERN_C void DEFAULT_CALL UnityARKit_Planes_Stop();
IL2CPP_EXTERN_C void* DEFAULT_CALL UnityARKit_Planes_AcquireChanges(void**, int32_t*, void**, int32_t*, void**, int32_t*, int32_t*);
IL2CPP_EXTERN_C void DEFAULT_CALL UnityARKit_Planes_ReleaseChanges(void*);
IL2CPP_EXTERN_C int32_t DEFAULT_CALL UnityARKit_Planes_GetRequestedPlaneDetectionMode();
IL2CPP_EXTERN_C void DEFAULT_CALL UnityARKit_Planes_SetRequestedPlaneDetectionMode(int32_t);
IL2CPP_EXTERN_C void* DEFAULT_CALL UnityARKit_Planes_AcquireBoundary(TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B , void**, int32_t*);
IL2CPP_EXTERN_C void DEFAULT_CALL UnityARKit_Planes_ReleaseBoundary(void*);
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
// System.Void UnityEngine.XR.ARKit.ARKitAnchorSubsystem::RegisterDescriptor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARKitAnchorSubsystem_RegisterDescriptor_mCBDCFF12221785197B5DAB80B2739D692B293013 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ARKitAnchorSubsystem_t721F48C4B69507D7E38664A68AA42DD1DF75B3DF_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ARKitProvider_tE10DC6803776ECE42E55F127E68C47E50319202E_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6D7125BFB6B08212CAAD55197B7FE167CE82051D);
		s_Il2CppMethodInitialized = true;
	}
	Cinfo_tF42131D7F2B721976AAF20DD0240D9C46397F7F7  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		//             var cinfo = new XRAnchorSubsystemDescriptor.Cinfo
		//             {
		//                 id = "ARKit-Anchor",
		// #if UNITY_2020_2_OR_NEWER
		//                 providerType = typeof(ARKitAnchorSubsystem.ARKitProvider),
		//                 subsystemTypeOverride = typeof(ARKitAnchorSubsystem),
		// #else
		//                 subsystemImplementationType = typeof(ARKitAnchorSubsystem),
		// #endif
		//                 supportsTrackableAttachments = true
		//             };
		il2cpp_codegen_initobj((&V_0), sizeof(Cinfo_tF42131D7F2B721976AAF20DD0240D9C46397F7F7 ));
		Cinfo_set_id_mCB169DF169C36D9D12651785DCBF71ABCC10FD9D_inline((Cinfo_tF42131D7F2B721976AAF20DD0240D9C46397F7F7 *)(&V_0), _stringLiteral6D7125BFB6B08212CAAD55197B7FE167CE82051D, /*hidden argument*/NULL);
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_0 = { reinterpret_cast<intptr_t> (ARKitProvider_tE10DC6803776ECE42E55F127E68C47E50319202E_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_1;
		L_1 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_0, /*hidden argument*/NULL);
		Cinfo_set_providerType_m9E012FF4CD325826F838F663BAEE045C452A3C26_inline((Cinfo_tF42131D7F2B721976AAF20DD0240D9C46397F7F7 *)(&V_0), L_1, /*hidden argument*/NULL);
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_2 = { reinterpret_cast<intptr_t> (ARKitAnchorSubsystem_t721F48C4B69507D7E38664A68AA42DD1DF75B3DF_0_0_0_var) };
		Type_t * L_3;
		L_3 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_2, /*hidden argument*/NULL);
		Cinfo_set_subsystemTypeOverride_mC525A48B08F8F826275950FFB61C780C4AEA6A6B_inline((Cinfo_tF42131D7F2B721976AAF20DD0240D9C46397F7F7 *)(&V_0), L_3, /*hidden argument*/NULL);
		Cinfo_set_supportsTrackableAttachments_m0B0516A50FFA22C3F60483E3498DC6BB1D460995_inline((Cinfo_tF42131D7F2B721976AAF20DD0240D9C46397F7F7 *)(&V_0), (bool)1, /*hidden argument*/NULL);
		Cinfo_tF42131D7F2B721976AAF20DD0240D9C46397F7F7  L_4 = V_0;
		// XRAnchorSubsystemDescriptor.Create(cinfo);
		XRAnchorSubsystemDescriptor_Create_m32C16A0DDC60ED2D374EFB884CF807E62B37C0A8(L_4, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.XR.ARKit.ARKitAnchorSubsystem::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARKitAnchorSubsystem__ctor_m0493FC16FF7E2212B42A4D547663C21D68B764A4 (ARKitAnchorSubsystem_t721F48C4B69507D7E38664A68AA42DD1DF75B3DF * __this, const RuntimeMethod* method)
{
	{
		XRAnchorSubsystem__ctor_mB5F70C2E39B5EA531C05244611590F400365265A(__this, /*hidden argument*/NULL);
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
// System.String UnityEngine.XR.ARKit.ARKitCameraSubsystem::get_backgroundShaderName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ARKitCameraSubsystem_get_backgroundShaderName_m0856B4F3C1E036760386F1BED04D029698D0F94F (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8FCD874487FC15E93E93290A9C751C9F9195F03E);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static string backgroundShaderName => k_BackgroundShaderName;
		return _stringLiteral8FCD874487FC15E93E93290A9C751C9F9195F03E;
	}
}
// System.Void UnityEngine.XR.ARKit.ARKitCameraSubsystem::Register()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARKitCameraSubsystem_Register_mF559F13DCE5DDF036431710C6D0E4B776824F5F4 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ARKitCameraSubsystem_tE327D2A1BE7A0BD90A9353C8EDBDE9A882315245_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ARKitProvider_tA94DC507BD799F0EB939B5D43E47850858DD9252_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral00D54E4228F0F7653E4C33C608B8CF61178F3D9A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCFA86DA9F9B859D235587DD8755E3EF4827AEEF1);
		s_Il2CppMethodInitialized = true;
	}
	XRCameraSubsystemCinfo_tFC7E8E15AD29D15868FBCE758A26ADCB5E9A5096  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// if (!Api.AtLeast11_0())
		bool L_0;
		L_0 = Api_AtLeast11_0_m8F8F08B2547F4D98BD2665B403F20F9F95ACA48F(/*hidden argument*/NULL);
		if (L_0)
		{
			goto IL_0008;
		}
	}
	{
		// return;
		return;
	}

IL_0008:
	{
		//             XRCameraSubsystemCinfo cameraSubsystemCinfo = new XRCameraSubsystemCinfo
		//             {
		//                 id = k_SubsystemId,
		// #if UNITY_2020_2_OR_NEWER
		//                 providerType = typeof(ARKitCameraSubsystem.ARKitProvider),
		//                 subsystemTypeOverride = typeof(ARKitCameraSubsystem),
		// #else
		//                 implementationType = typeof(ARKitCameraSubsystem),
		// #endif
		//                 supportsAverageBrightness = false,
		//                 supportsAverageColorTemperature = true,
		//                 supportsColorCorrection = false,
		//                 supportsDisplayMatrix = true,
		//                 supportsProjectionMatrix = true,
		//                 supportsTimestamp = true,
		//                 supportsCameraConfigurations = true,
		//                 supportsCameraImage = true,
		//                 supportsAverageIntensityInLumens = true,
		//                 supportsFocusModes = true,
		//                 supportsFaceTrackingAmbientIntensityLightEstimation = true,
		//                 supportsFaceTrackingHDRLightEstimation = true,
		//                 supportsWorldTrackingAmbientIntensityLightEstimation = true,
		//                 supportsWorldTrackingHDRLightEstimation = false,
		//                 supportsCameraGrain = Api.AtLeast13_0(),
		//             };
		il2cpp_codegen_initobj((&V_0), sizeof(XRCameraSubsystemCinfo_tFC7E8E15AD29D15868FBCE758A26ADCB5E9A5096 ));
		XRCameraSubsystemCinfo_set_id_m768994793A205C7D5CE603B354D350A34D47720D_inline((XRCameraSubsystemCinfo_tFC7E8E15AD29D15868FBCE758A26ADCB5E9A5096 *)(&V_0), _stringLiteral00D54E4228F0F7653E4C33C608B8CF61178F3D9A, /*hidden argument*/NULL);
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_1 = { reinterpret_cast<intptr_t> (ARKitProvider_tA94DC507BD799F0EB939B5D43E47850858DD9252_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_2;
		L_2 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_1, /*hidden argument*/NULL);
		XRCameraSubsystemCinfo_set_providerType_m78F56C5CEF9FF62F60DE6073B8AD0FB0AFD00730_inline((XRCameraSubsystemCinfo_tFC7E8E15AD29D15868FBCE758A26ADCB5E9A5096 *)(&V_0), L_2, /*hidden argument*/NULL);
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_3 = { reinterpret_cast<intptr_t> (ARKitCameraSubsystem_tE327D2A1BE7A0BD90A9353C8EDBDE9A882315245_0_0_0_var) };
		Type_t * L_4;
		L_4 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_3, /*hidden argument*/NULL);
		XRCameraSubsystemCinfo_set_subsystemTypeOverride_mD4D22BB1EC102CA40AF084B06DA3C957139EF2D4_inline((XRCameraSubsystemCinfo_tFC7E8E15AD29D15868FBCE758A26ADCB5E9A5096 *)(&V_0), L_4, /*hidden argument*/NULL);
		XRCameraSubsystemCinfo_set_supportsAverageBrightness_mC20A88BD3C8D137A1F34888C64DC5FFF37787759_inline((XRCameraSubsystemCinfo_tFC7E8E15AD29D15868FBCE758A26ADCB5E9A5096 *)(&V_0), (bool)0, /*hidden argument*/NULL);
		XRCameraSubsystemCinfo_set_supportsAverageColorTemperature_m77727C8CBAB59D0D078B0A634EB0A56F1BF368E4_inline((XRCameraSubsystemCinfo_tFC7E8E15AD29D15868FBCE758A26ADCB5E9A5096 *)(&V_0), (bool)1, /*hidden argument*/NULL);
		XRCameraSubsystemCinfo_set_supportsColorCorrection_m1CBB9181A21D2A964705AD5E22F78735DCFE2C01_inline((XRCameraSubsystemCinfo_tFC7E8E15AD29D15868FBCE758A26ADCB5E9A5096 *)(&V_0), (bool)0, /*hidden argument*/NULL);
		XRCameraSubsystemCinfo_set_supportsDisplayMatrix_m2E11C0B7442273252613BDB41BB8B6F02698FBEA_inline((XRCameraSubsystemCinfo_tFC7E8E15AD29D15868FBCE758A26ADCB5E9A5096 *)(&V_0), (bool)1, /*hidden argument*/NULL);
		XRCameraSubsystemCinfo_set_supportsProjectionMatrix_mFC886F8859FDF308D7980935474AA0E66ECF66B4_inline((XRCameraSubsystemCinfo_tFC7E8E15AD29D15868FBCE758A26ADCB5E9A5096 *)(&V_0), (bool)1, /*hidden argument*/NULL);
		XRCameraSubsystemCinfo_set_supportsTimestamp_mAA6157EC368F6358F155571E257A578729D368D4_inline((XRCameraSubsystemCinfo_tFC7E8E15AD29D15868FBCE758A26ADCB5E9A5096 *)(&V_0), (bool)1, /*hidden argument*/NULL);
		XRCameraSubsystemCinfo_set_supportsCameraConfigurations_mD0F431DDAB4F82DDC6E35AB7583572D25244E0F0_inline((XRCameraSubsystemCinfo_tFC7E8E15AD29D15868FBCE758A26ADCB5E9A5096 *)(&V_0), (bool)1, /*hidden argument*/NULL);
		XRCameraSubsystemCinfo_set_supportsCameraImage_m2140EBB7ACEA9B1634F56DE2DCB85F26CB8C4D7D_inline((XRCameraSubsystemCinfo_tFC7E8E15AD29D15868FBCE758A26ADCB5E9A5096 *)(&V_0), (bool)1, /*hidden argument*/NULL);
		XRCameraSubsystemCinfo_set_supportsAverageIntensityInLumens_m49462C178EF35B3E688EE6711FD3E41E9C1976AB_inline((XRCameraSubsystemCinfo_tFC7E8E15AD29D15868FBCE758A26ADCB5E9A5096 *)(&V_0), (bool)1, /*hidden argument*/NULL);
		XRCameraSubsystemCinfo_set_supportsFocusModes_m2F70E7EFC54E2F930DEA28DC4922125E01FE3026_inline((XRCameraSubsystemCinfo_tFC7E8E15AD29D15868FBCE758A26ADCB5E9A5096 *)(&V_0), (bool)1, /*hidden argument*/NULL);
		XRCameraSubsystemCinfo_set_supportsFaceTrackingAmbientIntensityLightEstimation_m93740733F66607C53F3928946A79CE732EAF9EF9_inline((XRCameraSubsystemCinfo_tFC7E8E15AD29D15868FBCE758A26ADCB5E9A5096 *)(&V_0), (bool)1, /*hidden argument*/NULL);
		XRCameraSubsystemCinfo_set_supportsFaceTrackingHDRLightEstimation_mD76A9A9A127118388FBD2E971246303BB2BE0F0C_inline((XRCameraSubsystemCinfo_tFC7E8E15AD29D15868FBCE758A26ADCB5E9A5096 *)(&V_0), (bool)1, /*hidden argument*/NULL);
		XRCameraSubsystemCinfo_set_supportsWorldTrackingAmbientIntensityLightEstimation_mE9B47A05DA11B6C6FFCB6FFED773ADB464130C5B_inline((XRCameraSubsystemCinfo_tFC7E8E15AD29D15868FBCE758A26ADCB5E9A5096 *)(&V_0), (bool)1, /*hidden argument*/NULL);
		XRCameraSubsystemCinfo_set_supportsWorldTrackingHDRLightEstimation_m92AC9270D4D5FA4C61ED353406511B3877E5D9D4_inline((XRCameraSubsystemCinfo_tFC7E8E15AD29D15868FBCE758A26ADCB5E9A5096 *)(&V_0), (bool)0, /*hidden argument*/NULL);
		bool L_5;
		L_5 = Api_AtLeast13_0_m360C671110F052FFD92FF0FC1A18BBDBF8D1576E(/*hidden argument*/NULL);
		XRCameraSubsystemCinfo_set_supportsCameraGrain_m8BF26C263FED0D5106C436091BD8C25BFF8FD755_inline((XRCameraSubsystemCinfo_tFC7E8E15AD29D15868FBCE758A26ADCB5E9A5096 *)(&V_0), L_5, /*hidden argument*/NULL);
		XRCameraSubsystemCinfo_tFC7E8E15AD29D15868FBCE758A26ADCB5E9A5096  L_6 = V_0;
		// if (!XRCameraSubsystem.Register(cameraSubsystemCinfo))
		bool L_7;
		L_7 = XRCameraSubsystem_Register_m8E9CD378020A98CC1728A5C0A3324D25439921F4(L_6, /*hidden argument*/NULL);
		if (L_7)
		{
			goto IL_00da;
		}
	}
	{
		// Debug.LogErrorFormat("Cannot register the {0} subsystem", k_SubsystemId);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_8 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_9 = L_8;
		NullCheck(L_9);
		ArrayElementTypeCheck (L_9, _stringLiteral00D54E4228F0F7653E4C33C608B8CF61178F3D9A);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)_stringLiteral00D54E4228F0F7653E4C33C608B8CF61178F3D9A);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_LogErrorFormat_mDBF43684A22EAAB187285C9B4174C9555DB11E83(_stringLiteralCFA86DA9F9B859D235587DD8755E3EF4827AEEF1, L_9, /*hidden argument*/NULL);
	}

IL_00da:
	{
		// }
		return;
	}
}
// System.Void UnityEngine.XR.ARKit.ARKitCameraSubsystem::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARKitCameraSubsystem__ctor_mB77B63959B91E1835689E7E9E706EA7A819822C6 (ARKitCameraSubsystem_tE327D2A1BE7A0BD90A9353C8EDBDE9A882315245 * __this, const RuntimeMethod* method)
{
	{
		XRCameraSubsystem__ctor_m9DB793A0291AEB063BE13955137FCF52B8A6E222(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.XR.ARKit.ARKitCameraSubsystem::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARKitCameraSubsystem__cctor_m06F5E55B1EDE6181214C6952380E39286A3B88DA (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ARKitCameraSubsystem_tE327D2A1BE7A0BD90A9353C8EDBDE9A882315245_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m627ED3F7C50096BB8934F778CB980E79483BD2AE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m30C52A4F2828D86CA3FAB0B1B583948F4DA9F1F9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral34DB7C411D03036F0D06F00351078A370EA0A603);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8710D8B4E16855F019CB68A747E4078E34957226);
		s_Il2CppMethodInitialized = true;
	}
	{
		//         static readonly List<string> k_BackgroundShaderKeywordsToNotCompile = new List<string> {
		// #if !MODULE_URP_ENABLED
		//             k_BackgroundShaderKeywordURP,
		// #endif // !MODULE_URP_ENABLED
		// #if !MODULE_LWRP_ENABLED
		//             k_BackgroundShaderKeywordLWRP,
		// #endif // !MODULE_LWRP_ENABLED
		//         };
		List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_0 = (List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 *)il2cpp_codegen_object_new(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3_il2cpp_TypeInfo_var);
		List_1__ctor_m30C52A4F2828D86CA3FAB0B1B583948F4DA9F1F9(L_0, /*hidden argument*/List_1__ctor_m30C52A4F2828D86CA3FAB0B1B583948F4DA9F1F9_RuntimeMethod_var);
		List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_1 = L_0;
		NullCheck(L_1);
		List_1_Add_m627ED3F7C50096BB8934F778CB980E79483BD2AE(L_1, _stringLiteral34DB7C411D03036F0D06F00351078A370EA0A603, /*hidden argument*/List_1_Add_m627ED3F7C50096BB8934F778CB980E79483BD2AE_RuntimeMethod_var);
		List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_2 = L_1;
		NullCheck(L_2);
		List_1_Add_m627ED3F7C50096BB8934F778CB980E79483BD2AE(L_2, _stringLiteral8710D8B4E16855F019CB68A747E4078E34957226, /*hidden argument*/List_1_Add_m627ED3F7C50096BB8934F778CB980E79483BD2AE_RuntimeMethod_var);
		((ARKitCameraSubsystem_tE327D2A1BE7A0BD90A9353C8EDBDE9A882315245_StaticFields*)il2cpp_codegen_static_fields_for(ARKitCameraSubsystem_tE327D2A1BE7A0BD90A9353C8EDBDE9A882315245_il2cpp_TypeInfo_var))->set_k_BackgroundShaderKeywordsToNotCompile_4(L_2);
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
// UnityEngine.XR.ARKit.ARKitCpuImageApi UnityEngine.XR.ARKit.ARKitCpuImageApi::get_instance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ARKitCpuImageApi_tD94B983FBF13116F7497F2089555084CCAC47D59 * ARKitCpuImageApi_get_instance_m6514121C177EF3FE7E2FD99C430A48C29D9245CA (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ARKitCpuImageApi_tD94B983FBF13116F7497F2089555084CCAC47D59_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static ARKitCpuImageApi instance { get; } = new ARKitCpuImageApi();
		IL2CPP_RUNTIME_CLASS_INIT(ARKitCpuImageApi_tD94B983FBF13116F7497F2089555084CCAC47D59_il2cpp_TypeInfo_var);
		ARKitCpuImageApi_tD94B983FBF13116F7497F2089555084CCAC47D59 * L_0 = ((ARKitCpuImageApi_tD94B983FBF13116F7497F2089555084CCAC47D59_StaticFields*)il2cpp_codegen_static_fields_for(ARKitCpuImageApi_tD94B983FBF13116F7497F2089555084CCAC47D59_il2cpp_TypeInfo_var))->get_U3CinstanceU3Ek__BackingField_0();
		return L_0;
	}
}
// System.Void UnityEngine.XR.ARKit.ARKitCpuImageApi::DisposeImage(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARKitCpuImageApi_DisposeImage_mE5B5F7F4EBA2D2B2F5377B21AD0E77956401B91B (ARKitCpuImageApi_tD94B983FBF13116F7497F2089555084CCAC47D59 * __this, int32_t ___nativeHandle0, const RuntimeMethod* method)
{
	{
		// public override void DisposeImage(int nativeHandle) => Native.DisposeImage(nativeHandle);
		int32_t L_0 = ___nativeHandle0;
		Native_DisposeImage_mF9DCD764FDD0B24A9FF7019AEBBA12EDF1EF28A5(L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean UnityEngine.XR.ARKit.ARKitCpuImageApi::TryAcquireLatestImage(UnityEngine.XR.ARKit.ARKitCpuImageApi/ImageType,UnityEngine.XR.ARSubsystems.XRCpuImage/Cinfo&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ARKitCpuImageApi_TryAcquireLatestImage_m70DB2A52D021DD6A02E767699383A7E151C0D8E2 (int32_t ___imageType0, Cinfo_t4E32E30AF6973611F1DD0F47FC041ED3A8775DA6 * ___cinfo1, const RuntimeMethod* method)
{
	{
		// => Native.TryAcquireLatestImage(imageType, out cinfo);
		int32_t L_0 = ___imageType0;
		Cinfo_t4E32E30AF6973611F1DD0F47FC041ED3A8775DA6 * L_1 = ___cinfo1;
		bool L_2;
		L_2 = Native_TryAcquireLatestImage_mCCB4F92708AFADE4D71E26B87A57DC0BD8569487(L_0, (Cinfo_t4E32E30AF6973611F1DD0F47FC041ED3A8775DA6 *)L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Void UnityEngine.XR.ARKit.ARKitCpuImageApi::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARKitCpuImageApi__ctor_mF5D85DE3D54CF57425137A6940450F57A3C3C553 (ARKitCpuImageApi_tD94B983FBF13116F7497F2089555084CCAC47D59 * __this, const RuntimeMethod* method)
{
	{
		Api__ctor_mEC96F88C341E160F9DDE41F5FA275DFAFF8522BA(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.XR.ARKit.ARKitCpuImageApi::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARKitCpuImageApi__cctor_m6AD5076C95B390ED3F04B56A745242AE2564E987 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ARKitCpuImageApi_tD94B983FBF13116F7497F2089555084CCAC47D59_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1_Add_mF5186C7EFED02C844FC23546EFB8A3CB5B1E62CA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1__ctor_m42658446DE9E2709FD2DAF4F47CE5FC2A42351CD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1_t7981318DC35BC53AD64634B2D643DD6055A39054_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static ARKitCpuImageApi instance { get; } = new ARKitCpuImageApi();
		ARKitCpuImageApi_tD94B983FBF13116F7497F2089555084CCAC47D59 * L_0 = (ARKitCpuImageApi_tD94B983FBF13116F7497F2089555084CCAC47D59 *)il2cpp_codegen_object_new(ARKitCpuImageApi_tD94B983FBF13116F7497F2089555084CCAC47D59_il2cpp_TypeInfo_var);
		ARKitCpuImageApi__ctor_mF5D85DE3D54CF57425137A6940450F57A3C3C553(L_0, /*hidden argument*/NULL);
		((ARKitCpuImageApi_tD94B983FBF13116F7497F2089555084CCAC47D59_StaticFields*)il2cpp_codegen_static_fields_for(ARKitCpuImageApi_tD94B983FBF13116F7497F2089555084CCAC47D59_il2cpp_TypeInfo_var))->set_U3CinstanceU3Ek__BackingField_0(L_0);
		// static readonly HashSet<TextureFormat> s_SupportedVideoConversionFormats = new HashSet<TextureFormat>
		// {
		//     TextureFormat.Alpha8,
		//     TextureFormat.R8,
		//     TextureFormat.RGB24,
		//     TextureFormat.RGBA32,
		//     TextureFormat.ARGB32,
		//     TextureFormat.BGRA32,
		// };
		HashSet_1_t7981318DC35BC53AD64634B2D643DD6055A39054 * L_1 = (HashSet_1_t7981318DC35BC53AD64634B2D643DD6055A39054 *)il2cpp_codegen_object_new(HashSet_1_t7981318DC35BC53AD64634B2D643DD6055A39054_il2cpp_TypeInfo_var);
		HashSet_1__ctor_m42658446DE9E2709FD2DAF4F47CE5FC2A42351CD(L_1, /*hidden argument*/HashSet_1__ctor_m42658446DE9E2709FD2DAF4F47CE5FC2A42351CD_RuntimeMethod_var);
		HashSet_1_t7981318DC35BC53AD64634B2D643DD6055A39054 * L_2 = L_1;
		NullCheck(L_2);
		bool L_3;
		L_3 = HashSet_1_Add_mF5186C7EFED02C844FC23546EFB8A3CB5B1E62CA(L_2, 1, /*hidden argument*/HashSet_1_Add_mF5186C7EFED02C844FC23546EFB8A3CB5B1E62CA_RuntimeMethod_var);
		HashSet_1_t7981318DC35BC53AD64634B2D643DD6055A39054 * L_4 = L_2;
		NullCheck(L_4);
		bool L_5;
		L_5 = HashSet_1_Add_mF5186C7EFED02C844FC23546EFB8A3CB5B1E62CA(L_4, ((int32_t)63), /*hidden argument*/HashSet_1_Add_mF5186C7EFED02C844FC23546EFB8A3CB5B1E62CA_RuntimeMethod_var);
		HashSet_1_t7981318DC35BC53AD64634B2D643DD6055A39054 * L_6 = L_4;
		NullCheck(L_6);
		bool L_7;
		L_7 = HashSet_1_Add_mF5186C7EFED02C844FC23546EFB8A3CB5B1E62CA(L_6, 3, /*hidden argument*/HashSet_1_Add_mF5186C7EFED02C844FC23546EFB8A3CB5B1E62CA_RuntimeMethod_var);
		HashSet_1_t7981318DC35BC53AD64634B2D643DD6055A39054 * L_8 = L_6;
		NullCheck(L_8);
		bool L_9;
		L_9 = HashSet_1_Add_mF5186C7EFED02C844FC23546EFB8A3CB5B1E62CA(L_8, 4, /*hidden argument*/HashSet_1_Add_mF5186C7EFED02C844FC23546EFB8A3CB5B1E62CA_RuntimeMethod_var);
		HashSet_1_t7981318DC35BC53AD64634B2D643DD6055A39054 * L_10 = L_8;
		NullCheck(L_10);
		bool L_11;
		L_11 = HashSet_1_Add_mF5186C7EFED02C844FC23546EFB8A3CB5B1E62CA(L_10, 5, /*hidden argument*/HashSet_1_Add_mF5186C7EFED02C844FC23546EFB8A3CB5B1E62CA_RuntimeMethod_var);
		HashSet_1_t7981318DC35BC53AD64634B2D643DD6055A39054 * L_12 = L_10;
		NullCheck(L_12);
		bool L_13;
		L_13 = HashSet_1_Add_mF5186C7EFED02C844FC23546EFB8A3CB5B1E62CA(L_12, ((int32_t)14), /*hidden argument*/HashSet_1_Add_mF5186C7EFED02C844FC23546EFB8A3CB5B1E62CA_RuntimeMethod_var);
		((ARKitCpuImageApi_tD94B983FBF13116F7497F2089555084CCAC47D59_StaticFields*)il2cpp_codegen_static_fields_for(ARKitCpuImageApi_tD94B983FBF13116F7497F2089555084CCAC47D59_il2cpp_TypeInfo_var))->set_s_SupportedVideoConversionFormats_1(L_12);
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
// System.Void UnityEngine.XR.ARKit.ARKitEnvironmentProbeSubsystem::Register()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARKitEnvironmentProbeSubsystem_Register_mA6FED56E72CF2E3075FBC65FF40FCA3AE2DFF807 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ARKitEnvironmentProbeSubsystem_t628136AE15CA16280BA838B37E2B7CDF0473E9D2_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ARKitProvider_tBED347A85C19012D5B5F124BC8C0FB4876FBEACC_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA0DE801F3FD2CC4DE455E4C342CDC681CD2516B3);
		s_Il2CppMethodInitialized = true;
	}
	XREnvironmentProbeSubsystemCinfo_t6D9368EC95B6B356A67B7289270F27BB6A4440B2  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// if (!Api.AtLeast12_0())
		bool L_0;
		L_0 = Api_AtLeast12_0_mAAFC00E0EDE398EB11BDD874936E970CC4D78C1C(/*hidden argument*/NULL);
		if (L_0)
		{
			goto IL_0008;
		}
	}
	{
		// return;
		return;
	}

IL_0008:
	{
		//             XREnvironmentProbeSubsystemCinfo environmentProbeSubsystemInfo = new XREnvironmentProbeSubsystemCinfo()
		//             {
		//                 id = subsystemId,
		// #if UNITY_2020_2_OR_NEWER
		//                 providerType = typeof(ARKitEnvironmentProbeSubsystem.ARKitProvider),
		//                 subsystemTypeOverride = typeof(ARKitEnvironmentProbeSubsystem),
		// #else
		//                 implementationType = typeof(ARKitEnvironmentProbeSubsystem),
		// #endif
		//                 supportsManualPlacement = true,
		//                 supportsRemovalOfManual = true,
		//                 supportsAutomaticPlacement = true,
		//                 supportsRemovalOfAutomatic = true,
		//                 supportsEnvironmentTexture = true,
		//                 supportsEnvironmentTextureHDR = Api.AtLeast13_0(),
		//             };
		il2cpp_codegen_initobj((&V_0), sizeof(XREnvironmentProbeSubsystemCinfo_t6D9368EC95B6B356A67B7289270F27BB6A4440B2 ));
		XREnvironmentProbeSubsystemCinfo_set_id_m5C48BD3E879410D5C622BE7DC74D5C798E151731_inline((XREnvironmentProbeSubsystemCinfo_t6D9368EC95B6B356A67B7289270F27BB6A4440B2 *)(&V_0), _stringLiteralA0DE801F3FD2CC4DE455E4C342CDC681CD2516B3, /*hidden argument*/NULL);
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_1 = { reinterpret_cast<intptr_t> (ARKitProvider_tBED347A85C19012D5B5F124BC8C0FB4876FBEACC_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_2;
		L_2 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_1, /*hidden argument*/NULL);
		XREnvironmentProbeSubsystemCinfo_set_providerType_m70C42D1F210DE19AB5E7D82F2D0BDB467E94FC2F_inline((XREnvironmentProbeSubsystemCinfo_t6D9368EC95B6B356A67B7289270F27BB6A4440B2 *)(&V_0), L_2, /*hidden argument*/NULL);
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_3 = { reinterpret_cast<intptr_t> (ARKitEnvironmentProbeSubsystem_t628136AE15CA16280BA838B37E2B7CDF0473E9D2_0_0_0_var) };
		Type_t * L_4;
		L_4 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_3, /*hidden argument*/NULL);
		XREnvironmentProbeSubsystemCinfo_set_subsystemTypeOverride_mB35BB7FC1C0C42E0A7773365C147F539E7AC27EE_inline((XREnvironmentProbeSubsystemCinfo_t6D9368EC95B6B356A67B7289270F27BB6A4440B2 *)(&V_0), L_4, /*hidden argument*/NULL);
		XREnvironmentProbeSubsystemCinfo_set_supportsManualPlacement_m2D1156DE760E47CBDDC345AD5CAE5D23AC23E524_inline((XREnvironmentProbeSubsystemCinfo_t6D9368EC95B6B356A67B7289270F27BB6A4440B2 *)(&V_0), (bool)1, /*hidden argument*/NULL);
		XREnvironmentProbeSubsystemCinfo_set_supportsRemovalOfManual_m01CE117FEA37EE9BEF79903754E396C35B859419_inline((XREnvironmentProbeSubsystemCinfo_t6D9368EC95B6B356A67B7289270F27BB6A4440B2 *)(&V_0), (bool)1, /*hidden argument*/NULL);
		XREnvironmentProbeSubsystemCinfo_set_supportsAutomaticPlacement_mC4DBFBBD4DBB44D6B1154C4759A3175F9AC33D46_inline((XREnvironmentProbeSubsystemCinfo_t6D9368EC95B6B356A67B7289270F27BB6A4440B2 *)(&V_0), (bool)1, /*hidden argument*/NULL);
		XREnvironmentProbeSubsystemCinfo_set_supportsRemovalOfAutomatic_m6FCC1E3ACDC01E4447E385A1B89C96DEE16B7EF2_inline((XREnvironmentProbeSubsystemCinfo_t6D9368EC95B6B356A67B7289270F27BB6A4440B2 *)(&V_0), (bool)1, /*hidden argument*/NULL);
		XREnvironmentProbeSubsystemCinfo_set_supportsEnvironmentTexture_mE30B73C6AC37C6DF8F5B7DBDBC90A975A498D3E4_inline((XREnvironmentProbeSubsystemCinfo_t6D9368EC95B6B356A67B7289270F27BB6A4440B2 *)(&V_0), (bool)1, /*hidden argument*/NULL);
		bool L_5;
		L_5 = Api_AtLeast13_0_m360C671110F052FFD92FF0FC1A18BBDBF8D1576E(/*hidden argument*/NULL);
		XREnvironmentProbeSubsystemCinfo_set_supportsEnvironmentTextureHDR_mA465A23A4DC052895F8F634892B7C8E3A49F4777_inline((XREnvironmentProbeSubsystemCinfo_t6D9368EC95B6B356A67B7289270F27BB6A4440B2 *)(&V_0), L_5, /*hidden argument*/NULL);
		XREnvironmentProbeSubsystemCinfo_t6D9368EC95B6B356A67B7289270F27BB6A4440B2  L_6 = V_0;
		// XREnvironmentProbeSubsystem.Register(environmentProbeSubsystemInfo);
		bool L_7;
		L_7 = XREnvironmentProbeSubsystem_Register_m20EFD30E3B31DD3ED37EA42B6E465AFAE132EA37(L_6, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.XR.ARKit.ARKitEnvironmentProbeSubsystem::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARKitEnvironmentProbeSubsystem__ctor_mF7284AF6A2D02FE6BB71358A6BE23D0442FDD7C1 (ARKitEnvironmentProbeSubsystem_t628136AE15CA16280BA838B37E2B7CDF0473E9D2 * __this, const RuntimeMethod* method)
{
	{
		XREnvironmentProbeSubsystem__ctor_m72F971761AF7B66CBABFF9ABC8468A52406001A2(__this, /*hidden argument*/NULL);
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
// System.Void UnityEngine.XR.ARKit.ARKitHumanBodySubsystem::Register()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARKitHumanBodySubsystem_Register_m2E694DCDA85B03484041C6F42A072C3DBA589AD5 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ARKitHumanBodySubsystem_t8BA2C528FDE109FBDDBD0ED2FF8BC1FD081E92B7_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ARKitProvider_t5CC80E0D6F9A6EFFA70F54E8CDBEDB36D0CC4ED0_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral07F1FFB4A562EF77B8E6F92DD7CB0B8CBE6FD659);
		s_Il2CppMethodInitialized = true;
	}
	XRHumanBodySubsystemCinfo_tAFFD9EF9197B51AA2EAC628F54C90C842B7E54CC  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// if (!Api.AtLeast13_0())
		bool L_0;
		L_0 = Api_AtLeast13_0_m360C671110F052FFD92FF0FC1A18BBDBF8D1576E(/*hidden argument*/NULL);
		if (L_0)
		{
			goto IL_0008;
		}
	}
	{
		// return;
		return;
	}

IL_0008:
	{
		//             XRHumanBodySubsystemCinfo humanBodySubsystemCinfo = new XRHumanBodySubsystemCinfo()
		//             {
		//                 id = k_SubsystemId,
		// #if UNITY_2020_2_OR_NEWER
		//                 providerType = typeof(ARKitHumanBodySubsystem.ARKitProvider),
		//                 subsystemTypeOverride = typeof(ARKitHumanBodySubsystem),
		// #else
		//                 implementationType = typeof(ARKitHumanBodySubsystem),
		// #endif
		//                 supportsHumanBody2D = NativeApi.UnityARKit_HumanBodyProvider_DoesSupportBodyPose2DEstimation(),
		//                 supportsHumanBody3D = NativeApi.UnityARKit_HumanBodyProvider_DoesSupportBodyPose3DEstimation(),
		//                 supportsHumanBody3DScaleEstimation = NativeApi.UnityARKit_HumanBodyProvider_DoesSupportBodyPose3DScaleEstimation(),
		//             };
		il2cpp_codegen_initobj((&V_0), sizeof(XRHumanBodySubsystemCinfo_tAFFD9EF9197B51AA2EAC628F54C90C842B7E54CC ));
		XRHumanBodySubsystemCinfo_set_id_m379B96A2CE563FFD6CAC41112068975C8875B3A7_inline((XRHumanBodySubsystemCinfo_tAFFD9EF9197B51AA2EAC628F54C90C842B7E54CC *)(&V_0), _stringLiteral07F1FFB4A562EF77B8E6F92DD7CB0B8CBE6FD659, /*hidden argument*/NULL);
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_1 = { reinterpret_cast<intptr_t> (ARKitProvider_t5CC80E0D6F9A6EFFA70F54E8CDBEDB36D0CC4ED0_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_2;
		L_2 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_1, /*hidden argument*/NULL);
		XRHumanBodySubsystemCinfo_set_providerType_mA34C98EF6EDDFADFF83C4062C0AF33F3C7BA61A5_inline((XRHumanBodySubsystemCinfo_tAFFD9EF9197B51AA2EAC628F54C90C842B7E54CC *)(&V_0), L_2, /*hidden argument*/NULL);
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_3 = { reinterpret_cast<intptr_t> (ARKitHumanBodySubsystem_t8BA2C528FDE109FBDDBD0ED2FF8BC1FD081E92B7_0_0_0_var) };
		Type_t * L_4;
		L_4 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_3, /*hidden argument*/NULL);
		XRHumanBodySubsystemCinfo_set_subsystemTypeOverride_m73A633BECC2393CEB62B95FCF9CD7B32BFDB19FF_inline((XRHumanBodySubsystemCinfo_tAFFD9EF9197B51AA2EAC628F54C90C842B7E54CC *)(&V_0), L_4, /*hidden argument*/NULL);
		bool L_5;
		L_5 = NativeApi_UnityARKit_HumanBodyProvider_DoesSupportBodyPose2DEstimation_m3F55EB9C8A46785373DA478B65241314E212465E(/*hidden argument*/NULL);
		XRHumanBodySubsystemCinfo_set_supportsHumanBody2D_m33B2A01C8E5F61DFE604BDCD2D438EC0B3C45551_inline((XRHumanBodySubsystemCinfo_tAFFD9EF9197B51AA2EAC628F54C90C842B7E54CC *)(&V_0), L_5, /*hidden argument*/NULL);
		bool L_6;
		L_6 = NativeApi_UnityARKit_HumanBodyProvider_DoesSupportBodyPose3DEstimation_m3F72467EA9E6D4086407310A05699B99EBD27CED(/*hidden argument*/NULL);
		XRHumanBodySubsystemCinfo_set_supportsHumanBody3D_mE30720F10B501314868ABDBE2EDCE11D0A333D24_inline((XRHumanBodySubsystemCinfo_tAFFD9EF9197B51AA2EAC628F54C90C842B7E54CC *)(&V_0), L_6, /*hidden argument*/NULL);
		bool L_7;
		L_7 = NativeApi_UnityARKit_HumanBodyProvider_DoesSupportBodyPose3DScaleEstimation_m6664F1CBDA0B428D4DFB10284C1289CB1C025FE3(/*hidden argument*/NULL);
		XRHumanBodySubsystemCinfo_set_supportsHumanBody3DScaleEstimation_m72411E882EB28AB5BD33F4D266918FA3DB355782_inline((XRHumanBodySubsystemCinfo_tAFFD9EF9197B51AA2EAC628F54C90C842B7E54CC *)(&V_0), L_7, /*hidden argument*/NULL);
		XRHumanBodySubsystemCinfo_tAFFD9EF9197B51AA2EAC628F54C90C842B7E54CC  L_8 = V_0;
		// XRHumanBodySubsystem.Register(humanBodySubsystemCinfo);
		bool L_9;
		L_9 = XRHumanBodySubsystem_Register_m6BB9F0962D03E5A76F3D7434D1F4161A51E7485B(L_8, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.XR.ARKit.ARKitHumanBodySubsystem::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARKitHumanBodySubsystem__ctor_m05149CA5C8C4B54E8D9A26C7C34D0E034B82DA2F (ARKitHumanBodySubsystem_t8BA2C528FDE109FBDDBD0ED2FF8BC1FD081E92B7 * __this, const RuntimeMethod* method)
{
	{
		XRHumanBodySubsystem__ctor_mF3C86058EA4CFF10DFE59744ACC2DB437B3F8E84(__this, /*hidden argument*/NULL);
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
// System.IntPtr UnityEngine.XR.ARKit.ARKitImageDatabase::get_nativePtr()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t ARKitImageDatabase_get_nativePtr_mFE4F7A4306D72B71FFAC9E1C2F3D9FF5354627B3 (ARKitImageDatabase_t1D1B5D985355CF3D2597C8FD863EB46EF55B1F71 * __this, const RuntimeMethod* method)
{
	{
		// internal IntPtr nativePtr { get; private set; }
		intptr_t L_0 = __this->get_U3CnativePtrU3Ek__BackingField_0();
		return (intptr_t)L_0;
	}
}
// System.Void UnityEngine.XR.ARKit.ARKitImageDatabase::UnityARKit_CFRelease(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARKitImageDatabase_UnityARKit_CFRelease_m101DDEAB4CD9A57523E6752438BF65A93339D9A9 (intptr_t ___ptr0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (intptr_t);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(UnityARKit_CFRelease)(___ptr0);

}
// System.Void UnityEngine.XR.ARKit.ARKitImageDatabase::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARKitImageDatabase__cctor_m90514B239EC7C40FC29F855F700FEFEC7BE193C8 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ARKitImageDatabase_t1D1B5D985355CF3D2597C8FD863EB46EF55B1F71_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TextureFormatU5BU5D_tC081C559AF0CE6678E9673429ADDC9B93B6B45CE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_t52768071AC670B242659CF974483AF846D6828BF____E8CF6E95EA720603B480AF38C38D806DF25A1A1623EB6551AA9285B2F4C83C50_0_FieldInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// static readonly TextureFormat[] k_SupportedFormats =
		// {
		//     TextureFormat.Alpha8,
		//     TextureFormat.R8,
		//     TextureFormat.R16,
		//     TextureFormat.RFloat,
		//     TextureFormat.RGB24,
		//     TextureFormat.RGBA32,
		//     TextureFormat.ARGB32,
		//     TextureFormat.BGRA32,
		// };
		TextureFormatU5BU5D_tC081C559AF0CE6678E9673429ADDC9B93B6B45CE* L_0 = (TextureFormatU5BU5D_tC081C559AF0CE6678E9673429ADDC9B93B6B45CE*)(TextureFormatU5BU5D_tC081C559AF0CE6678E9673429ADDC9B93B6B45CE*)SZArrayNew(TextureFormatU5BU5D_tC081C559AF0CE6678E9673429ADDC9B93B6B45CE_il2cpp_TypeInfo_var, (uint32_t)8);
		TextureFormatU5BU5D_tC081C559AF0CE6678E9673429ADDC9B93B6B45CE* L_1 = L_0;
		RuntimeFieldHandle_t7BE65FC857501059EBAC9772C93B02CD413D9C96  L_2 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_t52768071AC670B242659CF974483AF846D6828BF____E8CF6E95EA720603B480AF38C38D806DF25A1A1623EB6551AA9285B2F4C83C50_0_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_mE27238308FED781F2D6A719F0903F2E1311B058F((RuntimeArray *)(RuntimeArray *)L_1, L_2, /*hidden argument*/NULL);
		((ARKitImageDatabase_t1D1B5D985355CF3D2597C8FD863EB46EF55B1F71_StaticFields*)il2cpp_codegen_static_fields_for(ARKitImageDatabase_t1D1B5D985355CF3D2597C8FD863EB46EF55B1F71_il2cpp_TypeInfo_var))->set_k_SupportedFormats_1(L_1);
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
// System.Void UnityEngine.XR.ARKit.ARKitImageTrackingSubsystem::UnityARKit_ImageTracking_SetDatabase(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARKitImageTrackingSubsystem_UnityARKit_ImageTracking_SetDatabase_mDB53D72973E1A12F0C8662DCA17A0A9442E16819 (intptr_t ___database0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (intptr_t);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(UnityARKit_ImageTracking_SetDatabase)(___database0);

}
// System.Void UnityEngine.XR.ARKit.ARKitImageTrackingSubsystem::UnityARKit_ImageTracking_Stop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARKitImageTrackingSubsystem_UnityARKit_ImageTracking_Stop_mC4A571D7E5AE4A50E304F003DA57B677B1175E12 (const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) ();

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(UnityARKit_ImageTracking_Stop)();

}
// System.Void* UnityEngine.XR.ARKit.ARKitImageTrackingSubsystem::UnityARKit_ImageTracking_AcquireChanges(System.Void*&,System.Int32&,System.Void*&,System.Int32&,System.Void*&,System.Int32&,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* ARKitImageTrackingSubsystem_UnityARKit_ImageTracking_AcquireChanges_mFDBAEB21E5E67D7E748A3BA6AAB2421E91F7E8D4 (void** ___addedPtr0, int32_t* ___addedLength1, void** ___updatedPtr2, int32_t* ___updatedLength3, void** ___removedPtr4, int32_t* ___removedLength5, int32_t* ___stride6, const RuntimeMethod* method)
{
	typedef void* (DEFAULT_CALL *PInvokeFunc) (void**, int32_t*, void**, int32_t*, void**, int32_t*, int32_t*);

	// Marshaling of parameter '___addedPtr0' to native representation
	void* ____addedPtr0_empty = NULL;
	void** ____addedPtr0_marshaled = &____addedPtr0_empty;

	// Marshaling of parameter '___updatedPtr2' to native representation
	void* ____updatedPtr2_empty = NULL;
	void** ____updatedPtr2_marshaled = &____updatedPtr2_empty;

	// Marshaling of parameter '___removedPtr4' to native representation
	void* ____removedPtr4_empty = NULL;
	void** ____removedPtr4_marshaled = &____removedPtr4_empty;

	// Native function invocation
	void* returnValue = reinterpret_cast<PInvokeFunc>(UnityARKit_ImageTracking_AcquireChanges)(____addedPtr0_marshaled, ___addedLength1, ____updatedPtr2_marshaled, ___updatedLength3, ____removedPtr4_marshaled, ___removedLength5, ___stride6);

	// Marshaling of parameter '___addedPtr0' back from native representation
	void* _____addedPtr0_marshaled_unmarshaled_dereferenced = NULL;
	_____addedPtr0_marshaled_unmarshaled_dereferenced = *____addedPtr0_marshaled;
	*___addedPtr0 = _____addedPtr0_marshaled_unmarshaled_dereferenced;

	// Marshaling of parameter '___updatedPtr2' back from native representation
	void* _____updatedPtr2_marshaled_unmarshaled_dereferenced = NULL;
	_____updatedPtr2_marshaled_unmarshaled_dereferenced = *____updatedPtr2_marshaled;
	*___updatedPtr2 = _____updatedPtr2_marshaled_unmarshaled_dereferenced;

	// Marshaling of parameter '___removedPtr4' back from native representation
	void* _____removedPtr4_marshaled_unmarshaled_dereferenced = NULL;
	_____removedPtr4_marshaled_unmarshaled_dereferenced = *____removedPtr4_marshaled;
	*___removedPtr4 = _____removedPtr4_marshaled_unmarshaled_dereferenced;

	return returnValue;
}
// System.Void UnityEngine.XR.ARKit.ARKitImageTrackingSubsystem::UnityARKit_ImageTracking_ReleaseChanges(System.Void*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARKitImageTrackingSubsystem_UnityARKit_ImageTracking_ReleaseChanges_m97CDB40BE0CE9EB7D98D7790AC7333CDF6D58C57 (void* ___changes0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (void*);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(UnityARKit_ImageTracking_ReleaseChanges)(___changes0);

}
// System.Void UnityEngine.XR.ARKit.ARKitImageTrackingSubsystem::RegisterDescriptor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARKitImageTrackingSubsystem_RegisterDescriptor_mEB8B92E59CC2F27AA8DD0E799E602BF81E02FA4E (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ARKitImageTrackingSubsystem_t0F98C12C3E36B9F3819FC43494A883B600401237_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ARKitProvider_t6838013201F7369104C65DD65159D910B116E8AC_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral14D6457B7A8B0589F52EF9A221CF9F7AE60EE03D);
		s_Il2CppMethodInitialized = true;
	}
	Cinfo_tED92D7CBD16BE657927A6B7DB64A22DA21EB7D32  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// if (!Api.AtLeast11_3())
		bool L_0;
		L_0 = Api_AtLeast11_3_m39519EDB5753578410DF3E5E6FB01560F74CCBA5(/*hidden argument*/NULL);
		if (L_0)
		{
			goto IL_0008;
		}
	}
	{
		// return;
		return;
	}

IL_0008:
	{
		//             XRImageTrackingSubsystemDescriptor.Create(new XRImageTrackingSubsystemDescriptor.Cinfo
		//             {
		//                 id = "ARKit-ImageTracking",
		// #if UNITY_2020_2_OR_NEWER
		//                 providerType = typeof(ARKitImageTrackingSubsystem.ARKitProvider),
		//                 subsystemTypeOverride = typeof(ARKitImageTrackingSubsystem),
		// #else
		//                 subsystemImplementationType = typeof(ARKitImageTrackingSubsystem),
		// #endif
		//                 supportsMovingImages = Api.AtLeast12_0(),
		//                 supportsMutableLibrary = true,
		//                 requiresPhysicalImageDimensions = true
		//             });
		il2cpp_codegen_initobj((&V_0), sizeof(Cinfo_tED92D7CBD16BE657927A6B7DB64A22DA21EB7D32 ));
		Cinfo_set_id_m57970CF355AB638BAD860B9673F0E76B42126C1A_inline((Cinfo_tED92D7CBD16BE657927A6B7DB64A22DA21EB7D32 *)(&V_0), _stringLiteral14D6457B7A8B0589F52EF9A221CF9F7AE60EE03D, /*hidden argument*/NULL);
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_1 = { reinterpret_cast<intptr_t> (ARKitProvider_t6838013201F7369104C65DD65159D910B116E8AC_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_2;
		L_2 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_1, /*hidden argument*/NULL);
		Cinfo_set_providerType_mCACA6EC48AB4B305E1515A312B32DC196AD9B92C_inline((Cinfo_tED92D7CBD16BE657927A6B7DB64A22DA21EB7D32 *)(&V_0), L_2, /*hidden argument*/NULL);
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_3 = { reinterpret_cast<intptr_t> (ARKitImageTrackingSubsystem_t0F98C12C3E36B9F3819FC43494A883B600401237_0_0_0_var) };
		Type_t * L_4;
		L_4 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_3, /*hidden argument*/NULL);
		Cinfo_set_subsystemTypeOverride_m167DE9461D1FE4E4D8AB0EE25A7A4B0A947151D8_inline((Cinfo_tED92D7CBD16BE657927A6B7DB64A22DA21EB7D32 *)(&V_0), L_4, /*hidden argument*/NULL);
		bool L_5;
		L_5 = Api_AtLeast12_0_mAAFC00E0EDE398EB11BDD874936E970CC4D78C1C(/*hidden argument*/NULL);
		Cinfo_set_supportsMovingImages_m04BB57385FC0A2025414437DB1BEFBE97372E579_inline((Cinfo_tED92D7CBD16BE657927A6B7DB64A22DA21EB7D32 *)(&V_0), L_5, /*hidden argument*/NULL);
		Cinfo_set_supportsMutableLibrary_m434D9A05D0025989AA711BA50139FD348D127661_inline((Cinfo_tED92D7CBD16BE657927A6B7DB64A22DA21EB7D32 *)(&V_0), (bool)1, /*hidden argument*/NULL);
		Cinfo_set_requiresPhysicalImageDimensions_mC794914720C62ACB74173F165B3015ED9B5CA2A6_inline((Cinfo_tED92D7CBD16BE657927A6B7DB64A22DA21EB7D32 *)(&V_0), (bool)1, /*hidden argument*/NULL);
		Cinfo_tED92D7CBD16BE657927A6B7DB64A22DA21EB7D32  L_6 = V_0;
		XRImageTrackingSubsystemDescriptor_Create_m3B9A00008CACA91AEC367F5D5EC19E57EA3D22A1(L_6, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.XR.ARKit.ARKitImageTrackingSubsystem::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARKitImageTrackingSubsystem__ctor_mACDB8CA0A6F983EB9AEEEB7F5204F73B83E7F201 (ARKitImageTrackingSubsystem_t0F98C12C3E36B9F3819FC43494A883B600401237 * __this, const RuntimeMethod* method)
{
	{
		XRImageTrackingSubsystem__ctor_m411C7B39B354BFB6468A5450B91D63A46CAC3A52(__this, /*hidden argument*/NULL);
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
// System.Void UnityEngine.XR.ARKit.ARKitOcclusionSubsystem::Register()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARKitOcclusionSubsystem_Register_mDF12D483A4F62C9B347E93BA46EE24EF02928390 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ARKitOcclusionSubsystem_tE15296E017A597561D0C3B399ED52577B138F343_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ARKitProvider_t8C73B4487170F7B34DF431897CADB4B9CA84C611_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral519D03084902B0B64CDE2E6BF3DBCCEBF9ED3FBB);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	XROcclusionSubsystemCinfo_tA29FDBA57EBA835927124FC18780DDD9CC4D84FD  V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		// if (!Api.AtLeast13_0())
		bool L_0;
		L_0 = Api_AtLeast13_0_m360C671110F052FFD92FF0FC1A18BBDBF8D1576E(/*hidden argument*/NULL);
		if (L_0)
		{
			goto IL_0008;
		}
	}
	{
		// return;
		return;
	}

IL_0008:
	{
		// bool supportsHumanSegmentationStencilImage = NativeApi.UnityARKit_OcclusionProvider_DoesSupportBodySegmentationStencil();
		bool L_1;
		L_1 = NativeApi_UnityARKit_OcclusionProvider_DoesSupportBodySegmentationStencil_m64B90F3C9ACFB794BA2081C0EEFEB6984E074C5C(/*hidden argument*/NULL);
		V_0 = L_1;
		// bool supportsHumanSegmentationDepthImage = NativeApi.UnityARKit_OcclusionProvider_DoesSupportBodySegmentationDepth();
		bool L_2;
		L_2 = NativeApi_UnityARKit_OcclusionProvider_DoesSupportBodySegmentationDepth_m8723F4AA9E21F51DC8D16CA860A5CC007805CC8D(/*hidden argument*/NULL);
		V_1 = L_2;
		// if (supportsHumanSegmentationStencilImage || supportsHumanSegmentationDepthImage)
		bool L_3 = V_0;
		bool L_4 = V_1;
		if (!((int32_t)((int32_t)L_3|(int32_t)L_4)))
		{
			goto IL_0066;
		}
	}
	{
		//                 XROcclusionSubsystemCinfo occlusionSubsystemCinfo = new XROcclusionSubsystemCinfo()
		//                 {
		//                     id = k_SubsystemId,
		// #if UNITY_2020_2_OR_NEWER
		//                     providerType = typeof(ARKitOcclusionSubsystem.ARKitProvider),
		//                     subsystemTypeOverride = typeof(ARKitOcclusionSubsystem),
		// #else
		//                     implementationType = typeof(ARKitOcclusionSubsystem),
		// #endif
		//                     supportsHumanSegmentationStencilImage = supportsHumanSegmentationStencilImage,
		//                     supportsHumanSegmentationDepthImage = supportsHumanSegmentationDepthImage,
		//                 };
		il2cpp_codegen_initobj((&V_2), sizeof(XROcclusionSubsystemCinfo_tA29FDBA57EBA835927124FC18780DDD9CC4D84FD ));
		XROcclusionSubsystemCinfo_set_id_m19076B4B5E6D6AA32BE751C1F2611CB7C3C152A0_inline((XROcclusionSubsystemCinfo_tA29FDBA57EBA835927124FC18780DDD9CC4D84FD *)(&V_2), _stringLiteral519D03084902B0B64CDE2E6BF3DBCCEBF9ED3FBB, /*hidden argument*/NULL);
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_5 = { reinterpret_cast<intptr_t> (ARKitProvider_t8C73B4487170F7B34DF431897CADB4B9CA84C611_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_6;
		L_6 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_5, /*hidden argument*/NULL);
		XROcclusionSubsystemCinfo_set_providerType_mA9E2685FC29652BBF41CD7398D8A434B72B68556_inline((XROcclusionSubsystemCinfo_tA29FDBA57EBA835927124FC18780DDD9CC4D84FD *)(&V_2), L_6, /*hidden argument*/NULL);
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_7 = { reinterpret_cast<intptr_t> (ARKitOcclusionSubsystem_tE15296E017A597561D0C3B399ED52577B138F343_0_0_0_var) };
		Type_t * L_8;
		L_8 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_7, /*hidden argument*/NULL);
		XROcclusionSubsystemCinfo_set_subsystemTypeOverride_mC5D9DB3F2CDC007F826FC2AB790F1622DFBA0F63_inline((XROcclusionSubsystemCinfo_tA29FDBA57EBA835927124FC18780DDD9CC4D84FD *)(&V_2), L_8, /*hidden argument*/NULL);
		bool L_9 = V_0;
		XROcclusionSubsystemCinfo_set_supportsHumanSegmentationStencilImage_mEC6C58C95DF515008316ED9A33A37ABBFBFD88BD_inline((XROcclusionSubsystemCinfo_tA29FDBA57EBA835927124FC18780DDD9CC4D84FD *)(&V_2), L_9, /*hidden argument*/NULL);
		bool L_10 = V_1;
		XROcclusionSubsystemCinfo_set_supportsHumanSegmentationDepthImage_mF08FD3863AEB93D47CCF50BD197780D2AB6F0705_inline((XROcclusionSubsystemCinfo_tA29FDBA57EBA835927124FC18780DDD9CC4D84FD *)(&V_2), L_10, /*hidden argument*/NULL);
		XROcclusionSubsystemCinfo_tA29FDBA57EBA835927124FC18780DDD9CC4D84FD  L_11 = V_2;
		// XROcclusionSubsystem.Register(occlusionSubsystemCinfo);
		bool L_12;
		L_12 = XROcclusionSubsystem_Register_mC754EFF602648A08D654B4CAFF0906CBFEFB9EB0(L_11, /*hidden argument*/NULL);
	}

IL_0066:
	{
		// }
		return;
	}
}
// System.Void UnityEngine.XR.ARKit.ARKitOcclusionSubsystem::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARKitOcclusionSubsystem__ctor_m1D139D87B0903FBF12C26E3761DC7747E973D4BE (ARKitOcclusionSubsystem_tE15296E017A597561D0C3B399ED52577B138F343 * __this, const RuntimeMethod* method)
{
	{
		XROcclusionSubsystem__ctor_m9EA3B861371659A5607CA2D36A77EAF9023696DD(__this, /*hidden argument*/NULL);
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
// System.Void UnityEngine.XR.ARKit.ARKitParticipantSubsystem::RegisterDescriptor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARKitParticipantSubsystem_RegisterDescriptor_m54AF2EA905706786FECA5F3D3C3F582DD7EFD79C (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRParticipantSubsystemDescriptor_Register_TisARKitProvider_t9908B32D1E5398BA2FD0D825E9343F8CA0277B4C_TisARKitParticipantSubsystem_tFBFB76108F5069693F4F40F8DAA4B6A907A709C3_m48662D8FE9C230C66490A64B7F56FA91D20DAA48_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD4CE57F143C3072D95F7AF2A8FDB45BD297B7097);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!Api.AtLeast13_0())
		bool L_0;
		L_0 = Api_AtLeast13_0_m360C671110F052FFD92FF0FC1A18BBDBF8D1576E(/*hidden argument*/NULL);
		if (L_0)
		{
			goto IL_0008;
		}
	}
	{
		// return;
		return;
	}

IL_0008:
	{
		//             XRParticipantSubsystemDescriptor.Register<
		// #if UNITY_2020_2_OR_NEWER
		//                 ARKitParticipantSubsystem.ARKitProvider,
		// #endif
		//                 ARKitParticipantSubsystem
		//                 >(
		//                 "ARKit-Participant",
		//                 XRParticipantSubsystemDescriptor.Capabilities.None);
		XRParticipantSubsystemDescriptor_Register_TisARKitProvider_t9908B32D1E5398BA2FD0D825E9343F8CA0277B4C_TisARKitParticipantSubsystem_tFBFB76108F5069693F4F40F8DAA4B6A907A709C3_m48662D8FE9C230C66490A64B7F56FA91D20DAA48(_stringLiteralD4CE57F143C3072D95F7AF2A8FDB45BD297B7097, 0, /*hidden argument*/XRParticipantSubsystemDescriptor_Register_TisARKitProvider_t9908B32D1E5398BA2FD0D825E9343F8CA0277B4C_TisARKitParticipantSubsystem_tFBFB76108F5069693F4F40F8DAA4B6A907A709C3_m48662D8FE9C230C66490A64B7F56FA91D20DAA48_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void UnityEngine.XR.ARKit.ARKitParticipantSubsystem::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARKitParticipantSubsystem__ctor_m0D058C2C09D2383A073621DC5CFD85F047608EB0 (ARKitParticipantSubsystem_tFBFB76108F5069693F4F40F8DAA4B6A907A709C3 * __this, const RuntimeMethod* method)
{
	{
		XRParticipantSubsystem__ctor_mC7EB236E3A4BBC45C055B94C26493FBB19DF4056(__this, /*hidden argument*/NULL);
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
// System.Void UnityEngine.XR.ARKit.ARKitRaycastSubsystem::RegisterDescriptor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARKitRaycastSubsystem_RegisterDescriptor_mF42F4DCC6EE812AFAB861A232A2094AA790CEFCC (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ARKitProvider_t3FB2A65F0CF8BCD91C4CC54F3841159E7F7DAA88_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ARKitRaycastSubsystem_t8DF7A7F21C4610FBBEF6A240FD1790CD47BE9900_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAFA4D3E582500163B4301BAFF6220E10DCA1A77A);
		s_Il2CppMethodInitialized = true;
	}
	Cinfo_tAC330BB49E2D0C7E18C66AB4018927A6EC856E01  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// if (!Api.AtLeast11_0())
		bool L_0;
		L_0 = Api_AtLeast11_0_m8F8F08B2547F4D98BD2665B403F20F9F95ACA48F(/*hidden argument*/NULL);
		if (L_0)
		{
			goto IL_0008;
		}
	}
	{
		// return;
		return;
	}

IL_0008:
	{
		//             XRRaycastSubsystemDescriptor.RegisterDescriptor(new XRRaycastSubsystemDescriptor.Cinfo
		//             {
		//                 id = "ARKit-Raycast",
		// #if UNITY_2020_2_OR_NEWER
		//                 providerType = typeof(ARKitRaycastSubsystem.ARKitProvider),
		//                 subsystemTypeOverride = typeof(ARKitRaycastSubsystem),
		// #else
		//                 subsystemImplementationType = typeof(ARKitRaycastSubsystem),
		// #endif
		//                 supportsViewportBasedRaycast = true,
		//                 supportsWorldBasedRaycast = false,
		//                 supportedTrackableTypes =
		//                     TrackableType.Planes |
		//                     TrackableType.FeaturePoint,
		//                 supportsTrackedRaycasts = Api.AtLeast13_0(),
		//             });
		il2cpp_codegen_initobj((&V_0), sizeof(Cinfo_tAC330BB49E2D0C7E18C66AB4018927A6EC856E01 ));
		Cinfo_set_id_m0CB4DA3E552ED7940FBA88D8EE3BB6379EA255D6_inline((Cinfo_tAC330BB49E2D0C7E18C66AB4018927A6EC856E01 *)(&V_0), _stringLiteralAFA4D3E582500163B4301BAFF6220E10DCA1A77A, /*hidden argument*/NULL);
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_1 = { reinterpret_cast<intptr_t> (ARKitProvider_t3FB2A65F0CF8BCD91C4CC54F3841159E7F7DAA88_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_2;
		L_2 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_1, /*hidden argument*/NULL);
		Cinfo_set_providerType_m20992869A706183D7180A2030C84B5445DCF0BE3_inline((Cinfo_tAC330BB49E2D0C7E18C66AB4018927A6EC856E01 *)(&V_0), L_2, /*hidden argument*/NULL);
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_3 = { reinterpret_cast<intptr_t> (ARKitRaycastSubsystem_t8DF7A7F21C4610FBBEF6A240FD1790CD47BE9900_0_0_0_var) };
		Type_t * L_4;
		L_4 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_3, /*hidden argument*/NULL);
		Cinfo_set_subsystemTypeOverride_mD5425E55455A21B7361B847FD6B78998AC70CD5B_inline((Cinfo_tAC330BB49E2D0C7E18C66AB4018927A6EC856E01 *)(&V_0), L_4, /*hidden argument*/NULL);
		Cinfo_set_supportsViewportBasedRaycast_mCF77DEFDDC3931682A33A063DF2F25FFBF07B807_inline((Cinfo_tAC330BB49E2D0C7E18C66AB4018927A6EC856E01 *)(&V_0), (bool)1, /*hidden argument*/NULL);
		Cinfo_set_supportsWorldBasedRaycast_m74BF70E612BCAFAD380C108700905E5B8C5425FA_inline((Cinfo_tAC330BB49E2D0C7E18C66AB4018927A6EC856E01 *)(&V_0), (bool)0, /*hidden argument*/NULL);
		Cinfo_set_supportedTrackableTypes_mABC320F641164FC1DB2AB9DB3F1E075B6235A785_inline((Cinfo_tAC330BB49E2D0C7E18C66AB4018927A6EC856E01 *)(&V_0), ((int32_t)31), /*hidden argument*/NULL);
		bool L_5;
		L_5 = Api_AtLeast13_0_m360C671110F052FFD92FF0FC1A18BBDBF8D1576E(/*hidden argument*/NULL);
		Cinfo_set_supportsTrackedRaycasts_mD7575B5CAA4BB3652786E2AE2C1B94CF8BEB423C_inline((Cinfo_tAC330BB49E2D0C7E18C66AB4018927A6EC856E01 *)(&V_0), L_5, /*hidden argument*/NULL);
		Cinfo_tAC330BB49E2D0C7E18C66AB4018927A6EC856E01  L_6 = V_0;
		XRRaycastSubsystemDescriptor_RegisterDescriptor_mD9A0FD5846AA09D7D7D32A1093566607D0082ABA(L_6, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.XR.ARKit.ARKitRaycastSubsystem::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARKitRaycastSubsystem__ctor_mE538A3B73F9EDA5E72DC36CD3245843904D6B66A (ARKitRaycastSubsystem_t8DF7A7F21C4610FBBEF6A240FD1790CD47BE9900 * __this, const RuntimeMethod* method)
{
	{
		XRRaycastSubsystem__ctor_m73E44C9109F84F8DFB603F6E480200EF0A62A15B(__this, /*hidden argument*/NULL);
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
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_ARKitSessionSubsystem_OnAsyncConversionComplete_m83F502F9F96A05BA35A9FDE4C56FDB7A7843942F(int32_t ___status0, int32_t ___worldMapId1, intptr_t ___context2)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Managed method invocation
	ARKitSessionSubsystem_OnAsyncConversionComplete_m83F502F9F96A05BA35A9FDE4C56FDB7A7843942F(___status0, ___worldMapId1, ___context2, NULL);

}
// System.Void UnityEngine.XR.ARKit.ARKitSessionSubsystem::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARKitSessionSubsystem__cctor_mDB65D075EA3D03C3DBDD350457063DB89F179BE9 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ARKitSessionSubsystem_OnAsyncConversionComplete_m83F502F9F96A05BA35A9FDE4C56FDB7A7843942F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ARKitSessionSubsystem_tABA1BA2FE3CF0CECDDC519C4B545236FC8B9E216_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OnAsyncConversionCompleteDelegate_tFE6205610918E7A87E7867F879A863FD2FE8ECDF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// s_OnAsyncWorldMapCompleted = OnAsyncConversionComplete;
		OnAsyncConversionCompleteDelegate_tFE6205610918E7A87E7867F879A863FD2FE8ECDF * L_0 = (OnAsyncConversionCompleteDelegate_tFE6205610918E7A87E7867F879A863FD2FE8ECDF *)il2cpp_codegen_object_new(OnAsyncConversionCompleteDelegate_tFE6205610918E7A87E7867F879A863FD2FE8ECDF_il2cpp_TypeInfo_var);
		OnAsyncConversionCompleteDelegate__ctor_m7CA5713A91DE5942CF727FBB3C771DDE3D563DCD(L_0, NULL, (intptr_t)((intptr_t)ARKitSessionSubsystem_OnAsyncConversionComplete_m83F502F9F96A05BA35A9FDE4C56FDB7A7843942F_RuntimeMethod_var), /*hidden argument*/NULL);
		((ARKitSessionSubsystem_tABA1BA2FE3CF0CECDDC519C4B545236FC8B9E216_StaticFields*)il2cpp_codegen_static_fields_for(ARKitSessionSubsystem_tABA1BA2FE3CF0CECDDC519C4B545236FC8B9E216_il2cpp_TypeInfo_var))->set_s_OnAsyncWorldMapCompleted_7(L_0);
		// }
		return;
	}
}
// System.Void UnityEngine.XR.ARKit.ARKitSessionSubsystem::OnAsyncConversionComplete(UnityEngine.XR.ARKit.ARWorldMapRequestStatus,System.Int32,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARKitSessionSubsystem_OnAsyncConversionComplete_m83F502F9F96A05BA35A9FDE4C56FDB7A7843942F (int32_t ___status0, int32_t ___worldMapId1, intptr_t ___context2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_2_Invoke_m062C6716117B97F904C309212B9BF73078717C7E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_2_t6F4217AA55351EE6822133CE02984E6B59F83112_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603  V_0;
	memset((&V_0), 0, sizeof(V_0));
	Action_2_t6F4217AA55351EE6822133CE02984E6B59F83112 * V_1 = NULL;
	ARWorldMap_t90151C78B15487234BE2E76D169DA191819704A2  V_2;
	memset((&V_2), 0, sizeof(V_2));
	ARWorldMap_t90151C78B15487234BE2E76D169DA191819704A2  V_3;
	memset((&V_3), 0, sizeof(V_3));
	{
		// var handle = GCHandle.FromIntPtr(context);
		intptr_t L_0 = ___context2;
		GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603  L_1;
		L_1 = GCHandle_FromIntPtr_m033776D73699CAC85FAE41FD5A52895EFB9E3AB8((intptr_t)L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		// var onComplete = (Action<ARWorldMapRequestStatus, ARWorldMap>)handle.Target;
		RuntimeObject * L_2;
		L_2 = GCHandle_get_Target_m6C296AD6520ECDAFC9498E9387677F522871F883((GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603 *)(&V_0), /*hidden argument*/NULL);
		V_1 = ((Action_2_t6F4217AA55351EE6822133CE02984E6B59F83112 *)CastclassSealed((RuntimeObject*)L_2, Action_2_t6F4217AA55351EE6822133CE02984E6B59F83112_il2cpp_TypeInfo_var));
		// if (status.IsError())
		int32_t L_3 = ___status0;
		bool L_4;
		L_4 = ARWorldMapRequestStatusExtensions_IsError_m5A4B5A00C002887CEB0596D920DDC272513A696E(L_3, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_002e;
		}
	}
	{
		// onComplete(status, default(ARWorldMap));
		Action_2_t6F4217AA55351EE6822133CE02984E6B59F83112 * L_5 = V_1;
		int32_t L_6 = ___status0;
		il2cpp_codegen_initobj((&V_2), sizeof(ARWorldMap_t90151C78B15487234BE2E76D169DA191819704A2 ));
		ARWorldMap_t90151C78B15487234BE2E76D169DA191819704A2  L_7 = V_2;
		NullCheck(L_5);
		Action_2_Invoke_m062C6716117B97F904C309212B9BF73078717C7E(L_5, L_6, L_7, /*hidden argument*/Action_2_Invoke_m062C6716117B97F904C309212B9BF73078717C7E_RuntimeMethod_var);
		// }
		goto IL_003e;
	}

IL_002e:
	{
		// var worldMap = new ARWorldMap(worldMapId);
		int32_t L_8 = ___worldMapId1;
		ARWorldMap__ctor_m43EA558358719448EB3CA73E007EE77EBEAF6817((ARWorldMap_t90151C78B15487234BE2E76D169DA191819704A2 *)(&V_3), L_8, /*hidden argument*/NULL);
		// onComplete(status, worldMap);
		Action_2_t6F4217AA55351EE6822133CE02984E6B59F83112 * L_9 = V_1;
		int32_t L_10 = ___status0;
		ARWorldMap_t90151C78B15487234BE2E76D169DA191819704A2  L_11 = V_3;
		NullCheck(L_9);
		Action_2_Invoke_m062C6716117B97F904C309212B9BF73078717C7E(L_9, L_10, L_11, /*hidden argument*/Action_2_Invoke_m062C6716117B97F904C309212B9BF73078717C7E_RuntimeMethod_var);
	}

IL_003e:
	{
		// handle.Free();
		GCHandle_Free_mB4E9415544FC9F0075C02AB17E270E49AF006025((GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603 *)(&V_0), /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.XR.ARKit.ARKitSessionSubsystem::RegisterDescriptor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARKitSessionSubsystem_RegisterDescriptor_mA5E32E61DAA0986D1D67B5318AF10D38E5435103 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ARKitProvider_t9AF751FC81DD6B052A462DBB30F46C946CE9E7CF_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ARKitSessionSubsystem_tABA1BA2FE3CF0CECDDC519C4B545236FC8B9E216_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDD3E96C069D13F79F8B9D6B0CD486B4507747763);
		s_Il2CppMethodInitialized = true;
	}
	Cinfo_t2842A97DA95F40ECADDCA24A291B6114A3A5F71A  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// if (!Api.AtLeast11_0())
		bool L_0;
		L_0 = Api_AtLeast11_0_m8F8F08B2547F4D98BD2665B403F20F9F95ACA48F(/*hidden argument*/NULL);
		if (L_0)
		{
			goto IL_0008;
		}
	}
	{
		// return;
		return;
	}

IL_0008:
	{
		// Api.EnsureRootViewIsSetup();
		Api_EnsureRootViewIsSetup_mB89CE58DDCE3C6F90077A56AA7C907CA377FD22D(/*hidden argument*/NULL);
		//             XRSessionSubsystemDescriptor.RegisterDescriptor(new XRSessionSubsystemDescriptor.Cinfo
		//             {
		//                 id = "ARKit-Session",
		// #if UNITY_2020_2_OR_NEWER
		//                 providerType = typeof(ARKitSessionSubsystem.ARKitProvider),
		//                 subsystemTypeOverride = typeof(ARKitSessionSubsystem),
		// #else
		//                 subsystemImplementationType = typeof(ARKitSessionSubsystem),
		// #endif
		//                 supportsInstall = false,
		//                 supportsMatchFrameRate = true,
		//             });
		il2cpp_codegen_initobj((&V_0), sizeof(Cinfo_t2842A97DA95F40ECADDCA24A291B6114A3A5F71A ));
		Cinfo_set_id_m6A2CAB13FAD54AB05458DC5DE1FAB5C651E9D656_inline((Cinfo_t2842A97DA95F40ECADDCA24A291B6114A3A5F71A *)(&V_0), _stringLiteralDD3E96C069D13F79F8B9D6B0CD486B4507747763, /*hidden argument*/NULL);
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_1 = { reinterpret_cast<intptr_t> (ARKitProvider_t9AF751FC81DD6B052A462DBB30F46C946CE9E7CF_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_2;
		L_2 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_1, /*hidden argument*/NULL);
		Cinfo_set_providerType_m2BCF5FEFC25D812C3E7F00725B49AE02540B2F8E_inline((Cinfo_t2842A97DA95F40ECADDCA24A291B6114A3A5F71A *)(&V_0), L_2, /*hidden argument*/NULL);
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_3 = { reinterpret_cast<intptr_t> (ARKitSessionSubsystem_tABA1BA2FE3CF0CECDDC519C4B545236FC8B9E216_0_0_0_var) };
		Type_t * L_4;
		L_4 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_3, /*hidden argument*/NULL);
		Cinfo_set_subsystemTypeOverride_m30FDD93193E0D694ABB33E184552AAF1A8AA36E6_inline((Cinfo_t2842A97DA95F40ECADDCA24A291B6114A3A5F71A *)(&V_0), L_4, /*hidden argument*/NULL);
		Cinfo_set_supportsInstall_m05EE61C58E505A8F20DEA68862395341F1DAD3FD_inline((Cinfo_t2842A97DA95F40ECADDCA24A291B6114A3A5F71A *)(&V_0), (bool)0, /*hidden argument*/NULL);
		Cinfo_set_supportsMatchFrameRate_m9CB328CEF43BCE3E59F26A97D32AEE1D201F8787_inline((Cinfo_t2842A97DA95F40ECADDCA24A291B6114A3A5F71A *)(&V_0), (bool)1, /*hidden argument*/NULL);
		Cinfo_t2842A97DA95F40ECADDCA24A291B6114A3A5F71A  L_5 = V_0;
		XRSessionSubsystemDescriptor_RegisterDescriptor_m60DE0DD6782289BAD4D67D15E2361D1B7B71C262(L_5, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.XR.ARKit.ARKitSessionSubsystem::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARKitSessionSubsystem__ctor_m6EF506F983BA0AE8EBDD916A7987B1F62289C2BE (ARKitSessionSubsystem_tABA1BA2FE3CF0CECDDC519C4B545236FC8B9E216 * __this, const RuntimeMethod* method)
{
	{
		XRSessionSubsystem__ctor_m8485F39F339764D3FCA4FD0E1D77ADE16CAE1676(__this, /*hidden argument*/NULL);
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
// System.Void UnityEngine.XR.ARKit.ARKitXRDepthSubsystem::RegisterDescriptor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARKitXRDepthSubsystem_RegisterDescriptor_m7432D5BD49562D3393CA37BB8D26D624E8FC0958 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ARKitProvider_tC6BBA25F076F6D64FA8E6336E6860D7DBD41A7A1_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ARKitXRDepthSubsystem_t50D82DC2115EED29E5F0EEBA8A0F4FA7876BD2D5_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral118D53AE05F479FE7B8ACAE7DF6D75BC38DB9D15);
		s_Il2CppMethodInitialized = true;
	}
	Cinfo_t37F91E88FCD8623834BE1898FC146620538C08B1  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		//             var descriptorParams = new XRDepthSubsystemDescriptor.Cinfo
		//             {
		//                 id = "ARKit-Depth",
		// #if UNITY_2020_2_OR_NEWER
		//                 providerType = typeof(ARKitXRDepthSubsystem.ARKitProvider),
		//                 subsystemTypeOverride = typeof(ARKitXRDepthSubsystem),
		// #else
		//                 implementationType = typeof(ARKitXRDepthSubsystem),
		// #endif
		//                 supportsFeaturePoints = true,
		//                 supportsConfidence = false,
		//                 supportsUniqueIds = true
		//             };
		il2cpp_codegen_initobj((&V_0), sizeof(Cinfo_t37F91E88FCD8623834BE1898FC146620538C08B1 ));
		(&V_0)->set_id_0(_stringLiteral118D53AE05F479FE7B8ACAE7DF6D75BC38DB9D15);
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_0 = { reinterpret_cast<intptr_t> (ARKitProvider_tC6BBA25F076F6D64FA8E6336E6860D7DBD41A7A1_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_1;
		L_1 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_0, /*hidden argument*/NULL);
		Cinfo_set_providerType_m79B371C14F188233806BAB677302143650CD9A29_inline((Cinfo_t37F91E88FCD8623834BE1898FC146620538C08B1 *)(&V_0), L_1, /*hidden argument*/NULL);
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_2 = { reinterpret_cast<intptr_t> (ARKitXRDepthSubsystem_t50D82DC2115EED29E5F0EEBA8A0F4FA7876BD2D5_0_0_0_var) };
		Type_t * L_3;
		L_3 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_2, /*hidden argument*/NULL);
		Cinfo_set_subsystemTypeOverride_mEF323B6CBB63FB7E5ECB4A6849F06C57BFDF8120_inline((Cinfo_t37F91E88FCD8623834BE1898FC146620538C08B1 *)(&V_0), L_3, /*hidden argument*/NULL);
		Cinfo_set_supportsFeaturePoints_mD44DBE0A79D63D3234369E573653A81DC7FB8E1D((Cinfo_t37F91E88FCD8623834BE1898FC146620538C08B1 *)(&V_0), (bool)1, /*hidden argument*/NULL);
		Cinfo_set_supportsConfidence_m78F76CAAFD5D667ADBED1580E1F8A1286B59C46D((Cinfo_t37F91E88FCD8623834BE1898FC146620538C08B1 *)(&V_0), (bool)0, /*hidden argument*/NULL);
		Cinfo_set_supportsUniqueIds_mFF68A678A13F7C1BD9E157690649255A27369514((Cinfo_t37F91E88FCD8623834BE1898FC146620538C08B1 *)(&V_0), (bool)1, /*hidden argument*/NULL);
		Cinfo_t37F91E88FCD8623834BE1898FC146620538C08B1  L_4 = V_0;
		// XRDepthSubsystemDescriptor.RegisterDescriptor(descriptorParams);
		XRDepthSubsystemDescriptor_RegisterDescriptor_mB5908D568E8943B143747EDA81FF550FE2BB3A33(L_4, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.XR.ARKit.ARKitXRDepthSubsystem::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARKitXRDepthSubsystem__ctor_mC09180DAD19E4467C0005A52CDFDCBDF5EA083A4 (ARKitXRDepthSubsystem_t50D82DC2115EED29E5F0EEBA8A0F4FA7876BD2D5 * __this, const RuntimeMethod* method)
{
	{
		XRDepthSubsystem__ctor_mCD27ED98C0FCF9538A67023E02DDD4AFB3B04D86(__this, /*hidden argument*/NULL);
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
// System.Void UnityEngine.XR.ARKit.ARKitXRObjectTrackingSubsystem::RegisterDescriptor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARKitXRObjectTrackingSubsystem_RegisterDescriptor_mE8EC29CC1D387409AE13EE7F14B7897308ED4873 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRObjectTrackingSubsystem_Register_TisARKitProvider_tDDBF5C474A3543A0F5FA7FB07A058B223F6DA8EC_TisARKitXRObjectTrackingSubsystem_tB611337EA1668BBCB3A7123F14117CB536707A6D_mA3DD9643C5278A166FD6901EA76410470E237E4D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral204051CF17AEF25F8EC14EA0CC3613989F08A085);
		s_Il2CppMethodInitialized = true;
	}
	Capabilities_tC6F329DD5C73C6B9E04BE77A3AE0E52390BD8685  V_0;
	memset((&V_0), 0, sizeof(V_0));
	Capabilities_tC6F329DD5C73C6B9E04BE77A3AE0E52390BD8685  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// if (!Api.AtLeast12_0())
		bool L_0;
		L_0 = Api_AtLeast12_0_mAAFC00E0EDE398EB11BDD874936E970CC4D78C1C(/*hidden argument*/NULL);
		if (L_0)
		{
			goto IL_0008;
		}
	}
	{
		// return;
		return;
	}

IL_0008:
	{
		// var capabilities = new XRObjectTrackingSubsystemDescriptor.Capabilities
		// {
		// };
		il2cpp_codegen_initobj((&V_1), sizeof(Capabilities_tC6F329DD5C73C6B9E04BE77A3AE0E52390BD8685 ));
		Capabilities_tC6F329DD5C73C6B9E04BE77A3AE0E52390BD8685  L_1 = V_1;
		V_0 = L_1;
		// Register<ARKitXRObjectTrackingSubsystem.ARKitProvider, ARKitXRObjectTrackingSubsystem>("ARKit-ObjectTracking", capabilities);
		Capabilities_tC6F329DD5C73C6B9E04BE77A3AE0E52390BD8685  L_2 = V_0;
		XRObjectTrackingSubsystem_Register_TisARKitProvider_tDDBF5C474A3543A0F5FA7FB07A058B223F6DA8EC_TisARKitXRObjectTrackingSubsystem_tB611337EA1668BBCB3A7123F14117CB536707A6D_mA3DD9643C5278A166FD6901EA76410470E237E4D(_stringLiteral204051CF17AEF25F8EC14EA0CC3613989F08A085, L_2, /*hidden argument*/XRObjectTrackingSubsystem_Register_TisARKitProvider_tDDBF5C474A3543A0F5FA7FB07A058B223F6DA8EC_TisARKitXRObjectTrackingSubsystem_tB611337EA1668BBCB3A7123F14117CB536707A6D_mA3DD9643C5278A166FD6901EA76410470E237E4D_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void UnityEngine.XR.ARKit.ARKitXRObjectTrackingSubsystem::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARKitXRObjectTrackingSubsystem__ctor_m659AF393021B2F751F9601F3DE744E18B0082D74 (ARKitXRObjectTrackingSubsystem_tB611337EA1668BBCB3A7123F14117CB536707A6D * __this, const RuntimeMethod* method)
{
	{
		XRObjectTrackingSubsystem__ctor_m75C4A1A4820B9795DEF1CAED15ACC38796F76BDD(__this, /*hidden argument*/NULL);
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
// System.Void UnityEngine.XR.ARKit.ARKitXRPlaneSubsystem::RegisterDescriptor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARKitXRPlaneSubsystem_RegisterDescriptor_m73A70F48D9FC2EBC931E3766C969EF3794419C5E (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ARKitProvider_tF9F620C89E671C028D10768C5300D3539661A2C1_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ARKitXRPlaneSubsystem_t03042D64756D81EC6B4657CD1323D7404EC7530B_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF79D74BDD6DF0D984C05241131A8A14AF293EE1B);
		s_Il2CppMethodInitialized = true;
	}
	Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// if (!Api.AtLeast11_0())
		bool L_0;
		L_0 = Api_AtLeast11_0_m8F8F08B2547F4D98BD2665B403F20F9F95ACA48F(/*hidden argument*/NULL);
		if (L_0)
		{
			goto IL_0008;
		}
	}
	{
		// return;
		return;
	}

IL_0008:
	{
		//             var cinfo = new XRPlaneSubsystemDescriptor.Cinfo
		//             {
		//                 id = "ARKit-Plane",
		// #if UNITY_2020_2_OR_NEWER
		//                 providerType = typeof(ARKitXRPlaneSubsystem.ARKitProvider),
		//                 subsystemTypeOverride = typeof(ARKitXRPlaneSubsystem),
		// #else
		//                 subsystemImplementationType = typeof(ARKitXRPlaneSubsystem),
		// #endif
		//                 supportsHorizontalPlaneDetection = true,
		//                 supportsVerticalPlaneDetection = Api.AtLeast11_3(),
		//                 supportsArbitraryPlaneDetection = false,
		//                 supportsBoundaryVertices = true,
		//                 supportsClassification = NativeApi.UnityARKit_Planes_SupportsClassification(),
		//             };
		il2cpp_codegen_initobj((&V_0), sizeof(Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD ));
		Cinfo_set_id_m940361693A3C925B2180733D87611B5FDF0357D7_inline((Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD *)(&V_0), _stringLiteralF79D74BDD6DF0D984C05241131A8A14AF293EE1B, /*hidden argument*/NULL);
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_1 = { reinterpret_cast<intptr_t> (ARKitProvider_tF9F620C89E671C028D10768C5300D3539661A2C1_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_2;
		L_2 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_1, /*hidden argument*/NULL);
		Cinfo_set_providerType_m8B6A7EE025CCB9B5B5E26E6F4C779DFE09955744_inline((Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD *)(&V_0), L_2, /*hidden argument*/NULL);
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_3 = { reinterpret_cast<intptr_t> (ARKitXRPlaneSubsystem_t03042D64756D81EC6B4657CD1323D7404EC7530B_0_0_0_var) };
		Type_t * L_4;
		L_4 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_3, /*hidden argument*/NULL);
		Cinfo_set_subsystemTypeOverride_mBC4F1CC20B4DF3D551BAFC1C38245F457E262A58_inline((Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD *)(&V_0), L_4, /*hidden argument*/NULL);
		Cinfo_set_supportsHorizontalPlaneDetection_mBC9B4572592B71328A96AF58DEB047528470C440_inline((Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD *)(&V_0), (bool)1, /*hidden argument*/NULL);
		bool L_5;
		L_5 = Api_AtLeast11_3_m39519EDB5753578410DF3E5E6FB01560F74CCBA5(/*hidden argument*/NULL);
		Cinfo_set_supportsVerticalPlaneDetection_mFF310EF7B9F8D9C9F9689CF9D1D2BEDDFF93F9F0_inline((Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD *)(&V_0), L_5, /*hidden argument*/NULL);
		Cinfo_set_supportsArbitraryPlaneDetection_m70B1D6D27946FB12BF0D3D3AF8C6DC8DC3F399B9_inline((Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD *)(&V_0), (bool)0, /*hidden argument*/NULL);
		Cinfo_set_supportsBoundaryVertices_mC6F86EB28D38CC483AD8F9FD161013BDE3F4AFEF_inline((Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD *)(&V_0), (bool)1, /*hidden argument*/NULL);
		bool L_6;
		L_6 = NativeApi_UnityARKit_Planes_SupportsClassification_m038F0FACAABAF4489F01E9E52A5A632A33FF7B7E(/*hidden argument*/NULL);
		Cinfo_set_supportsClassification_mA3B11D7CA4F960C89E729E5161AD7CC3211B933C_inline((Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD *)(&V_0), L_6, /*hidden argument*/NULL);
		Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD  L_7 = V_0;
		// XRPlaneSubsystemDescriptor.Create(cinfo);
		XRPlaneSubsystemDescriptor_Create_mB69A44F54AB64DF4361D3C16AE48C2F1B474EA32(L_7, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.XR.ARKit.ARKitXRPlaneSubsystem::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARKitXRPlaneSubsystem__ctor_m96BA403390931AE1CEB94E73FF4FEA02A313825A (ARKitXRPlaneSubsystem_t03042D64756D81EC6B4657CD1323D7404EC7530B * __this, const RuntimeMethod* method)
{
	{
		XRPlaneSubsystem__ctor_mDD4F1B44F90E2F50D3C78601413F01D05990B20C(__this, /*hidden argument*/NULL);
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
// System.Void UnityEngine.XR.ARKit.ARWorldMap::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARWorldMap_Dispose_m9B50247399932A662994E8C25BEBE535DB7DC8B2 (ARWorldMap_t90151C78B15487234BE2E76D169DA191819704A2 * __this, const RuntimeMethod* method)
{
	{
		// Api.UnityARKit_disposeWorldMap(nativeHandle);
		int32_t L_0;
		L_0 = ARWorldMap_get_nativeHandle_m26CA181591D8E7863F4274AF93319497EC8CC86F_inline((ARWorldMap_t90151C78B15487234BE2E76D169DA191819704A2 *)__this, /*hidden argument*/NULL);
		Api_UnityARKit_disposeWorldMap_m7961172E9B6D535070D54E86C0ED0F6B12970847(L_0, /*hidden argument*/NULL);
		// nativeHandle = k_InvalidHandle;
		ARWorldMap_set_nativeHandle_mEAB7C65A965E0F40860B613E3190B2E59FE4D083_inline((ARWorldMap_t90151C78B15487234BE2E76D169DA191819704A2 *)__this, 0, /*hidden argument*/NULL);
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void ARWorldMap_Dispose_m9B50247399932A662994E8C25BEBE535DB7DC8B2_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	ARWorldMap_t90151C78B15487234BE2E76D169DA191819704A2 * _thisAdjusted = reinterpret_cast<ARWorldMap_t90151C78B15487234BE2E76D169DA191819704A2 *>(__this + _offset);
	ARWorldMap_Dispose_m9B50247399932A662994E8C25BEBE535DB7DC8B2(_thisAdjusted, method);
}
// System.Int32 UnityEngine.XR.ARKit.ARWorldMap::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ARWorldMap_GetHashCode_m539F3BE2588CF435F4A672BB8D38641B92619555 (ARWorldMap_t90151C78B15487234BE2E76D169DA191819704A2 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		// public override int GetHashCode() => nativeHandle.GetHashCode();
		int32_t L_0;
		L_0 = ARWorldMap_get_nativeHandle_m26CA181591D8E7863F4274AF93319497EC8CC86F_inline((ARWorldMap_t90151C78B15487234BE2E76D169DA191819704A2 *)__this, /*hidden argument*/NULL);
		V_0 = L_0;
		int32_t L_1;
		L_1 = Int32_GetHashCode_mEDD3F492A5F7CF021125AE3F38E2B8F8743FC667((int32_t*)(&V_0), /*hidden argument*/NULL);
		return L_1;
	}
}
IL2CPP_EXTERN_C  int32_t ARWorldMap_GetHashCode_m539F3BE2588CF435F4A672BB8D38641B92619555_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	ARWorldMap_t90151C78B15487234BE2E76D169DA191819704A2 * _thisAdjusted = reinterpret_cast<ARWorldMap_t90151C78B15487234BE2E76D169DA191819704A2 *>(__this + _offset);
	int32_t _returnValue;
	_returnValue = ARWorldMap_GetHashCode_m539F3BE2588CF435F4A672BB8D38641B92619555(_thisAdjusted, method);
	return _returnValue;
}
// System.Boolean UnityEngine.XR.ARKit.ARWorldMap::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ARWorldMap_Equals_m594655912BCCCE5F6029540795777AD70FA25D58 (ARWorldMap_t90151C78B15487234BE2E76D169DA191819704A2 * __this, RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ARWorldMap_t90151C78B15487234BE2E76D169DA191819704A2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ARWorldMap_t90151C78B15487234BE2E76D169DA191819704A2  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// public override bool Equals(object obj) => obj is ARWorldMap other && Equals(other);
		RuntimeObject * L_0 = ___obj0;
		if (!((RuntimeObject *)IsInstSealed((RuntimeObject*)L_0, ARWorldMap_t90151C78B15487234BE2E76D169DA191819704A2_il2cpp_TypeInfo_var)))
		{
			goto IL_0017;
		}
	}
	{
		RuntimeObject * L_1 = ___obj0;
		V_0 = ((*(ARWorldMap_t90151C78B15487234BE2E76D169DA191819704A2 *)((ARWorldMap_t90151C78B15487234BE2E76D169DA191819704A2 *)UnBox(L_1, ARWorldMap_t90151C78B15487234BE2E76D169DA191819704A2_il2cpp_TypeInfo_var))));
		ARWorldMap_t90151C78B15487234BE2E76D169DA191819704A2  L_2 = V_0;
		bool L_3;
		L_3 = ARWorldMap_Equals_m99615F40202D61E0BFCB3E5609E454BB29DD0B86((ARWorldMap_t90151C78B15487234BE2E76D169DA191819704A2 *)__this, L_2, /*hidden argument*/NULL);
		return L_3;
	}

IL_0017:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C  bool ARWorldMap_Equals_m594655912BCCCE5F6029540795777AD70FA25D58_AdjustorThunk (RuntimeObject * __this, RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	ARWorldMap_t90151C78B15487234BE2E76D169DA191819704A2 * _thisAdjusted = reinterpret_cast<ARWorldMap_t90151C78B15487234BE2E76D169DA191819704A2 *>(__this + _offset);
	bool _returnValue;
	_returnValue = ARWorldMap_Equals_m594655912BCCCE5F6029540795777AD70FA25D58(_thisAdjusted, ___obj0, method);
	return _returnValue;
}
// System.Boolean UnityEngine.XR.ARKit.ARWorldMap::Equals(UnityEngine.XR.ARKit.ARWorldMap)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ARWorldMap_Equals_m99615F40202D61E0BFCB3E5609E454BB29DD0B86 (ARWorldMap_t90151C78B15487234BE2E76D169DA191819704A2 * __this, ARWorldMap_t90151C78B15487234BE2E76D169DA191819704A2  ___other0, const RuntimeMethod* method)
{
	{
		// public bool Equals(ARWorldMap other) => nativeHandle == other.nativeHandle;
		int32_t L_0;
		L_0 = ARWorldMap_get_nativeHandle_m26CA181591D8E7863F4274AF93319497EC8CC86F_inline((ARWorldMap_t90151C78B15487234BE2E76D169DA191819704A2 *)__this, /*hidden argument*/NULL);
		int32_t L_1;
		L_1 = ARWorldMap_get_nativeHandle_m26CA181591D8E7863F4274AF93319497EC8CC86F_inline((ARWorldMap_t90151C78B15487234BE2E76D169DA191819704A2 *)(&___other0), /*hidden argument*/NULL);
		return (bool)((((int32_t)L_0) == ((int32_t)L_1))? 1 : 0);
	}
}
IL2CPP_EXTERN_C  bool ARWorldMap_Equals_m99615F40202D61E0BFCB3E5609E454BB29DD0B86_AdjustorThunk (RuntimeObject * __this, ARWorldMap_t90151C78B15487234BE2E76D169DA191819704A2  ___other0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	ARWorldMap_t90151C78B15487234BE2E76D169DA191819704A2 * _thisAdjusted = reinterpret_cast<ARWorldMap_t90151C78B15487234BE2E76D169DA191819704A2 *>(__this + _offset);
	bool _returnValue;
	_returnValue = ARWorldMap_Equals_m99615F40202D61E0BFCB3E5609E454BB29DD0B86(_thisAdjusted, ___other0, method);
	return _returnValue;
}
// System.Void UnityEngine.XR.ARKit.ARWorldMap::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARWorldMap__ctor_m43EA558358719448EB3CA73E007EE77EBEAF6817 (ARWorldMap_t90151C78B15487234BE2E76D169DA191819704A2 * __this, int32_t ___nativeHandle0, const RuntimeMethod* method)
{
	{
		// this.nativeHandle = nativeHandle;
		int32_t L_0 = ___nativeHandle0;
		ARWorldMap_set_nativeHandle_mEAB7C65A965E0F40860B613E3190B2E59FE4D083_inline((ARWorldMap_t90151C78B15487234BE2E76D169DA191819704A2 *)__this, L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void ARWorldMap__ctor_m43EA558358719448EB3CA73E007EE77EBEAF6817_AdjustorThunk (RuntimeObject * __this, int32_t ___nativeHandle0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	ARWorldMap_t90151C78B15487234BE2E76D169DA191819704A2 * _thisAdjusted = reinterpret_cast<ARWorldMap_t90151C78B15487234BE2E76D169DA191819704A2 *>(__this + _offset);
	ARWorldMap__ctor_m43EA558358719448EB3CA73E007EE77EBEAF6817(_thisAdjusted, ___nativeHandle0, method);
}
// System.Int32 UnityEngine.XR.ARKit.ARWorldMap::get_nativeHandle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ARWorldMap_get_nativeHandle_m26CA181591D8E7863F4274AF93319497EC8CC86F (ARWorldMap_t90151C78B15487234BE2E76D169DA191819704A2 * __this, const RuntimeMethod* method)
{
	{
		// internal int nativeHandle { get; private set; }
		int32_t L_0 = __this->get_U3CnativeHandleU3Ek__BackingField_0();
		return L_0;
	}
}
IL2CPP_EXTERN_C  int32_t ARWorldMap_get_nativeHandle_m26CA181591D8E7863F4274AF93319497EC8CC86F_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	ARWorldMap_t90151C78B15487234BE2E76D169DA191819704A2 * _thisAdjusted = reinterpret_cast<ARWorldMap_t90151C78B15487234BE2E76D169DA191819704A2 *>(__this + _offset);
	int32_t _returnValue;
	_returnValue = ARWorldMap_get_nativeHandle_m26CA181591D8E7863F4274AF93319497EC8CC86F_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Void UnityEngine.XR.ARKit.ARWorldMap::set_nativeHandle(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARWorldMap_set_nativeHandle_mEAB7C65A965E0F40860B613E3190B2E59FE4D083 (ARWorldMap_t90151C78B15487234BE2E76D169DA191819704A2 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// internal int nativeHandle { get; private set; }
		int32_t L_0 = ___value0;
		__this->set_U3CnativeHandleU3Ek__BackingField_0(L_0);
		return;
	}
}
IL2CPP_EXTERN_C  void ARWorldMap_set_nativeHandle_mEAB7C65A965E0F40860B613E3190B2E59FE4D083_AdjustorThunk (RuntimeObject * __this, int32_t ___value0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	ARWorldMap_t90151C78B15487234BE2E76D169DA191819704A2 * _thisAdjusted = reinterpret_cast<ARWorldMap_t90151C78B15487234BE2E76D169DA191819704A2 *>(__this + _offset);
	ARWorldMap_set_nativeHandle_mEAB7C65A965E0F40860B613E3190B2E59FE4D083_inline(_thisAdjusted, ___value0, method);
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
// System.Boolean UnityEngine.XR.ARKit.ARWorldMapRequestStatusExtensions::IsError(UnityEngine.XR.ARKit.ARWorldMapRequestStatus)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ARWorldMapRequestStatusExtensions_IsError_m5A4B5A00C002887CEB0596D920DDC272513A696E (int32_t ___status0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___status0;
		if ((!(((uint32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_0, (int32_t)1))) <= ((uint32_t)1))))
		{
			goto IL_0008;
		}
	}
	{
		// return false;
		return (bool)0;
	}

IL_0008:
	{
		// return true;
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
// System.IntPtr UnityEngine.XR.ARKit.Api::UnityARKit_TrackableProvider_start(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t Api_UnityARKit_TrackableProvider_start_m5B2100D934A363E895FBC8FC68D8A07D77448417 (intptr_t ___self0, const RuntimeMethod* method)
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) (intptr_t);

	// Native function invocation
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(UnityARKit_TrackableProvider_start)(___self0);

	return returnValue;
}
// System.IntPtr UnityEngine.XR.ARKit.Api::UnityARKit_TrackableProvider_stop(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t Api_UnityARKit_TrackableProvider_stop_mF7B6E1ABDAB3707DBBA16221CC4320A023E27966 (intptr_t ___self0, const RuntimeMethod* method)
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) (intptr_t);

	// Native function invocation
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(UnityARKit_TrackableProvider_stop)(___self0);

	return returnValue;
}
// UnityEngine.XR.ARKit.NativeChanges UnityEngine.XR.ARKit.Api::UnityARKit_TrackableProvider_acquireChanges(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeChanges_t2AB4CBD7DD7F23F421DFD0CE4D4CDB26402D6D76  Api_UnityARKit_TrackableProvider_acquireChanges_mD96BAB877284BA60893800C20E72851C072DAC59 (intptr_t ___self0, const RuntimeMethod* method)
{
	typedef NativeChanges_t2AB4CBD7DD7F23F421DFD0CE4D4CDB26402D6D76  (DEFAULT_CALL *PInvokeFunc) (intptr_t);

	// Native function invocation
	NativeChanges_t2AB4CBD7DD7F23F421DFD0CE4D4CDB26402D6D76  returnValue = reinterpret_cast<PInvokeFunc>(UnityARKit_TrackableProvider_acquireChanges)(___self0);

	return returnValue;
}
// System.Void UnityEngine.XR.ARKit.Api::UnityARKit_TrackableProvider_copyChanges(System.IntPtr,UnityEngine.XR.ARKit.NativeChanges,System.Int32,System.Void*,System.Void*,System.Void*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Api_UnityARKit_TrackableProvider_copyChanges_m0DBCBEE86560E14161F422044F969ABF1468B4D1 (intptr_t ___self0, NativeChanges_t2AB4CBD7DD7F23F421DFD0CE4D4CDB26402D6D76  ___changes1, int32_t ___stride2, void* ___added3, void* ___updated4, void* ___removed5, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (intptr_t, NativeChanges_t2AB4CBD7DD7F23F421DFD0CE4D4CDB26402D6D76 , int32_t, void*, void*, void*);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(UnityARKit_TrackableProvider_copyChanges)(___self0, ___changes1, ___stride2, ___added3, ___updated4, ___removed5);

}
// System.Boolean UnityEngine.XR.ARKit.Api::AtLeast11_0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Api_AtLeast11_0_m8F8F08B2547F4D98BD2665B403F20F9F95ACA48F (const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) ();

	// Native function invocation
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(UnityARKit_Version_AtLeast11_0)();

	return static_cast<bool>(returnValue);
}
// System.Boolean UnityEngine.XR.ARKit.Api::AtLeast11_3()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Api_AtLeast11_3_m39519EDB5753578410DF3E5E6FB01560F74CCBA5 (const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) ();

	// Native function invocation
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(UnityARKit_Version_AtLeast11_3)();

	return static_cast<bool>(returnValue);
}
// System.Boolean UnityEngine.XR.ARKit.Api::AtLeast12_0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Api_AtLeast12_0_mAAFC00E0EDE398EB11BDD874936E970CC4D78C1C (const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) ();

	// Native function invocation
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(UnityARKit_Version_AtLeast12_0)();

	return static_cast<bool>(returnValue);
}
// System.Boolean UnityEngine.XR.ARKit.Api::AtLeast13_0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Api_AtLeast13_0_m360C671110F052FFD92FF0FC1A18BBDBF8D1576E (const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) ();

	// Native function invocation
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(UnityARKit_Version_AtLeast13_0)();

	return static_cast<bool>(returnValue);
}
// System.Void UnityEngine.XR.ARKit.Api::EnsureRootViewIsSetup()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Api_EnsureRootViewIsSetup_mB89CE58DDCE3C6F90077A56AA7C907CA377FD22D (const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) ();

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(UnityARKit_EnsureRootViewIsSetup)();

}
// System.Void UnityEngine.XR.ARKit.Api::SetFeatureRequested(UnityEngine.XR.ARSubsystems.Feature,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Api_SetFeatureRequested_m5F97A8E9C25203A781BCC2601D85A90D187546F2 (uint64_t ___feature0, bool ___enabled1, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (uint64_t, int32_t);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(UnityARKit_Session_SetFeatureRequested)(___feature0, static_cast<int32_t>(___enabled1));

}
// UnityEngine.XR.ARSubsystems.Feature UnityEngine.XR.ARKit.Api::GetRequestedFeatures()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t Api_GetRequestedFeatures_m31758CAAF7E8C545E0E99626EA2E993D2C398DDA (const RuntimeMethod* method)
{
	typedef uint64_t (DEFAULT_CALL *PInvokeFunc) ();

	// Native function invocation
	uint64_t returnValue = reinterpret_cast<PInvokeFunc>(UnityARKit_Session_GetRequestedFeatures)();

	return returnValue;
}
// System.Void UnityEngine.XR.ARKit.Api::UnityARKit_disposeWorldMap(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Api_UnityARKit_disposeWorldMap_m7961172E9B6D535070D54E86C0ED0F6B12970847 (int32_t ___worldMapId0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (int32_t);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(UnityARKit_disposeWorldMap)(___worldMapId0);

}
// System.Void UnityEngine.XR.ARKit.Api::CFRelease(System.IntPtr&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Api_CFRelease_m6A7AAD46BF01508785DA9A9275F057D310468ECA (intptr_t* ___ptr0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// UnityARKit_CFRelease(ptr);
		intptr_t* L_0 = ___ptr0;
		Api_UnityARKit_CFRelease_m7C7E4145668373632B71D221A5FBE46D651EF671((intptr_t)((*(L_0))), /*hidden argument*/NULL);
		// ptr = IntPtr.Zero;
		intptr_t* L_1 = ___ptr0;
		*((intptr_t*)L_1) = (intptr_t)(0);
		// }
		return;
	}
}
// System.Void UnityEngine.XR.ARKit.Api::UnityARKit_CFRelease(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Api_UnityARKit_CFRelease_m7C7E4145668373632B71D221A5FBE46D651EF671 (intptr_t ___ptr0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (intptr_t);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(UnityARKit_CFRelease)(___ptr0);

}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Microsoft.CodeAnalysis.EmbeddedAttribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EmbeddedAttribute__ctor_mF305F26CAF5B343F3979EFEAEF52077F6CF58543 (EmbeddedAttribute_t05629E57A0E96598455481383D6D826715328F7C * __this, const RuntimeMethod* method)
{
	{
		Attribute__ctor_m5C1862A7DFC2C25A4797A8C5F681FBB5CB53ECE1(__this, /*hidden argument*/NULL);
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
// System.Void UnityEngine.XR.ARKit.EnvironmentProbeApi::UnityARKit_EnvironmentProbeProvider_Construct()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnvironmentProbeApi_UnityARKit_EnvironmentProbeProvider_Construct_m5D69AFAA42866A78CC2B64C4457F3612E0627B46 (const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) ();

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(UnityARKit_EnvironmentProbeProvider_Construct)();

}
// System.Void UnityEngine.XR.ARKit.EnvironmentProbeApi::UnityARKit_EnvironmentProbeProvider_Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnvironmentProbeApi_UnityARKit_EnvironmentProbeProvider_Start_mBB72F3877A91955C57C9DD1150F073E312EADB58 (const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) ();

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(UnityARKit_EnvironmentProbeProvider_Start)();

}
// System.Void UnityEngine.XR.ARKit.EnvironmentProbeApi::UnityARKit_EnvironmentProbeProvider_Stop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnvironmentProbeApi_UnityARKit_EnvironmentProbeProvider_Stop_mC4EA40B91E241DECA3A2146C68385DB70033E18B (const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) ();

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(UnityARKit_EnvironmentProbeProvider_Stop)();

}
// System.IntPtr UnityEngine.XR.ARKit.EnvironmentProbeApi::UnityARKit_EnvironmentProbeProvider_AcquireChanges(System.Int32&,System.IntPtr&,System.Int32&,System.IntPtr&,System.Int32&,System.IntPtr&,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t EnvironmentProbeApi_UnityARKit_EnvironmentProbeProvider_AcquireChanges_mBF125AB519AAAB01B5CA4B6A3CC9693946394C09 (int32_t* ___numAddedEnvironmentProbes0, intptr_t* ___addedEnvironmentProbes1, int32_t* ___numUpdatedEnvironmentProbes2, intptr_t* ___updatedEnvironmentProbes3, int32_t* ___numRemovedEnvironmentProbeIds4, intptr_t* ___removedEnvironmentProbeIds5, int32_t* ___stride6, const RuntimeMethod* method)
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) (int32_t*, intptr_t*, int32_t*, intptr_t*, int32_t*, intptr_t*, int32_t*);

	// Native function invocation
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(UnityARKit_EnvironmentProbeProvider_AcquireChanges)(___numAddedEnvironmentProbes0, ___addedEnvironmentProbes1, ___numUpdatedEnvironmentProbes2, ___updatedEnvironmentProbes3, ___numRemovedEnvironmentProbeIds4, ___removedEnvironmentProbeIds5, ___stride6);

	return returnValue;
}
// System.Void UnityEngine.XR.ARKit.EnvironmentProbeApi::UnityARKit_EnvironmentProbeProvider_ReleaseChanges(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnvironmentProbeApi_UnityARKit_EnvironmentProbeProvider_ReleaseChanges_m9C8712C98A37F7206733C97EB3D7D2495CFB9C00 (intptr_t ___context0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (intptr_t);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(UnityARKit_EnvironmentProbeProvider_ReleaseChanges)(___context0);

}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.Runtime.CompilerServices.IsReadOnlyAttribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IsReadOnlyAttribute__ctor_m7DE0334DA728DC2329FFD541DFCDDB443BD8E636 (IsReadOnlyAttribute_t49E064784AB175290B77B6E6137930BE53B124B9 * __this, const RuntimeMethod* method)
{
	{
		Attribute__ctor_m5C1862A7DFC2C25A4797A8C5F681FBB5CB53ECE1(__this, /*hidden argument*/NULL);
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
// System.Void UnityEngine.XR.ARKit.ManagedReferenceImage::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ManagedReferenceImage_Dispose_m51ED357BF8C931DDD82BDA2C487B909D90CEF881 (ManagedReferenceImage_t867FD513C8CBF1F9824DBFB215783BE8C33F0FA1 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// GCHandle.FromIntPtr(texture).Free();
		intptr_t L_0 = __this->get_texture_4();
		GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603  L_1;
		L_1 = GCHandle_FromIntPtr_m033776D73699CAC85FAE41FD5A52895EFB9E3AB8((intptr_t)L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		GCHandle_Free_mB4E9415544FC9F0075C02AB17E270E49AF006025((GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603 *)(&V_0), /*hidden argument*/NULL);
		// texture = IntPtr.Zero;
		__this->set_texture_4((intptr_t)(0));
		// GCHandle.FromIntPtr(name).Free();
		intptr_t L_2 = __this->get_name_3();
		GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603  L_3;
		L_3 = GCHandle_FromIntPtr_m033776D73699CAC85FAE41FD5A52895EFB9E3AB8((intptr_t)L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		GCHandle_Free_mB4E9415544FC9F0075C02AB17E270E49AF006025((GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603 *)(&V_0), /*hidden argument*/NULL);
		// name = IntPtr.Zero;
		__this->set_name_3((intptr_t)(0));
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void ManagedReferenceImage_Dispose_m51ED357BF8C931DDD82BDA2C487B909D90CEF881_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	ManagedReferenceImage_t867FD513C8CBF1F9824DBFB215783BE8C33F0FA1 * _thisAdjusted = reinterpret_cast<ManagedReferenceImage_t867FD513C8CBF1F9824DBFB215783BE8C33F0FA1 *>(__this + _offset);
	ManagedReferenceImage_Dispose_m51ED357BF8C931DDD82BDA2C487B909D90CEF881(_thisAdjusted, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Int32 UnityEngine.XR.ARKit.NativeChanges::get_addedLength()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeChanges_get_addedLength_mD51DB306B9E731D637BC6146AC02F44E7092EA61 (NativeChanges_t2AB4CBD7DD7F23F421DFD0CE4D4CDB26402D6D76 * __this, const RuntimeMethod* method)
{
	{
		// public int addedLength => GetAddedLength(this);
		NativeChanges_t2AB4CBD7DD7F23F421DFD0CE4D4CDB26402D6D76  L_0 = (*(NativeChanges_t2AB4CBD7DD7F23F421DFD0CE4D4CDB26402D6D76 *)__this);
		int32_t L_1;
		L_1 = NativeChanges_GetAddedLength_m178969F9DCD9B9A07EECAB7DCE1E51467A2C7DFF(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
IL2CPP_EXTERN_C  int32_t NativeChanges_get_addedLength_mD51DB306B9E731D637BC6146AC02F44E7092EA61_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	NativeChanges_t2AB4CBD7DD7F23F421DFD0CE4D4CDB26402D6D76 * _thisAdjusted = reinterpret_cast<NativeChanges_t2AB4CBD7DD7F23F421DFD0CE4D4CDB26402D6D76 *>(__this + _offset);
	int32_t _returnValue;
	_returnValue = NativeChanges_get_addedLength_mD51DB306B9E731D637BC6146AC02F44E7092EA61(_thisAdjusted, method);
	return _returnValue;
}
// System.Int32 UnityEngine.XR.ARKit.NativeChanges::get_updatedLength()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeChanges_get_updatedLength_m26B6698778BE656EB28586EBA13D00936F2BEA9A (NativeChanges_t2AB4CBD7DD7F23F421DFD0CE4D4CDB26402D6D76 * __this, const RuntimeMethod* method)
{
	{
		// public int updatedLength => GetUpdatedLength(this);
		NativeChanges_t2AB4CBD7DD7F23F421DFD0CE4D4CDB26402D6D76  L_0 = (*(NativeChanges_t2AB4CBD7DD7F23F421DFD0CE4D4CDB26402D6D76 *)__this);
		int32_t L_1;
		L_1 = NativeChanges_GetUpdatedLength_m56285C6AE9E8D78238231EB029156C734E681D1D(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
IL2CPP_EXTERN_C  int32_t NativeChanges_get_updatedLength_m26B6698778BE656EB28586EBA13D00936F2BEA9A_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	NativeChanges_t2AB4CBD7DD7F23F421DFD0CE4D4CDB26402D6D76 * _thisAdjusted = reinterpret_cast<NativeChanges_t2AB4CBD7DD7F23F421DFD0CE4D4CDB26402D6D76 *>(__this + _offset);
	int32_t _returnValue;
	_returnValue = NativeChanges_get_updatedLength_m26B6698778BE656EB28586EBA13D00936F2BEA9A(_thisAdjusted, method);
	return _returnValue;
}
// System.Int32 UnityEngine.XR.ARKit.NativeChanges::get_removedLength()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeChanges_get_removedLength_mD6BA6E4217D492D6FD7DF127166122A0D35E2989 (NativeChanges_t2AB4CBD7DD7F23F421DFD0CE4D4CDB26402D6D76 * __this, const RuntimeMethod* method)
{
	{
		// public int removedLength => GetRemovedLength(this);
		NativeChanges_t2AB4CBD7DD7F23F421DFD0CE4D4CDB26402D6D76  L_0 = (*(NativeChanges_t2AB4CBD7DD7F23F421DFD0CE4D4CDB26402D6D76 *)__this);
		int32_t L_1;
		L_1 = NativeChanges_GetRemovedLength_m56F8F6E5396DE527D059203FBF54B6A844F06F17(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
IL2CPP_EXTERN_C  int32_t NativeChanges_get_removedLength_mD6BA6E4217D492D6FD7DF127166122A0D35E2989_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	NativeChanges_t2AB4CBD7DD7F23F421DFD0CE4D4CDB26402D6D76 * _thisAdjusted = reinterpret_cast<NativeChanges_t2AB4CBD7DD7F23F421DFD0CE4D4CDB26402D6D76 *>(__this + _offset);
	int32_t _returnValue;
	_returnValue = NativeChanges_get_removedLength_mD6BA6E4217D492D6FD7DF127166122A0D35E2989(_thisAdjusted, method);
	return _returnValue;
}
// System.Void UnityEngine.XR.ARKit.NativeChanges::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeChanges_Dispose_m494F37A0E04A0110C5480CCFB401225F4DD66263 (NativeChanges_t2AB4CBD7DD7F23F421DFD0CE4D4CDB26402D6D76 * __this, const RuntimeMethod* method)
{
	{
		// public void Dispose() => Api.CFRelease(ref m_Ptr);
		intptr_t* L_0 = __this->get_address_of_m_Ptr_0();
		Api_CFRelease_m6A7AAD46BF01508785DA9A9275F057D310468ECA((intptr_t*)L_0, /*hidden argument*/NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void NativeChanges_Dispose_m494F37A0E04A0110C5480CCFB401225F4DD66263_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	NativeChanges_t2AB4CBD7DD7F23F421DFD0CE4D4CDB26402D6D76 * _thisAdjusted = reinterpret_cast<NativeChanges_t2AB4CBD7DD7F23F421DFD0CE4D4CDB26402D6D76 *>(__this + _offset);
	NativeChanges_Dispose_m494F37A0E04A0110C5480CCFB401225F4DD66263(_thisAdjusted, method);
}
// System.Boolean UnityEngine.XR.ARKit.NativeChanges::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NativeChanges_Equals_mE0137E0E1EB130C19E2DBDED1F3D76B847645027 (NativeChanges_t2AB4CBD7DD7F23F421DFD0CE4D4CDB26402D6D76 * __this, RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeChanges_t2AB4CBD7DD7F23F421DFD0CE4D4CDB26402D6D76_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public override bool Equals(object obj) => (obj is NativeChanges) && Equals((NativeChanges)obj);
		RuntimeObject * L_0 = ___obj0;
		if (!((RuntimeObject *)IsInstSealed((RuntimeObject*)L_0, NativeChanges_t2AB4CBD7DD7F23F421DFD0CE4D4CDB26402D6D76_il2cpp_TypeInfo_var)))
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject * L_1 = ___obj0;
		bool L_2;
		L_2 = NativeChanges_Equals_m4522A3606B1A9F994F9C7F4E9A04F1E0C7C35E20((NativeChanges_t2AB4CBD7DD7F23F421DFD0CE4D4CDB26402D6D76 *)__this, ((*(NativeChanges_t2AB4CBD7DD7F23F421DFD0CE4D4CDB26402D6D76 *)((NativeChanges_t2AB4CBD7DD7F23F421DFD0CE4D4CDB26402D6D76 *)UnBox(L_1, NativeChanges_t2AB4CBD7DD7F23F421DFD0CE4D4CDB26402D6D76_il2cpp_TypeInfo_var)))), /*hidden argument*/NULL);
		return L_2;
	}

IL_0015:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C  bool NativeChanges_Equals_mE0137E0E1EB130C19E2DBDED1F3D76B847645027_AdjustorThunk (RuntimeObject * __this, RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	NativeChanges_t2AB4CBD7DD7F23F421DFD0CE4D4CDB26402D6D76 * _thisAdjusted = reinterpret_cast<NativeChanges_t2AB4CBD7DD7F23F421DFD0CE4D4CDB26402D6D76 *>(__this + _offset);
	bool _returnValue;
	_returnValue = NativeChanges_Equals_mE0137E0E1EB130C19E2DBDED1F3D76B847645027(_thisAdjusted, ___obj0, method);
	return _returnValue;
}
// System.Int32 UnityEngine.XR.ARKit.NativeChanges::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeChanges_GetHashCode_m0DC27513D96E9BD611BBEADDFE428A684C364976 (NativeChanges_t2AB4CBD7DD7F23F421DFD0CE4D4CDB26402D6D76 * __this, const RuntimeMethod* method)
{
	{
		// public override int GetHashCode() => m_Ptr.GetHashCode();
		intptr_t* L_0 = __this->get_address_of_m_Ptr_0();
		int32_t L_1;
		L_1 = IntPtr_GetHashCode_m55E65FB52EFE7C0EBC3C28E66A5D7542F3B1D35D((intptr_t*)L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
IL2CPP_EXTERN_C  int32_t NativeChanges_GetHashCode_m0DC27513D96E9BD611BBEADDFE428A684C364976_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	NativeChanges_t2AB4CBD7DD7F23F421DFD0CE4D4CDB26402D6D76 * _thisAdjusted = reinterpret_cast<NativeChanges_t2AB4CBD7DD7F23F421DFD0CE4D4CDB26402D6D76 *>(__this + _offset);
	int32_t _returnValue;
	_returnValue = NativeChanges_GetHashCode_m0DC27513D96E9BD611BBEADDFE428A684C364976(_thisAdjusted, method);
	return _returnValue;
}
// System.Boolean UnityEngine.XR.ARKit.NativeChanges::Equals(UnityEngine.XR.ARKit.NativeChanges)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NativeChanges_Equals_m4522A3606B1A9F994F9C7F4E9A04F1E0C7C35E20 (NativeChanges_t2AB4CBD7DD7F23F421DFD0CE4D4CDB26402D6D76 * __this, NativeChanges_t2AB4CBD7DD7F23F421DFD0CE4D4CDB26402D6D76  ___other0, const RuntimeMethod* method)
{
	{
		// public bool Equals(NativeChanges other) => m_Ptr == other.m_Ptr;
		intptr_t L_0 = __this->get_m_Ptr_0();
		NativeChanges_t2AB4CBD7DD7F23F421DFD0CE4D4CDB26402D6D76  L_1 = ___other0;
		intptr_t L_2 = L_1.get_m_Ptr_0();
		bool L_3;
		L_3 = IntPtr_op_Equality_mD94F3FE43A65684EFF984A7B95E70D2520C0AC73((intptr_t)L_0, (intptr_t)L_2, /*hidden argument*/NULL);
		return L_3;
	}
}
IL2CPP_EXTERN_C  bool NativeChanges_Equals_m4522A3606B1A9F994F9C7F4E9A04F1E0C7C35E20_AdjustorThunk (RuntimeObject * __this, NativeChanges_t2AB4CBD7DD7F23F421DFD0CE4D4CDB26402D6D76  ___other0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	NativeChanges_t2AB4CBD7DD7F23F421DFD0CE4D4CDB26402D6D76 * _thisAdjusted = reinterpret_cast<NativeChanges_t2AB4CBD7DD7F23F421DFD0CE4D4CDB26402D6D76 *>(__this + _offset);
	bool _returnValue;
	_returnValue = NativeChanges_Equals_m4522A3606B1A9F994F9C7F4E9A04F1E0C7C35E20(_thisAdjusted, ___other0, method);
	return _returnValue;
}
// System.Int32 UnityEngine.XR.ARKit.NativeChanges::GetAddedLength(UnityEngine.XR.ARKit.NativeChanges)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeChanges_GetAddedLength_m178969F9DCD9B9A07EECAB7DCE1E51467A2C7DFF (NativeChanges_t2AB4CBD7DD7F23F421DFD0CE4D4CDB26402D6D76  ___self0, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (NativeChanges_t2AB4CBD7DD7F23F421DFD0CE4D4CDB26402D6D76 );

	// Native function invocation
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(UnityARKit_TrackableChanges_addedLength)(___self0);

	return returnValue;
}
// System.Int32 UnityEngine.XR.ARKit.NativeChanges::GetUpdatedLength(UnityEngine.XR.ARKit.NativeChanges)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeChanges_GetUpdatedLength_m56285C6AE9E8D78238231EB029156C734E681D1D (NativeChanges_t2AB4CBD7DD7F23F421DFD0CE4D4CDB26402D6D76  ___self0, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (NativeChanges_t2AB4CBD7DD7F23F421DFD0CE4D4CDB26402D6D76 );

	// Native function invocation
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(UnityARKit_TrackableChanges_updatedLength)(___self0);

	return returnValue;
}
// System.Int32 UnityEngine.XR.ARKit.NativeChanges::GetRemovedLength(UnityEngine.XR.ARKit.NativeChanges)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeChanges_GetRemovedLength_m56F8F6E5396DE527D059203FBF54B6A844F06F17 (NativeChanges_t2AB4CBD7DD7F23F421DFD0CE4D4CDB26402D6D76  ___self0, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (NativeChanges_t2AB4CBD7DD7F23F421DFD0CE4D4CDB26402D6D76 );

	// Native function invocation
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(UnityARKit_TrackableChanges_removedLength)(___self0);

	return returnValue;
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
// System.Void UnityEngine.XR.ARKit.ARKitAnchorSubsystem/ARKitProvider::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARKitProvider_Start_mBE4ECA5653C74A7E30E6907E918C5B72CFA79A8C (ARKitProvider_tE10DC6803776ECE42E55F127E68C47E50319202E * __this, const RuntimeMethod* method)
{
	{
		// public override void Start() => UnityARKit_refPoints_onStart();
		ARKitProvider_UnityARKit_refPoints_onStart_m3CBAA3F20990A8A850230AE925E6F6AF10997C3B(/*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.XR.ARKit.ARKitAnchorSubsystem/ARKitProvider::Stop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARKitProvider_Stop_mB701028358296F05E38BD561F850865562BFFCB7 (ARKitProvider_tE10DC6803776ECE42E55F127E68C47E50319202E * __this, const RuntimeMethod* method)
{
	{
		// public override void Stop() => UnityARKit_refPoints_onStop();
		ARKitProvider_UnityARKit_refPoints_onStop_m57B1A0BEB96ABCCF501CBBC1315EBC7D7B27CBEA(/*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRAnchor> UnityEngine.XR.ARKit.ARKitAnchorSubsystem/ARKitProvider::GetChanges(UnityEngine.XR.ARSubsystems.XRAnchor,Unity.Collections.Allocator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TrackableChanges_1_tF38314CFF715F232D6DA3415FD2F68CE504CFF9B  ARKitProvider_GetChanges_m27506FB86BDEAEDB2B277F1FE93FFA27754583EB (ARKitProvider_tE10DC6803776ECE42E55F127E68C47E50319202E * __this, XRAnchor_t8E92DD70D9FA9B3ED2799305E05228184932099C  ___defaultAnchor0, int32_t ___allocator1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TrackableChanges_1__ctor_mA73D215CA80356F8179EB02A8F9BBC14329AD7D4_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	void* V_0 = NULL;
	void* V_1 = NULL;
	void* V_2 = NULL;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	void* V_7 = NULL;
	TrackableChanges_1_tF38314CFF715F232D6DA3415FD2F68CE504CFF9B  V_8;
	memset((&V_8), 0, sizeof(V_8));
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		// var context = UnityARKit_refPoints_acquireChanges(
		//     out addedPtr, out addedCount,
		//     out updatedPtr, out updatedCount,
		//     out removedPtr, out removedCount,
		//     out elementSize);
		void* L_0;
		L_0 = ARKitProvider_UnityARKit_refPoints_acquireChanges_m5E42BE1BC93F2643DEDAAC2D288FDB038352B84B((void**)(&V_0), (int32_t*)(&V_3), (void**)(&V_1), (int32_t*)(&V_4), (void**)(&V_2), (int32_t*)(&V_5), (int32_t*)(&V_6), /*hidden argument*/NULL);
		V_7 = (void*)L_0;
	}

IL_0015:
	try
	{ // begin try (depth: 1)
		// return new TrackableChanges<XRAnchor>(
		//     addedPtr, addedCount,
		//     updatedPtr, updatedCount,
		//     removedPtr, removedCount,
		//     defaultAnchor, elementSize,
		//     allocator);
		void* L_1 = V_0;
		int32_t L_2 = V_3;
		void* L_3 = V_1;
		int32_t L_4 = V_4;
		void* L_5 = V_2;
		int32_t L_6 = V_5;
		XRAnchor_t8E92DD70D9FA9B3ED2799305E05228184932099C  L_7 = ___defaultAnchor0;
		int32_t L_8 = V_6;
		int32_t L_9 = ___allocator1;
		TrackableChanges_1_tF38314CFF715F232D6DA3415FD2F68CE504CFF9B  L_10;
		memset((&L_10), 0, sizeof(L_10));
		TrackableChanges_1__ctor_mA73D215CA80356F8179EB02A8F9BBC14329AD7D4((&L_10), (void*)(void*)L_1, L_2, (void*)(void*)L_3, L_4, (void*)(void*)L_5, L_6, L_7, L_8, L_9, /*hidden argument*/TrackableChanges_1__ctor_mA73D215CA80356F8179EB02A8F9BBC14329AD7D4_RuntimeMethod_var);
		V_8 = L_10;
		IL2CPP_LEAVE(0x32, FINALLY_002a);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_002a;
	}

FINALLY_002a:
	{ // begin finally (depth: 1)
		// UnityARKit_refPoints_releaseChanges(context);
		void* L_11 = V_7;
		ARKitProvider_UnityARKit_refPoints_releaseChanges_m65C9CF48FDB6095AEB02F2A6A8C7CFA8B7CED644((void*)(void*)L_11, /*hidden argument*/NULL);
		// }
		IL2CPP_END_FINALLY(42)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(42)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x32, IL_0032)
	}

IL_0032:
	{
		// }
		TrackableChanges_1_tF38314CFF715F232D6DA3415FD2F68CE504CFF9B  L_12 = V_8;
		return L_12;
	}
}
// System.Void UnityEngine.XR.ARKit.ARKitAnchorSubsystem/ARKitProvider::UnityARKit_refPoints_onStart()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARKitProvider_UnityARKit_refPoints_onStart_m3CBAA3F20990A8A850230AE925E6F6AF10997C3B (const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) ();

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(UnityARKit_refPoints_onStart)();

}
// System.Void UnityEngine.XR.ARKit.ARKitAnchorSubsystem/ARKitProvider::UnityARKit_refPoints_onStop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARKitProvider_UnityARKit_refPoints_onStop_m57B1A0BEB96ABCCF501CBBC1315EBC7D7B27CBEA (const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) ();

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(UnityARKit_refPoints_onStop)();

}
// System.Void* UnityEngine.XR.ARKit.ARKitAnchorSubsystem/ARKitProvider::UnityARKit_refPoints_acquireChanges(System.Void*&,System.Int32&,System.Void*&,System.Int32&,System.Void*&,System.Int32&,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* ARKitProvider_UnityARKit_refPoints_acquireChanges_m5E42BE1BC93F2643DEDAAC2D288FDB038352B84B (void** ___addedPtr0, int32_t* ___addedCount1, void** ___updatedPtr2, int32_t* ___updatedCount3, void** ___removedPtr4, int32_t* ___removedCount5, int32_t* ___elementSize6, const RuntimeMethod* method)
{
	typedef void* (DEFAULT_CALL *PInvokeFunc) (void**, int32_t*, void**, int32_t*, void**, int32_t*, int32_t*);

	// Marshaling of parameter '___addedPtr0' to native representation
	void* ____addedPtr0_empty = NULL;
	void** ____addedPtr0_marshaled = &____addedPtr0_empty;

	// Marshaling of parameter '___updatedPtr2' to native representation
	void* ____updatedPtr2_empty = NULL;
	void** ____updatedPtr2_marshaled = &____updatedPtr2_empty;

	// Marshaling of parameter '___removedPtr4' to native representation
	void* ____removedPtr4_empty = NULL;
	void** ____removedPtr4_marshaled = &____removedPtr4_empty;

	// Native function invocation
	void* returnValue = reinterpret_cast<PInvokeFunc>(UnityARKit_refPoints_acquireChanges)(____addedPtr0_marshaled, ___addedCount1, ____updatedPtr2_marshaled, ___updatedCount3, ____removedPtr4_marshaled, ___removedCount5, ___elementSize6);

	// Marshaling of parameter '___addedPtr0' back from native representation
	void* _____addedPtr0_marshaled_unmarshaled_dereferenced = NULL;
	_____addedPtr0_marshaled_unmarshaled_dereferenced = *____addedPtr0_marshaled;
	*___addedPtr0 = _____addedPtr0_marshaled_unmarshaled_dereferenced;

	// Marshaling of parameter '___updatedPtr2' back from native representation
	void* _____updatedPtr2_marshaled_unmarshaled_dereferenced = NULL;
	_____updatedPtr2_marshaled_unmarshaled_dereferenced = *____updatedPtr2_marshaled;
	*___updatedPtr2 = _____updatedPtr2_marshaled_unmarshaled_dereferenced;

	// Marshaling of parameter '___removedPtr4' back from native representation
	void* _____removedPtr4_marshaled_unmarshaled_dereferenced = NULL;
	_____removedPtr4_marshaled_unmarshaled_dereferenced = *____removedPtr4_marshaled;
	*___removedPtr4 = _____removedPtr4_marshaled_unmarshaled_dereferenced;

	return returnValue;
}
// System.Void UnityEngine.XR.ARKit.ARKitAnchorSubsystem/ARKitProvider::UnityARKit_refPoints_releaseChanges(System.Void*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARKitProvider_UnityARKit_refPoints_releaseChanges_m65C9CF48FDB6095AEB02F2A6A8C7CFA8B7CED644 (void* ___changes0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (void*);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(UnityARKit_refPoints_releaseChanges)(___changes0);

}
// System.Void UnityEngine.XR.ARKit.ARKitAnchorSubsystem/ARKitProvider::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARKitProvider__ctor_mD5890F7467A0A36FD0EA10CC44CB32E8DBD47469 (ARKitProvider_tE10DC6803776ECE42E55F127E68C47E50319202E * __this, const RuntimeMethod* method)
{
	{
		Provider__ctor_mFE4941CFC3CA511BBD7C0A498BB2C74DE96FF498(__this, /*hidden argument*/NULL);
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
// UnityEngine.Material UnityEngine.XR.ARKit.ARKitCameraSubsystem/ARKitProvider::get_cameraMaterial()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Material_t8927C00353A72755313F046D0CE85178AE8218EE * ARKitProvider_get_cameraMaterial_mB2F34FF9AB7E75D74801F81844B17C89C6828B9F (ARKitProvider_tA94DC507BD799F0EB939B5D43E47850858DD9252 * __this, const RuntimeMethod* method)
{
	{
		// public override Material cameraMaterial => m_CameraMaterial;
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_0 = __this->get_m_CameraMaterial_5();
		return L_0;
	}
}
// System.Boolean UnityEngine.XR.ARKit.ARKitCameraSubsystem/ARKitProvider::get_permissionGranted()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ARKitProvider_get_permissionGranted_m568CCD7192E30872FFDE33B2B50171DD2311EACE (ARKitProvider_tA94DC507BD799F0EB939B5D43E47850858DD9252 * __this, const RuntimeMethod* method)
{
	{
		// public override bool permissionGranted => NativeApi.UnityARKit_Camera_IsCameraPermissionGranted();
		bool L_0;
		L_0 = NativeApi_UnityARKit_Camera_IsCameraPermissionGranted_mF6CDDCDD3C45DFAB0B13B25ADC329725F2175E79(/*hidden argument*/NULL);
		return L_0;
	}
}
// System.Void UnityEngine.XR.ARKit.ARKitCameraSubsystem/ARKitProvider::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARKitProvider__ctor_mFC17EA54C2DC44A58721A35D5B7607C607BF8AE4 (ARKitProvider_tA94DC507BD799F0EB939B5D43E47850858DD9252 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ARKitCameraSubsystem_tE327D2A1BE7A0BD90A9353C8EDBDE9A882315245_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ARKitProvider_tA94DC507BD799F0EB939B5D43E47850858DD9252_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral61805FB8A9F8CCBCA7560EFE4D0B15AE0A7AA489);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		// public ARKitProvider()
		Provider__ctor_mA61CB0610059584FC8190F2C54D845C7612D82BE(__this, /*hidden argument*/NULL);
		// NativeApi.UnityARKit_Camera_Construct(k_TextureYPropertyNameId, k_TextureCbCrPropertyNameId);
		IL2CPP_RUNTIME_CLASS_INIT(ARKitProvider_tA94DC507BD799F0EB939B5D43E47850858DD9252_il2cpp_TypeInfo_var);
		int32_t L_0 = ((ARKitProvider_tA94DC507BD799F0EB939B5D43E47850858DD9252_StaticFields*)il2cpp_codegen_static_fields_for(ARKitProvider_tA94DC507BD799F0EB939B5D43E47850858DD9252_il2cpp_TypeInfo_var))->get_k_TextureYPropertyNameId_1();
		int32_t L_1 = ((ARKitProvider_tA94DC507BD799F0EB939B5D43E47850858DD9252_StaticFields*)il2cpp_codegen_static_fields_for(ARKitProvider_tA94DC507BD799F0EB939B5D43E47850858DD9252_il2cpp_TypeInfo_var))->get_k_TextureCbCrPropertyNameId_2();
		NativeApi_UnityARKit_Camera_Construct_m85F5550F4DF7C866799A325444B1DA96A2F41265(L_0, L_1, /*hidden argument*/NULL);
		// string shaderName = ARKitCameraSubsystem.backgroundShaderName;
		IL2CPP_RUNTIME_CLASS_INIT(ARKitCameraSubsystem_tE327D2A1BE7A0BD90A9353C8EDBDE9A882315245_il2cpp_TypeInfo_var);
		String_t* L_2;
		L_2 = ARKitCameraSubsystem_get_backgroundShaderName_m0856B4F3C1E036760386F1BED04D029698D0F94F(/*hidden argument*/NULL);
		V_0 = L_2;
		// if (shaderName == null)
		String_t* L_3 = V_0;
		if (L_3)
		{
			goto IL_0029;
		}
	}
	{
		// Debug.LogError("Cannot create camera background material compatible with the render pipeline");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_LogError_m8850D65592770A364D494025FF3A73E8D4D70485(_stringLiteral61805FB8A9F8CCBCA7560EFE4D0B15AE0A7AA489, /*hidden argument*/NULL);
		// }
		return;
	}

IL_0029:
	{
		// m_CameraMaterial = CreateCameraMaterial(shaderName);
		String_t* L_4 = V_0;
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_5;
		L_5 = Provider_CreateCameraMaterial_mE1F6AD1B1D9F9BA80FE1B8DB3138262545FC018C(__this, L_4, /*hidden argument*/NULL);
		__this->set_m_CameraMaterial_5(L_5);
		// }
		return;
	}
}
// UnityEngine.XR.ARSubsystems.Feature UnityEngine.XR.ARKit.ARKitCameraSubsystem/ARKitProvider::get_currentCamera()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t ARKitProvider_get_currentCamera_mFD843ECE74DF3F9138EC5D5CD32391FA58A4D82B (ARKitProvider_tA94DC507BD799F0EB939B5D43E47850858DD9252 * __this, const RuntimeMethod* method)
{
	{
		// public override Feature currentCamera => NativeApi.UnityARKit_Camera_GetCurrentCamera();
		uint64_t L_0;
		L_0 = NativeApi_UnityARKit_Camera_GetCurrentCamera_mD4523891F66251548B2EA91873A6E33F73C8B390(/*hidden argument*/NULL);
		return L_0;
	}
}
// UnityEngine.XR.ARSubsystems.Feature UnityEngine.XR.ARKit.ARKitCameraSubsystem/ARKitProvider::get_requestedCamera()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t ARKitProvider_get_requestedCamera_mD727B68F150A7434B5B47ACB9F72D949A83080AF (ARKitProvider_tA94DC507BD799F0EB939B5D43E47850858DD9252 * __this, const RuntimeMethod* method)
{
	{
		// get => Api.GetRequestedFeatures();
		uint64_t L_0;
		L_0 = Api_GetRequestedFeatures_m31758CAAF7E8C545E0E99626EA2E993D2C398DDA(/*hidden argument*/NULL);
		return L_0;
	}
}
// System.Void UnityEngine.XR.ARKit.ARKitCameraSubsystem/ARKitProvider::set_requestedCamera(UnityEngine.XR.ARSubsystems.Feature)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARKitProvider_set_requestedCamera_m8DB1D9E307301981BD35A85C311197A236516864 (ARKitProvider_tA94DC507BD799F0EB939B5D43E47850858DD9252 * __this, uint64_t ___value0, const RuntimeMethod* method)
{
	{
		// Api.SetFeatureRequested(Feature.AnyCamera, false);
		Api_SetFeatureRequested_m5F97A8E9C25203A781BCC2601D85A90D187546F2(((int64_t)((int64_t)3)), (bool)0, /*hidden argument*/NULL);
		// Api.SetFeatureRequested(value, true);
		uint64_t L_0 = ___value0;
		Api_SetFeatureRequested_m5F97A8E9C25203A781BCC2601D85A90D187546F2(L_0, (bool)1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.XR.ARKit.ARKitCameraSubsystem/ARKitProvider::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARKitProvider_Start_mF3D38C0B323C86479FCE6CCEB00FF6437315A715 (ARKitProvider_tA94DC507BD799F0EB939B5D43E47850858DD9252 * __this, const RuntimeMethod* method)
{
	{
		// public override void Start() => NativeApi.UnityARKit_Camera_Start();
		NativeApi_UnityARKit_Camera_Start_m1DC45696F7FA84212AA4A3343FCC0D051B0A7BB3(/*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.XR.ARKit.ARKitCameraSubsystem/ARKitProvider::Stop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARKitProvider_Stop_mB23A1557CF513F20EB6FCCB3E296C4D20C9E3224 (ARKitProvider_tA94DC507BD799F0EB939B5D43E47850858DD9252 * __this, const RuntimeMethod* method)
{
	{
		// public override void Stop() => NativeApi.UnityARKit_Camera_Stop();
		NativeApi_UnityARKit_Camera_Stop_mBC2C5BDFC53F5838382C83CD1BCE5594F5AFF787(/*hidden argument*/NULL);
		return;
	}
}
// System.Boolean UnityEngine.XR.ARKit.ARKitCameraSubsystem/ARKitProvider::TryGetFrame(UnityEngine.XR.ARSubsystems.XRCameraParams,UnityEngine.XR.ARSubsystems.XRCameraFrame&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ARKitProvider_TryGetFrame_mA46A264CDE6F8DED3F28F2C09810E27FFCB4F2FC (ARKitProvider_tA94DC507BD799F0EB939B5D43E47850858DD9252 * __this, XRCameraParams_t9FCECBDAEFCC1084042B75393990959B28B64B18  ___cameraParams0, XRCameraFrame_t5FD7B7FC22B478AC6B00AD01A0AD6F2295EA1BA8 * ___cameraFrame1, const RuntimeMethod* method)
{
	{
		// return NativeApi.UnityARKit_Camera_TryGetFrame(cameraParams, out cameraFrame);
		XRCameraParams_t9FCECBDAEFCC1084042B75393990959B28B64B18  L_0 = ___cameraParams0;
		XRCameraFrame_t5FD7B7FC22B478AC6B00AD01A0AD6F2295EA1BA8 * L_1 = ___cameraFrame1;
		bool L_2;
		L_2 = NativeApi_UnityARKit_Camera_TryGetFrame_m06408A0B449D7766A2BFC01295E856A5CCDE2462(L_0, (XRCameraFrame_t5FD7B7FC22B478AC6B00AD01A0AD6F2295EA1BA8 *)L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Boolean UnityEngine.XR.ARKit.ARKitCameraSubsystem/ARKitProvider::get_autoFocusEnabled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ARKitProvider_get_autoFocusEnabled_m361176F0065B6E366DE28CF31DFB31FA7D6843A9 (ARKitProvider_tA94DC507BD799F0EB939B5D43E47850858DD9252 * __this, const RuntimeMethod* method)
{
	{
		// public override bool autoFocusEnabled => NativeApi.UnityARKit_Camera_GetAutoFocusEnabled();
		bool L_0;
		L_0 = NativeApi_UnityARKit_Camera_GetAutoFocusEnabled_m8881BC22C92BBCD11E627535D9B5BD310A2D3104(/*hidden argument*/NULL);
		return L_0;
	}
}
// System.Boolean UnityEngine.XR.ARKit.ARKitCameraSubsystem/ARKitProvider::get_autoFocusRequested()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ARKitProvider_get_autoFocusRequested_m7F4DCF79BEE3B6C67A78453326242421B17EDA91 (ARKitProvider_tA94DC507BD799F0EB939B5D43E47850858DD9252 * __this, const RuntimeMethod* method)
{
	{
		// get => Api.GetRequestedFeatures().All(Feature.AutoFocus);
		uint64_t L_0;
		L_0 = Api_GetRequestedFeatures_m31758CAAF7E8C545E0E99626EA2E993D2C398DDA(/*hidden argument*/NULL);
		bool L_1;
		L_1 = FeatureExtensions_All_mE045F59D960EB11FE1A7B31076D0132109B28160(L_0, ((int64_t)((int64_t)((int32_t)32768))), /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Void UnityEngine.XR.ARKit.ARKitCameraSubsystem/ARKitProvider::set_autoFocusRequested(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARKitProvider_set_autoFocusRequested_m4F0048D03B0985D1736DAE3B1CECCB004E6D7BC4 (ARKitProvider_tA94DC507BD799F0EB939B5D43E47850858DD9252 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// set => Api.SetFeatureRequested(Feature.AutoFocus, value);
		bool L_0 = ___value0;
		Api_SetFeatureRequested_m5F97A8E9C25203A781BCC2601D85A90D187546F2(((int64_t)((int64_t)((int32_t)32768))), L_0, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.XR.ARSubsystems.Feature UnityEngine.XR.ARKit.ARKitCameraSubsystem/ARKitProvider::get_currentLightEstimation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t ARKitProvider_get_currentLightEstimation_mE32D468E89181371C9BF9420CCA23689DFBA98C3 (ARKitProvider_tA94DC507BD799F0EB939B5D43E47850858DD9252 * __this, const RuntimeMethod* method)
{
	{
		// public override Feature currentLightEstimation => NativeApi.GetCurrentLightEstimation();
		uint64_t L_0;
		L_0 = NativeApi_GetCurrentLightEstimation_mBDCE98860E1DC9555997B2AE659EA3A2358C13D6(/*hidden argument*/NULL);
		return L_0;
	}
}
// UnityEngine.XR.ARSubsystems.Feature UnityEngine.XR.ARKit.ARKitCameraSubsystem/ARKitProvider::get_requestedLightEstimation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t ARKitProvider_get_requestedLightEstimation_m3E43F39ABD2EF8EA41BCE756FC56FCD36B0697FA (ARKitProvider_tA94DC507BD799F0EB939B5D43E47850858DD9252 * __this, const RuntimeMethod* method)
{
	{
		// get => Api.GetRequestedFeatures();
		uint64_t L_0;
		L_0 = Api_GetRequestedFeatures_m31758CAAF7E8C545E0E99626EA2E993D2C398DDA(/*hidden argument*/NULL);
		return L_0;
	}
}
// System.Void UnityEngine.XR.ARKit.ARKitCameraSubsystem/ARKitProvider::set_requestedLightEstimation(UnityEngine.XR.ARSubsystems.Feature)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARKitProvider_set_requestedLightEstimation_mB84C69B8B7DEFABB1F5D67FCB2371F44FAB53D43 (ARKitProvider_tA94DC507BD799F0EB939B5D43E47850858DD9252 * __this, uint64_t ___value0, const RuntimeMethod* method)
{
	{
		// Api.SetFeatureRequested(Feature.AnyLightEstimation, false);
		Api_SetFeatureRequested_m5F97A8E9C25203A781BCC2601D85A90D187546F2(((int64_t)((int64_t)((int32_t)2031616))), (bool)0, /*hidden argument*/NULL);
		// Api.SetFeatureRequested(value.Intersection(Feature.AnyLightEstimation), true);
		uint64_t L_0 = ___value0;
		uint64_t L_1;
		L_1 = FeatureExtensions_Intersection_m2CA900F610313CDD88F981646EBE46B1AD8AC5E9(L_0, ((int64_t)((int64_t)((int32_t)2031616))), /*hidden argument*/NULL);
		Api_SetFeatureRequested_m5F97A8E9C25203A781BCC2601D85A90D187546F2(L_1, (bool)1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Boolean UnityEngine.XR.ARKit.ARKitCameraSubsystem/ARKitProvider::TryGetIntrinsics(UnityEngine.XR.ARSubsystems.XRCameraIntrinsics&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ARKitProvider_TryGetIntrinsics_m8268475FCE8AAAD39FAE37C49D7CB87D28943529 (ARKitProvider_tA94DC507BD799F0EB939B5D43E47850858DD9252 * __this, XRCameraIntrinsics_t85F1514E263A6C6DE96DBA5448B44F11F35395FD * ___cameraIntrinsics0, const RuntimeMethod* method)
{
	{
		// return NativeApi.UnityARKit_Camera_TryGetIntrinsics(out cameraIntrinsics);
		XRCameraIntrinsics_t85F1514E263A6C6DE96DBA5448B44F11F35395FD * L_0 = ___cameraIntrinsics0;
		bool L_1;
		L_1 = NativeApi_UnityARKit_Camera_TryGetIntrinsics_m323E8F14DDDB3EE994960D18A2BBF0B9A631FF95((XRCameraIntrinsics_t85F1514E263A6C6DE96DBA5448B44F11F35395FD *)L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.XRCameraConfiguration> UnityEngine.XR.ARKit.ARKitCameraSubsystem/ARKitProvider::GetConfigurations(UnityEngine.XR.ARSubsystems.XRCameraConfiguration,Unity.Collections.Allocator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t80D42D57D2D76B05EFDA2CF74AE660AB5FDD9545  ARKitProvider_GetConfigurations_mF046C917140B00224C192C8E3AD6F9F878D47402 (ARKitProvider_tA94DC507BD799F0EB939B5D43E47850858DD9252 * __this, XRCameraConfiguration_t2393055E5547307393E9C73AB13B95E0785A4F7A  ___defaultCameraConfiguration0, int32_t ___allocator1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeCopyUtility_PtrToNativeArrayWithDefault_TisXRCameraConfiguration_t2393055E5547307393E9C73AB13B95E0785A4F7A_m201412E1B5E1CFD5D5FC127661E8FBE015A47072_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	NativeArray_1_t80D42D57D2D76B05EFDA2CF74AE660AB5FDD9545  V_3;
	memset((&V_3), 0, sizeof(V_3));
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		// IntPtr configurations = NativeApi.UnityARKit_Camera_AcquireConfigurations(out int configurationsCount,
		//                                                                           out int configurationSize);
		intptr_t L_0;
		L_0 = NativeApi_UnityARKit_Camera_AcquireConfigurations_mD6539AE63C0A2F12563F169DF9BA0EEAD5976503((int32_t*)(&V_1), (int32_t*)(&V_2), /*hidden argument*/NULL);
		V_0 = (intptr_t)L_0;
	}

IL_000a:
	try
	{ // begin try (depth: 1)
		// return NativeCopyUtility.PtrToNativeArrayWithDefault(defaultCameraConfiguration,
		//                                                      (void*)configurations,
		//                                                      configurationSize, configurationsCount,
		//                                                      allocator);
		XRCameraConfiguration_t2393055E5547307393E9C73AB13B95E0785A4F7A  L_1 = ___defaultCameraConfiguration0;
		intptr_t L_2 = V_0;
		void* L_3;
		L_3 = IntPtr_op_Explicit_mE8B472FDC632CBD121F7ADF4F94546D6610BACDD((intptr_t)L_2, /*hidden argument*/NULL);
		int32_t L_4 = V_2;
		int32_t L_5 = V_1;
		int32_t L_6 = ___allocator1;
		NativeArray_1_t80D42D57D2D76B05EFDA2CF74AE660AB5FDD9545  L_7;
		L_7 = NativeCopyUtility_PtrToNativeArrayWithDefault_TisXRCameraConfiguration_t2393055E5547307393E9C73AB13B95E0785A4F7A_m201412E1B5E1CFD5D5FC127661E8FBE015A47072(L_1, (void*)(void*)L_3, L_4, L_5, L_6, /*hidden argument*/NativeCopyUtility_PtrToNativeArrayWithDefault_TisXRCameraConfiguration_t2393055E5547307393E9C73AB13B95E0785A4F7A_m201412E1B5E1CFD5D5FC127661E8FBE015A47072_RuntimeMethod_var);
		V_3 = L_7;
		IL2CPP_LEAVE(0x23, FINALLY_001c);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_001c;
	}

FINALLY_001c:
	{ // begin finally (depth: 1)
		// NativeApi.UnityARKit_Camera_ReleaseConfigurations(configurations);
		intptr_t L_8 = V_0;
		NativeApi_UnityARKit_Camera_ReleaseConfigurations_m5B124F82E03471C63AE0AD39CCE1BDBE66192377((intptr_t)L_8, /*hidden argument*/NULL);
		// }
		IL2CPP_END_FINALLY(28)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(28)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x23, IL_0023)
	}

IL_0023:
	{
		// }
		NativeArray_1_t80D42D57D2D76B05EFDA2CF74AE660AB5FDD9545  L_9 = V_3;
		return L_9;
	}
}
// System.Nullable`1<UnityEngine.XR.ARSubsystems.XRCameraConfiguration> UnityEngine.XR.ARKit.ARKitCameraSubsystem/ARKitProvider::get_currentConfiguration()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Nullable_1_t661141E668063C73311C9DF09B3AE945EA9A1D8C  ARKitProvider_get_currentConfiguration_mD94A55309DB647024C63A5CA48744B1B59F29D50 (ARKitProvider_tA94DC507BD799F0EB939B5D43E47850858DD9252 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1__ctor_mC8B2FF6D15E5BD1BF52356C2621F2BE4AD504054_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	XRCameraConfiguration_t2393055E5547307393E9C73AB13B95E0785A4F7A  V_0;
	memset((&V_0), 0, sizeof(V_0));
	Nullable_1_t661141E668063C73311C9DF09B3AE945EA9A1D8C  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// if (NativeApi.UnityARKit_Camera_TryGetCurrentConfiguration(out XRCameraConfiguration cameraConfiguration))
		bool L_0;
		L_0 = NativeApi_UnityARKit_Camera_TryGetCurrentConfiguration_m8EAAEA8A2E92DD892E3A9EFCA3A298FED78CEC2C((XRCameraConfiguration_t2393055E5547307393E9C73AB13B95E0785A4F7A *)(&V_0), /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0010;
		}
	}
	{
		// return cameraConfiguration;
		XRCameraConfiguration_t2393055E5547307393E9C73AB13B95E0785A4F7A  L_1 = V_0;
		Nullable_1_t661141E668063C73311C9DF09B3AE945EA9A1D8C  L_2;
		memset((&L_2), 0, sizeof(L_2));
		Nullable_1__ctor_mC8B2FF6D15E5BD1BF52356C2621F2BE4AD504054((&L_2), L_1, /*hidden argument*/Nullable_1__ctor_mC8B2FF6D15E5BD1BF52356C2621F2BE4AD504054_RuntimeMethod_var);
		return L_2;
	}

IL_0010:
	{
		// return null;
		il2cpp_codegen_initobj((&V_1), sizeof(Nullable_1_t661141E668063C73311C9DF09B3AE945EA9A1D8C ));
		Nullable_1_t661141E668063C73311C9DF09B3AE945EA9A1D8C  L_3 = V_1;
		return L_3;
	}
}
// System.Void UnityEngine.XR.ARKit.ARKitCameraSubsystem/ARKitProvider::set_currentConfiguration(System.Nullable`1<UnityEngine.XR.ARSubsystems.XRCameraConfiguration>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARKitProvider_set_currentConfiguration_m616D6D3B9CA248AA782CFF34203865F403E269CF (ARKitProvider_tA94DC507BD799F0EB939B5D43E47850858DD9252 * __this, Nullable_1_t661141E668063C73311C9DF09B3AE945EA9A1D8C  ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_Value_m061AC618B4B3A1EFA9F3B0970437705C72EA10BD_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// switch (NativeApi.UnityARKit_Camera_TrySetCurrentConfiguration((XRCameraConfiguration)value))
		XRCameraConfiguration_t2393055E5547307393E9C73AB13B95E0785A4F7A  L_0;
		L_0 = Nullable_1_get_Value_m061AC618B4B3A1EFA9F3B0970437705C72EA10BD((Nullable_1_t661141E668063C73311C9DF09B3AE945EA9A1D8C *)(&___value0), /*hidden argument*/Nullable_1_get_Value_m061AC618B4B3A1EFA9F3B0970437705C72EA10BD_RuntimeMethod_var);
		int32_t L_1;
		L_1 = NativeApi_UnityARKit_Camera_TrySetCurrentConfiguration_mE3C365F90DEAA2F7F8FCFB1FEFFDFC0F2D2E30B7(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		int32_t L_2 = V_0;
		switch (L_2)
		{
			case 0:
			{
				goto IL_0056;
			}
			case 1:
			{
				goto IL_0025;
			}
			case 2:
			{
				goto IL_0030;
			}
			case 3:
			{
				goto IL_0040;
			}
		}
	}
	{
		goto IL_004b;
	}

IL_0025:
	{
		// throw new InvalidOperationException("cannot set camera configuration because ARKit version "
		//                                     + "does not support camera configurations");
		InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB * L_3 = (InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mC012CE552988309733C896F3FEA8249171E4402E(L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral55C304E493F724D1EBE0D4BECC9C0128DA553B92)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ARKitProvider_set_currentConfiguration_m616D6D3B9CA248AA782CFF34203865F403E269CF_RuntimeMethod_var)));
	}

IL_0030:
	{
		// throw new ArgumentException("camera configuration does not exist in the available "
		//                             + "configurations", "value");
		ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 * L_4 = (ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m71044C2110E357B71A1C30D2561C3F861AF1DC0D(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral0C168A523D6584C552B5A228A16476728129945A)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral46F273EF641E07D271D91E0DC24A4392582671F8)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ARKitProvider_set_currentConfiguration_m616D6D3B9CA248AA782CFF34203865F403E269CF_RuntimeMethod_var)));
	}

IL_0040:
	{
		// throw new InvalidOperationException("cannot set camera configuration because the ARKit "
		//                                     + "session is not valid");
		InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB * L_5 = (InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mC012CE552988309733C896F3FEA8249171E4402E(L_5, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral40C3DDA396CBEA338D1EE3CA26F62BC0B97C14A0)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ARKitProvider_set_currentConfiguration_m616D6D3B9CA248AA782CFF34203865F403E269CF_RuntimeMethod_var)));
	}

IL_004b:
	{
		// throw new InvalidOperationException("cannot set camera configuration for ARKit");
		InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB * L_6 = (InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mC012CE552988309733C896F3FEA8249171E4402E(L_6, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralD38E90B12339F5EFCA46BFCA27FFDE337FA3B996)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_6, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ARKitProvider_set_currentConfiguration_m616D6D3B9CA248AA782CFF34203865F403E269CF_RuntimeMethod_var)));
	}

IL_0056:
	{
		// }
		return;
	}
}
// Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.XRTextureDescriptor> UnityEngine.XR.ARKit.ARKitCameraSubsystem/ARKitProvider::GetTextureDescriptors(UnityEngine.XR.ARSubsystems.XRTextureDescriptor,Unity.Collections.Allocator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t290DD5A348463DD4415AFE27775047312478F952  ARKitProvider_GetTextureDescriptors_m138BA51BE91E7DF2944A5E4A5257C23F4773BEA5 (ARKitProvider_tA94DC507BD799F0EB939B5D43E47850858DD9252 * __this, XRTextureDescriptor_t9CA857DCCC1208B74376787BE4F3008A01B29A57  ___defaultDescriptor0, int32_t ___allocator1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeCopyUtility_PtrToNativeArrayWithDefault_TisXRTextureDescriptor_t9CA857DCCC1208B74376787BE4F3008A01B29A57_m1546885E4894E2676D1C8E5E9B8C0B1E41B24C63_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	void* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	NativeArray_1_t290DD5A348463DD4415AFE27775047312478F952  V_3;
	memset((&V_3), 0, sizeof(V_3));
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		// var textureDescriptors = NativeApi.UnityARKit_Camera_AcquireTextureDescriptors(
		//     out int length, out int elementSize);
		void* L_0;
		L_0 = NativeApi_UnityARKit_Camera_AcquireTextureDescriptors_mB910D215B897887CD01B74FCAE5C90A05AEBBC99((int32_t*)(&V_1), (int32_t*)(&V_2), /*hidden argument*/NULL);
		V_0 = (void*)L_0;
	}

IL_000a:
	try
	{ // begin try (depth: 1)
		// return NativeCopyUtility.PtrToNativeArrayWithDefault(
		//     defaultDescriptor,
		//     textureDescriptors, elementSize, length, allocator);
		XRTextureDescriptor_t9CA857DCCC1208B74376787BE4F3008A01B29A57  L_1 = ___defaultDescriptor0;
		void* L_2 = V_0;
		int32_t L_3 = V_2;
		int32_t L_4 = V_1;
		int32_t L_5 = ___allocator1;
		NativeArray_1_t290DD5A348463DD4415AFE27775047312478F952  L_6;
		L_6 = NativeCopyUtility_PtrToNativeArrayWithDefault_TisXRTextureDescriptor_t9CA857DCCC1208B74376787BE4F3008A01B29A57_m1546885E4894E2676D1C8E5E9B8C0B1E41B24C63(L_1, (void*)(void*)L_2, L_3, L_4, L_5, /*hidden argument*/NativeCopyUtility_PtrToNativeArrayWithDefault_TisXRTextureDescriptor_t9CA857DCCC1208B74376787BE4F3008A01B29A57_m1546885E4894E2676D1C8E5E9B8C0B1E41B24C63_RuntimeMethod_var);
		V_3 = L_6;
		IL2CPP_LEAVE(0x1E, FINALLY_0017);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0017;
	}

FINALLY_0017:
	{ // begin finally (depth: 1)
		// NativeApi.UnityARKit_Camera_ReleaseTextureDescriptors(textureDescriptors);
		void* L_7 = V_0;
		NativeApi_UnityARKit_Camera_ReleaseTextureDescriptors_m98B6B82D4283D3378679A8210C7037A581209D8D((void*)(void*)L_7, /*hidden argument*/NULL);
		// }
		IL2CPP_END_FINALLY(23)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(23)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x1E, IL_001e)
	}

IL_001e:
	{
		// }
		NativeArray_1_t290DD5A348463DD4415AFE27775047312478F952  L_8 = V_3;
		return L_8;
	}
}
// System.Void UnityEngine.XR.ARKit.ARKitCameraSubsystem/ARKitProvider::GetMaterialKeywords(System.Collections.Generic.List`1<System.String>&,System.Collections.Generic.List`1<System.String>&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARKitProvider_GetMaterialKeywords_m14617F92FEF8D463B15132F7237BC9DF75EF2964 (ARKitProvider_tA94DC507BD799F0EB939B5D43E47850858DD9252 * __this, List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 ** ___enabledKeywords0, List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 ** ___disabledKeywords1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ARKitProvider_tA94DC507BD799F0EB939B5D43E47850858DD9252_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (GraphicsSettings.currentRenderPipeline == null)
		RenderPipelineAsset_tA4DBD0F0DD583DF3C9F85AF41F49308D167864EF * L_0;
		L_0 = GraphicsSettings_get_currentRenderPipeline_mDEBD1CD71B0917F918D9860C9351943A9677ADCA(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_0, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_001c;
		}
	}
	{
		// enabledKeywords = k_LegacyRPEnabledMaterialKeywords;
		List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 ** L_2 = ___enabledKeywords0;
		IL2CPP_RUNTIME_CLASS_INIT(ARKitProvider_tA94DC507BD799F0EB939B5D43E47850858DD9252_il2cpp_TypeInfo_var);
		List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_3 = ((ARKitProvider_tA94DC507BD799F0EB939B5D43E47850858DD9252_StaticFields*)il2cpp_codegen_static_fields_for(ARKitProvider_tA94DC507BD799F0EB939B5D43E47850858DD9252_il2cpp_TypeInfo_var))->get_k_LegacyRPEnabledMaterialKeywords_3();
		*((RuntimeObject **)L_2) = (RuntimeObject *)L_3;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject **)L_2, (void*)(RuntimeObject *)L_3);
		// disabledKeywords = k_LegacyRPDisabledMaterialKeywords;
		List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 ** L_4 = ___disabledKeywords1;
		List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_5 = ((ARKitProvider_tA94DC507BD799F0EB939B5D43E47850858DD9252_StaticFields*)il2cpp_codegen_static_fields_for(ARKitProvider_tA94DC507BD799F0EB939B5D43E47850858DD9252_il2cpp_TypeInfo_var))->get_k_LegacyRPDisabledMaterialKeywords_4();
		*((RuntimeObject **)L_4) = (RuntimeObject *)L_5;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject **)L_4, (void*)(RuntimeObject *)L_5);
		// }
		return;
	}

IL_001c:
	{
		// enabledKeywords = null;
		List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 ** L_6 = ___enabledKeywords0;
		*((RuntimeObject **)L_6) = (RuntimeObject *)NULL;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject **)L_6, (void*)(RuntimeObject *)NULL);
		// disabledKeywords = null;
		List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 ** L_7 = ___disabledKeywords1;
		*((RuntimeObject **)L_7) = (RuntimeObject *)NULL;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject **)L_7, (void*)(RuntimeObject *)NULL);
		// }
		return;
	}
}
// UnityEngine.XR.ARSubsystems.XRCpuImage/Api UnityEngine.XR.ARKit.ARKitCameraSubsystem/ARKitProvider::get_cpuImageApi()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Api_t7C92F00C6416A2C636A44AAC833C3773C567DC3E * ARKitProvider_get_cpuImageApi_m3E03A8B8CA34C62E67F60623686CD1334066528C (ARKitProvider_tA94DC507BD799F0EB939B5D43E47850858DD9252 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ARKitCpuImageApi_tD94B983FBF13116F7497F2089555084CCAC47D59_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public override XRCpuImage.Api cpuImageApi => ARKitCpuImageApi.instance;
		IL2CPP_RUNTIME_CLASS_INIT(ARKitCpuImageApi_tD94B983FBF13116F7497F2089555084CCAC47D59_il2cpp_TypeInfo_var);
		ARKitCpuImageApi_tD94B983FBF13116F7497F2089555084CCAC47D59 * L_0;
		L_0 = ARKitCpuImageApi_get_instance_m6514121C177EF3FE7E2FD99C430A48C29D9245CA_inline(/*hidden argument*/NULL);
		return L_0;
	}
}
// System.Boolean UnityEngine.XR.ARKit.ARKitCameraSubsystem/ARKitProvider::TryAcquireLatestCpuImage(UnityEngine.XR.ARSubsystems.XRCpuImage/Cinfo&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ARKitProvider_TryAcquireLatestCpuImage_mE2BF6E237A19E3DF2707526791340357E35DEABE (ARKitProvider_tA94DC507BD799F0EB939B5D43E47850858DD9252 * __this, Cinfo_t4E32E30AF6973611F1DD0F47FC041ED3A8775DA6 * ___cameraImageCinfo0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ARKitCpuImageApi_tD94B983FBF13116F7497F2089555084CCAC47D59_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// => ARKitCpuImageApi.TryAcquireLatestImage(ARKitCpuImageApi.ImageType.Camera, out cameraImageCinfo);
		Cinfo_t4E32E30AF6973611F1DD0F47FC041ED3A8775DA6 * L_0 = ___cameraImageCinfo0;
		IL2CPP_RUNTIME_CLASS_INIT(ARKitCpuImageApi_tD94B983FBF13116F7497F2089555084CCAC47D59_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = ARKitCpuImageApi_TryAcquireLatestImage_m70DB2A52D021DD6A02E767699383A7E151C0D8E2(0, (Cinfo_t4E32E30AF6973611F1DD0F47FC041ED3A8775DA6 *)L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Void UnityEngine.XR.ARKit.ARKitCameraSubsystem/ARKitProvider::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARKitProvider__cctor_m5E0C0C35D2142E8245D1F9356789DB22A7E01B16 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ARKitProvider_tA94DC507BD799F0EB939B5D43E47850858DD9252_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m627ED3F7C50096BB8934F778CB980E79483BD2AE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m30C52A4F2828D86CA3FAB0B1B583948F4DA9F1F9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3316E29454B30FF00FD499D58FB9EB6E3D6D4A62);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral34DB7C411D03036F0D06F00351078A370EA0A603);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral64B5C8CA3DBCCD4684E840D0AB3E6C8D55ACA47A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8710D8B4E16855F019CB68A747E4078E34957226);
		s_Il2CppMethodInitialized = true;
	}
	{
		// static readonly int k_TextureYPropertyNameId = Shader.PropertyToID(k_TextureYPropertyName);
		int32_t L_0;
		L_0 = Shader_PropertyToID_m8C1BEBBAC0CC3015B142AF0FA856495D5D239F5F(_stringLiteral64B5C8CA3DBCCD4684E840D0AB3E6C8D55ACA47A, /*hidden argument*/NULL);
		((ARKitProvider_tA94DC507BD799F0EB939B5D43E47850858DD9252_StaticFields*)il2cpp_codegen_static_fields_for(ARKitProvider_tA94DC507BD799F0EB939B5D43E47850858DD9252_il2cpp_TypeInfo_var))->set_k_TextureYPropertyNameId_1(L_0);
		// static readonly int k_TextureCbCrPropertyNameId = Shader.PropertyToID(k_TextureCbCrPropertyName);
		int32_t L_1;
		L_1 = Shader_PropertyToID_m8C1BEBBAC0CC3015B142AF0FA856495D5D239F5F(_stringLiteral3316E29454B30FF00FD499D58FB9EB6E3D6D4A62, /*hidden argument*/NULL);
		((ARKitProvider_tA94DC507BD799F0EB939B5D43E47850858DD9252_StaticFields*)il2cpp_codegen_static_fields_for(ARKitProvider_tA94DC507BD799F0EB939B5D43E47850858DD9252_il2cpp_TypeInfo_var))->set_k_TextureCbCrPropertyNameId_2(L_1);
		// static readonly List<string> k_LegacyRPEnabledMaterialKeywords = null;
		((ARKitProvider_tA94DC507BD799F0EB939B5D43E47850858DD9252_StaticFields*)il2cpp_codegen_static_fields_for(ARKitProvider_tA94DC507BD799F0EB939B5D43E47850858DD9252_il2cpp_TypeInfo_var))->set_k_LegacyRPEnabledMaterialKeywords_3((List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 *)NULL);
		// static readonly List<string> k_LegacyRPDisabledMaterialKeywords = new List<string>() {k_BackgroundShaderKeywordLWRP, k_BackgroundShaderKeywordURP};
		List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_2 = (List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 *)il2cpp_codegen_object_new(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3_il2cpp_TypeInfo_var);
		List_1__ctor_m30C52A4F2828D86CA3FAB0B1B583948F4DA9F1F9(L_2, /*hidden argument*/List_1__ctor_m30C52A4F2828D86CA3FAB0B1B583948F4DA9F1F9_RuntimeMethod_var);
		List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_3 = L_2;
		NullCheck(L_3);
		List_1_Add_m627ED3F7C50096BB8934F778CB980E79483BD2AE(L_3, _stringLiteral8710D8B4E16855F019CB68A747E4078E34957226, /*hidden argument*/List_1_Add_m627ED3F7C50096BB8934F778CB980E79483BD2AE_RuntimeMethod_var);
		List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_4 = L_3;
		NullCheck(L_4);
		List_1_Add_m627ED3F7C50096BB8934F778CB980E79483BD2AE(L_4, _stringLiteral34DB7C411D03036F0D06F00351078A370EA0A603, /*hidden argument*/List_1_Add_m627ED3F7C50096BB8934F778CB980E79483BD2AE_RuntimeMethod_var);
		((ARKitProvider_tA94DC507BD799F0EB939B5D43E47850858DD9252_StaticFields*)il2cpp_codegen_static_fields_for(ARKitProvider_tA94DC507BD799F0EB939B5D43E47850858DD9252_il2cpp_TypeInfo_var))->set_k_LegacyRPDisabledMaterialKeywords_4(L_4);
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
// UnityEngine.XR.ARSubsystems.Feature UnityEngine.XR.ARKit.ARKitCameraSubsystem/NativeApi::GetCurrentLightEstimation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t NativeApi_GetCurrentLightEstimation_mBDCE98860E1DC9555997B2AE659EA3A2358C13D6 (const RuntimeMethod* method)
{
	typedef uint64_t (DEFAULT_CALL *PInvokeFunc) ();

	// Native function invocation
	uint64_t returnValue = reinterpret_cast<PInvokeFunc>(UnityARKit_Camera_GetCurrentLightEstimation)();

	return returnValue;
}
// System.Void UnityEngine.XR.ARKit.ARKitCameraSubsystem/NativeApi::UnityARKit_Camera_Construct(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeApi_UnityARKit_Camera_Construct_m85F5550F4DF7C866799A325444B1DA96A2F41265 (int32_t ___textureYPropertyNameId0, int32_t ___textureCbCrPropertyNameId1, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (int32_t, int32_t);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(UnityARKit_Camera_Construct)(___textureYPropertyNameId0, ___textureCbCrPropertyNameId1);

}
// System.Void UnityEngine.XR.ARKit.ARKitCameraSubsystem/NativeApi::UnityARKit_Camera_Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeApi_UnityARKit_Camera_Start_m1DC45696F7FA84212AA4A3343FCC0D051B0A7BB3 (const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) ();

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(UnityARKit_Camera_Start)();

}
// System.Void UnityEngine.XR.ARKit.ARKitCameraSubsystem/NativeApi::UnityARKit_Camera_Stop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeApi_UnityARKit_Camera_Stop_mBC2C5BDFC53F5838382C83CD1BCE5594F5AFF787 (const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) ();

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(UnityARKit_Camera_Stop)();

}
// System.Boolean UnityEngine.XR.ARKit.ARKitCameraSubsystem/NativeApi::UnityARKit_Camera_TryGetFrame(UnityEngine.XR.ARSubsystems.XRCameraParams,UnityEngine.XR.ARSubsystems.XRCameraFrame&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NativeApi_UnityARKit_Camera_TryGetFrame_m06408A0B449D7766A2BFC01295E856A5CCDE2462 (XRCameraParams_t9FCECBDAEFCC1084042B75393990959B28B64B18  ___cameraParams0, XRCameraFrame_t5FD7B7FC22B478AC6B00AD01A0AD6F2295EA1BA8 * ___cameraFrame1, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (XRCameraParams_t9FCECBDAEFCC1084042B75393990959B28B64B18 , XRCameraFrame_t5FD7B7FC22B478AC6B00AD01A0AD6F2295EA1BA8 *);

	// Native function invocation
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(UnityARKit_Camera_TryGetFrame)(___cameraParams0, ___cameraFrame1);

	return static_cast<bool>(returnValue);
}
// System.Boolean UnityEngine.XR.ARKit.ARKitCameraSubsystem/NativeApi::UnityARKit_Camera_TryGetIntrinsics(UnityEngine.XR.ARSubsystems.XRCameraIntrinsics&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NativeApi_UnityARKit_Camera_TryGetIntrinsics_m323E8F14DDDB3EE994960D18A2BBF0B9A631FF95 (XRCameraIntrinsics_t85F1514E263A6C6DE96DBA5448B44F11F35395FD * ___cameraIntrinsics0, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (XRCameraIntrinsics_t85F1514E263A6C6DE96DBA5448B44F11F35395FD *);

	// Native function invocation
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(UnityARKit_Camera_TryGetIntrinsics)(___cameraIntrinsics0);

	return static_cast<bool>(returnValue);
}
// System.Boolean UnityEngine.XR.ARKit.ARKitCameraSubsystem/NativeApi::UnityARKit_Camera_IsCameraPermissionGranted()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NativeApi_UnityARKit_Camera_IsCameraPermissionGranted_mF6CDDCDD3C45DFAB0B13B25ADC329725F2175E79 (const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) ();

	// Native function invocation
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(UnityARKit_Camera_IsCameraPermissionGranted)();

	return static_cast<bool>(returnValue);
}
// System.IntPtr UnityEngine.XR.ARKit.ARKitCameraSubsystem/NativeApi::UnityARKit_Camera_AcquireConfigurations(System.Int32&,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t NativeApi_UnityARKit_Camera_AcquireConfigurations_mD6539AE63C0A2F12563F169DF9BA0EEAD5976503 (int32_t* ___configurationsCount0, int32_t* ___configurationSize1, const RuntimeMethod* method)
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) (int32_t*, int32_t*);

	// Native function invocation
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(UnityARKit_Camera_AcquireConfigurations)(___configurationsCount0, ___configurationSize1);

	return returnValue;
}
// System.Void UnityEngine.XR.ARKit.ARKitCameraSubsystem/NativeApi::UnityARKit_Camera_ReleaseConfigurations(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeApi_UnityARKit_Camera_ReleaseConfigurations_m5B124F82E03471C63AE0AD39CCE1BDBE66192377 (intptr_t ___configurations0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (intptr_t);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(UnityARKit_Camera_ReleaseConfigurations)(___configurations0);

}
// System.Boolean UnityEngine.XR.ARKit.ARKitCameraSubsystem/NativeApi::UnityARKit_Camera_TryGetCurrentConfiguration(UnityEngine.XR.ARSubsystems.XRCameraConfiguration&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NativeApi_UnityARKit_Camera_TryGetCurrentConfiguration_m8EAAEA8A2E92DD892E3A9EFCA3A298FED78CEC2C (XRCameraConfiguration_t2393055E5547307393E9C73AB13B95E0785A4F7A * ___cameraConfiguration0, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (XRCameraConfiguration_t2393055E5547307393E9C73AB13B95E0785A4F7A *);

	// Native function invocation
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(UnityARKit_Camera_TryGetCurrentConfiguration)(___cameraConfiguration0);

	return static_cast<bool>(returnValue);
}
// UnityEngine.XR.ARKit.ARKitCameraSubsystem/CameraConfigurationResult UnityEngine.XR.ARKit.ARKitCameraSubsystem/NativeApi::UnityARKit_Camera_TrySetCurrentConfiguration(UnityEngine.XR.ARSubsystems.XRCameraConfiguration)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeApi_UnityARKit_Camera_TrySetCurrentConfiguration_mE3C365F90DEAA2F7F8FCFB1FEFFDFC0F2D2E30B7 (XRCameraConfiguration_t2393055E5547307393E9C73AB13B95E0785A4F7A  ___cameraConfiguration0, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (XRCameraConfiguration_t2393055E5547307393E9C73AB13B95E0785A4F7A );

	// Native function invocation
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(UnityARKit_Camera_TrySetCurrentConfiguration)(___cameraConfiguration0);

	return returnValue;
}
// System.Void* UnityEngine.XR.ARKit.ARKitCameraSubsystem/NativeApi::UnityARKit_Camera_AcquireTextureDescriptors(System.Int32&,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* NativeApi_UnityARKit_Camera_AcquireTextureDescriptors_mB910D215B897887CD01B74FCAE5C90A05AEBBC99 (int32_t* ___length0, int32_t* ___elementSize1, const RuntimeMethod* method)
{
	typedef void* (DEFAULT_CALL *PInvokeFunc) (int32_t*, int32_t*);

	// Native function invocation
	void* returnValue = reinterpret_cast<PInvokeFunc>(UnityARKit_Camera_AcquireTextureDescriptors)(___length0, ___elementSize1);

	return returnValue;
}
// System.Void UnityEngine.XR.ARKit.ARKitCameraSubsystem/NativeApi::UnityARKit_Camera_ReleaseTextureDescriptors(System.Void*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeApi_UnityARKit_Camera_ReleaseTextureDescriptors_m98B6B82D4283D3378679A8210C7037A581209D8D (void* ___descriptors0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (void*);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(UnityARKit_Camera_ReleaseTextureDescriptors)(___descriptors0);

}
// UnityEngine.XR.ARSubsystems.Feature UnityEngine.XR.ARKit.ARKitCameraSubsystem/NativeApi::UnityARKit_Camera_GetCurrentCamera()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t NativeApi_UnityARKit_Camera_GetCurrentCamera_mD4523891F66251548B2EA91873A6E33F73C8B390 (const RuntimeMethod* method)
{
	typedef uint64_t (DEFAULT_CALL *PInvokeFunc) ();

	// Native function invocation
	uint64_t returnValue = reinterpret_cast<PInvokeFunc>(UnityARKit_Camera_GetCurrentCamera)();

	return returnValue;
}
// System.Boolean UnityEngine.XR.ARKit.ARKitCameraSubsystem/NativeApi::UnityARKit_Camera_GetAutoFocusEnabled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NativeApi_UnityARKit_Camera_GetAutoFocusEnabled_m8881BC22C92BBCD11E627535D9B5BD310A2D3104 (const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) ();

	// Native function invocation
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(UnityARKit_Camera_GetAutoFocusEnabled)();

	return static_cast<bool>(returnValue);
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
// System.Boolean UnityEngine.XR.ARKit.ARKitCpuImageApi/Native::TryAcquireLatestImage(UnityEngine.XR.ARKit.ARKitCpuImageApi/ImageType,UnityEngine.XR.ARSubsystems.XRCpuImage/Cinfo&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Native_TryAcquireLatestImage_mCCB4F92708AFADE4D71E26B87A57DC0BD8569487 (int32_t ___imageType0, Cinfo_t4E32E30AF6973611F1DD0F47FC041ED3A8775DA6 * ___cinfo1, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (int32_t, Cinfo_t4E32E30AF6973611F1DD0F47FC041ED3A8775DA6 *);

	// Native function invocation
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(UnityARKit_CpuImage_TryAcquireLatestImage)(___imageType0, ___cinfo1);

	return static_cast<bool>(returnValue);
}
// System.Void UnityEngine.XR.ARKit.ARKitCpuImageApi/Native::DisposeImage(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Native_DisposeImage_mF9DCD764FDD0B24A9FF7019AEBBA12EDF1EF28A5 (int32_t ___nativeHandle0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (int32_t);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(UnityARKit_CpuImage_DisposeImage)(___nativeHandle0);

}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.XR.ARKit.ARKitEnvironmentProbeSubsystem/ARKitProvider::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARKitProvider__ctor_m6C97688B42AECCD0E058FB51620C2E4EEB99036F (ARKitProvider_tBED347A85C19012D5B5F124BC8C0FB4876FBEACC * __this, const RuntimeMethod* method)
{
	{
		// public ARKitProvider() => EnvironmentProbeApi.UnityARKit_EnvironmentProbeProvider_Construct();
		Provider__ctor_m82E278812C6826F3F89A708912491AB72058B700(__this, /*hidden argument*/NULL);
		// public ARKitProvider() => EnvironmentProbeApi.UnityARKit_EnvironmentProbeProvider_Construct();
		EnvironmentProbeApi_UnityARKit_EnvironmentProbeProvider_Construct_m5D69AFAA42866A78CC2B64C4457F3612E0627B46(/*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.XR.ARKit.ARKitEnvironmentProbeSubsystem/ARKitProvider::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARKitProvider_Start_m94EFF137A1084670713606039A38476EC01C751E (ARKitProvider_tBED347A85C19012D5B5F124BC8C0FB4876FBEACC * __this, const RuntimeMethod* method)
{
	{
		// public override void Start() => EnvironmentProbeApi.UnityARKit_EnvironmentProbeProvider_Start();
		EnvironmentProbeApi_UnityARKit_EnvironmentProbeProvider_Start_mBB72F3877A91955C57C9DD1150F073E312EADB58(/*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.XR.ARKit.ARKitEnvironmentProbeSubsystem/ARKitProvider::Stop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARKitProvider_Stop_m1B0BABE7B13079E08F6191B6F6FC8EC2B0851CDB (ARKitProvider_tBED347A85C19012D5B5F124BC8C0FB4876FBEACC * __this, const RuntimeMethod* method)
{
	{
		// public override void Stop() => EnvironmentProbeApi.UnityARKit_EnvironmentProbeProvider_Stop();
		EnvironmentProbeApi_UnityARKit_EnvironmentProbeProvider_Stop_mC4EA40B91E241DECA3A2146C68385DB70033E18B(/*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XREnvironmentProbe> UnityEngine.XR.ARKit.ARKitEnvironmentProbeSubsystem/ARKitProvider::GetChanges(UnityEngine.XR.ARSubsystems.XREnvironmentProbe,Unity.Collections.Allocator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TrackableChanges_1_tBC1B6352E3D11F9F7BC4E567480BDF8AE39A547F  ARKitProvider_GetChanges_m5B56608D544394851721B0FB743AE968F5E572AE (ARKitProvider_tBED347A85C19012D5B5F124BC8C0FB4876FBEACC * __this, XREnvironmentProbe_t4D75B5DF95135D1BA45222CBE3E7677E823B8D4C  ___defaultEnvironmentProbe0, int32_t ___allocator1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TrackableChanges_1__ctor_m8B32DEE7C39CA08A7523D0D553B26079265524E1_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	intptr_t V_1;
	memset((&V_1), 0, sizeof(V_1));
	int32_t V_2 = 0;
	intptr_t V_3;
	memset((&V_3), 0, sizeof(V_3));
	int32_t V_4 = 0;
	intptr_t V_5;
	memset((&V_5), 0, sizeof(V_5));
	int32_t V_6 = 0;
	intptr_t V_7;
	memset((&V_7), 0, sizeof(V_7));
	TrackableChanges_1_tBC1B6352E3D11F9F7BC4E567480BDF8AE39A547F  V_8;
	memset((&V_8), 0, sizeof(V_8));
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		// var context = EnvironmentProbeApi.UnityARKit_EnvironmentProbeProvider_AcquireChanges(out numAddedEnvironmentProbes, out addedEnvironmentProbesPointer,
		//                                                                                      out numUpdatedEnvironmentProbes, out updatedEnvironmentProbesPointer,
		//                                                                                      out numRemovedEnvironmentProbeIds, out removedEnvironmentProbeIdsPointer,
		//                                                                                      out stride);
		intptr_t L_0;
		L_0 = EnvironmentProbeApi_UnityARKit_EnvironmentProbeProvider_AcquireChanges_mBF125AB519AAAB01B5CA4B6A3CC9693946394C09((int32_t*)(&V_0), (intptr_t*)(&V_1), (int32_t*)(&V_2), (intptr_t*)(&V_3), (int32_t*)(&V_4), (intptr_t*)(&V_5), (int32_t*)(&V_6), /*hidden argument*/NULL);
		V_7 = (intptr_t)L_0;
	}

IL_0015:
	try
	{ // begin try (depth: 1)
		// return new TrackableChanges<XREnvironmentProbe>(
		//     (void*)addedEnvironmentProbesPointer, numAddedEnvironmentProbes,
		//     (void*)updatedEnvironmentProbesPointer, numUpdatedEnvironmentProbes,
		//     (void*)removedEnvironmentProbeIdsPointer, numRemovedEnvironmentProbeIds,
		//     defaultEnvironmentProbe, stride,
		//     allocator);
		intptr_t L_1 = V_1;
		void* L_2;
		L_2 = IntPtr_op_Explicit_mE8B472FDC632CBD121F7ADF4F94546D6610BACDD((intptr_t)L_1, /*hidden argument*/NULL);
		int32_t L_3 = V_0;
		intptr_t L_4 = V_3;
		void* L_5;
		L_5 = IntPtr_op_Explicit_mE8B472FDC632CBD121F7ADF4F94546D6610BACDD((intptr_t)L_4, /*hidden argument*/NULL);
		int32_t L_6 = V_2;
		intptr_t L_7 = V_5;
		void* L_8;
		L_8 = IntPtr_op_Explicit_mE8B472FDC632CBD121F7ADF4F94546D6610BACDD((intptr_t)L_7, /*hidden argument*/NULL);
		int32_t L_9 = V_4;
		XREnvironmentProbe_t4D75B5DF95135D1BA45222CBE3E7677E823B8D4C  L_10 = ___defaultEnvironmentProbe0;
		int32_t L_11 = V_6;
		int32_t L_12 = ___allocator1;
		TrackableChanges_1_tBC1B6352E3D11F9F7BC4E567480BDF8AE39A547F  L_13;
		memset((&L_13), 0, sizeof(L_13));
		TrackableChanges_1__ctor_m8B32DEE7C39CA08A7523D0D553B26079265524E1((&L_13), (void*)(void*)L_2, L_3, (void*)(void*)L_5, L_6, (void*)(void*)L_8, L_9, L_10, L_11, L_12, /*hidden argument*/TrackableChanges_1__ctor_m8B32DEE7C39CA08A7523D0D553B26079265524E1_RuntimeMethod_var);
		V_8 = L_13;
		IL2CPP_LEAVE(0x41, FINALLY_0039);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0039;
	}

FINALLY_0039:
	{ // begin finally (depth: 1)
		// EnvironmentProbeApi.UnityARKit_EnvironmentProbeProvider_ReleaseChanges(context);
		intptr_t L_14 = V_7;
		EnvironmentProbeApi_UnityARKit_EnvironmentProbeProvider_ReleaseChanges_m9C8712C98A37F7206733C97EB3D7D2495CFB9C00((intptr_t)L_14, /*hidden argument*/NULL);
		// }
		IL2CPP_END_FINALLY(57)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(57)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x41, IL_0041)
	}

IL_0041:
	{
		// }
		TrackableChanges_1_tBC1B6352E3D11F9F7BC4E567480BDF8AE39A547F  L_15 = V_8;
		return L_15;
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
// System.Void UnityEngine.XR.ARKit.ARKitHumanBodySubsystem/ARKitProvider::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARKitProvider__ctor_m8062C4DE79778A206F6607433742C822E6B932E1 (ARKitProvider_t5CC80E0D6F9A6EFFA70F54E8CDBEDB36D0CC4ED0 * __this, const RuntimeMethod* method)
{
	{
		// public ARKitProvider() => NativeApi.UnityARKit_HumanBodyProvider_Construct();
		Provider__ctor_mA98EFA82A2BD0B6E60094A95912A2CFF487D0252(__this, /*hidden argument*/NULL);
		// public ARKitProvider() => NativeApi.UnityARKit_HumanBodyProvider_Construct();
		NativeApi_UnityARKit_HumanBodyProvider_Construct_m9A1DE74E132179DA742D9BE6F7F578B7A9B82669(/*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.XR.ARKit.ARKitHumanBodySubsystem/ARKitProvider::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARKitProvider_Start_mE4600B690E11033DAB137CF95C0559AAECBBBDE9 (ARKitProvider_t5CC80E0D6F9A6EFFA70F54E8CDBEDB36D0CC4ED0 * __this, const RuntimeMethod* method)
{
	{
		// public override void Start() => NativeApi.UnityARKit_HumanBodyProvider_Start();
		NativeApi_UnityARKit_HumanBodyProvider_Start_m5437A13DF66041FFC9581B7FE20883082004F230(/*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.XR.ARKit.ARKitHumanBodySubsystem/ARKitProvider::Stop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARKitProvider_Stop_mF5E19B01C82E10C8C7BAA245A8483CB904ECB519 (ARKitProvider_t5CC80E0D6F9A6EFFA70F54E8CDBEDB36D0CC4ED0 * __this, const RuntimeMethod* method)
{
	{
		// public override void Stop() => NativeApi.UnityARKit_HumanBodyProvider_Stop();
		NativeApi_UnityARKit_HumanBodyProvider_Stop_m66F073E5BAAA31F763F59A95E45097D8FFE92C8B(/*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRHumanBody> UnityEngine.XR.ARKit.ARKitHumanBodySubsystem/ARKitProvider::GetChanges(UnityEngine.XR.ARSubsystems.XRHumanBody,Unity.Collections.Allocator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TrackableChanges_1_t4BEBDDB9C8CBFF65EC7028CE5BA562A5728C8B82  ARKitProvider_GetChanges_m409E940CF4C059032E0496B2AF930FC83DEDE337 (ARKitProvider_t5CC80E0D6F9A6EFFA70F54E8CDBEDB36D0CC4ED0 * __this, XRHumanBody_t1AA9DC3BEBCF86A64BE2B83452AC5704AD08C13B  ___defaultHumanBody0, int32_t ___allocator1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TrackableChanges_1__ctor_mF1B701B0766D8E5230EC1A878ADF490273ED75BC_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	void* V_1 = NULL;
	int32_t V_2 = 0;
	void* V_3 = NULL;
	int32_t V_4 = 0;
	void* V_5 = NULL;
	int32_t V_6 = 0;
	void* V_7 = NULL;
	TrackableChanges_1_t4BEBDDB9C8CBFF65EC7028CE5BA562A5728C8B82  V_8;
	memset((&V_8), 0, sizeof(V_8));
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		// var context = NativeApi.UnityARKit_HumanBodyProvider_AcquireChanges(out numAddedHumanBodies, out addedHumanBodiesPointer,
		//                                                                     out numUpdatedHumanBodies, out updatedHumanBodiesPointer,
		//                                                                     out numRemovedHumanBodyIds, out removedHumanBodyIdsPointer,
		//                                                                     out stride);
		void* L_0;
		L_0 = NativeApi_UnityARKit_HumanBodyProvider_AcquireChanges_mB17B770AC64052E2B891EBB8302FF69F1CFEF60B((int32_t*)(&V_0), (void**)(&V_1), (int32_t*)(&V_2), (void**)(&V_3), (int32_t*)(&V_4), (void**)(&V_5), (int32_t*)(&V_6), /*hidden argument*/NULL);
		V_7 = (void*)L_0;
	}

IL_0015:
	try
	{ // begin try (depth: 1)
		// return new TrackableChanges<XRHumanBody>(
		//     addedHumanBodiesPointer, numAddedHumanBodies,
		//     updatedHumanBodiesPointer, numUpdatedHumanBodies,
		//     removedHumanBodyIdsPointer, numRemovedHumanBodyIds,
		//     defaultHumanBody, stride,
		//     allocator);
		void* L_1 = V_1;
		int32_t L_2 = V_0;
		void* L_3 = V_3;
		int32_t L_4 = V_2;
		void* L_5 = V_5;
		int32_t L_6 = V_4;
		XRHumanBody_t1AA9DC3BEBCF86A64BE2B83452AC5704AD08C13B  L_7 = ___defaultHumanBody0;
		int32_t L_8 = V_6;
		int32_t L_9 = ___allocator1;
		TrackableChanges_1_t4BEBDDB9C8CBFF65EC7028CE5BA562A5728C8B82  L_10;
		memset((&L_10), 0, sizeof(L_10));
		TrackableChanges_1__ctor_mF1B701B0766D8E5230EC1A878ADF490273ED75BC((&L_10), (void*)(void*)L_1, L_2, (void*)(void*)L_3, L_4, (void*)(void*)L_5, L_6, L_7, L_8, L_9, /*hidden argument*/TrackableChanges_1__ctor_mF1B701B0766D8E5230EC1A878ADF490273ED75BC_RuntimeMethod_var);
		V_8 = L_10;
		IL2CPP_LEAVE(0x32, FINALLY_002a);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_002a;
	}

FINALLY_002a:
	{ // begin finally (depth: 1)
		// NativeApi.UnityARKit_HumanBodyProvider_ReleaseChanges(context);
		void* L_11 = V_7;
		NativeApi_UnityARKit_HumanBodyProvider_ReleaseChanges_m82AB9E945F905582E96D7E91FF8104BE93F24AFD((void*)(void*)L_11, /*hidden argument*/NULL);
		// }
		IL2CPP_END_FINALLY(42)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(42)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x32, IL_0032)
	}

IL_0032:
	{
		// }
		TrackableChanges_1_t4BEBDDB9C8CBFF65EC7028CE5BA562A5728C8B82  L_12 = V_8;
		return L_12;
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
// System.Void UnityEngine.XR.ARKit.ARKitHumanBodySubsystem/NativeApi::UnityARKit_HumanBodyProvider_Construct()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeApi_UnityARKit_HumanBodyProvider_Construct_m9A1DE74E132179DA742D9BE6F7F578B7A9B82669 (const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) ();

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(UnityARKit_HumanBodyProvider_Construct)();

}
// System.Void UnityEngine.XR.ARKit.ARKitHumanBodySubsystem/NativeApi::UnityARKit_HumanBodyProvider_Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeApi_UnityARKit_HumanBodyProvider_Start_m5437A13DF66041FFC9581B7FE20883082004F230 (const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) ();

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(UnityARKit_HumanBodyProvider_Start)();

}
// System.Void UnityEngine.XR.ARKit.ARKitHumanBodySubsystem/NativeApi::UnityARKit_HumanBodyProvider_Stop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeApi_UnityARKit_HumanBodyProvider_Stop_m66F073E5BAAA31F763F59A95E45097D8FFE92C8B (const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) ();

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(UnityARKit_HumanBodyProvider_Stop)();

}
// System.Void* UnityEngine.XR.ARKit.ARKitHumanBodySubsystem/NativeApi::UnityARKit_HumanBodyProvider_AcquireChanges(System.Int32&,System.Void*&,System.Int32&,System.Void*&,System.Int32&,System.Void*&,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* NativeApi_UnityARKit_HumanBodyProvider_AcquireChanges_mB17B770AC64052E2B891EBB8302FF69F1CFEF60B (int32_t* ___numAddedHumanBodies0, void** ___addedBodys1, int32_t* ___numUpdatedHumanBodies2, void** ___updatedBodys3, int32_t* ___numRemovedHumanBodyIds4, void** ___removedBodyIds5, int32_t* ___stride6, const RuntimeMethod* method)
{
	typedef void* (DEFAULT_CALL *PInvokeFunc) (int32_t*, void**, int32_t*, void**, int32_t*, void**, int32_t*);

	// Marshaling of parameter '___addedBodys1' to native representation
	void* ____addedBodys1_empty = NULL;
	void** ____addedBodys1_marshaled = &____addedBodys1_empty;

	// Marshaling of parameter '___updatedBodys3' to native representation
	void* ____updatedBodys3_empty = NULL;
	void** ____updatedBodys3_marshaled = &____updatedBodys3_empty;

	// Marshaling of parameter '___removedBodyIds5' to native representation
	void* ____removedBodyIds5_empty = NULL;
	void** ____removedBodyIds5_marshaled = &____removedBodyIds5_empty;

	// Native function invocation
	void* returnValue = reinterpret_cast<PInvokeFunc>(UnityARKit_HumanBodyProvider_AcquireChanges)(___numAddedHumanBodies0, ____addedBodys1_marshaled, ___numUpdatedHumanBodies2, ____updatedBodys3_marshaled, ___numRemovedHumanBodyIds4, ____removedBodyIds5_marshaled, ___stride6);

	// Marshaling of parameter '___addedBodys1' back from native representation
	void* _____addedBodys1_marshaled_unmarshaled_dereferenced = NULL;
	_____addedBodys1_marshaled_unmarshaled_dereferenced = *____addedBodys1_marshaled;
	*___addedBodys1 = _____addedBodys1_marshaled_unmarshaled_dereferenced;

	// Marshaling of parameter '___updatedBodys3' back from native representation
	void* _____updatedBodys3_marshaled_unmarshaled_dereferenced = NULL;
	_____updatedBodys3_marshaled_unmarshaled_dereferenced = *____updatedBodys3_marshaled;
	*___updatedBodys3 = _____updatedBodys3_marshaled_unmarshaled_dereferenced;

	// Marshaling of parameter '___removedBodyIds5' back from native representation
	void* _____removedBodyIds5_marshaled_unmarshaled_dereferenced = NULL;
	_____removedBodyIds5_marshaled_unmarshaled_dereferenced = *____removedBodyIds5_marshaled;
	*___removedBodyIds5 = _____removedBodyIds5_marshaled_unmarshaled_dereferenced;

	return returnValue;
}
// System.Void UnityEngine.XR.ARKit.ARKitHumanBodySubsystem/NativeApi::UnityARKit_HumanBodyProvider_ReleaseChanges(System.Void*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeApi_UnityARKit_HumanBodyProvider_ReleaseChanges_m82AB9E945F905582E96D7E91FF8104BE93F24AFD (void* ___context0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (void*);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(UnityARKit_HumanBodyProvider_ReleaseChanges)(___context0);

}
// System.Boolean UnityEngine.XR.ARKit.ARKitHumanBodySubsystem/NativeApi::UnityARKit_HumanBodyProvider_DoesSupportBodyPose2DEstimation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NativeApi_UnityARKit_HumanBodyProvider_DoesSupportBodyPose2DEstimation_m3F55EB9C8A46785373DA478B65241314E212465E (const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) ();

	// Native function invocation
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(UnityARKit_HumanBodyProvider_DoesSupportBodyPose2DEstimation)();

	return static_cast<bool>(returnValue);
}
// System.Boolean UnityEngine.XR.ARKit.ARKitHumanBodySubsystem/NativeApi::UnityARKit_HumanBodyProvider_DoesSupportBodyPose3DEstimation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NativeApi_UnityARKit_HumanBodyProvider_DoesSupportBodyPose3DEstimation_m3F72467EA9E6D4086407310A05699B99EBD27CED (const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) ();

	// Native function invocation
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(UnityARKit_HumanBodyProvider_DoesSupportBodyPose3DEstimation)();

	return static_cast<bool>(returnValue);
}
// System.Boolean UnityEngine.XR.ARKit.ARKitHumanBodySubsystem/NativeApi::UnityARKit_HumanBodyProvider_DoesSupportBodyPose3DScaleEstimation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NativeApi_UnityARKit_HumanBodyProvider_DoesSupportBodyPose3DScaleEstimation_m6664F1CBDA0B428D4DFB10284C1289CB1C025FE3 (const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) ();

	// Native function invocation
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(UnityARKit_HumanBodyProvider_DoesSupportBodyPose3DScaleEstimation)();

	return static_cast<bool>(returnValue);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.XR.ARKit.ARKitImageDatabase/AddImageJob::Execute()
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void AddImageJob_Execute_m8F6676684DBA5306E5F2B735A65D34CF349E503E (AddImageJob_t8EC95C9EA777B31823D128D52F383B45EF7F3AA5 * IL2CPP_PARAMETER_RESTRICT __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ARKitImageDatabase_t1D1B5D985355CF3D2597C8FD863EB46EF55B1F71_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeSliceUnsafeUtility_GetUnsafePtr_TisByte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_m48BDB55277094F65920898D8EF5953BB2D1138B4_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// bool success = UnityARKit_ImageDatabase_AddImage(database, image.GetUnsafePtr(), format, width, height, physicalWidth, ref managedReferenceImage);
		intptr_t L_0 = __this->get_database_1();
		NativeSlice_1_tA05D3BC7EB042685CBFD3369ECB6140D114C911B  L_1 = __this->get_image_0();
		void* L_2;
		L_2 = NativeSliceUnsafeUtility_GetUnsafePtr_TisByte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_m48BDB55277094F65920898D8EF5953BB2D1138B4(L_1, /*hidden argument*/NativeSliceUnsafeUtility_GetUnsafePtr_TisByte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_m48BDB55277094F65920898D8EF5953BB2D1138B4_RuntimeMethod_var);
		int32_t L_3 = __this->get_format_5();
		int32_t L_4 = __this->get_width_2();
		int32_t L_5 = __this->get_height_3();
		float L_6 = __this->get_physicalWidth_4();
		ManagedReferenceImage_t867FD513C8CBF1F9824DBFB215783BE8C33F0FA1 * L_7 = __this->get_address_of_managedReferenceImage_6();
		bool L_8;
		L_8 = AddImageJob_UnityARKit_ImageDatabase_AddImage_mB6AD8DF83ADC350F099DC08D255EF39685892EF6((intptr_t)L_0, (void*)(void*)L_2, L_3, L_4, L_5, L_6, (ManagedReferenceImage_t867FD513C8CBF1F9824DBFB215783BE8C33F0FA1 *)L_7, /*hidden argument*/NULL);
		// if (!success)
		if (L_8)
		{
			goto IL_0041;
		}
	}
	{
		// managedReferenceImage.Dispose();
		ManagedReferenceImage_t867FD513C8CBF1F9824DBFB215783BE8C33F0FA1 * L_9 = __this->get_address_of_managedReferenceImage_6();
		ManagedReferenceImage_Dispose_m51ED357BF8C931DDD82BDA2C487B909D90CEF881((ManagedReferenceImage_t867FD513C8CBF1F9824DBFB215783BE8C33F0FA1 *)L_9, /*hidden argument*/NULL);
	}

IL_0041:
	{
		// UnityARKit_CFRelease(database);
		intptr_t L_10 = __this->get_database_1();
		IL2CPP_RUNTIME_CLASS_INIT(ARKitImageDatabase_t1D1B5D985355CF3D2597C8FD863EB46EF55B1F71_il2cpp_TypeInfo_var);
		ARKitImageDatabase_UnityARKit_CFRelease_m101DDEAB4CD9A57523E6752438BF65A93339D9A9((intptr_t)L_10, /*hidden argument*/NULL);
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void AddImageJob_Execute_m8F6676684DBA5306E5F2B735A65D34CF349E503E_AdjustorThunk (RuntimeObject * IL2CPP_PARAMETER_RESTRICT __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	AddImageJob_t8EC95C9EA777B31823D128D52F383B45EF7F3AA5 * _thisAdjusted = reinterpret_cast<AddImageJob_t8EC95C9EA777B31823D128D52F383B45EF7F3AA5 *>(__this + _offset);
	AddImageJob_Execute_m8F6676684DBA5306E5F2B735A65D34CF349E503E(_thisAdjusted, method);
}
// System.Boolean UnityEngine.XR.ARKit.ARKitImageDatabase/AddImageJob::UnityARKit_ImageDatabase_AddImage(System.IntPtr,System.Void*,UnityEngine.TextureFormat,System.Int32,System.Int32,System.Single,UnityEngine.XR.ARKit.ManagedReferenceImage&)
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR bool AddImageJob_UnityARKit_ImageDatabase_AddImage_mB6AD8DF83ADC350F099DC08D255EF39685892EF6 (intptr_t ___database0, void* ___bytes1, int32_t ___format2, int32_t ___width3, int32_t ___height4, float ___physicalWidth5, ManagedReferenceImage_t867FD513C8CBF1F9824DBFB215783BE8C33F0FA1 * ___managedReferenceImage6, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (intptr_t, void*, int32_t, int32_t, int32_t, float, ManagedReferenceImage_t867FD513C8CBF1F9824DBFB215783BE8C33F0FA1 *);

	// Native function invocation
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(UnityARKit_ImageDatabase_AddImage)(___database0, ___bytes1, ___format2, ___width3, ___height4, ___physicalWidth5, ___managedReferenceImage6);

	return static_cast<bool>(returnValue);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.XR.ARKit.ARKitImageTrackingSubsystem/ARKitProvider::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARKitProvider_Start_m308C04E111FD5D4955AB54F5FE5BC8FF7BE28657 (ARKitProvider_t6838013201F7369104C65DD65159D910B116E8AC * __this, const RuntimeMethod* method)
{
	{
		// public override void Start() { }
		return;
	}
}
// System.Void UnityEngine.XR.ARKit.ARKitImageTrackingSubsystem/ARKitProvider::Stop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARKitProvider_Stop_m84F74F3D92E7EF5AD01369E6272B251A0084B584 (ARKitProvider_t6838013201F7369104C65DD65159D910B116E8AC * __this, const RuntimeMethod* method)
{
	{
		// public override void Stop() { }
		return;
	}
}
// System.Void UnityEngine.XR.ARKit.ARKitImageTrackingSubsystem/ARKitProvider::set_imageLibrary(UnityEngine.XR.ARSubsystems.RuntimeReferenceImageLibrary)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARKitProvider_set_imageLibrary_m0F9A23065C475903A73FDA7F5FCCBECBCBC4875D (ARKitProvider_t6838013201F7369104C65DD65159D910B116E8AC * __this, RuntimeReferenceImageLibrary_t76072EC5637B1F0F8FD0A1BFD3AEAF954D6F8D6B * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ARKitImageDatabase_t1D1B5D985355CF3D2597C8FD863EB46EF55B1F71_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ARKitImageDatabase_t1D1B5D985355CF3D2597C8FD863EB46EF55B1F71 * V_0 = NULL;
	{
		// if (value == null)
		RuntimeReferenceImageLibrary_t76072EC5637B1F0F8FD0A1BFD3AEAF954D6F8D6B * L_0 = ___value0;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		// UnityARKit_ImageTracking_Stop();
		ARKitImageTrackingSubsystem_UnityARKit_ImageTracking_Stop_mC4A571D7E5AE4A50E304F003DA57B677B1175E12(/*hidden argument*/NULL);
		// }
		return;
	}

IL_0009:
	{
		// else if (value is ARKitImageDatabase database)
		RuntimeReferenceImageLibrary_t76072EC5637B1F0F8FD0A1BFD3AEAF954D6F8D6B * L_1 = ___value0;
		V_0 = ((ARKitImageDatabase_t1D1B5D985355CF3D2597C8FD863EB46EF55B1F71 *)IsInstSealed((RuntimeObject*)L_1, ARKitImageDatabase_t1D1B5D985355CF3D2597C8FD863EB46EF55B1F71_il2cpp_TypeInfo_var));
		ARKitImageDatabase_t1D1B5D985355CF3D2597C8FD863EB46EF55B1F71 * L_2 = V_0;
		if (!L_2)
		{
			goto IL_001f;
		}
	}
	{
		// UnityARKit_ImageTracking_SetDatabase(database.nativePtr);
		ARKitImageDatabase_t1D1B5D985355CF3D2597C8FD863EB46EF55B1F71 * L_3 = V_0;
		NullCheck(L_3);
		intptr_t L_4;
		L_4 = ARKitImageDatabase_get_nativePtr_mFE4F7A4306D72B71FFAC9E1C2F3D9FF5354627B3_inline(L_3, /*hidden argument*/NULL);
		ARKitImageTrackingSubsystem_UnityARKit_ImageTracking_SetDatabase_mDB53D72973E1A12F0C8662DCA17A0A9442E16819((intptr_t)L_4, /*hidden argument*/NULL);
		// }
		return;
	}

IL_001f:
	{
		// throw new ArgumentException($"{value.GetType().Name} is not a valid ARKit image library.");
		RuntimeReferenceImageLibrary_t76072EC5637B1F0F8FD0A1BFD3AEAF954D6F8D6B * L_5 = ___value0;
		NullCheck(L_5);
		Type_t * L_6;
		L_6 = Object_GetType_m571FE8360C10B98C23AAF1F066D92C08CC94F45B(L_5, /*hidden argument*/NULL);
		NullCheck(L_6);
		String_t* L_7;
		L_7 = VirtFuncInvoker0< String_t* >::Invoke(7 /* System.String System.Reflection.MemberInfo::get_Name() */, L_6);
		String_t* L_8;
		L_8 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(L_7, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral613041BC1E9D977B51D034A222856620A49BDB6B)), /*hidden argument*/NULL);
		ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 * L_9 = (ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m2D35EAD113C2ADC99EB17B940A2097A93FD23EFC(L_9, L_8, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_9, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ARKitProvider_set_imageLibrary_m0F9A23065C475903A73FDA7F5FCCBECBCBC4875D_RuntimeMethod_var)));
	}
}
// UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRTrackedImage> UnityEngine.XR.ARKit.ARKitImageTrackingSubsystem/ARKitProvider::GetChanges(UnityEngine.XR.ARSubsystems.XRTrackedImage,Unity.Collections.Allocator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TrackableChanges_1_tDE6975A36D16B9E01B5B7D815A77EDD62A3EA629  ARKitProvider_GetChanges_m4FA8DB10A59EF82C1CCF8B4AB156E1D997D66C1C (ARKitProvider_t6838013201F7369104C65DD65159D910B116E8AC * __this, XRTrackedImage_t92B53E0621C6D2E930761110E719F0E9580A722F  ___defaultTrackedImage0, int32_t ___allocator1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TrackableChanges_1__ctor_m6F60AB8591361352FE9F0FB2C9A50988CD5530E8_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	void* V_0 = NULL;
	void* V_1 = NULL;
	void* V_2 = NULL;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	void* V_7 = NULL;
	TrackableChanges_1_tDE6975A36D16B9E01B5B7D815A77EDD62A3EA629  V_8;
	memset((&V_8), 0, sizeof(V_8));
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		// var context = UnityARKit_ImageTracking_AcquireChanges(
		//     out addedPtr, out addedLength,
		//     out updatedPtr, out updatedLength,
		//     out removedPtr, out removedLength,
		//     out stride);
		void* L_0;
		L_0 = ARKitImageTrackingSubsystem_UnityARKit_ImageTracking_AcquireChanges_mFDBAEB21E5E67D7E748A3BA6AAB2421E91F7E8D4((void**)(&V_0), (int32_t*)(&V_3), (void**)(&V_1), (int32_t*)(&V_4), (void**)(&V_2), (int32_t*)(&V_5), (int32_t*)(&V_6), /*hidden argument*/NULL);
		V_7 = (void*)L_0;
	}

IL_0015:
	try
	{ // begin try (depth: 1)
		// return new TrackableChanges<XRTrackedImage>(
		//     addedPtr, addedLength,
		//     updatedPtr, updatedLength,
		//     removedPtr, removedLength,
		//     defaultTrackedImage, stride,
		//     allocator);
		void* L_1 = V_0;
		int32_t L_2 = V_3;
		void* L_3 = V_1;
		int32_t L_4 = V_4;
		void* L_5 = V_2;
		int32_t L_6 = V_5;
		XRTrackedImage_t92B53E0621C6D2E930761110E719F0E9580A722F  L_7 = ___defaultTrackedImage0;
		int32_t L_8 = V_6;
		int32_t L_9 = ___allocator1;
		TrackableChanges_1_tDE6975A36D16B9E01B5B7D815A77EDD62A3EA629  L_10;
		memset((&L_10), 0, sizeof(L_10));
		TrackableChanges_1__ctor_m6F60AB8591361352FE9F0FB2C9A50988CD5530E8((&L_10), (void*)(void*)L_1, L_2, (void*)(void*)L_3, L_4, (void*)(void*)L_5, L_6, L_7, L_8, L_9, /*hidden argument*/TrackableChanges_1__ctor_m6F60AB8591361352FE9F0FB2C9A50988CD5530E8_RuntimeMethod_var);
		V_8 = L_10;
		IL2CPP_LEAVE(0x32, FINALLY_002a);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_002a;
	}

FINALLY_002a:
	{ // begin finally (depth: 1)
		// UnityARKit_ImageTracking_ReleaseChanges(context);
		void* L_11 = V_7;
		ARKitImageTrackingSubsystem_UnityARKit_ImageTracking_ReleaseChanges_m97CDB40BE0CE9EB7D98D7790AC7333CDF6D58C57((void*)(void*)L_11, /*hidden argument*/NULL);
		// }
		IL2CPP_END_FINALLY(42)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(42)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x32, IL_0032)
	}

IL_0032:
	{
		// }
		TrackableChanges_1_tDE6975A36D16B9E01B5B7D815A77EDD62A3EA629  L_12 = V_8;
		return L_12;
	}
}
// System.Void UnityEngine.XR.ARKit.ARKitImageTrackingSubsystem/ARKitProvider::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARKitProvider__ctor_m198D1679A046665B536D0C0DB3C44EA2CF3ED873 (ARKitProvider_t6838013201F7369104C65DD65159D910B116E8AC * __this, const RuntimeMethod* method)
{
	{
		Provider__ctor_mE0C779A245EE703B26578F529ABFD6F18E002AC0(__this, /*hidden argument*/NULL);
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
// System.Void UnityEngine.XR.ARKit.ARKitOcclusionSubsystem/ARKitProvider::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARKitProvider__ctor_m7611FF598458E67751069675B71A10E0644EEC68 (ARKitProvider_t8C73B4487170F7B34DF431897CADB4B9CA84C611 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ARKitProvider_t8C73B4487170F7B34DF431897CADB4B9CA84C611_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public ARKitProvider() => NativeApi.UnityARKit_OcclusionProvider_Construct(k_TextureHumanStencilPropertyId,
		Provider__ctor_m4B36FAF10D278F373035E446EFFC7C4C5B32C4FD(__this, /*hidden argument*/NULL);
		// public ARKitProvider() => NativeApi.UnityARKit_OcclusionProvider_Construct(k_TextureHumanStencilPropertyId,
		//                                                                            k_TextureHumanDepthPropertyId);
		IL2CPP_RUNTIME_CLASS_INIT(ARKitProvider_t8C73B4487170F7B34DF431897CADB4B9CA84C611_il2cpp_TypeInfo_var);
		int32_t L_0 = ((ARKitProvider_t8C73B4487170F7B34DF431897CADB4B9CA84C611_StaticFields*)il2cpp_codegen_static_fields_for(ARKitProvider_t8C73B4487170F7B34DF431897CADB4B9CA84C611_il2cpp_TypeInfo_var))->get_k_TextureHumanStencilPropertyId_1();
		int32_t L_1 = ((ARKitProvider_t8C73B4487170F7B34DF431897CADB4B9CA84C611_StaticFields*)il2cpp_codegen_static_fields_for(ARKitProvider_t8C73B4487170F7B34DF431897CADB4B9CA84C611_il2cpp_TypeInfo_var))->get_k_TextureHumanDepthPropertyId_2();
		NativeApi_UnityARKit_OcclusionProvider_Construct_mE0D5F866F8C33EB19A5779464B6D67B71CC8D108(L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.XR.ARKit.ARKitOcclusionSubsystem/ARKitProvider::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARKitProvider_Start_mA19362D738B0C012ED0E9DF134EEA7B289B87489 (ARKitProvider_t8C73B4487170F7B34DF431897CADB4B9CA84C611 * __this, const RuntimeMethod* method)
{
	{
		// public override void Start() => NativeApi.UnityARKit_OcclusionProvider_Start();
		NativeApi_UnityARKit_OcclusionProvider_Start_mAE8071BB5F21E9FCBD80F85081A6045AC499D5DB(/*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.XR.ARKit.ARKitOcclusionSubsystem/ARKitProvider::Stop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARKitProvider_Stop_mFCE9A5DDB802FD389EACC43319259C090BD5AB0C (ARKitProvider_t8C73B4487170F7B34DF431897CADB4B9CA84C611 * __this, const RuntimeMethod* method)
{
	{
		// public override void Stop() => NativeApi.UnityARKit_OcclusionProvider_Stop();
		NativeApi_UnityARKit_OcclusionProvider_Stop_m66A4A43D62C2A677ADBB92E89F0B20B27C76ECAB(/*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.XR.ARKit.ARKitOcclusionSubsystem/ARKitProvider::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARKitProvider__cctor_m303C7823E17E03EECC5CE441A5912492B413B4FF (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ARKitProvider_t8C73B4487170F7B34DF431897CADB4B9CA84C611_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m627ED3F7C50096BB8934F778CB980E79483BD2AE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m30C52A4F2828D86CA3FAB0B1B583948F4DA9F1F9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral27A6CC657F8ED2A275DD6DEDF21758C293901878);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral307DAB1687CC4BB751F43E3E120187922C5F0743);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDBBEAF4ECB9786E611900CC10F653FF3E2F78D53);
		s_Il2CppMethodInitialized = true;
	}
	{
		// static readonly int k_TextureHumanStencilPropertyId = Shader.PropertyToID(k_TextureHumanStencilPropertyName);
		int32_t L_0;
		L_0 = Shader_PropertyToID_m8C1BEBBAC0CC3015B142AF0FA856495D5D239F5F(_stringLiteralDBBEAF4ECB9786E611900CC10F653FF3E2F78D53, /*hidden argument*/NULL);
		((ARKitProvider_t8C73B4487170F7B34DF431897CADB4B9CA84C611_StaticFields*)il2cpp_codegen_static_fields_for(ARKitProvider_t8C73B4487170F7B34DF431897CADB4B9CA84C611_il2cpp_TypeInfo_var))->set_k_TextureHumanStencilPropertyId_1(L_0);
		// static readonly int k_TextureHumanDepthPropertyId = Shader.PropertyToID(k_TextureHumanDepthPropertyName);
		int32_t L_1;
		L_1 = Shader_PropertyToID_m8C1BEBBAC0CC3015B142AF0FA856495D5D239F5F(_stringLiteral27A6CC657F8ED2A275DD6DEDF21758C293901878, /*hidden argument*/NULL);
		((ARKitProvider_t8C73B4487170F7B34DF431897CADB4B9CA84C611_StaticFields*)il2cpp_codegen_static_fields_for(ARKitProvider_t8C73B4487170F7B34DF431897CADB4B9CA84C611_il2cpp_TypeInfo_var))->set_k_TextureHumanDepthPropertyId_2(L_1);
		// static readonly List<string> m_HumanEnabledMaterialKeywords = new List<string>() {k_HumanEnabledMaterialKeyword};
		List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_2 = (List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 *)il2cpp_codegen_object_new(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3_il2cpp_TypeInfo_var);
		List_1__ctor_m30C52A4F2828D86CA3FAB0B1B583948F4DA9F1F9(L_2, /*hidden argument*/List_1__ctor_m30C52A4F2828D86CA3FAB0B1B583948F4DA9F1F9_RuntimeMethod_var);
		List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_3 = L_2;
		NullCheck(L_3);
		List_1_Add_m627ED3F7C50096BB8934F778CB980E79483BD2AE(L_3, _stringLiteral307DAB1687CC4BB751F43E3E120187922C5F0743, /*hidden argument*/List_1_Add_m627ED3F7C50096BB8934F778CB980E79483BD2AE_RuntimeMethod_var);
		((ARKitProvider_t8C73B4487170F7B34DF431897CADB4B9CA84C611_StaticFields*)il2cpp_codegen_static_fields_for(ARKitProvider_t8C73B4487170F7B34DF431897CADB4B9CA84C611_il2cpp_TypeInfo_var))->set_m_HumanEnabledMaterialKeywords_3(L_3);
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
// System.Void UnityEngine.XR.ARKit.ARKitOcclusionSubsystem/NativeApi::UnityARKit_OcclusionProvider_Construct(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeApi_UnityARKit_OcclusionProvider_Construct_mE0D5F866F8C33EB19A5779464B6D67B71CC8D108 (int32_t ___textureHumanStencilPropertyId0, int32_t ___textureHumanDepthPropertyId1, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (int32_t, int32_t);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(UnityARKit_OcclusionProvider_Construct)(___textureHumanStencilPropertyId0, ___textureHumanDepthPropertyId1);

}
// System.Void UnityEngine.XR.ARKit.ARKitOcclusionSubsystem/NativeApi::UnityARKit_OcclusionProvider_Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeApi_UnityARKit_OcclusionProvider_Start_mAE8071BB5F21E9FCBD80F85081A6045AC499D5DB (const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) ();

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(UnityARKit_OcclusionProvider_Start)();

}
// System.Void UnityEngine.XR.ARKit.ARKitOcclusionSubsystem/NativeApi::UnityARKit_OcclusionProvider_Stop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeApi_UnityARKit_OcclusionProvider_Stop_m66A4A43D62C2A677ADBB92E89F0B20B27C76ECAB (const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) ();

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(UnityARKit_OcclusionProvider_Stop)();

}
// System.Boolean UnityEngine.XR.ARKit.ARKitOcclusionSubsystem/NativeApi::UnityARKit_OcclusionProvider_DoesSupportBodySegmentationStencil()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NativeApi_UnityARKit_OcclusionProvider_DoesSupportBodySegmentationStencil_m64B90F3C9ACFB794BA2081C0EEFEB6984E074C5C (const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) ();

	// Native function invocation
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(UnityARKit_OcclusionProvider_DoesSupportBodySegmentationStencil)();

	return static_cast<bool>(returnValue);
}
// System.Boolean UnityEngine.XR.ARKit.ARKitOcclusionSubsystem/NativeApi::UnityARKit_OcclusionProvider_DoesSupportBodySegmentationDepth()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NativeApi_UnityARKit_OcclusionProvider_DoesSupportBodySegmentationDepth_m8723F4AA9E21F51DC8D16CA860A5CC007805CC8D (const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) ();

	// Native function invocation
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(UnityARKit_OcclusionProvider_DoesSupportBodySegmentationDepth)();

	return static_cast<bool>(returnValue);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Boolean UnityEngine.XR.ARKit.ARKitParticipantSubsystem/ARKitProvider::get_created()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ARKitProvider_get_created_mE824BF041D0630E971111FF26FE9134FD9AB5C37 (ARKitProvider_t9908B32D1E5398BA2FD0D825E9343F8CA0277B4C * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// bool created => m_Ptr != IntPtr.Zero;
		intptr_t L_0 = __this->get_m_Ptr_1();
		bool L_1;
		L_1 = IntPtr_op_Inequality_m212AF0E66AA81FEDC982B1C8A44ADDA24B995EB8((intptr_t)L_0, (intptr_t)(0), /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Void UnityEngine.XR.ARKit.ARKitParticipantSubsystem/ARKitProvider::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARKitProvider__ctor_m510B59F9D3480352F7D8899E40BE87B8FC583826 (ARKitProvider_t9908B32D1E5398BA2FD0D825E9343F8CA0277B4C * __this, const RuntimeMethod* method)
{
	{
		// public ARKitProvider() => m_Ptr = UnityARKit_Participant_init();
		Provider__ctor_m29C158581A2B8BF6DE3F03DDACC1A2F8FFB1F875(__this, /*hidden argument*/NULL);
		// public ARKitProvider() => m_Ptr = UnityARKit_Participant_init();
		intptr_t L_0;
		L_0 = ARKitProvider_UnityARKit_Participant_init_m439EC3BAB13C15A4AFB8FDEDD7AFF2999C15AFEB(/*hidden argument*/NULL);
		__this->set_m_Ptr_1((intptr_t)L_0);
		return;
	}
}
// System.Void UnityEngine.XR.ARKit.ARKitParticipantSubsystem/ARKitProvider::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARKitProvider_Start_m0FB26FC072299E0A37D941AEFBDE6EB18FAF414A (ARKitProvider_t9908B32D1E5398BA2FD0D825E9343F8CA0277B4C * __this, const RuntimeMethod* method)
{
	{
		// if (!created)
		bool L_0;
		L_0 = ARKitProvider_get_created_mE824BF041D0630E971111FF26FE9134FD9AB5C37(__this, /*hidden argument*/NULL);
		if (L_0)
		{
			goto IL_002c;
		}
	}
	{
		// throw new InvalidOperationException($"The {typeof(ARKitParticipantSubsystem).Name} provider has not been created.");
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_1 = { reinterpret_cast<intptr_t> (((RuntimeType*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ARKitParticipantSubsystem_tFBFB76108F5069693F4F40F8DAA4B6A907A709C3_0_0_0_var))) };
		IL2CPP_RUNTIME_CLASS_INIT(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Type_t_il2cpp_TypeInfo_var)));
		Type_t * L_2;
		L_2 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_1, /*hidden argument*/NULL);
		NullCheck(L_2);
		String_t* L_3;
		L_3 = VirtFuncInvoker0< String_t* >::Invoke(7 /* System.String System.Reflection.MemberInfo::get_Name() */, L_2);
		String_t* L_4;
		L_4 = String_Concat_m89EAB4C6A96B0E5C3F87300D6BE78D386B9EFC44(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral8F75ECDB116DCBBF6FC5A38C92B230BE664085FE)), L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral60B3375B7F69D26143C8EDC55A184541E18FFD78)), /*hidden argument*/NULL);
		InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB * L_5 = (InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mC012CE552988309733C896F3FEA8249171E4402E(L_5, L_4, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ARKitProvider_Start_m0FB26FC072299E0A37D941AEFBDE6EB18FAF414A_RuntimeMethod_var)));
	}

IL_002c:
	{
		// Api.UnityARKit_TrackableProvider_start(m_Ptr);
		intptr_t L_6 = __this->get_m_Ptr_1();
		intptr_t L_7;
		L_7 = Api_UnityARKit_TrackableProvider_start_m5B2100D934A363E895FBC8FC68D8A07D77448417((intptr_t)L_6, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.XR.ARKit.ARKitParticipantSubsystem/ARKitProvider::Stop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARKitProvider_Stop_m839275C2C059392AB397DBB4BD197CB3857F96DE (ARKitProvider_t9908B32D1E5398BA2FD0D825E9343F8CA0277B4C * __this, const RuntimeMethod* method)
{
	{
		// if (!created)
		bool L_0;
		L_0 = ARKitProvider_get_created_mE824BF041D0630E971111FF26FE9134FD9AB5C37(__this, /*hidden argument*/NULL);
		if (L_0)
		{
			goto IL_002c;
		}
	}
	{
		// throw new InvalidOperationException($"The {typeof(ARKitParticipantSubsystem).Name} provider has not been created.");
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_1 = { reinterpret_cast<intptr_t> (((RuntimeType*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ARKitParticipantSubsystem_tFBFB76108F5069693F4F40F8DAA4B6A907A709C3_0_0_0_var))) };
		IL2CPP_RUNTIME_CLASS_INIT(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Type_t_il2cpp_TypeInfo_var)));
		Type_t * L_2;
		L_2 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_1, /*hidden argument*/NULL);
		NullCheck(L_2);
		String_t* L_3;
		L_3 = VirtFuncInvoker0< String_t* >::Invoke(7 /* System.String System.Reflection.MemberInfo::get_Name() */, L_2);
		String_t* L_4;
		L_4 = String_Concat_m89EAB4C6A96B0E5C3F87300D6BE78D386B9EFC44(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral8F75ECDB116DCBBF6FC5A38C92B230BE664085FE)), L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral60B3375B7F69D26143C8EDC55A184541E18FFD78)), /*hidden argument*/NULL);
		InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB * L_5 = (InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mC012CE552988309733C896F3FEA8249171E4402E(L_5, L_4, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ARKitProvider_Stop_m839275C2C059392AB397DBB4BD197CB3857F96DE_RuntimeMethod_var)));
	}

IL_002c:
	{
		// Api.UnityARKit_TrackableProvider_stop(m_Ptr);
		intptr_t L_6 = __this->get_m_Ptr_1();
		intptr_t L_7;
		L_7 = Api_UnityARKit_TrackableProvider_stop_mF7B6E1ABDAB3707DBBA16221CC4320A023E27966((intptr_t)L_6, /*hidden argument*/NULL);
		// }
		return;
	}
}
// UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRParticipant> UnityEngine.XR.ARKit.ARKitParticipantSubsystem/ARKitProvider::GetChanges(UnityEngine.XR.ARSubsystems.XRParticipant,Unity.Collections.Allocator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TrackableChanges_1_tCBDEADFC15FC0570F012431A5227C2E6B92BAC3F  ARKitProvider_GetChanges_m263F7177209EBBDC83D9AF1FF5263F44498AEE11 (ARKitProvider_t9908B32D1E5398BA2FD0D825E9343F8CA0277B4C * __this, XRParticipant_t8CFF46A2CDD860A7591AD0FC0EE563458C8FA13F  ___defaultParticipant0, int32_t ___allocator1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeArrayUnsafeUtility_GetUnsafePtr_TisTrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B_m92549A9C2F4BEF557CB12A078D51054FA135F761_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeArrayUnsafeUtility_GetUnsafePtr_TisXRParticipant_t8CFF46A2CDD860A7591AD0FC0EE563458C8FA13F_mB0A664D2C49A4691B407A65D546E88FF50F0C378_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TrackableChanges_1__ctor_mFA2451C6E10AF00118A809C94BB646C6B774012E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TrackableChanges_1_get_added_mE2DAB671C35440089855E3FA56312B779914939F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TrackableChanges_1_get_removed_mEF24C86CF94D54D18AE8E112F4CA05CB76E8933D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TrackableChanges_1_get_updated_mDD1EA7192EFEFC4A8FB5949F6F995268E940D5AC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnsafeUtility_SizeOf_TisXRParticipant_t8CFF46A2CDD860A7591AD0FC0EE563458C8FA13F_m00E843B9705969489FCA43AAF5B4BDF0DAE674C9_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	NativeChanges_t2AB4CBD7DD7F23F421DFD0CE4D4CDB26402D6D76  V_0;
	memset((&V_0), 0, sizeof(V_0));
	TrackableChanges_1_tCBDEADFC15FC0570F012431A5227C2E6B92BAC3F  V_1;
	memset((&V_1), 0, sizeof(V_1));
	TrackableChanges_1_tCBDEADFC15FC0570F012431A5227C2E6B92BAC3F  V_2;
	memset((&V_2), 0, sizeof(V_2));
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		// if (!created)
		bool L_0;
		L_0 = ARKitProvider_get_created_mE824BF041D0630E971111FF26FE9134FD9AB5C37(__this, /*hidden argument*/NULL);
		if (L_0)
		{
			goto IL_002c;
		}
	}
	{
		// throw new InvalidOperationException($"The {typeof(ARKitParticipantSubsystem).Name} provider has not been created.");
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_1 = { reinterpret_cast<intptr_t> (((RuntimeType*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ARKitParticipantSubsystem_tFBFB76108F5069693F4F40F8DAA4B6A907A709C3_0_0_0_var))) };
		IL2CPP_RUNTIME_CLASS_INIT(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Type_t_il2cpp_TypeInfo_var)));
		Type_t * L_2;
		L_2 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_1, /*hidden argument*/NULL);
		NullCheck(L_2);
		String_t* L_3;
		L_3 = VirtFuncInvoker0< String_t* >::Invoke(7 /* System.String System.Reflection.MemberInfo::get_Name() */, L_2);
		String_t* L_4;
		L_4 = String_Concat_m89EAB4C6A96B0E5C3F87300D6BE78D386B9EFC44(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral8F75ECDB116DCBBF6FC5A38C92B230BE664085FE)), L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral60B3375B7F69D26143C8EDC55A184541E18FFD78)), /*hidden argument*/NULL);
		InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB * L_5 = (InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mC012CE552988309733C896F3FEA8249171E4402E(L_5, L_4, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ARKitProvider_GetChanges_m263F7177209EBBDC83D9AF1FF5263F44498AEE11_RuntimeMethod_var)));
	}

IL_002c:
	{
		// using (var nativeChanges = Api.UnityARKit_TrackableProvider_acquireChanges(m_Ptr))
		intptr_t L_6 = __this->get_m_Ptr_1();
		NativeChanges_t2AB4CBD7DD7F23F421DFD0CE4D4CDB26402D6D76  L_7;
		L_7 = Api_UnityARKit_TrackableProvider_acquireChanges_mD96BAB877284BA60893800C20E72851C072DAC59((intptr_t)L_6, /*hidden argument*/NULL);
		V_0 = L_7;
	}

IL_0038:
	try
	{ // begin try (depth: 1)
		// var changes = new TrackableChanges<XRParticipant>(
		//     nativeChanges.addedLength,
		//     nativeChanges.updatedLength,
		//     nativeChanges.removedLength,
		//     allocator, defaultParticipant);
		int32_t L_8;
		L_8 = NativeChanges_get_addedLength_mD51DB306B9E731D637BC6146AC02F44E7092EA61((NativeChanges_t2AB4CBD7DD7F23F421DFD0CE4D4CDB26402D6D76 *)(&V_0), /*hidden argument*/NULL);
		int32_t L_9;
		L_9 = NativeChanges_get_updatedLength_m26B6698778BE656EB28586EBA13D00936F2BEA9A((NativeChanges_t2AB4CBD7DD7F23F421DFD0CE4D4CDB26402D6D76 *)(&V_0), /*hidden argument*/NULL);
		int32_t L_10;
		L_10 = NativeChanges_get_removedLength_mD6BA6E4217D492D6FD7DF127166122A0D35E2989((NativeChanges_t2AB4CBD7DD7F23F421DFD0CE4D4CDB26402D6D76 *)(&V_0), /*hidden argument*/NULL);
		int32_t L_11 = ___allocator1;
		XRParticipant_t8CFF46A2CDD860A7591AD0FC0EE563458C8FA13F  L_12 = ___defaultParticipant0;
		TrackableChanges_1__ctor_mFA2451C6E10AF00118A809C94BB646C6B774012E((TrackableChanges_1_tCBDEADFC15FC0570F012431A5227C2E6B92BAC3F *)(&V_1), L_8, L_9, L_10, L_11, L_12, /*hidden argument*/TrackableChanges_1__ctor_mFA2451C6E10AF00118A809C94BB646C6B774012E_RuntimeMethod_var);
		// Api.UnityARKit_TrackableProvider_copyChanges(
		//     m_Ptr, nativeChanges,
		//     UnsafeUtility.SizeOf<XRParticipant>(),
		//     changes.added.GetUnsafePtr(),
		//     changes.updated.GetUnsafePtr(),
		//     changes.removed.GetUnsafePtr());
		intptr_t L_13 = __this->get_m_Ptr_1();
		NativeChanges_t2AB4CBD7DD7F23F421DFD0CE4D4CDB26402D6D76  L_14 = V_0;
		int32_t L_15;
		L_15 = UnsafeUtility_SizeOf_TisXRParticipant_t8CFF46A2CDD860A7591AD0FC0EE563458C8FA13F_m00E843B9705969489FCA43AAF5B4BDF0DAE674C9(/*hidden argument*/UnsafeUtility_SizeOf_TisXRParticipant_t8CFF46A2CDD860A7591AD0FC0EE563458C8FA13F_m00E843B9705969489FCA43AAF5B4BDF0DAE674C9_RuntimeMethod_var);
		NativeArray_1_t20D7C7F2BCDC04B6238E113A2CA21BBDD326A535  L_16;
		L_16 = TrackableChanges_1_get_added_mE2DAB671C35440089855E3FA56312B779914939F_inline((TrackableChanges_1_tCBDEADFC15FC0570F012431A5227C2E6B92BAC3F *)(&V_1), /*hidden argument*/TrackableChanges_1_get_added_mE2DAB671C35440089855E3FA56312B779914939F_RuntimeMethod_var);
		void* L_17;
		L_17 = NativeArrayUnsafeUtility_GetUnsafePtr_TisXRParticipant_t8CFF46A2CDD860A7591AD0FC0EE563458C8FA13F_mB0A664D2C49A4691B407A65D546E88FF50F0C378(L_16, /*hidden argument*/NativeArrayUnsafeUtility_GetUnsafePtr_TisXRParticipant_t8CFF46A2CDD860A7591AD0FC0EE563458C8FA13F_mB0A664D2C49A4691B407A65D546E88FF50F0C378_RuntimeMethod_var);
		NativeArray_1_t20D7C7F2BCDC04B6238E113A2CA21BBDD326A535  L_18;
		L_18 = TrackableChanges_1_get_updated_mDD1EA7192EFEFC4A8FB5949F6F995268E940D5AC_inline((TrackableChanges_1_tCBDEADFC15FC0570F012431A5227C2E6B92BAC3F *)(&V_1), /*hidden argument*/TrackableChanges_1_get_updated_mDD1EA7192EFEFC4A8FB5949F6F995268E940D5AC_RuntimeMethod_var);
		void* L_19;
		L_19 = NativeArrayUnsafeUtility_GetUnsafePtr_TisXRParticipant_t8CFF46A2CDD860A7591AD0FC0EE563458C8FA13F_mB0A664D2C49A4691B407A65D546E88FF50F0C378(L_18, /*hidden argument*/NativeArrayUnsafeUtility_GetUnsafePtr_TisXRParticipant_t8CFF46A2CDD860A7591AD0FC0EE563458C8FA13F_mB0A664D2C49A4691B407A65D546E88FF50F0C378_RuntimeMethod_var);
		NativeArray_1_t991E9C764228B2B65D9688847CCDA8CE903F5D77  L_20;
		L_20 = TrackableChanges_1_get_removed_mEF24C86CF94D54D18AE8E112F4CA05CB76E8933D_inline((TrackableChanges_1_tCBDEADFC15FC0570F012431A5227C2E6B92BAC3F *)(&V_1), /*hidden argument*/TrackableChanges_1_get_removed_mEF24C86CF94D54D18AE8E112F4CA05CB76E8933D_RuntimeMethod_var);
		void* L_21;
		L_21 = NativeArrayUnsafeUtility_GetUnsafePtr_TisTrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B_m92549A9C2F4BEF557CB12A078D51054FA135F761(L_20, /*hidden argument*/NativeArrayUnsafeUtility_GetUnsafePtr_TisTrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B_m92549A9C2F4BEF557CB12A078D51054FA135F761_RuntimeMethod_var);
		Api_UnityARKit_TrackableProvider_copyChanges_m0DBCBEE86560E14161F422044F969ABF1468B4D1((intptr_t)L_13, L_14, L_15, (void*)(void*)L_17, (void*)(void*)L_19, (void*)(void*)L_21, /*hidden argument*/NULL);
		// return changes;
		TrackableChanges_1_tCBDEADFC15FC0570F012431A5227C2E6B92BAC3F  L_22 = V_1;
		V_2 = L_22;
		IL2CPP_LEAVE(0x9D, FINALLY_008f);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_008f;
	}

FINALLY_008f:
	{ // begin finally (depth: 1)
		NativeChanges_Dispose_m494F37A0E04A0110C5480CCFB401225F4DD66263((NativeChanges_t2AB4CBD7DD7F23F421DFD0CE4D4CDB26402D6D76 *)(&V_0), /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(143)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(143)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x9D, IL_009d)
	}

IL_009d:
	{
		// }
		TrackableChanges_1_tCBDEADFC15FC0570F012431A5227C2E6B92BAC3F  L_23 = V_2;
		return L_23;
	}
}
// System.IntPtr UnityEngine.XR.ARKit.ARKitParticipantSubsystem/ARKitProvider::UnityARKit_Participant_init()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t ARKitProvider_UnityARKit_Participant_init_m439EC3BAB13C15A4AFB8FDEDD7AFF2999C15AFEB (const RuntimeMethod* method)
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) ();

	// Native function invocation
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(UnityARKit_Participant_init)();

	return returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.XR.ARKit.ARKitRaycastSubsystem/ARKitProvider::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARKitProvider__ctor_m76C5B622A280F613E72CBBC3810EF1C15824EBA3 (ARKitProvider_t3FB2A65F0CF8BCD91C4CC54F3841159E7F7DAA88 * __this, const RuntimeMethod* method)
{
	{
		// public ARKitProvider() => m_Self = NativeApi.Construct();
		Provider__ctor_m58E4226B4157880E60C02C82B5FB24D9760EA94F(__this, /*hidden argument*/NULL);
		// public ARKitProvider() => m_Self = NativeApi.Construct();
		intptr_t L_0;
		L_0 = NativeApi_Construct_m6DE0A0FE05883F496C2822E29EEF5E9D8B68FC5F(/*hidden argument*/NULL);
		__this->set_m_Self_1((intptr_t)L_0);
		return;
	}
}
// System.Void UnityEngine.XR.ARKit.ARKitRaycastSubsystem/ARKitProvider::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARKitProvider_Start_m356B6AD644645EE94C65121E6845042FC34A1B1B (ARKitProvider_t3FB2A65F0CF8BCD91C4CC54F3841159E7F7DAA88 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (m_Self != IntPtr.Zero)
		intptr_t L_0 = __this->get_m_Self_1();
		bool L_1;
		L_1 = IntPtr_op_Inequality_m212AF0E66AA81FEDC982B1C8A44ADDA24B995EB8((intptr_t)L_0, (intptr_t)(0), /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_001d;
		}
	}
	{
		// NativeApi.Start(m_Self);
		intptr_t L_2 = __this->get_m_Self_1();
		NativeApi_Start_m1ED955772F08A510C7EE94392389A757BDFB5B64((intptr_t)L_2, /*hidden argument*/NULL);
	}

IL_001d:
	{
		// }
		return;
	}
}
// System.Void UnityEngine.XR.ARKit.ARKitRaycastSubsystem/ARKitProvider::Stop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARKitProvider_Stop_m6D3F521F3263298A25612C5113BDA9967A57E6AD (ARKitProvider_t3FB2A65F0CF8BCD91C4CC54F3841159E7F7DAA88 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (m_Self != IntPtr.Zero)
		intptr_t L_0 = __this->get_m_Self_1();
		bool L_1;
		L_1 = IntPtr_op_Inequality_m212AF0E66AA81FEDC982B1C8A44ADDA24B995EB8((intptr_t)L_0, (intptr_t)(0), /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_001d;
		}
	}
	{
		// NativeApi.Stop(m_Self);
		intptr_t L_2 = __this->get_m_Self_1();
		NativeApi_Stop_m824F57BFD9FD74787BA28507962DC73555039041((intptr_t)L_2, /*hidden argument*/NULL);
	}

IL_001d:
	{
		// }
		return;
	}
}
// UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRRaycast> UnityEngine.XR.ARKit.ARKitRaycastSubsystem/ARKitProvider::GetChanges(UnityEngine.XR.ARSubsystems.XRRaycast,Unity.Collections.Allocator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TrackableChanges_1_t092C2BBB89690C350B949DDFFA9F551F85536ED3  ARKitProvider_GetChanges_m64241AD7F64C95E1221D798B77EC665282EB09CD (ARKitProvider_t3FB2A65F0CF8BCD91C4CC54F3841159E7F7DAA88 * __this, XRRaycast_tA18F9107EFF1D692E70EF15233BB6134A5F66C55  ___defaultRaycast0, int32_t ___allocator1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TrackableChanges_1__ctor_m592AE08978C647130F8181BD1802AAE7EF3623B4_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	XRRaycast_tA18F9107EFF1D692E70EF15233BB6134A5F66C55 * V_0 = NULL;
	int32_t V_1 = 0;
	XRRaycast_tA18F9107EFF1D692E70EF15233BB6134A5F66C55 * V_2 = NULL;
	int32_t V_3 = 0;
	TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B * V_4 = NULL;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	TrackableChanges_1_t092C2BBB89690C350B949DDFFA9F551F85536ED3  V_7;
	memset((&V_7), 0, sizeof(V_7));
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		// if (m_Self == IntPtr.Zero)
		intptr_t L_0 = __this->get_m_Self_1();
		bool L_1;
		L_1 = IntPtr_op_Equality_mD94F3FE43A65684EFF984A7B95E70D2520C0AC73((intptr_t)L_0, (intptr_t)(0), /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_001d;
		}
	}
	{
		// return default;
		il2cpp_codegen_initobj((&V_7), sizeof(TrackableChanges_1_t092C2BBB89690C350B949DDFFA9F551F85536ED3 ));
		TrackableChanges_1_t092C2BBB89690C350B949DDFFA9F551F85536ED3  L_2 = V_7;
		return L_2;
	}

IL_001d:
	{
		// NativeApi.AcquireChanges(m_Self,
		//     out XRRaycast* added, out int addedCount,
		//     out XRRaycast* updated, out int updatedCount,
		//     out TrackableId* removed, out int removedCount,
		//     out int elementSize);
		intptr_t L_3 = __this->get_m_Self_1();
		NativeApi_AcquireChanges_m84A45D9686034EF9A80E60FB67B4825FE804F857((intptr_t)L_3, (XRRaycast_tA18F9107EFF1D692E70EF15233BB6134A5F66C55 **)(&V_0), (int32_t*)(&V_1), (XRRaycast_tA18F9107EFF1D692E70EF15233BB6134A5F66C55 **)(&V_2), (int32_t*)(&V_3), (TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B **)(&V_4), (int32_t*)(&V_5), (int32_t*)(&V_6), /*hidden argument*/NULL);
	}

IL_0036:
	try
	{ // begin try (depth: 1)
		// return new TrackableChanges<XRRaycast>(
		//     added, addedCount,
		//     updated, updatedCount,
		//     removed, removedCount,
		//     defaultRaycast, elementSize, allocator);
		XRRaycast_tA18F9107EFF1D692E70EF15233BB6134A5F66C55 * L_4 = V_0;
		int32_t L_5 = V_1;
		XRRaycast_tA18F9107EFF1D692E70EF15233BB6134A5F66C55 * L_6 = V_2;
		int32_t L_7 = V_3;
		TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B * L_8 = V_4;
		int32_t L_9 = V_5;
		XRRaycast_tA18F9107EFF1D692E70EF15233BB6134A5F66C55  L_10 = ___defaultRaycast0;
		int32_t L_11 = V_6;
		int32_t L_12 = ___allocator1;
		TrackableChanges_1_t092C2BBB89690C350B949DDFFA9F551F85536ED3  L_13;
		memset((&L_13), 0, sizeof(L_13));
		TrackableChanges_1__ctor_m592AE08978C647130F8181BD1802AAE7EF3623B4((&L_13), (void*)(void*)L_4, L_5, (void*)(void*)L_6, L_7, (void*)(void*)L_8, L_9, L_10, L_11, L_12, /*hidden argument*/TrackableChanges_1__ctor_m592AE08978C647130F8181BD1802AAE7EF3623B4_RuntimeMethod_var);
		V_7 = L_13;
		IL2CPP_LEAVE(0x55, FINALLY_004b);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_004b;
	}

FINALLY_004b:
	{ // begin finally (depth: 1)
		// NativeApi.ReleaseChanges(added, updated, removed);
		XRRaycast_tA18F9107EFF1D692E70EF15233BB6134A5F66C55 * L_14 = V_0;
		XRRaycast_tA18F9107EFF1D692E70EF15233BB6134A5F66C55 * L_15 = V_2;
		TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B * L_16 = V_4;
		NativeApi_ReleaseChanges_m5D8C484D64063118B1AB3DE4951F3F9CBD8E3A60((XRRaycast_tA18F9107EFF1D692E70EF15233BB6134A5F66C55 *)(XRRaycast_tA18F9107EFF1D692E70EF15233BB6134A5F66C55 *)L_14, (XRRaycast_tA18F9107EFF1D692E70EF15233BB6134A5F66C55 *)(XRRaycast_tA18F9107EFF1D692E70EF15233BB6134A5F66C55 *)L_15, (TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B *)(TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B *)L_16, /*hidden argument*/NULL);
		// }
		IL2CPP_END_FINALLY(75)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(75)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x55, IL_0055)
	}

IL_0055:
	{
		// }
		TrackableChanges_1_t092C2BBB89690C350B949DDFFA9F551F85536ED3  L_17 = V_7;
		return L_17;
	}
}
// System.Boolean UnityEngine.XR.ARKit.ARKitRaycastSubsystem/ARKitProvider::TryAddRaycast(UnityEngine.Ray,System.Single,UnityEngine.XR.ARSubsystems.XRRaycast&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ARKitProvider_TryAddRaycast_m6E775E7F09AD48B2B08A293116266DF1E1D0E1B6 (ARKitProvider_t3FB2A65F0CF8BCD91C4CC54F3841159E7F7DAA88 * __this, Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6  ___ray0, float ___estimatedDistance1, XRRaycast_tA18F9107EFF1D692E70EF15233BB6134A5F66C55 * ___sessionRelativeData2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (m_Self == IntPtr.Zero)
		intptr_t L_0 = __this->get_m_Self_1();
		bool L_1;
		L_1 = IntPtr_op_Equality_mD94F3FE43A65684EFF984A7B95E70D2520C0AC73((intptr_t)L_0, (intptr_t)(0), /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_001b;
		}
	}
	{
		// sessionRelativeData = default;
		XRRaycast_tA18F9107EFF1D692E70EF15233BB6134A5F66C55 * L_2 = ___sessionRelativeData2;
		il2cpp_codegen_initobj(L_2, sizeof(XRRaycast_tA18F9107EFF1D692E70EF15233BB6134A5F66C55 ));
		// return false;
		return (bool)0;
	}

IL_001b:
	{
		// return NativeApi.TryAddRaycast(m_Self, ray.origin, ray.direction, estimatedDistance, out sessionRelativeData);
		intptr_t L_3 = __this->get_m_Self_1();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4;
		L_4 = Ray_get_origin_m0C1B2BFF99CDF5231AC29AC031C161F55B53C1D0((Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6 *)(&___ray0), /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_5;
		L_5 = Ray_get_direction_m2B31F86F19B64474A901B28D3808011AE7A13EFC((Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6 *)(&___ray0), /*hidden argument*/NULL);
		float L_6 = ___estimatedDistance1;
		XRRaycast_tA18F9107EFF1D692E70EF15233BB6134A5F66C55 * L_7 = ___sessionRelativeData2;
		bool L_8;
		L_8 = NativeApi_TryAddRaycast_mDA0EB2370860A3D049C9465C99EEE308DB023E2C((intptr_t)L_3, L_4, L_5, L_6, (XRRaycast_tA18F9107EFF1D692E70EF15233BB6134A5F66C55 *)L_7, /*hidden argument*/NULL);
		return L_8;
	}
}
// System.Void UnityEngine.XR.ARKit.ARKitRaycastSubsystem/ARKitProvider::RemoveRaycast(UnityEngine.XR.ARSubsystems.TrackableId)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARKitProvider_RemoveRaycast_m426B2643B2B8E4CB45474C0CE62706C66467936F (ARKitProvider_t3FB2A65F0CF8BCD91C4CC54F3841159E7F7DAA88 * __this, TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  ___trackableId0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (m_Self != IntPtr.Zero)
		intptr_t L_0 = __this->get_m_Self_1();
		bool L_1;
		L_1 = IntPtr_op_Inequality_m212AF0E66AA81FEDC982B1C8A44ADDA24B995EB8((intptr_t)L_0, (intptr_t)(0), /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_001e;
		}
	}
	{
		// NativeApi.RemoveRaycast(m_Self, trackableId);
		intptr_t L_2 = __this->get_m_Self_1();
		TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  L_3 = ___trackableId0;
		NativeApi_RemoveRaycast_m244B44FD32FCF72613792F048CF6F90319CBEFA0((intptr_t)L_2, L_3, /*hidden argument*/NULL);
	}

IL_001e:
	{
		// }
		return;
	}
}
// Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.XRRaycastHit> UnityEngine.XR.ARKit.ARKitRaycastSubsystem/ARKitProvider::Raycast(UnityEngine.XR.ARSubsystems.XRRaycastHit,UnityEngine.Vector2,UnityEngine.XR.ARSubsystems.TrackableType,Unity.Collections.Allocator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t35F2E89DF840C06C68595E9289A07A26CBB07FCB  ARKitProvider_Raycast_mF5A3F2F4DD180D8FAF91E4D5C93F5339F3EC27B4 (ARKitProvider_t3FB2A65F0CF8BCD91C4CC54F3841159E7F7DAA88 * __this, XRRaycastHit_t94A3D13B245A9D0A7A7F2D0919DCAAC7C8DF8DDB  ___defaultRaycastHit0, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___screenPoint1, int32_t ___trackableTypeMask2, int32_t ___allocator3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeArrayUnsafeUtility_GetUnsafePtr_TisXRRaycastHit_t94A3D13B245A9D0A7A7F2D0919DCAAC7C8DF8DDB_m752D0AAC76475B17F91A7623AE587CF73699C92E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeArray_1__ctor_m3975925019B935FC0405A56C2A4431D16DFE641F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnsafeUtility_AddressOf_TisXRRaycastHit_t94A3D13B245A9D0A7A7F2D0919DCAAC7C8DF8DDB_mCFB5A27460535DA449EA9CD73BE6BE4955FEC37B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnsafeUtility_SizeOf_TisXRRaycastHit_t94A3D13B245A9D0A7A7F2D0919DCAAC7C8DF8DDB_m51E2C6221DC8163F580478B984D0562A95A715BA_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	void* V_0 = NULL;
	int32_t V_1 = 0;
	NativeArray_1_t35F2E89DF840C06C68595E9289A07A26CBB07FCB  V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		// NativeApi.UnityARKit_Raycast_AcquireHitResults(
		//     screenPoint,
		//     trackableTypeMask,
		//     out hitResults,
		//     out count);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_0 = ___screenPoint1;
		int32_t L_1 = ___trackableTypeMask2;
		NativeApi_UnityARKit_Raycast_AcquireHitResults_m70B58AAD7786FED41837245FB68AAB0B5788F009(L_0, L_1, (void**)(&V_0), (int32_t*)(&V_1), /*hidden argument*/NULL);
		// var results = new NativeArray<XRRaycastHit>(count, allocator);
		int32_t L_2 = V_1;
		int32_t L_3 = ___allocator3;
		NativeArray_1__ctor_m3975925019B935FC0405A56C2A4431D16DFE641F((NativeArray_1_t35F2E89DF840C06C68595E9289A07A26CBB07FCB *)(&V_2), L_2, L_3, 1, /*hidden argument*/NativeArray_1__ctor_m3975925019B935FC0405A56C2A4431D16DFE641F_RuntimeMethod_var);
		// NativeApi.UnityARKit_Raycast_CopyAndReleaseHitResults(
		//     UnsafeUtility.AddressOf(ref defaultRaycastHit),
		//     UnsafeUtility.SizeOf<XRRaycastHit>(),
		//     hitResults,
		//     results.GetUnsafePtr());
		void* L_4;
		L_4 = UnsafeUtility_AddressOf_TisXRRaycastHit_t94A3D13B245A9D0A7A7F2D0919DCAAC7C8DF8DDB_mCFB5A27460535DA449EA9CD73BE6BE4955FEC37B((XRRaycastHit_t94A3D13B245A9D0A7A7F2D0919DCAAC7C8DF8DDB *)(&___defaultRaycastHit0), /*hidden argument*/UnsafeUtility_AddressOf_TisXRRaycastHit_t94A3D13B245A9D0A7A7F2D0919DCAAC7C8DF8DDB_mCFB5A27460535DA449EA9CD73BE6BE4955FEC37B_RuntimeMethod_var);
		int32_t L_5;
		L_5 = UnsafeUtility_SizeOf_TisXRRaycastHit_t94A3D13B245A9D0A7A7F2D0919DCAAC7C8DF8DDB_m51E2C6221DC8163F580478B984D0562A95A715BA(/*hidden argument*/UnsafeUtility_SizeOf_TisXRRaycastHit_t94A3D13B245A9D0A7A7F2D0919DCAAC7C8DF8DDB_m51E2C6221DC8163F580478B984D0562A95A715BA_RuntimeMethod_var);
		void* L_6 = V_0;
		NativeArray_1_t35F2E89DF840C06C68595E9289A07A26CBB07FCB  L_7 = V_2;
		void* L_8;
		L_8 = NativeArrayUnsafeUtility_GetUnsafePtr_TisXRRaycastHit_t94A3D13B245A9D0A7A7F2D0919DCAAC7C8DF8DDB_m752D0AAC76475B17F91A7623AE587CF73699C92E(L_7, /*hidden argument*/NativeArrayUnsafeUtility_GetUnsafePtr_TisXRRaycastHit_t94A3D13B245A9D0A7A7F2D0919DCAAC7C8DF8DDB_m752D0AAC76475B17F91A7623AE587CF73699C92E_RuntimeMethod_var);
		NativeApi_UnityARKit_Raycast_CopyAndReleaseHitResults_m8152EEFB15DD57649BC66013FE88109E9B64B784((void*)(void*)L_4, L_5, (void*)(void*)L_6, (void*)(void*)L_8, /*hidden argument*/NULL);
		// return results;
		NativeArray_1_t35F2E89DF840C06C68595E9289A07A26CBB07FCB  L_9 = V_2;
		return L_9;
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
// System.Void UnityEngine.XR.ARKit.ARKitRaycastSubsystem/NativeApi::UnityARKit_Raycast_AcquireHitResults(UnityEngine.Vector2,UnityEngine.XR.ARSubsystems.TrackableType,System.Void*&,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeApi_UnityARKit_Raycast_AcquireHitResults_m70B58AAD7786FED41837245FB68AAB0B5788F009 (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___screenPoint0, int32_t ___filter1, void** ___hitResults2, int32_t* ___hitCount3, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 , int32_t, void**, int32_t*);

	// Marshaling of parameter '___hitResults2' to native representation
	void* ____hitResults2_empty = NULL;
	void** ____hitResults2_marshaled = &____hitResults2_empty;

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(UnityARKit_Raycast_AcquireHitResults)(___screenPoint0, ___filter1, ____hitResults2_marshaled, ___hitCount3);

	// Marshaling of parameter '___hitResults2' back from native representation
	void* _____hitResults2_marshaled_unmarshaled_dereferenced = NULL;
	_____hitResults2_marshaled_unmarshaled_dereferenced = *____hitResults2_marshaled;
	*___hitResults2 = _____hitResults2_marshaled_unmarshaled_dereferenced;

}
// System.Void UnityEngine.XR.ARKit.ARKitRaycastSubsystem/NativeApi::UnityARKit_Raycast_CopyAndReleaseHitResults(System.Void*,System.Int32,System.Void*,System.Void*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeApi_UnityARKit_Raycast_CopyAndReleaseHitResults_m8152EEFB15DD57649BC66013FE88109E9B64B784 (void* ___defaultHit0, int32_t ___stride1, void* ___hitResults2, void* ___dstBuffer3, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (void*, int32_t, void*, void*);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(UnityARKit_Raycast_CopyAndReleaseHitResults)(___defaultHit0, ___stride1, ___hitResults2, ___dstBuffer3);

}
// System.IntPtr UnityEngine.XR.ARKit.ARKitRaycastSubsystem/NativeApi::Construct()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t NativeApi_Construct_m6DE0A0FE05883F496C2822E29EEF5E9D8B68FC5F (const RuntimeMethod* method)
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) ();

	// Native function invocation
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(UnityARKit_Raycast_Construct)();

	return returnValue;
}
// System.Void UnityEngine.XR.ARKit.ARKitRaycastSubsystem/NativeApi::Start(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeApi_Start_m1ED955772F08A510C7EE94392389A757BDFB5B64 (intptr_t ___self0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (intptr_t);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(UnityARKit_Raycast_Start)(___self0);

}
// System.Void UnityEngine.XR.ARKit.ARKitRaycastSubsystem/NativeApi::Stop(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeApi_Stop_m824F57BFD9FD74787BA28507962DC73555039041 (intptr_t ___self0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (intptr_t);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(UnityARKit_Raycast_Stop)(___self0);

}
// System.Void UnityEngine.XR.ARKit.ARKitRaycastSubsystem/NativeApi::AcquireChanges(System.IntPtr,UnityEngine.XR.ARSubsystems.XRRaycast*&,System.Int32&,UnityEngine.XR.ARSubsystems.XRRaycast*&,System.Int32&,UnityEngine.XR.ARSubsystems.TrackableId*&,System.Int32&,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeApi_AcquireChanges_m84A45D9686034EF9A80E60FB67B4825FE804F857 (intptr_t ___self0, XRRaycast_tA18F9107EFF1D692E70EF15233BB6134A5F66C55 ** ___added1, int32_t* ___addedCount2, XRRaycast_tA18F9107EFF1D692E70EF15233BB6134A5F66C55 ** ___updated3, int32_t* ___updatedCount4, TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B ** ___removed5, int32_t* ___removedCount6, int32_t* ___elementSize7, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (intptr_t, XRRaycast_tA18F9107EFF1D692E70EF15233BB6134A5F66C55 **, int32_t*, XRRaycast_tA18F9107EFF1D692E70EF15233BB6134A5F66C55 **, int32_t*, TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B **, int32_t*, int32_t*);

	// Marshaling of parameter '___added1' to native representation
	XRRaycast_tA18F9107EFF1D692E70EF15233BB6134A5F66C55 * ____added1_empty = NULL;
	XRRaycast_tA18F9107EFF1D692E70EF15233BB6134A5F66C55 ** ____added1_marshaled = &____added1_empty;

	// Marshaling of parameter '___updated3' to native representation
	XRRaycast_tA18F9107EFF1D692E70EF15233BB6134A5F66C55 * ____updated3_empty = NULL;
	XRRaycast_tA18F9107EFF1D692E70EF15233BB6134A5F66C55 ** ____updated3_marshaled = &____updated3_empty;

	// Marshaling of parameter '___removed5' to native representation
	TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B * ____removed5_empty = NULL;
	TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B ** ____removed5_marshaled = &____removed5_empty;

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(UnityARKit_Raycast_AcquireChanges)(___self0, ____added1_marshaled, ___addedCount2, ____updated3_marshaled, ___updatedCount4, ____removed5_marshaled, ___removedCount6, ___elementSize7);

	// Marshaling of parameter '___added1' back from native representation
	XRRaycast_tA18F9107EFF1D692E70EF15233BB6134A5F66C55 * _____added1_marshaled_unmarshaled_dereferenced = NULL;
	_____added1_marshaled_unmarshaled_dereferenced = *____added1_marshaled;
	*___added1 = _____added1_marshaled_unmarshaled_dereferenced;

	// Marshaling of parameter '___updated3' back from native representation
	XRRaycast_tA18F9107EFF1D692E70EF15233BB6134A5F66C55 * _____updated3_marshaled_unmarshaled_dereferenced = NULL;
	_____updated3_marshaled_unmarshaled_dereferenced = *____updated3_marshaled;
	*___updated3 = _____updated3_marshaled_unmarshaled_dereferenced;

	// Marshaling of parameter '___removed5' back from native representation
	TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B * _____removed5_marshaled_unmarshaled_dereferenced = NULL;
	_____removed5_marshaled_unmarshaled_dereferenced = *____removed5_marshaled;
	*___removed5 = _____removed5_marshaled_unmarshaled_dereferenced;

}
// System.Void UnityEngine.XR.ARKit.ARKitRaycastSubsystem/NativeApi::ReleaseChanges(UnityEngine.XR.ARSubsystems.XRRaycast*,UnityEngine.XR.ARSubsystems.XRRaycast*,UnityEngine.XR.ARSubsystems.TrackableId*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeApi_ReleaseChanges_m5D8C484D64063118B1AB3DE4951F3F9CBD8E3A60 (XRRaycast_tA18F9107EFF1D692E70EF15233BB6134A5F66C55 * ___added0, XRRaycast_tA18F9107EFF1D692E70EF15233BB6134A5F66C55 * ___updated1, TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B * ___removed2, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (XRRaycast_tA18F9107EFF1D692E70EF15233BB6134A5F66C55 *, XRRaycast_tA18F9107EFF1D692E70EF15233BB6134A5F66C55 *, TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B *);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(UnityARKit_Raycast_ReleaseChanges)(___added0, ___updated1, ___removed2);

}
// System.Boolean UnityEngine.XR.ARKit.ARKitRaycastSubsystem/NativeApi::TryAddRaycast(System.IntPtr,UnityEngine.Vector3,UnityEngine.Vector3,System.Single,UnityEngine.XR.ARSubsystems.XRRaycast&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NativeApi_TryAddRaycast_mDA0EB2370860A3D049C9465C99EEE308DB023E2C (intptr_t ___self0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___origin1, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___direction2, float ___estimatedDistance3, XRRaycast_tA18F9107EFF1D692E70EF15233BB6134A5F66C55 * ___raycast4, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (intptr_t, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E , Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E , float, XRRaycast_tA18F9107EFF1D692E70EF15233BB6134A5F66C55 *);

	// Native function invocation
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(UnityARKit_Raycast_TryAddRaycast)(___self0, ___origin1, ___direction2, ___estimatedDistance3, ___raycast4);

	return static_cast<bool>(returnValue);
}
// System.Void UnityEngine.XR.ARKit.ARKitRaycastSubsystem/NativeApi::RemoveRaycast(System.IntPtr,UnityEngine.XR.ARSubsystems.TrackableId)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeApi_RemoveRaycast_m244B44FD32FCF72613792F048CF6F90319CBEFA0 (intptr_t ___self0, TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  ___trackableId1, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (intptr_t, TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B );

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(UnityARKit_Raycast_RemoveRaycast)(___self0, ___trackableId1);

}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.XR.ARKit.ARKitSessionSubsystem/ARKitProvider::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARKitProvider__ctor_mE42CA077B10BF3503A265E7AFD2E618725AD42D2 (ARKitProvider_t9AF751FC81DD6B052A462DBB30F46C946CE9E7CF * __this, const RuntimeMethod* method)
{
	{
		// public ARKitProvider() => m_Self = NativeApi.UnityARKit_Session_Construct();
		Provider__ctor_m921D9E5D94AB32804689C972E36ECA2601BB2AAE(__this, /*hidden argument*/NULL);
		// public ARKitProvider() => m_Self = NativeApi.UnityARKit_Session_Construct();
		intptr_t L_0;
		L_0 = NativeApi_UnityARKit_Session_Construct_mDDDB00F18369E7FD28003E2791FB94E9C6F342D6(/*hidden argument*/NULL);
		__this->set_m_Self_1((intptr_t)L_0);
		return;
	}
}
// System.Boolean UnityEngine.XR.ARKit.ARKitSessionSubsystem/ARKitProvider::AtLeastOneConfigurationExists()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ARKitProvider_AtLeastOneConfigurationExists_m3D372B9D347706851AE175874CA9C1025FB186ED (ARKitProvider_t9AF751FC81DD6B052A462DBB30F46C946CE9E7CF * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// bool AtLeastOneConfigurationExists() => NativeApi.UnityARKit_Session_GetConfigurationDescriptors(m_Self, IntPtr.Zero, 0, 0) > 0;
		intptr_t L_0 = __this->get_m_Self_1();
		int32_t L_1;
		L_1 = NativeApi_UnityARKit_Session_GetConfigurationDescriptors_mD7ADC376E9170C6779B02A4E749859D68A885E4E((intptr_t)L_0, (intptr_t)(0), 0, 0, /*hidden argument*/NULL);
		return (bool)((((int32_t)L_1) > ((int32_t)0))? 1 : 0);
	}
}
// System.Void UnityEngine.XR.ARKit.ARKitSessionSubsystem/ARKitProvider::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARKitProvider_Start_m04B8A4E0A73334128725B85F2373F9E6742478BC (ARKitProvider_t9AF751FC81DD6B052A462DBB30F46C946CE9E7CF * __this, const RuntimeMethod* method)
{
	{
		// public override void Start() => NativeApi.UnityARKit_Session_Resume(m_Self);
		intptr_t L_0 = __this->get_m_Self_1();
		NativeApi_UnityARKit_Session_Resume_m2AB1F20C092413BD51E598F2016432E5A2C0B902((intptr_t)L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.XR.ARKit.ARKitSessionSubsystem/ARKitProvider::Stop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARKitProvider_Stop_m0DEB8C21EBB3D0B6BDF43E0EB4E0766B04ACB4DF (ARKitProvider_t9AF751FC81DD6B052A462DBB30F46C946CE9E7CF * __this, const RuntimeMethod* method)
{
	{
		// public override void Stop() => NativeApi.UnityARKit_Session_Pause(m_Self);
		intptr_t L_0 = __this->get_m_Self_1();
		NativeApi_UnityARKit_Session_Pause_m3EE2DE7BBB66B473E76C6DC6A378802EA59F00A9((intptr_t)L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.XR.ARKit.ARKitSessionSubsystem/ARKitProvider::Update(UnityEngine.XR.ARSubsystems.XRSessionUpdateParams)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARKitProvider_Update_mFCFAF8B947B25F2357A679710D9CF3F54851585A (ARKitProvider_t9AF751FC81DD6B052A462DBB30F46C946CE9E7CF * __this, XRSessionUpdateParams_t106E075C3B348969D6F3B634195F295CE47DB77F  ___updateParams0, const RuntimeMethod* method)
{
	{
		// => throw new NotSupportedException("Update requires a configuration.");
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m40BC57BDA6E0E119B73700CC809A14B57DC65A90(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE5FB67D700F9220F7DD24AC9022E732D8FE871B6)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ARKitProvider_Update_mFCFAF8B947B25F2357A679710D9CF3F54851585A_RuntimeMethod_var)));
	}
}
// System.Void UnityEngine.XR.ARKit.ARKitSessionSubsystem/ARKitProvider::Update(UnityEngine.XR.ARSubsystems.XRSessionUpdateParams,UnityEngine.XR.ARSubsystems.Configuration)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARKitProvider_Update_mB36642F14E333A1536C5D4788AAAC310D72FFF98 (ARKitProvider_t9AF751FC81DD6B052A462DBB30F46C946CE9E7CF * __this, XRSessionUpdateParams_t106E075C3B348969D6F3B634195F295CE47DB77F  ___updateParams0, Configuration_t29C11C7E576D64F717543048BDA1EBCEF0CF60C0  ___configuration1, const RuntimeMethod* method)
{
	ConfigurationDescriptor_t5CD12F017FCCF861DC33D7C0D6F0121015DEEA78  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// => NativeApi.UnityARKit_Session_Update(m_Self, configuration.descriptor.identifier, configuration.features);
		intptr_t L_0 = __this->get_m_Self_1();
		ConfigurationDescriptor_t5CD12F017FCCF861DC33D7C0D6F0121015DEEA78  L_1;
		L_1 = Configuration_get_descriptor_mD7539C193666CFFB9258CE40D88EB7DA3C48DDDA_inline((Configuration_t29C11C7E576D64F717543048BDA1EBCEF0CF60C0 *)(&___configuration1), /*hidden argument*/NULL);
		V_0 = L_1;
		intptr_t L_2;
		L_2 = ConfigurationDescriptor_get_identifier_m829E6611B4E4B0E33E8E87902FDFCDAEC0F2B8A0_inline((ConfigurationDescriptor_t5CD12F017FCCF861DC33D7C0D6F0121015DEEA78 *)(&V_0), /*hidden argument*/NULL);
		uint64_t L_3;
		L_3 = Configuration_get_features_m8F2353DC080AF51D657C4CBD8E9DB4DAEAB72B5A_inline((Configuration_t29C11C7E576D64F717543048BDA1EBCEF0CF60C0 *)(&___configuration1), /*hidden argument*/NULL);
		NativeApi_UnityARKit_Session_Update_mB92AA0121D0F70ECF11011FC30DC1C17DC7ACDB1((intptr_t)L_0, (intptr_t)L_2, L_3, /*hidden argument*/NULL);
		return;
	}
}
// Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.ConfigurationDescriptor> UnityEngine.XR.ARKit.ARKitSessionSubsystem/ARKitProvider::GetConfigurationDescriptors(Unity.Collections.Allocator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_tC9A9DFD8C5E8BBF71F83CBC0CCF7C4BC38E3A4CA  ARKitProvider_GetConfigurationDescriptors_mB1ECD338704A418D6428161435F146410E16C2F6 (ARKitProvider_t9AF751FC81DD6B052A462DBB30F46C946CE9E7CF * __this, int32_t ___allocator0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeArrayUnsafeUtility_GetUnsafePtr_TisConfigurationDescriptor_t5CD12F017FCCF861DC33D7C0D6F0121015DEEA78_m38F4EB734FEAE74086322152D46FCAFEB2DB1C72_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeArray_1__ctor_m9BC70C00CBBD2A630F434033F04D9A1ADBCD2440_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	NativeArray_1_tC9A9DFD8C5E8BBF71F83CBC0CCF7C4BC38E3A4CA  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// int count = NativeApi.UnityARKit_Session_GetConfigurationDescriptors(m_Self, IntPtr.Zero, 0, 0);
		intptr_t L_0 = __this->get_m_Self_1();
		int32_t L_1;
		L_1 = NativeApi_UnityARKit_Session_GetConfigurationDescriptors_mD7ADC376E9170C6779B02A4E749859D68A885E4E((intptr_t)L_0, (intptr_t)(0), 0, 0, /*hidden argument*/NULL);
		V_0 = L_1;
		// var descriptors = new NativeArray<ConfigurationDescriptor>(count, allocator);
		int32_t L_2 = V_0;
		int32_t L_3 = ___allocator0;
		NativeArray_1__ctor_m9BC70C00CBBD2A630F434033F04D9A1ADBCD2440((NativeArray_1_tC9A9DFD8C5E8BBF71F83CBC0CCF7C4BC38E3A4CA *)(&V_1), L_2, L_3, 1, /*hidden argument*/NativeArray_1__ctor_m9BC70C00CBBD2A630F434033F04D9A1ADBCD2440_RuntimeMethod_var);
		// NativeApi.UnityARKit_Session_GetConfigurationDescriptors(
		//     m_Self, new IntPtr(descriptors.GetUnsafePtr()),
		//     descriptors.Length, sizeof(ConfigurationDescriptor));
		intptr_t L_4 = __this->get_m_Self_1();
		NativeArray_1_tC9A9DFD8C5E8BBF71F83CBC0CCF7C4BC38E3A4CA  L_5 = V_1;
		void* L_6;
		L_6 = NativeArrayUnsafeUtility_GetUnsafePtr_TisConfigurationDescriptor_t5CD12F017FCCF861DC33D7C0D6F0121015DEEA78_m38F4EB734FEAE74086322152D46FCAFEB2DB1C72(L_5, /*hidden argument*/NativeArrayUnsafeUtility_GetUnsafePtr_TisConfigurationDescriptor_t5CD12F017FCCF861DC33D7C0D6F0121015DEEA78_m38F4EB734FEAE74086322152D46FCAFEB2DB1C72_RuntimeMethod_var);
		intptr_t L_7;
		memset((&L_7), 0, sizeof(L_7));
		IntPtr__ctor_mBB7AF6DA6350129AD6422DE474FD52F715CC0C40_inline((&L_7), (void*)(void*)L_6, /*hidden argument*/NULL);
		int32_t L_8;
		L_8 = IL2CPP_NATIVEARRAY_GET_LENGTH(((NativeArray_1_tC9A9DFD8C5E8BBF71F83CBC0CCF7C4BC38E3A4CA *)(&V_1))->___m_Length_1);
		uint32_t L_9 = sizeof(ConfigurationDescriptor_t5CD12F017FCCF861DC33D7C0D6F0121015DEEA78 );
		int32_t L_10;
		L_10 = NativeApi_UnityARKit_Session_GetConfigurationDescriptors_mD7ADC376E9170C6779B02A4E749859D68A885E4E((intptr_t)L_4, (intptr_t)L_7, L_8, L_9, /*hidden argument*/NULL);
		// return descriptors;
		NativeArray_1_tC9A9DFD8C5E8BBF71F83CBC0CCF7C4BC38E3A4CA  L_11 = V_1;
		return L_11;
	}
}
// System.Void UnityEngine.XR.ARKit.ARKitSessionSubsystem/ARKitProvider::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARKitProvider_Reset_mD1EFC01F40BDFD18A71EE8BDE652E123E4C376D9 (ARKitProvider_t9AF751FC81DD6B052A462DBB30F46C946CE9E7CF * __this, const RuntimeMethod* method)
{
	{
		// public override void Reset() => NativeApi.UnityARKit_Session_Reset(m_Self);
		intptr_t L_0 = __this->get_m_Self_1();
		NativeApi_UnityARKit_Session_Reset_m6E5BDC9217A791D46AB29473AECF87C6AA23C151((intptr_t)L_0, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.XR.ARSubsystems.Promise`1<UnityEngine.XR.ARSubsystems.SessionAvailability> UnityEngine.XR.ARKit.ARKitSessionSubsystem/ARKitProvider::GetAvailabilityAsync()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Promise_1_tB8B428F557CD6742430DB416C0B99C79CA1AA167 * ARKitProvider_GetAvailabilityAsync_mA89BA5D5063DBE37FF56508CC0DB5614E29910E2 (ARKitProvider_t9AF751FC81DD6B052A462DBB30F46C946CE9E7CF * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Promise_1_CreateResolvedPromise_m5C98DBF8D42B75866FC1F8CFFBB38C8E9D36D97C_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t G_B4_0 = 0;
	{
		// public override Promise<SessionAvailability> GetAvailabilityAsync() => Promise<SessionAvailability>.CreateResolvedPromise(
		//     NativeApi.UnityARKit_Session_IsSupported() && AtLeastOneConfigurationExists()? SessionAvailability.Installed | SessionAvailability.Supported : SessionAvailability.None);
		bool L_0;
		L_0 = NativeApi_UnityARKit_Session_IsSupported_m47F84EF0D7E063ED761CAF1DB7ADDAFB4117ECC0(/*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_000f;
		}
	}
	{
		bool L_1;
		L_1 = ARKitProvider_AtLeastOneConfigurationExists_m3D372B9D347706851AE175874CA9C1025FB186ED(__this, /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_0012;
		}
	}

IL_000f:
	{
		G_B4_0 = 0;
		goto IL_0013;
	}

IL_0012:
	{
		G_B4_0 = 6;
	}

IL_0013:
	{
		Promise_1_tB8B428F557CD6742430DB416C0B99C79CA1AA167 * L_2;
		L_2 = Promise_1_CreateResolvedPromise_m5C98DBF8D42B75866FC1F8CFFBB38C8E9D36D97C(G_B4_0, /*hidden argument*/Promise_1_CreateResolvedPromise_m5C98DBF8D42B75866FC1F8CFFBB38C8E9D36D97C_RuntimeMethod_var);
		return L_2;
	}
}
// UnityEngine.XR.ARSubsystems.Promise`1<UnityEngine.XR.ARSubsystems.SessionInstallationStatus> UnityEngine.XR.ARKit.ARKitSessionSubsystem/ARKitProvider::InstallAsync()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Promise_1_tB8B3F3631C923F82F653F3D73D6B3082CF7CDD88 * ARKitProvider_InstallAsync_m90DA07980968C958C21FF74E01BD6477ADE67B12 (ARKitProvider_t9AF751FC81DD6B052A462DBB30F46C946CE9E7CF * __this, const RuntimeMethod* method)
{
	{
		// throw new NotSupportedException("ARKit cannot be installed.");
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m40BC57BDA6E0E119B73700CC809A14B57DC65A90(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral41B38D9A9414CB491AD9A85E56E1C5392C4603F0)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ARKitProvider_InstallAsync_m90DA07980968C958C21FF74E01BD6477ADE67B12_RuntimeMethod_var)));
	}
}
// UnityEngine.XR.ARSubsystems.TrackingState UnityEngine.XR.ARKit.ARKitSessionSubsystem/ARKitProvider::get_trackingState()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ARKitProvider_get_trackingState_m0FAD25B6CEB1219FAAE18858D3B18077EC8F9DF5 (ARKitProvider_t9AF751FC81DD6B052A462DBB30F46C946CE9E7CF * __this, const RuntimeMethod* method)
{
	{
		// public override TrackingState trackingState => NativeApi.UnityARKit_Session_GetTrackingState(m_Self);
		intptr_t L_0 = __this->get_m_Self_1();
		int32_t L_1;
		L_1 = NativeApi_UnityARKit_Session_GetTrackingState_mC5652B568DE0239CB0E65B568B045C96C6BFA443((intptr_t)L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// UnityEngine.XR.ARSubsystems.NotTrackingReason UnityEngine.XR.ARKit.ARKitSessionSubsystem/ARKitProvider::get_notTrackingReason()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ARKitProvider_get_notTrackingReason_m4171FCF70C099B456323B8C7E52009B91C728E64 (ARKitProvider_t9AF751FC81DD6B052A462DBB30F46C946CE9E7CF * __this, const RuntimeMethod* method)
{
	{
		// public override NotTrackingReason notTrackingReason => NativeApi.UnityARKit_Session_GetNotTrackingReason(m_Self);
		intptr_t L_0 = __this->get_m_Self_1();
		int32_t L_1;
		L_1 = NativeApi_UnityARKit_Session_GetNotTrackingReason_mF5ADC571097240C6274904D21130F9822AB4A143((intptr_t)L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// UnityEngine.XR.ARSubsystems.Feature UnityEngine.XR.ARKit.ARKitSessionSubsystem/ARKitProvider::get_requestedFeatures()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t ARKitProvider_get_requestedFeatures_m45856F10ED080993924FBEACD3B57F99E74E5AB9 (ARKitProvider_t9AF751FC81DD6B052A462DBB30F46C946CE9E7CF * __this, const RuntimeMethod* method)
{
	{
		// public override Feature requestedFeatures => Api.GetRequestedFeatures();
		uint64_t L_0;
		L_0 = Api_GetRequestedFeatures_m31758CAAF7E8C545E0E99626EA2E993D2C398DDA(/*hidden argument*/NULL);
		return L_0;
	}
}
// UnityEngine.XR.ARSubsystems.Feature UnityEngine.XR.ARKit.ARKitSessionSubsystem/ARKitProvider::get_requestedTrackingMode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t ARKitProvider_get_requestedTrackingMode_mEAE1EEC2E9B5D14C9CBE7F5EFDC11F0AEE1FA54F (ARKitProvider_t9AF751FC81DD6B052A462DBB30F46C946CE9E7CF * __this, const RuntimeMethod* method)
{
	{
		// get => Api.GetRequestedFeatures();
		uint64_t L_0;
		L_0 = Api_GetRequestedFeatures_m31758CAAF7E8C545E0E99626EA2E993D2C398DDA(/*hidden argument*/NULL);
		return L_0;
	}
}
// System.Void UnityEngine.XR.ARKit.ARKitSessionSubsystem/ARKitProvider::set_requestedTrackingMode(UnityEngine.XR.ARSubsystems.Feature)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARKitProvider_set_requestedTrackingMode_m2BA7C4C29E73036BB49B30FE0EDED5C003D422A6 (ARKitProvider_t9AF751FC81DD6B052A462DBB30F46C946CE9E7CF * __this, uint64_t ___value0, const RuntimeMethod* method)
{
	{
		// Api.SetFeatureRequested(Feature.AnyTrackingMode, false);
		Api_SetFeatureRequested_m5F97A8E9C25203A781BCC2601D85A90D187546F2(((int64_t)((int64_t)((int32_t)12))), (bool)0, /*hidden argument*/NULL);
		// Api.SetFeatureRequested(value, true);
		uint64_t L_0 = ___value0;
		Api_SetFeatureRequested_m5F97A8E9C25203A781BCC2601D85A90D187546F2(L_0, (bool)1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// UnityEngine.XR.ARSubsystems.Feature UnityEngine.XR.ARKit.ARKitSessionSubsystem/ARKitProvider::get_currentTrackingMode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t ARKitProvider_get_currentTrackingMode_m605730139A4F8034E056666D0603BF321934B58F (ARKitProvider_t9AF751FC81DD6B052A462DBB30F46C946CE9E7CF * __this, const RuntimeMethod* method)
{
	{
		// public override Feature currentTrackingMode => NativeApi.UnityARKit_Session_GetCurrentTrackingMode(m_Self);
		intptr_t L_0 = __this->get_m_Self_1();
		uint64_t L_1;
		L_1 = NativeApi_UnityARKit_Session_GetCurrentTrackingMode_mE49011F730CE22C788FB5EDF4B2D66877A145558((intptr_t)L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Boolean UnityEngine.XR.ARKit.ARKitSessionSubsystem/ARKitProvider::get_matchFrameRateEnabled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ARKitProvider_get_matchFrameRateEnabled_mB13E2B3F606D3811ED698EF1AC923AA269B0E4B3 (ARKitProvider_t9AF751FC81DD6B052A462DBB30F46C946CE9E7CF * __this, const RuntimeMethod* method)
{
	{
		// public override bool matchFrameRateEnabled => matchFrameRateRequested;
		bool L_0;
		L_0 = VirtFuncInvoker0< bool >::Invoke(21 /* System.Boolean UnityEngine.XR.ARSubsystems.XRSessionSubsystem/Provider::get_matchFrameRateRequested() */, __this);
		return L_0;
	}
}
// System.Boolean UnityEngine.XR.ARKit.ARKitSessionSubsystem/ARKitProvider::get_matchFrameRateRequested()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ARKitProvider_get_matchFrameRateRequested_m153F0DFC3B672D1226C4B94FF6513F006C8DB53D (ARKitProvider_t9AF751FC81DD6B052A462DBB30F46C946CE9E7CF * __this, const RuntimeMethod* method)
{
	{
		// get => NativeApi.UnityARKit_Session_GetMatchFrameRateEnabled(m_Self);
		intptr_t L_0 = __this->get_m_Self_1();
		bool L_1;
		L_1 = NativeApi_UnityARKit_Session_GetMatchFrameRateEnabled_mA3FE1542D5E6285BF2F76BC6555F918C55D3E093((intptr_t)L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Void UnityEngine.XR.ARKit.ARKitSessionSubsystem/ARKitProvider::set_matchFrameRateRequested(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARKitProvider_set_matchFrameRateRequested_mDBE02BFDD4F8AA60B8E2774F3D3F9A4393689E98 (ARKitProvider_t9AF751FC81DD6B052A462DBB30F46C946CE9E7CF * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// set => NativeApi.UnityARKit_Session_SetMatchFrameRateEnabled(m_Self, value);
		intptr_t L_0 = __this->get_m_Self_1();
		bool L_1 = ___value0;
		NativeApi_UnityARKit_Session_SetMatchFrameRateEnabled_m7FA9599E9CEAA4C689F17C658C0FB04329980070((intptr_t)L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Int32 UnityEngine.XR.ARKit.ARKitSessionSubsystem/ARKitProvider::get_frameRate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ARKitProvider_get_frameRate_m950E6F1BBB9CD08A442D1CDFE4C24163F816DCE0 (ARKitProvider_t9AF751FC81DD6B052A462DBB30F46C946CE9E7CF * __this, const RuntimeMethod* method)
{
	{
		// public override int frameRate => NativeApi.UnityARKit_Session_GetFrameRate(m_Self);
		intptr_t L_0 = __this->get_m_Self_1();
		int32_t L_1;
		L_1 = NativeApi_UnityARKit_Session_GetFrameRate_mB0AF3BB53798E92113056FCEBACF3E36D1576762((intptr_t)L_0, /*hidden argument*/NULL);
		return L_1;
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
// System.Boolean UnityEngine.XR.ARKit.ARKitSessionSubsystem/NativeApi::UnityARKit_Session_IsSupported()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NativeApi_UnityARKit_Session_IsSupported_m47F84EF0D7E063ED761CAF1DB7ADDAFB4117ECC0 (const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) ();

	// Native function invocation
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(UnityARKit_Session_IsSupported)();

	return static_cast<bool>(returnValue);
}
// System.Void UnityEngine.XR.ARKit.ARKitSessionSubsystem/NativeApi::UnityARKit_Session_Update(System.IntPtr,System.IntPtr,UnityEngine.XR.ARSubsystems.Feature)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeApi_UnityARKit_Session_Update_mB92AA0121D0F70ECF11011FC30DC1C17DC7ACDB1 (intptr_t ___self0, intptr_t ___desiredConfigurationClass1, uint64_t ___features2, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (intptr_t, intptr_t, uint64_t);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(UnityARKit_Session_Update)(___self0, ___desiredConfigurationClass1, ___features2);

}
// System.Int32 UnityEngine.XR.ARKit.ARKitSessionSubsystem/NativeApi::UnityARKit_Session_GetConfigurationDescriptors(System.IntPtr,System.IntPtr,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeApi_UnityARKit_Session_GetConfigurationDescriptors_mD7ADC376E9170C6779B02A4E749859D68A885E4E (intptr_t ___self0, intptr_t ___buffer1, int32_t ___capacity2, int32_t ___stride3, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (intptr_t, intptr_t, int32_t, int32_t);

	// Native function invocation
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(UnityARKit_Session_GetConfigurationDescriptors)(___self0, ___buffer1, ___capacity2, ___stride3);

	return returnValue;
}
// System.IntPtr UnityEngine.XR.ARKit.ARKitSessionSubsystem/NativeApi::UnityARKit_Session_Construct()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t NativeApi_UnityARKit_Session_Construct_mDDDB00F18369E7FD28003E2791FB94E9C6F342D6 (const RuntimeMethod* method)
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) ();

	// Native function invocation
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(UnityARKit_Session_Construct)();

	return returnValue;
}
// System.Void UnityEngine.XR.ARKit.ARKitSessionSubsystem/NativeApi::UnityARKit_Session_Resume(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeApi_UnityARKit_Session_Resume_m2AB1F20C092413BD51E598F2016432E5A2C0B902 (intptr_t ___self0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (intptr_t);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(UnityARKit_Session_Resume)(___self0);

}
// System.Void UnityEngine.XR.ARKit.ARKitSessionSubsystem/NativeApi::UnityARKit_Session_Pause(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeApi_UnityARKit_Session_Pause_m3EE2DE7BBB66B473E76C6DC6A378802EA59F00A9 (intptr_t ___self0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (intptr_t);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(UnityARKit_Session_Pause)(___self0);

}
// System.Void UnityEngine.XR.ARKit.ARKitSessionSubsystem/NativeApi::UnityARKit_Session_Reset(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeApi_UnityARKit_Session_Reset_m6E5BDC9217A791D46AB29473AECF87C6AA23C151 (intptr_t ___self0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (intptr_t);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(UnityARKit_Session_Reset)(___self0);

}
// UnityEngine.XR.ARSubsystems.TrackingState UnityEngine.XR.ARKit.ARKitSessionSubsystem/NativeApi::UnityARKit_Session_GetTrackingState(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeApi_UnityARKit_Session_GetTrackingState_mC5652B568DE0239CB0E65B568B045C96C6BFA443 (intptr_t ___self0, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (intptr_t);

	// Native function invocation
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(UnityARKit_Session_GetTrackingState)(___self0);

	return returnValue;
}
// UnityEngine.XR.ARSubsystems.NotTrackingReason UnityEngine.XR.ARKit.ARKitSessionSubsystem/NativeApi::UnityARKit_Session_GetNotTrackingReason(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeApi_UnityARKit_Session_GetNotTrackingReason_mF5ADC571097240C6274904D21130F9822AB4A143 (intptr_t ___self0, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (intptr_t);

	// Native function invocation
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(UnityARKit_Session_GetNotTrackingReason)(___self0);

	return returnValue;
}
// System.Boolean UnityEngine.XR.ARKit.ARKitSessionSubsystem/NativeApi::UnityARKit_Session_GetMatchFrameRateEnabled(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NativeApi_UnityARKit_Session_GetMatchFrameRateEnabled_mA3FE1542D5E6285BF2F76BC6555F918C55D3E093 (intptr_t ___self0, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (intptr_t);

	// Native function invocation
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(UnityARKit_Session_GetMatchFrameRateEnabled)(___self0);

	return static_cast<bool>(returnValue);
}
// System.Void UnityEngine.XR.ARKit.ARKitSessionSubsystem/NativeApi::UnityARKit_Session_SetMatchFrameRateEnabled(System.IntPtr,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeApi_UnityARKit_Session_SetMatchFrameRateEnabled_m7FA9599E9CEAA4C689F17C658C0FB04329980070 (intptr_t ___self0, bool ___enabled1, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (intptr_t, int32_t);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(UnityARKit_Session_SetMatchFrameRateEnabled)(___self0, static_cast<int32_t>(___enabled1));

}
// System.Int32 UnityEngine.XR.ARKit.ARKitSessionSubsystem/NativeApi::UnityARKit_Session_GetFrameRate(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeApi_UnityARKit_Session_GetFrameRate_mB0AF3BB53798E92113056FCEBACF3E36D1576762 (intptr_t ___self0, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (intptr_t);

	// Native function invocation
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(UnityARKit_Session_GetFrameRate)(___self0);

	return returnValue;
}
// UnityEngine.XR.ARSubsystems.Feature UnityEngine.XR.ARKit.ARKitSessionSubsystem/NativeApi::UnityARKit_Session_GetCurrentTrackingMode(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t NativeApi_UnityARKit_Session_GetCurrentTrackingMode_mE49011F730CE22C788FB5EDF4B2D66877A145558 (intptr_t ___self0, const RuntimeMethod* method)
{
	typedef uint64_t (DEFAULT_CALL *PInvokeFunc) (intptr_t);

	// Native function invocation
	uint64_t returnValue = reinterpret_cast<PInvokeFunc>(UnityARKit_Session_GetCurrentTrackingMode)(___self0);

	return returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.XR.ARKit.ARKitXRDepthSubsystem/ARKitProvider::UnityARKit_depth_start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARKitProvider_UnityARKit_depth_start_mB9EAD72797CC6CD76A98666084EA7FD857D8BFCD (const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) ();

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(UnityARKit_depth_start)();

}
// System.Void UnityEngine.XR.ARKit.ARKitXRDepthSubsystem/ARKitProvider::UnityARKit_depth_stop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARKitProvider_UnityARKit_depth_stop_mA83D7E9F0EF1B35E1BB4C21B4A5336767E2DCF0E (const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) ();

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(UnityARKit_depth_stop)();

}
// System.Void* UnityEngine.XR.ARKit.ARKitXRDepthSubsystem/ARKitProvider::UnityARKit_depth_acquireChanges(System.Void*&,System.Int32&,System.Void*&,System.Int32&,System.Void*&,System.Int32&,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* ARKitProvider_UnityARKit_depth_acquireChanges_m88E52456DB69677D14B4B21C9D7818AB56BA8412 (void** ___addedPtr0, int32_t* ___addedLength1, void** ___updatedPtr2, int32_t* ___updatedLength3, void** ___removedPtr4, int32_t* ___removedLength5, int32_t* ___elementSize6, const RuntimeMethod* method)
{
	typedef void* (DEFAULT_CALL *PInvokeFunc) (void**, int32_t*, void**, int32_t*, void**, int32_t*, int32_t*);

	// Marshaling of parameter '___addedPtr0' to native representation
	void* ____addedPtr0_empty = NULL;
	void** ____addedPtr0_marshaled = &____addedPtr0_empty;

	// Marshaling of parameter '___updatedPtr2' to native representation
	void* ____updatedPtr2_empty = NULL;
	void** ____updatedPtr2_marshaled = &____updatedPtr2_empty;

	// Marshaling of parameter '___removedPtr4' to native representation
	void* ____removedPtr4_empty = NULL;
	void** ____removedPtr4_marshaled = &____removedPtr4_empty;

	// Native function invocation
	void* returnValue = reinterpret_cast<PInvokeFunc>(UnityARKit_depth_acquireChanges)(____addedPtr0_marshaled, ___addedLength1, ____updatedPtr2_marshaled, ___updatedLength3, ____removedPtr4_marshaled, ___removedLength5, ___elementSize6);

	// Marshaling of parameter '___addedPtr0' back from native representation
	void* _____addedPtr0_marshaled_unmarshaled_dereferenced = NULL;
	_____addedPtr0_marshaled_unmarshaled_dereferenced = *____addedPtr0_marshaled;
	*___addedPtr0 = _____addedPtr0_marshaled_unmarshaled_dereferenced;

	// Marshaling of parameter '___updatedPtr2' back from native representation
	void* _____updatedPtr2_marshaled_unmarshaled_dereferenced = NULL;
	_____updatedPtr2_marshaled_unmarshaled_dereferenced = *____updatedPtr2_marshaled;
	*___updatedPtr2 = _____updatedPtr2_marshaled_unmarshaled_dereferenced;

	// Marshaling of parameter '___removedPtr4' back from native representation
	void* _____removedPtr4_marshaled_unmarshaled_dereferenced = NULL;
	_____removedPtr4_marshaled_unmarshaled_dereferenced = *____removedPtr4_marshaled;
	*___removedPtr4 = _____removedPtr4_marshaled_unmarshaled_dereferenced;

	return returnValue;
}
// System.Void UnityEngine.XR.ARKit.ARKitXRDepthSubsystem/ARKitProvider::UnityARKit_depth_releaseChanges(System.Void*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARKitProvider_UnityARKit_depth_releaseChanges_m5E1FC86524897CCECA94CF50F0A2037E1BC36388 (void* ___changes0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (void*);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(UnityARKit_depth_releaseChanges)(___changes0);

}
// UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRPointCloud> UnityEngine.XR.ARKit.ARKitXRDepthSubsystem/ARKitProvider::GetChanges(UnityEngine.XR.ARSubsystems.XRPointCloud,Unity.Collections.Allocator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TrackableChanges_1_t77AFD32F12A88AC162E5B41E66265CAF9D8E6435  ARKitProvider_GetChanges_mEAEF856D5E280731B920ABCCC9D84AC2CF070CAB (ARKitProvider_tC6BBA25F076F6D64FA8E6336E6860D7DBD41A7A1 * __this, XRPointCloud_t08B41A05528E45CE709F8C14CA6C484D360A62F2  ___defaultPointCloud0, int32_t ___allocator1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TrackableChanges_1__ctor_mBF738909EFD3DE1CE7CEC8B5BF81B3AB51A682CD_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	void* V_0 = NULL;
	void* V_1 = NULL;
	int32_t V_2 = 0;
	void* V_3 = NULL;
	int32_t V_4 = 0;
	void* V_5 = NULL;
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	TrackableChanges_1_t77AFD32F12A88AC162E5B41E66265CAF9D8E6435  V_8;
	memset((&V_8), 0, sizeof(V_8));
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		// var context = UnityARKit_depth_acquireChanges(
		//     out var addedPtr, out var addedLength,
		//     out var updatedPtr, out var updatedLength,
		//     out var removedPtr, out var removedLength,
		//     out var elementSize);
		void* L_0;
		L_0 = ARKitProvider_UnityARKit_depth_acquireChanges_m88E52456DB69677D14B4B21C9D7818AB56BA8412((void**)(&V_1), (int32_t*)(&V_2), (void**)(&V_3), (int32_t*)(&V_4), (void**)(&V_5), (int32_t*)(&V_6), (int32_t*)(&V_7), /*hidden argument*/NULL);
		V_0 = (void*)L_0;
	}

IL_0014:
	try
	{ // begin try (depth: 1)
		// return new TrackableChanges<XRPointCloud>(
		//     addedPtr, addedLength,
		//     updatedPtr, updatedLength,
		//     removedPtr, removedLength,
		//     defaultPointCloud, elementSize,
		//     allocator);
		void* L_1 = V_1;
		int32_t L_2 = V_2;
		void* L_3 = V_3;
		int32_t L_4 = V_4;
		void* L_5 = V_5;
		int32_t L_6 = V_6;
		XRPointCloud_t08B41A05528E45CE709F8C14CA6C484D360A62F2  L_7 = ___defaultPointCloud0;
		int32_t L_8 = V_7;
		int32_t L_9 = ___allocator1;
		TrackableChanges_1_t77AFD32F12A88AC162E5B41E66265CAF9D8E6435  L_10;
		memset((&L_10), 0, sizeof(L_10));
		TrackableChanges_1__ctor_mBF738909EFD3DE1CE7CEC8B5BF81B3AB51A682CD((&L_10), (void*)(void*)L_1, L_2, (void*)(void*)L_3, L_4, (void*)(void*)L_5, L_6, L_7, L_8, L_9, /*hidden argument*/TrackableChanges_1__ctor_mBF738909EFD3DE1CE7CEC8B5BF81B3AB51A682CD_RuntimeMethod_var);
		V_8 = L_10;
		IL2CPP_LEAVE(0x31, FINALLY_002a);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_002a;
	}

FINALLY_002a:
	{ // begin finally (depth: 1)
		// UnityARKit_depth_releaseChanges(context);
		void* L_11 = V_0;
		ARKitProvider_UnityARKit_depth_releaseChanges_m5E1FC86524897CCECA94CF50F0A2037E1BC36388((void*)(void*)L_11, /*hidden argument*/NULL);
		// }
		IL2CPP_END_FINALLY(42)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(42)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x31, IL_0031)
	}

IL_0031:
	{
		// }
		TrackableChanges_1_t77AFD32F12A88AC162E5B41E66265CAF9D8E6435  L_12 = V_8;
		return L_12;
	}
}
// System.Void UnityEngine.XR.ARKit.ARKitXRDepthSubsystem/ARKitProvider::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARKitProvider_Start_m92CDB4325031DBE19944AB1D72F2E71782C8799D (ARKitProvider_tC6BBA25F076F6D64FA8E6336E6860D7DBD41A7A1 * __this, const RuntimeMethod* method)
{
	{
		// public override void Start() => UnityARKit_depth_start();
		ARKitProvider_UnityARKit_depth_start_mB9EAD72797CC6CD76A98666084EA7FD857D8BFCD(/*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.XR.ARKit.ARKitXRDepthSubsystem/ARKitProvider::Stop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARKitProvider_Stop_m6334CD019B993A33BBA0ECA0671AA722ED8B911F (ARKitProvider_tC6BBA25F076F6D64FA8E6336E6860D7DBD41A7A1 * __this, const RuntimeMethod* method)
{
	{
		// public override void Stop() => UnityARKit_depth_stop();
		ARKitProvider_UnityARKit_depth_stop_mA83D7E9F0EF1B35E1BB4C21B4A5336767E2DCF0E(/*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.XR.ARKit.ARKitXRDepthSubsystem/ARKitProvider::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARKitProvider__ctor_mA12162D27C7B8FF0D22C9F79C59E24BE9EA4FF1C (ARKitProvider_tC6BBA25F076F6D64FA8E6336E6860D7DBD41A7A1 * __this, const RuntimeMethod* method)
{
	{
		Provider__ctor_m1A368071CFCB91BC39B9760441A777FE20F86A57(__this, /*hidden argument*/NULL);
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
// System.Void UnityEngine.XR.ARKit.ARKitXRDepthSubsystem/TransformPositionsJob::Execute(System.Int32)
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void TransformPositionsJob_Execute_m5ABC7C53AF619783BD8C58CB66FB8F7AF220A791 (TransformPositionsJob_t76836F51EABF9ECE4503F3ECAC1DA2C32D0DA468 * IL2CPP_PARAMETER_RESTRICT __this, int32_t ___index0, const RuntimeMethod* method)
{
	{
		// positionsOut[index] = new Vector3(
		//      positionsIn[index].x,
		//      positionsIn[index].y,
		//     -positionsIn[index].z);
		NativeArray_1_t2577BCA09CA248EFB78BD7FDA7F09D5C395DFF52 * L_0 = __this->get_address_of_positionsOut_1();
		int32_t L_1 = ___index0;
		NativeArray_1_t2672EA3A09E3FE76419439DC581905D460584A60 * L_2 = __this->get_address_of_positionsIn_0();
		int32_t L_3 = ___index0;
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_4;
		L_4 = IL2CPP_NATIVEARRAY_GET_ITEM(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 , ((NativeArray_1_t2672EA3A09E3FE76419439DC581905D460584A60 *)L_2)->___m_Buffer_0, L_3);
		float L_5 = L_4.get_x_0();
		NativeArray_1_t2672EA3A09E3FE76419439DC581905D460584A60 * L_6 = __this->get_address_of_positionsIn_0();
		int32_t L_7 = ___index0;
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_8;
		L_8 = IL2CPP_NATIVEARRAY_GET_ITEM(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 , ((NativeArray_1_t2672EA3A09E3FE76419439DC581905D460584A60 *)L_6)->___m_Buffer_0, L_7);
		float L_9 = L_8.get_y_1();
		NativeArray_1_t2672EA3A09E3FE76419439DC581905D460584A60 * L_10 = __this->get_address_of_positionsIn_0();
		int32_t L_11 = ___index0;
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_12;
		L_12 = IL2CPP_NATIVEARRAY_GET_ITEM(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 , ((NativeArray_1_t2672EA3A09E3FE76419439DC581905D460584A60 *)L_10)->___m_Buffer_0, L_11);
		float L_13 = L_12.get_z_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_14;
		memset((&L_14), 0, sizeof(L_14));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_14), L_5, L_9, ((-L_13)), /*hidden argument*/NULL);
		IL2CPP_NATIVEARRAY_SET_ITEM(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E , ((NativeArray_1_t2577BCA09CA248EFB78BD7FDA7F09D5C395DFF52 *)L_0)->___m_Buffer_0, L_1, (L_14));
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void TransformPositionsJob_Execute_m5ABC7C53AF619783BD8C58CB66FB8F7AF220A791_AdjustorThunk (RuntimeObject * IL2CPP_PARAMETER_RESTRICT __this, int32_t ___index0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	TransformPositionsJob_t76836F51EABF9ECE4503F3ECAC1DA2C32D0DA468 * _thisAdjusted = reinterpret_cast<TransformPositionsJob_t76836F51EABF9ECE4503F3ECAC1DA2C32D0DA468 *>(__this + _offset);
	TransformPositionsJob_Execute_m5ABC7C53AF619783BD8C58CB66FB8F7AF220A791(_thisAdjusted, ___index0, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.XR.ARKit.ARKitXRObjectTrackingSubsystem/ARKitProvider::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARKitProvider_Start_m53E726FE510F6BA44B2D156C6A72E883E753A639 (ARKitProvider_tDDBF5C474A3543A0F5FA7FB07A058B223F6DA8EC * __this, const RuntimeMethod* method)
{
	{
		// public override void Start() { }
		return;
	}
}
// System.Void UnityEngine.XR.ARKit.ARKitXRObjectTrackingSubsystem/ARKitProvider::Stop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARKitProvider_Stop_m5BAA7BD78FF179CAE81DD1CCA7282A9908B0B1FF (ARKitProvider_tDDBF5C474A3543A0F5FA7FB07A058B223F6DA8EC * __this, const RuntimeMethod* method)
{
	{
		// public override void Stop() { }
		return;
	}
}
// System.Void UnityEngine.XR.ARKit.ARKitXRObjectTrackingSubsystem/ARKitProvider::UnityARKit_ObjectTracking_Initialize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARKitProvider_UnityARKit_ObjectTracking_Initialize_m2D3E9211EB013DDCC555F5B0F37C767A3C13EFA2 (const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) ();

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(UnityARKit_ObjectTracking_Initialize)();

}
// System.Void UnityEngine.XR.ARKit.ARKitXRObjectTrackingSubsystem/ARKitProvider::UnityARKit_ObjectTracking_Stop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARKitProvider_UnityARKit_ObjectTracking_Stop_mC382D0FD771768A7B69AF8B082471D5568C09C19 (const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) ();

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(UnityARKit_ObjectTracking_Stop)();

}
// UnityEngine.XR.ARKit.SetReferenceLibraryResult UnityEngine.XR.ARKit.ARKitXRObjectTrackingSubsystem/ARKitProvider::UnityARKit_ObjectTracking_TrySetLibrary(System.String,System.Int32,System.Guid)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ARKitProvider_UnityARKit_ObjectTracking_TrySetLibrary_m23987ED29F2526A2617DC8B585A79CD4C4D3E041 (String_t* ___name0, int32_t ___nameLength1, Guid_t  ___guid2, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (Il2CppChar*, int32_t, Guid_t );

	// Marshaling of parameter '___name0' to native representation
	Il2CppChar* ____name0_marshaled = NULL;
	if (___name0 != NULL)
	{
		____name0_marshaled = ___name0->get_address_of_m_firstChar_1();
	}

	// Native function invocation
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(UnityARKit_ObjectTracking_TrySetLibrary)(____name0_marshaled, ___nameLength1, ___guid2);

	return returnValue;
}
// System.Void* UnityEngine.XR.ARKit.ARKitXRObjectTrackingSubsystem/ARKitProvider::UnityARKit_ObjectTracking_AcquireChanges(System.Void*&,System.Int32&,System.Void*&,System.Int32&,System.Void*&,System.Int32&,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* ARKitProvider_UnityARKit_ObjectTracking_AcquireChanges_mDFE62CF64E19EED60424B5744647B24F0F8EB1AD (void** ___addedPtr0, int32_t* ___addedLength1, void** ___updatedPtr2, int32_t* ___updatedLength3, void** ___removedPtr4, int32_t* ___removedLength5, int32_t* ___elementSize6, const RuntimeMethod* method)
{
	typedef void* (DEFAULT_CALL *PInvokeFunc) (void**, int32_t*, void**, int32_t*, void**, int32_t*, int32_t*);

	// Marshaling of parameter '___addedPtr0' to native representation
	void* ____addedPtr0_empty = NULL;
	void** ____addedPtr0_marshaled = &____addedPtr0_empty;

	// Marshaling of parameter '___updatedPtr2' to native representation
	void* ____updatedPtr2_empty = NULL;
	void** ____updatedPtr2_marshaled = &____updatedPtr2_empty;

	// Marshaling of parameter '___removedPtr4' to native representation
	void* ____removedPtr4_empty = NULL;
	void** ____removedPtr4_marshaled = &____removedPtr4_empty;

	// Native function invocation
	void* returnValue = reinterpret_cast<PInvokeFunc>(UnityARKit_ObjectTracking_AcquireChanges)(____addedPtr0_marshaled, ___addedLength1, ____updatedPtr2_marshaled, ___updatedLength3, ____removedPtr4_marshaled, ___removedLength5, ___elementSize6);

	// Marshaling of parameter '___addedPtr0' back from native representation
	void* _____addedPtr0_marshaled_unmarshaled_dereferenced = NULL;
	_____addedPtr0_marshaled_unmarshaled_dereferenced = *____addedPtr0_marshaled;
	*___addedPtr0 = _____addedPtr0_marshaled_unmarshaled_dereferenced;

	// Marshaling of parameter '___updatedPtr2' back from native representation
	void* _____updatedPtr2_marshaled_unmarshaled_dereferenced = NULL;
	_____updatedPtr2_marshaled_unmarshaled_dereferenced = *____updatedPtr2_marshaled;
	*___updatedPtr2 = _____updatedPtr2_marshaled_unmarshaled_dereferenced;

	// Marshaling of parameter '___removedPtr4' back from native representation
	void* _____removedPtr4_marshaled_unmarshaled_dereferenced = NULL;
	_____removedPtr4_marshaled_unmarshaled_dereferenced = *____removedPtr4_marshaled;
	*___removedPtr4 = _____removedPtr4_marshaled_unmarshaled_dereferenced;

	return returnValue;
}
// System.Void UnityEngine.XR.ARKit.ARKitXRObjectTrackingSubsystem/ARKitProvider::UnityARKit_ObjectTracking_ReleaseChanges(System.Void*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARKitProvider_UnityARKit_ObjectTracking_ReleaseChanges_mCECE209C0468C8D874EE2AB5816DC9F41F463D3B (void* ___changes0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (void*);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(UnityARKit_ObjectTracking_ReleaseChanges)(___changes0);

}
// System.Void UnityEngine.XR.ARKit.ARKitXRObjectTrackingSubsystem/ARKitProvider::set_library(UnityEngine.XR.ARSubsystems.XRReferenceObjectLibrary)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARKitProvider_set_library_mBBCD56DA4D9E1D8CF81D68B4272781BAE8E651E9 (ARKitProvider_tDDBF5C474A3543A0F5FA7FB07A058B223F6DA8EC * __this, XRReferenceObjectLibrary_t07704B2996E507F23EE3C99CFC3BB73A83C99A7C * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// if (value == null)
		XRReferenceObjectLibrary_t07704B2996E507F23EE3C99CFC3BB73A83C99A7C * L_0 = ___value0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_0, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_000f;
		}
	}
	{
		// UnityARKit_ObjectTracking_Stop();
		ARKitProvider_UnityARKit_ObjectTracking_Stop_mC382D0FD771768A7B69AF8B082471D5568C09C19(/*hidden argument*/NULL);
		// }
		return;
	}

IL_000f:
	{
		// switch (UnityARKit_ObjectTracking_TrySetLibrary(value.name, value.name.Length, value.guid))
		XRReferenceObjectLibrary_t07704B2996E507F23EE3C99CFC3BB73A83C99A7C * L_2 = ___value0;
		NullCheck(L_2);
		String_t* L_3;
		L_3 = Object_get_name_m0C7BC870ED2F0DC5A2FB09628136CD7D1CB82CFB(L_2, /*hidden argument*/NULL);
		XRReferenceObjectLibrary_t07704B2996E507F23EE3C99CFC3BB73A83C99A7C * L_4 = ___value0;
		NullCheck(L_4);
		String_t* L_5;
		L_5 = Object_get_name_m0C7BC870ED2F0DC5A2FB09628136CD7D1CB82CFB(L_4, /*hidden argument*/NULL);
		NullCheck(L_5);
		int32_t L_6;
		L_6 = String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline(L_5, /*hidden argument*/NULL);
		XRReferenceObjectLibrary_t07704B2996E507F23EE3C99CFC3BB73A83C99A7C * L_7 = ___value0;
		NullCheck(L_7);
		Guid_t  L_8;
		L_8 = XRReferenceObjectLibrary_get_guid_m47C1EC317BB367A2C7B631E20D0755C617F23728(L_7, /*hidden argument*/NULL);
		int32_t L_9;
		L_9 = ARKitProvider_UnityARKit_ObjectTracking_TrySetLibrary_m23987ED29F2526A2617DC8B585A79CD4C4D3E041(L_3, L_6, L_8, /*hidden argument*/NULL);
		V_0 = L_9;
		int32_t L_10 = V_0;
		switch (L_10)
		{
			case 0:
			{
				goto IL_006b;
			}
			case 1:
			{
				goto IL_003f;
			}
			case 2:
			{
				goto IL_0055;
			}
		}
	}
	{
		return;
	}

IL_003f:
	{
		// throw new InvalidOperationException(string.Format(
		//     "Failed to set requested image library '{0}' on ARKit - this feature only works on versions of ARKit 12.0 and newer.",
		//     value.name));
		XRReferenceObjectLibrary_t07704B2996E507F23EE3C99CFC3BB73A83C99A7C * L_11 = ___value0;
		NullCheck(L_11);
		String_t* L_12;
		L_12 = Object_get_name_m0C7BC870ED2F0DC5A2FB09628136CD7D1CB82CFB(L_11, /*hidden argument*/NULL);
		String_t* L_13;
		L_13 = String_Format_mB3D38E5238C3164DB4D7D29339D9E225A4496D17(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral5E34B980C4794FBA7B6A70F2B66E0D25426A5431)), L_12, /*hidden argument*/NULL);
		InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB * L_14 = (InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mC012CE552988309733C896F3FEA8249171E4402E(L_14, L_13, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_14, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ARKitProvider_set_library_mBBCD56DA4D9E1D8CF81D68B4272781BAE8E651E9_RuntimeMethod_var)));
	}

IL_0055:
	{
		// throw new InvalidOperationException(string.Format(
		//     "Failed to find requested image library '{0}' on ARKit - there is no matching resource group, or the resource group does not contain any reference objects.",
		//     value.name));
		XRReferenceObjectLibrary_t07704B2996E507F23EE3C99CFC3BB73A83C99A7C * L_15 = ___value0;
		NullCheck(L_15);
		String_t* L_16;
		L_16 = Object_get_name_m0C7BC870ED2F0DC5A2FB09628136CD7D1CB82CFB(L_15, /*hidden argument*/NULL);
		String_t* L_17;
		L_17 = String_Format_mB3D38E5238C3164DB4D7D29339D9E225A4496D17(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral27C9E1A43FEDCD3787CDA8261B6C0BC620D2A6A6)), L_16, /*hidden argument*/NULL);
		InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB * L_18 = (InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mC012CE552988309733C896F3FEA8249171E4402E(L_18, L_17, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_18, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ARKitProvider_set_library_mBBCD56DA4D9E1D8CF81D68B4272781BAE8E651E9_RuntimeMethod_var)));
	}

IL_006b:
	{
		// }
		return;
	}
}
// UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRTrackedObject> UnityEngine.XR.ARKit.ARKitXRObjectTrackingSubsystem/ARKitProvider::GetChanges(UnityEngine.XR.ARSubsystems.XRTrackedObject,Unity.Collections.Allocator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TrackableChanges_1_t388C13B0BF202AE5F24D0BB3AE0D672AA355E1B1  ARKitProvider_GetChanges_m814A3E352606560A3CA525DE924F1FB807C6480F (ARKitProvider_tDDBF5C474A3543A0F5FA7FB07A058B223F6DA8EC * __this, XRTrackedObject_t247BBE67D4F9308544C4BAD807F321E0C404EC58  ___defaultTrackedObject0, int32_t ___allocator1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TrackableChanges_1__ctor_m269B8E537869D288000375F719F5C5B87861E120_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	void* V_4 = NULL;
	void* V_5 = NULL;
	void* V_6 = NULL;
	void* V_7 = NULL;
	TrackableChanges_1_t388C13B0BF202AE5F24D0BB3AE0D672AA355E1B1  V_8;
	memset((&V_8), 0, sizeof(V_8));
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		// var context = UnityARKit_ObjectTracking_AcquireChanges(
		//     out addedPtr, out addedLength,
		//     out updatedPtr, out updatedLength,
		//     out removedPtr, out removedLength,
		//     out elementSize);
		void* L_0;
		L_0 = ARKitProvider_UnityARKit_ObjectTracking_AcquireChanges_mDFE62CF64E19EED60424B5744647B24F0F8EB1AD((void**)(&V_4), (int32_t*)(&V_0), (void**)(&V_5), (int32_t*)(&V_1), (void**)(&V_6), (int32_t*)(&V_2), (int32_t*)(&V_3), /*hidden argument*/NULL);
		V_7 = (void*)L_0;
	}

IL_0015:
	try
	{ // begin try (depth: 1)
		// return new TrackableChanges<XRTrackedObject>(
		//     addedPtr, addedLength,
		//     updatedPtr, updatedLength,
		//     removedPtr, removedLength,
		//     defaultTrackedObject, elementSize,
		//     allocator);
		void* L_1 = V_4;
		int32_t L_2 = V_0;
		void* L_3 = V_5;
		int32_t L_4 = V_1;
		void* L_5 = V_6;
		int32_t L_6 = V_2;
		XRTrackedObject_t247BBE67D4F9308544C4BAD807F321E0C404EC58  L_7 = ___defaultTrackedObject0;
		int32_t L_8 = V_3;
		int32_t L_9 = ___allocator1;
		TrackableChanges_1_t388C13B0BF202AE5F24D0BB3AE0D672AA355E1B1  L_10;
		memset((&L_10), 0, sizeof(L_10));
		TrackableChanges_1__ctor_m269B8E537869D288000375F719F5C5B87861E120((&L_10), (void*)(void*)L_1, L_2, (void*)(void*)L_3, L_4, (void*)(void*)L_5, L_6, L_7, L_8, L_9, /*hidden argument*/TrackableChanges_1__ctor_m269B8E537869D288000375F719F5C5B87861E120_RuntimeMethod_var);
		V_8 = L_10;
		IL2CPP_LEAVE(0x32, FINALLY_002a);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_002a;
	}

FINALLY_002a:
	{ // begin finally (depth: 1)
		// UnityARKit_ObjectTracking_ReleaseChanges(context);
		void* L_11 = V_7;
		ARKitProvider_UnityARKit_ObjectTracking_ReleaseChanges_mCECE209C0468C8D874EE2AB5816DC9F41F463D3B((void*)(void*)L_11, /*hidden argument*/NULL);
		// }
		IL2CPP_END_FINALLY(42)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(42)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x32, IL_0032)
	}

IL_0032:
	{
		// }
		TrackableChanges_1_t388C13B0BF202AE5F24D0BB3AE0D672AA355E1B1  L_12 = V_8;
		return L_12;
	}
}
// System.Void UnityEngine.XR.ARKit.ARKitXRObjectTrackingSubsystem/ARKitProvider::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARKitProvider__ctor_m2248786528E6A3EEA794A96323856A09FE4E6FD3 (ARKitProvider_tDDBF5C474A3543A0F5FA7FB07A058B223F6DA8EC * __this, const RuntimeMethod* method)
{
	{
		// public ARKitProvider() => UnityARKit_ObjectTracking_Initialize();
		Provider__ctor_m8E2A200EE478D4971BDAE03A8E40C9A0C7DBF576(__this, /*hidden argument*/NULL);
		// public ARKitProvider() => UnityARKit_ObjectTracking_Initialize();
		ARKitProvider_UnityARKit_ObjectTracking_Initialize_m2D3E9211EB013DDCC555F5B0F37C767A3C13EFA2(/*hidden argument*/NULL);
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
// System.Void UnityEngine.XR.ARKit.ARKitXRPlaneSubsystem/ARKitProvider::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARKitProvider_Start_m938492061DB431157CE3BDBFFE1DF50C216B0BA5 (ARKitProvider_tF9F620C89E671C028D10768C5300D3539661A2C1 * __this, const RuntimeMethod* method)
{
	{
		// public override void Start() =>  NativeApi.UnityARKit_Planes_Start();
		NativeApi_UnityARKit_Planes_Start_m4C09F10B50210419AD4C94177252888CE92F7B09(/*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.XR.ARKit.ARKitXRPlaneSubsystem/ARKitProvider::Stop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARKitProvider_Stop_mDE100D5EBE2E7068E68116BC8B15147253FEAF15 (ARKitProvider_tF9F620C89E671C028D10768C5300D3539661A2C1 * __this, const RuntimeMethod* method)
{
	{
		// public override void Stop() => NativeApi.UnityARKit_Planes_Stop();
		NativeApi_UnityARKit_Planes_Stop_mB41AE77A316FED65165845418F6C9B7F5397CDBE(/*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.XR.ARKit.ARKitXRPlaneSubsystem/ARKitProvider::GetBoundary(UnityEngine.XR.ARSubsystems.TrackableId,Unity.Collections.Allocator,Unity.Collections.NativeArray`1<UnityEngine.Vector2>&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARKitProvider_GetBoundary_m6947D500056E77CA9D959E9E60ABA5FC9E6F02AD (ARKitProvider_tF9F620C89E671C028D10768C5300D3539661A2C1 * __this, TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  ___trackableId0, int32_t ___allocator1, NativeArray_1_t431C85F30275831D1F5D458AB73DFCE050693BC0 * ___boundary2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IJobExtensions_Schedule_TisFlipBoundaryWindingJob_t726CFFAB953CC7C841EE74365C27322E57A2A5DA_m8E69469832F0E700BA5C13EF4E0E27930D985893_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IJobParallelForExtensions_Schedule_TisTransformBoundaryPositionsJob_t538BF69F9F744EBC94AA0487075746AD113A64FE_m2890CB8839F696FCA3C3B4EC83DD4D59F87412B3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisVector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_m48ABE60010404D61E53ED29A3DF2AB278D4888D9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Provider_CreateOrResizeNativeArrayIfNecessary_TisVector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_m2DB299A15665775F0B5BDFF92CF4FA10166B614A_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	void* V_1 = NULL;
	void* V_2 = NULL;
	JobHandle_t8AEB8D31C25D7774C71D62B0C662525E6E36D847  V_3;
	memset((&V_3), 0, sizeof(V_3));
	TransformBoundaryPositionsJob_t538BF69F9F744EBC94AA0487075746AD113A64FE  V_4;
	memset((&V_4), 0, sizeof(V_4));
	JobHandle_t8AEB8D31C25D7774C71D62B0C662525E6E36D847  V_5;
	memset((&V_5), 0, sizeof(V_5));
	FlipBoundaryWindingJob_t726CFFAB953CC7C841EE74365C27322E57A2A5DA  V_6;
	memset((&V_6), 0, sizeof(V_6));
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		// void* plane = NativeApi.UnityARKit_Planes_AcquireBoundary(
		//     trackableId,
		//     out verticesPtr,
		//     out numPoints);
		TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  L_0 = ___trackableId0;
		void* L_1;
		L_1 = NativeApi_UnityARKit_Planes_AcquireBoundary_m1AFC93AE0ADCCB51908E8643C764370B816ECAA2(L_0, (void**)(&V_1), (int32_t*)(&V_0), /*hidden argument*/NULL);
		V_2 = (void*)L_1;
	}

IL_000b:
	try
	{ // begin try (depth: 1)
		// CreateOrResizeNativeArrayIfNecessary(numPoints, allocator, ref boundary);
		int32_t L_2 = V_0;
		int32_t L_3 = ___allocator1;
		NativeArray_1_t431C85F30275831D1F5D458AB73DFCE050693BC0 * L_4 = ___boundary2;
		Provider_CreateOrResizeNativeArrayIfNecessary_TisVector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_m2DB299A15665775F0B5BDFF92CF4FA10166B614A(L_2, L_3, (NativeArray_1_t431C85F30275831D1F5D458AB73DFCE050693BC0 *)L_4, /*hidden argument*/Provider_CreateOrResizeNativeArrayIfNecessary_TisVector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_m2DB299A15665775F0B5BDFF92CF4FA10166B614A_RuntimeMethod_var);
		// var transformPositionsHandle = new TransformBoundaryPositionsJob
		// {
		//     positionsIn = NativeArrayUnsafeUtility.ConvertExistingDataToNativeArray<Vector4>(verticesPtr, numPoints, Allocator.None),
		//     positionsOut = boundary
		// }.Schedule(numPoints, 1);
		il2cpp_codegen_initobj((&V_4), sizeof(TransformBoundaryPositionsJob_t538BF69F9F744EBC94AA0487075746AD113A64FE ));
		void* L_5 = V_1;
		int32_t L_6 = V_0;
		NativeArray_1_t381CA7D92591F9C96DB84965C31AF8713A546156  L_7;
		L_7 = NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisVector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_m48ABE60010404D61E53ED29A3DF2AB278D4888D9((void*)(void*)L_5, L_6, 1, /*hidden argument*/NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisVector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_m48ABE60010404D61E53ED29A3DF2AB278D4888D9_RuntimeMethod_var);
		(&V_4)->set_positionsIn_0(L_7);
		NativeArray_1_t431C85F30275831D1F5D458AB73DFCE050693BC0 * L_8 = ___boundary2;
		NativeArray_1_t431C85F30275831D1F5D458AB73DFCE050693BC0  L_9 = (*(NativeArray_1_t431C85F30275831D1F5D458AB73DFCE050693BC0 *)L_8);
		(&V_4)->set_positionsOut_1(L_9);
		TransformBoundaryPositionsJob_t538BF69F9F744EBC94AA0487075746AD113A64FE  L_10 = V_4;
		int32_t L_11 = V_0;
		il2cpp_codegen_initobj((&V_5), sizeof(JobHandle_t8AEB8D31C25D7774C71D62B0C662525E6E36D847 ));
		JobHandle_t8AEB8D31C25D7774C71D62B0C662525E6E36D847  L_12 = V_5;
		JobHandle_t8AEB8D31C25D7774C71D62B0C662525E6E36D847  L_13;
		L_13 = IJobParallelForExtensions_Schedule_TisTransformBoundaryPositionsJob_t538BF69F9F744EBC94AA0487075746AD113A64FE_m2890CB8839F696FCA3C3B4EC83DD4D59F87412B3(L_10, L_11, 1, L_12, /*hidden argument*/IJobParallelForExtensions_Schedule_TisTransformBoundaryPositionsJob_t538BF69F9F744EBC94AA0487075746AD113A64FE_m2890CB8839F696FCA3C3B4EC83DD4D59F87412B3_RuntimeMethod_var);
		V_3 = L_13;
		// new FlipBoundaryWindingJob
		// {
		//     positions = boundary
		// }.Schedule(transformPositionsHandle).Complete();
		il2cpp_codegen_initobj((&V_6), sizeof(FlipBoundaryWindingJob_t726CFFAB953CC7C841EE74365C27322E57A2A5DA ));
		NativeArray_1_t431C85F30275831D1F5D458AB73DFCE050693BC0 * L_14 = ___boundary2;
		NativeArray_1_t431C85F30275831D1F5D458AB73DFCE050693BC0  L_15 = (*(NativeArray_1_t431C85F30275831D1F5D458AB73DFCE050693BC0 *)L_14);
		(&V_6)->set_positions_0(L_15);
		FlipBoundaryWindingJob_t726CFFAB953CC7C841EE74365C27322E57A2A5DA  L_16 = V_6;
		JobHandle_t8AEB8D31C25D7774C71D62B0C662525E6E36D847  L_17 = V_3;
		JobHandle_t8AEB8D31C25D7774C71D62B0C662525E6E36D847  L_18;
		L_18 = IJobExtensions_Schedule_TisFlipBoundaryWindingJob_t726CFFAB953CC7C841EE74365C27322E57A2A5DA_m8E69469832F0E700BA5C13EF4E0E27930D985893(L_16, L_17, /*hidden argument*/IJobExtensions_Schedule_TisFlipBoundaryWindingJob_t726CFFAB953CC7C841EE74365C27322E57A2A5DA_m8E69469832F0E700BA5C13EF4E0E27930D985893_RuntimeMethod_var);
		V_5 = L_18;
		JobHandle_Complete_m947DF01E0F87C3B0A24AECEBF72D245A6CDBE148((JobHandle_t8AEB8D31C25D7774C71D62B0C662525E6E36D847 *)(&V_5), /*hidden argument*/NULL);
		// }
		IL2CPP_LEAVE(0x7A, FINALLY_0073);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0073;
	}

FINALLY_0073:
	{ // begin finally (depth: 1)
		// NativeApi.UnityARKit_Planes_ReleaseBoundary(plane);
		void* L_19 = V_2;
		NativeApi_UnityARKit_Planes_ReleaseBoundary_m7BBCC8573ECE81635DEC9EA454FD2F92949E726D((void*)(void*)L_19, /*hidden argument*/NULL);
		// }
		IL2CPP_END_FINALLY(115)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(115)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x7A, IL_007a)
	}

IL_007a:
	{
		// }
		return;
	}
}
// UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.BoundedPlane> UnityEngine.XR.ARKit.ARKitXRPlaneSubsystem/ARKitProvider::GetChanges(UnityEngine.XR.ARSubsystems.BoundedPlane,Unity.Collections.Allocator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TrackableChanges_1_t8B0834EED4AC44A71FC9071BDA349BA9D8FE0717  ARKitProvider_GetChanges_mC4FFA0171527E7CA17D22B00FC744D16021B8AF0 (ARKitProvider_tF9F620C89E671C028D10768C5300D3539661A2C1 * __this, BoundedPlane_t9001963C43ACDF4CDEA8BBF97CD783B7969B79C5  ___defaultPlane0, int32_t ___allocator1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TrackableChanges_1__ctor_mD2CDA364CBC507E983239E807C8C6EE8D3453B42_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	void* V_4 = NULL;
	void* V_5 = NULL;
	void* V_6 = NULL;
	void* V_7 = NULL;
	TrackableChanges_1_t8B0834EED4AC44A71FC9071BDA349BA9D8FE0717  V_8;
	memset((&V_8), 0, sizeof(V_8));
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		// var context = NativeApi.UnityARKit_Planes_AcquireChanges(
		//     out addedArrayPtr, out addedLength,
		//     out updatedArrayPtr, out updatedLength,
		//     out removedArrayPtr, out removedLength,
		//     out elementSize);
		void* L_0;
		L_0 = NativeApi_UnityARKit_Planes_AcquireChanges_mAC1A778331DD752B84415A6735EA2FA2E9F67F61((void**)(&V_4), (int32_t*)(&V_0), (void**)(&V_5), (int32_t*)(&V_1), (void**)(&V_6), (int32_t*)(&V_2), (int32_t*)(&V_3), /*hidden argument*/NULL);
		V_7 = (void*)L_0;
	}

IL_0015:
	try
	{ // begin try (depth: 1)
		// return new TrackableChanges<BoundedPlane>(
		//     addedArrayPtr, addedLength,
		//     updatedArrayPtr, updatedLength,
		//     removedArrayPtr, removedLength,
		//     defaultPlane, elementSize,
		//     allocator);
		void* L_1 = V_4;
		int32_t L_2 = V_0;
		void* L_3 = V_5;
		int32_t L_4 = V_1;
		void* L_5 = V_6;
		int32_t L_6 = V_2;
		BoundedPlane_t9001963C43ACDF4CDEA8BBF97CD783B7969B79C5  L_7 = ___defaultPlane0;
		int32_t L_8 = V_3;
		int32_t L_9 = ___allocator1;
		TrackableChanges_1_t8B0834EED4AC44A71FC9071BDA349BA9D8FE0717  L_10;
		memset((&L_10), 0, sizeof(L_10));
		TrackableChanges_1__ctor_mD2CDA364CBC507E983239E807C8C6EE8D3453B42((&L_10), (void*)(void*)L_1, L_2, (void*)(void*)L_3, L_4, (void*)(void*)L_5, L_6, L_7, L_8, L_9, /*hidden argument*/TrackableChanges_1__ctor_mD2CDA364CBC507E983239E807C8C6EE8D3453B42_RuntimeMethod_var);
		V_8 = L_10;
		IL2CPP_LEAVE(0x32, FINALLY_002a);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_002a;
	}

FINALLY_002a:
	{ // begin finally (depth: 1)
		// NativeApi.UnityARKit_Planes_ReleaseChanges(context);
		void* L_11 = V_7;
		NativeApi_UnityARKit_Planes_ReleaseChanges_m55C4588490267E7189F71696755814AF1E9704DC((void*)(void*)L_11, /*hidden argument*/NULL);
		// }
		IL2CPP_END_FINALLY(42)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(42)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x32, IL_0032)
	}

IL_0032:
	{
		// }
		TrackableChanges_1_t8B0834EED4AC44A71FC9071BDA349BA9D8FE0717  L_12 = V_8;
		return L_12;
	}
}
// UnityEngine.XR.ARSubsystems.PlaneDetectionMode UnityEngine.XR.ARKit.ARKitXRPlaneSubsystem/ARKitProvider::get_requestedPlaneDetectionMode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ARKitProvider_get_requestedPlaneDetectionMode_m1EC9A425A3BE1060CD98F563610920B5B9C69939 (ARKitProvider_tF9F620C89E671C028D10768C5300D3539661A2C1 * __this, const RuntimeMethod* method)
{
	{
		// get => NativeApi.UnityARKit_Planes_GetRequestedPlaneDetectionMode();
		int32_t L_0;
		L_0 = NativeApi_UnityARKit_Planes_GetRequestedPlaneDetectionMode_mFE847650714117C4A01DD09F88DFD9E00F0DD89A(/*hidden argument*/NULL);
		return L_0;
	}
}
// System.Void UnityEngine.XR.ARKit.ARKitXRPlaneSubsystem/ARKitProvider::set_requestedPlaneDetectionMode(UnityEngine.XR.ARSubsystems.PlaneDetectionMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARKitProvider_set_requestedPlaneDetectionMode_m809BA1130FCBC827749625B811B69DACB00BF01E (ARKitProvider_tF9F620C89E671C028D10768C5300D3539661A2C1 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// set => NativeApi.UnityARKit_Planes_SetRequestedPlaneDetectionMode(value);
		int32_t L_0 = ___value0;
		NativeApi_UnityARKit_Planes_SetRequestedPlaneDetectionMode_m6DCEFBF9E9DA72B66754360B0E8E92E12A694F46(L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.XR.ARKit.ARKitXRPlaneSubsystem/ARKitProvider::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARKitProvider__ctor_m9A88CE1D87E7A82F6169551F3DFBE8D3EE9A5352 (ARKitProvider_tF9F620C89E671C028D10768C5300D3539661A2C1 * __this, const RuntimeMethod* method)
{
	{
		Provider__ctor_mDEDB208301BBA3CC96FFF2DA6AC90F5D241CE524(__this, /*hidden argument*/NULL);
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
// System.Boolean UnityEngine.XR.ARKit.ARKitXRPlaneSubsystem/NativeApi::UnityARKit_Planes_SupportsClassification()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NativeApi_UnityARKit_Planes_SupportsClassification_m038F0FACAABAF4489F01E9E52A5A632A33FF7B7E (const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) ();

	// Native function invocation
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(UnityARKit_Planes_SupportsClassification)();

	return static_cast<bool>(returnValue);
}
// System.Void UnityEngine.XR.ARKit.ARKitXRPlaneSubsystem/NativeApi::UnityARKit_Planes_Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeApi_UnityARKit_Planes_Start_m4C09F10B50210419AD4C94177252888CE92F7B09 (const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) ();

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(UnityARKit_Planes_Start)();

}
// System.Void UnityEngine.XR.ARKit.ARKitXRPlaneSubsystem/NativeApi::UnityARKit_Planes_Stop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeApi_UnityARKit_Planes_Stop_mB41AE77A316FED65165845418F6C9B7F5397CDBE (const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) ();

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(UnityARKit_Planes_Stop)();

}
// System.Void* UnityEngine.XR.ARKit.ARKitXRPlaneSubsystem/NativeApi::UnityARKit_Planes_AcquireChanges(System.Void*&,System.Int32&,System.Void*&,System.Int32&,System.Void*&,System.Int32&,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* NativeApi_UnityARKit_Planes_AcquireChanges_mAC1A778331DD752B84415A6735EA2FA2E9F67F61 (void** ___addedPtr0, int32_t* ___addedLength1, void** ___updatedPtr2, int32_t* ___updatedLength3, void** ___removedPtr4, int32_t* ___removedLength5, int32_t* ___elementSize6, const RuntimeMethod* method)
{
	typedef void* (DEFAULT_CALL *PInvokeFunc) (void**, int32_t*, void**, int32_t*, void**, int32_t*, int32_t*);

	// Marshaling of parameter '___addedPtr0' to native representation
	void* ____addedPtr0_empty = NULL;
	void** ____addedPtr0_marshaled = &____addedPtr0_empty;

	// Marshaling of parameter '___updatedPtr2' to native representation
	void* ____updatedPtr2_empty = NULL;
	void** ____updatedPtr2_marshaled = &____updatedPtr2_empty;

	// Marshaling of parameter '___removedPtr4' to native representation
	void* ____removedPtr4_empty = NULL;
	void** ____removedPtr4_marshaled = &____removedPtr4_empty;

	// Native function invocation
	void* returnValue = reinterpret_cast<PInvokeFunc>(UnityARKit_Planes_AcquireChanges)(____addedPtr0_marshaled, ___addedLength1, ____updatedPtr2_marshaled, ___updatedLength3, ____removedPtr4_marshaled, ___removedLength5, ___elementSize6);

	// Marshaling of parameter '___addedPtr0' back from native representation
	void* _____addedPtr0_marshaled_unmarshaled_dereferenced = NULL;
	_____addedPtr0_marshaled_unmarshaled_dereferenced = *____addedPtr0_marshaled;
	*___addedPtr0 = _____addedPtr0_marshaled_unmarshaled_dereferenced;

	// Marshaling of parameter '___updatedPtr2' back from native representation
	void* _____updatedPtr2_marshaled_unmarshaled_dereferenced = NULL;
	_____updatedPtr2_marshaled_unmarshaled_dereferenced = *____updatedPtr2_marshaled;
	*___updatedPtr2 = _____updatedPtr2_marshaled_unmarshaled_dereferenced;

	// Marshaling of parameter '___removedPtr4' back from native representation
	void* _____removedPtr4_marshaled_unmarshaled_dereferenced = NULL;
	_____removedPtr4_marshaled_unmarshaled_dereferenced = *____removedPtr4_marshaled;
	*___removedPtr4 = _____removedPtr4_marshaled_unmarshaled_dereferenced;

	return returnValue;
}
// System.Void UnityEngine.XR.ARKit.ARKitXRPlaneSubsystem/NativeApi::UnityARKit_Planes_ReleaseChanges(System.Void*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeApi_UnityARKit_Planes_ReleaseChanges_m55C4588490267E7189F71696755814AF1E9704DC (void* ___changes0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (void*);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(UnityARKit_Planes_ReleaseChanges)(___changes0);

}
// UnityEngine.XR.ARSubsystems.PlaneDetectionMode UnityEngine.XR.ARKit.ARKitXRPlaneSubsystem/NativeApi::UnityARKit_Planes_GetRequestedPlaneDetectionMode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeApi_UnityARKit_Planes_GetRequestedPlaneDetectionMode_mFE847650714117C4A01DD09F88DFD9E00F0DD89A (const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) ();

	// Native function invocation
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(UnityARKit_Planes_GetRequestedPlaneDetectionMode)();

	return returnValue;
}
// System.Void UnityEngine.XR.ARKit.ARKitXRPlaneSubsystem/NativeApi::UnityARKit_Planes_SetRequestedPlaneDetectionMode(UnityEngine.XR.ARSubsystems.PlaneDetectionMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeApi_UnityARKit_Planes_SetRequestedPlaneDetectionMode_m6DCEFBF9E9DA72B66754360B0E8E92E12A694F46 (int32_t ___mode0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (int32_t);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(UnityARKit_Planes_SetRequestedPlaneDetectionMode)(___mode0);

}
// System.Void* UnityEngine.XR.ARKit.ARKitXRPlaneSubsystem/NativeApi::UnityARKit_Planes_AcquireBoundary(UnityEngine.XR.ARSubsystems.TrackableId,System.Void*&,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* NativeApi_UnityARKit_Planes_AcquireBoundary_m1AFC93AE0ADCCB51908E8643C764370B816ECAA2 (TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  ___trackableId0, void** ___verticiesPtr1, int32_t* ___numPoints2, const RuntimeMethod* method)
{
	typedef void* (DEFAULT_CALL *PInvokeFunc) (TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B , void**, int32_t*);

	// Marshaling of parameter '___verticiesPtr1' to native representation
	void* ____verticiesPtr1_empty = NULL;
	void** ____verticiesPtr1_marshaled = &____verticiesPtr1_empty;

	// Native function invocation
	void* returnValue = reinterpret_cast<PInvokeFunc>(UnityARKit_Planes_AcquireBoundary)(___trackableId0, ____verticiesPtr1_marshaled, ___numPoints2);

	// Marshaling of parameter '___verticiesPtr1' back from native representation
	void* _____verticiesPtr1_marshaled_unmarshaled_dereferenced = NULL;
	_____verticiesPtr1_marshaled_unmarshaled_dereferenced = *____verticiesPtr1_marshaled;
	*___verticiesPtr1 = _____verticiesPtr1_marshaled_unmarshaled_dereferenced;

	return returnValue;
}
// System.Void UnityEngine.XR.ARKit.ARKitXRPlaneSubsystem/NativeApi::UnityARKit_Planes_ReleaseBoundary(System.Void*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeApi_UnityARKit_Planes_ReleaseBoundary_m7BBCC8573ECE81635DEC9EA454FD2F92949E726D (void* ___boundary0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (void*);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(UnityARKit_Planes_ReleaseBoundary)(___boundary0);

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
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_OnAsyncConversionCompleteDelegate_tFE6205610918E7A87E7867F879A863FD2FE8ECDF (OnAsyncConversionCompleteDelegate_tFE6205610918E7A87E7867F879A863FD2FE8ECDF * __this, int32_t ___status0, int32_t ___worldMapId1, intptr_t ___context2, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(int32_t, int32_t, intptr_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Native function invocation
	il2cppPInvokeFunc(___status0, ___worldMapId1, ___context2);

}
// System.Void UnityEngine.XR.ARKit.ARKitSessionSubsystem/NativeApi/OnAsyncConversionCompleteDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnAsyncConversionCompleteDelegate__ctor_m7CA5713A91DE5942CF727FBB3C771DDE3D563DCD (OnAsyncConversionCompleteDelegate_tFE6205610918E7A87E7867F879A863FD2FE8ECDF * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void UnityEngine.XR.ARKit.ARKitSessionSubsystem/NativeApi/OnAsyncConversionCompleteDelegate::Invoke(UnityEngine.XR.ARKit.ARWorldMapRequestStatus,System.Int32,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnAsyncConversionCompleteDelegate_Invoke_mFDF0A548B044CCCEF78EAD7A1900E796FEF85157 (OnAsyncConversionCompleteDelegate_tFE6205610918E7A87E7867F879A863FD2FE8ECDF * __this, int32_t ___status0, int32_t ___worldMapId1, intptr_t ___context2, const RuntimeMethod* method)
{
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 3)
			{
				// open
				typedef void (*FunctionPointerType) (int32_t, int32_t, intptr_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___status0, ___worldMapId1, ___context2, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, int32_t, int32_t, intptr_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___status0, ___worldMapId1, ___context2, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker3< int32_t, int32_t, intptr_t >::Invoke(targetMethod, targetThis, ___status0, ___worldMapId1, ___context2);
					else
						GenericVirtActionInvoker3< int32_t, int32_t, intptr_t >::Invoke(targetMethod, targetThis, ___status0, ___worldMapId1, ___context2);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker3< int32_t, int32_t, intptr_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___status0, ___worldMapId1, ___context2);
					else
						VirtActionInvoker3< int32_t, int32_t, intptr_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___status0, ___worldMapId1, ___context2);
				}
			}
			else
			{
				if (targetThis == NULL)
				{
					typedef void (*FunctionPointerType) (RuntimeObject*, int32_t, intptr_t, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)((RuntimeObject*)(reinterpret_cast<RuntimeObject*>(&___status0) - 1), ___worldMapId1, ___context2, targetMethod);
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, int32_t, int32_t, intptr_t, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___status0, ___worldMapId1, ___context2, targetMethod);
				}
			}
		}
	}
}
// System.IAsyncResult UnityEngine.XR.ARKit.ARKitSessionSubsystem/NativeApi/OnAsyncConversionCompleteDelegate::BeginInvoke(UnityEngine.XR.ARKit.ARWorldMapRequestStatus,System.Int32,System.IntPtr,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* OnAsyncConversionCompleteDelegate_BeginInvoke_m1EC36D53A7DC1993A903531DB58DA3DE00A9B0FC (OnAsyncConversionCompleteDelegate_tFE6205610918E7A87E7867F879A863FD2FE8ECDF * __this, int32_t ___status0, int32_t ___worldMapId1, intptr_t ___context2, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback3, RuntimeObject * ___object4, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ARWorldMapRequestStatus_t9A2ABBA3D64593F57CCFC959D7D294CE5E54E73C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[4] = {0};
	__d_args[0] = Box(ARWorldMapRequestStatus_t9A2ABBA3D64593F57CCFC959D7D294CE5E54E73C_il2cpp_TypeInfo_var, &___status0);
	__d_args[1] = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &___worldMapId1);
	__d_args[2] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___context2);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback3, (RuntimeObject*)___object4);;
}
// System.Void UnityEngine.XR.ARKit.ARKitSessionSubsystem/NativeApi/OnAsyncConversionCompleteDelegate::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnAsyncConversionCompleteDelegate_EndInvoke_m466A0B7C15378A687F6A112044253752C9D887B9 (OnAsyncConversionCompleteDelegate_tFE6205610918E7A87E7867F879A863FD2FE8ECDF * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
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
// System.Void UnityEngine.XR.ARKit.ARKitXRPlaneSubsystem/ARKitProvider/FlipBoundaryWindingJob::Execute()
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void FlipBoundaryWindingJob_Execute_m1B890B66AFCDE4172FE7B5486839623FE89B520F (FlipBoundaryWindingJob_t726CFFAB953CC7C841EE74365C27322E57A2A5DA * IL2CPP_PARAMETER_RESTRICT __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  V_3;
	memset((&V_3), 0, sizeof(V_3));
	{
		// var half = positions.Length / 2;
		NativeArray_1_t431C85F30275831D1F5D458AB73DFCE050693BC0 * L_0 = __this->get_address_of_positions_0();
		int32_t L_1;
		L_1 = IL2CPP_NATIVEARRAY_GET_LENGTH(((NativeArray_1_t431C85F30275831D1F5D458AB73DFCE050693BC0 *)L_0)->___m_Length_1);
		V_0 = ((int32_t)((int32_t)L_1/(int32_t)2));
		// for (int i = 0; i < half; ++i)
		V_1 = 0;
		goto IL_0058;
	}

IL_0012:
	{
		// var j = positions.Length - 1 - i;
		NativeArray_1_t431C85F30275831D1F5D458AB73DFCE050693BC0 * L_2 = __this->get_address_of_positions_0();
		int32_t L_3;
		L_3 = IL2CPP_NATIVEARRAY_GET_LENGTH(((NativeArray_1_t431C85F30275831D1F5D458AB73DFCE050693BC0 *)L_2)->___m_Length_1);
		int32_t L_4 = V_1;
		V_2 = ((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_3, (int32_t)1)), (int32_t)L_4));
		// var temp = positions[i];
		NativeArray_1_t431C85F30275831D1F5D458AB73DFCE050693BC0 * L_5 = __this->get_address_of_positions_0();
		int32_t L_6 = V_1;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_7;
		L_7 = IL2CPP_NATIVEARRAY_GET_ITEM(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 , ((NativeArray_1_t431C85F30275831D1F5D458AB73DFCE050693BC0 *)L_5)->___m_Buffer_0, L_6);
		V_3 = L_7;
		// positions[i] = positions[j];
		NativeArray_1_t431C85F30275831D1F5D458AB73DFCE050693BC0 * L_8 = __this->get_address_of_positions_0();
		int32_t L_9 = V_1;
		NativeArray_1_t431C85F30275831D1F5D458AB73DFCE050693BC0 * L_10 = __this->get_address_of_positions_0();
		int32_t L_11 = V_2;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_12;
		L_12 = IL2CPP_NATIVEARRAY_GET_ITEM(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 , ((NativeArray_1_t431C85F30275831D1F5D458AB73DFCE050693BC0 *)L_10)->___m_Buffer_0, L_11);
		IL2CPP_NATIVEARRAY_SET_ITEM(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 , ((NativeArray_1_t431C85F30275831D1F5D458AB73DFCE050693BC0 *)L_8)->___m_Buffer_0, L_9, (L_12));
		// positions[j] = temp;
		NativeArray_1_t431C85F30275831D1F5D458AB73DFCE050693BC0 * L_13 = __this->get_address_of_positions_0();
		int32_t L_14 = V_2;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_15 = V_3;
		IL2CPP_NATIVEARRAY_SET_ITEM(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 , ((NativeArray_1_t431C85F30275831D1F5D458AB73DFCE050693BC0 *)L_13)->___m_Buffer_0, L_14, (L_15));
		// for (int i = 0; i < half; ++i)
		int32_t L_16 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_16, (int32_t)1));
	}

IL_0058:
	{
		// for (int i = 0; i < half; ++i)
		int32_t L_17 = V_1;
		int32_t L_18 = V_0;
		if ((((int32_t)L_17) < ((int32_t)L_18)))
		{
			goto IL_0012;
		}
	}
	{
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void FlipBoundaryWindingJob_Execute_m1B890B66AFCDE4172FE7B5486839623FE89B520F_AdjustorThunk (RuntimeObject * IL2CPP_PARAMETER_RESTRICT __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	FlipBoundaryWindingJob_t726CFFAB953CC7C841EE74365C27322E57A2A5DA * _thisAdjusted = reinterpret_cast<FlipBoundaryWindingJob_t726CFFAB953CC7C841EE74365C27322E57A2A5DA *>(__this + _offset);
	FlipBoundaryWindingJob_Execute_m1B890B66AFCDE4172FE7B5486839623FE89B520F(_thisAdjusted, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.XR.ARKit.ARKitXRPlaneSubsystem/ARKitProvider/TransformBoundaryPositionsJob::Execute(System.Int32)
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void TransformBoundaryPositionsJob_Execute_m4550D5EF8FB5A54ECFC43502835F7FA5EEB661CF (TransformBoundaryPositionsJob_t538BF69F9F744EBC94AA0487075746AD113A64FE * IL2CPP_PARAMETER_RESTRICT __this, int32_t ___index0, const RuntimeMethod* method)
{
	{
		// positionsOut[index] = new Vector2(
		//     // NB: https://developer.apple.com/documentation/arkit/arplanegeometry/2941052-boundaryvertices?language=objc
		//     // "The owning plane anchor's transform matrix defines the coordinate system for these points."
		//     // It doesn't explicitly state the y component is zero, but that must be the case if the
		//     // boundary points are in plane-space. Emperically, it has been true for horizontal and vertical planes.
		//     // This IS explicitly true for the extents (see above) and would follow the same logic.
		//     //
		//     // Boundary vertices are in right-handed coordinates and clockwise winding order. To convert
		//     // to left-handed, we flip the Z coordinate, but that also flips the winding, so we have to
		//     // flip the winding back to clockwise by reversing the polygon index (j).
		//      positionsIn[index].x,
		//     -positionsIn[index].z);
		NativeArray_1_t431C85F30275831D1F5D458AB73DFCE050693BC0 * L_0 = __this->get_address_of_positionsOut_1();
		int32_t L_1 = ___index0;
		NativeArray_1_t381CA7D92591F9C96DB84965C31AF8713A546156 * L_2 = __this->get_address_of_positionsIn_0();
		int32_t L_3 = ___index0;
		Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  L_4;
		L_4 = IL2CPP_NATIVEARRAY_GET_ITEM(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 , ((NativeArray_1_t381CA7D92591F9C96DB84965C31AF8713A546156 *)L_2)->___m_Buffer_0, L_3);
		float L_5 = L_4.get_x_1();
		NativeArray_1_t381CA7D92591F9C96DB84965C31AF8713A546156 * L_6 = __this->get_address_of_positionsIn_0();
		int32_t L_7 = ___index0;
		Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  L_8;
		L_8 = IL2CPP_NATIVEARRAY_GET_ITEM(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 , ((NativeArray_1_t381CA7D92591F9C96DB84965C31AF8713A546156 *)L_6)->___m_Buffer_0, L_7);
		float L_9 = L_8.get_z_3();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_10;
		memset((&L_10), 0, sizeof(L_10));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_10), L_5, ((-L_9)), /*hidden argument*/NULL);
		IL2CPP_NATIVEARRAY_SET_ITEM(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 , ((NativeArray_1_t431C85F30275831D1F5D458AB73DFCE050693BC0 *)L_0)->___m_Buffer_0, L_1, (L_10));
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void TransformBoundaryPositionsJob_Execute_m4550D5EF8FB5A54ECFC43502835F7FA5EEB661CF_AdjustorThunk (RuntimeObject * IL2CPP_PARAMETER_RESTRICT __this, int32_t ___index0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	TransformBoundaryPositionsJob_t538BF69F9F744EBC94AA0487075746AD113A64FE * _thisAdjusted = reinterpret_cast<TransformBoundaryPositionsJob_t538BF69F9F744EBC94AA0487075746AD113A64FE *>(__this + _offset);
	TransformBoundaryPositionsJob_Execute_m4550D5EF8FB5A54ECFC43502835F7FA5EEB661CF(_thisAdjusted, ___index0, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Cinfo_set_id_mCB169DF169C36D9D12651785DCBF71ABCC10FD9D_inline (Cinfo_tF42131D7F2B721976AAF20DD0240D9C46397F7F7 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		// public string id { get; set; }
		String_t* L_0 = ___value0;
		__this->set_U3CidU3Ek__BackingField_0(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Cinfo_set_providerType_m9E012FF4CD325826F838F663BAEE045C452A3C26_inline (Cinfo_tF42131D7F2B721976AAF20DD0240D9C46397F7F7 * __this, Type_t * ___value0, const RuntimeMethod* method)
{
	{
		// public Type providerType { get; set; }
		Type_t * L_0 = ___value0;
		__this->set_U3CproviderTypeU3Ek__BackingField_1(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Cinfo_set_subsystemTypeOverride_mC525A48B08F8F826275950FFB61C780C4AEA6A6B_inline (Cinfo_tF42131D7F2B721976AAF20DD0240D9C46397F7F7 * __this, Type_t * ___value0, const RuntimeMethod* method)
{
	{
		// public Type subsystemTypeOverride { get; set; }
		Type_t * L_0 = ___value0;
		__this->set_U3CsubsystemTypeOverrideU3Ek__BackingField_2(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Cinfo_set_supportsTrackableAttachments_m0B0516A50FFA22C3F60483E3498DC6BB1D460995_inline (Cinfo_tF42131D7F2B721976AAF20DD0240D9C46397F7F7 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool supportsTrackableAttachments { get; set; }
		bool L_0 = ___value0;
		__this->set_U3CsupportsTrackableAttachmentsU3Ek__BackingField_4(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void XRCameraSubsystemCinfo_set_id_m768994793A205C7D5CE603B354D350A34D47720D_inline (XRCameraSubsystemCinfo_tFC7E8E15AD29D15868FBCE758A26ADCB5E9A5096 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		// public string id { get; set; }
		String_t* L_0 = ___value0;
		__this->set_U3CidU3Ek__BackingField_0(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void XRCameraSubsystemCinfo_set_providerType_m78F56C5CEF9FF62F60DE6073B8AD0FB0AFD00730_inline (XRCameraSubsystemCinfo_tFC7E8E15AD29D15868FBCE758A26ADCB5E9A5096 * __this, Type_t * ___value0, const RuntimeMethod* method)
{
	{
		// public Type providerType { get; set; }
		Type_t * L_0 = ___value0;
		__this->set_U3CproviderTypeU3Ek__BackingField_1(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void XRCameraSubsystemCinfo_set_subsystemTypeOverride_mD4D22BB1EC102CA40AF084B06DA3C957139EF2D4_inline (XRCameraSubsystemCinfo_tFC7E8E15AD29D15868FBCE758A26ADCB5E9A5096 * __this, Type_t * ___value0, const RuntimeMethod* method)
{
	{
		// public Type subsystemTypeOverride { get; set; }
		Type_t * L_0 = ___value0;
		__this->set_U3CsubsystemTypeOverrideU3Ek__BackingField_2(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void XRCameraSubsystemCinfo_set_supportsAverageBrightness_mC20A88BD3C8D137A1F34888C64DC5FFF37787759_inline (XRCameraSubsystemCinfo_tFC7E8E15AD29D15868FBCE758A26ADCB5E9A5096 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool supportsAverageBrightness { get; set; }
		bool L_0 = ___value0;
		__this->set_U3CsupportsAverageBrightnessU3Ek__BackingField_4(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void XRCameraSubsystemCinfo_set_supportsAverageColorTemperature_m77727C8CBAB59D0D078B0A634EB0A56F1BF368E4_inline (XRCameraSubsystemCinfo_tFC7E8E15AD29D15868FBCE758A26ADCB5E9A5096 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool supportsAverageColorTemperature { get; set; }
		bool L_0 = ___value0;
		__this->set_U3CsupportsAverageColorTemperatureU3Ek__BackingField_5(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void XRCameraSubsystemCinfo_set_supportsColorCorrection_m1CBB9181A21D2A964705AD5E22F78735DCFE2C01_inline (XRCameraSubsystemCinfo_tFC7E8E15AD29D15868FBCE758A26ADCB5E9A5096 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool supportsColorCorrection { get; set; }
		bool L_0 = ___value0;
		__this->set_U3CsupportsColorCorrectionU3Ek__BackingField_6(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void XRCameraSubsystemCinfo_set_supportsDisplayMatrix_m2E11C0B7442273252613BDB41BB8B6F02698FBEA_inline (XRCameraSubsystemCinfo_tFC7E8E15AD29D15868FBCE758A26ADCB5E9A5096 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool supportsDisplayMatrix { get; set; }
		bool L_0 = ___value0;
		__this->set_U3CsupportsDisplayMatrixU3Ek__BackingField_7(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void XRCameraSubsystemCinfo_set_supportsProjectionMatrix_mFC886F8859FDF308D7980935474AA0E66ECF66B4_inline (XRCameraSubsystemCinfo_tFC7E8E15AD29D15868FBCE758A26ADCB5E9A5096 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool supportsProjectionMatrix { get; set; }
		bool L_0 = ___value0;
		__this->set_U3CsupportsProjectionMatrixU3Ek__BackingField_8(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void XRCameraSubsystemCinfo_set_supportsTimestamp_mAA6157EC368F6358F155571E257A578729D368D4_inline (XRCameraSubsystemCinfo_tFC7E8E15AD29D15868FBCE758A26ADCB5E9A5096 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool supportsTimestamp { get; set; }
		bool L_0 = ___value0;
		__this->set_U3CsupportsTimestampU3Ek__BackingField_9(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void XRCameraSubsystemCinfo_set_supportsCameraConfigurations_mD0F431DDAB4F82DDC6E35AB7583572D25244E0F0_inline (XRCameraSubsystemCinfo_tFC7E8E15AD29D15868FBCE758A26ADCB5E9A5096 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool supportsCameraConfigurations { get; set; }
		bool L_0 = ___value0;
		__this->set_U3CsupportsCameraConfigurationsU3Ek__BackingField_10(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void XRCameraSubsystemCinfo_set_supportsCameraImage_m2140EBB7ACEA9B1634F56DE2DCB85F26CB8C4D7D_inline (XRCameraSubsystemCinfo_tFC7E8E15AD29D15868FBCE758A26ADCB5E9A5096 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool supportsCameraImage { get; set; }
		bool L_0 = ___value0;
		__this->set_U3CsupportsCameraImageU3Ek__BackingField_11(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void XRCameraSubsystemCinfo_set_supportsAverageIntensityInLumens_m49462C178EF35B3E688EE6711FD3E41E9C1976AB_inline (XRCameraSubsystemCinfo_tFC7E8E15AD29D15868FBCE758A26ADCB5E9A5096 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool supportsAverageIntensityInLumens { get; set; }
		bool L_0 = ___value0;
		__this->set_U3CsupportsAverageIntensityInLumensU3Ek__BackingField_12(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void XRCameraSubsystemCinfo_set_supportsFocusModes_m2F70E7EFC54E2F930DEA28DC4922125E01FE3026_inline (XRCameraSubsystemCinfo_tFC7E8E15AD29D15868FBCE758A26ADCB5E9A5096 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool supportsFocusModes { get; set; }
		bool L_0 = ___value0;
		__this->set_U3CsupportsFocusModesU3Ek__BackingField_17(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void XRCameraSubsystemCinfo_set_supportsFaceTrackingAmbientIntensityLightEstimation_m93740733F66607C53F3928946A79CE732EAF9EF9_inline (XRCameraSubsystemCinfo_tFC7E8E15AD29D15868FBCE758A26ADCB5E9A5096 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool supportsFaceTrackingAmbientIntensityLightEstimation { get; set; }
		bool L_0 = ___value0;
		__this->set_U3CsupportsFaceTrackingAmbientIntensityLightEstimationU3Ek__BackingField_13(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void XRCameraSubsystemCinfo_set_supportsFaceTrackingHDRLightEstimation_mD76A9A9A127118388FBD2E971246303BB2BE0F0C_inline (XRCameraSubsystemCinfo_tFC7E8E15AD29D15868FBCE758A26ADCB5E9A5096 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool supportsFaceTrackingHDRLightEstimation { get; set; }
		bool L_0 = ___value0;
		__this->set_U3CsupportsFaceTrackingHDRLightEstimationU3Ek__BackingField_14(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void XRCameraSubsystemCinfo_set_supportsWorldTrackingAmbientIntensityLightEstimation_mE9B47A05DA11B6C6FFCB6FFED773ADB464130C5B_inline (XRCameraSubsystemCinfo_tFC7E8E15AD29D15868FBCE758A26ADCB5E9A5096 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool supportsWorldTrackingAmbientIntensityLightEstimation { get; set; }
		bool L_0 = ___value0;
		__this->set_U3CsupportsWorldTrackingAmbientIntensityLightEstimationU3Ek__BackingField_15(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void XRCameraSubsystemCinfo_set_supportsWorldTrackingHDRLightEstimation_m92AC9270D4D5FA4C61ED353406511B3877E5D9D4_inline (XRCameraSubsystemCinfo_tFC7E8E15AD29D15868FBCE758A26ADCB5E9A5096 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool supportsWorldTrackingHDRLightEstimation { get; set; }
		bool L_0 = ___value0;
		__this->set_U3CsupportsWorldTrackingHDRLightEstimationU3Ek__BackingField_16(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void XRCameraSubsystemCinfo_set_supportsCameraGrain_m8BF26C263FED0D5106C436091BD8C25BFF8FD755_inline (XRCameraSubsystemCinfo_tFC7E8E15AD29D15868FBCE758A26ADCB5E9A5096 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool supportsCameraGrain { get; set; }
		bool L_0 = ___value0;
		__this->set_U3CsupportsCameraGrainU3Ek__BackingField_18(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void XREnvironmentProbeSubsystemCinfo_set_id_m5C48BD3E879410D5C622BE7DC74D5C798E151731_inline (XREnvironmentProbeSubsystemCinfo_t6D9368EC95B6B356A67B7289270F27BB6A4440B2 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		// public string id { get; set; }
		String_t* L_0 = ___value0;
		__this->set_U3CidU3Ek__BackingField_0(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void XREnvironmentProbeSubsystemCinfo_set_providerType_m70C42D1F210DE19AB5E7D82F2D0BDB467E94FC2F_inline (XREnvironmentProbeSubsystemCinfo_t6D9368EC95B6B356A67B7289270F27BB6A4440B2 * __this, Type_t * ___value0, const RuntimeMethod* method)
{
	{
		// public Type providerType { get; set; }
		Type_t * L_0 = ___value0;
		__this->set_U3CproviderTypeU3Ek__BackingField_1(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void XREnvironmentProbeSubsystemCinfo_set_subsystemTypeOverride_mB35BB7FC1C0C42E0A7773365C147F539E7AC27EE_inline (XREnvironmentProbeSubsystemCinfo_t6D9368EC95B6B356A67B7289270F27BB6A4440B2 * __this, Type_t * ___value0, const RuntimeMethod* method)
{
	{
		// public Type subsystemTypeOverride { get; set; }
		Type_t * L_0 = ___value0;
		__this->set_U3CsubsystemTypeOverrideU3Ek__BackingField_2(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void XREnvironmentProbeSubsystemCinfo_set_supportsManualPlacement_m2D1156DE760E47CBDDC345AD5CAE5D23AC23E524_inline (XREnvironmentProbeSubsystemCinfo_t6D9368EC95B6B356A67B7289270F27BB6A4440B2 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool supportsManualPlacement { get; set; }
		bool L_0 = ___value0;
		__this->set_U3CsupportsManualPlacementU3Ek__BackingField_4(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void XREnvironmentProbeSubsystemCinfo_set_supportsRemovalOfManual_m01CE117FEA37EE9BEF79903754E396C35B859419_inline (XREnvironmentProbeSubsystemCinfo_t6D9368EC95B6B356A67B7289270F27BB6A4440B2 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool supportsRemovalOfManual { get; set; }
		bool L_0 = ___value0;
		__this->set_U3CsupportsRemovalOfManualU3Ek__BackingField_5(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void XREnvironmentProbeSubsystemCinfo_set_supportsAutomaticPlacement_mC4DBFBBD4DBB44D6B1154C4759A3175F9AC33D46_inline (XREnvironmentProbeSubsystemCinfo_t6D9368EC95B6B356A67B7289270F27BB6A4440B2 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool supportsAutomaticPlacement { get; set; }
		bool L_0 = ___value0;
		__this->set_U3CsupportsAutomaticPlacementU3Ek__BackingField_6(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void XREnvironmentProbeSubsystemCinfo_set_supportsRemovalOfAutomatic_m6FCC1E3ACDC01E4447E385A1B89C96DEE16B7EF2_inline (XREnvironmentProbeSubsystemCinfo_t6D9368EC95B6B356A67B7289270F27BB6A4440B2 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool supportsRemovalOfAutomatic { get; set; }
		bool L_0 = ___value0;
		__this->set_U3CsupportsRemovalOfAutomaticU3Ek__BackingField_7(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void XREnvironmentProbeSubsystemCinfo_set_supportsEnvironmentTexture_mE30B73C6AC37C6DF8F5B7DBDBC90A975A498D3E4_inline (XREnvironmentProbeSubsystemCinfo_t6D9368EC95B6B356A67B7289270F27BB6A4440B2 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool supportsEnvironmentTexture { get; set; }
		bool L_0 = ___value0;
		__this->set_U3CsupportsEnvironmentTextureU3Ek__BackingField_8(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void XREnvironmentProbeSubsystemCinfo_set_supportsEnvironmentTextureHDR_mA465A23A4DC052895F8F634892B7C8E3A49F4777_inline (XREnvironmentProbeSubsystemCinfo_t6D9368EC95B6B356A67B7289270F27BB6A4440B2 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool supportsEnvironmentTextureHDR { get; set; }
		bool L_0 = ___value0;
		__this->set_U3CsupportsEnvironmentTextureHDRU3Ek__BackingField_9(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void XRHumanBodySubsystemCinfo_set_id_m379B96A2CE563FFD6CAC41112068975C8875B3A7_inline (XRHumanBodySubsystemCinfo_tAFFD9EF9197B51AA2EAC628F54C90C842B7E54CC * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		// public string id { get; set; }
		String_t* L_0 = ___value0;
		__this->set_U3CidU3Ek__BackingField_0(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void XRHumanBodySubsystemCinfo_set_providerType_mA34C98EF6EDDFADFF83C4062C0AF33F3C7BA61A5_inline (XRHumanBodySubsystemCinfo_tAFFD9EF9197B51AA2EAC628F54C90C842B7E54CC * __this, Type_t * ___value0, const RuntimeMethod* method)
{
	{
		// public Type providerType { get; set; }
		Type_t * L_0 = ___value0;
		__this->set_U3CproviderTypeU3Ek__BackingField_1(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void XRHumanBodySubsystemCinfo_set_subsystemTypeOverride_m73A633BECC2393CEB62B95FCF9CD7B32BFDB19FF_inline (XRHumanBodySubsystemCinfo_tAFFD9EF9197B51AA2EAC628F54C90C842B7E54CC * __this, Type_t * ___value0, const RuntimeMethod* method)
{
	{
		// public Type subsystemTypeOverride { get; set; }
		Type_t * L_0 = ___value0;
		__this->set_U3CsubsystemTypeOverrideU3Ek__BackingField_2(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void XRHumanBodySubsystemCinfo_set_supportsHumanBody2D_m33B2A01C8E5F61DFE604BDCD2D438EC0B3C45551_inline (XRHumanBodySubsystemCinfo_tAFFD9EF9197B51AA2EAC628F54C90C842B7E54CC * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool supportsHumanBody2D { get; set; }
		bool L_0 = ___value0;
		__this->set_U3CsupportsHumanBody2DU3Ek__BackingField_4(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void XRHumanBodySubsystemCinfo_set_supportsHumanBody3D_mE30720F10B501314868ABDBE2EDCE11D0A333D24_inline (XRHumanBodySubsystemCinfo_tAFFD9EF9197B51AA2EAC628F54C90C842B7E54CC * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool supportsHumanBody3D { get; set; }
		bool L_0 = ___value0;
		__this->set_U3CsupportsHumanBody3DU3Ek__BackingField_5(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void XRHumanBodySubsystemCinfo_set_supportsHumanBody3DScaleEstimation_m72411E882EB28AB5BD33F4D266918FA3DB355782_inline (XRHumanBodySubsystemCinfo_tAFFD9EF9197B51AA2EAC628F54C90C842B7E54CC * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool supportsHumanBody3DScaleEstimation { get; set; }
		bool L_0 = ___value0;
		__this->set_U3CsupportsHumanBody3DScaleEstimationU3Ek__BackingField_6(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Cinfo_set_id_m57970CF355AB638BAD860B9673F0E76B42126C1A_inline (Cinfo_tED92D7CBD16BE657927A6B7DB64A22DA21EB7D32 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		// public string id { get; set; }
		String_t* L_0 = ___value0;
		__this->set_U3CidU3Ek__BackingField_0(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Cinfo_set_providerType_mCACA6EC48AB4B305E1515A312B32DC196AD9B92C_inline (Cinfo_tED92D7CBD16BE657927A6B7DB64A22DA21EB7D32 * __this, Type_t * ___value0, const RuntimeMethod* method)
{
	{
		// public Type providerType { get; set; }
		Type_t * L_0 = ___value0;
		__this->set_U3CproviderTypeU3Ek__BackingField_1(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Cinfo_set_subsystemTypeOverride_m167DE9461D1FE4E4D8AB0EE25A7A4B0A947151D8_inline (Cinfo_tED92D7CBD16BE657927A6B7DB64A22DA21EB7D32 * __this, Type_t * ___value0, const RuntimeMethod* method)
{
	{
		// public Type subsystemTypeOverride { get; set; }
		Type_t * L_0 = ___value0;
		__this->set_U3CsubsystemTypeOverrideU3Ek__BackingField_2(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Cinfo_set_supportsMovingImages_m04BB57385FC0A2025414437DB1BEFBE97372E579_inline (Cinfo_tED92D7CBD16BE657927A6B7DB64A22DA21EB7D32 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool supportsMovingImages { get; set; }
		bool L_0 = ___value0;
		__this->set_U3CsupportsMovingImagesU3Ek__BackingField_4(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Cinfo_set_supportsMutableLibrary_m434D9A05D0025989AA711BA50139FD348D127661_inline (Cinfo_tED92D7CBD16BE657927A6B7DB64A22DA21EB7D32 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool supportsMutableLibrary { get; set; }
		bool L_0 = ___value0;
		__this->set_U3CsupportsMutableLibraryU3Ek__BackingField_6(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Cinfo_set_requiresPhysicalImageDimensions_mC794914720C62ACB74173F165B3015ED9B5CA2A6_inline (Cinfo_tED92D7CBD16BE657927A6B7DB64A22DA21EB7D32 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool requiresPhysicalImageDimensions { get; set; }
		bool L_0 = ___value0;
		__this->set_U3CrequiresPhysicalImageDimensionsU3Ek__BackingField_5(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void XROcclusionSubsystemCinfo_set_id_m19076B4B5E6D6AA32BE751C1F2611CB7C3C152A0_inline (XROcclusionSubsystemCinfo_tA29FDBA57EBA835927124FC18780DDD9CC4D84FD * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		// public string id { get; set; }
		String_t* L_0 = ___value0;
		__this->set_U3CidU3Ek__BackingField_0(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void XROcclusionSubsystemCinfo_set_providerType_mA9E2685FC29652BBF41CD7398D8A434B72B68556_inline (XROcclusionSubsystemCinfo_tA29FDBA57EBA835927124FC18780DDD9CC4D84FD * __this, Type_t * ___value0, const RuntimeMethod* method)
{
	{
		// public Type providerType { get; set; }
		Type_t * L_0 = ___value0;
		__this->set_U3CproviderTypeU3Ek__BackingField_1(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void XROcclusionSubsystemCinfo_set_subsystemTypeOverride_mC5D9DB3F2CDC007F826FC2AB790F1622DFBA0F63_inline (XROcclusionSubsystemCinfo_tA29FDBA57EBA835927124FC18780DDD9CC4D84FD * __this, Type_t * ___value0, const RuntimeMethod* method)
{
	{
		// public Type subsystemTypeOverride { get; set; }
		Type_t * L_0 = ___value0;
		__this->set_U3CsubsystemTypeOverrideU3Ek__BackingField_2(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void XROcclusionSubsystemCinfo_set_supportsHumanSegmentationStencilImage_mEC6C58C95DF515008316ED9A33A37ABBFBFD88BD_inline (XROcclusionSubsystemCinfo_tA29FDBA57EBA835927124FC18780DDD9CC4D84FD * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool supportsHumanSegmentationStencilImage { get; set; }
		bool L_0 = ___value0;
		__this->set_U3CsupportsHumanSegmentationStencilImageU3Ek__BackingField_4(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void XROcclusionSubsystemCinfo_set_supportsHumanSegmentationDepthImage_mF08FD3863AEB93D47CCF50BD197780D2AB6F0705_inline (XROcclusionSubsystemCinfo_tA29FDBA57EBA835927124FC18780DDD9CC4D84FD * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool supportsHumanSegmentationDepthImage { get; set; }
		bool L_0 = ___value0;
		__this->set_U3CsupportsHumanSegmentationDepthImageU3Ek__BackingField_5(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Cinfo_set_id_m0CB4DA3E552ED7940FBA88D8EE3BB6379EA255D6_inline (Cinfo_tAC330BB49E2D0C7E18C66AB4018927A6EC856E01 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		// public string id { get; set; }
		String_t* L_0 = ___value0;
		__this->set_U3CidU3Ek__BackingField_0(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Cinfo_set_providerType_m20992869A706183D7180A2030C84B5445DCF0BE3_inline (Cinfo_tAC330BB49E2D0C7E18C66AB4018927A6EC856E01 * __this, Type_t * ___value0, const RuntimeMethod* method)
{
	{
		// public Type providerType { get; set; }
		Type_t * L_0 = ___value0;
		__this->set_U3CproviderTypeU3Ek__BackingField_1(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Cinfo_set_subsystemTypeOverride_mD5425E55455A21B7361B847FD6B78998AC70CD5B_inline (Cinfo_tAC330BB49E2D0C7E18C66AB4018927A6EC856E01 * __this, Type_t * ___value0, const RuntimeMethod* method)
{
	{
		// public Type subsystemTypeOverride { get; set; }
		Type_t * L_0 = ___value0;
		__this->set_U3CsubsystemTypeOverrideU3Ek__BackingField_2(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Cinfo_set_supportsViewportBasedRaycast_mCF77DEFDDC3931682A33A063DF2F25FFBF07B807_inline (Cinfo_tAC330BB49E2D0C7E18C66AB4018927A6EC856E01 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool supportsViewportBasedRaycast { get; set; }
		bool L_0 = ___value0;
		__this->set_U3CsupportsViewportBasedRaycastU3Ek__BackingField_4(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Cinfo_set_supportsWorldBasedRaycast_m74BF70E612BCAFAD380C108700905E5B8C5425FA_inline (Cinfo_tAC330BB49E2D0C7E18C66AB4018927A6EC856E01 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool supportsWorldBasedRaycast { get; set; }
		bool L_0 = ___value0;
		__this->set_U3CsupportsWorldBasedRaycastU3Ek__BackingField_5(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Cinfo_set_supportedTrackableTypes_mABC320F641164FC1DB2AB9DB3F1E075B6235A785_inline (Cinfo_tAC330BB49E2D0C7E18C66AB4018927A6EC856E01 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// public TrackableType supportedTrackableTypes { get; set; }
		int32_t L_0 = ___value0;
		__this->set_U3CsupportedTrackableTypesU3Ek__BackingField_6(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Cinfo_set_supportsTrackedRaycasts_mD7575B5CAA4BB3652786E2AE2C1B94CF8BEB423C_inline (Cinfo_tAC330BB49E2D0C7E18C66AB4018927A6EC856E01 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool supportsTrackedRaycasts { get; set; }
		bool L_0 = ___value0;
		__this->set_U3CsupportsTrackedRaycastsU3Ek__BackingField_7(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Cinfo_set_id_m6A2CAB13FAD54AB05458DC5DE1FAB5C651E9D656_inline (Cinfo_t2842A97DA95F40ECADDCA24A291B6114A3A5F71A * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		// public string id { get; set; }
		String_t* L_0 = ___value0;
		__this->set_U3CidU3Ek__BackingField_2(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Cinfo_set_providerType_m2BCF5FEFC25D812C3E7F00725B49AE02540B2F8E_inline (Cinfo_t2842A97DA95F40ECADDCA24A291B6114A3A5F71A * __this, Type_t * ___value0, const RuntimeMethod* method)
{
	{
		// public Type providerType { get; set; }
		Type_t * L_0 = ___value0;
		__this->set_U3CproviderTypeU3Ek__BackingField_3(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Cinfo_set_subsystemTypeOverride_m30FDD93193E0D694ABB33E184552AAF1A8AA36E6_inline (Cinfo_t2842A97DA95F40ECADDCA24A291B6114A3A5F71A * __this, Type_t * ___value0, const RuntimeMethod* method)
{
	{
		// public Type subsystemTypeOverride { get; set; }
		Type_t * L_0 = ___value0;
		__this->set_U3CsubsystemTypeOverrideU3Ek__BackingField_4(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Cinfo_set_supportsInstall_m05EE61C58E505A8F20DEA68862395341F1DAD3FD_inline (Cinfo_t2842A97DA95F40ECADDCA24A291B6114A3A5F71A * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool supportsInstall { get; set; }
		bool L_0 = ___value0;
		__this->set_U3CsupportsInstallU3Ek__BackingField_0(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Cinfo_set_supportsMatchFrameRate_m9CB328CEF43BCE3E59F26A97D32AEE1D201F8787_inline (Cinfo_t2842A97DA95F40ECADDCA24A291B6114A3A5F71A * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool supportsMatchFrameRate { get; set; }
		bool L_0 = ___value0;
		__this->set_U3CsupportsMatchFrameRateU3Ek__BackingField_1(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Cinfo_set_providerType_m79B371C14F188233806BAB677302143650CD9A29_inline (Cinfo_t37F91E88FCD8623834BE1898FC146620538C08B1 * __this, Type_t * ___value0, const RuntimeMethod* method)
{
	{
		// public Type providerType { get; set; }
		Type_t * L_0 = ___value0;
		__this->set_U3CproviderTypeU3Ek__BackingField_1(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Cinfo_set_subsystemTypeOverride_mEF323B6CBB63FB7E5ECB4A6849F06C57BFDF8120_inline (Cinfo_t37F91E88FCD8623834BE1898FC146620538C08B1 * __this, Type_t * ___value0, const RuntimeMethod* method)
{
	{
		// public Type subsystemTypeOverride { get; set; }
		Type_t * L_0 = ___value0;
		__this->set_U3CsubsystemTypeOverrideU3Ek__BackingField_2(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Cinfo_set_id_m940361693A3C925B2180733D87611B5FDF0357D7_inline (Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		// public string id { get; set; }
		String_t* L_0 = ___value0;
		__this->set_U3CidU3Ek__BackingField_0(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Cinfo_set_providerType_m8B6A7EE025CCB9B5B5E26E6F4C779DFE09955744_inline (Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD * __this, Type_t * ___value0, const RuntimeMethod* method)
{
	{
		// public Type providerType { get; set; }
		Type_t * L_0 = ___value0;
		__this->set_U3CproviderTypeU3Ek__BackingField_1(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Cinfo_set_subsystemTypeOverride_mBC4F1CC20B4DF3D551BAFC1C38245F457E262A58_inline (Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD * __this, Type_t * ___value0, const RuntimeMethod* method)
{
	{
		// public Type subsystemTypeOverride { get; set; }
		Type_t * L_0 = ___value0;
		__this->set_U3CsubsystemTypeOverrideU3Ek__BackingField_2(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Cinfo_set_supportsHorizontalPlaneDetection_mBC9B4572592B71328A96AF58DEB047528470C440_inline (Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool supportsHorizontalPlaneDetection { get; set; }
		bool L_0 = ___value0;
		__this->set_U3CsupportsHorizontalPlaneDetectionU3Ek__BackingField_4(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Cinfo_set_supportsVerticalPlaneDetection_mFF310EF7B9F8D9C9F9689CF9D1D2BEDDFF93F9F0_inline (Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool supportsVerticalPlaneDetection { get; set; }
		bool L_0 = ___value0;
		__this->set_U3CsupportsVerticalPlaneDetectionU3Ek__BackingField_5(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Cinfo_set_supportsArbitraryPlaneDetection_m70B1D6D27946FB12BF0D3D3AF8C6DC8DC3F399B9_inline (Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool supportsArbitraryPlaneDetection { get; set; }
		bool L_0 = ___value0;
		__this->set_U3CsupportsArbitraryPlaneDetectionU3Ek__BackingField_6(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Cinfo_set_supportsBoundaryVertices_mC6F86EB28D38CC483AD8F9FD161013BDE3F4AFEF_inline (Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool supportsBoundaryVertices { get; set; }
		bool L_0 = ___value0;
		__this->set_U3CsupportsBoundaryVerticesU3Ek__BackingField_7(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Cinfo_set_supportsClassification_mA3B11D7CA4F960C89E729E5161AD7CC3211B933C_inline (Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool supportsClassification { get; set; }
		bool L_0 = ___value0;
		__this->set_U3CsupportsClassificationU3Ek__BackingField_8(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ARWorldMap_get_nativeHandle_m26CA181591D8E7863F4274AF93319497EC8CC86F_inline (ARWorldMap_t90151C78B15487234BE2E76D169DA191819704A2 * __this, const RuntimeMethod* method)
{
	{
		// internal int nativeHandle { get; private set; }
		int32_t L_0 = __this->get_U3CnativeHandleU3Ek__BackingField_0();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ARWorldMap_set_nativeHandle_mEAB7C65A965E0F40860B613E3190B2E59FE4D083_inline (ARWorldMap_t90151C78B15487234BE2E76D169DA191819704A2 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// internal int nativeHandle { get; private set; }
		int32_t L_0 = ___value0;
		__this->set_U3CnativeHandleU3Ek__BackingField_0(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ARKitCpuImageApi_tD94B983FBF13116F7497F2089555084CCAC47D59 * ARKitCpuImageApi_get_instance_m6514121C177EF3FE7E2FD99C430A48C29D9245CA_inline (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ARKitCpuImageApi_tD94B983FBF13116F7497F2089555084CCAC47D59_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static ARKitCpuImageApi instance { get; } = new ARKitCpuImageApi();
		IL2CPP_RUNTIME_CLASS_INIT(ARKitCpuImageApi_tD94B983FBF13116F7497F2089555084CCAC47D59_il2cpp_TypeInfo_var);
		ARKitCpuImageApi_tD94B983FBF13116F7497F2089555084CCAC47D59 * L_0 = ((ARKitCpuImageApi_tD94B983FBF13116F7497F2089555084CCAC47D59_StaticFields*)il2cpp_codegen_static_fields_for(ARKitCpuImageApi_tD94B983FBF13116F7497F2089555084CCAC47D59_il2cpp_TypeInfo_var))->get_U3CinstanceU3Ek__BackingField_0();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR intptr_t ARKitImageDatabase_get_nativePtr_mFE4F7A4306D72B71FFAC9E1C2F3D9FF5354627B3_inline (ARKitImageDatabase_t1D1B5D985355CF3D2597C8FD863EB46EF55B1F71 * __this, const RuntimeMethod* method)
{
	{
		// internal IntPtr nativePtr { get; private set; }
		intptr_t L_0 = __this->get_U3CnativePtrU3Ek__BackingField_0();
		return (intptr_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ConfigurationDescriptor_t5CD12F017FCCF861DC33D7C0D6F0121015DEEA78  Configuration_get_descriptor_mD7539C193666CFFB9258CE40D88EB7DA3C48DDDA_inline (Configuration_t29C11C7E576D64F717543048BDA1EBCEF0CF60C0 * __this, const RuntimeMethod* method)
{
	{
		// public ConfigurationDescriptor descriptor { get; private set; }
		ConfigurationDescriptor_t5CD12F017FCCF861DC33D7C0D6F0121015DEEA78  L_0 = __this->get_U3CdescriptorU3Ek__BackingField_0();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR intptr_t ConfigurationDescriptor_get_identifier_m829E6611B4E4B0E33E8E87902FDFCDAEC0F2B8A0_inline (ConfigurationDescriptor_t5CD12F017FCCF861DC33D7C0D6F0121015DEEA78 * __this, const RuntimeMethod* method)
{
	{
		// public IntPtr identifier => m_Identifier;
		intptr_t L_0 = __this->get_m_Identifier_0();
		return (intptr_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint64_t Configuration_get_features_m8F2353DC080AF51D657C4CBD8E9DB4DAEAB72B5A_inline (Configuration_t29C11C7E576D64F717543048BDA1EBCEF0CF60C0 * __this, const RuntimeMethod* method)
{
	{
		// public Feature features { get; private set; }
		uint64_t L_0 = __this->get_U3CfeaturesU3Ek__BackingField_1();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void IntPtr__ctor_mBB7AF6DA6350129AD6422DE474FD52F715CC0C40_inline (intptr_t* __this, void* ___value0, const RuntimeMethod* method)
{
	{
		void* L_0 = ___value0;
		*__this = ((intptr_t)L_0);
		return;
	}
}
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline (String_t* __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_m_stringLength_0();
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR NativeArray_1_t20D7C7F2BCDC04B6238E113A2CA21BBDD326A535  TrackableChanges_1_get_added_mE2DAB671C35440089855E3FA56312B779914939F_gshared_inline (TrackableChanges_1_tCBDEADFC15FC0570F012431A5227C2E6B92BAC3F * __this, const RuntimeMethod* method)
{
	{
		// public NativeArray<T> added { get { return m_Added; } }
		NativeArray_1_t20D7C7F2BCDC04B6238E113A2CA21BBDD326A535  L_0 = (NativeArray_1_t20D7C7F2BCDC04B6238E113A2CA21BBDD326A535 )__this->get_m_Added_1();
		return (NativeArray_1_t20D7C7F2BCDC04B6238E113A2CA21BBDD326A535 )L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR NativeArray_1_t20D7C7F2BCDC04B6238E113A2CA21BBDD326A535  TrackableChanges_1_get_updated_mDD1EA7192EFEFC4A8FB5949F6F995268E940D5AC_gshared_inline (TrackableChanges_1_tCBDEADFC15FC0570F012431A5227C2E6B92BAC3F * __this, const RuntimeMethod* method)
{
	{
		// public NativeArray<T> updated { get { return m_Updated; } }
		NativeArray_1_t20D7C7F2BCDC04B6238E113A2CA21BBDD326A535  L_0 = (NativeArray_1_t20D7C7F2BCDC04B6238E113A2CA21BBDD326A535 )__this->get_m_Updated_2();
		return (NativeArray_1_t20D7C7F2BCDC04B6238E113A2CA21BBDD326A535 )L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR NativeArray_1_t991E9C764228B2B65D9688847CCDA8CE903F5D77  TrackableChanges_1_get_removed_mEF24C86CF94D54D18AE8E112F4CA05CB76E8933D_gshared_inline (TrackableChanges_1_tCBDEADFC15FC0570F012431A5227C2E6B92BAC3F * __this, const RuntimeMethod* method)
{
	{
		// public NativeArray<TrackableId> removed { get { return m_Removed; } }
		NativeArray_1_t991E9C764228B2B65D9688847CCDA8CE903F5D77  L_0 = (NativeArray_1_t991E9C764228B2B65D9688847CCDA8CE903F5D77 )__this->get_m_Removed_3();
		return (NativeArray_1_t991E9C764228B2B65D9688847CCDA8CE903F5D77 )L_0;
	}
}
