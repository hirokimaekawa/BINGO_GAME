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
template <typename T1>
struct InterfaceActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1, typename T2>
struct InterfaceActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};

// System.Collections.Generic.Dictionary`2<System.String,System.String>
struct Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5;
// System.EventHandler`1<GoogleMobileAds.Common.AdErrorClientEventArgs>
struct EventHandler_1_tD7F1FCCC669FFEC2AC8F018E0D3673841C379CFB;
// System.EventHandler`1<GoogleMobileAds.Api.AdErrorEventArgs>
struct EventHandler_1_tDC66EDFC9EDBA9F3F32E6FC3AAD961F6EAFDE6BF;
// System.EventHandler`1<GoogleMobileAds.Api.AdFailedToLoadEventArgs>
struct EventHandler_1_tDDCD36D9EBF3319820B514E313E652EAA6373F30;
// System.EventHandler`1<GoogleMobileAds.Api.AdValueEventArgs>
struct EventHandler_1_t996E9F4D6ACC0E62DCB6129A804B31D7BBB73D36;
// System.EventHandler`1<System.EventArgs>
struct EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722;
// System.EventHandler`1<GoogleMobileAds.Common.LoadAdErrorClientEventArgs>
struct EventHandler_1_t3F280C24BFFA1F032DA3C628516C6CA0497B60B7;
// System.EventHandler`1<System.Object>
struct EventHandler_1_tFA1C30E54FA1061D79E711F65F9A174BFBD8CDCB;
// System.Collections.Generic.HashSet`1<System.String>
struct HashSet_1_t45F75268054D01D9E70EB33D7F6D2FA609DB9229;
// System.Collections.Generic.List`1<GoogleMobileAds.Api.Mediation.MediationExtras>
struct List_1_tF5F68C7FC4DC93BB7E5BFF8AB0BE8C81CBDFA469;
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// System.Delegate[]
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;
// System.Type[]
struct TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755;
// GoogleMobileAds.Api.AdError
struct AdError_t9022DA046CC0B3FDB633F9A3CF4DEA2F9F7E61DF;
// GoogleMobileAds.Common.AdErrorClientEventArgs
struct AdErrorClientEventArgs_tB274856D2970370818325A72964ACBCC0150D549;
// GoogleMobileAds.Api.AdErrorEventArgs
struct AdErrorEventArgs_t65E3F94DAC83D975258D8E0DF9D8D900638A5561;
// GoogleMobileAds.Api.AdFailedToLoadEventArgs
struct AdFailedToLoadEventArgs_t0FCAC7A737ADF52DDC5C4048DFE6CE7B262BC1BE;
// GoogleMobileAds.Api.AdRequest
struct AdRequest_tE64CA6699EE4572F9D6651EED0BFE0244DAE34A2;
// GoogleMobileAds.Api.AdSize
struct AdSize_tB5E93E7747BF591D43F7EF1C75972EB44DB1EE06;
// GoogleMobileAds.Api.AdValue
struct AdValue_tC98BC14087E57D98E4EDC6995FE84B39935F2DE9;
// GoogleMobileAds.Api.AdValueEventArgs
struct AdValueEventArgs_tCBAEB27B4870A4B954AD1F9ABA126A58CC22B61A;
// System.AsyncCallback
struct AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA;
// GoogleMobileAds.Api.BannerView
struct BannerView_t2AF4B88810A4F88438EE8247C2ECC044A77970A3;
// System.Reflection.Binder
struct Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288;
// System.EventArgs
struct EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA;
// GoogleMobileAds.Common.IAdErrorClient
struct IAdErrorClient_t82D6DD86F6D9F64B2AB18580620DD0C6645EB77D;
// System.IAsyncResult
struct IAsyncResult_tC9F97BF36FCF122D29D3101D80642278297BF370;
// GoogleMobileAds.Common.IBannerClient
struct IBannerClient_t125B3FC4035692612780172A90790393C35E69B8;
// GoogleMobileAds.IClientFactory
struct IClientFactory_tE5B92A915AE9D1C02BF62AE65493A2BB70ACFA2B;
// GoogleMobileAds.Common.IInterstitialClient
struct IInterstitialClient_tBDBA03A3C778B5223070C3B5B6DAEB0679B2B6A6;
// GoogleMobileAds.Common.ILoadAdErrorClient
struct ILoadAdErrorClient_tF60F056E72415FCCE67CE952761B1FF18021636B;
// GoogleMobileAds.Api.InterstitialAd
struct InterstitialAd_t0C7114E2B2C5A272A720D8F1B91ECAB3A2962EB1;
// GoogleMobileAds.Api.LoadAdError
struct LoadAdError_tBFB45D1927C5841DC4D17C1A9D83BE8AD11413CD;
// GoogleMobileAds.Common.LoadAdErrorClientEventArgs
struct LoadAdErrorClientEventArgs_t8A40C29E27174A02407452A656DFB39DBD4BC34A;
// System.Reflection.MemberFilter
struct MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.String
struct String_t;
// System.Type
struct Type_t;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;

IL2CPP_EXTERN_C RuntimeClass* AdErrorEventArgs_t65E3F94DAC83D975258D8E0DF9D8D900638A5561_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AdError_t9022DA046CC0B3FDB633F9A3CF4DEA2F9F7E61DF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AdFailedToLoadEventArgs_t0FCAC7A737ADF52DDC5C4048DFE6CE7B262BC1BE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EventHandler_1_t3F280C24BFFA1F032DA3C628516C6CA0497B60B7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EventHandler_1_t996E9F4D6ACC0E62DCB6129A804B31D7BBB73D36_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EventHandler_1_tD7F1FCCC669FFEC2AC8F018E0D3673841C379CFB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EventHandler_1_tDDCD36D9EBF3319820B514E313E652EAA6373F30_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IBannerClient_t125B3FC4035692612780172A90790393C35E69B8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IClientFactory_tE5B92A915AE9D1C02BF62AE65493A2BB70ACFA2B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IInterstitialClient_tBDBA03A3C778B5223070C3B5B6DAEB0679B2B6A6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* LoadAdError_tBFB45D1927C5841DC4D17C1A9D83BE8AD11413CD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MobileAds_tE6974DF09C22E7D4699F202504E3C6E61F2712BE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral1E40C18D8AC4A6D9A62D3A099D09AF791342A6DB;
IL2CPP_EXTERN_C String_t* _stringLiteralB0496525135724A6D7138AB94BD6661514AD7DAE;
IL2CPP_EXTERN_C String_t* _stringLiteralBDD22D9991854F9B5ADA35715330812319A1362B;
IL2CPP_EXTERN_C const RuntimeMethod* BannerView_U3CConfigureBannerEventsU3Em__0_m9211309D6C31C2A40A45EA2CF437E9DB8EF555B8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BannerView_U3CConfigureBannerEventsU3Em__1_mE95A0FEB326EE53B1362DFDDEF8D8CCA940B6E06_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BannerView_U3CConfigureBannerEventsU3Em__2_mD9E55A16C5074FEA65D598928259C6CC0CB6DA15_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BannerView_U3CConfigureBannerEventsU3Em__3_m6508B7A4FE74974989D045F32224FD7E5E2F0A4E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BannerView_U3CConfigureBannerEventsU3Em__4_mE30966AA5238B99E6F365C0DAF8B43065E22507A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* EventHandler_1_Invoke_m1AE09A3DB654992D28DDE8D74FAF0FD66855FB63_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* EventHandler_1_Invoke_m37F5E6E72E4C22B15241441EEF2D2D09F59FD9E9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* EventHandler_1_Invoke_mCA7CC675791204A44660E7CF8C1160710D7031B4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* EventHandler_1_Invoke_mF69BA60CAF322C4A19F99D91FA94DC3E842035DF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* EventHandler_1__ctor_m020945C2D19E72F87411D4D493B4A03FB53BB38F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* EventHandler_1__ctor_m8148EF3B917382C44769399C79A42A3EA9C06C3C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* EventHandler_1__ctor_m87E9F320274BB593BD10C98313A918018044BA1F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* EventHandler_1__ctor_mA35F8E2CD63A4118CC2DB3D3E1437C371AAD80C3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* InterstitialAd_U3CInterstitialAdU3Em__0_m455A8A5BF6AB2EF58D61F22A8E647FBE43E0A627_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* InterstitialAd_U3CInterstitialAdU3Em__1_m4AB5D26E9730C969FE7DA41C1AF130050D09E865_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* InterstitialAd_U3CInterstitialAdU3Em__2_m8E50A34566DA3E9484FC68007F44C8AB57E8EF23_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* InterstitialAd_U3CInterstitialAdU3Em__3_m847FEEDC73896FC7E4C14EC94518CA12A7A9B8EC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* InterstitialAd_U3CInterstitialAdU3Em__4_m07347F8C1DC5124F710FD328C8DC3DFF2025CBEB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* InterstitialAd_U3CInterstitialAdU3Em__5_m5F4E1BDBF49C353A56F47933F48A17D6ADEAACD7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* InterstitialAd_U3CInterstitialAdU3Em__6_m89B45428576EB8BF288A7EC57208D38F04A6687C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MobileAds_GetClientFactory_m4C38A16687444F18A251DB32693C8DD4435968FE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Type_GetType_m2D692327E10692E11116805CC604CD47F144A9E4_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;


IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_t9C9F9E6F1D53C2F0997D795DFEF22239BA2F0009 
{
public:

public:
};


// System.Object


// GoogleMobileAds.Api.AdError
struct AdError_t9022DA046CC0B3FDB633F9A3CF4DEA2F9F7E61DF  : public RuntimeObject
{
public:
	// GoogleMobileAds.Common.IAdErrorClient GoogleMobileAds.Api.AdError::client
	RuntimeObject* ___client_0;

public:
	inline static int32_t get_offset_of_client_0() { return static_cast<int32_t>(offsetof(AdError_t9022DA046CC0B3FDB633F9A3CF4DEA2F9F7E61DF, ___client_0)); }
	inline RuntimeObject* get_client_0() const { return ___client_0; }
	inline RuntimeObject** get_address_of_client_0() { return &___client_0; }
	inline void set_client_0(RuntimeObject* value)
	{
		___client_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___client_0), (void*)value);
	}
};


// GoogleMobileAds.Api.AdRequest
struct AdRequest_tE64CA6699EE4572F9D6651EED0BFE0244DAE34A2  : public RuntimeObject
{
public:
	// System.Collections.Generic.HashSet`1<System.String> GoogleMobileAds.Api.AdRequest::<Keywords>k__BackingField
	HashSet_1_t45F75268054D01D9E70EB33D7F6D2FA609DB9229 * ___U3CKeywordsU3Ek__BackingField_1;
	// System.Collections.Generic.Dictionary`2<System.String,System.String> GoogleMobileAds.Api.AdRequest::<Extras>k__BackingField
	Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * ___U3CExtrasU3Ek__BackingField_2;
	// System.Collections.Generic.List`1<GoogleMobileAds.Api.Mediation.MediationExtras> GoogleMobileAds.Api.AdRequest::<MediationExtras>k__BackingField
	List_1_tF5F68C7FC4DC93BB7E5BFF8AB0BE8C81CBDFA469 * ___U3CMediationExtrasU3Ek__BackingField_3;

public:
	inline static int32_t get_offset_of_U3CKeywordsU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(AdRequest_tE64CA6699EE4572F9D6651EED0BFE0244DAE34A2, ___U3CKeywordsU3Ek__BackingField_1)); }
	inline HashSet_1_t45F75268054D01D9E70EB33D7F6D2FA609DB9229 * get_U3CKeywordsU3Ek__BackingField_1() const { return ___U3CKeywordsU3Ek__BackingField_1; }
	inline HashSet_1_t45F75268054D01D9E70EB33D7F6D2FA609DB9229 ** get_address_of_U3CKeywordsU3Ek__BackingField_1() { return &___U3CKeywordsU3Ek__BackingField_1; }
	inline void set_U3CKeywordsU3Ek__BackingField_1(HashSet_1_t45F75268054D01D9E70EB33D7F6D2FA609DB9229 * value)
	{
		___U3CKeywordsU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CKeywordsU3Ek__BackingField_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CExtrasU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(AdRequest_tE64CA6699EE4572F9D6651EED0BFE0244DAE34A2, ___U3CExtrasU3Ek__BackingField_2)); }
	inline Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * get_U3CExtrasU3Ek__BackingField_2() const { return ___U3CExtrasU3Ek__BackingField_2; }
	inline Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 ** get_address_of_U3CExtrasU3Ek__BackingField_2() { return &___U3CExtrasU3Ek__BackingField_2; }
	inline void set_U3CExtrasU3Ek__BackingField_2(Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * value)
	{
		___U3CExtrasU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CExtrasU3Ek__BackingField_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CMediationExtrasU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(AdRequest_tE64CA6699EE4572F9D6651EED0BFE0244DAE34A2, ___U3CMediationExtrasU3Ek__BackingField_3)); }
	inline List_1_tF5F68C7FC4DC93BB7E5BFF8AB0BE8C81CBDFA469 * get_U3CMediationExtrasU3Ek__BackingField_3() const { return ___U3CMediationExtrasU3Ek__BackingField_3; }
	inline List_1_tF5F68C7FC4DC93BB7E5BFF8AB0BE8C81CBDFA469 ** get_address_of_U3CMediationExtrasU3Ek__BackingField_3() { return &___U3CMediationExtrasU3Ek__BackingField_3; }
	inline void set_U3CMediationExtrasU3Ek__BackingField_3(List_1_tF5F68C7FC4DC93BB7E5BFF8AB0BE8C81CBDFA469 * value)
	{
		___U3CMediationExtrasU3Ek__BackingField_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CMediationExtrasU3Ek__BackingField_3), (void*)value);
	}
};

struct AdRequest_tE64CA6699EE4572F9D6651EED0BFE0244DAE34A2_StaticFields
{
public:
	// System.String GoogleMobileAds.Api.AdRequest::<Version>k__BackingField
	String_t* ___U3CVersionU3Ek__BackingField_0;

public:
	inline static int32_t get_offset_of_U3CVersionU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(AdRequest_tE64CA6699EE4572F9D6651EED0BFE0244DAE34A2_StaticFields, ___U3CVersionU3Ek__BackingField_0)); }
	inline String_t* get_U3CVersionU3Ek__BackingField_0() const { return ___U3CVersionU3Ek__BackingField_0; }
	inline String_t** get_address_of_U3CVersionU3Ek__BackingField_0() { return &___U3CVersionU3Ek__BackingField_0; }
	inline void set_U3CVersionU3Ek__BackingField_0(String_t* value)
	{
		___U3CVersionU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CVersionU3Ek__BackingField_0), (void*)value);
	}
};

struct Il2CppArrayBounds;

// System.Array


// GoogleMobileAds.Api.BannerView
struct BannerView_t2AF4B88810A4F88438EE8247C2ECC044A77970A3  : public RuntimeObject
{
public:
	// GoogleMobileAds.Common.IBannerClient GoogleMobileAds.Api.BannerView::client
	RuntimeObject* ___client_0;
	// System.EventHandler`1<System.EventArgs> GoogleMobileAds.Api.BannerView::OnAdLoaded
	EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * ___OnAdLoaded_1;
	// System.EventHandler`1<GoogleMobileAds.Api.AdFailedToLoadEventArgs> GoogleMobileAds.Api.BannerView::OnAdFailedToLoad
	EventHandler_1_tDDCD36D9EBF3319820B514E313E652EAA6373F30 * ___OnAdFailedToLoad_2;
	// System.EventHandler`1<System.EventArgs> GoogleMobileAds.Api.BannerView::OnAdOpening
	EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * ___OnAdOpening_3;
	// System.EventHandler`1<System.EventArgs> GoogleMobileAds.Api.BannerView::OnAdClosed
	EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * ___OnAdClosed_4;
	// System.EventHandler`1<GoogleMobileAds.Api.AdValueEventArgs> GoogleMobileAds.Api.BannerView::OnPaidEvent
	EventHandler_1_t996E9F4D6ACC0E62DCB6129A804B31D7BBB73D36 * ___OnPaidEvent_5;

public:
	inline static int32_t get_offset_of_client_0() { return static_cast<int32_t>(offsetof(BannerView_t2AF4B88810A4F88438EE8247C2ECC044A77970A3, ___client_0)); }
	inline RuntimeObject* get_client_0() const { return ___client_0; }
	inline RuntimeObject** get_address_of_client_0() { return &___client_0; }
	inline void set_client_0(RuntimeObject* value)
	{
		___client_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___client_0), (void*)value);
	}

	inline static int32_t get_offset_of_OnAdLoaded_1() { return static_cast<int32_t>(offsetof(BannerView_t2AF4B88810A4F88438EE8247C2ECC044A77970A3, ___OnAdLoaded_1)); }
	inline EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * get_OnAdLoaded_1() const { return ___OnAdLoaded_1; }
	inline EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 ** get_address_of_OnAdLoaded_1() { return &___OnAdLoaded_1; }
	inline void set_OnAdLoaded_1(EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * value)
	{
		___OnAdLoaded_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnAdLoaded_1), (void*)value);
	}

	inline static int32_t get_offset_of_OnAdFailedToLoad_2() { return static_cast<int32_t>(offsetof(BannerView_t2AF4B88810A4F88438EE8247C2ECC044A77970A3, ___OnAdFailedToLoad_2)); }
	inline EventHandler_1_tDDCD36D9EBF3319820B514E313E652EAA6373F30 * get_OnAdFailedToLoad_2() const { return ___OnAdFailedToLoad_2; }
	inline EventHandler_1_tDDCD36D9EBF3319820B514E313E652EAA6373F30 ** get_address_of_OnAdFailedToLoad_2() { return &___OnAdFailedToLoad_2; }
	inline void set_OnAdFailedToLoad_2(EventHandler_1_tDDCD36D9EBF3319820B514E313E652EAA6373F30 * value)
	{
		___OnAdFailedToLoad_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnAdFailedToLoad_2), (void*)value);
	}

	inline static int32_t get_offset_of_OnAdOpening_3() { return static_cast<int32_t>(offsetof(BannerView_t2AF4B88810A4F88438EE8247C2ECC044A77970A3, ___OnAdOpening_3)); }
	inline EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * get_OnAdOpening_3() const { return ___OnAdOpening_3; }
	inline EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 ** get_address_of_OnAdOpening_3() { return &___OnAdOpening_3; }
	inline void set_OnAdOpening_3(EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * value)
	{
		___OnAdOpening_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnAdOpening_3), (void*)value);
	}

	inline static int32_t get_offset_of_OnAdClosed_4() { return static_cast<int32_t>(offsetof(BannerView_t2AF4B88810A4F88438EE8247C2ECC044A77970A3, ___OnAdClosed_4)); }
	inline EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * get_OnAdClosed_4() const { return ___OnAdClosed_4; }
	inline EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 ** get_address_of_OnAdClosed_4() { return &___OnAdClosed_4; }
	inline void set_OnAdClosed_4(EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * value)
	{
		___OnAdClosed_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnAdClosed_4), (void*)value);
	}

	inline static int32_t get_offset_of_OnPaidEvent_5() { return static_cast<int32_t>(offsetof(BannerView_t2AF4B88810A4F88438EE8247C2ECC044A77970A3, ___OnPaidEvent_5)); }
	inline EventHandler_1_t996E9F4D6ACC0E62DCB6129A804B31D7BBB73D36 * get_OnPaidEvent_5() const { return ___OnPaidEvent_5; }
	inline EventHandler_1_t996E9F4D6ACC0E62DCB6129A804B31D7BBB73D36 ** get_address_of_OnPaidEvent_5() { return &___OnPaidEvent_5; }
	inline void set_OnPaidEvent_5(EventHandler_1_t996E9F4D6ACC0E62DCB6129A804B31D7BBB73D36 * value)
	{
		___OnPaidEvent_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnPaidEvent_5), (void*)value);
	}
};


// System.EventArgs
struct EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA  : public RuntimeObject
{
public:

public:
};

struct EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA_StaticFields
{
public:
	// System.EventArgs System.EventArgs::Empty
	EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA * ___Empty_0;

public:
	inline static int32_t get_offset_of_Empty_0() { return static_cast<int32_t>(offsetof(EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA_StaticFields, ___Empty_0)); }
	inline EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA * get_Empty_0() const { return ___Empty_0; }
	inline EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA ** get_address_of_Empty_0() { return &___Empty_0; }
	inline void set_Empty_0(EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA * value)
	{
		___Empty_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Empty_0), (void*)value);
	}
};


// GoogleMobileAds.Api.InterstitialAd
struct InterstitialAd_t0C7114E2B2C5A272A720D8F1B91ECAB3A2962EB1  : public RuntimeObject
{
public:
	// GoogleMobileAds.Common.IInterstitialClient GoogleMobileAds.Api.InterstitialAd::client
	RuntimeObject* ___client_0;
	// System.String GoogleMobileAds.Api.InterstitialAd::adUnitId
	String_t* ___adUnitId_1;
	// System.Boolean GoogleMobileAds.Api.InterstitialAd::isLoaded
	bool ___isLoaded_2;
	// System.EventHandler`1<System.EventArgs> GoogleMobileAds.Api.InterstitialAd::OnAdLoaded
	EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * ___OnAdLoaded_3;
	// System.EventHandler`1<GoogleMobileAds.Api.AdFailedToLoadEventArgs> GoogleMobileAds.Api.InterstitialAd::OnAdFailedToLoad
	EventHandler_1_tDDCD36D9EBF3319820B514E313E652EAA6373F30 * ___OnAdFailedToLoad_4;
	// System.EventHandler`1<System.EventArgs> GoogleMobileAds.Api.InterstitialAd::OnAdOpening
	EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * ___OnAdOpening_5;
	// System.EventHandler`1<System.EventArgs> GoogleMobileAds.Api.InterstitialAd::OnAdClosed
	EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * ___OnAdClosed_6;
	// System.EventHandler`1<GoogleMobileAds.Api.AdErrorEventArgs> GoogleMobileAds.Api.InterstitialAd::OnAdFailedToShow
	EventHandler_1_tDC66EDFC9EDBA9F3F32E6FC3AAD961F6EAFDE6BF * ___OnAdFailedToShow_7;
	// System.EventHandler`1<System.EventArgs> GoogleMobileAds.Api.InterstitialAd::OnAdDidRecordImpression
	EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * ___OnAdDidRecordImpression_8;
	// System.EventHandler`1<GoogleMobileAds.Api.AdValueEventArgs> GoogleMobileAds.Api.InterstitialAd::OnPaidEvent
	EventHandler_1_t996E9F4D6ACC0E62DCB6129A804B31D7BBB73D36 * ___OnPaidEvent_9;

public:
	inline static int32_t get_offset_of_client_0() { return static_cast<int32_t>(offsetof(InterstitialAd_t0C7114E2B2C5A272A720D8F1B91ECAB3A2962EB1, ___client_0)); }
	inline RuntimeObject* get_client_0() const { return ___client_0; }
	inline RuntimeObject** get_address_of_client_0() { return &___client_0; }
	inline void set_client_0(RuntimeObject* value)
	{
		___client_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___client_0), (void*)value);
	}

	inline static int32_t get_offset_of_adUnitId_1() { return static_cast<int32_t>(offsetof(InterstitialAd_t0C7114E2B2C5A272A720D8F1B91ECAB3A2962EB1, ___adUnitId_1)); }
	inline String_t* get_adUnitId_1() const { return ___adUnitId_1; }
	inline String_t** get_address_of_adUnitId_1() { return &___adUnitId_1; }
	inline void set_adUnitId_1(String_t* value)
	{
		___adUnitId_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___adUnitId_1), (void*)value);
	}

	inline static int32_t get_offset_of_isLoaded_2() { return static_cast<int32_t>(offsetof(InterstitialAd_t0C7114E2B2C5A272A720D8F1B91ECAB3A2962EB1, ___isLoaded_2)); }
	inline bool get_isLoaded_2() const { return ___isLoaded_2; }
	inline bool* get_address_of_isLoaded_2() { return &___isLoaded_2; }
	inline void set_isLoaded_2(bool value)
	{
		___isLoaded_2 = value;
	}

	inline static int32_t get_offset_of_OnAdLoaded_3() { return static_cast<int32_t>(offsetof(InterstitialAd_t0C7114E2B2C5A272A720D8F1B91ECAB3A2962EB1, ___OnAdLoaded_3)); }
	inline EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * get_OnAdLoaded_3() const { return ___OnAdLoaded_3; }
	inline EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 ** get_address_of_OnAdLoaded_3() { return &___OnAdLoaded_3; }
	inline void set_OnAdLoaded_3(EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * value)
	{
		___OnAdLoaded_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnAdLoaded_3), (void*)value);
	}

	inline static int32_t get_offset_of_OnAdFailedToLoad_4() { return static_cast<int32_t>(offsetof(InterstitialAd_t0C7114E2B2C5A272A720D8F1B91ECAB3A2962EB1, ___OnAdFailedToLoad_4)); }
	inline EventHandler_1_tDDCD36D9EBF3319820B514E313E652EAA6373F30 * get_OnAdFailedToLoad_4() const { return ___OnAdFailedToLoad_4; }
	inline EventHandler_1_tDDCD36D9EBF3319820B514E313E652EAA6373F30 ** get_address_of_OnAdFailedToLoad_4() { return &___OnAdFailedToLoad_4; }
	inline void set_OnAdFailedToLoad_4(EventHandler_1_tDDCD36D9EBF3319820B514E313E652EAA6373F30 * value)
	{
		___OnAdFailedToLoad_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnAdFailedToLoad_4), (void*)value);
	}

	inline static int32_t get_offset_of_OnAdOpening_5() { return static_cast<int32_t>(offsetof(InterstitialAd_t0C7114E2B2C5A272A720D8F1B91ECAB3A2962EB1, ___OnAdOpening_5)); }
	inline EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * get_OnAdOpening_5() const { return ___OnAdOpening_5; }
	inline EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 ** get_address_of_OnAdOpening_5() { return &___OnAdOpening_5; }
	inline void set_OnAdOpening_5(EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * value)
	{
		___OnAdOpening_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnAdOpening_5), (void*)value);
	}

	inline static int32_t get_offset_of_OnAdClosed_6() { return static_cast<int32_t>(offsetof(InterstitialAd_t0C7114E2B2C5A272A720D8F1B91ECAB3A2962EB1, ___OnAdClosed_6)); }
	inline EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * get_OnAdClosed_6() const { return ___OnAdClosed_6; }
	inline EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 ** get_address_of_OnAdClosed_6() { return &___OnAdClosed_6; }
	inline void set_OnAdClosed_6(EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * value)
	{
		___OnAdClosed_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnAdClosed_6), (void*)value);
	}

	inline static int32_t get_offset_of_OnAdFailedToShow_7() { return static_cast<int32_t>(offsetof(InterstitialAd_t0C7114E2B2C5A272A720D8F1B91ECAB3A2962EB1, ___OnAdFailedToShow_7)); }
	inline EventHandler_1_tDC66EDFC9EDBA9F3F32E6FC3AAD961F6EAFDE6BF * get_OnAdFailedToShow_7() const { return ___OnAdFailedToShow_7; }
	inline EventHandler_1_tDC66EDFC9EDBA9F3F32E6FC3AAD961F6EAFDE6BF ** get_address_of_OnAdFailedToShow_7() { return &___OnAdFailedToShow_7; }
	inline void set_OnAdFailedToShow_7(EventHandler_1_tDC66EDFC9EDBA9F3F32E6FC3AAD961F6EAFDE6BF * value)
	{
		___OnAdFailedToShow_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnAdFailedToShow_7), (void*)value);
	}

	inline static int32_t get_offset_of_OnAdDidRecordImpression_8() { return static_cast<int32_t>(offsetof(InterstitialAd_t0C7114E2B2C5A272A720D8F1B91ECAB3A2962EB1, ___OnAdDidRecordImpression_8)); }
	inline EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * get_OnAdDidRecordImpression_8() const { return ___OnAdDidRecordImpression_8; }
	inline EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 ** get_address_of_OnAdDidRecordImpression_8() { return &___OnAdDidRecordImpression_8; }
	inline void set_OnAdDidRecordImpression_8(EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * value)
	{
		___OnAdDidRecordImpression_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnAdDidRecordImpression_8), (void*)value);
	}

	inline static int32_t get_offset_of_OnPaidEvent_9() { return static_cast<int32_t>(offsetof(InterstitialAd_t0C7114E2B2C5A272A720D8F1B91ECAB3A2962EB1, ___OnPaidEvent_9)); }
	inline EventHandler_1_t996E9F4D6ACC0E62DCB6129A804B31D7BBB73D36 * get_OnPaidEvent_9() const { return ___OnPaidEvent_9; }
	inline EventHandler_1_t996E9F4D6ACC0E62DCB6129A804B31D7BBB73D36 ** get_address_of_OnPaidEvent_9() { return &___OnPaidEvent_9; }
	inline void set_OnPaidEvent_9(EventHandler_1_t996E9F4D6ACC0E62DCB6129A804B31D7BBB73D36 * value)
	{
		___OnPaidEvent_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnPaidEvent_9), (void*)value);
	}
};


// System.Reflection.MemberInfo
struct MemberInfo_t  : public RuntimeObject
{
public:

public:
};


// GoogleMobileAds.Api.MobileAds
struct MobileAds_tE6974DF09C22E7D4699F202504E3C6E61F2712BE  : public RuntimeObject
{
public:

public:
};

struct MobileAds_tE6974DF09C22E7D4699F202504E3C6E61F2712BE_StaticFields
{
public:
	// GoogleMobileAds.IClientFactory GoogleMobileAds.Api.MobileAds::clientFactory
	RuntimeObject* ___clientFactory_0;

public:
	inline static int32_t get_offset_of_clientFactory_0() { return static_cast<int32_t>(offsetof(MobileAds_tE6974DF09C22E7D4699F202504E3C6E61F2712BE_StaticFields, ___clientFactory_0)); }
	inline RuntimeObject* get_clientFactory_0() const { return ___clientFactory_0; }
	inline RuntimeObject** get_address_of_clientFactory_0() { return &___clientFactory_0; }
	inline void set_clientFactory_0(RuntimeObject* value)
	{
		___clientFactory_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___clientFactory_0), (void*)value);
	}
};


// System.String
struct String_t  : public RuntimeObject
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


// System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52  : public RuntimeObject
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

// GoogleMobileAds.Common.AdErrorClientEventArgs
struct AdErrorClientEventArgs_tB274856D2970370818325A72964ACBCC0150D549  : public EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA
{
public:
	// GoogleMobileAds.Common.IAdErrorClient GoogleMobileAds.Common.AdErrorClientEventArgs::<AdErrorClient>k__BackingField
	RuntimeObject* ___U3CAdErrorClientU3Ek__BackingField_1;

public:
	inline static int32_t get_offset_of_U3CAdErrorClientU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(AdErrorClientEventArgs_tB274856D2970370818325A72964ACBCC0150D549, ___U3CAdErrorClientU3Ek__BackingField_1)); }
	inline RuntimeObject* get_U3CAdErrorClientU3Ek__BackingField_1() const { return ___U3CAdErrorClientU3Ek__BackingField_1; }
	inline RuntimeObject** get_address_of_U3CAdErrorClientU3Ek__BackingField_1() { return &___U3CAdErrorClientU3Ek__BackingField_1; }
	inline void set_U3CAdErrorClientU3Ek__BackingField_1(RuntimeObject* value)
	{
		___U3CAdErrorClientU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CAdErrorClientU3Ek__BackingField_1), (void*)value);
	}
};


// GoogleMobileAds.Api.AdErrorEventArgs
struct AdErrorEventArgs_t65E3F94DAC83D975258D8E0DF9D8D900638A5561  : public EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA
{
public:
	// GoogleMobileAds.Api.AdError GoogleMobileAds.Api.AdErrorEventArgs::<AdError>k__BackingField
	AdError_t9022DA046CC0B3FDB633F9A3CF4DEA2F9F7E61DF * ___U3CAdErrorU3Ek__BackingField_1;
	// System.String GoogleMobileAds.Api.AdErrorEventArgs::<Message>k__BackingField
	String_t* ___U3CMessageU3Ek__BackingField_2;

public:
	inline static int32_t get_offset_of_U3CAdErrorU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(AdErrorEventArgs_t65E3F94DAC83D975258D8E0DF9D8D900638A5561, ___U3CAdErrorU3Ek__BackingField_1)); }
	inline AdError_t9022DA046CC0B3FDB633F9A3CF4DEA2F9F7E61DF * get_U3CAdErrorU3Ek__BackingField_1() const { return ___U3CAdErrorU3Ek__BackingField_1; }
	inline AdError_t9022DA046CC0B3FDB633F9A3CF4DEA2F9F7E61DF ** get_address_of_U3CAdErrorU3Ek__BackingField_1() { return &___U3CAdErrorU3Ek__BackingField_1; }
	inline void set_U3CAdErrorU3Ek__BackingField_1(AdError_t9022DA046CC0B3FDB633F9A3CF4DEA2F9F7E61DF * value)
	{
		___U3CAdErrorU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CAdErrorU3Ek__BackingField_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CMessageU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(AdErrorEventArgs_t65E3F94DAC83D975258D8E0DF9D8D900638A5561, ___U3CMessageU3Ek__BackingField_2)); }
	inline String_t* get_U3CMessageU3Ek__BackingField_2() const { return ___U3CMessageU3Ek__BackingField_2; }
	inline String_t** get_address_of_U3CMessageU3Ek__BackingField_2() { return &___U3CMessageU3Ek__BackingField_2; }
	inline void set_U3CMessageU3Ek__BackingField_2(String_t* value)
	{
		___U3CMessageU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CMessageU3Ek__BackingField_2), (void*)value);
	}
};


// GoogleMobileAds.Api.AdFailedToLoadEventArgs
struct AdFailedToLoadEventArgs_t0FCAC7A737ADF52DDC5C4048DFE6CE7B262BC1BE  : public EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA
{
public:
	// GoogleMobileAds.Api.LoadAdError GoogleMobileAds.Api.AdFailedToLoadEventArgs::<LoadAdError>k__BackingField
	LoadAdError_tBFB45D1927C5841DC4D17C1A9D83BE8AD11413CD * ___U3CLoadAdErrorU3Ek__BackingField_1;

public:
	inline static int32_t get_offset_of_U3CLoadAdErrorU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(AdFailedToLoadEventArgs_t0FCAC7A737ADF52DDC5C4048DFE6CE7B262BC1BE, ___U3CLoadAdErrorU3Ek__BackingField_1)); }
	inline LoadAdError_tBFB45D1927C5841DC4D17C1A9D83BE8AD11413CD * get_U3CLoadAdErrorU3Ek__BackingField_1() const { return ___U3CLoadAdErrorU3Ek__BackingField_1; }
	inline LoadAdError_tBFB45D1927C5841DC4D17C1A9D83BE8AD11413CD ** get_address_of_U3CLoadAdErrorU3Ek__BackingField_1() { return &___U3CLoadAdErrorU3Ek__BackingField_1; }
	inline void set_U3CLoadAdErrorU3Ek__BackingField_1(LoadAdError_tBFB45D1927C5841DC4D17C1A9D83BE8AD11413CD * value)
	{
		___U3CLoadAdErrorU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CLoadAdErrorU3Ek__BackingField_1), (void*)value);
	}
};


// GoogleMobileAds.Api.AdValueEventArgs
struct AdValueEventArgs_tCBAEB27B4870A4B954AD1F9ABA126A58CC22B61A  : public EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA
{
public:
	// GoogleMobileAds.Api.AdValue GoogleMobileAds.Api.AdValueEventArgs::<AdValue>k__BackingField
	AdValue_tC98BC14087E57D98E4EDC6995FE84B39935F2DE9 * ___U3CAdValueU3Ek__BackingField_1;

public:
	inline static int32_t get_offset_of_U3CAdValueU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(AdValueEventArgs_tCBAEB27B4870A4B954AD1F9ABA126A58CC22B61A, ___U3CAdValueU3Ek__BackingField_1)); }
	inline AdValue_tC98BC14087E57D98E4EDC6995FE84B39935F2DE9 * get_U3CAdValueU3Ek__BackingField_1() const { return ___U3CAdValueU3Ek__BackingField_1; }
	inline AdValue_tC98BC14087E57D98E4EDC6995FE84B39935F2DE9 ** get_address_of_U3CAdValueU3Ek__BackingField_1() { return &___U3CAdValueU3Ek__BackingField_1; }
	inline void set_U3CAdValueU3Ek__BackingField_1(AdValue_tC98BC14087E57D98E4EDC6995FE84B39935F2DE9 * value)
	{
		___U3CAdValueU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CAdValueU3Ek__BackingField_1), (void*)value);
	}
};


// System.Boolean
struct Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37 
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


// System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA  : public ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52
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

// System.IntPtr
struct IntPtr_t 
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


// GoogleMobileAds.Api.LoadAdError
struct LoadAdError_tBFB45D1927C5841DC4D17C1A9D83BE8AD11413CD  : public AdError_t9022DA046CC0B3FDB633F9A3CF4DEA2F9F7E61DF
{
public:
	// GoogleMobileAds.Common.ILoadAdErrorClient GoogleMobileAds.Api.LoadAdError::client
	RuntimeObject* ___client_1;

public:
	inline static int32_t get_offset_of_client_1() { return static_cast<int32_t>(offsetof(LoadAdError_tBFB45D1927C5841DC4D17C1A9D83BE8AD11413CD, ___client_1)); }
	inline RuntimeObject* get_client_1() const { return ___client_1; }
	inline RuntimeObject** get_address_of_client_1() { return &___client_1; }
	inline void set_client_1(RuntimeObject* value)
	{
		___client_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___client_1), (void*)value);
	}
};


// GoogleMobileAds.Common.LoadAdErrorClientEventArgs
struct LoadAdErrorClientEventArgs_t8A40C29E27174A02407452A656DFB39DBD4BC34A  : public EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA
{
public:
	// GoogleMobileAds.Common.ILoadAdErrorClient GoogleMobileAds.Common.LoadAdErrorClientEventArgs::<LoadAdErrorClient>k__BackingField
	RuntimeObject* ___U3CLoadAdErrorClientU3Ek__BackingField_1;

public:
	inline static int32_t get_offset_of_U3CLoadAdErrorClientU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(LoadAdErrorClientEventArgs_t8A40C29E27174A02407452A656DFB39DBD4BC34A, ___U3CLoadAdErrorClientU3Ek__BackingField_1)); }
	inline RuntimeObject* get_U3CLoadAdErrorClientU3Ek__BackingField_1() const { return ___U3CLoadAdErrorClientU3Ek__BackingField_1; }
	inline RuntimeObject** get_address_of_U3CLoadAdErrorClientU3Ek__BackingField_1() { return &___U3CLoadAdErrorClientU3Ek__BackingField_1; }
	inline void set_U3CLoadAdErrorClientU3Ek__BackingField_1(RuntimeObject* value)
	{
		___U3CLoadAdErrorClientU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CLoadAdErrorClientU3Ek__BackingField_1), (void*)value);
	}
};


// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5 
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


// GoogleMobileAds.Api.AdPosition
struct AdPosition_tE759024EF1A77B4363A8C6E765A56D38874DDFE2 
{
public:
	// System.Int32 GoogleMobileAds.Api.AdPosition::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(AdPosition_tE759024EF1A77B4363A8C6E765A56D38874DDFE2, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Reflection.BindingFlags
struct BindingFlags_tAAAB07D9AC588F0D55D844E51D7035E96DF94733 
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
struct Delegate_t  : public RuntimeObject
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

// GoogleMobileAds.Api.Orientation
struct Orientation_t388F36367FFD564C3247C37DA9E606D896B376A4 
{
public:
	// System.Int32 GoogleMobileAds.Api.Orientation::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Orientation_t388F36367FFD564C3247C37DA9E606D896B376A4, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.RuntimePlatform
struct RuntimePlatform_tB8798C800FD9810C0FE2B7D2F2A0A3979D239065 
{
public:
	// System.Int32 UnityEngine.RuntimePlatform::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(RuntimePlatform_tB8798C800FD9810C0FE2B7D2F2A0A3979D239065, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.RuntimeTypeHandle
struct RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 
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


// GoogleMobileAds.Api.AdSize/Type
struct Type_t0FDFC4E0A160E0EBA0D9A332CB6DCBCCC1B1D763 
{
public:
	// System.Int32 GoogleMobileAds.Api.AdSize/Type::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Type_t0FDFC4E0A160E0EBA0D9A332CB6DCBCCC1B1D763, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// GoogleMobileAds.Api.AdSize
struct AdSize_tB5E93E7747BF591D43F7EF1C75972EB44DB1EE06  : public RuntimeObject
{
public:
	// GoogleMobileAds.Api.AdSize/Type GoogleMobileAds.Api.AdSize::type
	int32_t ___type_0;
	// GoogleMobileAds.Api.Orientation GoogleMobileAds.Api.AdSize::orientation
	int32_t ___orientation_1;
	// System.Int32 GoogleMobileAds.Api.AdSize::width
	int32_t ___width_2;
	// System.Int32 GoogleMobileAds.Api.AdSize::height
	int32_t ___height_3;

public:
	inline static int32_t get_offset_of_type_0() { return static_cast<int32_t>(offsetof(AdSize_tB5E93E7747BF591D43F7EF1C75972EB44DB1EE06, ___type_0)); }
	inline int32_t get_type_0() const { return ___type_0; }
	inline int32_t* get_address_of_type_0() { return &___type_0; }
	inline void set_type_0(int32_t value)
	{
		___type_0 = value;
	}

	inline static int32_t get_offset_of_orientation_1() { return static_cast<int32_t>(offsetof(AdSize_tB5E93E7747BF591D43F7EF1C75972EB44DB1EE06, ___orientation_1)); }
	inline int32_t get_orientation_1() const { return ___orientation_1; }
	inline int32_t* get_address_of_orientation_1() { return &___orientation_1; }
	inline void set_orientation_1(int32_t value)
	{
		___orientation_1 = value;
	}

	inline static int32_t get_offset_of_width_2() { return static_cast<int32_t>(offsetof(AdSize_tB5E93E7747BF591D43F7EF1C75972EB44DB1EE06, ___width_2)); }
	inline int32_t get_width_2() const { return ___width_2; }
	inline int32_t* get_address_of_width_2() { return &___width_2; }
	inline void set_width_2(int32_t value)
	{
		___width_2 = value;
	}

	inline static int32_t get_offset_of_height_3() { return static_cast<int32_t>(offsetof(AdSize_tB5E93E7747BF591D43F7EF1C75972EB44DB1EE06, ___height_3)); }
	inline int32_t get_height_3() const { return ___height_3; }
	inline int32_t* get_address_of_height_3() { return &___height_3; }
	inline void set_height_3(int32_t value)
	{
		___height_3 = value;
	}
};

struct AdSize_tB5E93E7747BF591D43F7EF1C75972EB44DB1EE06_StaticFields
{
public:
	// GoogleMobileAds.Api.AdSize GoogleMobileAds.Api.AdSize::Banner
	AdSize_tB5E93E7747BF591D43F7EF1C75972EB44DB1EE06 * ___Banner_4;
	// GoogleMobileAds.Api.AdSize GoogleMobileAds.Api.AdSize::MediumRectangle
	AdSize_tB5E93E7747BF591D43F7EF1C75972EB44DB1EE06 * ___MediumRectangle_5;
	// GoogleMobileAds.Api.AdSize GoogleMobileAds.Api.AdSize::IABBanner
	AdSize_tB5E93E7747BF591D43F7EF1C75972EB44DB1EE06 * ___IABBanner_6;
	// GoogleMobileAds.Api.AdSize GoogleMobileAds.Api.AdSize::Leaderboard
	AdSize_tB5E93E7747BF591D43F7EF1C75972EB44DB1EE06 * ___Leaderboard_7;
	// GoogleMobileAds.Api.AdSize GoogleMobileAds.Api.AdSize::SmartBanner
	AdSize_tB5E93E7747BF591D43F7EF1C75972EB44DB1EE06 * ___SmartBanner_8;
	// System.Int32 GoogleMobileAds.Api.AdSize::FullWidth
	int32_t ___FullWidth_9;

public:
	inline static int32_t get_offset_of_Banner_4() { return static_cast<int32_t>(offsetof(AdSize_tB5E93E7747BF591D43F7EF1C75972EB44DB1EE06_StaticFields, ___Banner_4)); }
	inline AdSize_tB5E93E7747BF591D43F7EF1C75972EB44DB1EE06 * get_Banner_4() const { return ___Banner_4; }
	inline AdSize_tB5E93E7747BF591D43F7EF1C75972EB44DB1EE06 ** get_address_of_Banner_4() { return &___Banner_4; }
	inline void set_Banner_4(AdSize_tB5E93E7747BF591D43F7EF1C75972EB44DB1EE06 * value)
	{
		___Banner_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Banner_4), (void*)value);
	}

	inline static int32_t get_offset_of_MediumRectangle_5() { return static_cast<int32_t>(offsetof(AdSize_tB5E93E7747BF591D43F7EF1C75972EB44DB1EE06_StaticFields, ___MediumRectangle_5)); }
	inline AdSize_tB5E93E7747BF591D43F7EF1C75972EB44DB1EE06 * get_MediumRectangle_5() const { return ___MediumRectangle_5; }
	inline AdSize_tB5E93E7747BF591D43F7EF1C75972EB44DB1EE06 ** get_address_of_MediumRectangle_5() { return &___MediumRectangle_5; }
	inline void set_MediumRectangle_5(AdSize_tB5E93E7747BF591D43F7EF1C75972EB44DB1EE06 * value)
	{
		___MediumRectangle_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___MediumRectangle_5), (void*)value);
	}

	inline static int32_t get_offset_of_IABBanner_6() { return static_cast<int32_t>(offsetof(AdSize_tB5E93E7747BF591D43F7EF1C75972EB44DB1EE06_StaticFields, ___IABBanner_6)); }
	inline AdSize_tB5E93E7747BF591D43F7EF1C75972EB44DB1EE06 * get_IABBanner_6() const { return ___IABBanner_6; }
	inline AdSize_tB5E93E7747BF591D43F7EF1C75972EB44DB1EE06 ** get_address_of_IABBanner_6() { return &___IABBanner_6; }
	inline void set_IABBanner_6(AdSize_tB5E93E7747BF591D43F7EF1C75972EB44DB1EE06 * value)
	{
		___IABBanner_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___IABBanner_6), (void*)value);
	}

	inline static int32_t get_offset_of_Leaderboard_7() { return static_cast<int32_t>(offsetof(AdSize_tB5E93E7747BF591D43F7EF1C75972EB44DB1EE06_StaticFields, ___Leaderboard_7)); }
	inline AdSize_tB5E93E7747BF591D43F7EF1C75972EB44DB1EE06 * get_Leaderboard_7() const { return ___Leaderboard_7; }
	inline AdSize_tB5E93E7747BF591D43F7EF1C75972EB44DB1EE06 ** get_address_of_Leaderboard_7() { return &___Leaderboard_7; }
	inline void set_Leaderboard_7(AdSize_tB5E93E7747BF591D43F7EF1C75972EB44DB1EE06 * value)
	{
		___Leaderboard_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Leaderboard_7), (void*)value);
	}

	inline static int32_t get_offset_of_SmartBanner_8() { return static_cast<int32_t>(offsetof(AdSize_tB5E93E7747BF591D43F7EF1C75972EB44DB1EE06_StaticFields, ___SmartBanner_8)); }
	inline AdSize_tB5E93E7747BF591D43F7EF1C75972EB44DB1EE06 * get_SmartBanner_8() const { return ___SmartBanner_8; }
	inline AdSize_tB5E93E7747BF591D43F7EF1C75972EB44DB1EE06 ** get_address_of_SmartBanner_8() { return &___SmartBanner_8; }
	inline void set_SmartBanner_8(AdSize_tB5E93E7747BF591D43F7EF1C75972EB44DB1EE06 * value)
	{
		___SmartBanner_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___SmartBanner_8), (void*)value);
	}

	inline static int32_t get_offset_of_FullWidth_9() { return static_cast<int32_t>(offsetof(AdSize_tB5E93E7747BF591D43F7EF1C75972EB44DB1EE06_StaticFields, ___FullWidth_9)); }
	inline int32_t get_FullWidth_9() const { return ___FullWidth_9; }
	inline int32_t* get_address_of_FullWidth_9() { return &___FullWidth_9; }
	inline void set_FullWidth_9(int32_t value)
	{
		___FullWidth_9 = value;
	}
};


// System.MulticastDelegate
struct MulticastDelegate_t  : public Delegate_t
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

// System.Type
struct Type_t  : public MemberInfo_t
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


// System.EventHandler`1<GoogleMobileAds.Common.AdErrorClientEventArgs>
struct EventHandler_1_tD7F1FCCC669FFEC2AC8F018E0D3673841C379CFB  : public MulticastDelegate_t
{
public:

public:
};


// System.EventHandler`1<GoogleMobileAds.Api.AdErrorEventArgs>
struct EventHandler_1_tDC66EDFC9EDBA9F3F32E6FC3AAD961F6EAFDE6BF  : public MulticastDelegate_t
{
public:

public:
};


// System.EventHandler`1<GoogleMobileAds.Api.AdFailedToLoadEventArgs>
struct EventHandler_1_tDDCD36D9EBF3319820B514E313E652EAA6373F30  : public MulticastDelegate_t
{
public:

public:
};


// System.EventHandler`1<GoogleMobileAds.Api.AdValueEventArgs>
struct EventHandler_1_t996E9F4D6ACC0E62DCB6129A804B31D7BBB73D36  : public MulticastDelegate_t
{
public:

public:
};


// System.EventHandler`1<System.EventArgs>
struct EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722  : public MulticastDelegate_t
{
public:

public:
};


// System.EventHandler`1<GoogleMobileAds.Common.LoadAdErrorClientEventArgs>
struct EventHandler_1_t3F280C24BFFA1F032DA3C628516C6CA0497B60B7  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif


// System.Void System.EventHandler`1<System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventHandler_1__ctor_m55B15D6747B269625FC10375E6008AA99BD498B4_gshared (EventHandler_1_tFA1C30E54FA1061D79E711F65F9A174BFBD8CDCB * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void System.EventHandler`1<System.Object>::Invoke(System.Object,!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventHandler_1_Invoke_mEAFD7F9E52E7DF356F3C4F0262BCFBA7769C83C0_gshared (EventHandler_1_tFA1C30E54FA1061D79E711F65F9A174BFBD8CDCB * __this, RuntimeObject * ___sender0, RuntimeObject * ___e1, const RuntimeMethod* method);

// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Void System.EventArgs::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventArgs__ctor_m5ECB9A8ED0A9E2DBB1ED999BAC1CB44F4354E571 (EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA * __this, const RuntimeMethod* method);
// GoogleMobileAds.IClientFactory GoogleMobileAds.Api.MobileAds::GetClientFactory()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* MobileAds_GetClientFactory_m4C38A16687444F18A251DB32693C8DD4435968FE (const RuntimeMethod* method);
// System.Void GoogleMobileAds.Api.BannerView::ConfigureBannerEvents()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BannerView_ConfigureBannerEvents_m22D1A80A3BB009314BBA75EEBBA19A9CE8B2A3FF (BannerView_t2AF4B88810A4F88438EE8247C2ECC044A77970A3 * __this, const RuntimeMethod* method);
// System.Delegate System.Delegate::Combine(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t * Delegate_Combine_m631D10D6CFF81AB4F237B9D549B235A54F45FA55 (Delegate_t * ___a0, Delegate_t * ___b1, const RuntimeMethod* method);
// System.Delegate System.Delegate::Remove(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t * Delegate_Remove_m8B4AD17254118B2904720D55C9B34FB3DCCBD7D4 (Delegate_t * ___source0, Delegate_t * ___value1, const RuntimeMethod* method);
// System.Void System.EventHandler`1<System.EventArgs>::.ctor(System.Object,System.IntPtr)
inline void EventHandler_1__ctor_m8148EF3B917382C44769399C79A42A3EA9C06C3C (EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 *, RuntimeObject *, intptr_t, const RuntimeMethod*))EventHandler_1__ctor_m55B15D6747B269625FC10375E6008AA99BD498B4_gshared)(__this, ___object0, ___method1, method);
}
// System.Void System.EventHandler`1<GoogleMobileAds.Common.LoadAdErrorClientEventArgs>::.ctor(System.Object,System.IntPtr)
inline void EventHandler_1__ctor_mA35F8E2CD63A4118CC2DB3D3E1437C371AAD80C3 (EventHandler_1_t3F280C24BFFA1F032DA3C628516C6CA0497B60B7 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (EventHandler_1_t3F280C24BFFA1F032DA3C628516C6CA0497B60B7 *, RuntimeObject *, intptr_t, const RuntimeMethod*))EventHandler_1__ctor_m55B15D6747B269625FC10375E6008AA99BD498B4_gshared)(__this, ___object0, ___method1, method);
}
// System.Void System.EventHandler`1<GoogleMobileAds.Api.AdValueEventArgs>::.ctor(System.Object,System.IntPtr)
inline void EventHandler_1__ctor_m87E9F320274BB593BD10C98313A918018044BA1F (EventHandler_1_t996E9F4D6ACC0E62DCB6129A804B31D7BBB73D36 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (EventHandler_1_t996E9F4D6ACC0E62DCB6129A804B31D7BBB73D36 *, RuntimeObject *, intptr_t, const RuntimeMethod*))EventHandler_1__ctor_m55B15D6747B269625FC10375E6008AA99BD498B4_gshared)(__this, ___object0, ___method1, method);
}
// System.Void System.EventHandler`1<System.EventArgs>::Invoke(System.Object,!0)
inline void EventHandler_1_Invoke_mF69BA60CAF322C4A19F99D91FA94DC3E842035DF (EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * __this, RuntimeObject * ___sender0, EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA * ___e1, const RuntimeMethod* method)
{
	((  void (*) (EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 *, RuntimeObject *, EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA *, const RuntimeMethod*))EventHandler_1_Invoke_mEAFD7F9E52E7DF356F3C4F0262BCFBA7769C83C0_gshared)(__this, ___sender0, ___e1, method);
}
// GoogleMobileAds.Common.ILoadAdErrorClient GoogleMobileAds.Common.LoadAdErrorClientEventArgs::get_LoadAdErrorClient()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* LoadAdErrorClientEventArgs_get_LoadAdErrorClient_mF8379F2375AB2F5BD4F0C47371DED5E32A72115B_inline (LoadAdErrorClientEventArgs_t8A40C29E27174A02407452A656DFB39DBD4BC34A * __this, const RuntimeMethod* method);
// System.Void GoogleMobileAds.Api.LoadAdError::.ctor(GoogleMobileAds.Common.ILoadAdErrorClient)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LoadAdError__ctor_m162C74F49A83EDAAE287922598CF7309B65B2872 (LoadAdError_tBFB45D1927C5841DC4D17C1A9D83BE8AD11413CD * __this, RuntimeObject* ___client0, const RuntimeMethod* method);
// System.Void GoogleMobileAds.Api.AdFailedToLoadEventArgs::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdFailedToLoadEventArgs__ctor_m4F60827DAE5FFF31835C1AA795ACEDFC859B2301 (AdFailedToLoadEventArgs_t0FCAC7A737ADF52DDC5C4048DFE6CE7B262BC1BE * __this, const RuntimeMethod* method);
// System.Void GoogleMobileAds.Api.AdFailedToLoadEventArgs::set_LoadAdError(GoogleMobileAds.Api.LoadAdError)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AdFailedToLoadEventArgs_set_LoadAdError_m57575ECA76FBACD3FCF5800A20D23851D86E035C_inline (AdFailedToLoadEventArgs_t0FCAC7A737ADF52DDC5C4048DFE6CE7B262BC1BE * __this, LoadAdError_tBFB45D1927C5841DC4D17C1A9D83BE8AD11413CD * ___value0, const RuntimeMethod* method);
// System.Void System.EventHandler`1<GoogleMobileAds.Api.AdFailedToLoadEventArgs>::Invoke(System.Object,!0)
inline void EventHandler_1_Invoke_m37F5E6E72E4C22B15241441EEF2D2D09F59FD9E9 (EventHandler_1_tDDCD36D9EBF3319820B514E313E652EAA6373F30 * __this, RuntimeObject * ___sender0, AdFailedToLoadEventArgs_t0FCAC7A737ADF52DDC5C4048DFE6CE7B262BC1BE * ___e1, const RuntimeMethod* method)
{
	((  void (*) (EventHandler_1_tDDCD36D9EBF3319820B514E313E652EAA6373F30 *, RuntimeObject *, AdFailedToLoadEventArgs_t0FCAC7A737ADF52DDC5C4048DFE6CE7B262BC1BE *, const RuntimeMethod*))EventHandler_1_Invoke_mEAFD7F9E52E7DF356F3C4F0262BCFBA7769C83C0_gshared)(__this, ___sender0, ___e1, method);
}
// System.Void System.EventHandler`1<GoogleMobileAds.Api.AdValueEventArgs>::Invoke(System.Object,!0)
inline void EventHandler_1_Invoke_mCA7CC675791204A44660E7CF8C1160710D7031B4 (EventHandler_1_t996E9F4D6ACC0E62DCB6129A804B31D7BBB73D36 * __this, RuntimeObject * ___sender0, AdValueEventArgs_tCBAEB27B4870A4B954AD1F9ABA126A58CC22B61A * ___e1, const RuntimeMethod* method)
{
	((  void (*) (EventHandler_1_t996E9F4D6ACC0E62DCB6129A804B31D7BBB73D36 *, RuntimeObject *, AdValueEventArgs_tCBAEB27B4870A4B954AD1F9ABA126A58CC22B61A *, const RuntimeMethod*))EventHandler_1_Invoke_mEAFD7F9E52E7DF356F3C4F0262BCFBA7769C83C0_gshared)(__this, ___sender0, ___e1, method);
}
// System.Void System.EventHandler`1<GoogleMobileAds.Common.AdErrorClientEventArgs>::.ctor(System.Object,System.IntPtr)
inline void EventHandler_1__ctor_m020945C2D19E72F87411D4D493B4A03FB53BB38F (EventHandler_1_tD7F1FCCC669FFEC2AC8F018E0D3673841C379CFB * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (EventHandler_1_tD7F1FCCC669FFEC2AC8F018E0D3673841C379CFB *, RuntimeObject *, intptr_t, const RuntimeMethod*))EventHandler_1__ctor_m55B15D6747B269625FC10375E6008AA99BD498B4_gshared)(__this, ___object0, ___method1, method);
}
// GoogleMobileAds.Common.IAdErrorClient GoogleMobileAds.Common.AdErrorClientEventArgs::get_AdErrorClient()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* AdErrorClientEventArgs_get_AdErrorClient_m4440FC4F2048A9051F6D26340A22D653D9C284D1_inline (AdErrorClientEventArgs_tB274856D2970370818325A72964ACBCC0150D549 * __this, const RuntimeMethod* method);
// System.Void GoogleMobileAds.Api.AdError::.ctor(GoogleMobileAds.Common.IAdErrorClient)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdError__ctor_mC38C346CF8A03E3DC984E12C538738E4FCB67BC3 (AdError_t9022DA046CC0B3FDB633F9A3CF4DEA2F9F7E61DF * __this, RuntimeObject* ___client0, const RuntimeMethod* method);
// System.Void GoogleMobileAds.Api.AdErrorEventArgs::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdErrorEventArgs__ctor_mDA9407103CD61DCD3656AA1DA2FC95756EDEFB77 (AdErrorEventArgs_t65E3F94DAC83D975258D8E0DF9D8D900638A5561 * __this, const RuntimeMethod* method);
// System.Void GoogleMobileAds.Api.AdErrorEventArgs::set_AdError(GoogleMobileAds.Api.AdError)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AdErrorEventArgs_set_AdError_m861B08F310E196385C79F1BC469E5B7D790E881C_inline (AdErrorEventArgs_t65E3F94DAC83D975258D8E0DF9D8D900638A5561 * __this, AdError_t9022DA046CC0B3FDB633F9A3CF4DEA2F9F7E61DF * ___value0, const RuntimeMethod* method);
// System.Void System.EventHandler`1<GoogleMobileAds.Api.AdErrorEventArgs>::Invoke(System.Object,!0)
inline void EventHandler_1_Invoke_m1AE09A3DB654992D28DDE8D74FAF0FD66855FB63 (EventHandler_1_tDC66EDFC9EDBA9F3F32E6FC3AAD961F6EAFDE6BF * __this, RuntimeObject * ___sender0, AdErrorEventArgs_t65E3F94DAC83D975258D8E0DF9D8D900638A5561 * ___e1, const RuntimeMethod* method)
{
	((  void (*) (EventHandler_1_tDC66EDFC9EDBA9F3F32E6FC3AAD961F6EAFDE6BF *, RuntimeObject *, AdErrorEventArgs_t65E3F94DAC83D975258D8E0DF9D8D900638A5561 *, const RuntimeMethod*))EventHandler_1_Invoke_mEAFD7F9E52E7DF356F3C4F0262BCFBA7769C83C0_gshared)(__this, ___sender0, ___e1, method);
}
// UnityEngine.RuntimePlatform UnityEngine.Application::get_platform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Application_get_platform_mB22F7F39CDD46667C3EF64507E55BB7DA18F66C4 (const RuntimeMethod* method);
// System.Object System.Activator::CreateInstance(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Activator_CreateInstance_m1BACAB5F4FBF138CCCB537DDCB0683A2AC064295 (Type_t * ___type0, const RuntimeMethod* method);
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
// System.Void GoogleMobileAds.Api.AdError::.ctor(GoogleMobileAds.Common.IAdErrorClient)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdError__ctor_mC38C346CF8A03E3DC984E12C538738E4FCB67BC3 (AdError_t9022DA046CC0B3FDB633F9A3CF4DEA2F9F7E61DF * __this, RuntimeObject* ___client0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		RuntimeObject* L_0 = ___client0;
		__this->set_client_0(L_0);
		return;
	}
}
// System.String GoogleMobileAds.Api.AdError::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AdError_ToString_m31CCDC54DECD29ECA162D855313F0705A2675C52 (AdError_t9022DA046CC0B3FDB633F9A3CF4DEA2F9F7E61DF * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = __this->get_client_0();
		NullCheck(L_0);
		String_t* L_1;
		L_1 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_0);
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
// System.Void GoogleMobileAds.Api.AdErrorEventArgs::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdErrorEventArgs__ctor_mDA9407103CD61DCD3656AA1DA2FC95756EDEFB77 (AdErrorEventArgs_t65E3F94DAC83D975258D8E0DF9D8D900638A5561 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA_il2cpp_TypeInfo_var);
		EventArgs__ctor_m5ECB9A8ED0A9E2DBB1ED999BAC1CB44F4354E571(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void GoogleMobileAds.Api.AdErrorEventArgs::set_AdError(GoogleMobileAds.Api.AdError)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdErrorEventArgs_set_AdError_m861B08F310E196385C79F1BC469E5B7D790E881C (AdErrorEventArgs_t65E3F94DAC83D975258D8E0DF9D8D900638A5561 * __this, AdError_t9022DA046CC0B3FDB633F9A3CF4DEA2F9F7E61DF * ___value0, const RuntimeMethod* method)
{
	{
		AdError_t9022DA046CC0B3FDB633F9A3CF4DEA2F9F7E61DF * L_0 = ___value0;
		__this->set_U3CAdErrorU3Ek__BackingField_1(L_0);
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
// System.Void GoogleMobileAds.Api.AdFailedToLoadEventArgs::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdFailedToLoadEventArgs__ctor_m4F60827DAE5FFF31835C1AA795ACEDFC859B2301 (AdFailedToLoadEventArgs_t0FCAC7A737ADF52DDC5C4048DFE6CE7B262BC1BE * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA_il2cpp_TypeInfo_var);
		EventArgs__ctor_m5ECB9A8ED0A9E2DBB1ED999BAC1CB44F4354E571(__this, /*hidden argument*/NULL);
		return;
	}
}
// GoogleMobileAds.Api.LoadAdError GoogleMobileAds.Api.AdFailedToLoadEventArgs::get_LoadAdError()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR LoadAdError_tBFB45D1927C5841DC4D17C1A9D83BE8AD11413CD * AdFailedToLoadEventArgs_get_LoadAdError_mE0117EBECCED9601511BD04D9831285267873D93 (AdFailedToLoadEventArgs_t0FCAC7A737ADF52DDC5C4048DFE6CE7B262BC1BE * __this, const RuntimeMethod* method)
{
	{
		LoadAdError_tBFB45D1927C5841DC4D17C1A9D83BE8AD11413CD * L_0 = __this->get_U3CLoadAdErrorU3Ek__BackingField_1();
		return L_0;
	}
}
// System.Void GoogleMobileAds.Api.AdFailedToLoadEventArgs::set_LoadAdError(GoogleMobileAds.Api.LoadAdError)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdFailedToLoadEventArgs_set_LoadAdError_m57575ECA76FBACD3FCF5800A20D23851D86E035C (AdFailedToLoadEventArgs_t0FCAC7A737ADF52DDC5C4048DFE6CE7B262BC1BE * __this, LoadAdError_tBFB45D1927C5841DC4D17C1A9D83BE8AD11413CD * ___value0, const RuntimeMethod* method)
{
	{
		LoadAdError_tBFB45D1927C5841DC4D17C1A9D83BE8AD11413CD * L_0 = ___value0;
		__this->set_U3CLoadAdErrorU3Ek__BackingField_1(L_0);
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
// System.Void GoogleMobileAds.Api.BannerView::.ctor(System.String,GoogleMobileAds.Api.AdSize,GoogleMobileAds.Api.AdPosition)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BannerView__ctor_mFF864899CD7456880253F63684F1F55B7CFD6366 (BannerView_t2AF4B88810A4F88438EE8247C2ECC044A77970A3 * __this, String_t* ___adUnitId0, AdSize_tB5E93E7747BF591D43F7EF1C75972EB44DB1EE06 * ___adSize1, int32_t ___position2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IBannerClient_t125B3FC4035692612780172A90790393C35E69B8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IClientFactory_tE5B92A915AE9D1C02BF62AE65493A2BB70ACFA2B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		RuntimeObject* L_0;
		L_0 = MobileAds_GetClientFactory_m4C38A16687444F18A251DB32693C8DD4435968FE(/*hidden argument*/NULL);
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* GoogleMobileAds.Common.IBannerClient GoogleMobileAds.IClientFactory::BuildBannerClient() */, IClientFactory_tE5B92A915AE9D1C02BF62AE65493A2BB70ACFA2B_il2cpp_TypeInfo_var, L_0);
		__this->set_client_0(L_1);
		RuntimeObject* L_2 = __this->get_client_0();
		String_t* L_3 = ___adUnitId0;
		AdSize_tB5E93E7747BF591D43F7EF1C75972EB44DB1EE06 * L_4 = ___adSize1;
		int32_t L_5 = ___position2;
		NullCheck(L_2);
		InterfaceActionInvoker3< String_t*, AdSize_tB5E93E7747BF591D43F7EF1C75972EB44DB1EE06 *, int32_t >::Invoke(10 /* System.Void GoogleMobileAds.Common.IBannerClient::CreateBannerView(System.String,GoogleMobileAds.Api.AdSize,GoogleMobileAds.Api.AdPosition) */, IBannerClient_t125B3FC4035692612780172A90790393C35E69B8_il2cpp_TypeInfo_var, L_2, L_3, L_4, L_5);
		BannerView_ConfigureBannerEvents_m22D1A80A3BB009314BBA75EEBBA19A9CE8B2A3FF(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void GoogleMobileAds.Api.BannerView::add_OnAdLoaded(System.EventHandler`1<System.EventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BannerView_add_OnAdLoaded_m506B2F7AD83FF1076D85B9F5FFEAC15283016B35 (BannerView_t2AF4B88810A4F88438EE8247C2ECC044A77970A3 * __this, EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * V_0 = NULL;
	EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * V_1 = NULL;
	{
		EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * L_0 = __this->get_OnAdLoaded_1();
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * L_1 = V_0;
		V_1 = L_1;
		EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 ** L_2 = __this->get_address_of_OnAdLoaded_1();
		EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * L_3 = V_1;
		EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * L_4 = ___value0;
		Delegate_t * L_5;
		L_5 = Delegate_Combine_m631D10D6CFF81AB4F237B9D549B235A54F45FA55(L_3, L_4, /*hidden argument*/NULL);
		EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * L_6 = V_0;
		EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * L_7;
		L_7 = InterlockedCompareExchangeImpl<EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 *>((EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 **)L_2, ((EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 *)CastclassSealed((RuntimeObject*)L_5, EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722_il2cpp_TypeInfo_var)), L_6);
		V_0 = L_7;
		EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * L_8 = V_0;
		EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * L_9 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 *)L_8) == ((RuntimeObject*)(EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 *)L_9))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void GoogleMobileAds.Api.BannerView::remove_OnAdLoaded(System.EventHandler`1<System.EventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BannerView_remove_OnAdLoaded_mC3F49BC24EFE1A619B3EC55C144E274F708880C1 (BannerView_t2AF4B88810A4F88438EE8247C2ECC044A77970A3 * __this, EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * V_0 = NULL;
	EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * V_1 = NULL;
	{
		EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * L_0 = __this->get_OnAdLoaded_1();
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * L_1 = V_0;
		V_1 = L_1;
		EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 ** L_2 = __this->get_address_of_OnAdLoaded_1();
		EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * L_3 = V_1;
		EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * L_4 = ___value0;
		Delegate_t * L_5;
		L_5 = Delegate_Remove_m8B4AD17254118B2904720D55C9B34FB3DCCBD7D4(L_3, L_4, /*hidden argument*/NULL);
		EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * L_6 = V_0;
		EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * L_7;
		L_7 = InterlockedCompareExchangeImpl<EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 *>((EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 **)L_2, ((EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 *)CastclassSealed((RuntimeObject*)L_5, EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722_il2cpp_TypeInfo_var)), L_6);
		V_0 = L_7;
		EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * L_8 = V_0;
		EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * L_9 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 *)L_8) == ((RuntimeObject*)(EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 *)L_9))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void GoogleMobileAds.Api.BannerView::add_OnAdFailedToLoad(System.EventHandler`1<GoogleMobileAds.Api.AdFailedToLoadEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BannerView_add_OnAdFailedToLoad_m78D418E3049E8C74A9D835FE595D20BC25F1EA0A (BannerView_t2AF4B88810A4F88438EE8247C2ECC044A77970A3 * __this, EventHandler_1_tDDCD36D9EBF3319820B514E313E652EAA6373F30 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_tDDCD36D9EBF3319820B514E313E652EAA6373F30_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_tDDCD36D9EBF3319820B514E313E652EAA6373F30 * V_0 = NULL;
	EventHandler_1_tDDCD36D9EBF3319820B514E313E652EAA6373F30 * V_1 = NULL;
	{
		EventHandler_1_tDDCD36D9EBF3319820B514E313E652EAA6373F30 * L_0 = __this->get_OnAdFailedToLoad_2();
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_1_tDDCD36D9EBF3319820B514E313E652EAA6373F30 * L_1 = V_0;
		V_1 = L_1;
		EventHandler_1_tDDCD36D9EBF3319820B514E313E652EAA6373F30 ** L_2 = __this->get_address_of_OnAdFailedToLoad_2();
		EventHandler_1_tDDCD36D9EBF3319820B514E313E652EAA6373F30 * L_3 = V_1;
		EventHandler_1_tDDCD36D9EBF3319820B514E313E652EAA6373F30 * L_4 = ___value0;
		Delegate_t * L_5;
		L_5 = Delegate_Combine_m631D10D6CFF81AB4F237B9D549B235A54F45FA55(L_3, L_4, /*hidden argument*/NULL);
		EventHandler_1_tDDCD36D9EBF3319820B514E313E652EAA6373F30 * L_6 = V_0;
		EventHandler_1_tDDCD36D9EBF3319820B514E313E652EAA6373F30 * L_7;
		L_7 = InterlockedCompareExchangeImpl<EventHandler_1_tDDCD36D9EBF3319820B514E313E652EAA6373F30 *>((EventHandler_1_tDDCD36D9EBF3319820B514E313E652EAA6373F30 **)L_2, ((EventHandler_1_tDDCD36D9EBF3319820B514E313E652EAA6373F30 *)CastclassSealed((RuntimeObject*)L_5, EventHandler_1_tDDCD36D9EBF3319820B514E313E652EAA6373F30_il2cpp_TypeInfo_var)), L_6);
		V_0 = L_7;
		EventHandler_1_tDDCD36D9EBF3319820B514E313E652EAA6373F30 * L_8 = V_0;
		EventHandler_1_tDDCD36D9EBF3319820B514E313E652EAA6373F30 * L_9 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_1_tDDCD36D9EBF3319820B514E313E652EAA6373F30 *)L_8) == ((RuntimeObject*)(EventHandler_1_tDDCD36D9EBF3319820B514E313E652EAA6373F30 *)L_9))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void GoogleMobileAds.Api.BannerView::remove_OnAdFailedToLoad(System.EventHandler`1<GoogleMobileAds.Api.AdFailedToLoadEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BannerView_remove_OnAdFailedToLoad_mEAF313631300F9BEA45846990977F8B7199BB348 (BannerView_t2AF4B88810A4F88438EE8247C2ECC044A77970A3 * __this, EventHandler_1_tDDCD36D9EBF3319820B514E313E652EAA6373F30 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_tDDCD36D9EBF3319820B514E313E652EAA6373F30_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_tDDCD36D9EBF3319820B514E313E652EAA6373F30 * V_0 = NULL;
	EventHandler_1_tDDCD36D9EBF3319820B514E313E652EAA6373F30 * V_1 = NULL;
	{
		EventHandler_1_tDDCD36D9EBF3319820B514E313E652EAA6373F30 * L_0 = __this->get_OnAdFailedToLoad_2();
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_1_tDDCD36D9EBF3319820B514E313E652EAA6373F30 * L_1 = V_0;
		V_1 = L_1;
		EventHandler_1_tDDCD36D9EBF3319820B514E313E652EAA6373F30 ** L_2 = __this->get_address_of_OnAdFailedToLoad_2();
		EventHandler_1_tDDCD36D9EBF3319820B514E313E652EAA6373F30 * L_3 = V_1;
		EventHandler_1_tDDCD36D9EBF3319820B514E313E652EAA6373F30 * L_4 = ___value0;
		Delegate_t * L_5;
		L_5 = Delegate_Remove_m8B4AD17254118B2904720D55C9B34FB3DCCBD7D4(L_3, L_4, /*hidden argument*/NULL);
		EventHandler_1_tDDCD36D9EBF3319820B514E313E652EAA6373F30 * L_6 = V_0;
		EventHandler_1_tDDCD36D9EBF3319820B514E313E652EAA6373F30 * L_7;
		L_7 = InterlockedCompareExchangeImpl<EventHandler_1_tDDCD36D9EBF3319820B514E313E652EAA6373F30 *>((EventHandler_1_tDDCD36D9EBF3319820B514E313E652EAA6373F30 **)L_2, ((EventHandler_1_tDDCD36D9EBF3319820B514E313E652EAA6373F30 *)CastclassSealed((RuntimeObject*)L_5, EventHandler_1_tDDCD36D9EBF3319820B514E313E652EAA6373F30_il2cpp_TypeInfo_var)), L_6);
		V_0 = L_7;
		EventHandler_1_tDDCD36D9EBF3319820B514E313E652EAA6373F30 * L_8 = V_0;
		EventHandler_1_tDDCD36D9EBF3319820B514E313E652EAA6373F30 * L_9 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_1_tDDCD36D9EBF3319820B514E313E652EAA6373F30 *)L_8) == ((RuntimeObject*)(EventHandler_1_tDDCD36D9EBF3319820B514E313E652EAA6373F30 *)L_9))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void GoogleMobileAds.Api.BannerView::LoadAd(GoogleMobileAds.Api.AdRequest)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BannerView_LoadAd_mB9CACDC88AB0BAA99E8C960D5965E58415B87159 (BannerView_t2AF4B88810A4F88438EE8247C2ECC044A77970A3 * __this, AdRequest_tE64CA6699EE4572F9D6651EED0BFE0244DAE34A2 * ___request0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IBannerClient_t125B3FC4035692612780172A90790393C35E69B8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->get_client_0();
		AdRequest_tE64CA6699EE4572F9D6651EED0BFE0244DAE34A2 * L_1 = ___request0;
		NullCheck(L_0);
		InterfaceActionInvoker1< AdRequest_tE64CA6699EE4572F9D6651EED0BFE0244DAE34A2 * >::Invoke(11 /* System.Void GoogleMobileAds.Common.IBannerClient::LoadAd(GoogleMobileAds.Api.AdRequest) */, IBannerClient_t125B3FC4035692612780172A90790393C35E69B8_il2cpp_TypeInfo_var, L_0, L_1);
		return;
	}
}
// System.Void GoogleMobileAds.Api.BannerView::Destroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BannerView_Destroy_m60D5728B5C0C01941D1C2B6E0D896884E16130D2 (BannerView_t2AF4B88810A4F88438EE8247C2ECC044A77970A3 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IBannerClient_t125B3FC4035692612780172A90790393C35E69B8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->get_client_0();
		NullCheck(L_0);
		InterfaceActionInvoker0::Invoke(12 /* System.Void GoogleMobileAds.Common.IBannerClient::DestroyBannerView() */, IBannerClient_t125B3FC4035692612780172A90790393C35E69B8_il2cpp_TypeInfo_var, L_0);
		return;
	}
}
// System.Void GoogleMobileAds.Api.BannerView::ConfigureBannerEvents()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BannerView_ConfigureBannerEvents_m22D1A80A3BB009314BBA75EEBBA19A9CE8B2A3FF (BannerView_t2AF4B88810A4F88438EE8247C2ECC044A77970A3 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BannerView_U3CConfigureBannerEventsU3Em__0_m9211309D6C31C2A40A45EA2CF437E9DB8EF555B8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BannerView_U3CConfigureBannerEventsU3Em__1_mE95A0FEB326EE53B1362DFDDEF8D8CCA940B6E06_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BannerView_U3CConfigureBannerEventsU3Em__2_mD9E55A16C5074FEA65D598928259C6CC0CB6DA15_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BannerView_U3CConfigureBannerEventsU3Em__3_m6508B7A4FE74974989D045F32224FD7E5E2F0A4E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BannerView_U3CConfigureBannerEventsU3Em__4_mE30966AA5238B99E6F365C0DAF8B43065E22507A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1__ctor_m8148EF3B917382C44769399C79A42A3EA9C06C3C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1__ctor_m87E9F320274BB593BD10C98313A918018044BA1F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1__ctor_mA35F8E2CD63A4118CC2DB3D3E1437C371AAD80C3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_t3F280C24BFFA1F032DA3C628516C6CA0497B60B7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_t996E9F4D6ACC0E62DCB6129A804B31D7BBB73D36_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IBannerClient_t125B3FC4035692612780172A90790393C35E69B8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->get_client_0();
		EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * L_1 = (EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 *)il2cpp_codegen_object_new(EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722_il2cpp_TypeInfo_var);
		EventHandler_1__ctor_m8148EF3B917382C44769399C79A42A3EA9C06C3C(L_1, __this, (intptr_t)((intptr_t)BannerView_U3CConfigureBannerEventsU3Em__0_m9211309D6C31C2A40A45EA2CF437E9DB8EF555B8_RuntimeMethod_var), /*hidden argument*/EventHandler_1__ctor_m8148EF3B917382C44769399C79A42A3EA9C06C3C_RuntimeMethod_var);
		NullCheck(L_0);
		InterfaceActionInvoker1< EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * >::Invoke(0 /* System.Void GoogleMobileAds.Common.IBannerClient::add_OnAdLoaded(System.EventHandler`1<System.EventArgs>) */, IBannerClient_t125B3FC4035692612780172A90790393C35E69B8_il2cpp_TypeInfo_var, L_0, L_1);
		RuntimeObject* L_2 = __this->get_client_0();
		EventHandler_1_t3F280C24BFFA1F032DA3C628516C6CA0497B60B7 * L_3 = (EventHandler_1_t3F280C24BFFA1F032DA3C628516C6CA0497B60B7 *)il2cpp_codegen_object_new(EventHandler_1_t3F280C24BFFA1F032DA3C628516C6CA0497B60B7_il2cpp_TypeInfo_var);
		EventHandler_1__ctor_mA35F8E2CD63A4118CC2DB3D3E1437C371AAD80C3(L_3, __this, (intptr_t)((intptr_t)BannerView_U3CConfigureBannerEventsU3Em__1_mE95A0FEB326EE53B1362DFDDEF8D8CCA940B6E06_RuntimeMethod_var), /*hidden argument*/EventHandler_1__ctor_mA35F8E2CD63A4118CC2DB3D3E1437C371AAD80C3_RuntimeMethod_var);
		NullCheck(L_2);
		InterfaceActionInvoker1< EventHandler_1_t3F280C24BFFA1F032DA3C628516C6CA0497B60B7 * >::Invoke(2 /* System.Void GoogleMobileAds.Common.IBannerClient::add_OnAdFailedToLoad(System.EventHandler`1<GoogleMobileAds.Common.LoadAdErrorClientEventArgs>) */, IBannerClient_t125B3FC4035692612780172A90790393C35E69B8_il2cpp_TypeInfo_var, L_2, L_3);
		RuntimeObject* L_4 = __this->get_client_0();
		EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * L_5 = (EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 *)il2cpp_codegen_object_new(EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722_il2cpp_TypeInfo_var);
		EventHandler_1__ctor_m8148EF3B917382C44769399C79A42A3EA9C06C3C(L_5, __this, (intptr_t)((intptr_t)BannerView_U3CConfigureBannerEventsU3Em__2_mD9E55A16C5074FEA65D598928259C6CC0CB6DA15_RuntimeMethod_var), /*hidden argument*/EventHandler_1__ctor_m8148EF3B917382C44769399C79A42A3EA9C06C3C_RuntimeMethod_var);
		NullCheck(L_4);
		InterfaceActionInvoker1< EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * >::Invoke(4 /* System.Void GoogleMobileAds.Common.IBannerClient::add_OnAdOpening(System.EventHandler`1<System.EventArgs>) */, IBannerClient_t125B3FC4035692612780172A90790393C35E69B8_il2cpp_TypeInfo_var, L_4, L_5);
		RuntimeObject* L_6 = __this->get_client_0();
		EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * L_7 = (EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 *)il2cpp_codegen_object_new(EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722_il2cpp_TypeInfo_var);
		EventHandler_1__ctor_m8148EF3B917382C44769399C79A42A3EA9C06C3C(L_7, __this, (intptr_t)((intptr_t)BannerView_U3CConfigureBannerEventsU3Em__3_m6508B7A4FE74974989D045F32224FD7E5E2F0A4E_RuntimeMethod_var), /*hidden argument*/EventHandler_1__ctor_m8148EF3B917382C44769399C79A42A3EA9C06C3C_RuntimeMethod_var);
		NullCheck(L_6);
		InterfaceActionInvoker1< EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * >::Invoke(6 /* System.Void GoogleMobileAds.Common.IBannerClient::add_OnAdClosed(System.EventHandler`1<System.EventArgs>) */, IBannerClient_t125B3FC4035692612780172A90790393C35E69B8_il2cpp_TypeInfo_var, L_6, L_7);
		RuntimeObject* L_8 = __this->get_client_0();
		EventHandler_1_t996E9F4D6ACC0E62DCB6129A804B31D7BBB73D36 * L_9 = (EventHandler_1_t996E9F4D6ACC0E62DCB6129A804B31D7BBB73D36 *)il2cpp_codegen_object_new(EventHandler_1_t996E9F4D6ACC0E62DCB6129A804B31D7BBB73D36_il2cpp_TypeInfo_var);
		EventHandler_1__ctor_m87E9F320274BB593BD10C98313A918018044BA1F(L_9, __this, (intptr_t)((intptr_t)BannerView_U3CConfigureBannerEventsU3Em__4_mE30966AA5238B99E6F365C0DAF8B43065E22507A_RuntimeMethod_var), /*hidden argument*/EventHandler_1__ctor_m87E9F320274BB593BD10C98313A918018044BA1F_RuntimeMethod_var);
		NullCheck(L_8);
		InterfaceActionInvoker1< EventHandler_1_t996E9F4D6ACC0E62DCB6129A804B31D7BBB73D36 * >::Invoke(8 /* System.Void GoogleMobileAds.Common.IBannerClient::add_OnPaidEvent(System.EventHandler`1<GoogleMobileAds.Api.AdValueEventArgs>) */, IBannerClient_t125B3FC4035692612780172A90790393C35E69B8_il2cpp_TypeInfo_var, L_8, L_9);
		return;
	}
}
// System.Void GoogleMobileAds.Api.BannerView::<ConfigureBannerEvents>m__0(System.Object,System.EventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BannerView_U3CConfigureBannerEventsU3Em__0_m9211309D6C31C2A40A45EA2CF437E9DB8EF555B8 (BannerView_t2AF4B88810A4F88438EE8247C2ECC044A77970A3 * __this, RuntimeObject * ___sender0, EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA * ___args1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_Invoke_mF69BA60CAF322C4A19F99D91FA94DC3E842035DF_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * L_0 = __this->get_OnAdLoaded_1();
		if (!L_0)
		{
			goto IL_0018;
		}
	}
	{
		EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * L_1 = __this->get_OnAdLoaded_1();
		EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA * L_2 = ___args1;
		NullCheck(L_1);
		EventHandler_1_Invoke_mF69BA60CAF322C4A19F99D91FA94DC3E842035DF(L_1, __this, L_2, /*hidden argument*/EventHandler_1_Invoke_mF69BA60CAF322C4A19F99D91FA94DC3E842035DF_RuntimeMethod_var);
	}

IL_0018:
	{
		return;
	}
}
// System.Void GoogleMobileAds.Api.BannerView::<ConfigureBannerEvents>m__1(System.Object,GoogleMobileAds.Common.LoadAdErrorClientEventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BannerView_U3CConfigureBannerEventsU3Em__1_mE95A0FEB326EE53B1362DFDDEF8D8CCA940B6E06 (BannerView_t2AF4B88810A4F88438EE8247C2ECC044A77970A3 * __this, RuntimeObject * ___sender0, LoadAdErrorClientEventArgs_t8A40C29E27174A02407452A656DFB39DBD4BC34A * ___args1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AdFailedToLoadEventArgs_t0FCAC7A737ADF52DDC5C4048DFE6CE7B262BC1BE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_Invoke_m37F5E6E72E4C22B15241441EEF2D2D09F59FD9E9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LoadAdError_tBFB45D1927C5841DC4D17C1A9D83BE8AD11413CD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	LoadAdError_tBFB45D1927C5841DC4D17C1A9D83BE8AD11413CD * V_0 = NULL;
	AdFailedToLoadEventArgs_t0FCAC7A737ADF52DDC5C4048DFE6CE7B262BC1BE * V_1 = NULL;
	{
		EventHandler_1_tDDCD36D9EBF3319820B514E313E652EAA6373F30 * L_0 = __this->get_OnAdFailedToLoad_2();
		if (!L_0)
		{
			goto IL_0031;
		}
	}
	{
		LoadAdErrorClientEventArgs_t8A40C29E27174A02407452A656DFB39DBD4BC34A * L_1 = ___args1;
		NullCheck(L_1);
		RuntimeObject* L_2;
		L_2 = LoadAdErrorClientEventArgs_get_LoadAdErrorClient_mF8379F2375AB2F5BD4F0C47371DED5E32A72115B_inline(L_1, /*hidden argument*/NULL);
		LoadAdError_tBFB45D1927C5841DC4D17C1A9D83BE8AD11413CD * L_3 = (LoadAdError_tBFB45D1927C5841DC4D17C1A9D83BE8AD11413CD *)il2cpp_codegen_object_new(LoadAdError_tBFB45D1927C5841DC4D17C1A9D83BE8AD11413CD_il2cpp_TypeInfo_var);
		LoadAdError__ctor_m162C74F49A83EDAAE287922598CF7309B65B2872(L_3, L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		EventHandler_1_tDDCD36D9EBF3319820B514E313E652EAA6373F30 * L_4 = __this->get_OnAdFailedToLoad_2();
		AdFailedToLoadEventArgs_t0FCAC7A737ADF52DDC5C4048DFE6CE7B262BC1BE * L_5 = (AdFailedToLoadEventArgs_t0FCAC7A737ADF52DDC5C4048DFE6CE7B262BC1BE *)il2cpp_codegen_object_new(AdFailedToLoadEventArgs_t0FCAC7A737ADF52DDC5C4048DFE6CE7B262BC1BE_il2cpp_TypeInfo_var);
		AdFailedToLoadEventArgs__ctor_m4F60827DAE5FFF31835C1AA795ACEDFC859B2301(L_5, /*hidden argument*/NULL);
		V_1 = L_5;
		AdFailedToLoadEventArgs_t0FCAC7A737ADF52DDC5C4048DFE6CE7B262BC1BE * L_6 = V_1;
		LoadAdError_tBFB45D1927C5841DC4D17C1A9D83BE8AD11413CD * L_7 = V_0;
		NullCheck(L_6);
		AdFailedToLoadEventArgs_set_LoadAdError_m57575ECA76FBACD3FCF5800A20D23851D86E035C_inline(L_6, L_7, /*hidden argument*/NULL);
		AdFailedToLoadEventArgs_t0FCAC7A737ADF52DDC5C4048DFE6CE7B262BC1BE * L_8 = V_1;
		NullCheck(L_4);
		EventHandler_1_Invoke_m37F5E6E72E4C22B15241441EEF2D2D09F59FD9E9(L_4, __this, L_8, /*hidden argument*/EventHandler_1_Invoke_m37F5E6E72E4C22B15241441EEF2D2D09F59FD9E9_RuntimeMethod_var);
	}

IL_0031:
	{
		return;
	}
}
// System.Void GoogleMobileAds.Api.BannerView::<ConfigureBannerEvents>m__2(System.Object,System.EventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BannerView_U3CConfigureBannerEventsU3Em__2_mD9E55A16C5074FEA65D598928259C6CC0CB6DA15 (BannerView_t2AF4B88810A4F88438EE8247C2ECC044A77970A3 * __this, RuntimeObject * ___sender0, EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA * ___args1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_Invoke_mF69BA60CAF322C4A19F99D91FA94DC3E842035DF_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * L_0 = __this->get_OnAdOpening_3();
		if (!L_0)
		{
			goto IL_0018;
		}
	}
	{
		EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * L_1 = __this->get_OnAdOpening_3();
		EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA * L_2 = ___args1;
		NullCheck(L_1);
		EventHandler_1_Invoke_mF69BA60CAF322C4A19F99D91FA94DC3E842035DF(L_1, __this, L_2, /*hidden argument*/EventHandler_1_Invoke_mF69BA60CAF322C4A19F99D91FA94DC3E842035DF_RuntimeMethod_var);
	}

IL_0018:
	{
		return;
	}
}
// System.Void GoogleMobileAds.Api.BannerView::<ConfigureBannerEvents>m__3(System.Object,System.EventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BannerView_U3CConfigureBannerEventsU3Em__3_m6508B7A4FE74974989D045F32224FD7E5E2F0A4E (BannerView_t2AF4B88810A4F88438EE8247C2ECC044A77970A3 * __this, RuntimeObject * ___sender0, EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA * ___args1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_Invoke_mF69BA60CAF322C4A19F99D91FA94DC3E842035DF_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * L_0 = __this->get_OnAdClosed_4();
		if (!L_0)
		{
			goto IL_0018;
		}
	}
	{
		EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * L_1 = __this->get_OnAdClosed_4();
		EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA * L_2 = ___args1;
		NullCheck(L_1);
		EventHandler_1_Invoke_mF69BA60CAF322C4A19F99D91FA94DC3E842035DF(L_1, __this, L_2, /*hidden argument*/EventHandler_1_Invoke_mF69BA60CAF322C4A19F99D91FA94DC3E842035DF_RuntimeMethod_var);
	}

IL_0018:
	{
		return;
	}
}
// System.Void GoogleMobileAds.Api.BannerView::<ConfigureBannerEvents>m__4(System.Object,GoogleMobileAds.Api.AdValueEventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BannerView_U3CConfigureBannerEventsU3Em__4_mE30966AA5238B99E6F365C0DAF8B43065E22507A (BannerView_t2AF4B88810A4F88438EE8247C2ECC044A77970A3 * __this, RuntimeObject * ___sender0, AdValueEventArgs_tCBAEB27B4870A4B954AD1F9ABA126A58CC22B61A * ___args1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_Invoke_mCA7CC675791204A44660E7CF8C1160710D7031B4_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		EventHandler_1_t996E9F4D6ACC0E62DCB6129A804B31D7BBB73D36 * L_0 = __this->get_OnPaidEvent_5();
		if (!L_0)
		{
			goto IL_0018;
		}
	}
	{
		EventHandler_1_t996E9F4D6ACC0E62DCB6129A804B31D7BBB73D36 * L_1 = __this->get_OnPaidEvent_5();
		AdValueEventArgs_tCBAEB27B4870A4B954AD1F9ABA126A58CC22B61A * L_2 = ___args1;
		NullCheck(L_1);
		EventHandler_1_Invoke_mCA7CC675791204A44660E7CF8C1160710D7031B4(L_1, __this, L_2, /*hidden argument*/EventHandler_1_Invoke_mCA7CC675791204A44660E7CF8C1160710D7031B4_RuntimeMethod_var);
	}

IL_0018:
	{
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
// System.Void GoogleMobileAds.Api.InterstitialAd::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InterstitialAd__ctor_m466F1ABACA88AFBE2E47014092E29981D8954B44 (InterstitialAd_t0C7114E2B2C5A272A720D8F1B91ECAB3A2962EB1 * __this, String_t* ___adUnitId0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1__ctor_m020945C2D19E72F87411D4D493B4A03FB53BB38F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1__ctor_m8148EF3B917382C44769399C79A42A3EA9C06C3C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1__ctor_m87E9F320274BB593BD10C98313A918018044BA1F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1__ctor_mA35F8E2CD63A4118CC2DB3D3E1437C371AAD80C3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_t3F280C24BFFA1F032DA3C628516C6CA0497B60B7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_t996E9F4D6ACC0E62DCB6129A804B31D7BBB73D36_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_tD7F1FCCC669FFEC2AC8F018E0D3673841C379CFB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IClientFactory_tE5B92A915AE9D1C02BF62AE65493A2BB70ACFA2B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IInterstitialClient_tBDBA03A3C778B5223070C3B5B6DAEB0679B2B6A6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InterstitialAd_U3CInterstitialAdU3Em__0_m455A8A5BF6AB2EF58D61F22A8E647FBE43E0A627_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InterstitialAd_U3CInterstitialAdU3Em__1_m4AB5D26E9730C969FE7DA41C1AF130050D09E865_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InterstitialAd_U3CInterstitialAdU3Em__2_m8E50A34566DA3E9484FC68007F44C8AB57E8EF23_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InterstitialAd_U3CInterstitialAdU3Em__3_m847FEEDC73896FC7E4C14EC94518CA12A7A9B8EC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InterstitialAd_U3CInterstitialAdU3Em__4_m07347F8C1DC5124F710FD328C8DC3DFF2025CBEB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InterstitialAd_U3CInterstitialAdU3Em__5_m5F4E1BDBF49C353A56F47933F48A17D6ADEAACD7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InterstitialAd_U3CInterstitialAdU3Em__6_m89B45428576EB8BF288A7EC57208D38F04A6687C_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		RuntimeObject* L_0;
		L_0 = MobileAds_GetClientFactory_m4C38A16687444F18A251DB32693C8DD4435968FE(/*hidden argument*/NULL);
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(1 /* GoogleMobileAds.Common.IInterstitialClient GoogleMobileAds.IClientFactory::BuildInterstitialClient() */, IClientFactory_tE5B92A915AE9D1C02BF62AE65493A2BB70ACFA2B_il2cpp_TypeInfo_var, L_0);
		__this->set_client_0(L_1);
		String_t* L_2 = ___adUnitId0;
		__this->set_adUnitId_1(L_2);
		__this->set_isLoaded_2((bool)0);
		RuntimeObject* L_3 = __this->get_client_0();
		NullCheck(L_3);
		InterfaceActionInvoker0::Invoke(14 /* System.Void GoogleMobileAds.Common.IInterstitialClient::CreateInterstitialAd() */, IInterstitialClient_tBDBA03A3C778B5223070C3B5B6DAEB0679B2B6A6_il2cpp_TypeInfo_var, L_3);
		RuntimeObject* L_4 = __this->get_client_0();
		EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * L_5 = (EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 *)il2cpp_codegen_object_new(EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722_il2cpp_TypeInfo_var);
		EventHandler_1__ctor_m8148EF3B917382C44769399C79A42A3EA9C06C3C(L_5, __this, (intptr_t)((intptr_t)InterstitialAd_U3CInterstitialAdU3Em__0_m455A8A5BF6AB2EF58D61F22A8E647FBE43E0A627_RuntimeMethod_var), /*hidden argument*/EventHandler_1__ctor_m8148EF3B917382C44769399C79A42A3EA9C06C3C_RuntimeMethod_var);
		NullCheck(L_4);
		InterfaceActionInvoker1< EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * >::Invoke(0 /* System.Void GoogleMobileAds.Common.IInterstitialClient::add_OnAdLoaded(System.EventHandler`1<System.EventArgs>) */, IInterstitialClient_tBDBA03A3C778B5223070C3B5B6DAEB0679B2B6A6_il2cpp_TypeInfo_var, L_4, L_5);
		RuntimeObject* L_6 = __this->get_client_0();
		EventHandler_1_t3F280C24BFFA1F032DA3C628516C6CA0497B60B7 * L_7 = (EventHandler_1_t3F280C24BFFA1F032DA3C628516C6CA0497B60B7 *)il2cpp_codegen_object_new(EventHandler_1_t3F280C24BFFA1F032DA3C628516C6CA0497B60B7_il2cpp_TypeInfo_var);
		EventHandler_1__ctor_mA35F8E2CD63A4118CC2DB3D3E1437C371AAD80C3(L_7, __this, (intptr_t)((intptr_t)InterstitialAd_U3CInterstitialAdU3Em__1_m4AB5D26E9730C969FE7DA41C1AF130050D09E865_RuntimeMethod_var), /*hidden argument*/EventHandler_1__ctor_mA35F8E2CD63A4118CC2DB3D3E1437C371AAD80C3_RuntimeMethod_var);
		NullCheck(L_6);
		InterfaceActionInvoker1< EventHandler_1_t3F280C24BFFA1F032DA3C628516C6CA0497B60B7 * >::Invoke(2 /* System.Void GoogleMobileAds.Common.IInterstitialClient::add_OnAdFailedToLoad(System.EventHandler`1<GoogleMobileAds.Common.LoadAdErrorClientEventArgs>) */, IInterstitialClient_tBDBA03A3C778B5223070C3B5B6DAEB0679B2B6A6_il2cpp_TypeInfo_var, L_6, L_7);
		RuntimeObject* L_8 = __this->get_client_0();
		EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * L_9 = (EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 *)il2cpp_codegen_object_new(EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722_il2cpp_TypeInfo_var);
		EventHandler_1__ctor_m8148EF3B917382C44769399C79A42A3EA9C06C3C(L_9, __this, (intptr_t)((intptr_t)InterstitialAd_U3CInterstitialAdU3Em__2_m8E50A34566DA3E9484FC68007F44C8AB57E8EF23_RuntimeMethod_var), /*hidden argument*/EventHandler_1__ctor_m8148EF3B917382C44769399C79A42A3EA9C06C3C_RuntimeMethod_var);
		NullCheck(L_8);
		InterfaceActionInvoker1< EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * >::Invoke(8 /* System.Void GoogleMobileAds.Common.IInterstitialClient::add_OnAdDidPresentFullScreenContent(System.EventHandler`1<System.EventArgs>) */, IInterstitialClient_tBDBA03A3C778B5223070C3B5B6DAEB0679B2B6A6_il2cpp_TypeInfo_var, L_8, L_9);
		RuntimeObject* L_10 = __this->get_client_0();
		EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * L_11 = (EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 *)il2cpp_codegen_object_new(EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722_il2cpp_TypeInfo_var);
		EventHandler_1__ctor_m8148EF3B917382C44769399C79A42A3EA9C06C3C(L_11, __this, (intptr_t)((intptr_t)InterstitialAd_U3CInterstitialAdU3Em__3_m847FEEDC73896FC7E4C14EC94518CA12A7A9B8EC_RuntimeMethod_var), /*hidden argument*/EventHandler_1__ctor_m8148EF3B917382C44769399C79A42A3EA9C06C3C_RuntimeMethod_var);
		NullCheck(L_10);
		InterfaceActionInvoker1< EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * >::Invoke(10 /* System.Void GoogleMobileAds.Common.IInterstitialClient::add_OnAdDidDismissFullScreenContent(System.EventHandler`1<System.EventArgs>) */, IInterstitialClient_tBDBA03A3C778B5223070C3B5B6DAEB0679B2B6A6_il2cpp_TypeInfo_var, L_10, L_11);
		RuntimeObject* L_12 = __this->get_client_0();
		EventHandler_1_tD7F1FCCC669FFEC2AC8F018E0D3673841C379CFB * L_13 = (EventHandler_1_tD7F1FCCC669FFEC2AC8F018E0D3673841C379CFB *)il2cpp_codegen_object_new(EventHandler_1_tD7F1FCCC669FFEC2AC8F018E0D3673841C379CFB_il2cpp_TypeInfo_var);
		EventHandler_1__ctor_m020945C2D19E72F87411D4D493B4A03FB53BB38F(L_13, __this, (intptr_t)((intptr_t)InterstitialAd_U3CInterstitialAdU3Em__4_m07347F8C1DC5124F710FD328C8DC3DFF2025CBEB_RuntimeMethod_var), /*hidden argument*/EventHandler_1__ctor_m020945C2D19E72F87411D4D493B4A03FB53BB38F_RuntimeMethod_var);
		NullCheck(L_12);
		InterfaceActionInvoker1< EventHandler_1_tD7F1FCCC669FFEC2AC8F018E0D3673841C379CFB * >::Invoke(6 /* System.Void GoogleMobileAds.Common.IInterstitialClient::add_OnAdFailedToPresentFullScreenContent(System.EventHandler`1<GoogleMobileAds.Common.AdErrorClientEventArgs>) */, IInterstitialClient_tBDBA03A3C778B5223070C3B5B6DAEB0679B2B6A6_il2cpp_TypeInfo_var, L_12, L_13);
		RuntimeObject* L_14 = __this->get_client_0();
		EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * L_15 = (EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 *)il2cpp_codegen_object_new(EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722_il2cpp_TypeInfo_var);
		EventHandler_1__ctor_m8148EF3B917382C44769399C79A42A3EA9C06C3C(L_15, __this, (intptr_t)((intptr_t)InterstitialAd_U3CInterstitialAdU3Em__5_m5F4E1BDBF49C353A56F47933F48A17D6ADEAACD7_RuntimeMethod_var), /*hidden argument*/EventHandler_1__ctor_m8148EF3B917382C44769399C79A42A3EA9C06C3C_RuntimeMethod_var);
		NullCheck(L_14);
		InterfaceActionInvoker1< EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * >::Invoke(12 /* System.Void GoogleMobileAds.Common.IInterstitialClient::add_OnAdDidRecordImpression(System.EventHandler`1<System.EventArgs>) */, IInterstitialClient_tBDBA03A3C778B5223070C3B5B6DAEB0679B2B6A6_il2cpp_TypeInfo_var, L_14, L_15);
		RuntimeObject* L_16 = __this->get_client_0();
		EventHandler_1_t996E9F4D6ACC0E62DCB6129A804B31D7BBB73D36 * L_17 = (EventHandler_1_t996E9F4D6ACC0E62DCB6129A804B31D7BBB73D36 *)il2cpp_codegen_object_new(EventHandler_1_t996E9F4D6ACC0E62DCB6129A804B31D7BBB73D36_il2cpp_TypeInfo_var);
		EventHandler_1__ctor_m87E9F320274BB593BD10C98313A918018044BA1F(L_17, __this, (intptr_t)((intptr_t)InterstitialAd_U3CInterstitialAdU3Em__6_m89B45428576EB8BF288A7EC57208D38F04A6687C_RuntimeMethod_var), /*hidden argument*/EventHandler_1__ctor_m87E9F320274BB593BD10C98313A918018044BA1F_RuntimeMethod_var);
		NullCheck(L_16);
		InterfaceActionInvoker1< EventHandler_1_t996E9F4D6ACC0E62DCB6129A804B31D7BBB73D36 * >::Invoke(4 /* System.Void GoogleMobileAds.Common.IInterstitialClient::add_OnPaidEvent(System.EventHandler`1<GoogleMobileAds.Api.AdValueEventArgs>) */, IInterstitialClient_tBDBA03A3C778B5223070C3B5B6DAEB0679B2B6A6_il2cpp_TypeInfo_var, L_16, L_17);
		return;
	}
}
// System.Void GoogleMobileAds.Api.InterstitialAd::add_OnAdLoaded(System.EventHandler`1<System.EventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InterstitialAd_add_OnAdLoaded_mCDBDFB7120A1BF227BC161DFF486D3405BBDA951 (InterstitialAd_t0C7114E2B2C5A272A720D8F1B91ECAB3A2962EB1 * __this, EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * V_0 = NULL;
	EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * V_1 = NULL;
	{
		EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * L_0 = __this->get_OnAdLoaded_3();
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * L_1 = V_0;
		V_1 = L_1;
		EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 ** L_2 = __this->get_address_of_OnAdLoaded_3();
		EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * L_3 = V_1;
		EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * L_4 = ___value0;
		Delegate_t * L_5;
		L_5 = Delegate_Combine_m631D10D6CFF81AB4F237B9D549B235A54F45FA55(L_3, L_4, /*hidden argument*/NULL);
		EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * L_6 = V_0;
		EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * L_7;
		L_7 = InterlockedCompareExchangeImpl<EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 *>((EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 **)L_2, ((EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 *)CastclassSealed((RuntimeObject*)L_5, EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722_il2cpp_TypeInfo_var)), L_6);
		V_0 = L_7;
		EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * L_8 = V_0;
		EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * L_9 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 *)L_8) == ((RuntimeObject*)(EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 *)L_9))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void GoogleMobileAds.Api.InterstitialAd::remove_OnAdLoaded(System.EventHandler`1<System.EventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InterstitialAd_remove_OnAdLoaded_m50ECDEDBD0DD9A866AB9B3FDD0F52C67A43B8E0C (InterstitialAd_t0C7114E2B2C5A272A720D8F1B91ECAB3A2962EB1 * __this, EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * V_0 = NULL;
	EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * V_1 = NULL;
	{
		EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * L_0 = __this->get_OnAdLoaded_3();
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * L_1 = V_0;
		V_1 = L_1;
		EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 ** L_2 = __this->get_address_of_OnAdLoaded_3();
		EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * L_3 = V_1;
		EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * L_4 = ___value0;
		Delegate_t * L_5;
		L_5 = Delegate_Remove_m8B4AD17254118B2904720D55C9B34FB3DCCBD7D4(L_3, L_4, /*hidden argument*/NULL);
		EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * L_6 = V_0;
		EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * L_7;
		L_7 = InterlockedCompareExchangeImpl<EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 *>((EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 **)L_2, ((EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 *)CastclassSealed((RuntimeObject*)L_5, EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722_il2cpp_TypeInfo_var)), L_6);
		V_0 = L_7;
		EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * L_8 = V_0;
		EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * L_9 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 *)L_8) == ((RuntimeObject*)(EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 *)L_9))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void GoogleMobileAds.Api.InterstitialAd::add_OnAdFailedToLoad(System.EventHandler`1<GoogleMobileAds.Api.AdFailedToLoadEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InterstitialAd_add_OnAdFailedToLoad_mF07D125984B7F813661A1CCB841CECAED255AC45 (InterstitialAd_t0C7114E2B2C5A272A720D8F1B91ECAB3A2962EB1 * __this, EventHandler_1_tDDCD36D9EBF3319820B514E313E652EAA6373F30 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_tDDCD36D9EBF3319820B514E313E652EAA6373F30_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_tDDCD36D9EBF3319820B514E313E652EAA6373F30 * V_0 = NULL;
	EventHandler_1_tDDCD36D9EBF3319820B514E313E652EAA6373F30 * V_1 = NULL;
	{
		EventHandler_1_tDDCD36D9EBF3319820B514E313E652EAA6373F30 * L_0 = __this->get_OnAdFailedToLoad_4();
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_1_tDDCD36D9EBF3319820B514E313E652EAA6373F30 * L_1 = V_0;
		V_1 = L_1;
		EventHandler_1_tDDCD36D9EBF3319820B514E313E652EAA6373F30 ** L_2 = __this->get_address_of_OnAdFailedToLoad_4();
		EventHandler_1_tDDCD36D9EBF3319820B514E313E652EAA6373F30 * L_3 = V_1;
		EventHandler_1_tDDCD36D9EBF3319820B514E313E652EAA6373F30 * L_4 = ___value0;
		Delegate_t * L_5;
		L_5 = Delegate_Combine_m631D10D6CFF81AB4F237B9D549B235A54F45FA55(L_3, L_4, /*hidden argument*/NULL);
		EventHandler_1_tDDCD36D9EBF3319820B514E313E652EAA6373F30 * L_6 = V_0;
		EventHandler_1_tDDCD36D9EBF3319820B514E313E652EAA6373F30 * L_7;
		L_7 = InterlockedCompareExchangeImpl<EventHandler_1_tDDCD36D9EBF3319820B514E313E652EAA6373F30 *>((EventHandler_1_tDDCD36D9EBF3319820B514E313E652EAA6373F30 **)L_2, ((EventHandler_1_tDDCD36D9EBF3319820B514E313E652EAA6373F30 *)CastclassSealed((RuntimeObject*)L_5, EventHandler_1_tDDCD36D9EBF3319820B514E313E652EAA6373F30_il2cpp_TypeInfo_var)), L_6);
		V_0 = L_7;
		EventHandler_1_tDDCD36D9EBF3319820B514E313E652EAA6373F30 * L_8 = V_0;
		EventHandler_1_tDDCD36D9EBF3319820B514E313E652EAA6373F30 * L_9 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_1_tDDCD36D9EBF3319820B514E313E652EAA6373F30 *)L_8) == ((RuntimeObject*)(EventHandler_1_tDDCD36D9EBF3319820B514E313E652EAA6373F30 *)L_9))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void GoogleMobileAds.Api.InterstitialAd::remove_OnAdFailedToLoad(System.EventHandler`1<GoogleMobileAds.Api.AdFailedToLoadEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InterstitialAd_remove_OnAdFailedToLoad_mC237AED821C39C03DB9F02036282DB6B7963C035 (InterstitialAd_t0C7114E2B2C5A272A720D8F1B91ECAB3A2962EB1 * __this, EventHandler_1_tDDCD36D9EBF3319820B514E313E652EAA6373F30 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_tDDCD36D9EBF3319820B514E313E652EAA6373F30_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_tDDCD36D9EBF3319820B514E313E652EAA6373F30 * V_0 = NULL;
	EventHandler_1_tDDCD36D9EBF3319820B514E313E652EAA6373F30 * V_1 = NULL;
	{
		EventHandler_1_tDDCD36D9EBF3319820B514E313E652EAA6373F30 * L_0 = __this->get_OnAdFailedToLoad_4();
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_1_tDDCD36D9EBF3319820B514E313E652EAA6373F30 * L_1 = V_0;
		V_1 = L_1;
		EventHandler_1_tDDCD36D9EBF3319820B514E313E652EAA6373F30 ** L_2 = __this->get_address_of_OnAdFailedToLoad_4();
		EventHandler_1_tDDCD36D9EBF3319820B514E313E652EAA6373F30 * L_3 = V_1;
		EventHandler_1_tDDCD36D9EBF3319820B514E313E652EAA6373F30 * L_4 = ___value0;
		Delegate_t * L_5;
		L_5 = Delegate_Remove_m8B4AD17254118B2904720D55C9B34FB3DCCBD7D4(L_3, L_4, /*hidden argument*/NULL);
		EventHandler_1_tDDCD36D9EBF3319820B514E313E652EAA6373F30 * L_6 = V_0;
		EventHandler_1_tDDCD36D9EBF3319820B514E313E652EAA6373F30 * L_7;
		L_7 = InterlockedCompareExchangeImpl<EventHandler_1_tDDCD36D9EBF3319820B514E313E652EAA6373F30 *>((EventHandler_1_tDDCD36D9EBF3319820B514E313E652EAA6373F30 **)L_2, ((EventHandler_1_tDDCD36D9EBF3319820B514E313E652EAA6373F30 *)CastclassSealed((RuntimeObject*)L_5, EventHandler_1_tDDCD36D9EBF3319820B514E313E652EAA6373F30_il2cpp_TypeInfo_var)), L_6);
		V_0 = L_7;
		EventHandler_1_tDDCD36D9EBF3319820B514E313E652EAA6373F30 * L_8 = V_0;
		EventHandler_1_tDDCD36D9EBF3319820B514E313E652EAA6373F30 * L_9 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_1_tDDCD36D9EBF3319820B514E313E652EAA6373F30 *)L_8) == ((RuntimeObject*)(EventHandler_1_tDDCD36D9EBF3319820B514E313E652EAA6373F30 *)L_9))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void GoogleMobileAds.Api.InterstitialAd::add_OnAdClosed(System.EventHandler`1<System.EventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InterstitialAd_add_OnAdClosed_mAF5C18E6713BA8DAC7EFE2C134B1D2117AC42C77 (InterstitialAd_t0C7114E2B2C5A272A720D8F1B91ECAB3A2962EB1 * __this, EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * V_0 = NULL;
	EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * V_1 = NULL;
	{
		EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * L_0 = __this->get_OnAdClosed_6();
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * L_1 = V_0;
		V_1 = L_1;
		EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 ** L_2 = __this->get_address_of_OnAdClosed_6();
		EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * L_3 = V_1;
		EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * L_4 = ___value0;
		Delegate_t * L_5;
		L_5 = Delegate_Combine_m631D10D6CFF81AB4F237B9D549B235A54F45FA55(L_3, L_4, /*hidden argument*/NULL);
		EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * L_6 = V_0;
		EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * L_7;
		L_7 = InterlockedCompareExchangeImpl<EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 *>((EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 **)L_2, ((EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 *)CastclassSealed((RuntimeObject*)L_5, EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722_il2cpp_TypeInfo_var)), L_6);
		V_0 = L_7;
		EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * L_8 = V_0;
		EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * L_9 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 *)L_8) == ((RuntimeObject*)(EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 *)L_9))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void GoogleMobileAds.Api.InterstitialAd::remove_OnAdClosed(System.EventHandler`1<System.EventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InterstitialAd_remove_OnAdClosed_m16767D501D07A33D1C7DA590E8961160654F4BD4 (InterstitialAd_t0C7114E2B2C5A272A720D8F1B91ECAB3A2962EB1 * __this, EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * V_0 = NULL;
	EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * V_1 = NULL;
	{
		EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * L_0 = __this->get_OnAdClosed_6();
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * L_1 = V_0;
		V_1 = L_1;
		EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 ** L_2 = __this->get_address_of_OnAdClosed_6();
		EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * L_3 = V_1;
		EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * L_4 = ___value0;
		Delegate_t * L_5;
		L_5 = Delegate_Remove_m8B4AD17254118B2904720D55C9B34FB3DCCBD7D4(L_3, L_4, /*hidden argument*/NULL);
		EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * L_6 = V_0;
		EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * L_7;
		L_7 = InterlockedCompareExchangeImpl<EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 *>((EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 **)L_2, ((EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 *)CastclassSealed((RuntimeObject*)L_5, EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722_il2cpp_TypeInfo_var)), L_6);
		V_0 = L_7;
		EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * L_8 = V_0;
		EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * L_9 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 *)L_8) == ((RuntimeObject*)(EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 *)L_9))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void GoogleMobileAds.Api.InterstitialAd::LoadAd(GoogleMobileAds.Api.AdRequest)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InterstitialAd_LoadAd_mD77748B1D4354B9CE35D3242CBDBEFD92E574BD0 (InterstitialAd_t0C7114E2B2C5A272A720D8F1B91ECAB3A2962EB1 * __this, AdRequest_tE64CA6699EE4572F9D6651EED0BFE0244DAE34A2 * ___request0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IInterstitialClient_tBDBA03A3C778B5223070C3B5B6DAEB0679B2B6A6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->get_client_0();
		String_t* L_1 = __this->get_adUnitId_1();
		AdRequest_tE64CA6699EE4572F9D6651EED0BFE0244DAE34A2 * L_2 = ___request0;
		NullCheck(L_0);
		InterfaceActionInvoker2< String_t*, AdRequest_tE64CA6699EE4572F9D6651EED0BFE0244DAE34A2 * >::Invoke(15 /* System.Void GoogleMobileAds.Common.IInterstitialClient::LoadAd(System.String,GoogleMobileAds.Api.AdRequest) */, IInterstitialClient_tBDBA03A3C778B5223070C3B5B6DAEB0679B2B6A6_il2cpp_TypeInfo_var, L_0, L_1, L_2);
		return;
	}
}
// System.Boolean GoogleMobileAds.Api.InterstitialAd::IsLoaded()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool InterstitialAd_IsLoaded_m3A41B1D590D97C9FB80C0681C3FFD2B486751ED1 (InterstitialAd_t0C7114E2B2C5A272A720D8F1B91ECAB3A2962EB1 * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get_isLoaded_2();
		return L_0;
	}
}
// System.Void GoogleMobileAds.Api.InterstitialAd::Show()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InterstitialAd_Show_m4D6142D4E8EB052A48C6869472572AC636FFB00C (InterstitialAd_t0C7114E2B2C5A272A720D8F1B91ECAB3A2962EB1 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IInterstitialClient_tBDBA03A3C778B5223070C3B5B6DAEB0679B2B6A6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->set_isLoaded_2((bool)0);
		RuntimeObject* L_0 = __this->get_client_0();
		NullCheck(L_0);
		InterfaceActionInvoker0::Invoke(16 /* System.Void GoogleMobileAds.Common.IInterstitialClient::Show() */, IInterstitialClient_tBDBA03A3C778B5223070C3B5B6DAEB0679B2B6A6_il2cpp_TypeInfo_var, L_0);
		return;
	}
}
// System.Void GoogleMobileAds.Api.InterstitialAd::Destroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InterstitialAd_Destroy_mF32986278E6DAE3382F7DE3BB2F707D2460F0107 (InterstitialAd_t0C7114E2B2C5A272A720D8F1B91ECAB3A2962EB1 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IInterstitialClient_tBDBA03A3C778B5223070C3B5B6DAEB0679B2B6A6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->get_client_0();
		NullCheck(L_0);
		InterfaceActionInvoker0::Invoke(17 /* System.Void GoogleMobileAds.Common.IInterstitialClient::DestroyInterstitial() */, IInterstitialClient_tBDBA03A3C778B5223070C3B5B6DAEB0679B2B6A6_il2cpp_TypeInfo_var, L_0);
		return;
	}
}
// System.Void GoogleMobileAds.Api.InterstitialAd::<InterstitialAd>m__0(System.Object,System.EventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InterstitialAd_U3CInterstitialAdU3Em__0_m455A8A5BF6AB2EF58D61F22A8E647FBE43E0A627 (InterstitialAd_t0C7114E2B2C5A272A720D8F1B91ECAB3A2962EB1 * __this, RuntimeObject * ___sender0, EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA * ___args1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_Invoke_mF69BA60CAF322C4A19F99D91FA94DC3E842035DF_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->set_isLoaded_2((bool)1);
		EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * L_0 = __this->get_OnAdLoaded_3();
		if (!L_0)
		{
			goto IL_001f;
		}
	}
	{
		EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * L_1 = __this->get_OnAdLoaded_3();
		EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA * L_2 = ___args1;
		NullCheck(L_1);
		EventHandler_1_Invoke_mF69BA60CAF322C4A19F99D91FA94DC3E842035DF(L_1, __this, L_2, /*hidden argument*/EventHandler_1_Invoke_mF69BA60CAF322C4A19F99D91FA94DC3E842035DF_RuntimeMethod_var);
	}

IL_001f:
	{
		return;
	}
}
// System.Void GoogleMobileAds.Api.InterstitialAd::<InterstitialAd>m__1(System.Object,GoogleMobileAds.Common.LoadAdErrorClientEventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InterstitialAd_U3CInterstitialAdU3Em__1_m4AB5D26E9730C969FE7DA41C1AF130050D09E865 (InterstitialAd_t0C7114E2B2C5A272A720D8F1B91ECAB3A2962EB1 * __this, RuntimeObject * ___sender0, LoadAdErrorClientEventArgs_t8A40C29E27174A02407452A656DFB39DBD4BC34A * ___args1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AdFailedToLoadEventArgs_t0FCAC7A737ADF52DDC5C4048DFE6CE7B262BC1BE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_Invoke_m37F5E6E72E4C22B15241441EEF2D2D09F59FD9E9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LoadAdError_tBFB45D1927C5841DC4D17C1A9D83BE8AD11413CD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	LoadAdError_tBFB45D1927C5841DC4D17C1A9D83BE8AD11413CD * V_0 = NULL;
	AdFailedToLoadEventArgs_t0FCAC7A737ADF52DDC5C4048DFE6CE7B262BC1BE * V_1 = NULL;
	{
		EventHandler_1_tDDCD36D9EBF3319820B514E313E652EAA6373F30 * L_0 = __this->get_OnAdFailedToLoad_4();
		if (!L_0)
		{
			goto IL_0031;
		}
	}
	{
		LoadAdErrorClientEventArgs_t8A40C29E27174A02407452A656DFB39DBD4BC34A * L_1 = ___args1;
		NullCheck(L_1);
		RuntimeObject* L_2;
		L_2 = LoadAdErrorClientEventArgs_get_LoadAdErrorClient_mF8379F2375AB2F5BD4F0C47371DED5E32A72115B_inline(L_1, /*hidden argument*/NULL);
		LoadAdError_tBFB45D1927C5841DC4D17C1A9D83BE8AD11413CD * L_3 = (LoadAdError_tBFB45D1927C5841DC4D17C1A9D83BE8AD11413CD *)il2cpp_codegen_object_new(LoadAdError_tBFB45D1927C5841DC4D17C1A9D83BE8AD11413CD_il2cpp_TypeInfo_var);
		LoadAdError__ctor_m162C74F49A83EDAAE287922598CF7309B65B2872(L_3, L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		EventHandler_1_tDDCD36D9EBF3319820B514E313E652EAA6373F30 * L_4 = __this->get_OnAdFailedToLoad_4();
		AdFailedToLoadEventArgs_t0FCAC7A737ADF52DDC5C4048DFE6CE7B262BC1BE * L_5 = (AdFailedToLoadEventArgs_t0FCAC7A737ADF52DDC5C4048DFE6CE7B262BC1BE *)il2cpp_codegen_object_new(AdFailedToLoadEventArgs_t0FCAC7A737ADF52DDC5C4048DFE6CE7B262BC1BE_il2cpp_TypeInfo_var);
		AdFailedToLoadEventArgs__ctor_m4F60827DAE5FFF31835C1AA795ACEDFC859B2301(L_5, /*hidden argument*/NULL);
		V_1 = L_5;
		AdFailedToLoadEventArgs_t0FCAC7A737ADF52DDC5C4048DFE6CE7B262BC1BE * L_6 = V_1;
		LoadAdError_tBFB45D1927C5841DC4D17C1A9D83BE8AD11413CD * L_7 = V_0;
		NullCheck(L_6);
		AdFailedToLoadEventArgs_set_LoadAdError_m57575ECA76FBACD3FCF5800A20D23851D86E035C_inline(L_6, L_7, /*hidden argument*/NULL);
		AdFailedToLoadEventArgs_t0FCAC7A737ADF52DDC5C4048DFE6CE7B262BC1BE * L_8 = V_1;
		NullCheck(L_4);
		EventHandler_1_Invoke_m37F5E6E72E4C22B15241441EEF2D2D09F59FD9E9(L_4, __this, L_8, /*hidden argument*/EventHandler_1_Invoke_m37F5E6E72E4C22B15241441EEF2D2D09F59FD9E9_RuntimeMethod_var);
	}

IL_0031:
	{
		return;
	}
}
// System.Void GoogleMobileAds.Api.InterstitialAd::<InterstitialAd>m__2(System.Object,System.EventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InterstitialAd_U3CInterstitialAdU3Em__2_m8E50A34566DA3E9484FC68007F44C8AB57E8EF23 (InterstitialAd_t0C7114E2B2C5A272A720D8F1B91ECAB3A2962EB1 * __this, RuntimeObject * ___sender0, EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA * ___args1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_Invoke_mF69BA60CAF322C4A19F99D91FA94DC3E842035DF_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * L_0 = __this->get_OnAdOpening_5();
		if (!L_0)
		{
			goto IL_0018;
		}
	}
	{
		EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * L_1 = __this->get_OnAdOpening_5();
		EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA * L_2 = ___args1;
		NullCheck(L_1);
		EventHandler_1_Invoke_mF69BA60CAF322C4A19F99D91FA94DC3E842035DF(L_1, __this, L_2, /*hidden argument*/EventHandler_1_Invoke_mF69BA60CAF322C4A19F99D91FA94DC3E842035DF_RuntimeMethod_var);
	}

IL_0018:
	{
		return;
	}
}
// System.Void GoogleMobileAds.Api.InterstitialAd::<InterstitialAd>m__3(System.Object,System.EventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InterstitialAd_U3CInterstitialAdU3Em__3_m847FEEDC73896FC7E4C14EC94518CA12A7A9B8EC (InterstitialAd_t0C7114E2B2C5A272A720D8F1B91ECAB3A2962EB1 * __this, RuntimeObject * ___sender0, EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA * ___args1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_Invoke_mF69BA60CAF322C4A19F99D91FA94DC3E842035DF_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * L_0 = __this->get_OnAdClosed_6();
		if (!L_0)
		{
			goto IL_0018;
		}
	}
	{
		EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * L_1 = __this->get_OnAdClosed_6();
		EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA * L_2 = ___args1;
		NullCheck(L_1);
		EventHandler_1_Invoke_mF69BA60CAF322C4A19F99D91FA94DC3E842035DF(L_1, __this, L_2, /*hidden argument*/EventHandler_1_Invoke_mF69BA60CAF322C4A19F99D91FA94DC3E842035DF_RuntimeMethod_var);
	}

IL_0018:
	{
		return;
	}
}
// System.Void GoogleMobileAds.Api.InterstitialAd::<InterstitialAd>m__4(System.Object,GoogleMobileAds.Common.AdErrorClientEventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InterstitialAd_U3CInterstitialAdU3Em__4_m07347F8C1DC5124F710FD328C8DC3DFF2025CBEB (InterstitialAd_t0C7114E2B2C5A272A720D8F1B91ECAB3A2962EB1 * __this, RuntimeObject * ___sender0, AdErrorClientEventArgs_tB274856D2970370818325A72964ACBCC0150D549 * ___args1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AdErrorEventArgs_t65E3F94DAC83D975258D8E0DF9D8D900638A5561_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AdError_t9022DA046CC0B3FDB633F9A3CF4DEA2F9F7E61DF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_Invoke_m1AE09A3DB654992D28DDE8D74FAF0FD66855FB63_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	AdError_t9022DA046CC0B3FDB633F9A3CF4DEA2F9F7E61DF * V_0 = NULL;
	AdErrorEventArgs_t65E3F94DAC83D975258D8E0DF9D8D900638A5561 * V_1 = NULL;
	{
		EventHandler_1_tDC66EDFC9EDBA9F3F32E6FC3AAD961F6EAFDE6BF * L_0 = __this->get_OnAdFailedToShow_7();
		if (!L_0)
		{
			goto IL_0031;
		}
	}
	{
		AdErrorClientEventArgs_tB274856D2970370818325A72964ACBCC0150D549 * L_1 = ___args1;
		NullCheck(L_1);
		RuntimeObject* L_2;
		L_2 = AdErrorClientEventArgs_get_AdErrorClient_m4440FC4F2048A9051F6D26340A22D653D9C284D1_inline(L_1, /*hidden argument*/NULL);
		AdError_t9022DA046CC0B3FDB633F9A3CF4DEA2F9F7E61DF * L_3 = (AdError_t9022DA046CC0B3FDB633F9A3CF4DEA2F9F7E61DF *)il2cpp_codegen_object_new(AdError_t9022DA046CC0B3FDB633F9A3CF4DEA2F9F7E61DF_il2cpp_TypeInfo_var);
		AdError__ctor_mC38C346CF8A03E3DC984E12C538738E4FCB67BC3(L_3, L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		EventHandler_1_tDC66EDFC9EDBA9F3F32E6FC3AAD961F6EAFDE6BF * L_4 = __this->get_OnAdFailedToShow_7();
		AdErrorEventArgs_t65E3F94DAC83D975258D8E0DF9D8D900638A5561 * L_5 = (AdErrorEventArgs_t65E3F94DAC83D975258D8E0DF9D8D900638A5561 *)il2cpp_codegen_object_new(AdErrorEventArgs_t65E3F94DAC83D975258D8E0DF9D8D900638A5561_il2cpp_TypeInfo_var);
		AdErrorEventArgs__ctor_mDA9407103CD61DCD3656AA1DA2FC95756EDEFB77(L_5, /*hidden argument*/NULL);
		V_1 = L_5;
		AdErrorEventArgs_t65E3F94DAC83D975258D8E0DF9D8D900638A5561 * L_6 = V_1;
		AdError_t9022DA046CC0B3FDB633F9A3CF4DEA2F9F7E61DF * L_7 = V_0;
		NullCheck(L_6);
		AdErrorEventArgs_set_AdError_m861B08F310E196385C79F1BC469E5B7D790E881C_inline(L_6, L_7, /*hidden argument*/NULL);
		AdErrorEventArgs_t65E3F94DAC83D975258D8E0DF9D8D900638A5561 * L_8 = V_1;
		NullCheck(L_4);
		EventHandler_1_Invoke_m1AE09A3DB654992D28DDE8D74FAF0FD66855FB63(L_4, __this, L_8, /*hidden argument*/EventHandler_1_Invoke_m1AE09A3DB654992D28DDE8D74FAF0FD66855FB63_RuntimeMethod_var);
	}

IL_0031:
	{
		return;
	}
}
// System.Void GoogleMobileAds.Api.InterstitialAd::<InterstitialAd>m__5(System.Object,System.EventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InterstitialAd_U3CInterstitialAdU3Em__5_m5F4E1BDBF49C353A56F47933F48A17D6ADEAACD7 (InterstitialAd_t0C7114E2B2C5A272A720D8F1B91ECAB3A2962EB1 * __this, RuntimeObject * ___sender0, EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA * ___args1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_Invoke_mF69BA60CAF322C4A19F99D91FA94DC3E842035DF_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * L_0 = __this->get_OnAdDidRecordImpression_8();
		if (!L_0)
		{
			goto IL_0018;
		}
	}
	{
		EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * L_1 = __this->get_OnAdDidRecordImpression_8();
		EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA * L_2 = ___args1;
		NullCheck(L_1);
		EventHandler_1_Invoke_mF69BA60CAF322C4A19F99D91FA94DC3E842035DF(L_1, __this, L_2, /*hidden argument*/EventHandler_1_Invoke_mF69BA60CAF322C4A19F99D91FA94DC3E842035DF_RuntimeMethod_var);
	}

IL_0018:
	{
		return;
	}
}
// System.Void GoogleMobileAds.Api.InterstitialAd::<InterstitialAd>m__6(System.Object,GoogleMobileAds.Api.AdValueEventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InterstitialAd_U3CInterstitialAdU3Em__6_m89B45428576EB8BF288A7EC57208D38F04A6687C (InterstitialAd_t0C7114E2B2C5A272A720D8F1B91ECAB3A2962EB1 * __this, RuntimeObject * ___sender0, AdValueEventArgs_tCBAEB27B4870A4B954AD1F9ABA126A58CC22B61A * ___args1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_Invoke_mCA7CC675791204A44660E7CF8C1160710D7031B4_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		EventHandler_1_t996E9F4D6ACC0E62DCB6129A804B31D7BBB73D36 * L_0 = __this->get_OnPaidEvent_9();
		if (!L_0)
		{
			goto IL_0018;
		}
	}
	{
		EventHandler_1_t996E9F4D6ACC0E62DCB6129A804B31D7BBB73D36 * L_1 = __this->get_OnPaidEvent_9();
		AdValueEventArgs_tCBAEB27B4870A4B954AD1F9ABA126A58CC22B61A * L_2 = ___args1;
		NullCheck(L_1);
		EventHandler_1_Invoke_mCA7CC675791204A44660E7CF8C1160710D7031B4(L_1, __this, L_2, /*hidden argument*/EventHandler_1_Invoke_mCA7CC675791204A44660E7CF8C1160710D7031B4_RuntimeMethod_var);
	}

IL_0018:
	{
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
// System.Void GoogleMobileAds.Api.LoadAdError::.ctor(GoogleMobileAds.Common.ILoadAdErrorClient)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LoadAdError__ctor_m162C74F49A83EDAAE287922598CF7309B65B2872 (LoadAdError_tBFB45D1927C5841DC4D17C1A9D83BE8AD11413CD * __this, RuntimeObject* ___client0, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = ___client0;
		AdError__ctor_mC38C346CF8A03E3DC984E12C538738E4FCB67BC3(__this, L_0, /*hidden argument*/NULL);
		RuntimeObject* L_1 = ___client0;
		__this->set_client_1(L_1);
		return;
	}
}
// System.String GoogleMobileAds.Api.LoadAdError::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* LoadAdError_ToString_mCBED4EDB2CB490D8D8E12EB1C2A4FD900F84C601 (LoadAdError_tBFB45D1927C5841DC4D17C1A9D83BE8AD11413CD * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = __this->get_client_1();
		NullCheck(L_0);
		String_t* L_1;
		L_1 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_0);
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
// GoogleMobileAds.IClientFactory GoogleMobileAds.Api.MobileAds::GetClientFactory()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* MobileAds_GetClientFactory_m4C38A16687444F18A251DB32693C8DD4435968FE (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IClientFactory_tE5B92A915AE9D1C02BF62AE65493A2BB70ACFA2B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MobileAds_GetClientFactory_m4C38A16687444F18A251DB32693C8DD4435968FE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MobileAds_tE6974DF09C22E7D4699F202504E3C6E61F2712BE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_GetType_m2D692327E10692E11116805CC604CD47F144A9E4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1E40C18D8AC4A6D9A62D3A099D09AF791342A6DB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB0496525135724A6D7138AB94BD6661514AD7DAE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBDD22D9991854F9B5ADA35715330812319A1362B);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	Type_t * V_1 = NULL;
	{
		RuntimeObject* L_0 = ((MobileAds_tE6974DF09C22E7D4699F202504E3C6E61F2712BE_StaticFields*)il2cpp_codegen_static_fields_for(MobileAds_tE6974DF09C22E7D4699F202504E3C6E61F2712BE_il2cpp_TypeInfo_var))->get_clientFactory_0();
		if (L_0)
		{
			goto IL_0056;
		}
	}
	{
		V_0 = (String_t*)NULL;
		int32_t L_1;
		L_1 = Application_get_platform_mB22F7F39CDD46667C3EF64507E55BB7DA18F66C4(/*hidden argument*/NULL);
		if ((!(((uint32_t)L_1) == ((uint32_t)8))))
		{
			goto IL_0022;
		}
	}
	{
		V_0 = _stringLiteral1E40C18D8AC4A6D9A62D3A099D09AF791342A6DB;
		goto IL_003f;
	}

IL_0022:
	{
		int32_t L_2;
		L_2 = Application_get_platform_mB22F7F39CDD46667C3EF64507E55BB7DA18F66C4(/*hidden argument*/NULL);
		if ((!(((uint32_t)L_2) == ((uint32_t)((int32_t)11)))))
		{
			goto IL_0039;
		}
	}
	{
		V_0 = _stringLiteralBDD22D9991854F9B5ADA35715330812319A1362B;
		goto IL_003f;
	}

IL_0039:
	{
		V_0 = _stringLiteralB0496525135724A6D7138AB94BD6661514AD7DAE;
	}

IL_003f:
	{
		String_t* L_3 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_4;
		L_4 = il2cpp_codegen_get_type(Type_GetType_m2D692327E10692E11116805CC604CD47F144A9E4_RuntimeMethod_var, L_3, MobileAds_GetClientFactory_m4C38A16687444F18A251DB32693C8DD4435968FE_RuntimeMethod_var);
		V_1 = L_4;
		Type_t * L_5 = V_1;
		RuntimeObject * L_6;
		L_6 = Activator_CreateInstance_m1BACAB5F4FBF138CCCB537DDCB0683A2AC064295(L_5, /*hidden argument*/NULL);
		((MobileAds_tE6974DF09C22E7D4699F202504E3C6E61F2712BE_StaticFields*)il2cpp_codegen_static_fields_for(MobileAds_tE6974DF09C22E7D4699F202504E3C6E61F2712BE_il2cpp_TypeInfo_var))->set_clientFactory_0(((RuntimeObject*)Castclass((RuntimeObject*)L_6, IClientFactory_tE5B92A915AE9D1C02BF62AE65493A2BB70ACFA2B_il2cpp_TypeInfo_var)));
	}

IL_0056:
	{
		RuntimeObject* L_7 = ((MobileAds_tE6974DF09C22E7D4699F202504E3C6E61F2712BE_StaticFields*)il2cpp_codegen_static_fields_for(MobileAds_tE6974DF09C22E7D4699F202504E3C6E61F2712BE_il2cpp_TypeInfo_var))->get_clientFactory_0();
		return L_7;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* LoadAdErrorClientEventArgs_get_LoadAdErrorClient_mF8379F2375AB2F5BD4F0C47371DED5E32A72115B_inline (LoadAdErrorClientEventArgs_t8A40C29E27174A02407452A656DFB39DBD4BC34A * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = __this->get_U3CLoadAdErrorClientU3Ek__BackingField_1();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AdFailedToLoadEventArgs_set_LoadAdError_m57575ECA76FBACD3FCF5800A20D23851D86E035C_inline (AdFailedToLoadEventArgs_t0FCAC7A737ADF52DDC5C4048DFE6CE7B262BC1BE * __this, LoadAdError_tBFB45D1927C5841DC4D17C1A9D83BE8AD11413CD * ___value0, const RuntimeMethod* method)
{
	{
		LoadAdError_tBFB45D1927C5841DC4D17C1A9D83BE8AD11413CD * L_0 = ___value0;
		__this->set_U3CLoadAdErrorU3Ek__BackingField_1(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* AdErrorClientEventArgs_get_AdErrorClient_m4440FC4F2048A9051F6D26340A22D653D9C284D1_inline (AdErrorClientEventArgs_tB274856D2970370818325A72964ACBCC0150D549 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = __this->get_U3CAdErrorClientU3Ek__BackingField_1();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AdErrorEventArgs_set_AdError_m861B08F310E196385C79F1BC469E5B7D790E881C_inline (AdErrorEventArgs_t65E3F94DAC83D975258D8E0DF9D8D900638A5561 * __this, AdError_t9022DA046CC0B3FDB633F9A3CF4DEA2F9F7E61DF * ___value0, const RuntimeMethod* method)
{
	{
		AdError_t9022DA046CC0B3FDB633F9A3CF4DEA2F9F7E61DF * L_0 = ___value0;
		__this->set_U3CAdErrorU3Ek__BackingField_1(L_0);
		return;
	}
}
