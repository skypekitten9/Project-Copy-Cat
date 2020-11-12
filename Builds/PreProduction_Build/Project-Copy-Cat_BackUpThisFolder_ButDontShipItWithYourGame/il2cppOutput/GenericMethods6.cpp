#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <stdint.h>
#include <limits>


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

// System.Action
struct Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6;
// UnityEngine.AndroidJavaObject
struct AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E;
// System.ArgumentNullException
struct ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB;
// System.AsyncCallback
struct AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA;
// System.Reflection.Binder
struct Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30;
// System.Threading.CancellationTokenSource
struct CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3;
// System.Threading.ContextCallback
struct ContextCallback_t93707E0430F4FF3E15E1FB5A4844BE89C657AE8B;
// System.DelegateData
struct DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288;
// System.Threading.ExecutionContext
struct ExecutionContext_t16AC73BB21FEEEAD34A017877AC18DD8BB836414;
// UnityEngine.GlobalJavaObjectRef
struct GlobalJavaObjectRef_t04A7D04EB0317C286F089E4DB4444EC4F2D78289;
// System.IAsyncResult
struct IAsyncResult_tC9F97BF36FCF122D29D3101D80642278297BF370;
// System.Runtime.CompilerServices.IAsyncStateMachine
struct IAsyncStateMachine_tAE063F84A60E1058FCA4E3EA9F555D3462641F7D;
// System.Collections.IDictionary
struct IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A;
// System.Reflection.MemberFilter
struct MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.Rendering.ProfilingSampler
struct ProfilingSampler_tD118E30126C252A7D5064D4AD84B497A9CAB6E92;
// System.Security.Cryptography.RandomNumberGenerator
struct RandomNumberGenerator_t2CB5440F189986116A2FA9F907AE52644047AC50;
// UnityEngine.Experimental.Rendering.RenderGraphModule.RenderGraphObjectPool
struct RenderGraphObjectPool_t40847D412C9FE90411FB6390EC6C4B5F8485B681;
// UnityEngine.Experimental.Rendering.RenderGraphModule.RenderGraphResourceRegistry
struct RenderGraphResourceRegistry_t25B71B4D5C2C9AE9DC7ED50F3D95AE125668EF66;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F;
// System.Threading.SemaphoreSlim
struct SemaphoreSlim_t3EF85FC980AE57957BEBB6B78E81DE2E3233D385;
// System.Threading.Tasks.StackGuard
struct StackGuard_t88E1EE4741AD02CA5FEA04A4EB2CC70F230E0E6D;
// System.Threading.SynchronizationContext
struct SynchronizationContext_t17D9365B5E0D30A0910A16FA4351C525232EF069;
// System.Threading.Tasks.Task
struct Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60;
// System.Threading.Tasks.TaskFactory
struct TaskFactory_t22D999A05A967C31A4B5FFBD08864809BF35EA3B;
// System.Threading.Tasks.TaskScheduler
struct TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D;
// System.Threading.Thread
struct Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;
// System.Runtime.CompilerServices.AsyncMethodBuilderCore/MoveNextRunner
struct MoveNextRunner_tFAEA0BEDD353E2E34E8E287C67B1F5572FD30C2D;
// UnityEngine.Experimental.Rendering.RenderGraphModule.RenderGraph/RenderPass
struct RenderPass_tE9D4B9C3BB0DB42CFD72034E0288AF39ABCAAA51;
// System.Threading.SemaphoreSlim/TaskNode
struct TaskNode_tD3014A57510D018F890E6524AC62F9417E2E6C4E;
// System.Threading.Tasks.Task/ContingentProperties
struct ContingentProperties_t1E249C737B8B8644ED1D60EEFA101D326B199EA0;
// System.Action`1<System.Object>
struct Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Threading.Tasks.Task>
struct Dictionary_2_tB758E2A2593CD827EFC041BE1F1BB4B68DE1C3E8;
// System.Func`1<System.Threading.Tasks.Task/ContingentProperties>
struct Func_1_tBCF42601FA307876E83080BE4204110820F8BF3B;
// System.Func`2<System.Int32,System.Int32>
struct Func_2_tFF6AE79EFD0857556AD37A1A1594C43F76012FEA;
// System.Func`2<System.Int32,System.Boolean>
struct Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274;
// System.Func`2<System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>,System.Threading.Tasks.Task`1<System.Boolean>>
struct Func_2_t24DC43D57AB022882FE433E3B16B6D7E4BD14BB4;
// System.Func`2<System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>,System.Threading.Tasks.Task`1<System.Object>>
struct Func_2_t44F36790F9746FCE5ABFDE6205B6020B2578F6DD;
// System.Func`2<System.Object,System.UInt32>
struct Func_2_tC3246CBAFBB962E2C6075141A9B6BFC365266428;
// System.Func`2<System.Object,System.Boolean>
struct Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8;
// System.Func`2<System.Object,System.Object>
struct Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436;
// System.Collections.Generic.IComparer`1<System.UInt32>
struct IComparer_1_t624844BDED22588CB4107D171B29C26A4953C759;
// System.Collections.Generic.IComparer`1<System.Object>
struct IComparer_1_t20C0141C3FEEDAA44BFE8521FEEDDF47289CB40B;
// System.Collections.Generic.IEnumerable`1<System.Int32>
struct IEnumerable_1_t60929E1AA80B46746F987B99A4EBD004FD72D370;
// System.Collections.Generic.IEnumerable`1<System.Object>
struct IEnumerable_1_t52B1AC8D9E5E1ED28DF6C46A37C9A1B00B394F9D;
// System.Collections.Generic.IEnumerator`1<System.Int32>
struct IEnumerator_1_t72AB4B40AF5290B386215B0BFADC8919D394DCAB;
// System.Collections.Generic.IEnumerator`1<System.Object>
struct IEnumerator_1_t2DC97C7D486BF9E077C2BC2E517E434F393AA76E;
// System.Linq.IOrderedEnumerable`1<System.Object>
struct IOrderedEnumerable_1_tB9F2319177B9E63FFCBB89F9E57F8529A97CC77B;
// System.Collections.Generic.List`1<System.Int32>
struct List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7;
// System.Collections.Generic.List`1<System.Object>
struct List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5;
// System.Collections.Generic.List`1<UnityEngine.Experimental.Rendering.RenderGraphModule.RenderGraphMutableResource>
struct List_1_t3BF4B5FF5CE6975DE11654564591061A6988E555;
// System.Collections.Generic.List`1<UnityEngine.Experimental.Rendering.RenderGraphModule.RenderGraphResource>
struct List_1_t7B7AB87E69433EF284952108AC50279B13B454DD;
// System.Linq.OrderedEnumerable`1<System.Object>
struct OrderedEnumerable_1_t4ED7F4DE53F413B48E5FCFAFE1EFE1B04A7B5F6F;
// System.Predicate`1<System.Object>
struct Predicate_1_t5C96B81B31A697B11C4C3767E3298773AF25DFEB;
// System.Predicate`1<System.Threading.Tasks.Task>
struct Predicate_1_tC0DBBC8498BD1EE6ABFFAA5628024105FA7D11BD;
// UnityEngine.Experimental.Rendering.RenderGraphModule.RenderFunc`1<System.Object>
struct RenderFunc_1_t091EA032D0005AAD02F0F4EE567103E57DCC507C;
// System.Threading.Tasks.TaskFactory`1<System.Boolean>
struct TaskFactory_1_t069438A73348A2B1B34A2C68E0478EE107ECCFC7;
// System.Threading.Tasks.TaskFactory`1<System.Object>
struct TaskFactory_1_t16A95DD17BBA3D00F0A85C5077BB248421EF3A55;
// System.Threading.Tasks.Task`1<System.Boolean>
struct Task_1_t9C1FE9F18F52F3409B9E970FA38801A443AE7849;
// System.Threading.Tasks.Task`1<System.Object>
struct Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17;
// System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>
struct Task_1_t24E932728D4BE67BFA41487F43AE4FAEBBAC7284;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.Byte,System.Boolean>
struct Transformer_1_t3DC67AE5707B4A6239FDC484B4051190F3DD73F6;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.Byte,System.Byte>
struct Transformer_1_t28E2CE4E6000CFB5FD1E8661B28068A803A652CD;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.Byte,System.Char>
struct Transformer_1_t327F0FF1377C87DD3EC9A5B30D921C1D378A879B;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.Byte,System.DateTime>
struct Transformer_1_t3001FEA39E46E3DA96E358634D044AE54CB8E347;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.Byte,System.DateTimeOffset>
struct Transformer_1_t2C08585197D68DA12A216A4373064B0363C8702C;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.Byte,System.Decimal>
struct Transformer_1_t690EEF1811184AEE377AA96051EECB5956C1027D;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.Byte,System.Double>
struct Transformer_1_t7F80BE9FB1DF9994C698CCC6664C2E010ECB94DF;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.Byte,System.Diagnostics.Tracing.EmptyStruct>
struct Transformer_1_t4781F0887392462A71B8DA7362AE412BDBAC8498;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.Byte,System.Guid>
struct Transformer_1_t1C30255A20A41F13A40891CED11C03BC98CAB381;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.Byte,System.Int16>
struct Transformer_1_tC9D6DCE262D74560D6D8324567C11DD16602C216;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.Byte,System.Int32>
struct Transformer_1_tB389982442B905977CFD9942EF65118312157BD3;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.Byte,System.Int64>
struct Transformer_1_tEAF6BF35B1968343B8492E296BC8661120F443F7;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.Byte,System.IntPtr>
struct Transformer_1_tDAC4F608DAB2EE6BC5CD91D42ECBACDFDBCEB0AB;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.Byte,System.Object>
struct Transformer_1_t7758A5153ABEBF79026D781F2F12C0F4748450B4;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.Byte,System.SByte>
struct Transformer_1_t35C6DC96DC1F138679D872A33D06394FF3BD4716;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.Byte,System.Single>
struct Transformer_1_tFB91A7B8819395950BCFE210EDA54735CF4E574F;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.Byte,System.TimeSpan>
struct Transformer_1_t75A228CF2470F94906973F31E5103CD0ACC45DA6;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.Byte,System.UInt16>
struct Transformer_1_t8FC8FB2D451A3EC4077EF54E0E1AFE8D01BF8BA8;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.Byte,System.UInt32>
struct Transformer_1_t66DDEE07B34D2CD03DF7E22CC15C182D874CD6A1;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.Byte,System.UInt64>
struct Transformer_1_t16C0B9A25005C19C84993A6DF613E235C47DF3D8;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.Byte,System.UIntPtr>
struct Transformer_1_tB3A92B161A295C5CE5BB20A5F09DAF8808175D63;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.Byte,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct Transformer_1_t7F28A44470BC903D7613912A5BE5E0A83B0C3A62;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.Int16,System.Boolean>
struct Transformer_1_t1DD535D7A0BF0DF1D9BD217F42BD8B86FED818F0;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.Int16,System.Byte>
struct Transformer_1_t50ABA94494AF2D216A78139ACFFBE9584E70845C;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.Int16,System.Char>
struct Transformer_1_t4A76AF5FABAC49231E9903360B082EB5E93769FE;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.Int16,System.DateTime>
struct Transformer_1_t7670F7F455D569AE5845734CA6275DDAB457DFD9;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.Int16,System.DateTimeOffset>
struct Transformer_1_t6ED2F8177C72CFD7E30DFF454AA4BC1B74679C56;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.Int16,System.Decimal>
struct Transformer_1_t641A86473503A4AB08D80E33213C47386F023BF3;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.Int16,System.Double>
struct Transformer_1_t52E02D9A03321E660B3ED7DE9478EE15F5A8ABBA;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.Int16,System.Diagnostics.Tracing.EmptyStruct>
struct Transformer_1_t6FEFE5B54753E83410F77B31890AED883398BD9E;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.Int16,System.Guid>
struct Transformer_1_t7F21EEE32F525F971881D42A9C3C10149176FF64;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.Int16,System.Int16>
struct Transformer_1_t419E6E51E81BB9975C7D042A2BA9F7775173A026;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.Int16,System.Int32>
struct Transformer_1_tF45CCD70807F5D9D3F0F888314AF2D040221A9DF;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.Int16,System.Int64>
struct Transformer_1_tE4D99CFDC91F9C2FD7B786088CC0C24C88A2ACD2;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.Int16,System.IntPtr>
struct Transformer_1_t6CEF5B426229DB191F2B9957F2A090DC27527AC3;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.Int16,System.Object>
struct Transformer_1_tCFCF83ED75D84A4CAF67C05C1FC5723F8C6A1045;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.Int16,System.SByte>
struct Transformer_1_tBD2E80E7566D74877DA3212B5E8196D9FC0EEE9C;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.Int16,System.Single>
struct Transformer_1_tE4654A831E478CF993AC1ECE67A127F7FB1E4A3E;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.Int16,System.TimeSpan>
struct Transformer_1_t3DD73B3138E8429397F66CF88430EE935D8F6A5A;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.Int16,System.UInt16>
struct Transformer_1_t1F4B4372781FC446330AC8A270A5E4FA8E97E7E0;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.Int16,System.UInt32>
struct Transformer_1_t1FE24F77113F8F764EB938DC178B4BD87905418D;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.Int16,System.UInt64>
struct Transformer_1_tF356827C832FD4AE0C32E65BE1B266E9B6179C89;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.Int16,System.UIntPtr>
struct Transformer_1_t304A837732E6FE07B26DAD7E83654774230CB3FB;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.Int16,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct Transformer_1_t4E5755522485703458E57CE83CF0EC454BDD2A65;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.Int32,System.Boolean>
struct Transformer_1_tBF8C995894CEE8C7A6B676EB123674338F92576B;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.Int32,System.Byte>
struct Transformer_1_t01B518FF127F164CE97FA8EC16EEFCACA57EDDA1;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.Int32,System.Char>
struct Transformer_1_tC16A37EE6FCC90F34784D3F3F1AEFE0FD27AFB5E;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.Int32,System.DateTime>
struct Transformer_1_t328F2E76FF0B5E491B8CAF2EA380EBC4EB59B3F5;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.Int32,System.DateTimeOffset>
struct Transformer_1_tCC180A1514B9EE5AC13DD30B6C50FA5A7FEDB57E;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.Int32,System.Decimal>
struct Transformer_1_t9DA6EF3090A9A84BFB452303F6D54693ED562B8D;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.Int32,System.Double>
struct Transformer_1_t8A94E5D9EB877C6FC400168B14AF35D33EAC1927;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.Int32,System.Diagnostics.Tracing.EmptyStruct>
struct Transformer_1_t2E9D74696B8E5C5EB6BBCDC6CE43D2DEE3F09D96;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.Int32,System.Guid>
struct Transformer_1_t3D5DF6751A5C0D60CF6F2B25C575C87B052B5A09;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.Int32,System.Int16>
struct Transformer_1_t99F6F9B70C5895106F3A5DB68D4B296689F8B067;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.Int32,System.Int32>
struct Transformer_1_tA81CCAAE8973F628B7A145877B4062C5A6476EBA;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.Int32,System.Int64>
struct Transformer_1_t02AD560B0C76565668CD783B3106FF62B8B84B6A;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.Int32,System.IntPtr>
struct Transformer_1_tF4E5AD75B7C97D1E146A64FE337106FD89C6F9A1;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.Int32,System.Object>
struct Transformer_1_t8127E59A1665321B73B90EA261FA4C751848C9A9;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.Int32,System.SByte>
struct Transformer_1_tBCB35269B242493E2D4A887CFFE7A61731CBEF5A;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.Int32,System.Single>
struct Transformer_1_t3D59790A1C59CD6C9FB82446360BCF4333BDA0C0;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.Int32,System.TimeSpan>
struct Transformer_1_t03D55FED65D94DBAED862349A37D45E92B20C2BD;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.Int32,System.UInt16>
struct Transformer_1_t0BE87D3995F2502A8304E6BB9D2ECEBC3642A047;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.Int32,System.UInt32>
struct Transformer_1_t61E0325EA41D08B9CBD542F1FD5575B3AE521EF9;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.Int32,System.UInt64>
struct Transformer_1_t0E6E26122494478302E7A49E89B2996EF405CD94;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.Int32,System.UIntPtr>
struct Transformer_1_t97F7D34BC6D17120EA3004D49E37A6C5ED7F4A2D;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.Int32,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct Transformer_1_t93586EBFA51523F443E1EC8D4A94AE26E174F019;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.Int64,System.Boolean>
struct Transformer_1_t476AB6D35C259B3EC718080C147176597C25CD89;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.Int64,System.Byte>
struct Transformer_1_t91E959A6CAE1BE68AA170F06A153ADE1A7389266;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.Int64,System.Char>
struct Transformer_1_tCF44E9940C3311C437EEEA20B8323BA248FFDC1C;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.Int64,System.DateTime>
struct Transformer_1_tEC949466F60165355AE9D6DD91FCE5D3BA94B31C;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.Int64,System.DateTimeOffset>
struct Transformer_1_tAB7D785D4627FF77BCA35F5697866F93058D17A1;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.Int64,System.Decimal>
struct Transformer_1_t5811E5E5AC2445E17746DB0CF9B97CE68CBF8CC3;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.Int64,System.Double>
struct Transformer_1_t96AA8665F22CF995BA6679B469328CAF084C63B1;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.Int64,System.Diagnostics.Tracing.EmptyStruct>
struct Transformer_1_t769FB5C7E8D2DCBC58B48600F5E170AC9CF87E47;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.Int64,System.Guid>
struct Transformer_1_t7D25ED7E6618ACBCFDD309E39C5660C035ADDAF9;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.Int64,System.Int16>
struct Transformer_1_t76BFF54E0F2CF5011E1567A7D589E72FFBE618B1;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.Int64,System.Int32>
struct Transformer_1_tDD4BC5BF267EC2F5EC1E9BA3AEC66A3C4562E3E1;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.Int64,System.Int64>
struct Transformer_1_t83D9EC4265AFBEA40FED539672672E87659FABFC;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.Int64,System.IntPtr>
struct Transformer_1_tF9DEED24B755F01B6D5F383025E5382EC04380A1;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.Int64,System.Object>
struct Transformer_1_tE0DFCD89E6241E5DE4719BAD8464FF514BF41CD0;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.Int64,System.SByte>
struct Transformer_1_tF270241457E8F58BCBFE4A849CEBA0C960D8D171;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.Int64,System.Single>
struct Transformer_1_t6303836C3ECC8993FF939539541E971A88D0043C;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.Int64,System.TimeSpan>
struct Transformer_1_t91E5C13BDFE80888281C2A892214239458BD8862;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.Int64,System.UInt16>
struct Transformer_1_t5523D607097D1283F94D8980CF88A23585DA5383;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.Int64,System.UInt32>
struct Transformer_1_t2084433FA6FC68D6B72E5E5F89F08F24C224F90E;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.Int64,System.UInt64>
struct Transformer_1_t2BC22C910E6F570EFD4A102BDDA4364EE856DF48;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.Int64,System.UIntPtr>
struct Transformer_1_t1CA2AE91638C38BA8D1DC27612CA13ED6A654E05;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.Int64,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct Transformer_1_t65360D5FC768CB17A9F463BAA4830584F51CC070;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.Object,System.Object>
struct Transformer_1_t5A30C1F1369A1F88C4E1270DCDC0988926509061;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.SByte,System.Boolean>
struct Transformer_1_tD2FABFE8EEEB95BE98B3D75EDB8F87E1E19F7D6D;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.SByte,System.Byte>
struct Transformer_1_t6C8811E6F600211E3864191A668925F5A52B6E15;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.SByte,System.Char>
struct Transformer_1_t04BED633DA409C38CB6054BFE3D5735ABD62F518;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.SByte,System.DateTime>
struct Transformer_1_t85017CA131468548211F084ACC574B9CAA055755;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.SByte,System.DateTimeOffset>
struct Transformer_1_t20B9AF65FC98204645CE3A23EBDADED45A21E450;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.SByte,System.Decimal>
struct Transformer_1_t429ED8E730F5DD367D54C19D1BCF0B22889B5360;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.SByte,System.Double>
struct Transformer_1_t3B93E16F965DE946BC07E0C76E2CCDAC56C43097;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.SByte,System.Diagnostics.Tracing.EmptyStruct>
struct Transformer_1_t1EF34F51050152DBCF5D7D381E05F6C9B3A8D746;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.SByte,System.Guid>
struct Transformer_1_t9C2A1982D971B2C2ED29E132D19A12E8CAA2945F;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.SByte,System.Int16>
struct Transformer_1_tC3D8FE4B2D70F7C8B02BDC3B6F64504A479DDCDA;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.SByte,System.Int32>
struct Transformer_1_tE959281326CA0E71564D9CC8C4CA65476647DF80;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.SByte,System.Int64>
struct Transformer_1_t2C08914EC2A487CA1508E655D40922D31300FF44;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.SByte,System.IntPtr>
struct Transformer_1_t9096E537ABBD1D40C46D5A1BB2AE3FAB1384C802;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.SByte,System.Object>
struct Transformer_1_t3094845308EB0C4ECB81B9B9588FF604F1EFF383;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.SByte,System.SByte>
struct Transformer_1_t07EAC2E730526DAEA7C7466509B2FC4E01EDAECF;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.SByte,System.Single>
struct Transformer_1_t57EF7782BA47293FB8D84194159F9C6EC36E8E70;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.SByte,System.TimeSpan>
struct Transformer_1_t0692E271430E76C7702E6C06685AEA460588A65D;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.SByte,System.UInt16>
struct Transformer_1_t37842F590D779536C9F57CFE8A5F4C9054A7CD5D;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.SByte,System.UInt32>
struct Transformer_1_t118F878BEA8CDEED4C8F998AE52CF291F41BC52E;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.SByte,System.UInt64>
struct Transformer_1_t7CE5E2F2EE3F6B588EC93C03818D6AA88B4C2FA4;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.SByte,System.UIntPtr>
struct Transformer_1_t7820A348FDE892902737AB3353C8DC9AF3173136;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.SByte,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct Transformer_1_tAB938303C0EB89617BAC00380BBC202940243F74;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.UInt16,System.Boolean>
struct Transformer_1_tE80196F4B7A5A2110FC0182212C83F459727C6BE;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.UInt16,System.Byte>
struct Transformer_1_t061320CC3547E178B43212A1634E5BA1C3296FB4;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.UInt16,System.Char>
struct Transformer_1_t9332F82CDC7D05AC998F8BE0E7ECCD229EC1F111;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.UInt16,System.DateTime>
struct Transformer_1_t18E7F2A91B58B4CC9C9DB99BCA5CBB14EC89E947;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.UInt16,System.DateTimeOffset>
struct Transformer_1_tF16A2137C1450B0F436B28941D2EFDB38B768D77;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.UInt16,System.Decimal>
struct Transformer_1_tC9194191386E267034CCDBD796CBAE0F96002D63;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.UInt16,System.Double>
struct Transformer_1_t77DD442701A959DAE27DA4559054353BDB343B34;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.UInt16,System.Diagnostics.Tracing.EmptyStruct>
struct Transformer_1_tEBC899D34A444538AF2C5EFBED4C84DB4BC45848;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.UInt16,System.Guid>
struct Transformer_1_t1E44C39C080C0C1BCAA3AA096BC46637DC78FFC8;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.UInt16,System.Int16>
struct Transformer_1_t8DA922273DCF1348A863E22DAED50A28F2E7EC4A;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.UInt16,System.Int32>
struct Transformer_1_tE2F5517F18DDC45C27EB0CF011655F7290022FB0;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.UInt16,System.Int64>
struct Transformer_1_t2468BF9AC5C45B9D777B0E34EC1949CE193D20F7;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.UInt16,System.IntPtr>
struct Transformer_1_tCB7EE8D213E31FE3EAB291CBAEA6B0F015D13840;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.UInt16,System.Object>
struct Transformer_1_t0001CA8726D9CA184026588C57396CC776ACEF06;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.UInt16,System.SByte>
struct Transformer_1_t56AC8DD64FA3E1A9651D456D3D911E023CF88DCD;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.UInt16,System.Single>
struct Transformer_1_tE78CCD9D44957F7F042B573ED59E8EE04C13D047;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.UInt16,System.TimeSpan>
struct Transformer_1_t3348AF6EA9D56F7672FDA766E48C0EC31D244732;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.UInt16,System.UInt16>
struct Transformer_1_t1BE0C17B380E3D75E214DF3668E20BEF6DCA9A4A;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.UInt16,System.UInt32>
struct Transformer_1_t90F32598CDB2668A5BBD1A101374312C05F60543;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.UInt16,System.UInt64>
struct Transformer_1_t04C7EED1579F30358FBDCDB6143DBC088C63AFDE;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.UInt16,System.UIntPtr>
struct Transformer_1_t11D2CE81C8B59E67AB536F4C77727A85FD129449;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.UInt16,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct Transformer_1_t121D121059312ABFEA00E7E0857D05CCC9415A45;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.UInt32,System.Boolean>
struct Transformer_1_t60047D12F19EC963BBD5F0CEBE2F8036A20172F0;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.UInt32,System.Byte>
struct Transformer_1_t5DE73FA1B0F7652CC9FB816D61938EA68158297B;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.UInt32,System.Char>
struct Transformer_1_t3050C701F0AE1E95352D4339BFE606D2343F7F90;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.UInt32,System.DateTime>
struct Transformer_1_t10ED8D0D8FCCF8A65A34FD9CB0BB769E97C65617;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.UInt32,System.DateTimeOffset>
struct Transformer_1_t769CC26F0F28BAA04C91A2DD4CA912A1C75B527C;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.UInt32,System.Decimal>
struct Transformer_1_tC127664D3E7D230D4A314537786A12688DFA7A3E;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.UInt32,System.Double>
struct Transformer_1_t98913A0CAF0396077F92C767353DCECE1CAE9D37;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.UInt32,System.Diagnostics.Tracing.EmptyStruct>
struct Transformer_1_tF07E13438506E2B3D01E6482C5493016DBECA428;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.UInt32,System.Guid>
struct Transformer_1_t7065170F0C1062F0BFC8CE0818DF6CB978951894;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.UInt32,System.Int16>
struct Transformer_1_t286C753C28D2786E159E55BCD77AAC5FE99C8A6E;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.UInt32,System.Int32>
struct Transformer_1_t4BE8EE1016BCB2E59D59BB8EBAD050C01F69481F;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.UInt32,System.Int64>
struct Transformer_1_t0265D6C648532D20930747AC00E60A57882836D4;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.UInt32,System.IntPtr>
struct Transformer_1_t1008B5FEF2C9C85E523733A1465641C24C2EF895;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.UInt32,System.Object>
struct Transformer_1_t63A740E462CAF5DE201265ACF49D1F387549E5C2;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.UInt32,System.SByte>
struct Transformer_1_tF3157E7DF7ABB616E4FBC816F8F899563EBAB35C;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.UInt32,System.Single>
struct Transformer_1_tCBB0F5293357FBCE6345652A671907F2D668E97B;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.UInt32,System.TimeSpan>
struct Transformer_1_tC9FFC78A73E6932AA70D077126BE4CA3FE45A302;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.UInt32,System.UInt16>
struct Transformer_1_t1C80BF86214358F246CD19A956D8B220FCA25D7B;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.UInt32,System.UInt32>
struct Transformer_1_t814D676F5A4ACC9A116D07D1C0A35D5BABDF8CAE;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.UInt32,System.UInt64>
struct Transformer_1_t005021C08874BCC5C2A50167CE4E532B9CF4CD79;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.UInt32,System.UIntPtr>
struct Transformer_1_t30E16CDE25487279253BB11A42DBEE6A21368087;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.UInt32,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct Transformer_1_t130D77E1B8D207F951F6D90F2C4A8E3792897617;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.UInt64,System.Boolean>
struct Transformer_1_t80B7BC576266310FBF99805713CB124FB1325AFD;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.UInt64,System.Byte>
struct Transformer_1_tB710AA1A4EF63E7A608E1F3552AD32FF1D7EC200;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.UInt64,System.Char>
struct Transformer_1_t4C49EDB12597C819D2161020E90B0C9F2BFA6CB2;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.UInt64,System.DateTime>
struct Transformer_1_t704F728FBE3D274B344E93D43F1EB70A681EABD0;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.UInt64,System.DateTimeOffset>
struct Transformer_1_t99A6CF18BE9023163F159E1157E9EB2EADB175E5;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.UInt64,System.Decimal>
struct Transformer_1_t2097FB14F7FB610418928F6C00B8B3C776B86D03;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.UInt64,System.Double>
struct Transformer_1_t668A4176A39C3B956441F6D0CCC1AED020F7D6AF;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.UInt64,System.Diagnostics.Tracing.EmptyStruct>
struct Transformer_1_t4B5213C886234DE9246BB2EED20A4270B0BF8241;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.UInt64,System.Guid>
struct Transformer_1_t33F4656CC027550D29904EEB3703DEA5DB5A933E;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.UInt64,System.Int16>
struct Transformer_1_t984F8DDF73126BB7D0564B2C8DB5B43DADEB1B87;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.UInt64,System.Int32>
struct Transformer_1_t9E27086EA83291A9CB562EC6DF2DDCF1F811D348;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.UInt64,System.Int64>
struct Transformer_1_tE5AF7FD8199D2F817240AC1D32C549AE12D4AAE9;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.UInt64,System.IntPtr>
struct Transformer_1_t9509B600985704E02CF30F84A4CA3E70DFDC190C;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.UInt64,System.Object>
struct Transformer_1_t65B23DA04E78FC4F4D12CDB469679D9D5C4ED9C4;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.UInt64,System.SByte>
struct Transformer_1_tD9F86289E24471473065EC7A0AC7282EFFF25909;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.UInt64,System.Single>
struct Transformer_1_tD47677532E0EB9F83E58642BAF11E614584BE1E4;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.UInt64,System.TimeSpan>
struct Transformer_1_tFE1A34D9527A7310C69F3A1F2171ADE7234E1D64;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.UInt64,System.UInt16>
struct Transformer_1_tB25EE30C228D308ED1E3D17E8A08E8FF7F6A0D77;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.UInt64,System.UInt32>
struct Transformer_1_t39A024DD4A4E9FB07B8999CACF5FA5483C6572BF;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.UInt64,System.UInt64>
struct Transformer_1_t236D9CA15237017ADE5E5DF9D4F03CC889C8C551;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.UInt64,System.UIntPtr>
struct Transformer_1_t191E38853FA538EEEDB722F48BA28E2796E116E1;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.UInt64,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct Transformer_1_t1DD85867F626725FB9A574D7B656426FB6D860E7;
// System.Linq.Enumerable/WhereArrayIterator`1<System.Object>
struct WhereArrayIterator_1_t7D84D638EB94F5CC3BE1B29D8FC781CA8CD15A86;
// System.Linq.Enumerable/WhereEnumerableIterator`1<System.Int32>
struct WhereEnumerableIterator_1_t9F4DDC70173BABD72AEC7AA00D62F4FAE2613CEA;
// System.Linq.Enumerable/WhereEnumerableIterator`1<System.Object>
struct WhereEnumerableIterator_1_t1E9FDCFD8F8136C6A5A5740C1E093EF03F0B5CE0;
// System.Linq.Enumerable/WhereListIterator`1<System.Object>
struct WhereListIterator_1_t42618389DB998070E03A982D15FA39BCA1DB56BD;
// System.Linq.Enumerable/WhereSelectArrayIterator`2<System.Int32,System.Int32>
struct WhereSelectArrayIterator_2_t00D4CC16A86C24F0CC80D3112E1FA2D451FF5D0C;
// System.Linq.Enumerable/WhereSelectArrayIterator`2<System.Object,System.Object>
struct WhereSelectArrayIterator_2_tA706D5B1608A9A8F1BF43C6E5D9D682C901DB244;
// System.Linq.Enumerable/WhereSelectEnumerableIterator`2<System.Int32,System.Int32>
struct WhereSelectEnumerableIterator_2_t70C236BD8C0DBBA43FCE3CE4E4F6B545579333EF;
// System.Linq.Enumerable/WhereSelectEnumerableIterator`2<System.Object,System.Object>
struct WhereSelectEnumerableIterator_2_tDAA8BFBEA68F81670F3F51C6200EBD26D7A8FBAB;
// System.Linq.Enumerable/WhereSelectListIterator`2<System.Int32,System.Int32>
struct WhereSelectListIterator_2_t4CC3FE3A35610DC6F761EE7DB863B845957AD325;
// System.Linq.Enumerable/WhereSelectListIterator`2<System.Object,System.Object>
struct WhereSelectListIterator_2_t85B78DFF0573BC95A62C79D6088FA39DFEBE1AF2;
// System.Boolean[]
struct BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C;
// System.Byte[]
struct ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726;
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// UnityEngine.Rendering.CommandBuffer
struct CommandBuffer_t25CD231BD3E822660339DB7D0E8F8ED6B7DBEA29;
// System.Delegate[]
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;
// System.Double[]
struct DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB;
// System.Exception
struct Exception_t;
// System.Int16[]
struct Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD;
// System.Int32[]
struct Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32;
// System.Int64[]
struct Int64U5BU5D_tCA61E42872C63A4286B24EEE6E0650143B43DCE6;
// System.IntPtr[]
struct IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6;
// System.Object[]
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;
// UnityEngine.Experimental.Rendering.RenderGraphModule.RenderGraphMutableResource[]
struct RenderGraphMutableResourceU5BU5D_t321394616FCBCB3C128105E0012CA75FF575FBFE;
// System.SByte[]
struct SByteU5BU5D_t7D94C53295E6116625EA7CC7DEA21FEDC39869E7;
// System.Single[]
struct SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971;
// System.String
struct String_t;
// System.Text.StringBuilder
struct StringBuilder_t;
// System.Type
struct Type_t;
// System.Type[]
struct TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755;
// System.UInt32[]
struct UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF;

IL2CPP_EXTERN_C RuntimeClass* AndroidJavaObjectU5BU5D_tEE28563C9013906CEB39794019A55F4BA5B06120_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AndroidReflection_tEB6633FD5B7D2816E1AC6C711E11B2DD33822F16_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ExecutionContext_t16AC73BB21FEEEAD34A017877AC18DD8BB836414_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IAsyncStateMachine_tAE063F84A60E1058FCA4E3EA9F555D3462641F7D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ICriticalNotifyCompletion_t3F4FCEA29CDCACD07747F3A1D6D1406521556838_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringBuilder_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral24CC8D396132365E532646F936DFC8579E2299B2;
IL2CPP_EXTERN_C String_t* _stringLiteral42646B33B50B6AA15E22733C8900716F0FE19E1D;
IL2CPP_EXTERN_C String_t* _stringLiteral51253131B895C2F8066BCC47E62D44F18F43446C;
IL2CPP_EXTERN_C String_t* _stringLiteralC70965A7D491520CA8D04D4EA01613EFED3309E0;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_Start_TisRuntimeObject_m25C57EA59EF179635A81530036C12082EE50878B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_Start_TisU3CWaitUntilCountOrTimeoutAsyncU3Ed__31_t227D1F5F19C948CA8C23C80B5F19147D4AAED14F_m67A42FEF4C09E843DDA99A81F84E675F9AB87CF9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* _AndroidJNIHelper_ConvertFromJNIArray_TisDouble_t42821932CB52DE2057E685D0E1AF3DE5033D2181_m5DFA0BED6B580096B2E3ADB1394F918653E21D07_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* _AndroidJNIHelper_ConvertFromJNIArray_TisInt16_tD0F031114106263BB459DA1F099FF9F42691295A_m8139D52A1384EE34677345013798688D522DFF37_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* _AndroidJNIHelper_ConvertFromJNIArray_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m46E475527292788C29DD62A991E948CE3D9189A3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* _AndroidJNIHelper_ConvertFromJNIArray_TisInt64_t378EE0D608BD3107E77238E85F30D2BBD46981F3_m67885FB92D65381C9570857BCD66D9A5377C9FC2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* _AndroidJNIHelper_ConvertFromJNIArray_TisRuntimeObject_m353E485413995A0C209B6FAA96D368CF72FB4592_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* _AndroidJNIHelper_ConvertFromJNIArray_TisSByte_t928712DD662DC29BA4FAAE8CE2230AFB23447F0B_m2F4CBB579C50AAAF7EF6FBC73C5FC304A87A60EE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* _AndroidJNIHelper_ConvertFromJNIArray_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_mD3EDB3217478F469F150970E33043F80EF1BA3CB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeType* AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Int16_tD0F031114106263BB459DA1F099FF9F42691295A_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* SByte_t928712DD662DC29BA4FAAE8CE2230AFB23447F0B_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* String_t_0_0_0_var;
IL2CPP_EXTERN_C const uint32_t AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_t286C97C0AF102C4C0BE55CE2025CC7BD1FB5C20C_TisU3CWaitUntilCountOrTimeoutAsyncU3Ed__31_t227D1F5F19C948CA8C23C80B5F19147D4AAED14F_m06010DFBCE2CDD2AE1BB5ADD25230521E9B527DC_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_t2CE498F9A6CE5405242AE2D77F03E58985B7C3ED_TisU3CWaitUntilCountOrTimeoutAsyncU3Ed__31_t227D1F5F19C948CA8C23C80B5F19147D4AAED14F_m4FDC6642836D25291A0E343845527873A88013C9_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisRuntimeObject_TisRuntimeObject_mD7F0BC5F052B851265FF930DD5AB23C8E96269DE_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t AsyncTaskMethodBuilder_1_Start_TisRuntimeObject_m25C57EA59EF179635A81530036C12082EE50878B_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t AsyncTaskMethodBuilder_1_Start_TisU3CWaitUntilCountOrTimeoutAsyncU3Ed__31_t227D1F5F19C948CA8C23C80B5F19147D4AAED14F_m67A42FEF4C09E843DDA99A81F84E675F9AB87CF9_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t _AndroidJNIHelper_ConvertFromJNIArray_TisDouble_t42821932CB52DE2057E685D0E1AF3DE5033D2181_m5DFA0BED6B580096B2E3ADB1394F918653E21D07_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t _AndroidJNIHelper_ConvertFromJNIArray_TisInt16_tD0F031114106263BB459DA1F099FF9F42691295A_m8139D52A1384EE34677345013798688D522DFF37_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t _AndroidJNIHelper_ConvertFromJNIArray_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m46E475527292788C29DD62A991E948CE3D9189A3_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t _AndroidJNIHelper_ConvertFromJNIArray_TisInt64_t378EE0D608BD3107E77238E85F30D2BBD46981F3_m67885FB92D65381C9570857BCD66D9A5377C9FC2_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t _AndroidJNIHelper_ConvertFromJNIArray_TisRuntimeObject_m353E485413995A0C209B6FAA96D368CF72FB4592_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t _AndroidJNIHelper_ConvertFromJNIArray_TisSByte_t928712DD662DC29BA4FAAE8CE2230AFB23447F0B_m2F4CBB579C50AAAF7EF6FBC73C5FC304A87A60EE_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t _AndroidJNIHelper_ConvertFromJNIArray_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_mD3EDB3217478F469F150970E33043F80EF1BA3CB_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t _AndroidJNIHelper_GetSignature_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_mBD54DD62EF90673A4806A2CEFA031CFE3C998274_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t _AndroidJNIHelper_GetSignature_TisChar_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_mB636DED19D226BEDFC17AE941CAD220377CA0584_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t _AndroidJNIHelper_GetSignature_TisDouble_t42821932CB52DE2057E685D0E1AF3DE5033D2181_mD09A1E6993B600273E5DA6DD5A610B0A45E10035_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t _AndroidJNIHelper_GetSignature_TisInt16_tD0F031114106263BB459DA1F099FF9F42691295A_m53EA03473D7F4C2525577E0D9E0999F78F5E7F7B_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t _AndroidJNIHelper_GetSignature_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m83D9133FDC0884534CE97F82ED983AC5AE9465CA_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t _AndroidJNIHelper_GetSignature_TisInt64_t378EE0D608BD3107E77238E85F30D2BBD46981F3_m413740B31E01EB314EE0D3A2B1CF91DAD24A9659_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t _AndroidJNIHelper_GetSignature_TisRuntimeObject_mC6BEA8EDE34CA523E26ACA072A4E246C7FF6DB25_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t _AndroidJNIHelper_GetSignature_TisSByte_t928712DD662DC29BA4FAAE8CE2230AFB23447F0B_mA275B45366DA25AFB161A011BC8F1888F54B0BF2_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t _AndroidJNIHelper_GetSignature_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_m82A85440F4B906A83640CA6939D1BC0D1BDEB2C3_MetadataUsageId;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C;
struct ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726;
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
struct DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB;
struct Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD;
struct Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32;
struct Int64U5BU5D_tCA61E42872C63A4286B24EEE6E0650143B43DCE6;
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;
struct SByteU5BU5D_t7D94C53295E6116625EA7CC7DEA21FEDC39869E7;
struct SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA;
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A;
struct AndroidJavaObjectU5BU5D_tEE28563C9013906CEB39794019A55F4BA5B06120;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Object


// System.Collections.Generic.List`1<System.Int32>
struct  List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7, ____items_1)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get__items_1() const { return ____items_1; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7_StaticFields, ____emptyArray_5)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get__emptyArray_5() const { return ____emptyArray_5; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
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


// System.Diagnostics.Tracing.EnumHelper`1_Caster`1<System.Byte,System.Boolean>
struct  Caster_1_tCFCED75135FB93572DAAB1B0D9C1E13DD440E074  : public RuntimeObject
{
public:

public:
};

struct Caster_1_tCFCED75135FB93572DAAB1B0D9C1E13DD440E074_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1_Caster`1::Instance
	Transformer_1_t3DC67AE5707B4A6239FDC484B4051190F3DD73F6 * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_tCFCED75135FB93572DAAB1B0D9C1E13DD440E074_StaticFields, ___Instance_0)); }
	inline Transformer_1_t3DC67AE5707B4A6239FDC484B4051190F3DD73F6 * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_t3DC67AE5707B4A6239FDC484B4051190F3DD73F6 ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_t3DC67AE5707B4A6239FDC484B4051190F3DD73F6 * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1_Caster`1<System.Byte,System.Byte>
struct  Caster_1_t5CD894D52674E925A7990CABE1A515C866852FD3  : public RuntimeObject
{
public:

public:
};

struct Caster_1_t5CD894D52674E925A7990CABE1A515C866852FD3_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1_Caster`1::Instance
	Transformer_1_t28E2CE4E6000CFB5FD1E8661B28068A803A652CD * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_t5CD894D52674E925A7990CABE1A515C866852FD3_StaticFields, ___Instance_0)); }
	inline Transformer_1_t28E2CE4E6000CFB5FD1E8661B28068A803A652CD * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_t28E2CE4E6000CFB5FD1E8661B28068A803A652CD ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_t28E2CE4E6000CFB5FD1E8661B28068A803A652CD * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1_Caster`1<System.Byte,System.Char>
struct  Caster_1_t6BA3AA69A295D7FE472126EEF8104FDEC5FC8EC6  : public RuntimeObject
{
public:

public:
};

struct Caster_1_t6BA3AA69A295D7FE472126EEF8104FDEC5FC8EC6_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1_Caster`1::Instance
	Transformer_1_t327F0FF1377C87DD3EC9A5B30D921C1D378A879B * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_t6BA3AA69A295D7FE472126EEF8104FDEC5FC8EC6_StaticFields, ___Instance_0)); }
	inline Transformer_1_t327F0FF1377C87DD3EC9A5B30D921C1D378A879B * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_t327F0FF1377C87DD3EC9A5B30D921C1D378A879B ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_t327F0FF1377C87DD3EC9A5B30D921C1D378A879B * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1_Caster`1<System.Byte,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct  Caster_1_tD834295A95CE11FCDA5917358B03D086E7C253AE  : public RuntimeObject
{
public:

public:
};

struct Caster_1_tD834295A95CE11FCDA5917358B03D086E7C253AE_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1_Caster`1::Instance
	Transformer_1_t7F28A44470BC903D7613912A5BE5E0A83B0C3A62 * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_tD834295A95CE11FCDA5917358B03D086E7C253AE_StaticFields, ___Instance_0)); }
	inline Transformer_1_t7F28A44470BC903D7613912A5BE5E0A83B0C3A62 * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_t7F28A44470BC903D7613912A5BE5E0A83B0C3A62 ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_t7F28A44470BC903D7613912A5BE5E0A83B0C3A62 * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1_Caster`1<System.Byte,System.DateTime>
struct  Caster_1_tA012B9C2191521E1AC810D432A4D06C2BC5D4C71  : public RuntimeObject
{
public:

public:
};

struct Caster_1_tA012B9C2191521E1AC810D432A4D06C2BC5D4C71_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1_Caster`1::Instance
	Transformer_1_t3001FEA39E46E3DA96E358634D044AE54CB8E347 * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_tA012B9C2191521E1AC810D432A4D06C2BC5D4C71_StaticFields, ___Instance_0)); }
	inline Transformer_1_t3001FEA39E46E3DA96E358634D044AE54CB8E347 * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_t3001FEA39E46E3DA96E358634D044AE54CB8E347 ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_t3001FEA39E46E3DA96E358634D044AE54CB8E347 * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1_Caster`1<System.Byte,System.DateTimeOffset>
struct  Caster_1_t1A728514A96CA0B36724F1AD49EF42DB49A71581  : public RuntimeObject
{
public:

public:
};

struct Caster_1_t1A728514A96CA0B36724F1AD49EF42DB49A71581_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1_Caster`1::Instance
	Transformer_1_t2C08585197D68DA12A216A4373064B0363C8702C * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_t1A728514A96CA0B36724F1AD49EF42DB49A71581_StaticFields, ___Instance_0)); }
	inline Transformer_1_t2C08585197D68DA12A216A4373064B0363C8702C * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_t2C08585197D68DA12A216A4373064B0363C8702C ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_t2C08585197D68DA12A216A4373064B0363C8702C * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1_Caster`1<System.Byte,System.Decimal>
struct  Caster_1_tA67891064DEEF82D513D5D1D7953FFEF0DC9F24A  : public RuntimeObject
{
public:

public:
};

struct Caster_1_tA67891064DEEF82D513D5D1D7953FFEF0DC9F24A_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1_Caster`1::Instance
	Transformer_1_t690EEF1811184AEE377AA96051EECB5956C1027D * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_tA67891064DEEF82D513D5D1D7953FFEF0DC9F24A_StaticFields, ___Instance_0)); }
	inline Transformer_1_t690EEF1811184AEE377AA96051EECB5956C1027D * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_t690EEF1811184AEE377AA96051EECB5956C1027D ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_t690EEF1811184AEE377AA96051EECB5956C1027D * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1_Caster`1<System.Byte,System.Diagnostics.Tracing.EmptyStruct>
struct  Caster_1_t1996873E8C7CA32DD1AFF0378177BD01993195DA  : public RuntimeObject
{
public:

public:
};

struct Caster_1_t1996873E8C7CA32DD1AFF0378177BD01993195DA_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1_Caster`1::Instance
	Transformer_1_t4781F0887392462A71B8DA7362AE412BDBAC8498 * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_t1996873E8C7CA32DD1AFF0378177BD01993195DA_StaticFields, ___Instance_0)); }
	inline Transformer_1_t4781F0887392462A71B8DA7362AE412BDBAC8498 * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_t4781F0887392462A71B8DA7362AE412BDBAC8498 ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_t4781F0887392462A71B8DA7362AE412BDBAC8498 * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1_Caster`1<System.Byte,System.Double>
struct  Caster_1_t144369B8BF110535D7668437D81750525FE7488A  : public RuntimeObject
{
public:

public:
};

struct Caster_1_t144369B8BF110535D7668437D81750525FE7488A_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1_Caster`1::Instance
	Transformer_1_t7F80BE9FB1DF9994C698CCC6664C2E010ECB94DF * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_t144369B8BF110535D7668437D81750525FE7488A_StaticFields, ___Instance_0)); }
	inline Transformer_1_t7F80BE9FB1DF9994C698CCC6664C2E010ECB94DF * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_t7F80BE9FB1DF9994C698CCC6664C2E010ECB94DF ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_t7F80BE9FB1DF9994C698CCC6664C2E010ECB94DF * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1_Caster`1<System.Byte,System.Guid>
struct  Caster_1_t058DE37DDE56EF2251B2B7507BEAB0B2992AF3AB  : public RuntimeObject
{
public:

public:
};

struct Caster_1_t058DE37DDE56EF2251B2B7507BEAB0B2992AF3AB_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1_Caster`1::Instance
	Transformer_1_t1C30255A20A41F13A40891CED11C03BC98CAB381 * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_t058DE37DDE56EF2251B2B7507BEAB0B2992AF3AB_StaticFields, ___Instance_0)); }
	inline Transformer_1_t1C30255A20A41F13A40891CED11C03BC98CAB381 * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_t1C30255A20A41F13A40891CED11C03BC98CAB381 ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_t1C30255A20A41F13A40891CED11C03BC98CAB381 * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1_Caster`1<System.Byte,System.Int16>
struct  Caster_1_tBB2D67B4CC292225005B4D5EB8B51337BF2A6A39  : public RuntimeObject
{
public:

public:
};

struct Caster_1_tBB2D67B4CC292225005B4D5EB8B51337BF2A6A39_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1_Caster`1::Instance
	Transformer_1_tC9D6DCE262D74560D6D8324567C11DD16602C216 * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_tBB2D67B4CC292225005B4D5EB8B51337BF2A6A39_StaticFields, ___Instance_0)); }
	inline Transformer_1_tC9D6DCE262D74560D6D8324567C11DD16602C216 * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_tC9D6DCE262D74560D6D8324567C11DD16602C216 ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_tC9D6DCE262D74560D6D8324567C11DD16602C216 * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1_Caster`1<System.Byte,System.Int32>
struct  Caster_1_tEEEAF59DA096D2CD82C17E7418812863A351315B  : public RuntimeObject
{
public:

public:
};

struct Caster_1_tEEEAF59DA096D2CD82C17E7418812863A351315B_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1_Caster`1::Instance
	Transformer_1_tB389982442B905977CFD9942EF65118312157BD3 * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_tEEEAF59DA096D2CD82C17E7418812863A351315B_StaticFields, ___Instance_0)); }
	inline Transformer_1_tB389982442B905977CFD9942EF65118312157BD3 * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_tB389982442B905977CFD9942EF65118312157BD3 ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_tB389982442B905977CFD9942EF65118312157BD3 * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1_Caster`1<System.Byte,System.Int64>
struct  Caster_1_tD77590572D7D7B6FF580ECA0F157FD9704FE7D4C  : public RuntimeObject
{
public:

public:
};

struct Caster_1_tD77590572D7D7B6FF580ECA0F157FD9704FE7D4C_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1_Caster`1::Instance
	Transformer_1_tEAF6BF35B1968343B8492E296BC8661120F443F7 * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_tD77590572D7D7B6FF580ECA0F157FD9704FE7D4C_StaticFields, ___Instance_0)); }
	inline Transformer_1_tEAF6BF35B1968343B8492E296BC8661120F443F7 * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_tEAF6BF35B1968343B8492E296BC8661120F443F7 ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_tEAF6BF35B1968343B8492E296BC8661120F443F7 * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1_Caster`1<System.Byte,System.IntPtr>
struct  Caster_1_tDE5A2F5470EE5FC764FCEFB93C0F814DF53085D1  : public RuntimeObject
{
public:

public:
};

struct Caster_1_tDE5A2F5470EE5FC764FCEFB93C0F814DF53085D1_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1_Caster`1::Instance
	Transformer_1_tDAC4F608DAB2EE6BC5CD91D42ECBACDFDBCEB0AB * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_tDE5A2F5470EE5FC764FCEFB93C0F814DF53085D1_StaticFields, ___Instance_0)); }
	inline Transformer_1_tDAC4F608DAB2EE6BC5CD91D42ECBACDFDBCEB0AB * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_tDAC4F608DAB2EE6BC5CD91D42ECBACDFDBCEB0AB ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_tDAC4F608DAB2EE6BC5CD91D42ECBACDFDBCEB0AB * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1_Caster`1<System.Byte,System.Object>
struct  Caster_1_tA4F5C46578196FA46AD3A20BEAE479145A087636  : public RuntimeObject
{
public:

public:
};

struct Caster_1_tA4F5C46578196FA46AD3A20BEAE479145A087636_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1_Caster`1::Instance
	Transformer_1_t7758A5153ABEBF79026D781F2F12C0F4748450B4 * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_tA4F5C46578196FA46AD3A20BEAE479145A087636_StaticFields, ___Instance_0)); }
	inline Transformer_1_t7758A5153ABEBF79026D781F2F12C0F4748450B4 * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_t7758A5153ABEBF79026D781F2F12C0F4748450B4 ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_t7758A5153ABEBF79026D781F2F12C0F4748450B4 * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1_Caster`1<System.Byte,System.SByte>
struct  Caster_1_t9264D2DCCC5AB3D851B5BF6F32647061B5ABA64C  : public RuntimeObject
{
public:

public:
};

struct Caster_1_t9264D2DCCC5AB3D851B5BF6F32647061B5ABA64C_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1_Caster`1::Instance
	Transformer_1_t35C6DC96DC1F138679D872A33D06394FF3BD4716 * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_t9264D2DCCC5AB3D851B5BF6F32647061B5ABA64C_StaticFields, ___Instance_0)); }
	inline Transformer_1_t35C6DC96DC1F138679D872A33D06394FF3BD4716 * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_t35C6DC96DC1F138679D872A33D06394FF3BD4716 ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_t35C6DC96DC1F138679D872A33D06394FF3BD4716 * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1_Caster`1<System.Byte,System.Single>
struct  Caster_1_t248F6262CD42540733F87B775F9ED33DEB6DA3BA  : public RuntimeObject
{
public:

public:
};

struct Caster_1_t248F6262CD42540733F87B775F9ED33DEB6DA3BA_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1_Caster`1::Instance
	Transformer_1_tFB91A7B8819395950BCFE210EDA54735CF4E574F * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_t248F6262CD42540733F87B775F9ED33DEB6DA3BA_StaticFields, ___Instance_0)); }
	inline Transformer_1_tFB91A7B8819395950BCFE210EDA54735CF4E574F * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_tFB91A7B8819395950BCFE210EDA54735CF4E574F ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_tFB91A7B8819395950BCFE210EDA54735CF4E574F * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1_Caster`1<System.Byte,System.TimeSpan>
struct  Caster_1_t955B3AB72A29A2506256E28756B6A4457CDF6773  : public RuntimeObject
{
public:

public:
};

struct Caster_1_t955B3AB72A29A2506256E28756B6A4457CDF6773_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1_Caster`1::Instance
	Transformer_1_t75A228CF2470F94906973F31E5103CD0ACC45DA6 * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_t955B3AB72A29A2506256E28756B6A4457CDF6773_StaticFields, ___Instance_0)); }
	inline Transformer_1_t75A228CF2470F94906973F31E5103CD0ACC45DA6 * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_t75A228CF2470F94906973F31E5103CD0ACC45DA6 ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_t75A228CF2470F94906973F31E5103CD0ACC45DA6 * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1_Caster`1<System.Byte,System.UInt16>
struct  Caster_1_t7AB320029EAC4D74F4CE0AFA0C783D1CD7CC1D29  : public RuntimeObject
{
public:

public:
};

struct Caster_1_t7AB320029EAC4D74F4CE0AFA0C783D1CD7CC1D29_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1_Caster`1::Instance
	Transformer_1_t8FC8FB2D451A3EC4077EF54E0E1AFE8D01BF8BA8 * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_t7AB320029EAC4D74F4CE0AFA0C783D1CD7CC1D29_StaticFields, ___Instance_0)); }
	inline Transformer_1_t8FC8FB2D451A3EC4077EF54E0E1AFE8D01BF8BA8 * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_t8FC8FB2D451A3EC4077EF54E0E1AFE8D01BF8BA8 ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_t8FC8FB2D451A3EC4077EF54E0E1AFE8D01BF8BA8 * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1_Caster`1<System.Byte,System.UInt32>
struct  Caster_1_tBF9E6EC155A9FBDBF980CF1F0F6224AB4AA37A68  : public RuntimeObject
{
public:

public:
};

struct Caster_1_tBF9E6EC155A9FBDBF980CF1F0F6224AB4AA37A68_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1_Caster`1::Instance
	Transformer_1_t66DDEE07B34D2CD03DF7E22CC15C182D874CD6A1 * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_tBF9E6EC155A9FBDBF980CF1F0F6224AB4AA37A68_StaticFields, ___Instance_0)); }
	inline Transformer_1_t66DDEE07B34D2CD03DF7E22CC15C182D874CD6A1 * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_t66DDEE07B34D2CD03DF7E22CC15C182D874CD6A1 ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_t66DDEE07B34D2CD03DF7E22CC15C182D874CD6A1 * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1_Caster`1<System.Byte,System.UInt64>
struct  Caster_1_t2CA443C9D90B2AC43B053165D7BC85A19BFCF2D5  : public RuntimeObject
{
public:

public:
};

struct Caster_1_t2CA443C9D90B2AC43B053165D7BC85A19BFCF2D5_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1_Caster`1::Instance
	Transformer_1_t16C0B9A25005C19C84993A6DF613E235C47DF3D8 * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_t2CA443C9D90B2AC43B053165D7BC85A19BFCF2D5_StaticFields, ___Instance_0)); }
	inline Transformer_1_t16C0B9A25005C19C84993A6DF613E235C47DF3D8 * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_t16C0B9A25005C19C84993A6DF613E235C47DF3D8 ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_t16C0B9A25005C19C84993A6DF613E235C47DF3D8 * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1_Caster`1<System.Byte,System.UIntPtr>
struct  Caster_1_tC1342B867E547659C2DE93A11672D24B7DD9CED7  : public RuntimeObject
{
public:

public:
};

struct Caster_1_tC1342B867E547659C2DE93A11672D24B7DD9CED7_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1_Caster`1::Instance
	Transformer_1_tB3A92B161A295C5CE5BB20A5F09DAF8808175D63 * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_tC1342B867E547659C2DE93A11672D24B7DD9CED7_StaticFields, ___Instance_0)); }
	inline Transformer_1_tB3A92B161A295C5CE5BB20A5F09DAF8808175D63 * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_tB3A92B161A295C5CE5BB20A5F09DAF8808175D63 ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_tB3A92B161A295C5CE5BB20A5F09DAF8808175D63 * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1_Caster`1<System.Int16,System.Boolean>
struct  Caster_1_t0B30A0D4BA7D5C6566B3E0FF1E610301CA832250  : public RuntimeObject
{
public:

public:
};

struct Caster_1_t0B30A0D4BA7D5C6566B3E0FF1E610301CA832250_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1_Caster`1::Instance
	Transformer_1_t1DD535D7A0BF0DF1D9BD217F42BD8B86FED818F0 * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_t0B30A0D4BA7D5C6566B3E0FF1E610301CA832250_StaticFields, ___Instance_0)); }
	inline Transformer_1_t1DD535D7A0BF0DF1D9BD217F42BD8B86FED818F0 * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_t1DD535D7A0BF0DF1D9BD217F42BD8B86FED818F0 ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_t1DD535D7A0BF0DF1D9BD217F42BD8B86FED818F0 * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1_Caster`1<System.Int16,System.Byte>
struct  Caster_1_t0491219BACF522D16AECE2AB6BD690C9464F10F4  : public RuntimeObject
{
public:

public:
};

struct Caster_1_t0491219BACF522D16AECE2AB6BD690C9464F10F4_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1_Caster`1::Instance
	Transformer_1_t50ABA94494AF2D216A78139ACFFBE9584E70845C * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_t0491219BACF522D16AECE2AB6BD690C9464F10F4_StaticFields, ___Instance_0)); }
	inline Transformer_1_t50ABA94494AF2D216A78139ACFFBE9584E70845C * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_t50ABA94494AF2D216A78139ACFFBE9584E70845C ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_t50ABA94494AF2D216A78139ACFFBE9584E70845C * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1_Caster`1<System.Int16,System.Char>
struct  Caster_1_tA51B86B2FD3FC818E61AF31A48228C5AF4C71212  : public RuntimeObject
{
public:

public:
};

struct Caster_1_tA51B86B2FD3FC818E61AF31A48228C5AF4C71212_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1_Caster`1::Instance
	Transformer_1_t4A76AF5FABAC49231E9903360B082EB5E93769FE * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_tA51B86B2FD3FC818E61AF31A48228C5AF4C71212_StaticFields, ___Instance_0)); }
	inline Transformer_1_t4A76AF5FABAC49231E9903360B082EB5E93769FE * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_t4A76AF5FABAC49231E9903360B082EB5E93769FE ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_t4A76AF5FABAC49231E9903360B082EB5E93769FE * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1_Caster`1<System.Int16,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct  Caster_1_t71D2A64D437FC4544AFAA49A7886CB0F8A2181BB  : public RuntimeObject
{
public:

public:
};

struct Caster_1_t71D2A64D437FC4544AFAA49A7886CB0F8A2181BB_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1_Caster`1::Instance
	Transformer_1_t4E5755522485703458E57CE83CF0EC454BDD2A65 * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_t71D2A64D437FC4544AFAA49A7886CB0F8A2181BB_StaticFields, ___Instance_0)); }
	inline Transformer_1_t4E5755522485703458E57CE83CF0EC454BDD2A65 * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_t4E5755522485703458E57CE83CF0EC454BDD2A65 ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_t4E5755522485703458E57CE83CF0EC454BDD2A65 * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1_Caster`1<System.Int16,System.DateTime>
struct  Caster_1_t16726D78015CB49831B9ADBA7CEFAEFC87309821  : public RuntimeObject
{
public:

public:
};

struct Caster_1_t16726D78015CB49831B9ADBA7CEFAEFC87309821_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1_Caster`1::Instance
	Transformer_1_t7670F7F455D569AE5845734CA6275DDAB457DFD9 * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_t16726D78015CB49831B9ADBA7CEFAEFC87309821_StaticFields, ___Instance_0)); }
	inline Transformer_1_t7670F7F455D569AE5845734CA6275DDAB457DFD9 * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_t7670F7F455D569AE5845734CA6275DDAB457DFD9 ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_t7670F7F455D569AE5845734CA6275DDAB457DFD9 * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1_Caster`1<System.Int16,System.DateTimeOffset>
struct  Caster_1_t09398F3F7D26086013828F5CD0B514F10F1BFB1C  : public RuntimeObject
{
public:

public:
};

struct Caster_1_t09398F3F7D26086013828F5CD0B514F10F1BFB1C_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1_Caster`1::Instance
	Transformer_1_t6ED2F8177C72CFD7E30DFF454AA4BC1B74679C56 * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_t09398F3F7D26086013828F5CD0B514F10F1BFB1C_StaticFields, ___Instance_0)); }
	inline Transformer_1_t6ED2F8177C72CFD7E30DFF454AA4BC1B74679C56 * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_t6ED2F8177C72CFD7E30DFF454AA4BC1B74679C56 ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_t6ED2F8177C72CFD7E30DFF454AA4BC1B74679C56 * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1_Caster`1<System.Int16,System.Decimal>
struct  Caster_1_tDBC5689DFC01B97FDD16F4D26DF9387B7F21056E  : public RuntimeObject
{
public:

public:
};

struct Caster_1_tDBC5689DFC01B97FDD16F4D26DF9387B7F21056E_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1_Caster`1::Instance
	Transformer_1_t641A86473503A4AB08D80E33213C47386F023BF3 * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_tDBC5689DFC01B97FDD16F4D26DF9387B7F21056E_StaticFields, ___Instance_0)); }
	inline Transformer_1_t641A86473503A4AB08D80E33213C47386F023BF3 * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_t641A86473503A4AB08D80E33213C47386F023BF3 ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_t641A86473503A4AB08D80E33213C47386F023BF3 * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1_Caster`1<System.Int16,System.Diagnostics.Tracing.EmptyStruct>
struct  Caster_1_tE1E5D78C81A8F6D328F84599BBB28574BC19C9DB  : public RuntimeObject
{
public:

public:
};

struct Caster_1_tE1E5D78C81A8F6D328F84599BBB28574BC19C9DB_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1_Caster`1::Instance
	Transformer_1_t6FEFE5B54753E83410F77B31890AED883398BD9E * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_tE1E5D78C81A8F6D328F84599BBB28574BC19C9DB_StaticFields, ___Instance_0)); }
	inline Transformer_1_t6FEFE5B54753E83410F77B31890AED883398BD9E * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_t6FEFE5B54753E83410F77B31890AED883398BD9E ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_t6FEFE5B54753E83410F77B31890AED883398BD9E * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1_Caster`1<System.Int16,System.Double>
struct  Caster_1_tB2E729DB6666F1806CFFBB8D54BC0632DE489ABE  : public RuntimeObject
{
public:

public:
};

struct Caster_1_tB2E729DB6666F1806CFFBB8D54BC0632DE489ABE_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1_Caster`1::Instance
	Transformer_1_t52E02D9A03321E660B3ED7DE9478EE15F5A8ABBA * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_tB2E729DB6666F1806CFFBB8D54BC0632DE489ABE_StaticFields, ___Instance_0)); }
	inline Transformer_1_t52E02D9A03321E660B3ED7DE9478EE15F5A8ABBA * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_t52E02D9A03321E660B3ED7DE9478EE15F5A8ABBA ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_t52E02D9A03321E660B3ED7DE9478EE15F5A8ABBA * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1_Caster`1<System.Int16,System.Guid>
struct  Caster_1_tE8D150944ED5F3C65255675A1102CBE45E53A67A  : public RuntimeObject
{
public:

public:
};

struct Caster_1_tE8D150944ED5F3C65255675A1102CBE45E53A67A_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1_Caster`1::Instance
	Transformer_1_t7F21EEE32F525F971881D42A9C3C10149176FF64 * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_tE8D150944ED5F3C65255675A1102CBE45E53A67A_StaticFields, ___Instance_0)); }
	inline Transformer_1_t7F21EEE32F525F971881D42A9C3C10149176FF64 * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_t7F21EEE32F525F971881D42A9C3C10149176FF64 ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_t7F21EEE32F525F971881D42A9C3C10149176FF64 * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1_Caster`1<System.Int16,System.Int16>
struct  Caster_1_tF7215950D0CE02AC5CCDB60DBAE63F97F90289D5  : public RuntimeObject
{
public:

public:
};

struct Caster_1_tF7215950D0CE02AC5CCDB60DBAE63F97F90289D5_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1_Caster`1::Instance
	Transformer_1_t419E6E51E81BB9975C7D042A2BA9F7775173A026 * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_tF7215950D0CE02AC5CCDB60DBAE63F97F90289D5_StaticFields, ___Instance_0)); }
	inline Transformer_1_t419E6E51E81BB9975C7D042A2BA9F7775173A026 * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_t419E6E51E81BB9975C7D042A2BA9F7775173A026 ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_t419E6E51E81BB9975C7D042A2BA9F7775173A026 * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1_Caster`1<System.Int16,System.Int32>
struct  Caster_1_t57AB060B5F925FCB67D5FB3E1CA3A3D5FE61ABA3  : public RuntimeObject
{
public:

public:
};

struct Caster_1_t57AB060B5F925FCB67D5FB3E1CA3A3D5FE61ABA3_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1_Caster`1::Instance
	Transformer_1_tF45CCD70807F5D9D3F0F888314AF2D040221A9DF * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_t57AB060B5F925FCB67D5FB3E1CA3A3D5FE61ABA3_StaticFields, ___Instance_0)); }
	inline Transformer_1_tF45CCD70807F5D9D3F0F888314AF2D040221A9DF * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_tF45CCD70807F5D9D3F0F888314AF2D040221A9DF ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_tF45CCD70807F5D9D3F0F888314AF2D040221A9DF * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1_Caster`1<System.Int16,System.Int64>
struct  Caster_1_tC5E49B074681892EDD34AFC0D37E72E9A61E3365  : public RuntimeObject
{
public:

public:
};

struct Caster_1_tC5E49B074681892EDD34AFC0D37E72E9A61E3365_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1_Caster`1::Instance
	Transformer_1_tE4D99CFDC91F9C2FD7B786088CC0C24C88A2ACD2 * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_tC5E49B074681892EDD34AFC0D37E72E9A61E3365_StaticFields, ___Instance_0)); }
	inline Transformer_1_tE4D99CFDC91F9C2FD7B786088CC0C24C88A2ACD2 * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_tE4D99CFDC91F9C2FD7B786088CC0C24C88A2ACD2 ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_tE4D99CFDC91F9C2FD7B786088CC0C24C88A2ACD2 * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1_Caster`1<System.Int16,System.IntPtr>
struct  Caster_1_tF0970E662BDB615DD3C168CEEC1D17122620D2ED  : public RuntimeObject
{
public:

public:
};

struct Caster_1_tF0970E662BDB615DD3C168CEEC1D17122620D2ED_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1_Caster`1::Instance
	Transformer_1_t6CEF5B426229DB191F2B9957F2A090DC27527AC3 * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_tF0970E662BDB615DD3C168CEEC1D17122620D2ED_StaticFields, ___Instance_0)); }
	inline Transformer_1_t6CEF5B426229DB191F2B9957F2A090DC27527AC3 * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_t6CEF5B426229DB191F2B9957F2A090DC27527AC3 ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_t6CEF5B426229DB191F2B9957F2A090DC27527AC3 * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1_Caster`1<System.Int16,System.Object>
struct  Caster_1_tD87C66383C598E45BB2849C2C280F7E38199CE5B  : public RuntimeObject
{
public:

public:
};

struct Caster_1_tD87C66383C598E45BB2849C2C280F7E38199CE5B_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1_Caster`1::Instance
	Transformer_1_tCFCF83ED75D84A4CAF67C05C1FC5723F8C6A1045 * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_tD87C66383C598E45BB2849C2C280F7E38199CE5B_StaticFields, ___Instance_0)); }
	inline Transformer_1_tCFCF83ED75D84A4CAF67C05C1FC5723F8C6A1045 * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_tCFCF83ED75D84A4CAF67C05C1FC5723F8C6A1045 ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_tCFCF83ED75D84A4CAF67C05C1FC5723F8C6A1045 * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1_Caster`1<System.Int16,System.SByte>
struct  Caster_1_tDC81706502EDEF8F14A2742E1DDD1BD12751C63D  : public RuntimeObject
{
public:

public:
};

struct Caster_1_tDC81706502EDEF8F14A2742E1DDD1BD12751C63D_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1_Caster`1::Instance
	Transformer_1_tBD2E80E7566D74877DA3212B5E8196D9FC0EEE9C * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_tDC81706502EDEF8F14A2742E1DDD1BD12751C63D_StaticFields, ___Instance_0)); }
	inline Transformer_1_tBD2E80E7566D74877DA3212B5E8196D9FC0EEE9C * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_tBD2E80E7566D74877DA3212B5E8196D9FC0EEE9C ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_tBD2E80E7566D74877DA3212B5E8196D9FC0EEE9C * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1_Caster`1<System.Int16,System.Single>
struct  Caster_1_tDAF7C40F23E3EC6040380D96895B7C2212CEAF5C  : public RuntimeObject
{
public:

public:
};

struct Caster_1_tDAF7C40F23E3EC6040380D96895B7C2212CEAF5C_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1_Caster`1::Instance
	Transformer_1_tE4654A831E478CF993AC1ECE67A127F7FB1E4A3E * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_tDAF7C40F23E3EC6040380D96895B7C2212CEAF5C_StaticFields, ___Instance_0)); }
	inline Transformer_1_tE4654A831E478CF993AC1ECE67A127F7FB1E4A3E * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_tE4654A831E478CF993AC1ECE67A127F7FB1E4A3E ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_tE4654A831E478CF993AC1ECE67A127F7FB1E4A3E * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1_Caster`1<System.Int16,System.TimeSpan>
struct  Caster_1_t26B54EB37145B1A61214BB990A2AE1D20C46AD27  : public RuntimeObject
{
public:

public:
};

struct Caster_1_t26B54EB37145B1A61214BB990A2AE1D20C46AD27_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1_Caster`1::Instance
	Transformer_1_t3DD73B3138E8429397F66CF88430EE935D8F6A5A * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_t26B54EB37145B1A61214BB990A2AE1D20C46AD27_StaticFields, ___Instance_0)); }
	inline Transformer_1_t3DD73B3138E8429397F66CF88430EE935D8F6A5A * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_t3DD73B3138E8429397F66CF88430EE935D8F6A5A ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_t3DD73B3138E8429397F66CF88430EE935D8F6A5A * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1_Caster`1<System.Int16,System.UInt16>
struct  Caster_1_tC25E79DE2B55C003D51235BEEBF18781726EF094  : public RuntimeObject
{
public:

public:
};

struct Caster_1_tC25E79DE2B55C003D51235BEEBF18781726EF094_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1_Caster`1::Instance
	Transformer_1_t1F4B4372781FC446330AC8A270A5E4FA8E97E7E0 * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_tC25E79DE2B55C003D51235BEEBF18781726EF094_StaticFields, ___Instance_0)); }
	inline Transformer_1_t1F4B4372781FC446330AC8A270A5E4FA8E97E7E0 * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_t1F4B4372781FC446330AC8A270A5E4FA8E97E7E0 ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_t1F4B4372781FC446330AC8A270A5E4FA8E97E7E0 * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1_Caster`1<System.Int16,System.UInt32>
struct  Caster_1_tB8ED6E949DD7AB158E8FE36D703C8F6901F95ECB  : public RuntimeObject
{
public:

public:
};

struct Caster_1_tB8ED6E949DD7AB158E8FE36D703C8F6901F95ECB_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1_Caster`1::Instance
	Transformer_1_t1FE24F77113F8F764EB938DC178B4BD87905418D * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_tB8ED6E949DD7AB158E8FE36D703C8F6901F95ECB_StaticFields, ___Instance_0)); }
	inline Transformer_1_t1FE24F77113F8F764EB938DC178B4BD87905418D * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_t1FE24F77113F8F764EB938DC178B4BD87905418D ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_t1FE24F77113F8F764EB938DC178B4BD87905418D * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1_Caster`1<System.Int16,System.UInt64>
struct  Caster_1_t1429D9BA96F7699397E49F9F7DFE8BA131D36690  : public RuntimeObject
{
public:

public:
};

struct Caster_1_t1429D9BA96F7699397E49F9F7DFE8BA131D36690_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1_Caster`1::Instance
	Transformer_1_tF356827C832FD4AE0C32E65BE1B266E9B6179C89 * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_t1429D9BA96F7699397E49F9F7DFE8BA131D36690_StaticFields, ___Instance_0)); }
	inline Transformer_1_tF356827C832FD4AE0C32E65BE1B266E9B6179C89 * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_tF356827C832FD4AE0C32E65BE1B266E9B6179C89 ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_tF356827C832FD4AE0C32E65BE1B266E9B6179C89 * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1_Caster`1<System.Int16,System.UIntPtr>
struct  Caster_1_t04B4FCAAD6792A3E90C896EC73A365ED6A40BB16  : public RuntimeObject
{
public:

public:
};

struct Caster_1_t04B4FCAAD6792A3E90C896EC73A365ED6A40BB16_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1_Caster`1::Instance
	Transformer_1_t304A837732E6FE07B26DAD7E83654774230CB3FB * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_t04B4FCAAD6792A3E90C896EC73A365ED6A40BB16_StaticFields, ___Instance_0)); }
	inline Transformer_1_t304A837732E6FE07B26DAD7E83654774230CB3FB * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_t304A837732E6FE07B26DAD7E83654774230CB3FB ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_t304A837732E6FE07B26DAD7E83654774230CB3FB * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1_Caster`1<System.Int32,System.Boolean>
struct  Caster_1_t4AC4FAB02EEEA58E1227CC25B4207DB242576F21  : public RuntimeObject
{
public:

public:
};

struct Caster_1_t4AC4FAB02EEEA58E1227CC25B4207DB242576F21_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1_Caster`1::Instance
	Transformer_1_tBF8C995894CEE8C7A6B676EB123674338F92576B * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_t4AC4FAB02EEEA58E1227CC25B4207DB242576F21_StaticFields, ___Instance_0)); }
	inline Transformer_1_tBF8C995894CEE8C7A6B676EB123674338F92576B * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_tBF8C995894CEE8C7A6B676EB123674338F92576B ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_tBF8C995894CEE8C7A6B676EB123674338F92576B * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1_Caster`1<System.Int32,System.Byte>
struct  Caster_1_t81CB7C813BA62407F73AC8CD5519E2489E8AC560  : public RuntimeObject
{
public:

public:
};

struct Caster_1_t81CB7C813BA62407F73AC8CD5519E2489E8AC560_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1_Caster`1::Instance
	Transformer_1_t01B518FF127F164CE97FA8EC16EEFCACA57EDDA1 * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_t81CB7C813BA62407F73AC8CD5519E2489E8AC560_StaticFields, ___Instance_0)); }
	inline Transformer_1_t01B518FF127F164CE97FA8EC16EEFCACA57EDDA1 * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_t01B518FF127F164CE97FA8EC16EEFCACA57EDDA1 ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_t01B518FF127F164CE97FA8EC16EEFCACA57EDDA1 * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1_Caster`1<System.Int32,System.Char>
struct  Caster_1_t7E18CFA246A94CA41CB928FFB3CFF155F9040294  : public RuntimeObject
{
public:

public:
};

struct Caster_1_t7E18CFA246A94CA41CB928FFB3CFF155F9040294_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1_Caster`1::Instance
	Transformer_1_tC16A37EE6FCC90F34784D3F3F1AEFE0FD27AFB5E * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_t7E18CFA246A94CA41CB928FFB3CFF155F9040294_StaticFields, ___Instance_0)); }
	inline Transformer_1_tC16A37EE6FCC90F34784D3F3F1AEFE0FD27AFB5E * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_tC16A37EE6FCC90F34784D3F3F1AEFE0FD27AFB5E ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_tC16A37EE6FCC90F34784D3F3F1AEFE0FD27AFB5E * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1_Caster`1<System.Int32,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct  Caster_1_t86EA30280ADC42FFD1F18CD72B5FC235DA9A151C  : public RuntimeObject
{
public:

public:
};

struct Caster_1_t86EA30280ADC42FFD1F18CD72B5FC235DA9A151C_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1_Caster`1::Instance
	Transformer_1_t93586EBFA51523F443E1EC8D4A94AE26E174F019 * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_t86EA30280ADC42FFD1F18CD72B5FC235DA9A151C_StaticFields, ___Instance_0)); }
	inline Transformer_1_t93586EBFA51523F443E1EC8D4A94AE26E174F019 * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_t93586EBFA51523F443E1EC8D4A94AE26E174F019 ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_t93586EBFA51523F443E1EC8D4A94AE26E174F019 * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1_Caster`1<System.Int32,System.DateTime>
struct  Caster_1_tD833AB38E756CEA71E0D1B2CA33C6891D1888D8E  : public RuntimeObject
{
public:

public:
};

struct Caster_1_tD833AB38E756CEA71E0D1B2CA33C6891D1888D8E_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1_Caster`1::Instance
	Transformer_1_t328F2E76FF0B5E491B8CAF2EA380EBC4EB59B3F5 * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_tD833AB38E756CEA71E0D1B2CA33C6891D1888D8E_StaticFields, ___Instance_0)); }
	inline Transformer_1_t328F2E76FF0B5E491B8CAF2EA380EBC4EB59B3F5 * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_t328F2E76FF0B5E491B8CAF2EA380EBC4EB59B3F5 ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_t328F2E76FF0B5E491B8CAF2EA380EBC4EB59B3F5 * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1_Caster`1<System.Int32,System.DateTimeOffset>
struct  Caster_1_t5DE1C65B929D772ABEAD922217249AE5434F90B5  : public RuntimeObject
{
public:

public:
};

struct Caster_1_t5DE1C65B929D772ABEAD922217249AE5434F90B5_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1_Caster`1::Instance
	Transformer_1_tCC180A1514B9EE5AC13DD30B6C50FA5A7FEDB57E * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_t5DE1C65B929D772ABEAD922217249AE5434F90B5_StaticFields, ___Instance_0)); }
	inline Transformer_1_tCC180A1514B9EE5AC13DD30B6C50FA5A7FEDB57E * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_tCC180A1514B9EE5AC13DD30B6C50FA5A7FEDB57E ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_tCC180A1514B9EE5AC13DD30B6C50FA5A7FEDB57E * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1_Caster`1<System.Int32,System.Decimal>
struct  Caster_1_t28CE25E0B5F9395712639641A884283578320BE9  : public RuntimeObject
{
public:

public:
};

struct Caster_1_t28CE25E0B5F9395712639641A884283578320BE9_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1_Caster`1::Instance
	Transformer_1_t9DA6EF3090A9A84BFB452303F6D54693ED562B8D * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_t28CE25E0B5F9395712639641A884283578320BE9_StaticFields, ___Instance_0)); }
	inline Transformer_1_t9DA6EF3090A9A84BFB452303F6D54693ED562B8D * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_t9DA6EF3090A9A84BFB452303F6D54693ED562B8D ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_t9DA6EF3090A9A84BFB452303F6D54693ED562B8D * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1_Caster`1<System.Int32,System.Diagnostics.Tracing.EmptyStruct>
struct  Caster_1_tD991ABD4C10A22CA292289253C124B08646531E9  : public RuntimeObject
{
public:

public:
};

struct Caster_1_tD991ABD4C10A22CA292289253C124B08646531E9_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1_Caster`1::Instance
	Transformer_1_t2E9D74696B8E5C5EB6BBCDC6CE43D2DEE3F09D96 * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_tD991ABD4C10A22CA292289253C124B08646531E9_StaticFields, ___Instance_0)); }
	inline Transformer_1_t2E9D74696B8E5C5EB6BBCDC6CE43D2DEE3F09D96 * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_t2E9D74696B8E5C5EB6BBCDC6CE43D2DEE3F09D96 ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_t2E9D74696B8E5C5EB6BBCDC6CE43D2DEE3F09D96 * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1_Caster`1<System.Int32,System.Double>
struct  Caster_1_t75EAF0B25B1D78A6F0CE986103E85AEF19D32077  : public RuntimeObject
{
public:

public:
};

struct Caster_1_t75EAF0B25B1D78A6F0CE986103E85AEF19D32077_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1_Caster`1::Instance
	Transformer_1_t8A94E5D9EB877C6FC400168B14AF35D33EAC1927 * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_t75EAF0B25B1D78A6F0CE986103E85AEF19D32077_StaticFields, ___Instance_0)); }
	inline Transformer_1_t8A94E5D9EB877C6FC400168B14AF35D33EAC1927 * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_t8A94E5D9EB877C6FC400168B14AF35D33EAC1927 ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_t8A94E5D9EB877C6FC400168B14AF35D33EAC1927 * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1_Caster`1<System.Int32,System.Guid>
struct  Caster_1_t570603B5E72059BEF54C343789566B033E0BC81F  : public RuntimeObject
{
public:

public:
};

struct Caster_1_t570603B5E72059BEF54C343789566B033E0BC81F_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1_Caster`1::Instance
	Transformer_1_t3D5DF6751A5C0D60CF6F2B25C575C87B052B5A09 * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_t570603B5E72059BEF54C343789566B033E0BC81F_StaticFields, ___Instance_0)); }
	inline Transformer_1_t3D5DF6751A5C0D60CF6F2B25C575C87B052B5A09 * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_t3D5DF6751A5C0D60CF6F2B25C575C87B052B5A09 ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_t3D5DF6751A5C0D60CF6F2B25C575C87B052B5A09 * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1_Caster`1<System.Int32,System.Int16>
struct  Caster_1_t5E7364B68A513E014F7C7BE9ADBAF37EF3F005F3  : public RuntimeObject
{
public:

public:
};

struct Caster_1_t5E7364B68A513E014F7C7BE9ADBAF37EF3F005F3_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1_Caster`1::Instance
	Transformer_1_t99F6F9B70C5895106F3A5DB68D4B296689F8B067 * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_t5E7364B68A513E014F7C7BE9ADBAF37EF3F005F3_StaticFields, ___Instance_0)); }
	inline Transformer_1_t99F6F9B70C5895106F3A5DB68D4B296689F8B067 * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_t99F6F9B70C5895106F3A5DB68D4B296689F8B067 ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_t99F6F9B70C5895106F3A5DB68D4B296689F8B067 * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1_Caster`1<System.Int32,System.Int32>
struct  Caster_1_t16B97B89A5E2AFAA2F23D6835CAC8D09AD8321BF  : public RuntimeObject
{
public:

public:
};

struct Caster_1_t16B97B89A5E2AFAA2F23D6835CAC8D09AD8321BF_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1_Caster`1::Instance
	Transformer_1_tA81CCAAE8973F628B7A145877B4062C5A6476EBA * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_t16B97B89A5E2AFAA2F23D6835CAC8D09AD8321BF_StaticFields, ___Instance_0)); }
	inline Transformer_1_tA81CCAAE8973F628B7A145877B4062C5A6476EBA * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_tA81CCAAE8973F628B7A145877B4062C5A6476EBA ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_tA81CCAAE8973F628B7A145877B4062C5A6476EBA * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1_Caster`1<System.Int32,System.Int64>
struct  Caster_1_t8FE124A275CD1D6FB67CEB3CE133803C71D0DC23  : public RuntimeObject
{
public:

public:
};

struct Caster_1_t8FE124A275CD1D6FB67CEB3CE133803C71D0DC23_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1_Caster`1::Instance
	Transformer_1_t02AD560B0C76565668CD783B3106FF62B8B84B6A * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_t8FE124A275CD1D6FB67CEB3CE133803C71D0DC23_StaticFields, ___Instance_0)); }
	inline Transformer_1_t02AD560B0C76565668CD783B3106FF62B8B84B6A * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_t02AD560B0C76565668CD783B3106FF62B8B84B6A ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_t02AD560B0C76565668CD783B3106FF62B8B84B6A * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1_Caster`1<System.Int32,System.IntPtr>
struct  Caster_1_tA5FAEEF004E4BE07EBB15208BE2E74CEB2CAE96F  : public RuntimeObject
{
public:

public:
};

struct Caster_1_tA5FAEEF004E4BE07EBB15208BE2E74CEB2CAE96F_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1_Caster`1::Instance
	Transformer_1_tF4E5AD75B7C97D1E146A64FE337106FD89C6F9A1 * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_tA5FAEEF004E4BE07EBB15208BE2E74CEB2CAE96F_StaticFields, ___Instance_0)); }
	inline Transformer_1_tF4E5AD75B7C97D1E146A64FE337106FD89C6F9A1 * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_tF4E5AD75B7C97D1E146A64FE337106FD89C6F9A1 ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_tF4E5AD75B7C97D1E146A64FE337106FD89C6F9A1 * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1_Caster`1<System.Int32,System.Object>
struct  Caster_1_t92052BF2CFF2EDED4ADB9A83AD65BDA995BBA7C0  : public RuntimeObject
{
public:

public:
};

struct Caster_1_t92052BF2CFF2EDED4ADB9A83AD65BDA995BBA7C0_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1_Caster`1::Instance
	Transformer_1_t8127E59A1665321B73B90EA261FA4C751848C9A9 * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_t92052BF2CFF2EDED4ADB9A83AD65BDA995BBA7C0_StaticFields, ___Instance_0)); }
	inline Transformer_1_t8127E59A1665321B73B90EA261FA4C751848C9A9 * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_t8127E59A1665321B73B90EA261FA4C751848C9A9 ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_t8127E59A1665321B73B90EA261FA4C751848C9A9 * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1_Caster`1<System.Int32,System.SByte>
struct  Caster_1_tC8E3D988751FF2A00C122855C1A6D761D425AA78  : public RuntimeObject
{
public:

public:
};

struct Caster_1_tC8E3D988751FF2A00C122855C1A6D761D425AA78_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1_Caster`1::Instance
	Transformer_1_tBCB35269B242493E2D4A887CFFE7A61731CBEF5A * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_tC8E3D988751FF2A00C122855C1A6D761D425AA78_StaticFields, ___Instance_0)); }
	inline Transformer_1_tBCB35269B242493E2D4A887CFFE7A61731CBEF5A * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_tBCB35269B242493E2D4A887CFFE7A61731CBEF5A ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_tBCB35269B242493E2D4A887CFFE7A61731CBEF5A * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1_Caster`1<System.Int32,System.Single>
struct  Caster_1_t504D47BCCE5ADEBF8882184FF715CB68AC4B5051  : public RuntimeObject
{
public:

public:
};

struct Caster_1_t504D47BCCE5ADEBF8882184FF715CB68AC4B5051_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1_Caster`1::Instance
	Transformer_1_t3D59790A1C59CD6C9FB82446360BCF4333BDA0C0 * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_t504D47BCCE5ADEBF8882184FF715CB68AC4B5051_StaticFields, ___Instance_0)); }
	inline Transformer_1_t3D59790A1C59CD6C9FB82446360BCF4333BDA0C0 * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_t3D59790A1C59CD6C9FB82446360BCF4333BDA0C0 ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_t3D59790A1C59CD6C9FB82446360BCF4333BDA0C0 * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1_Caster`1<System.Int32,System.TimeSpan>
struct  Caster_1_t6163D9A5112744E950CFB66A2DF592E366052B6B  : public RuntimeObject
{
public:

public:
};

struct Caster_1_t6163D9A5112744E950CFB66A2DF592E366052B6B_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1_Caster`1::Instance
	Transformer_1_t03D55FED65D94DBAED862349A37D45E92B20C2BD * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_t6163D9A5112744E950CFB66A2DF592E366052B6B_StaticFields, ___Instance_0)); }
	inline Transformer_1_t03D55FED65D94DBAED862349A37D45E92B20C2BD * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_t03D55FED65D94DBAED862349A37D45E92B20C2BD ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_t03D55FED65D94DBAED862349A37D45E92B20C2BD * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1_Caster`1<System.Int32,System.UInt16>
struct  Caster_1_t39D7EAE606D7415D8EB470D832481BF8AB270361  : public RuntimeObject
{
public:

public:
};

struct Caster_1_t39D7EAE606D7415D8EB470D832481BF8AB270361_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1_Caster`1::Instance
	Transformer_1_t0BE87D3995F2502A8304E6BB9D2ECEBC3642A047 * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_t39D7EAE606D7415D8EB470D832481BF8AB270361_StaticFields, ___Instance_0)); }
	inline Transformer_1_t0BE87D3995F2502A8304E6BB9D2ECEBC3642A047 * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_t0BE87D3995F2502A8304E6BB9D2ECEBC3642A047 ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_t0BE87D3995F2502A8304E6BB9D2ECEBC3642A047 * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1_Caster`1<System.Int32,System.UInt32>
struct  Caster_1_t7EDD1567547221FF0FB7EC955F24924ABC7A84E7  : public RuntimeObject
{
public:

public:
};

struct Caster_1_t7EDD1567547221FF0FB7EC955F24924ABC7A84E7_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1_Caster`1::Instance
	Transformer_1_t61E0325EA41D08B9CBD542F1FD5575B3AE521EF9 * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_t7EDD1567547221FF0FB7EC955F24924ABC7A84E7_StaticFields, ___Instance_0)); }
	inline Transformer_1_t61E0325EA41D08B9CBD542F1FD5575B3AE521EF9 * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_t61E0325EA41D08B9CBD542F1FD5575B3AE521EF9 ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_t61E0325EA41D08B9CBD542F1FD5575B3AE521EF9 * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1_Caster`1<System.Int32,System.UInt64>
struct  Caster_1_t6DF262FAAE38A5B0B306577088BDA059ECCC9F65  : public RuntimeObject
{
public:

public:
};

struct Caster_1_t6DF262FAAE38A5B0B306577088BDA059ECCC9F65_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1_Caster`1::Instance
	Transformer_1_t0E6E26122494478302E7A49E89B2996EF405CD94 * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_t6DF262FAAE38A5B0B306577088BDA059ECCC9F65_StaticFields, ___Instance_0)); }
	inline Transformer_1_t0E6E26122494478302E7A49E89B2996EF405CD94 * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_t0E6E26122494478302E7A49E89B2996EF405CD94 ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_t0E6E26122494478302E7A49E89B2996EF405CD94 * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1_Caster`1<System.Int32,System.UIntPtr>
struct  Caster_1_tB613C28BF5CDACEDED37873D181F3D877FAA0BD4  : public RuntimeObject
{
public:

public:
};

struct Caster_1_tB613C28BF5CDACEDED37873D181F3D877FAA0BD4_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1_Caster`1::Instance
	Transformer_1_t97F7D34BC6D17120EA3004D49E37A6C5ED7F4A2D * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_tB613C28BF5CDACEDED37873D181F3D877FAA0BD4_StaticFields, ___Instance_0)); }
	inline Transformer_1_t97F7D34BC6D17120EA3004D49E37A6C5ED7F4A2D * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_t97F7D34BC6D17120EA3004D49E37A6C5ED7F4A2D ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_t97F7D34BC6D17120EA3004D49E37A6C5ED7F4A2D * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1_Caster`1<System.Int64,System.Boolean>
struct  Caster_1_t19DD5895960BB8EC09D9AC747742D0BF3CA768C7  : public RuntimeObject
{
public:

public:
};

struct Caster_1_t19DD5895960BB8EC09D9AC747742D0BF3CA768C7_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1_Caster`1::Instance
	Transformer_1_t476AB6D35C259B3EC718080C147176597C25CD89 * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_t19DD5895960BB8EC09D9AC747742D0BF3CA768C7_StaticFields, ___Instance_0)); }
	inline Transformer_1_t476AB6D35C259B3EC718080C147176597C25CD89 * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_t476AB6D35C259B3EC718080C147176597C25CD89 ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_t476AB6D35C259B3EC718080C147176597C25CD89 * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1_Caster`1<System.Int64,System.Byte>
struct  Caster_1_t4D2FC6AFBE9836A3564F2FC128F3C56FAD32C319  : public RuntimeObject
{
public:

public:
};

struct Caster_1_t4D2FC6AFBE9836A3564F2FC128F3C56FAD32C319_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1_Caster`1::Instance
	Transformer_1_t91E959A6CAE1BE68AA170F06A153ADE1A7389266 * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_t4D2FC6AFBE9836A3564F2FC128F3C56FAD32C319_StaticFields, ___Instance_0)); }
	inline Transformer_1_t91E959A6CAE1BE68AA170F06A153ADE1A7389266 * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_t91E959A6CAE1BE68AA170F06A153ADE1A7389266 ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_t91E959A6CAE1BE68AA170F06A153ADE1A7389266 * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1_Caster`1<System.Int64,System.Char>
struct  Caster_1_tCC175D3B74CC958ABF7CB37AFF02E72B4030E7DF  : public RuntimeObject
{
public:

public:
};

struct Caster_1_tCC175D3B74CC958ABF7CB37AFF02E72B4030E7DF_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1_Caster`1::Instance
	Transformer_1_tCF44E9940C3311C437EEEA20B8323BA248FFDC1C * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_tCC175D3B74CC958ABF7CB37AFF02E72B4030E7DF_StaticFields, ___Instance_0)); }
	inline Transformer_1_tCF44E9940C3311C437EEEA20B8323BA248FFDC1C * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_tCF44E9940C3311C437EEEA20B8323BA248FFDC1C ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_tCF44E9940C3311C437EEEA20B8323BA248FFDC1C * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1_Caster`1<System.Int64,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct  Caster_1_tDEB8E64C292126E69D8045806810D8AE28F4380F  : public RuntimeObject
{
public:

public:
};

struct Caster_1_tDEB8E64C292126E69D8045806810D8AE28F4380F_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1_Caster`1::Instance
	Transformer_1_t65360D5FC768CB17A9F463BAA4830584F51CC070 * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_tDEB8E64C292126E69D8045806810D8AE28F4380F_StaticFields, ___Instance_0)); }
	inline Transformer_1_t65360D5FC768CB17A9F463BAA4830584F51CC070 * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_t65360D5FC768CB17A9F463BAA4830584F51CC070 ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_t65360D5FC768CB17A9F463BAA4830584F51CC070 * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1_Caster`1<System.Int64,System.DateTime>
struct  Caster_1_t13A47AE7E758FC72624048C0ACDCDFBBEA080342  : public RuntimeObject
{
public:

public:
};

struct Caster_1_t13A47AE7E758FC72624048C0ACDCDFBBEA080342_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1_Caster`1::Instance
	Transformer_1_tEC949466F60165355AE9D6DD91FCE5D3BA94B31C * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_t13A47AE7E758FC72624048C0ACDCDFBBEA080342_StaticFields, ___Instance_0)); }
	inline Transformer_1_tEC949466F60165355AE9D6DD91FCE5D3BA94B31C * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_tEC949466F60165355AE9D6DD91FCE5D3BA94B31C ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_tEC949466F60165355AE9D6DD91FCE5D3BA94B31C * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1_Caster`1<System.Int64,System.DateTimeOffset>
struct  Caster_1_t25DC0B4053C2D75C10FFAEF4AD7F2AD7ED4219EC  : public RuntimeObject
{
public:

public:
};

struct Caster_1_t25DC0B4053C2D75C10FFAEF4AD7F2AD7ED4219EC_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1_Caster`1::Instance
	Transformer_1_tAB7D785D4627FF77BCA35F5697866F93058D17A1 * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_t25DC0B4053C2D75C10FFAEF4AD7F2AD7ED4219EC_StaticFields, ___Instance_0)); }
	inline Transformer_1_tAB7D785D4627FF77BCA35F5697866F93058D17A1 * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_tAB7D785D4627FF77BCA35F5697866F93058D17A1 ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_tAB7D785D4627FF77BCA35F5697866F93058D17A1 * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1_Caster`1<System.Int64,System.Decimal>
struct  Caster_1_tD3FD442F9868C39046AA05D510EA34B45C4C6FAC  : public RuntimeObject
{
public:

public:
};

struct Caster_1_tD3FD442F9868C39046AA05D510EA34B45C4C6FAC_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1_Caster`1::Instance
	Transformer_1_t5811E5E5AC2445E17746DB0CF9B97CE68CBF8CC3 * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_tD3FD442F9868C39046AA05D510EA34B45C4C6FAC_StaticFields, ___Instance_0)); }
	inline Transformer_1_t5811E5E5AC2445E17746DB0CF9B97CE68CBF8CC3 * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_t5811E5E5AC2445E17746DB0CF9B97CE68CBF8CC3 ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_t5811E5E5AC2445E17746DB0CF9B97CE68CBF8CC3 * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1_Caster`1<System.Int64,System.Diagnostics.Tracing.EmptyStruct>
struct  Caster_1_tE52CC2717F8A79278819713E060B94356D02A723  : public RuntimeObject
{
public:

public:
};

struct Caster_1_tE52CC2717F8A79278819713E060B94356D02A723_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1_Caster`1::Instance
	Transformer_1_t769FB5C7E8D2DCBC58B48600F5E170AC9CF87E47 * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_tE52CC2717F8A79278819713E060B94356D02A723_StaticFields, ___Instance_0)); }
	inline Transformer_1_t769FB5C7E8D2DCBC58B48600F5E170AC9CF87E47 * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_t769FB5C7E8D2DCBC58B48600F5E170AC9CF87E47 ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_t769FB5C7E8D2DCBC58B48600F5E170AC9CF87E47 * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1_Caster`1<System.Int64,System.Double>
struct  Caster_1_t8ACEA5F28CE61D34A51E109E4B6CA3F90E83E43D  : public RuntimeObject
{
public:

public:
};

struct Caster_1_t8ACEA5F28CE61D34A51E109E4B6CA3F90E83E43D_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1_Caster`1::Instance
	Transformer_1_t96AA8665F22CF995BA6679B469328CAF084C63B1 * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_t8ACEA5F28CE61D34A51E109E4B6CA3F90E83E43D_StaticFields, ___Instance_0)); }
	inline Transformer_1_t96AA8665F22CF995BA6679B469328CAF084C63B1 * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_t96AA8665F22CF995BA6679B469328CAF084C63B1 ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_t96AA8665F22CF995BA6679B469328CAF084C63B1 * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1_Caster`1<System.Int64,System.Guid>
struct  Caster_1_t1036147CC663C4B4CDDA191F9303A95AD081F0D2  : public RuntimeObject
{
public:

public:
};

struct Caster_1_t1036147CC663C4B4CDDA191F9303A95AD081F0D2_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1_Caster`1::Instance
	Transformer_1_t7D25ED7E6618ACBCFDD309E39C5660C035ADDAF9 * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_t1036147CC663C4B4CDDA191F9303A95AD081F0D2_StaticFields, ___Instance_0)); }
	inline Transformer_1_t7D25ED7E6618ACBCFDD309E39C5660C035ADDAF9 * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_t7D25ED7E6618ACBCFDD309E39C5660C035ADDAF9 ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_t7D25ED7E6618ACBCFDD309E39C5660C035ADDAF9 * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1_Caster`1<System.Int64,System.Int16>
struct  Caster_1_t024FFC25440726A8B80C0910742A3E7CB54E2C35  : public RuntimeObject
{
public:

public:
};

struct Caster_1_t024FFC25440726A8B80C0910742A3E7CB54E2C35_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1_Caster`1::Instance
	Transformer_1_t76BFF54E0F2CF5011E1567A7D589E72FFBE618B1 * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_t024FFC25440726A8B80C0910742A3E7CB54E2C35_StaticFields, ___Instance_0)); }
	inline Transformer_1_t76BFF54E0F2CF5011E1567A7D589E72FFBE618B1 * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_t76BFF54E0F2CF5011E1567A7D589E72FFBE618B1 ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_t76BFF54E0F2CF5011E1567A7D589E72FFBE618B1 * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1_Caster`1<System.Int64,System.Int32>
struct  Caster_1_t70C4789E193DDF1EE8FF1EAE7B23AA698374F2BC  : public RuntimeObject
{
public:

public:
};

struct Caster_1_t70C4789E193DDF1EE8FF1EAE7B23AA698374F2BC_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1_Caster`1::Instance
	Transformer_1_tDD4BC5BF267EC2F5EC1E9BA3AEC66A3C4562E3E1 * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_t70C4789E193DDF1EE8FF1EAE7B23AA698374F2BC_StaticFields, ___Instance_0)); }
	inline Transformer_1_tDD4BC5BF267EC2F5EC1E9BA3AEC66A3C4562E3E1 * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_tDD4BC5BF267EC2F5EC1E9BA3AEC66A3C4562E3E1 ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_tDD4BC5BF267EC2F5EC1E9BA3AEC66A3C4562E3E1 * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1_Caster`1<System.Int64,System.Int64>
struct  Caster_1_tDF3C56EF05C9C323E1699967C09C7B95572DB884  : public RuntimeObject
{
public:

public:
};

struct Caster_1_tDF3C56EF05C9C323E1699967C09C7B95572DB884_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1_Caster`1::Instance
	Transformer_1_t83D9EC4265AFBEA40FED539672672E87659FABFC * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_tDF3C56EF05C9C323E1699967C09C7B95572DB884_StaticFields, ___Instance_0)); }
	inline Transformer_1_t83D9EC4265AFBEA40FED539672672E87659FABFC * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_t83D9EC4265AFBEA40FED539672672E87659FABFC ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_t83D9EC4265AFBEA40FED539672672E87659FABFC * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1_Caster`1<System.Int64,System.IntPtr>
struct  Caster_1_tC1BEAAED563F601D1AB34FA885D4DC73B0593A01  : public RuntimeObject
{
public:

public:
};

struct Caster_1_tC1BEAAED563F601D1AB34FA885D4DC73B0593A01_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1_Caster`1::Instance
	Transformer_1_tF9DEED24B755F01B6D5F383025E5382EC04380A1 * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_tC1BEAAED563F601D1AB34FA885D4DC73B0593A01_StaticFields, ___Instance_0)); }
	inline Transformer_1_tF9DEED24B755F01B6D5F383025E5382EC04380A1 * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_tF9DEED24B755F01B6D5F383025E5382EC04380A1 ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_tF9DEED24B755F01B6D5F383025E5382EC04380A1 * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1_Caster`1<System.Int64,System.Object>
struct  Caster_1_t9827C62922CE67B63670F7E395C36604B3284B82  : public RuntimeObject
{
public:

public:
};

struct Caster_1_t9827C62922CE67B63670F7E395C36604B3284B82_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1_Caster`1::Instance
	Transformer_1_tE0DFCD89E6241E5DE4719BAD8464FF514BF41CD0 * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_t9827C62922CE67B63670F7E395C36604B3284B82_StaticFields, ___Instance_0)); }
	inline Transformer_1_tE0DFCD89E6241E5DE4719BAD8464FF514BF41CD0 * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_tE0DFCD89E6241E5DE4719BAD8464FF514BF41CD0 ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_tE0DFCD89E6241E5DE4719BAD8464FF514BF41CD0 * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1_Caster`1<System.Int64,System.SByte>
struct  Caster_1_tBE68CFB112A68FF8E1439A6D50611D57D2B78929  : public RuntimeObject
{
public:

public:
};

struct Caster_1_tBE68CFB112A68FF8E1439A6D50611D57D2B78929_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1_Caster`1::Instance
	Transformer_1_tF270241457E8F58BCBFE4A849CEBA0C960D8D171 * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_tBE68CFB112A68FF8E1439A6D50611D57D2B78929_StaticFields, ___Instance_0)); }
	inline Transformer_1_tF270241457E8F58BCBFE4A849CEBA0C960D8D171 * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_tF270241457E8F58BCBFE4A849CEBA0C960D8D171 ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_tF270241457E8F58BCBFE4A849CEBA0C960D8D171 * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1_Caster`1<System.Int64,System.Single>
struct  Caster_1_tA96AB66BC3B680A41161A539CA7A0D45E183A207  : public RuntimeObject
{
public:

public:
};

struct Caster_1_tA96AB66BC3B680A41161A539CA7A0D45E183A207_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1_Caster`1::Instance
	Transformer_1_t6303836C3ECC8993FF939539541E971A88D0043C * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_tA96AB66BC3B680A41161A539CA7A0D45E183A207_StaticFields, ___Instance_0)); }
	inline Transformer_1_t6303836C3ECC8993FF939539541E971A88D0043C * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_t6303836C3ECC8993FF939539541E971A88D0043C ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_t6303836C3ECC8993FF939539541E971A88D0043C * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1_Caster`1<System.Int64,System.TimeSpan>
struct  Caster_1_t12C78E087522A8854105EA56B1656FA396D7D4F4  : public RuntimeObject
{
public:

public:
};

struct Caster_1_t12C78E087522A8854105EA56B1656FA396D7D4F4_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1_Caster`1::Instance
	Transformer_1_t91E5C13BDFE80888281C2A892214239458BD8862 * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_t12C78E087522A8854105EA56B1656FA396D7D4F4_StaticFields, ___Instance_0)); }
	inline Transformer_1_t91E5C13BDFE80888281C2A892214239458BD8862 * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_t91E5C13BDFE80888281C2A892214239458BD8862 ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_t91E5C13BDFE80888281C2A892214239458BD8862 * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1_Caster`1<System.Int64,System.UInt16>
struct  Caster_1_tB27660B38359B950168ADEF98D7C792A423A211A  : public RuntimeObject
{
public:

public:
};

struct Caster_1_tB27660B38359B950168ADEF98D7C792A423A211A_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1_Caster`1::Instance
	Transformer_1_t5523D607097D1283F94D8980CF88A23585DA5383 * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_tB27660B38359B950168ADEF98D7C792A423A211A_StaticFields, ___Instance_0)); }
	inline Transformer_1_t5523D607097D1283F94D8980CF88A23585DA5383 * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_t5523D607097D1283F94D8980CF88A23585DA5383 ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_t5523D607097D1283F94D8980CF88A23585DA5383 * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1_Caster`1<System.Int64,System.UInt32>
struct  Caster_1_tD4099ACC173F871B13EFCBBAEF67B0998F1AF043  : public RuntimeObject
{
public:

public:
};

struct Caster_1_tD4099ACC173F871B13EFCBBAEF67B0998F1AF043_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1_Caster`1::Instance
	Transformer_1_t2084433FA6FC68D6B72E5E5F89F08F24C224F90E * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_tD4099ACC173F871B13EFCBBAEF67B0998F1AF043_StaticFields, ___Instance_0)); }
	inline Transformer_1_t2084433FA6FC68D6B72E5E5F89F08F24C224F90E * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_t2084433FA6FC68D6B72E5E5F89F08F24C224F90E ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_t2084433FA6FC68D6B72E5E5F89F08F24C224F90E * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1_Caster`1<System.Int64,System.UInt64>
struct  Caster_1_t1E7F2BFA620BFA6B4D131AF0754217C21DC3DC76  : public RuntimeObject
{
public:

public:
};

struct Caster_1_t1E7F2BFA620BFA6B4D131AF0754217C21DC3DC76_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1_Caster`1::Instance
	Transformer_1_t2BC22C910E6F570EFD4A102BDDA4364EE856DF48 * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_t1E7F2BFA620BFA6B4D131AF0754217C21DC3DC76_StaticFields, ___Instance_0)); }
	inline Transformer_1_t2BC22C910E6F570EFD4A102BDDA4364EE856DF48 * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_t2BC22C910E6F570EFD4A102BDDA4364EE856DF48 ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_t2BC22C910E6F570EFD4A102BDDA4364EE856DF48 * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1_Caster`1<System.Int64,System.UIntPtr>
struct  Caster_1_t8D66EB4609DD0809802358A5F2C34FF083CC9E95  : public RuntimeObject
{
public:

public:
};

struct Caster_1_t8D66EB4609DD0809802358A5F2C34FF083CC9E95_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1_Caster`1::Instance
	Transformer_1_t1CA2AE91638C38BA8D1DC27612CA13ED6A654E05 * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_t8D66EB4609DD0809802358A5F2C34FF083CC9E95_StaticFields, ___Instance_0)); }
	inline Transformer_1_t1CA2AE91638C38BA8D1DC27612CA13ED6A654E05 * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_t1CA2AE91638C38BA8D1DC27612CA13ED6A654E05 ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_t1CA2AE91638C38BA8D1DC27612CA13ED6A654E05 * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1_Caster`1<System.Object,System.Object>
struct  Caster_1_tC3972B33B78D374E68B197BFBA0F750AC728CE0B  : public RuntimeObject
{
public:

public:
};

struct Caster_1_tC3972B33B78D374E68B197BFBA0F750AC728CE0B_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1_Caster`1::Instance
	Transformer_1_t5A30C1F1369A1F88C4E1270DCDC0988926509061 * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_tC3972B33B78D374E68B197BFBA0F750AC728CE0B_StaticFields, ___Instance_0)); }
	inline Transformer_1_t5A30C1F1369A1F88C4E1270DCDC0988926509061 * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_t5A30C1F1369A1F88C4E1270DCDC0988926509061 ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_t5A30C1F1369A1F88C4E1270DCDC0988926509061 * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1_Caster`1<System.SByte,System.Boolean>
struct  Caster_1_t1BD4C60F02C5F8490B8F0C8D66C1E7AB72398982  : public RuntimeObject
{
public:

public:
};

struct Caster_1_t1BD4C60F02C5F8490B8F0C8D66C1E7AB72398982_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1_Caster`1::Instance
	Transformer_1_tD2FABFE8EEEB95BE98B3D75EDB8F87E1E19F7D6D * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_t1BD4C60F02C5F8490B8F0C8D66C1E7AB72398982_StaticFields, ___Instance_0)); }
	inline Transformer_1_tD2FABFE8EEEB95BE98B3D75EDB8F87E1E19F7D6D * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_tD2FABFE8EEEB95BE98B3D75EDB8F87E1E19F7D6D ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_tD2FABFE8EEEB95BE98B3D75EDB8F87E1E19F7D6D * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1_Caster`1<System.SByte,System.Byte>
struct  Caster_1_t30A6AB5C2962F37220090F428E0DC77388038379  : public RuntimeObject
{
public:

public:
};

struct Caster_1_t30A6AB5C2962F37220090F428E0DC77388038379_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1_Caster`1::Instance
	Transformer_1_t6C8811E6F600211E3864191A668925F5A52B6E15 * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_t30A6AB5C2962F37220090F428E0DC77388038379_StaticFields, ___Instance_0)); }
	inline Transformer_1_t6C8811E6F600211E3864191A668925F5A52B6E15 * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_t6C8811E6F600211E3864191A668925F5A52B6E15 ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_t6C8811E6F600211E3864191A668925F5A52B6E15 * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1_Caster`1<System.SByte,System.Char>
struct  Caster_1_t1244636E53CA3A25ECCDFA53A0A1579702035790  : public RuntimeObject
{
public:

public:
};

struct Caster_1_t1244636E53CA3A25ECCDFA53A0A1579702035790_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1_Caster`1::Instance
	Transformer_1_t04BED633DA409C38CB6054BFE3D5735ABD62F518 * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_t1244636E53CA3A25ECCDFA53A0A1579702035790_StaticFields, ___Instance_0)); }
	inline Transformer_1_t04BED633DA409C38CB6054BFE3D5735ABD62F518 * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_t04BED633DA409C38CB6054BFE3D5735ABD62F518 ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_t04BED633DA409C38CB6054BFE3D5735ABD62F518 * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1_Caster`1<System.SByte,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct  Caster_1_t2B74904278820C410C8B5A8D72DE27A24035727C  : public RuntimeObject
{
public:

public:
};

struct Caster_1_t2B74904278820C410C8B5A8D72DE27A24035727C_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1_Caster`1::Instance
	Transformer_1_tAB938303C0EB89617BAC00380BBC202940243F74 * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_t2B74904278820C410C8B5A8D72DE27A24035727C_StaticFields, ___Instance_0)); }
	inline Transformer_1_tAB938303C0EB89617BAC00380BBC202940243F74 * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_tAB938303C0EB89617BAC00380BBC202940243F74 ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_tAB938303C0EB89617BAC00380BBC202940243F74 * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1_Caster`1<System.SByte,System.DateTime>
struct  Caster_1_t1BF309AADA05A572B2F9CC2F7A68EF99D670AB98  : public RuntimeObject
{
public:

public:
};

struct Caster_1_t1BF309AADA05A572B2F9CC2F7A68EF99D670AB98_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1_Caster`1::Instance
	Transformer_1_t85017CA131468548211F084ACC574B9CAA055755 * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_t1BF309AADA05A572B2F9CC2F7A68EF99D670AB98_StaticFields, ___Instance_0)); }
	inline Transformer_1_t85017CA131468548211F084ACC574B9CAA055755 * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_t85017CA131468548211F084ACC574B9CAA055755 ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_t85017CA131468548211F084ACC574B9CAA055755 * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1_Caster`1<System.SByte,System.DateTimeOffset>
struct  Caster_1_t58169F4240E4111F7A32AE2FDD77268B70A27DA4  : public RuntimeObject
{
public:

public:
};

struct Caster_1_t58169F4240E4111F7A32AE2FDD77268B70A27DA4_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1_Caster`1::Instance
	Transformer_1_t20B9AF65FC98204645CE3A23EBDADED45A21E450 * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_t58169F4240E4111F7A32AE2FDD77268B70A27DA4_StaticFields, ___Instance_0)); }
	inline Transformer_1_t20B9AF65FC98204645CE3A23EBDADED45A21E450 * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_t20B9AF65FC98204645CE3A23EBDADED45A21E450 ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_t20B9AF65FC98204645CE3A23EBDADED45A21E450 * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1_Caster`1<System.SByte,System.Decimal>
struct  Caster_1_tB27BEE43CA1315350CE91684999408CB0D8B38CE  : public RuntimeObject
{
public:

public:
};

struct Caster_1_tB27BEE43CA1315350CE91684999408CB0D8B38CE_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1_Caster`1::Instance
	Transformer_1_t429ED8E730F5DD367D54C19D1BCF0B22889B5360 * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_tB27BEE43CA1315350CE91684999408CB0D8B38CE_StaticFields, ___Instance_0)); }
	inline Transformer_1_t429ED8E730F5DD367D54C19D1BCF0B22889B5360 * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_t429ED8E730F5DD367D54C19D1BCF0B22889B5360 ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_t429ED8E730F5DD367D54C19D1BCF0B22889B5360 * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1_Caster`1<System.SByte,System.Diagnostics.Tracing.EmptyStruct>
struct  Caster_1_t5DF12DEB83CDE47DE415E477930BFFE3C7175F19  : public RuntimeObject
{
public:

public:
};

struct Caster_1_t5DF12DEB83CDE47DE415E477930BFFE3C7175F19_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1_Caster`1::Instance
	Transformer_1_t1EF34F51050152DBCF5D7D381E05F6C9B3A8D746 * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_t5DF12DEB83CDE47DE415E477930BFFE3C7175F19_StaticFields, ___Instance_0)); }
	inline Transformer_1_t1EF34F51050152DBCF5D7D381E05F6C9B3A8D746 * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_t1EF34F51050152DBCF5D7D381E05F6C9B3A8D746 ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_t1EF34F51050152DBCF5D7D381E05F6C9B3A8D746 * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1_Caster`1<System.SByte,System.Double>
struct  Caster_1_t0E96099314BC1001361C090363363C27D456FF68  : public RuntimeObject
{
public:

public:
};

struct Caster_1_t0E96099314BC1001361C090363363C27D456FF68_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1_Caster`1::Instance
	Transformer_1_t3B93E16F965DE946BC07E0C76E2CCDAC56C43097 * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_t0E96099314BC1001361C090363363C27D456FF68_StaticFields, ___Instance_0)); }
	inline Transformer_1_t3B93E16F965DE946BC07E0C76E2CCDAC56C43097 * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_t3B93E16F965DE946BC07E0C76E2CCDAC56C43097 ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_t3B93E16F965DE946BC07E0C76E2CCDAC56C43097 * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1_Caster`1<System.SByte,System.Guid>
struct  Caster_1_t5F81299DC5B220B4CA376F3799381DD1B09439D4  : public RuntimeObject
{
public:

public:
};

struct Caster_1_t5F81299DC5B220B4CA376F3799381DD1B09439D4_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1_Caster`1::Instance
	Transformer_1_t9C2A1982D971B2C2ED29E132D19A12E8CAA2945F * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_t5F81299DC5B220B4CA376F3799381DD1B09439D4_StaticFields, ___Instance_0)); }
	inline Transformer_1_t9C2A1982D971B2C2ED29E132D19A12E8CAA2945F * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_t9C2A1982D971B2C2ED29E132D19A12E8CAA2945F ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_t9C2A1982D971B2C2ED29E132D19A12E8CAA2945F * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1_Caster`1<System.SByte,System.Int16>
struct  Caster_1_tE9CD352FE55AC176689697C28A1A977B0C0775A8  : public RuntimeObject
{
public:

public:
};

struct Caster_1_tE9CD352FE55AC176689697C28A1A977B0C0775A8_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1_Caster`1::Instance
	Transformer_1_tC3D8FE4B2D70F7C8B02BDC3B6F64504A479DDCDA * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_tE9CD352FE55AC176689697C28A1A977B0C0775A8_StaticFields, ___Instance_0)); }
	inline Transformer_1_tC3D8FE4B2D70F7C8B02BDC3B6F64504A479DDCDA * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_tC3D8FE4B2D70F7C8B02BDC3B6F64504A479DDCDA ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_tC3D8FE4B2D70F7C8B02BDC3B6F64504A479DDCDA * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1_Caster`1<System.SByte,System.Int32>
struct  Caster_1_t88FF0864B2C503EFAD5ED37705978F3B2582A1A5  : public RuntimeObject
{
public:

public:
};

struct Caster_1_t88FF0864B2C503EFAD5ED37705978F3B2582A1A5_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1_Caster`1::Instance
	Transformer_1_tE959281326CA0E71564D9CC8C4CA65476647DF80 * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_t88FF0864B2C503EFAD5ED37705978F3B2582A1A5_StaticFields, ___Instance_0)); }
	inline Transformer_1_tE959281326CA0E71564D9CC8C4CA65476647DF80 * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_tE959281326CA0E71564D9CC8C4CA65476647DF80 ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_tE959281326CA0E71564D9CC8C4CA65476647DF80 * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1_Caster`1<System.SByte,System.Int64>
struct  Caster_1_t163E755F3C31D895AD0BDE502B676681BDC4DB3B  : public RuntimeObject
{
public:

public:
};

struct Caster_1_t163E755F3C31D895AD0BDE502B676681BDC4DB3B_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1_Caster`1::Instance
	Transformer_1_t2C08914EC2A487CA1508E655D40922D31300FF44 * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_t163E755F3C31D895AD0BDE502B676681BDC4DB3B_StaticFields, ___Instance_0)); }
	inline Transformer_1_t2C08914EC2A487CA1508E655D40922D31300FF44 * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_t2C08914EC2A487CA1508E655D40922D31300FF44 ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_t2C08914EC2A487CA1508E655D40922D31300FF44 * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1_Caster`1<System.SByte,System.IntPtr>
struct  Caster_1_tF8115F4B0CE80B556961ACB2289616B0DEC331AB  : public RuntimeObject
{
public:

public:
};

struct Caster_1_tF8115F4B0CE80B556961ACB2289616B0DEC331AB_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1_Caster`1::Instance
	Transformer_1_t9096E537ABBD1D40C46D5A1BB2AE3FAB1384C802 * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_tF8115F4B0CE80B556961ACB2289616B0DEC331AB_StaticFields, ___Instance_0)); }
	inline Transformer_1_t9096E537ABBD1D40C46D5A1BB2AE3FAB1384C802 * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_t9096E537ABBD1D40C46D5A1BB2AE3FAB1384C802 ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_t9096E537ABBD1D40C46D5A1BB2AE3FAB1384C802 * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1_Caster`1<System.SByte,System.Object>
struct  Caster_1_tC4FA729FF9BC09C7B4EC9C2301EA897047768618  : public RuntimeObject
{
public:

public:
};

struct Caster_1_tC4FA729FF9BC09C7B4EC9C2301EA897047768618_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1_Caster`1::Instance
	Transformer_1_t3094845308EB0C4ECB81B9B9588FF604F1EFF383 * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_tC4FA729FF9BC09C7B4EC9C2301EA897047768618_StaticFields, ___Instance_0)); }
	inline Transformer_1_t3094845308EB0C4ECB81B9B9588FF604F1EFF383 * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_t3094845308EB0C4ECB81B9B9588FF604F1EFF383 ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_t3094845308EB0C4ECB81B9B9588FF604F1EFF383 * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1_Caster`1<System.SByte,System.SByte>
struct  Caster_1_t7647E71BE8B30B3842204E3EC510510866F46BD9  : public RuntimeObject
{
public:

public:
};

struct Caster_1_t7647E71BE8B30B3842204E3EC510510866F46BD9_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1_Caster`1::Instance
	Transformer_1_t07EAC2E730526DAEA7C7466509B2FC4E01EDAECF * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_t7647E71BE8B30B3842204E3EC510510866F46BD9_StaticFields, ___Instance_0)); }
	inline Transformer_1_t07EAC2E730526DAEA7C7466509B2FC4E01EDAECF * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_t07EAC2E730526DAEA7C7466509B2FC4E01EDAECF ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_t07EAC2E730526DAEA7C7466509B2FC4E01EDAECF * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1_Caster`1<System.SByte,System.Single>
struct  Caster_1_t33D96820C90C18AAB27CE45A2342ACADA8EF20E4  : public RuntimeObject
{
public:

public:
};

struct Caster_1_t33D96820C90C18AAB27CE45A2342ACADA8EF20E4_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1_Caster`1::Instance
	Transformer_1_t57EF7782BA47293FB8D84194159F9C6EC36E8E70 * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_t33D96820C90C18AAB27CE45A2342ACADA8EF20E4_StaticFields, ___Instance_0)); }
	inline Transformer_1_t57EF7782BA47293FB8D84194159F9C6EC36E8E70 * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_t57EF7782BA47293FB8D84194159F9C6EC36E8E70 ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_t57EF7782BA47293FB8D84194159F9C6EC36E8E70 * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1_Caster`1<System.SByte,System.TimeSpan>
struct  Caster_1_t17ACB9A58115DEA27D4C0D2744F74900E858E353  : public RuntimeObject
{
public:

public:
};

struct Caster_1_t17ACB9A58115DEA27D4C0D2744F74900E858E353_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1_Caster`1::Instance
	Transformer_1_t0692E271430E76C7702E6C06685AEA460588A65D * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_t17ACB9A58115DEA27D4C0D2744F74900E858E353_StaticFields, ___Instance_0)); }
	inline Transformer_1_t0692E271430E76C7702E6C06685AEA460588A65D * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_t0692E271430E76C7702E6C06685AEA460588A65D ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_t0692E271430E76C7702E6C06685AEA460588A65D * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1_Caster`1<System.SByte,System.UInt16>
struct  Caster_1_t870029184001271CD749C94DCA95C7A2C0D1A4FE  : public RuntimeObject
{
public:

public:
};

struct Caster_1_t870029184001271CD749C94DCA95C7A2C0D1A4FE_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1_Caster`1::Instance
	Transformer_1_t37842F590D779536C9F57CFE8A5F4C9054A7CD5D * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_t870029184001271CD749C94DCA95C7A2C0D1A4FE_StaticFields, ___Instance_0)); }
	inline Transformer_1_t37842F590D779536C9F57CFE8A5F4C9054A7CD5D * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_t37842F590D779536C9F57CFE8A5F4C9054A7CD5D ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_t37842F590D779536C9F57CFE8A5F4C9054A7CD5D * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1_Caster`1<System.SByte,System.UInt32>
struct  Caster_1_tA41091CA45F9A4B6EDB6AC286316274A05D80186  : public RuntimeObject
{
public:

public:
};

struct Caster_1_tA41091CA45F9A4B6EDB6AC286316274A05D80186_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1_Caster`1::Instance
	Transformer_1_t118F878BEA8CDEED4C8F998AE52CF291F41BC52E * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_tA41091CA45F9A4B6EDB6AC286316274A05D80186_StaticFields, ___Instance_0)); }
	inline Transformer_1_t118F878BEA8CDEED4C8F998AE52CF291F41BC52E * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_t118F878BEA8CDEED4C8F998AE52CF291F41BC52E ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_t118F878BEA8CDEED4C8F998AE52CF291F41BC52E * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1_Caster`1<System.SByte,System.UInt64>
struct  Caster_1_t60127F9AA9497FABC02BFD54AC24744A8071E56B  : public RuntimeObject
{
public:

public:
};

struct Caster_1_t60127F9AA9497FABC02BFD54AC24744A8071E56B_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1_Caster`1::Instance
	Transformer_1_t7CE5E2F2EE3F6B588EC93C03818D6AA88B4C2FA4 * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_t60127F9AA9497FABC02BFD54AC24744A8071E56B_StaticFields, ___Instance_0)); }
	inline Transformer_1_t7CE5E2F2EE3F6B588EC93C03818D6AA88B4C2FA4 * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_t7CE5E2F2EE3F6B588EC93C03818D6AA88B4C2FA4 ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_t7CE5E2F2EE3F6B588EC93C03818D6AA88B4C2FA4 * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1_Caster`1<System.SByte,System.UIntPtr>
struct  Caster_1_t740C3B7D2E14D9E73F3F0EFCF14F8BA60FB849A6  : public RuntimeObject
{
public:

public:
};

struct Caster_1_t740C3B7D2E14D9E73F3F0EFCF14F8BA60FB849A6_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1_Caster`1::Instance
	Transformer_1_t7820A348FDE892902737AB3353C8DC9AF3173136 * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_t740C3B7D2E14D9E73F3F0EFCF14F8BA60FB849A6_StaticFields, ___Instance_0)); }
	inline Transformer_1_t7820A348FDE892902737AB3353C8DC9AF3173136 * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_t7820A348FDE892902737AB3353C8DC9AF3173136 ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_t7820A348FDE892902737AB3353C8DC9AF3173136 * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1_Caster`1<System.UInt16,System.Boolean>
struct  Caster_1_t1C9883B28F2C3F274ADC13F46C49C02C54494BD6  : public RuntimeObject
{
public:

public:
};

struct Caster_1_t1C9883B28F2C3F274ADC13F46C49C02C54494BD6_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1_Caster`1::Instance
	Transformer_1_tE80196F4B7A5A2110FC0182212C83F459727C6BE * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_t1C9883B28F2C3F274ADC13F46C49C02C54494BD6_StaticFields, ___Instance_0)); }
	inline Transformer_1_tE80196F4B7A5A2110FC0182212C83F459727C6BE * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_tE80196F4B7A5A2110FC0182212C83F459727C6BE ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_tE80196F4B7A5A2110FC0182212C83F459727C6BE * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1_Caster`1<System.UInt16,System.Byte>
struct  Caster_1_t95C9CBFB005FB2C9D0C0F2A240E797403CBE2F87  : public RuntimeObject
{
public:

public:
};

struct Caster_1_t95C9CBFB005FB2C9D0C0F2A240E797403CBE2F87_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1_Caster`1::Instance
	Transformer_1_t061320CC3547E178B43212A1634E5BA1C3296FB4 * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_t95C9CBFB005FB2C9D0C0F2A240E797403CBE2F87_StaticFields, ___Instance_0)); }
	inline Transformer_1_t061320CC3547E178B43212A1634E5BA1C3296FB4 * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_t061320CC3547E178B43212A1634E5BA1C3296FB4 ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_t061320CC3547E178B43212A1634E5BA1C3296FB4 * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1_Caster`1<System.UInt16,System.Char>
struct  Caster_1_t9DA610447C49902B9FBFE6DEC227E850F4A80137  : public RuntimeObject
{
public:

public:
};

struct Caster_1_t9DA610447C49902B9FBFE6DEC227E850F4A80137_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1_Caster`1::Instance
	Transformer_1_t9332F82CDC7D05AC998F8BE0E7ECCD229EC1F111 * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_t9DA610447C49902B9FBFE6DEC227E850F4A80137_StaticFields, ___Instance_0)); }
	inline Transformer_1_t9332F82CDC7D05AC998F8BE0E7ECCD229EC1F111 * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_t9332F82CDC7D05AC998F8BE0E7ECCD229EC1F111 ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_t9332F82CDC7D05AC998F8BE0E7ECCD229EC1F111 * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1_Caster`1<System.UInt16,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct  Caster_1_tE598EB10B0A995EFB2D98C6255D19AEB04880A4D  : public RuntimeObject
{
public:

public:
};

struct Caster_1_tE598EB10B0A995EFB2D98C6255D19AEB04880A4D_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1_Caster`1::Instance
	Transformer_1_t121D121059312ABFEA00E7E0857D05CCC9415A45 * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_tE598EB10B0A995EFB2D98C6255D19AEB04880A4D_StaticFields, ___Instance_0)); }
	inline Transformer_1_t121D121059312ABFEA00E7E0857D05CCC9415A45 * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_t121D121059312ABFEA00E7E0857D05CCC9415A45 ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_t121D121059312ABFEA00E7E0857D05CCC9415A45 * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1_Caster`1<System.UInt16,System.DateTime>
struct  Caster_1_t9CD44B9D0BF57F470EA3652BB01215672BE364F6  : public RuntimeObject
{
public:

public:
};

struct Caster_1_t9CD44B9D0BF57F470EA3652BB01215672BE364F6_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1_Caster`1::Instance
	Transformer_1_t18E7F2A91B58B4CC9C9DB99BCA5CBB14EC89E947 * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_t9CD44B9D0BF57F470EA3652BB01215672BE364F6_StaticFields, ___Instance_0)); }
	inline Transformer_1_t18E7F2A91B58B4CC9C9DB99BCA5CBB14EC89E947 * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_t18E7F2A91B58B4CC9C9DB99BCA5CBB14EC89E947 ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_t18E7F2A91B58B4CC9C9DB99BCA5CBB14EC89E947 * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1_Caster`1<System.UInt16,System.DateTimeOffset>
struct  Caster_1_tB519A5C4AF8613C51607CB6DA06B4E509DE94CE1  : public RuntimeObject
{
public:

public:
};

struct Caster_1_tB519A5C4AF8613C51607CB6DA06B4E509DE94CE1_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1_Caster`1::Instance
	Transformer_1_tF16A2137C1450B0F436B28941D2EFDB38B768D77 * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_tB519A5C4AF8613C51607CB6DA06B4E509DE94CE1_StaticFields, ___Instance_0)); }
	inline Transformer_1_tF16A2137C1450B0F436B28941D2EFDB38B768D77 * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_tF16A2137C1450B0F436B28941D2EFDB38B768D77 ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_tF16A2137C1450B0F436B28941D2EFDB38B768D77 * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1_Caster`1<System.UInt16,System.Decimal>
struct  Caster_1_t97215292B31E6EDD9D0CCF730C574A219DB14FA6  : public RuntimeObject
{
public:

public:
};

struct Caster_1_t97215292B31E6EDD9D0CCF730C574A219DB14FA6_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1_Caster`1::Instance
	Transformer_1_tC9194191386E267034CCDBD796CBAE0F96002D63 * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_t97215292B31E6EDD9D0CCF730C574A219DB14FA6_StaticFields, ___Instance_0)); }
	inline Transformer_1_tC9194191386E267034CCDBD796CBAE0F96002D63 * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_tC9194191386E267034CCDBD796CBAE0F96002D63 ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_tC9194191386E267034CCDBD796CBAE0F96002D63 * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1_Caster`1<System.UInt16,System.Diagnostics.Tracing.EmptyStruct>
struct  Caster_1_t36421096E51C706002F451EE0EF4F2C050E65FDC  : public RuntimeObject
{
public:

public:
};

struct Caster_1_t36421096E51C706002F451EE0EF4F2C050E65FDC_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1_Caster`1::Instance
	Transformer_1_tEBC899D34A444538AF2C5EFBED4C84DB4BC45848 * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_t36421096E51C706002F451EE0EF4F2C050E65FDC_StaticFields, ___Instance_0)); }
	inline Transformer_1_tEBC899D34A444538AF2C5EFBED4C84DB4BC45848 * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_tEBC899D34A444538AF2C5EFBED4C84DB4BC45848 ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_tEBC899D34A444538AF2C5EFBED4C84DB4BC45848 * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1_Caster`1<System.UInt16,System.Double>
struct  Caster_1_t3758D8A416E0335940152F85A9EF16351B5E50B4  : public RuntimeObject
{
public:

public:
};

struct Caster_1_t3758D8A416E0335940152F85A9EF16351B5E50B4_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1_Caster`1::Instance
	Transformer_1_t77DD442701A959DAE27DA4559054353BDB343B34 * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_t3758D8A416E0335940152F85A9EF16351B5E50B4_StaticFields, ___Instance_0)); }
	inline Transformer_1_t77DD442701A959DAE27DA4559054353BDB343B34 * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_t77DD442701A959DAE27DA4559054353BDB343B34 ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_t77DD442701A959DAE27DA4559054353BDB343B34 * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1_Caster`1<System.UInt16,System.Guid>
struct  Caster_1_tE7DEB9C1C2CA14F5BAC58EDE3DC45FC7BC5E2D71  : public RuntimeObject
{
public:

public:
};

struct Caster_1_tE7DEB9C1C2CA14F5BAC58EDE3DC45FC7BC5E2D71_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1_Caster`1::Instance
	Transformer_1_t1E44C39C080C0C1BCAA3AA096BC46637DC78FFC8 * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_tE7DEB9C1C2CA14F5BAC58EDE3DC45FC7BC5E2D71_StaticFields, ___Instance_0)); }
	inline Transformer_1_t1E44C39C080C0C1BCAA3AA096BC46637DC78FFC8 * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_t1E44C39C080C0C1BCAA3AA096BC46637DC78FFC8 ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_t1E44C39C080C0C1BCAA3AA096BC46637DC78FFC8 * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1_Caster`1<System.UInt16,System.Int16>
struct  Caster_1_tC5BA8BEE276B2CE5B5971AED6A81D2209E331D5D  : public RuntimeObject
{
public:

public:
};

struct Caster_1_tC5BA8BEE276B2CE5B5971AED6A81D2209E331D5D_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1_Caster`1::Instance
	Transformer_1_t8DA922273DCF1348A863E22DAED50A28F2E7EC4A * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_tC5BA8BEE276B2CE5B5971AED6A81D2209E331D5D_StaticFields, ___Instance_0)); }
	inline Transformer_1_t8DA922273DCF1348A863E22DAED50A28F2E7EC4A * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_t8DA922273DCF1348A863E22DAED50A28F2E7EC4A ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_t8DA922273DCF1348A863E22DAED50A28F2E7EC4A * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1_Caster`1<System.UInt16,System.Int32>
struct  Caster_1_t2A00EDBD48775854B6F07521F9C38B3D985895DD  : public RuntimeObject
{
public:

public:
};

struct Caster_1_t2A00EDBD48775854B6F07521F9C38B3D985895DD_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1_Caster`1::Instance
	Transformer_1_tE2F5517F18DDC45C27EB0CF011655F7290022FB0 * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_t2A00EDBD48775854B6F07521F9C38B3D985895DD_StaticFields, ___Instance_0)); }
	inline Transformer_1_tE2F5517F18DDC45C27EB0CF011655F7290022FB0 * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_tE2F5517F18DDC45C27EB0CF011655F7290022FB0 ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_tE2F5517F18DDC45C27EB0CF011655F7290022FB0 * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1_Caster`1<System.UInt16,System.Int64>
struct  Caster_1_t001E88A8CE2BFC0E48CBD781528BDB1B5D626B23  : public RuntimeObject
{
public:

public:
};

struct Caster_1_t001E88A8CE2BFC0E48CBD781528BDB1B5D626B23_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1_Caster`1::Instance
	Transformer_1_t2468BF9AC5C45B9D777B0E34EC1949CE193D20F7 * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_t001E88A8CE2BFC0E48CBD781528BDB1B5D626B23_StaticFields, ___Instance_0)); }
	inline Transformer_1_t2468BF9AC5C45B9D777B0E34EC1949CE193D20F7 * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_t2468BF9AC5C45B9D777B0E34EC1949CE193D20F7 ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_t2468BF9AC5C45B9D777B0E34EC1949CE193D20F7 * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1_Caster`1<System.UInt16,System.IntPtr>
struct  Caster_1_tE61A67E1226C9AAEF271BA0F9697770921AE95AC  : public RuntimeObject
{
public:

public:
};

struct Caster_1_tE61A67E1226C9AAEF271BA0F9697770921AE95AC_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1_Caster`1::Instance
	Transformer_1_tCB7EE8D213E31FE3EAB291CBAEA6B0F015D13840 * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_tE61A67E1226C9AAEF271BA0F9697770921AE95AC_StaticFields, ___Instance_0)); }
	inline Transformer_1_tCB7EE8D213E31FE3EAB291CBAEA6B0F015D13840 * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_tCB7EE8D213E31FE3EAB291CBAEA6B0F015D13840 ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_tCB7EE8D213E31FE3EAB291CBAEA6B0F015D13840 * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1_Caster`1<System.UInt16,System.Object>
struct  Caster_1_t1DF332D98A7CFD921311E400AA7EB85F360716CF  : public RuntimeObject
{
public:

public:
};

struct Caster_1_t1DF332D98A7CFD921311E400AA7EB85F360716CF_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1_Caster`1::Instance
	Transformer_1_t0001CA8726D9CA184026588C57396CC776ACEF06 * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_t1DF332D98A7CFD921311E400AA7EB85F360716CF_StaticFields, ___Instance_0)); }
	inline Transformer_1_t0001CA8726D9CA184026588C57396CC776ACEF06 * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_t0001CA8726D9CA184026588C57396CC776ACEF06 ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_t0001CA8726D9CA184026588C57396CC776ACEF06 * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1_Caster`1<System.UInt16,System.SByte>
struct  Caster_1_tEB118780DCAADB459CFF6F3503D3155B1FBE042B  : public RuntimeObject
{
public:

public:
};

struct Caster_1_tEB118780DCAADB459CFF6F3503D3155B1FBE042B_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1_Caster`1::Instance
	Transformer_1_t56AC8DD64FA3E1A9651D456D3D911E023CF88DCD * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_tEB118780DCAADB459CFF6F3503D3155B1FBE042B_StaticFields, ___Instance_0)); }
	inline Transformer_1_t56AC8DD64FA3E1A9651D456D3D911E023CF88DCD * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_t56AC8DD64FA3E1A9651D456D3D911E023CF88DCD ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_t56AC8DD64FA3E1A9651D456D3D911E023CF88DCD * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1_Caster`1<System.UInt16,System.Single>
struct  Caster_1_t3F36BE5AE6C1F8A32498C9F48EFDCF9C97F77649  : public RuntimeObject
{
public:

public:
};

struct Caster_1_t3F36BE5AE6C1F8A32498C9F48EFDCF9C97F77649_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1_Caster`1::Instance
	Transformer_1_tE78CCD9D44957F7F042B573ED59E8EE04C13D047 * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_t3F36BE5AE6C1F8A32498C9F48EFDCF9C97F77649_StaticFields, ___Instance_0)); }
	inline Transformer_1_tE78CCD9D44957F7F042B573ED59E8EE04C13D047 * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_tE78CCD9D44957F7F042B573ED59E8EE04C13D047 ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_tE78CCD9D44957F7F042B573ED59E8EE04C13D047 * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1_Caster`1<System.UInt16,System.TimeSpan>
struct  Caster_1_tD718F5C5131976B010CAE236DB97BFF85D813E54  : public RuntimeObject
{
public:

public:
};

struct Caster_1_tD718F5C5131976B010CAE236DB97BFF85D813E54_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1_Caster`1::Instance
	Transformer_1_t3348AF6EA9D56F7672FDA766E48C0EC31D244732 * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_tD718F5C5131976B010CAE236DB97BFF85D813E54_StaticFields, ___Instance_0)); }
	inline Transformer_1_t3348AF6EA9D56F7672FDA766E48C0EC31D244732 * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_t3348AF6EA9D56F7672FDA766E48C0EC31D244732 ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_t3348AF6EA9D56F7672FDA766E48C0EC31D244732 * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1_Caster`1<System.UInt16,System.UInt16>
struct  Caster_1_tE98A18E634417A96EC0EB7E3F3AEEDDCDE5030DD  : public RuntimeObject
{
public:

public:
};

struct Caster_1_tE98A18E634417A96EC0EB7E3F3AEEDDCDE5030DD_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1_Caster`1::Instance
	Transformer_1_t1BE0C17B380E3D75E214DF3668E20BEF6DCA9A4A * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_tE98A18E634417A96EC0EB7E3F3AEEDDCDE5030DD_StaticFields, ___Instance_0)); }
	inline Transformer_1_t1BE0C17B380E3D75E214DF3668E20BEF6DCA9A4A * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_t1BE0C17B380E3D75E214DF3668E20BEF6DCA9A4A ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_t1BE0C17B380E3D75E214DF3668E20BEF6DCA9A4A * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1_Caster`1<System.UInt16,System.UInt32>
struct  Caster_1_tCF9EF4E40F2FC2B2EB7902E1934BE213E69EE065  : public RuntimeObject
{
public:

public:
};

struct Caster_1_tCF9EF4E40F2FC2B2EB7902E1934BE213E69EE065_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1_Caster`1::Instance
	Transformer_1_t90F32598CDB2668A5BBD1A101374312C05F60543 * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_tCF9EF4E40F2FC2B2EB7902E1934BE213E69EE065_StaticFields, ___Instance_0)); }
	inline Transformer_1_t90F32598CDB2668A5BBD1A101374312C05F60543 * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_t90F32598CDB2668A5BBD1A101374312C05F60543 ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_t90F32598CDB2668A5BBD1A101374312C05F60543 * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1_Caster`1<System.UInt16,System.UInt64>
struct  Caster_1_tDCA4B028D037B066692AE9595936AAD91890E1CF  : public RuntimeObject
{
public:

public:
};

struct Caster_1_tDCA4B028D037B066692AE9595936AAD91890E1CF_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1_Caster`1::Instance
	Transformer_1_t04C7EED1579F30358FBDCDB6143DBC088C63AFDE * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_tDCA4B028D037B066692AE9595936AAD91890E1CF_StaticFields, ___Instance_0)); }
	inline Transformer_1_t04C7EED1579F30358FBDCDB6143DBC088C63AFDE * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_t04C7EED1579F30358FBDCDB6143DBC088C63AFDE ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_t04C7EED1579F30358FBDCDB6143DBC088C63AFDE * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1_Caster`1<System.UInt16,System.UIntPtr>
struct  Caster_1_t3E7C36D31A48255DAD25B3B2AE6B917F8340B991  : public RuntimeObject
{
public:

public:
};

struct Caster_1_t3E7C36D31A48255DAD25B3B2AE6B917F8340B991_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1_Caster`1::Instance
	Transformer_1_t11D2CE81C8B59E67AB536F4C77727A85FD129449 * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_t3E7C36D31A48255DAD25B3B2AE6B917F8340B991_StaticFields, ___Instance_0)); }
	inline Transformer_1_t11D2CE81C8B59E67AB536F4C77727A85FD129449 * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_t11D2CE81C8B59E67AB536F4C77727A85FD129449 ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_t11D2CE81C8B59E67AB536F4C77727A85FD129449 * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1_Caster`1<System.UInt32,System.Boolean>
struct  Caster_1_tF2AFB02A87ADE0E7A8A250D34EAFA734BA067304  : public RuntimeObject
{
public:

public:
};

struct Caster_1_tF2AFB02A87ADE0E7A8A250D34EAFA734BA067304_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1_Caster`1::Instance
	Transformer_1_t60047D12F19EC963BBD5F0CEBE2F8036A20172F0 * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_tF2AFB02A87ADE0E7A8A250D34EAFA734BA067304_StaticFields, ___Instance_0)); }
	inline Transformer_1_t60047D12F19EC963BBD5F0CEBE2F8036A20172F0 * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_t60047D12F19EC963BBD5F0CEBE2F8036A20172F0 ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_t60047D12F19EC963BBD5F0CEBE2F8036A20172F0 * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1_Caster`1<System.UInt32,System.Byte>
struct  Caster_1_tCE480BD8AB8248F2B6480301D05F0F36C531CDB9  : public RuntimeObject
{
public:

public:
};

struct Caster_1_tCE480BD8AB8248F2B6480301D05F0F36C531CDB9_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1_Caster`1::Instance
	Transformer_1_t5DE73FA1B0F7652CC9FB816D61938EA68158297B * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_tCE480BD8AB8248F2B6480301D05F0F36C531CDB9_StaticFields, ___Instance_0)); }
	inline Transformer_1_t5DE73FA1B0F7652CC9FB816D61938EA68158297B * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_t5DE73FA1B0F7652CC9FB816D61938EA68158297B ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_t5DE73FA1B0F7652CC9FB816D61938EA68158297B * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1_Caster`1<System.UInt32,System.Char>
struct  Caster_1_tAF055C28617E7BBE97D0A4F6D3BB9DA6AE2FDE51  : public RuntimeObject
{
public:

public:
};

struct Caster_1_tAF055C28617E7BBE97D0A4F6D3BB9DA6AE2FDE51_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1_Caster`1::Instance
	Transformer_1_t3050C701F0AE1E95352D4339BFE606D2343F7F90 * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_tAF055C28617E7BBE97D0A4F6D3BB9DA6AE2FDE51_StaticFields, ___Instance_0)); }
	inline Transformer_1_t3050C701F0AE1E95352D4339BFE606D2343F7F90 * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_t3050C701F0AE1E95352D4339BFE606D2343F7F90 ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_t3050C701F0AE1E95352D4339BFE606D2343F7F90 * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1_Caster`1<System.UInt32,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct  Caster_1_t815F5BE908D188229045CE6394C20260EF7CD34A  : public RuntimeObject
{
public:

public:
};

struct Caster_1_t815F5BE908D188229045CE6394C20260EF7CD34A_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1_Caster`1::Instance
	Transformer_1_t130D77E1B8D207F951F6D90F2C4A8E3792897617 * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_t815F5BE908D188229045CE6394C20260EF7CD34A_StaticFields, ___Instance_0)); }
	inline Transformer_1_t130D77E1B8D207F951F6D90F2C4A8E3792897617 * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_t130D77E1B8D207F951F6D90F2C4A8E3792897617 ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_t130D77E1B8D207F951F6D90F2C4A8E3792897617 * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1_Caster`1<System.UInt32,System.DateTime>
struct  Caster_1_t901773DD618F4F8D0F11AA64220BDF5B5588A9CB  : public RuntimeObject
{
public:

public:
};

struct Caster_1_t901773DD618F4F8D0F11AA64220BDF5B5588A9CB_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1_Caster`1::Instance
	Transformer_1_t10ED8D0D8FCCF8A65A34FD9CB0BB769E97C65617 * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_t901773DD618F4F8D0F11AA64220BDF5B5588A9CB_StaticFields, ___Instance_0)); }
	inline Transformer_1_t10ED8D0D8FCCF8A65A34FD9CB0BB769E97C65617 * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_t10ED8D0D8FCCF8A65A34FD9CB0BB769E97C65617 ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_t10ED8D0D8FCCF8A65A34FD9CB0BB769E97C65617 * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1_Caster`1<System.UInt32,System.DateTimeOffset>
struct  Caster_1_t81822C420408C79A1D831535F2CF93DA5EA48B3A  : public RuntimeObject
{
public:

public:
};

struct Caster_1_t81822C420408C79A1D831535F2CF93DA5EA48B3A_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1_Caster`1::Instance
	Transformer_1_t769CC26F0F28BAA04C91A2DD4CA912A1C75B527C * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_t81822C420408C79A1D831535F2CF93DA5EA48B3A_StaticFields, ___Instance_0)); }
	inline Transformer_1_t769CC26F0F28BAA04C91A2DD4CA912A1C75B527C * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_t769CC26F0F28BAA04C91A2DD4CA912A1C75B527C ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_t769CC26F0F28BAA04C91A2DD4CA912A1C75B527C * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1_Caster`1<System.UInt32,System.Decimal>
struct  Caster_1_t40AD1A1AF479039B1D54E5F3380B6B0CF2B15644  : public RuntimeObject
{
public:

public:
};

struct Caster_1_t40AD1A1AF479039B1D54E5F3380B6B0CF2B15644_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1_Caster`1::Instance
	Transformer_1_tC127664D3E7D230D4A314537786A12688DFA7A3E * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_t40AD1A1AF479039B1D54E5F3380B6B0CF2B15644_StaticFields, ___Instance_0)); }
	inline Transformer_1_tC127664D3E7D230D4A314537786A12688DFA7A3E * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_tC127664D3E7D230D4A314537786A12688DFA7A3E ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_tC127664D3E7D230D4A314537786A12688DFA7A3E * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1_Caster`1<System.UInt32,System.Diagnostics.Tracing.EmptyStruct>
struct  Caster_1_tA382B961BB6DECA7E9912DE8BCE86A2760D3536C  : public RuntimeObject
{
public:

public:
};

struct Caster_1_tA382B961BB6DECA7E9912DE8BCE86A2760D3536C_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1_Caster`1::Instance
	Transformer_1_tF07E13438506E2B3D01E6482C5493016DBECA428 * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_tA382B961BB6DECA7E9912DE8BCE86A2760D3536C_StaticFields, ___Instance_0)); }
	inline Transformer_1_tF07E13438506E2B3D01E6482C5493016DBECA428 * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_tF07E13438506E2B3D01E6482C5493016DBECA428 ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_tF07E13438506E2B3D01E6482C5493016DBECA428 * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1_Caster`1<System.UInt32,System.Double>
struct  Caster_1_t6143C0151137A083CB0F6EFBCE486661FD0489FB  : public RuntimeObject
{
public:

public:
};

struct Caster_1_t6143C0151137A083CB0F6EFBCE486661FD0489FB_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1_Caster`1::Instance
	Transformer_1_t98913A0CAF0396077F92C767353DCECE1CAE9D37 * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_t6143C0151137A083CB0F6EFBCE486661FD0489FB_StaticFields, ___Instance_0)); }
	inline Transformer_1_t98913A0CAF0396077F92C767353DCECE1CAE9D37 * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_t98913A0CAF0396077F92C767353DCECE1CAE9D37 ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_t98913A0CAF0396077F92C767353DCECE1CAE9D37 * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1_Caster`1<System.UInt32,System.Guid>
struct  Caster_1_t05D7391E16AAD38161724DD6C261B74130C36705  : public RuntimeObject
{
public:

public:
};

struct Caster_1_t05D7391E16AAD38161724DD6C261B74130C36705_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1_Caster`1::Instance
	Transformer_1_t7065170F0C1062F0BFC8CE0818DF6CB978951894 * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_t05D7391E16AAD38161724DD6C261B74130C36705_StaticFields, ___Instance_0)); }
	inline Transformer_1_t7065170F0C1062F0BFC8CE0818DF6CB978951894 * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_t7065170F0C1062F0BFC8CE0818DF6CB978951894 ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_t7065170F0C1062F0BFC8CE0818DF6CB978951894 * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1_Caster`1<System.UInt32,System.Int16>
struct  Caster_1_t05E36EAA415EA6B5B1C08B9D4E494A0588524227  : public RuntimeObject
{
public:

public:
};

struct Caster_1_t05E36EAA415EA6B5B1C08B9D4E494A0588524227_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1_Caster`1::Instance
	Transformer_1_t286C753C28D2786E159E55BCD77AAC5FE99C8A6E * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_t05E36EAA415EA6B5B1C08B9D4E494A0588524227_StaticFields, ___Instance_0)); }
	inline Transformer_1_t286C753C28D2786E159E55BCD77AAC5FE99C8A6E * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_t286C753C28D2786E159E55BCD77AAC5FE99C8A6E ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_t286C753C28D2786E159E55BCD77AAC5FE99C8A6E * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1_Caster`1<System.UInt32,System.Int32>
struct  Caster_1_t519E78DB0E5DF907F1CB998EE1427A3E8E221BED  : public RuntimeObject
{
public:

public:
};

struct Caster_1_t519E78DB0E5DF907F1CB998EE1427A3E8E221BED_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1_Caster`1::Instance
	Transformer_1_t4BE8EE1016BCB2E59D59BB8EBAD050C01F69481F * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_t519E78DB0E5DF907F1CB998EE1427A3E8E221BED_StaticFields, ___Instance_0)); }
	inline Transformer_1_t4BE8EE1016BCB2E59D59BB8EBAD050C01F69481F * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_t4BE8EE1016BCB2E59D59BB8EBAD050C01F69481F ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_t4BE8EE1016BCB2E59D59BB8EBAD050C01F69481F * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1_Caster`1<System.UInt32,System.Int64>
struct  Caster_1_t4282DB10490A87367535C2292A0292F381AB2D8A  : public RuntimeObject
{
public:

public:
};

struct Caster_1_t4282DB10490A87367535C2292A0292F381AB2D8A_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1_Caster`1::Instance
	Transformer_1_t0265D6C648532D20930747AC00E60A57882836D4 * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_t4282DB10490A87367535C2292A0292F381AB2D8A_StaticFields, ___Instance_0)); }
	inline Transformer_1_t0265D6C648532D20930747AC00E60A57882836D4 * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_t0265D6C648532D20930747AC00E60A57882836D4 ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_t0265D6C648532D20930747AC00E60A57882836D4 * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1_Caster`1<System.UInt32,System.IntPtr>
struct  Caster_1_t69A273B2F262F2B7EF8D384649270F25004CDE21  : public RuntimeObject
{
public:

public:
};

struct Caster_1_t69A273B2F262F2B7EF8D384649270F25004CDE21_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1_Caster`1::Instance
	Transformer_1_t1008B5FEF2C9C85E523733A1465641C24C2EF895 * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_t69A273B2F262F2B7EF8D384649270F25004CDE21_StaticFields, ___Instance_0)); }
	inline Transformer_1_t1008B5FEF2C9C85E523733A1465641C24C2EF895 * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_t1008B5FEF2C9C85E523733A1465641C24C2EF895 ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_t1008B5FEF2C9C85E523733A1465641C24C2EF895 * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1_Caster`1<System.UInt32,System.Object>
struct  Caster_1_t137FB3B1278245F81E87955980453BD358BC9FDD  : public RuntimeObject
{
public:

public:
};

struct Caster_1_t137FB3B1278245F81E87955980453BD358BC9FDD_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1_Caster`1::Instance
	Transformer_1_t63A740E462CAF5DE201265ACF49D1F387549E5C2 * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_t137FB3B1278245F81E87955980453BD358BC9FDD_StaticFields, ___Instance_0)); }
	inline Transformer_1_t63A740E462CAF5DE201265ACF49D1F387549E5C2 * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_t63A740E462CAF5DE201265ACF49D1F387549E5C2 ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_t63A740E462CAF5DE201265ACF49D1F387549E5C2 * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1_Caster`1<System.UInt32,System.SByte>
struct  Caster_1_t2FFB438F208B3B129F9605FB1F10B32FCE533406  : public RuntimeObject
{
public:

public:
};

struct Caster_1_t2FFB438F208B3B129F9605FB1F10B32FCE533406_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1_Caster`1::Instance
	Transformer_1_tF3157E7DF7ABB616E4FBC816F8F899563EBAB35C * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_t2FFB438F208B3B129F9605FB1F10B32FCE533406_StaticFields, ___Instance_0)); }
	inline Transformer_1_tF3157E7DF7ABB616E4FBC816F8F899563EBAB35C * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_tF3157E7DF7ABB616E4FBC816F8F899563EBAB35C ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_tF3157E7DF7ABB616E4FBC816F8F899563EBAB35C * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1_Caster`1<System.UInt32,System.Single>
struct  Caster_1_t9A112A2C70E550894FAC0C3A124091DCCBDF8012  : public RuntimeObject
{
public:

public:
};

struct Caster_1_t9A112A2C70E550894FAC0C3A124091DCCBDF8012_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1_Caster`1::Instance
	Transformer_1_tCBB0F5293357FBCE6345652A671907F2D668E97B * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_t9A112A2C70E550894FAC0C3A124091DCCBDF8012_StaticFields, ___Instance_0)); }
	inline Transformer_1_tCBB0F5293357FBCE6345652A671907F2D668E97B * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_tCBB0F5293357FBCE6345652A671907F2D668E97B ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_tCBB0F5293357FBCE6345652A671907F2D668E97B * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1_Caster`1<System.UInt32,System.TimeSpan>
struct  Caster_1_t5D3645B8EC343703DBE9DE7EA90363CD546B667A  : public RuntimeObject
{
public:

public:
};

struct Caster_1_t5D3645B8EC343703DBE9DE7EA90363CD546B667A_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1_Caster`1::Instance
	Transformer_1_tC9FFC78A73E6932AA70D077126BE4CA3FE45A302 * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_t5D3645B8EC343703DBE9DE7EA90363CD546B667A_StaticFields, ___Instance_0)); }
	inline Transformer_1_tC9FFC78A73E6932AA70D077126BE4CA3FE45A302 * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_tC9FFC78A73E6932AA70D077126BE4CA3FE45A302 ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_tC9FFC78A73E6932AA70D077126BE4CA3FE45A302 * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1_Caster`1<System.UInt32,System.UInt16>
struct  Caster_1_t093C74E154CC3D388C2CB09F38F181A557EFFEBE  : public RuntimeObject
{
public:

public:
};

struct Caster_1_t093C74E154CC3D388C2CB09F38F181A557EFFEBE_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1_Caster`1::Instance
	Transformer_1_t1C80BF86214358F246CD19A956D8B220FCA25D7B * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_t093C74E154CC3D388C2CB09F38F181A557EFFEBE_StaticFields, ___Instance_0)); }
	inline Transformer_1_t1C80BF86214358F246CD19A956D8B220FCA25D7B * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_t1C80BF86214358F246CD19A956D8B220FCA25D7B ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_t1C80BF86214358F246CD19A956D8B220FCA25D7B * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1_Caster`1<System.UInt32,System.UInt32>
struct  Caster_1_t5511E837A8586227F074F7E28421C634A073E16A  : public RuntimeObject
{
public:

public:
};

struct Caster_1_t5511E837A8586227F074F7E28421C634A073E16A_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1_Caster`1::Instance
	Transformer_1_t814D676F5A4ACC9A116D07D1C0A35D5BABDF8CAE * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_t5511E837A8586227F074F7E28421C634A073E16A_StaticFields, ___Instance_0)); }
	inline Transformer_1_t814D676F5A4ACC9A116D07D1C0A35D5BABDF8CAE * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_t814D676F5A4ACC9A116D07D1C0A35D5BABDF8CAE ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_t814D676F5A4ACC9A116D07D1C0A35D5BABDF8CAE * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1_Caster`1<System.UInt32,System.UInt64>
struct  Caster_1_t232EC3F74CC0AC8B7BB52B78D3FF1DD8CB08C472  : public RuntimeObject
{
public:

public:
};

struct Caster_1_t232EC3F74CC0AC8B7BB52B78D3FF1DD8CB08C472_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1_Caster`1::Instance
	Transformer_1_t005021C08874BCC5C2A50167CE4E532B9CF4CD79 * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_t232EC3F74CC0AC8B7BB52B78D3FF1DD8CB08C472_StaticFields, ___Instance_0)); }
	inline Transformer_1_t005021C08874BCC5C2A50167CE4E532B9CF4CD79 * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_t005021C08874BCC5C2A50167CE4E532B9CF4CD79 ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_t005021C08874BCC5C2A50167CE4E532B9CF4CD79 * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1_Caster`1<System.UInt32,System.UIntPtr>
struct  Caster_1_tEDA4AF60F40734E22B03C10431C74F8444BD6EA6  : public RuntimeObject
{
public:

public:
};

struct Caster_1_tEDA4AF60F40734E22B03C10431C74F8444BD6EA6_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1_Caster`1::Instance
	Transformer_1_t30E16CDE25487279253BB11A42DBEE6A21368087 * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_tEDA4AF60F40734E22B03C10431C74F8444BD6EA6_StaticFields, ___Instance_0)); }
	inline Transformer_1_t30E16CDE25487279253BB11A42DBEE6A21368087 * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_t30E16CDE25487279253BB11A42DBEE6A21368087 ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_t30E16CDE25487279253BB11A42DBEE6A21368087 * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1_Caster`1<System.UInt64,System.Boolean>
struct  Caster_1_t9FE3224C68AEE6C4ABA9C3A09F120EDA52A78A85  : public RuntimeObject
{
public:

public:
};

struct Caster_1_t9FE3224C68AEE6C4ABA9C3A09F120EDA52A78A85_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1_Caster`1::Instance
	Transformer_1_t80B7BC576266310FBF99805713CB124FB1325AFD * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_t9FE3224C68AEE6C4ABA9C3A09F120EDA52A78A85_StaticFields, ___Instance_0)); }
	inline Transformer_1_t80B7BC576266310FBF99805713CB124FB1325AFD * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_t80B7BC576266310FBF99805713CB124FB1325AFD ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_t80B7BC576266310FBF99805713CB124FB1325AFD * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1_Caster`1<System.UInt64,System.Byte>
struct  Caster_1_tD07A01A4AB8A981E25B1815E0F56DBBA481FB488  : public RuntimeObject
{
public:

public:
};

struct Caster_1_tD07A01A4AB8A981E25B1815E0F56DBBA481FB488_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1_Caster`1::Instance
	Transformer_1_tB710AA1A4EF63E7A608E1F3552AD32FF1D7EC200 * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_tD07A01A4AB8A981E25B1815E0F56DBBA481FB488_StaticFields, ___Instance_0)); }
	inline Transformer_1_tB710AA1A4EF63E7A608E1F3552AD32FF1D7EC200 * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_tB710AA1A4EF63E7A608E1F3552AD32FF1D7EC200 ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_tB710AA1A4EF63E7A608E1F3552AD32FF1D7EC200 * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1_Caster`1<System.UInt64,System.Char>
struct  Caster_1_t23E1BEDEA465B2FE0C4BC88DF482A3A0621245E2  : public RuntimeObject
{
public:

public:
};

struct Caster_1_t23E1BEDEA465B2FE0C4BC88DF482A3A0621245E2_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1_Caster`1::Instance
	Transformer_1_t4C49EDB12597C819D2161020E90B0C9F2BFA6CB2 * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_t23E1BEDEA465B2FE0C4BC88DF482A3A0621245E2_StaticFields, ___Instance_0)); }
	inline Transformer_1_t4C49EDB12597C819D2161020E90B0C9F2BFA6CB2 * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_t4C49EDB12597C819D2161020E90B0C9F2BFA6CB2 ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_t4C49EDB12597C819D2161020E90B0C9F2BFA6CB2 * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1_Caster`1<System.UInt64,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct  Caster_1_tB9CE9C085D67ADB638BA02C0CA3D2578A8DBD1A1  : public RuntimeObject
{
public:

public:
};

struct Caster_1_tB9CE9C085D67ADB638BA02C0CA3D2578A8DBD1A1_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1_Caster`1::Instance
	Transformer_1_t1DD85867F626725FB9A574D7B656426FB6D860E7 * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_tB9CE9C085D67ADB638BA02C0CA3D2578A8DBD1A1_StaticFields, ___Instance_0)); }
	inline Transformer_1_t1DD85867F626725FB9A574D7B656426FB6D860E7 * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_t1DD85867F626725FB9A574D7B656426FB6D860E7 ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_t1DD85867F626725FB9A574D7B656426FB6D860E7 * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1_Caster`1<System.UInt64,System.DateTime>
struct  Caster_1_t03F1A22DDCFFB6CA1EE3157E94B9A415498F3E45  : public RuntimeObject
{
public:

public:
};

struct Caster_1_t03F1A22DDCFFB6CA1EE3157E94B9A415498F3E45_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1_Caster`1::Instance
	Transformer_1_t704F728FBE3D274B344E93D43F1EB70A681EABD0 * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_t03F1A22DDCFFB6CA1EE3157E94B9A415498F3E45_StaticFields, ___Instance_0)); }
	inline Transformer_1_t704F728FBE3D274B344E93D43F1EB70A681EABD0 * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_t704F728FBE3D274B344E93D43F1EB70A681EABD0 ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_t704F728FBE3D274B344E93D43F1EB70A681EABD0 * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1_Caster`1<System.UInt64,System.DateTimeOffset>
struct  Caster_1_tD466E195E4E33B18AC090BE8227230DD00254871  : public RuntimeObject
{
public:

public:
};

struct Caster_1_tD466E195E4E33B18AC090BE8227230DD00254871_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1_Caster`1::Instance
	Transformer_1_t99A6CF18BE9023163F159E1157E9EB2EADB175E5 * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_tD466E195E4E33B18AC090BE8227230DD00254871_StaticFields, ___Instance_0)); }
	inline Transformer_1_t99A6CF18BE9023163F159E1157E9EB2EADB175E5 * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_t99A6CF18BE9023163F159E1157E9EB2EADB175E5 ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_t99A6CF18BE9023163F159E1157E9EB2EADB175E5 * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1_Caster`1<System.UInt64,System.Decimal>
struct  Caster_1_t356F1486915070BEE950AE11D1BF52A9C2C0DE20  : public RuntimeObject
{
public:

public:
};

struct Caster_1_t356F1486915070BEE950AE11D1BF52A9C2C0DE20_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1_Caster`1::Instance
	Transformer_1_t2097FB14F7FB610418928F6C00B8B3C776B86D03 * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_t356F1486915070BEE950AE11D1BF52A9C2C0DE20_StaticFields, ___Instance_0)); }
	inline Transformer_1_t2097FB14F7FB610418928F6C00B8B3C776B86D03 * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_t2097FB14F7FB610418928F6C00B8B3C776B86D03 ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_t2097FB14F7FB610418928F6C00B8B3C776B86D03 * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1_Caster`1<System.UInt64,System.Diagnostics.Tracing.EmptyStruct>
struct  Caster_1_t42349D34EA9FAC76F234F2F981A14480957DCAE5  : public RuntimeObject
{
public:

public:
};

struct Caster_1_t42349D34EA9FAC76F234F2F981A14480957DCAE5_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1_Caster`1::Instance
	Transformer_1_t4B5213C886234DE9246BB2EED20A4270B0BF8241 * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_t42349D34EA9FAC76F234F2F981A14480957DCAE5_StaticFields, ___Instance_0)); }
	inline Transformer_1_t4B5213C886234DE9246BB2EED20A4270B0BF8241 * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_t4B5213C886234DE9246BB2EED20A4270B0BF8241 ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_t4B5213C886234DE9246BB2EED20A4270B0BF8241 * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1_Caster`1<System.UInt64,System.Double>
struct  Caster_1_t204C853C13D273E3449FC5E906E5E6B941CCD600  : public RuntimeObject
{
public:

public:
};

struct Caster_1_t204C853C13D273E3449FC5E906E5E6B941CCD600_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1_Caster`1::Instance
	Transformer_1_t668A4176A39C3B956441F6D0CCC1AED020F7D6AF * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_t204C853C13D273E3449FC5E906E5E6B941CCD600_StaticFields, ___Instance_0)); }
	inline Transformer_1_t668A4176A39C3B956441F6D0CCC1AED020F7D6AF * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_t668A4176A39C3B956441F6D0CCC1AED020F7D6AF ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_t668A4176A39C3B956441F6D0CCC1AED020F7D6AF * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1_Caster`1<System.UInt64,System.Guid>
struct  Caster_1_t868D5311D106D9FE55DBB4F56BFA1F80AB361666  : public RuntimeObject
{
public:

public:
};

struct Caster_1_t868D5311D106D9FE55DBB4F56BFA1F80AB361666_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1_Caster`1::Instance
	Transformer_1_t33F4656CC027550D29904EEB3703DEA5DB5A933E * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_t868D5311D106D9FE55DBB4F56BFA1F80AB361666_StaticFields, ___Instance_0)); }
	inline Transformer_1_t33F4656CC027550D29904EEB3703DEA5DB5A933E * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_t33F4656CC027550D29904EEB3703DEA5DB5A933E ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_t33F4656CC027550D29904EEB3703DEA5DB5A933E * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1_Caster`1<System.UInt64,System.Int16>
struct  Caster_1_tB91A82FA14A4A4E569EB93553EA899B6FBBA7E78  : public RuntimeObject
{
public:

public:
};

struct Caster_1_tB91A82FA14A4A4E569EB93553EA899B6FBBA7E78_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1_Caster`1::Instance
	Transformer_1_t984F8DDF73126BB7D0564B2C8DB5B43DADEB1B87 * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_tB91A82FA14A4A4E569EB93553EA899B6FBBA7E78_StaticFields, ___Instance_0)); }
	inline Transformer_1_t984F8DDF73126BB7D0564B2C8DB5B43DADEB1B87 * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_t984F8DDF73126BB7D0564B2C8DB5B43DADEB1B87 ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_t984F8DDF73126BB7D0564B2C8DB5B43DADEB1B87 * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1_Caster`1<System.UInt64,System.Int32>
struct  Caster_1_tE1DD30AB4029612CD56B09122178FD4DF29CEA5E  : public RuntimeObject
{
public:

public:
};

struct Caster_1_tE1DD30AB4029612CD56B09122178FD4DF29CEA5E_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1_Caster`1::Instance
	Transformer_1_t9E27086EA83291A9CB562EC6DF2DDCF1F811D348 * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_tE1DD30AB4029612CD56B09122178FD4DF29CEA5E_StaticFields, ___Instance_0)); }
	inline Transformer_1_t9E27086EA83291A9CB562EC6DF2DDCF1F811D348 * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_t9E27086EA83291A9CB562EC6DF2DDCF1F811D348 ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_t9E27086EA83291A9CB562EC6DF2DDCF1F811D348 * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1_Caster`1<System.UInt64,System.Int64>
struct  Caster_1_t168FC169D2FD7651A831F26A3AF8F79C89700F84  : public RuntimeObject
{
public:

public:
};

struct Caster_1_t168FC169D2FD7651A831F26A3AF8F79C89700F84_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1_Caster`1::Instance
	Transformer_1_tE5AF7FD8199D2F817240AC1D32C549AE12D4AAE9 * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_t168FC169D2FD7651A831F26A3AF8F79C89700F84_StaticFields, ___Instance_0)); }
	inline Transformer_1_tE5AF7FD8199D2F817240AC1D32C549AE12D4AAE9 * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_tE5AF7FD8199D2F817240AC1D32C549AE12D4AAE9 ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_tE5AF7FD8199D2F817240AC1D32C549AE12D4AAE9 * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1_Caster`1<System.UInt64,System.IntPtr>
struct  Caster_1_t40BE0AF08E046636C00A1A588EB58F2F3377E223  : public RuntimeObject
{
public:

public:
};

struct Caster_1_t40BE0AF08E046636C00A1A588EB58F2F3377E223_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1_Caster`1::Instance
	Transformer_1_t9509B600985704E02CF30F84A4CA3E70DFDC190C * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_t40BE0AF08E046636C00A1A588EB58F2F3377E223_StaticFields, ___Instance_0)); }
	inline Transformer_1_t9509B600985704E02CF30F84A4CA3E70DFDC190C * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_t9509B600985704E02CF30F84A4CA3E70DFDC190C ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_t9509B600985704E02CF30F84A4CA3E70DFDC190C * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1_Caster`1<System.UInt64,System.Object>
struct  Caster_1_t12DF6952392D0FED624EF47F6DE9D2FB1F8B046D  : public RuntimeObject
{
public:

public:
};

struct Caster_1_t12DF6952392D0FED624EF47F6DE9D2FB1F8B046D_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1_Caster`1::Instance
	Transformer_1_t65B23DA04E78FC4F4D12CDB469679D9D5C4ED9C4 * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_t12DF6952392D0FED624EF47F6DE9D2FB1F8B046D_StaticFields, ___Instance_0)); }
	inline Transformer_1_t65B23DA04E78FC4F4D12CDB469679D9D5C4ED9C4 * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_t65B23DA04E78FC4F4D12CDB469679D9D5C4ED9C4 ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_t65B23DA04E78FC4F4D12CDB469679D9D5C4ED9C4 * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1_Caster`1<System.UInt64,System.SByte>
struct  Caster_1_tF4338CF2303C845BF3E79CEBCBE82A0DE79DC6AD  : public RuntimeObject
{
public:

public:
};

struct Caster_1_tF4338CF2303C845BF3E79CEBCBE82A0DE79DC6AD_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1_Caster`1::Instance
	Transformer_1_tD9F86289E24471473065EC7A0AC7282EFFF25909 * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_tF4338CF2303C845BF3E79CEBCBE82A0DE79DC6AD_StaticFields, ___Instance_0)); }
	inline Transformer_1_tD9F86289E24471473065EC7A0AC7282EFFF25909 * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_tD9F86289E24471473065EC7A0AC7282EFFF25909 ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_tD9F86289E24471473065EC7A0AC7282EFFF25909 * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1_Caster`1<System.UInt64,System.Single>
struct  Caster_1_tF67DB938E6F11BBA2F382812E0A292FC1A5C2C0E  : public RuntimeObject
{
public:

public:
};

struct Caster_1_tF67DB938E6F11BBA2F382812E0A292FC1A5C2C0E_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1_Caster`1::Instance
	Transformer_1_tD47677532E0EB9F83E58642BAF11E614584BE1E4 * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_tF67DB938E6F11BBA2F382812E0A292FC1A5C2C0E_StaticFields, ___Instance_0)); }
	inline Transformer_1_tD47677532E0EB9F83E58642BAF11E614584BE1E4 * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_tD47677532E0EB9F83E58642BAF11E614584BE1E4 ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_tD47677532E0EB9F83E58642BAF11E614584BE1E4 * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1_Caster`1<System.UInt64,System.TimeSpan>
struct  Caster_1_t9A297416E25E59EF55DA67381A6AACA321D6402C  : public RuntimeObject
{
public:

public:
};

struct Caster_1_t9A297416E25E59EF55DA67381A6AACA321D6402C_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1_Caster`1::Instance
	Transformer_1_tFE1A34D9527A7310C69F3A1F2171ADE7234E1D64 * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_t9A297416E25E59EF55DA67381A6AACA321D6402C_StaticFields, ___Instance_0)); }
	inline Transformer_1_tFE1A34D9527A7310C69F3A1F2171ADE7234E1D64 * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_tFE1A34D9527A7310C69F3A1F2171ADE7234E1D64 ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_tFE1A34D9527A7310C69F3A1F2171ADE7234E1D64 * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1_Caster`1<System.UInt64,System.UInt16>
struct  Caster_1_t0AB03EBEEE4F0D9B08B36FE7BD6A6159AFEEDF12  : public RuntimeObject
{
public:

public:
};

struct Caster_1_t0AB03EBEEE4F0D9B08B36FE7BD6A6159AFEEDF12_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1_Caster`1::Instance
	Transformer_1_tB25EE30C228D308ED1E3D17E8A08E8FF7F6A0D77 * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_t0AB03EBEEE4F0D9B08B36FE7BD6A6159AFEEDF12_StaticFields, ___Instance_0)); }
	inline Transformer_1_tB25EE30C228D308ED1E3D17E8A08E8FF7F6A0D77 * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_tB25EE30C228D308ED1E3D17E8A08E8FF7F6A0D77 ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_tB25EE30C228D308ED1E3D17E8A08E8FF7F6A0D77 * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1_Caster`1<System.UInt64,System.UInt32>
struct  Caster_1_t06142C64346ABC2D451ADF4CB9E980C5CA27CD88  : public RuntimeObject
{
public:

public:
};

struct Caster_1_t06142C64346ABC2D451ADF4CB9E980C5CA27CD88_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1_Caster`1::Instance
	Transformer_1_t39A024DD4A4E9FB07B8999CACF5FA5483C6572BF * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_t06142C64346ABC2D451ADF4CB9E980C5CA27CD88_StaticFields, ___Instance_0)); }
	inline Transformer_1_t39A024DD4A4E9FB07B8999CACF5FA5483C6572BF * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_t39A024DD4A4E9FB07B8999CACF5FA5483C6572BF ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_t39A024DD4A4E9FB07B8999CACF5FA5483C6572BF * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1_Caster`1<System.UInt64,System.UInt64>
struct  Caster_1_t920F9B7FFCFDFB9B9024484E88617329683105F2  : public RuntimeObject
{
public:

public:
};

struct Caster_1_t920F9B7FFCFDFB9B9024484E88617329683105F2_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1_Caster`1::Instance
	Transformer_1_t236D9CA15237017ADE5E5DF9D4F03CC889C8C551 * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_t920F9B7FFCFDFB9B9024484E88617329683105F2_StaticFields, ___Instance_0)); }
	inline Transformer_1_t236D9CA15237017ADE5E5DF9D4F03CC889C8C551 * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_t236D9CA15237017ADE5E5DF9D4F03CC889C8C551 ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_t236D9CA15237017ADE5E5DF9D4F03CC889C8C551 * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1_Caster`1<System.UInt64,System.UIntPtr>
struct  Caster_1_t59015BBD0A7090C4DD0FEB6C85876BA881B2E1A3  : public RuntimeObject
{
public:

public:
};

struct Caster_1_t59015BBD0A7090C4DD0FEB6C85876BA881B2E1A3_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1_Caster`1::Instance
	Transformer_1_t191E38853FA538EEEDB722F48BA28E2796E116E1 * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_t59015BBD0A7090C4DD0FEB6C85876BA881B2E1A3_StaticFields, ___Instance_0)); }
	inline Transformer_1_t191E38853FA538EEEDB722F48BA28E2796E116E1 * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_t191E38853FA538EEEDB722F48BA28E2796E116E1 ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_t191E38853FA538EEEDB722F48BA28E2796E116E1 * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1<System.Byte>
struct  EnumHelper_1_t20AF5068487E525E3E8193BD8075E5581B0827B5  : public RuntimeObject
{
public:

public:
};

struct EnumHelper_1_t20AF5068487E525E3E8193BD8075E5581B0827B5_StaticFields
{
public:
	// System.Reflection.MethodInfo System.Diagnostics.Tracing.EnumHelper`1::IdentityInfo
	MethodInfo_t * ___IdentityInfo_0;

public:
	inline static int32_t get_offset_of_IdentityInfo_0() { return static_cast<int32_t>(offsetof(EnumHelper_1_t20AF5068487E525E3E8193BD8075E5581B0827B5_StaticFields, ___IdentityInfo_0)); }
	inline MethodInfo_t * get_IdentityInfo_0() const { return ___IdentityInfo_0; }
	inline MethodInfo_t ** get_address_of_IdentityInfo_0() { return &___IdentityInfo_0; }
	inline void set_IdentityInfo_0(MethodInfo_t * value)
	{
		___IdentityInfo_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___IdentityInfo_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1<System.Int16>
struct  EnumHelper_1_t6BD71958DB2C269FECC9ECC395A69D160418277D  : public RuntimeObject
{
public:

public:
};

struct EnumHelper_1_t6BD71958DB2C269FECC9ECC395A69D160418277D_StaticFields
{
public:
	// System.Reflection.MethodInfo System.Diagnostics.Tracing.EnumHelper`1::IdentityInfo
	MethodInfo_t * ___IdentityInfo_0;

public:
	inline static int32_t get_offset_of_IdentityInfo_0() { return static_cast<int32_t>(offsetof(EnumHelper_1_t6BD71958DB2C269FECC9ECC395A69D160418277D_StaticFields, ___IdentityInfo_0)); }
	inline MethodInfo_t * get_IdentityInfo_0() const { return ___IdentityInfo_0; }
	inline MethodInfo_t ** get_address_of_IdentityInfo_0() { return &___IdentityInfo_0; }
	inline void set_IdentityInfo_0(MethodInfo_t * value)
	{
		___IdentityInfo_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___IdentityInfo_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1<System.Int32>
struct  EnumHelper_1_t93237184A227ABFC32C9556D849B44C8CC074D48  : public RuntimeObject
{
public:

public:
};

struct EnumHelper_1_t93237184A227ABFC32C9556D849B44C8CC074D48_StaticFields
{
public:
	// System.Reflection.MethodInfo System.Diagnostics.Tracing.EnumHelper`1::IdentityInfo
	MethodInfo_t * ___IdentityInfo_0;

public:
	inline static int32_t get_offset_of_IdentityInfo_0() { return static_cast<int32_t>(offsetof(EnumHelper_1_t93237184A227ABFC32C9556D849B44C8CC074D48_StaticFields, ___IdentityInfo_0)); }
	inline MethodInfo_t * get_IdentityInfo_0() const { return ___IdentityInfo_0; }
	inline MethodInfo_t ** get_address_of_IdentityInfo_0() { return &___IdentityInfo_0; }
	inline void set_IdentityInfo_0(MethodInfo_t * value)
	{
		___IdentityInfo_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___IdentityInfo_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1<System.Int64>
struct  EnumHelper_1_t0BA1977F909FE948AAD5243D1B7C86D1D12A2C81  : public RuntimeObject
{
public:

public:
};

struct EnumHelper_1_t0BA1977F909FE948AAD5243D1B7C86D1D12A2C81_StaticFields
{
public:
	// System.Reflection.MethodInfo System.Diagnostics.Tracing.EnumHelper`1::IdentityInfo
	MethodInfo_t * ___IdentityInfo_0;

public:
	inline static int32_t get_offset_of_IdentityInfo_0() { return static_cast<int32_t>(offsetof(EnumHelper_1_t0BA1977F909FE948AAD5243D1B7C86D1D12A2C81_StaticFields, ___IdentityInfo_0)); }
	inline MethodInfo_t * get_IdentityInfo_0() const { return ___IdentityInfo_0; }
	inline MethodInfo_t ** get_address_of_IdentityInfo_0() { return &___IdentityInfo_0; }
	inline void set_IdentityInfo_0(MethodInfo_t * value)
	{
		___IdentityInfo_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___IdentityInfo_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1<System.Object>
struct  EnumHelper_1_t9A5A2A5D5D0ABD1D770B359F6C07DD36CC834558  : public RuntimeObject
{
public:

public:
};

struct EnumHelper_1_t9A5A2A5D5D0ABD1D770B359F6C07DD36CC834558_StaticFields
{
public:
	// System.Reflection.MethodInfo System.Diagnostics.Tracing.EnumHelper`1::IdentityInfo
	MethodInfo_t * ___IdentityInfo_0;

public:
	inline static int32_t get_offset_of_IdentityInfo_0() { return static_cast<int32_t>(offsetof(EnumHelper_1_t9A5A2A5D5D0ABD1D770B359F6C07DD36CC834558_StaticFields, ___IdentityInfo_0)); }
	inline MethodInfo_t * get_IdentityInfo_0() const { return ___IdentityInfo_0; }
	inline MethodInfo_t ** get_address_of_IdentityInfo_0() { return &___IdentityInfo_0; }
	inline void set_IdentityInfo_0(MethodInfo_t * value)
	{
		___IdentityInfo_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___IdentityInfo_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1<System.SByte>
struct  EnumHelper_1_t1A18AB4B10A79E8CE2267B3FAD22C9B957BBCA3E  : public RuntimeObject
{
public:

public:
};

struct EnumHelper_1_t1A18AB4B10A79E8CE2267B3FAD22C9B957BBCA3E_StaticFields
{
public:
	// System.Reflection.MethodInfo System.Diagnostics.Tracing.EnumHelper`1::IdentityInfo
	MethodInfo_t * ___IdentityInfo_0;

public:
	inline static int32_t get_offset_of_IdentityInfo_0() { return static_cast<int32_t>(offsetof(EnumHelper_1_t1A18AB4B10A79E8CE2267B3FAD22C9B957BBCA3E_StaticFields, ___IdentityInfo_0)); }
	inline MethodInfo_t * get_IdentityInfo_0() const { return ___IdentityInfo_0; }
	inline MethodInfo_t ** get_address_of_IdentityInfo_0() { return &___IdentityInfo_0; }
	inline void set_IdentityInfo_0(MethodInfo_t * value)
	{
		___IdentityInfo_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___IdentityInfo_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1<System.UInt16>
struct  EnumHelper_1_t2D08E12E0A6AD73687A24BCA4D645C9F49D8D946  : public RuntimeObject
{
public:

public:
};

struct EnumHelper_1_t2D08E12E0A6AD73687A24BCA4D645C9F49D8D946_StaticFields
{
public:
	// System.Reflection.MethodInfo System.Diagnostics.Tracing.EnumHelper`1::IdentityInfo
	MethodInfo_t * ___IdentityInfo_0;

public:
	inline static int32_t get_offset_of_IdentityInfo_0() { return static_cast<int32_t>(offsetof(EnumHelper_1_t2D08E12E0A6AD73687A24BCA4D645C9F49D8D946_StaticFields, ___IdentityInfo_0)); }
	inline MethodInfo_t * get_IdentityInfo_0() const { return ___IdentityInfo_0; }
	inline MethodInfo_t ** get_address_of_IdentityInfo_0() { return &___IdentityInfo_0; }
	inline void set_IdentityInfo_0(MethodInfo_t * value)
	{
		___IdentityInfo_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___IdentityInfo_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1<System.UInt32>
struct  EnumHelper_1_tC82FAAF78504152B465669C9102B86D7DCE21244  : public RuntimeObject
{
public:

public:
};

struct EnumHelper_1_tC82FAAF78504152B465669C9102B86D7DCE21244_StaticFields
{
public:
	// System.Reflection.MethodInfo System.Diagnostics.Tracing.EnumHelper`1::IdentityInfo
	MethodInfo_t * ___IdentityInfo_0;

public:
	inline static int32_t get_offset_of_IdentityInfo_0() { return static_cast<int32_t>(offsetof(EnumHelper_1_tC82FAAF78504152B465669C9102B86D7DCE21244_StaticFields, ___IdentityInfo_0)); }
	inline MethodInfo_t * get_IdentityInfo_0() const { return ___IdentityInfo_0; }
	inline MethodInfo_t ** get_address_of_IdentityInfo_0() { return &___IdentityInfo_0; }
	inline void set_IdentityInfo_0(MethodInfo_t * value)
	{
		___IdentityInfo_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___IdentityInfo_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1<System.UInt64>
struct  EnumHelper_1_t710CB15BC03192055332903E689AAFD52F3E8852  : public RuntimeObject
{
public:

public:
};

struct EnumHelper_1_t710CB15BC03192055332903E689AAFD52F3E8852_StaticFields
{
public:
	// System.Reflection.MethodInfo System.Diagnostics.Tracing.EnumHelper`1::IdentityInfo
	MethodInfo_t * ___IdentityInfo_0;

public:
	inline static int32_t get_offset_of_IdentityInfo_0() { return static_cast<int32_t>(offsetof(EnumHelper_1_t710CB15BC03192055332903E689AAFD52F3E8852_StaticFields, ___IdentityInfo_0)); }
	inline MethodInfo_t * get_IdentityInfo_0() const { return ___IdentityInfo_0; }
	inline MethodInfo_t ** get_address_of_IdentityInfo_0() { return &___IdentityInfo_0; }
	inline void set_IdentityInfo_0(MethodInfo_t * value)
	{
		___IdentityInfo_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___IdentityInfo_0), (void*)value);
	}
};


// System.Linq.Enumerable_Iterator`1<System.Int32>
struct  Iterator_1_tCFFC952B03DBE4E956DE317DB9704D936AEA2379  : public RuntimeObject
{
public:
	// System.Int32 System.Linq.Enumerable_Iterator`1::threadId
	int32_t ___threadId_0;
	// System.Int32 System.Linq.Enumerable_Iterator`1::state
	int32_t ___state_1;
	// TSource System.Linq.Enumerable_Iterator`1::current
	int32_t ___current_2;

public:
	inline static int32_t get_offset_of_threadId_0() { return static_cast<int32_t>(offsetof(Iterator_1_tCFFC952B03DBE4E956DE317DB9704D936AEA2379, ___threadId_0)); }
	inline int32_t get_threadId_0() const { return ___threadId_0; }
	inline int32_t* get_address_of_threadId_0() { return &___threadId_0; }
	inline void set_threadId_0(int32_t value)
	{
		___threadId_0 = value;
	}

	inline static int32_t get_offset_of_state_1() { return static_cast<int32_t>(offsetof(Iterator_1_tCFFC952B03DBE4E956DE317DB9704D936AEA2379, ___state_1)); }
	inline int32_t get_state_1() const { return ___state_1; }
	inline int32_t* get_address_of_state_1() { return &___state_1; }
	inline void set_state_1(int32_t value)
	{
		___state_1 = value;
	}

	inline static int32_t get_offset_of_current_2() { return static_cast<int32_t>(offsetof(Iterator_1_tCFFC952B03DBE4E956DE317DB9704D936AEA2379, ___current_2)); }
	inline int32_t get_current_2() const { return ___current_2; }
	inline int32_t* get_address_of_current_2() { return &___current_2; }
	inline void set_current_2(int32_t value)
	{
		___current_2 = value;
	}
};


// System.Linq.Enumerable_Iterator`1<System.Object>
struct  Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279  : public RuntimeObject
{
public:
	// System.Int32 System.Linq.Enumerable_Iterator`1::threadId
	int32_t ___threadId_0;
	// System.Int32 System.Linq.Enumerable_Iterator`1::state
	int32_t ___state_1;
	// TSource System.Linq.Enumerable_Iterator`1::current
	RuntimeObject * ___current_2;

public:
	inline static int32_t get_offset_of_threadId_0() { return static_cast<int32_t>(offsetof(Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279, ___threadId_0)); }
	inline int32_t get_threadId_0() const { return ___threadId_0; }
	inline int32_t* get_address_of_threadId_0() { return &___threadId_0; }
	inline void set_threadId_0(int32_t value)
	{
		___threadId_0 = value;
	}

	inline static int32_t get_offset_of_state_1() { return static_cast<int32_t>(offsetof(Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279, ___state_1)); }
	inline int32_t get_state_1() const { return ___state_1; }
	inline int32_t* get_address_of_state_1() { return &___state_1; }
	inline void set_state_1(int32_t value)
	{
		___state_1 = value;
	}

	inline static int32_t get_offset_of_current_2() { return static_cast<int32_t>(offsetof(Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279, ___current_2)); }
	inline RuntimeObject * get_current_2() const { return ___current_2; }
	inline RuntimeObject ** get_address_of_current_2() { return &___current_2; }
	inline void set_current_2(RuntimeObject * value)
	{
		___current_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___current_2), (void*)value);
	}
};


// System.Linq.OrderedEnumerable`1<System.Object>
struct  OrderedEnumerable_1_t4ED7F4DE53F413B48E5FCFAFE1EFE1B04A7B5F6F  : public RuntimeObject
{
public:
	// System.Collections.Generic.IEnumerable`1<TElement> System.Linq.OrderedEnumerable`1::source
	RuntimeObject* ___source_0;

public:
	inline static int32_t get_offset_of_source_0() { return static_cast<int32_t>(offsetof(OrderedEnumerable_1_t4ED7F4DE53F413B48E5FCFAFE1EFE1B04A7B5F6F, ___source_0)); }
	inline RuntimeObject* get_source_0() const { return ___source_0; }
	inline RuntimeObject** get_address_of_source_0() { return &___source_0; }
	inline void set_source_0(RuntimeObject* value)
	{
		___source_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___source_0), (void*)value);
	}
};


// System.Reflection.MemberInfo
struct  MemberInfo_t  : public RuntimeObject
{
public:

public:
};


// System.Runtime.CompilerServices.AsyncMethodBuilderCore_MoveNextRunner
struct  MoveNextRunner_tFAEA0BEDD353E2E34E8E287C67B1F5572FD30C2D  : public RuntimeObject
{
public:
	// System.Threading.ExecutionContext System.Runtime.CompilerServices.AsyncMethodBuilderCore_MoveNextRunner::m_context
	ExecutionContext_t16AC73BB21FEEEAD34A017877AC18DD8BB836414 * ___m_context_0;
	// System.Runtime.CompilerServices.IAsyncStateMachine System.Runtime.CompilerServices.AsyncMethodBuilderCore_MoveNextRunner::m_stateMachine
	RuntimeObject* ___m_stateMachine_1;

public:
	inline static int32_t get_offset_of_m_context_0() { return static_cast<int32_t>(offsetof(MoveNextRunner_tFAEA0BEDD353E2E34E8E287C67B1F5572FD30C2D, ___m_context_0)); }
	inline ExecutionContext_t16AC73BB21FEEEAD34A017877AC18DD8BB836414 * get_m_context_0() const { return ___m_context_0; }
	inline ExecutionContext_t16AC73BB21FEEEAD34A017877AC18DD8BB836414 ** get_address_of_m_context_0() { return &___m_context_0; }
	inline void set_m_context_0(ExecutionContext_t16AC73BB21FEEEAD34A017877AC18DD8BB836414 * value)
	{
		___m_context_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_context_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_stateMachine_1() { return static_cast<int32_t>(offsetof(MoveNextRunner_tFAEA0BEDD353E2E34E8E287C67B1F5572FD30C2D, ___m_stateMachine_1)); }
	inline RuntimeObject* get_m_stateMachine_1() const { return ___m_stateMachine_1; }
	inline RuntimeObject** get_address_of_m_stateMachine_1() { return &___m_stateMachine_1; }
	inline void set_m_stateMachine_1(RuntimeObject* value)
	{
		___m_stateMachine_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_stateMachine_1), (void*)value);
	}
};

struct MoveNextRunner_tFAEA0BEDD353E2E34E8E287C67B1F5572FD30C2D_StaticFields
{
public:
	// System.Threading.ContextCallback System.Runtime.CompilerServices.AsyncMethodBuilderCore_MoveNextRunner::s_invokeMoveNext
	ContextCallback_t93707E0430F4FF3E15E1FB5A4844BE89C657AE8B * ___s_invokeMoveNext_2;

public:
	inline static int32_t get_offset_of_s_invokeMoveNext_2() { return static_cast<int32_t>(offsetof(MoveNextRunner_tFAEA0BEDD353E2E34E8E287C67B1F5572FD30C2D_StaticFields, ___s_invokeMoveNext_2)); }
	inline ContextCallback_t93707E0430F4FF3E15E1FB5A4844BE89C657AE8B * get_s_invokeMoveNext_2() const { return ___s_invokeMoveNext_2; }
	inline ContextCallback_t93707E0430F4FF3E15E1FB5A4844BE89C657AE8B ** get_address_of_s_invokeMoveNext_2() { return &___s_invokeMoveNext_2; }
	inline void set_s_invokeMoveNext_2(ContextCallback_t93707E0430F4FF3E15E1FB5A4844BE89C657AE8B * value)
	{
		___s_invokeMoveNext_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_invokeMoveNext_2), (void*)value);
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


// System.Text.StringBuilder
struct  StringBuilder_t  : public RuntimeObject
{
public:
	// System.Char[] System.Text.StringBuilder::m_ChunkChars
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___m_ChunkChars_0;
	// System.Text.StringBuilder System.Text.StringBuilder::m_ChunkPrevious
	StringBuilder_t * ___m_ChunkPrevious_1;
	// System.Int32 System.Text.StringBuilder::m_ChunkLength
	int32_t ___m_ChunkLength_2;
	// System.Int32 System.Text.StringBuilder::m_ChunkOffset
	int32_t ___m_ChunkOffset_3;
	// System.Int32 System.Text.StringBuilder::m_MaxCapacity
	int32_t ___m_MaxCapacity_4;

public:
	inline static int32_t get_offset_of_m_ChunkChars_0() { return static_cast<int32_t>(offsetof(StringBuilder_t, ___m_ChunkChars_0)); }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* get_m_ChunkChars_0() const { return ___m_ChunkChars_0; }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34** get_address_of_m_ChunkChars_0() { return &___m_ChunkChars_0; }
	inline void set_m_ChunkChars_0(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* value)
	{
		___m_ChunkChars_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ChunkChars_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_ChunkPrevious_1() { return static_cast<int32_t>(offsetof(StringBuilder_t, ___m_ChunkPrevious_1)); }
	inline StringBuilder_t * get_m_ChunkPrevious_1() const { return ___m_ChunkPrevious_1; }
	inline StringBuilder_t ** get_address_of_m_ChunkPrevious_1() { return &___m_ChunkPrevious_1; }
	inline void set_m_ChunkPrevious_1(StringBuilder_t * value)
	{
		___m_ChunkPrevious_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ChunkPrevious_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_ChunkLength_2() { return static_cast<int32_t>(offsetof(StringBuilder_t, ___m_ChunkLength_2)); }
	inline int32_t get_m_ChunkLength_2() const { return ___m_ChunkLength_2; }
	inline int32_t* get_address_of_m_ChunkLength_2() { return &___m_ChunkLength_2; }
	inline void set_m_ChunkLength_2(int32_t value)
	{
		___m_ChunkLength_2 = value;
	}

	inline static int32_t get_offset_of_m_ChunkOffset_3() { return static_cast<int32_t>(offsetof(StringBuilder_t, ___m_ChunkOffset_3)); }
	inline int32_t get_m_ChunkOffset_3() const { return ___m_ChunkOffset_3; }
	inline int32_t* get_address_of_m_ChunkOffset_3() { return &___m_ChunkOffset_3; }
	inline void set_m_ChunkOffset_3(int32_t value)
	{
		___m_ChunkOffset_3 = value;
	}

	inline static int32_t get_offset_of_m_MaxCapacity_4() { return static_cast<int32_t>(offsetof(StringBuilder_t, ___m_MaxCapacity_4)); }
	inline int32_t get_m_MaxCapacity_4() const { return ___m_MaxCapacity_4; }
	inline int32_t* get_address_of_m_MaxCapacity_4() { return &___m_MaxCapacity_4; }
	inline void set_m_MaxCapacity_4(int32_t value)
	{
		___m_MaxCapacity_4 = value;
	}
};


// System.Threading.SynchronizationContext
struct  SynchronizationContext_t17D9365B5E0D30A0910A16FA4351C525232EF069  : public RuntimeObject
{
public:

public:
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

// UnityEngine.AndroidJavaObject
struct  AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E  : public RuntimeObject
{
public:
	// UnityEngine.GlobalJavaObjectRef UnityEngine.AndroidJavaObject::m_jobject
	GlobalJavaObjectRef_t04A7D04EB0317C286F089E4DB4444EC4F2D78289 * ___m_jobject_1;
	// UnityEngine.GlobalJavaObjectRef UnityEngine.AndroidJavaObject::m_jclass
	GlobalJavaObjectRef_t04A7D04EB0317C286F089E4DB4444EC4F2D78289 * ___m_jclass_2;

public:
	inline static int32_t get_offset_of_m_jobject_1() { return static_cast<int32_t>(offsetof(AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E, ___m_jobject_1)); }
	inline GlobalJavaObjectRef_t04A7D04EB0317C286F089E4DB4444EC4F2D78289 * get_m_jobject_1() const { return ___m_jobject_1; }
	inline GlobalJavaObjectRef_t04A7D04EB0317C286F089E4DB4444EC4F2D78289 ** get_address_of_m_jobject_1() { return &___m_jobject_1; }
	inline void set_m_jobject_1(GlobalJavaObjectRef_t04A7D04EB0317C286F089E4DB4444EC4F2D78289 * value)
	{
		___m_jobject_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_jobject_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_jclass_2() { return static_cast<int32_t>(offsetof(AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E, ___m_jclass_2)); }
	inline GlobalJavaObjectRef_t04A7D04EB0317C286F089E4DB4444EC4F2D78289 * get_m_jclass_2() const { return ___m_jclass_2; }
	inline GlobalJavaObjectRef_t04A7D04EB0317C286F089E4DB4444EC4F2D78289 ** get_address_of_m_jclass_2() { return &___m_jclass_2; }
	inline void set_m_jclass_2(GlobalJavaObjectRef_t04A7D04EB0317C286F089E4DB4444EC4F2D78289 * value)
	{
		___m_jclass_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_jclass_2), (void*)value);
	}
};

struct AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_StaticFields
{
public:
	// System.Boolean UnityEngine.AndroidJavaObject::enableDebugPrints
	bool ___enableDebugPrints_0;

public:
	inline static int32_t get_offset_of_enableDebugPrints_0() { return static_cast<int32_t>(offsetof(AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_StaticFields, ___enableDebugPrints_0)); }
	inline bool get_enableDebugPrints_0() const { return ___enableDebugPrints_0; }
	inline bool* get_address_of_enableDebugPrints_0() { return &___enableDebugPrints_0; }
	inline void set_enableDebugPrints_0(bool value)
	{
		___enableDebugPrints_0 = value;
	}
};


// UnityEngine._AndroidJNIHelper
struct  _AndroidJNIHelper_t664F535B46589884A627F66F98A451D1CD48F76B  : public RuntimeObject
{
public:

public:
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


// System.Char
struct  Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14 
{
public:
	// System.Char System.Char::m_value
	Il2CppChar ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14, ___m_value_0)); }
	inline Il2CppChar get_m_value_0() const { return ___m_value_0; }
	inline Il2CppChar* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(Il2CppChar value)
	{
		___m_value_0 = value;
	}
};

struct Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_StaticFields
{
public:
	// System.Byte[] System.Char::categoryForLatin1
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___categoryForLatin1_3;

public:
	inline static int32_t get_offset_of_categoryForLatin1_3() { return static_cast<int32_t>(offsetof(Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_StaticFields, ___categoryForLatin1_3)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_categoryForLatin1_3() const { return ___categoryForLatin1_3; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_categoryForLatin1_3() { return &___categoryForLatin1_3; }
	inline void set_categoryForLatin1_3(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___categoryForLatin1_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___categoryForLatin1_3), (void*)value);
	}
};


// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>
struct  KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	RuntimeObject * ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	RuntimeObject * ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625, ___key_0)); }
	inline RuntimeObject * get_key_0() const { return ___key_0; }
	inline RuntimeObject ** get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(RuntimeObject * value)
	{
		___key_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___key_0), (void*)value);
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625, ___value_1)); }
	inline RuntimeObject * get_value_1() const { return ___value_1; }
	inline RuntimeObject ** get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(RuntimeObject * value)
	{
		___value_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___value_1), (void*)value);
	}
};


// System.Collections.Generic.List`1_Enumerator<System.Int32>
struct  Enumerator_t7BA00929E14A2F2A62CE085585044A3FEB2C5F3C 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1_Enumerator::list
	List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * ___list_0;
	// System.Int32 System.Collections.Generic.List`1_Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.List`1_Enumerator::version
	int32_t ___version_2;
	// T System.Collections.Generic.List`1_Enumerator::current
	int32_t ___current_3;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(Enumerator_t7BA00929E14A2F2A62CE085585044A3FEB2C5F3C, ___list_0)); }
	inline List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * get_list_0() const { return ___list_0; }
	inline List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___list_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Enumerator_t7BA00929E14A2F2A62CE085585044A3FEB2C5F3C, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(Enumerator_t7BA00929E14A2F2A62CE085585044A3FEB2C5F3C, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_t7BA00929E14A2F2A62CE085585044A3FEB2C5F3C, ___current_3)); }
	inline int32_t get_current_3() const { return ___current_3; }
	inline int32_t* get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(int32_t value)
	{
		___current_3 = value;
	}
};


// System.Collections.Generic.List`1_Enumerator<System.Object>
struct  Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1_Enumerator::list
	List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * ___list_0;
	// System.Int32 System.Collections.Generic.List`1_Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.List`1_Enumerator::version
	int32_t ___version_2;
	// T System.Collections.Generic.List`1_Enumerator::current
	RuntimeObject * ___current_3;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6, ___list_0)); }
	inline List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * get_list_0() const { return ___list_0; }
	inline List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___list_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6, ___current_3)); }
	inline RuntimeObject * get_current_3() const { return ___current_3; }
	inline RuntimeObject ** get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(RuntimeObject * value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___current_3), (void*)value);
	}
};


// System.DateTime
struct  DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 
{
public:
	// System.UInt64 System.DateTime::dateData
	uint64_t ___dateData_44;

public:
	inline static int32_t get_offset_of_dateData_44() { return static_cast<int32_t>(offsetof(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405, ___dateData_44)); }
	inline uint64_t get_dateData_44() const { return ___dateData_44; }
	inline uint64_t* get_address_of_dateData_44() { return &___dateData_44; }
	inline void set_dateData_44(uint64_t value)
	{
		___dateData_44 = value;
	}
};

struct DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_StaticFields
{
public:
	// System.Int32[] System.DateTime::DaysToMonth365
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___DaysToMonth365_29;
	// System.Int32[] System.DateTime::DaysToMonth366
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___DaysToMonth366_30;
	// System.DateTime System.DateTime::MinValue
	DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  ___MinValue_31;
	// System.DateTime System.DateTime::MaxValue
	DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  ___MaxValue_32;

public:
	inline static int32_t get_offset_of_DaysToMonth365_29() { return static_cast<int32_t>(offsetof(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_StaticFields, ___DaysToMonth365_29)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_DaysToMonth365_29() const { return ___DaysToMonth365_29; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_DaysToMonth365_29() { return &___DaysToMonth365_29; }
	inline void set_DaysToMonth365_29(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___DaysToMonth365_29 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___DaysToMonth365_29), (void*)value);
	}

	inline static int32_t get_offset_of_DaysToMonth366_30() { return static_cast<int32_t>(offsetof(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_StaticFields, ___DaysToMonth366_30)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_DaysToMonth366_30() const { return ___DaysToMonth366_30; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_DaysToMonth366_30() { return &___DaysToMonth366_30; }
	inline void set_DaysToMonth366_30(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___DaysToMonth366_30 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___DaysToMonth366_30), (void*)value);
	}

	inline static int32_t get_offset_of_MinValue_31() { return static_cast<int32_t>(offsetof(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_StaticFields, ___MinValue_31)); }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  get_MinValue_31() const { return ___MinValue_31; }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 * get_address_of_MinValue_31() { return &___MinValue_31; }
	inline void set_MinValue_31(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  value)
	{
		___MinValue_31 = value;
	}

	inline static int32_t get_offset_of_MaxValue_32() { return static_cast<int32_t>(offsetof(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_StaticFields, ___MaxValue_32)); }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  get_MaxValue_32() const { return ___MaxValue_32; }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 * get_address_of_MaxValue_32() { return &___MaxValue_32; }
	inline void set_MaxValue_32(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  value)
	{
		___MaxValue_32 = value;
	}
};


// System.Decimal
struct  Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7 
{
public:
	// System.Int32 System.Decimal::flags
	int32_t ___flags_14;
	// System.Int32 System.Decimal::hi
	int32_t ___hi_15;
	// System.Int32 System.Decimal::lo
	int32_t ___lo_16;
	// System.Int32 System.Decimal::mid
	int32_t ___mid_17;

public:
	inline static int32_t get_offset_of_flags_14() { return static_cast<int32_t>(offsetof(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7, ___flags_14)); }
	inline int32_t get_flags_14() const { return ___flags_14; }
	inline int32_t* get_address_of_flags_14() { return &___flags_14; }
	inline void set_flags_14(int32_t value)
	{
		___flags_14 = value;
	}

	inline static int32_t get_offset_of_hi_15() { return static_cast<int32_t>(offsetof(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7, ___hi_15)); }
	inline int32_t get_hi_15() const { return ___hi_15; }
	inline int32_t* get_address_of_hi_15() { return &___hi_15; }
	inline void set_hi_15(int32_t value)
	{
		___hi_15 = value;
	}

	inline static int32_t get_offset_of_lo_16() { return static_cast<int32_t>(offsetof(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7, ___lo_16)); }
	inline int32_t get_lo_16() const { return ___lo_16; }
	inline int32_t* get_address_of_lo_16() { return &___lo_16; }
	inline void set_lo_16(int32_t value)
	{
		___lo_16 = value;
	}

	inline static int32_t get_offset_of_mid_17() { return static_cast<int32_t>(offsetof(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7, ___mid_17)); }
	inline int32_t get_mid_17() const { return ___mid_17; }
	inline int32_t* get_address_of_mid_17() { return &___mid_17; }
	inline void set_mid_17(int32_t value)
	{
		___mid_17 = value;
	}
};

struct Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7_StaticFields
{
public:
	// System.UInt32[] System.Decimal::Powers10
	UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* ___Powers10_6;
	// System.Decimal System.Decimal::Zero
	Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  ___Zero_7;
	// System.Decimal System.Decimal::One
	Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  ___One_8;
	// System.Decimal System.Decimal::MinusOne
	Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  ___MinusOne_9;
	// System.Decimal System.Decimal::MaxValue
	Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  ___MaxValue_10;
	// System.Decimal System.Decimal::MinValue
	Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  ___MinValue_11;
	// System.Decimal System.Decimal::NearNegativeZero
	Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  ___NearNegativeZero_12;
	// System.Decimal System.Decimal::NearPositiveZero
	Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  ___NearPositiveZero_13;

public:
	inline static int32_t get_offset_of_Powers10_6() { return static_cast<int32_t>(offsetof(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7_StaticFields, ___Powers10_6)); }
	inline UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* get_Powers10_6() const { return ___Powers10_6; }
	inline UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF** get_address_of_Powers10_6() { return &___Powers10_6; }
	inline void set_Powers10_6(UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* value)
	{
		___Powers10_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Powers10_6), (void*)value);
	}

	inline static int32_t get_offset_of_Zero_7() { return static_cast<int32_t>(offsetof(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7_StaticFields, ___Zero_7)); }
	inline Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  get_Zero_7() const { return ___Zero_7; }
	inline Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7 * get_address_of_Zero_7() { return &___Zero_7; }
	inline void set_Zero_7(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  value)
	{
		___Zero_7 = value;
	}

	inline static int32_t get_offset_of_One_8() { return static_cast<int32_t>(offsetof(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7_StaticFields, ___One_8)); }
	inline Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  get_One_8() const { return ___One_8; }
	inline Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7 * get_address_of_One_8() { return &___One_8; }
	inline void set_One_8(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  value)
	{
		___One_8 = value;
	}

	inline static int32_t get_offset_of_MinusOne_9() { return static_cast<int32_t>(offsetof(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7_StaticFields, ___MinusOne_9)); }
	inline Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  get_MinusOne_9() const { return ___MinusOne_9; }
	inline Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7 * get_address_of_MinusOne_9() { return &___MinusOne_9; }
	inline void set_MinusOne_9(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  value)
	{
		___MinusOne_9 = value;
	}

	inline static int32_t get_offset_of_MaxValue_10() { return static_cast<int32_t>(offsetof(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7_StaticFields, ___MaxValue_10)); }
	inline Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  get_MaxValue_10() const { return ___MaxValue_10; }
	inline Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7 * get_address_of_MaxValue_10() { return &___MaxValue_10; }
	inline void set_MaxValue_10(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  value)
	{
		___MaxValue_10 = value;
	}

	inline static int32_t get_offset_of_MinValue_11() { return static_cast<int32_t>(offsetof(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7_StaticFields, ___MinValue_11)); }
	inline Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  get_MinValue_11() const { return ___MinValue_11; }
	inline Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7 * get_address_of_MinValue_11() { return &___MinValue_11; }
	inline void set_MinValue_11(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  value)
	{
		___MinValue_11 = value;
	}

	inline static int32_t get_offset_of_NearNegativeZero_12() { return static_cast<int32_t>(offsetof(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7_StaticFields, ___NearNegativeZero_12)); }
	inline Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  get_NearNegativeZero_12() const { return ___NearNegativeZero_12; }
	inline Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7 * get_address_of_NearNegativeZero_12() { return &___NearNegativeZero_12; }
	inline void set_NearNegativeZero_12(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  value)
	{
		___NearNegativeZero_12 = value;
	}

	inline static int32_t get_offset_of_NearPositiveZero_13() { return static_cast<int32_t>(offsetof(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7_StaticFields, ___NearPositiveZero_13)); }
	inline Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  get_NearPositiveZero_13() const { return ___NearPositiveZero_13; }
	inline Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7 * get_address_of_NearPositiveZero_13() { return &___NearPositiveZero_13; }
	inline void set_NearPositiveZero_13(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  value)
	{
		___NearPositiveZero_13 = value;
	}
};


// System.Diagnostics.Tracing.EmptyStruct
struct  EmptyStruct_t4261C00C8DDCEA2FE01A2264519DDB55BA275F62 
{
public:
	union
	{
		struct
		{
		};
		uint8_t EmptyStruct_t4261C00C8DDCEA2FE01A2264519DDB55BA275F62__padding[1];
	};

public:
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
};


// System.Int16
struct  Int16_tD0F031114106263BB459DA1F099FF9F42691295A 
{
public:
	// System.Int16 System.Int16::m_value
	int16_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int16_tD0F031114106263BB459DA1F099FF9F42691295A, ___m_value_0)); }
	inline int16_t get_m_value_0() const { return ___m_value_0; }
	inline int16_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int16_t value)
	{
		___m_value_0 = value;
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


// System.Int64
struct  Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3 
{
public:
	// System.Int64 System.Int64::m_value
	int64_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3, ___m_value_0)); }
	inline int64_t get_m_value_0() const { return ___m_value_0; }
	inline int64_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int64_t value)
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


// System.Linq.Enumerable_WhereArrayIterator`1<System.Object>
struct  WhereArrayIterator_1_t7D84D638EB94F5CC3BE1B29D8FC781CA8CD15A86  : public Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279
{
public:
	// TSource[] System.Linq.Enumerable_WhereArrayIterator`1::source
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___source_3;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable_WhereArrayIterator`1::predicate
	Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * ___predicate_4;
	// System.Int32 System.Linq.Enumerable_WhereArrayIterator`1::index
	int32_t ___index_5;

public:
	inline static int32_t get_offset_of_source_3() { return static_cast<int32_t>(offsetof(WhereArrayIterator_1_t7D84D638EB94F5CC3BE1B29D8FC781CA8CD15A86, ___source_3)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get_source_3() const { return ___source_3; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of_source_3() { return &___source_3; }
	inline void set_source_3(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		___source_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___source_3), (void*)value);
	}

	inline static int32_t get_offset_of_predicate_4() { return static_cast<int32_t>(offsetof(WhereArrayIterator_1_t7D84D638EB94F5CC3BE1B29D8FC781CA8CD15A86, ___predicate_4)); }
	inline Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * get_predicate_4() const { return ___predicate_4; }
	inline Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 ** get_address_of_predicate_4() { return &___predicate_4; }
	inline void set_predicate_4(Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * value)
	{
		___predicate_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___predicate_4), (void*)value);
	}

	inline static int32_t get_offset_of_index_5() { return static_cast<int32_t>(offsetof(WhereArrayIterator_1_t7D84D638EB94F5CC3BE1B29D8FC781CA8CD15A86, ___index_5)); }
	inline int32_t get_index_5() const { return ___index_5; }
	inline int32_t* get_address_of_index_5() { return &___index_5; }
	inline void set_index_5(int32_t value)
	{
		___index_5 = value;
	}
};


// System.Linq.Enumerable_WhereEnumerableIterator`1<System.Int32>
struct  WhereEnumerableIterator_1_t9F4DDC70173BABD72AEC7AA00D62F4FAE2613CEA  : public Iterator_1_tCFFC952B03DBE4E956DE317DB9704D936AEA2379
{
public:
	// System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable_WhereEnumerableIterator`1::source
	RuntimeObject* ___source_3;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable_WhereEnumerableIterator`1::predicate
	Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 * ___predicate_4;
	// System.Collections.Generic.IEnumerator`1<TSource> System.Linq.Enumerable_WhereEnumerableIterator`1::enumerator
	RuntimeObject* ___enumerator_5;

public:
	inline static int32_t get_offset_of_source_3() { return static_cast<int32_t>(offsetof(WhereEnumerableIterator_1_t9F4DDC70173BABD72AEC7AA00D62F4FAE2613CEA, ___source_3)); }
	inline RuntimeObject* get_source_3() const { return ___source_3; }
	inline RuntimeObject** get_address_of_source_3() { return &___source_3; }
	inline void set_source_3(RuntimeObject* value)
	{
		___source_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___source_3), (void*)value);
	}

	inline static int32_t get_offset_of_predicate_4() { return static_cast<int32_t>(offsetof(WhereEnumerableIterator_1_t9F4DDC70173BABD72AEC7AA00D62F4FAE2613CEA, ___predicate_4)); }
	inline Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 * get_predicate_4() const { return ___predicate_4; }
	inline Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 ** get_address_of_predicate_4() { return &___predicate_4; }
	inline void set_predicate_4(Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 * value)
	{
		___predicate_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___predicate_4), (void*)value);
	}

	inline static int32_t get_offset_of_enumerator_5() { return static_cast<int32_t>(offsetof(WhereEnumerableIterator_1_t9F4DDC70173BABD72AEC7AA00D62F4FAE2613CEA, ___enumerator_5)); }
	inline RuntimeObject* get_enumerator_5() const { return ___enumerator_5; }
	inline RuntimeObject** get_address_of_enumerator_5() { return &___enumerator_5; }
	inline void set_enumerator_5(RuntimeObject* value)
	{
		___enumerator_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___enumerator_5), (void*)value);
	}
};


// System.Linq.Enumerable_WhereEnumerableIterator`1<System.Object>
struct  WhereEnumerableIterator_1_t1E9FDCFD8F8136C6A5A5740C1E093EF03F0B5CE0  : public Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279
{
public:
	// System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable_WhereEnumerableIterator`1::source
	RuntimeObject* ___source_3;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable_WhereEnumerableIterator`1::predicate
	Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * ___predicate_4;
	// System.Collections.Generic.IEnumerator`1<TSource> System.Linq.Enumerable_WhereEnumerableIterator`1::enumerator
	RuntimeObject* ___enumerator_5;

public:
	inline static int32_t get_offset_of_source_3() { return static_cast<int32_t>(offsetof(WhereEnumerableIterator_1_t1E9FDCFD8F8136C6A5A5740C1E093EF03F0B5CE0, ___source_3)); }
	inline RuntimeObject* get_source_3() const { return ___source_3; }
	inline RuntimeObject** get_address_of_source_3() { return &___source_3; }
	inline void set_source_3(RuntimeObject* value)
	{
		___source_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___source_3), (void*)value);
	}

	inline static int32_t get_offset_of_predicate_4() { return static_cast<int32_t>(offsetof(WhereEnumerableIterator_1_t1E9FDCFD8F8136C6A5A5740C1E093EF03F0B5CE0, ___predicate_4)); }
	inline Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * get_predicate_4() const { return ___predicate_4; }
	inline Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 ** get_address_of_predicate_4() { return &___predicate_4; }
	inline void set_predicate_4(Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * value)
	{
		___predicate_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___predicate_4), (void*)value);
	}

	inline static int32_t get_offset_of_enumerator_5() { return static_cast<int32_t>(offsetof(WhereEnumerableIterator_1_t1E9FDCFD8F8136C6A5A5740C1E093EF03F0B5CE0, ___enumerator_5)); }
	inline RuntimeObject* get_enumerator_5() const { return ___enumerator_5; }
	inline RuntimeObject** get_address_of_enumerator_5() { return &___enumerator_5; }
	inline void set_enumerator_5(RuntimeObject* value)
	{
		___enumerator_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___enumerator_5), (void*)value);
	}
};


// System.Linq.Enumerable_WhereSelectArrayIterator`2<System.Int32,System.Int32>
struct  WhereSelectArrayIterator_2_t00D4CC16A86C24F0CC80D3112E1FA2D451FF5D0C  : public Iterator_1_tCFFC952B03DBE4E956DE317DB9704D936AEA2379
{
public:
	// TSource[] System.Linq.Enumerable_WhereSelectArrayIterator`2::source
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___source_3;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable_WhereSelectArrayIterator`2::predicate
	Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 * ___predicate_4;
	// System.Func`2<TSource,TResult> System.Linq.Enumerable_WhereSelectArrayIterator`2::selector
	Func_2_tFF6AE79EFD0857556AD37A1A1594C43F76012FEA * ___selector_5;
	// System.Int32 System.Linq.Enumerable_WhereSelectArrayIterator`2::index
	int32_t ___index_6;

public:
	inline static int32_t get_offset_of_source_3() { return static_cast<int32_t>(offsetof(WhereSelectArrayIterator_2_t00D4CC16A86C24F0CC80D3112E1FA2D451FF5D0C, ___source_3)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_source_3() const { return ___source_3; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_source_3() { return &___source_3; }
	inline void set_source_3(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___source_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___source_3), (void*)value);
	}

	inline static int32_t get_offset_of_predicate_4() { return static_cast<int32_t>(offsetof(WhereSelectArrayIterator_2_t00D4CC16A86C24F0CC80D3112E1FA2D451FF5D0C, ___predicate_4)); }
	inline Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 * get_predicate_4() const { return ___predicate_4; }
	inline Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 ** get_address_of_predicate_4() { return &___predicate_4; }
	inline void set_predicate_4(Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 * value)
	{
		___predicate_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___predicate_4), (void*)value);
	}

	inline static int32_t get_offset_of_selector_5() { return static_cast<int32_t>(offsetof(WhereSelectArrayIterator_2_t00D4CC16A86C24F0CC80D3112E1FA2D451FF5D0C, ___selector_5)); }
	inline Func_2_tFF6AE79EFD0857556AD37A1A1594C43F76012FEA * get_selector_5() const { return ___selector_5; }
	inline Func_2_tFF6AE79EFD0857556AD37A1A1594C43F76012FEA ** get_address_of_selector_5() { return &___selector_5; }
	inline void set_selector_5(Func_2_tFF6AE79EFD0857556AD37A1A1594C43F76012FEA * value)
	{
		___selector_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___selector_5), (void*)value);
	}

	inline static int32_t get_offset_of_index_6() { return static_cast<int32_t>(offsetof(WhereSelectArrayIterator_2_t00D4CC16A86C24F0CC80D3112E1FA2D451FF5D0C, ___index_6)); }
	inline int32_t get_index_6() const { return ___index_6; }
	inline int32_t* get_address_of_index_6() { return &___index_6; }
	inline void set_index_6(int32_t value)
	{
		___index_6 = value;
	}
};


// System.Linq.Enumerable_WhereSelectArrayIterator`2<System.Object,System.Object>
struct  WhereSelectArrayIterator_2_tA706D5B1608A9A8F1BF43C6E5D9D682C901DB244  : public Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279
{
public:
	// TSource[] System.Linq.Enumerable_WhereSelectArrayIterator`2::source
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___source_3;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable_WhereSelectArrayIterator`2::predicate
	Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * ___predicate_4;
	// System.Func`2<TSource,TResult> System.Linq.Enumerable_WhereSelectArrayIterator`2::selector
	Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 * ___selector_5;
	// System.Int32 System.Linq.Enumerable_WhereSelectArrayIterator`2::index
	int32_t ___index_6;

public:
	inline static int32_t get_offset_of_source_3() { return static_cast<int32_t>(offsetof(WhereSelectArrayIterator_2_tA706D5B1608A9A8F1BF43C6E5D9D682C901DB244, ___source_3)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get_source_3() const { return ___source_3; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of_source_3() { return &___source_3; }
	inline void set_source_3(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		___source_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___source_3), (void*)value);
	}

	inline static int32_t get_offset_of_predicate_4() { return static_cast<int32_t>(offsetof(WhereSelectArrayIterator_2_tA706D5B1608A9A8F1BF43C6E5D9D682C901DB244, ___predicate_4)); }
	inline Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * get_predicate_4() const { return ___predicate_4; }
	inline Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 ** get_address_of_predicate_4() { return &___predicate_4; }
	inline void set_predicate_4(Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * value)
	{
		___predicate_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___predicate_4), (void*)value);
	}

	inline static int32_t get_offset_of_selector_5() { return static_cast<int32_t>(offsetof(WhereSelectArrayIterator_2_tA706D5B1608A9A8F1BF43C6E5D9D682C901DB244, ___selector_5)); }
	inline Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 * get_selector_5() const { return ___selector_5; }
	inline Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 ** get_address_of_selector_5() { return &___selector_5; }
	inline void set_selector_5(Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 * value)
	{
		___selector_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___selector_5), (void*)value);
	}

	inline static int32_t get_offset_of_index_6() { return static_cast<int32_t>(offsetof(WhereSelectArrayIterator_2_tA706D5B1608A9A8F1BF43C6E5D9D682C901DB244, ___index_6)); }
	inline int32_t get_index_6() const { return ___index_6; }
	inline int32_t* get_address_of_index_6() { return &___index_6; }
	inline void set_index_6(int32_t value)
	{
		___index_6 = value;
	}
};


// System.Linq.Enumerable_WhereSelectEnumerableIterator`2<System.Int32,System.Int32>
struct  WhereSelectEnumerableIterator_2_t70C236BD8C0DBBA43FCE3CE4E4F6B545579333EF  : public Iterator_1_tCFFC952B03DBE4E956DE317DB9704D936AEA2379
{
public:
	// System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable_WhereSelectEnumerableIterator`2::source
	RuntimeObject* ___source_3;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable_WhereSelectEnumerableIterator`2::predicate
	Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 * ___predicate_4;
	// System.Func`2<TSource,TResult> System.Linq.Enumerable_WhereSelectEnumerableIterator`2::selector
	Func_2_tFF6AE79EFD0857556AD37A1A1594C43F76012FEA * ___selector_5;
	// System.Collections.Generic.IEnumerator`1<TSource> System.Linq.Enumerable_WhereSelectEnumerableIterator`2::enumerator
	RuntimeObject* ___enumerator_6;

public:
	inline static int32_t get_offset_of_source_3() { return static_cast<int32_t>(offsetof(WhereSelectEnumerableIterator_2_t70C236BD8C0DBBA43FCE3CE4E4F6B545579333EF, ___source_3)); }
	inline RuntimeObject* get_source_3() const { return ___source_3; }
	inline RuntimeObject** get_address_of_source_3() { return &___source_3; }
	inline void set_source_3(RuntimeObject* value)
	{
		___source_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___source_3), (void*)value);
	}

	inline static int32_t get_offset_of_predicate_4() { return static_cast<int32_t>(offsetof(WhereSelectEnumerableIterator_2_t70C236BD8C0DBBA43FCE3CE4E4F6B545579333EF, ___predicate_4)); }
	inline Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 * get_predicate_4() const { return ___predicate_4; }
	inline Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 ** get_address_of_predicate_4() { return &___predicate_4; }
	inline void set_predicate_4(Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 * value)
	{
		___predicate_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___predicate_4), (void*)value);
	}

	inline static int32_t get_offset_of_selector_5() { return static_cast<int32_t>(offsetof(WhereSelectEnumerableIterator_2_t70C236BD8C0DBBA43FCE3CE4E4F6B545579333EF, ___selector_5)); }
	inline Func_2_tFF6AE79EFD0857556AD37A1A1594C43F76012FEA * get_selector_5() const { return ___selector_5; }
	inline Func_2_tFF6AE79EFD0857556AD37A1A1594C43F76012FEA ** get_address_of_selector_5() { return &___selector_5; }
	inline void set_selector_5(Func_2_tFF6AE79EFD0857556AD37A1A1594C43F76012FEA * value)
	{
		___selector_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___selector_5), (void*)value);
	}

	inline static int32_t get_offset_of_enumerator_6() { return static_cast<int32_t>(offsetof(WhereSelectEnumerableIterator_2_t70C236BD8C0DBBA43FCE3CE4E4F6B545579333EF, ___enumerator_6)); }
	inline RuntimeObject* get_enumerator_6() const { return ___enumerator_6; }
	inline RuntimeObject** get_address_of_enumerator_6() { return &___enumerator_6; }
	inline void set_enumerator_6(RuntimeObject* value)
	{
		___enumerator_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___enumerator_6), (void*)value);
	}
};


// System.Linq.Enumerable_WhereSelectEnumerableIterator`2<System.Object,System.Object>
struct  WhereSelectEnumerableIterator_2_tDAA8BFBEA68F81670F3F51C6200EBD26D7A8FBAB  : public Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279
{
public:
	// System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable_WhereSelectEnumerableIterator`2::source
	RuntimeObject* ___source_3;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable_WhereSelectEnumerableIterator`2::predicate
	Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * ___predicate_4;
	// System.Func`2<TSource,TResult> System.Linq.Enumerable_WhereSelectEnumerableIterator`2::selector
	Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 * ___selector_5;
	// System.Collections.Generic.IEnumerator`1<TSource> System.Linq.Enumerable_WhereSelectEnumerableIterator`2::enumerator
	RuntimeObject* ___enumerator_6;

public:
	inline static int32_t get_offset_of_source_3() { return static_cast<int32_t>(offsetof(WhereSelectEnumerableIterator_2_tDAA8BFBEA68F81670F3F51C6200EBD26D7A8FBAB, ___source_3)); }
	inline RuntimeObject* get_source_3() const { return ___source_3; }
	inline RuntimeObject** get_address_of_source_3() { return &___source_3; }
	inline void set_source_3(RuntimeObject* value)
	{
		___source_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___source_3), (void*)value);
	}

	inline static int32_t get_offset_of_predicate_4() { return static_cast<int32_t>(offsetof(WhereSelectEnumerableIterator_2_tDAA8BFBEA68F81670F3F51C6200EBD26D7A8FBAB, ___predicate_4)); }
	inline Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * get_predicate_4() const { return ___predicate_4; }
	inline Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 ** get_address_of_predicate_4() { return &___predicate_4; }
	inline void set_predicate_4(Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * value)
	{
		___predicate_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___predicate_4), (void*)value);
	}

	inline static int32_t get_offset_of_selector_5() { return static_cast<int32_t>(offsetof(WhereSelectEnumerableIterator_2_tDAA8BFBEA68F81670F3F51C6200EBD26D7A8FBAB, ___selector_5)); }
	inline Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 * get_selector_5() const { return ___selector_5; }
	inline Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 ** get_address_of_selector_5() { return &___selector_5; }
	inline void set_selector_5(Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 * value)
	{
		___selector_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___selector_5), (void*)value);
	}

	inline static int32_t get_offset_of_enumerator_6() { return static_cast<int32_t>(offsetof(WhereSelectEnumerableIterator_2_tDAA8BFBEA68F81670F3F51C6200EBD26D7A8FBAB, ___enumerator_6)); }
	inline RuntimeObject* get_enumerator_6() const { return ___enumerator_6; }
	inline RuntimeObject** get_address_of_enumerator_6() { return &___enumerator_6; }
	inline void set_enumerator_6(RuntimeObject* value)
	{
		___enumerator_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___enumerator_6), (void*)value);
	}
};


// System.Linq.OrderedEnumerable`2<System.Object,System.Object>
struct  OrderedEnumerable_2_t2D037583B9C1B804D9A950293C2165363EED62BA  : public OrderedEnumerable_1_t4ED7F4DE53F413B48E5FCFAFE1EFE1B04A7B5F6F
{
public:
	// System.Linq.OrderedEnumerable`1<TElement> System.Linq.OrderedEnumerable`2::parent
	OrderedEnumerable_1_t4ED7F4DE53F413B48E5FCFAFE1EFE1B04A7B5F6F * ___parent_1;
	// System.Func`2<TElement,TKey> System.Linq.OrderedEnumerable`2::keySelector
	Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 * ___keySelector_2;
	// System.Collections.Generic.IComparer`1<TKey> System.Linq.OrderedEnumerable`2::comparer
	RuntimeObject* ___comparer_3;
	// System.Boolean System.Linq.OrderedEnumerable`2::descending
	bool ___descending_4;

public:
	inline static int32_t get_offset_of_parent_1() { return static_cast<int32_t>(offsetof(OrderedEnumerable_2_t2D037583B9C1B804D9A950293C2165363EED62BA, ___parent_1)); }
	inline OrderedEnumerable_1_t4ED7F4DE53F413B48E5FCFAFE1EFE1B04A7B5F6F * get_parent_1() const { return ___parent_1; }
	inline OrderedEnumerable_1_t4ED7F4DE53F413B48E5FCFAFE1EFE1B04A7B5F6F ** get_address_of_parent_1() { return &___parent_1; }
	inline void set_parent_1(OrderedEnumerable_1_t4ED7F4DE53F413B48E5FCFAFE1EFE1B04A7B5F6F * value)
	{
		___parent_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___parent_1), (void*)value);
	}

	inline static int32_t get_offset_of_keySelector_2() { return static_cast<int32_t>(offsetof(OrderedEnumerable_2_t2D037583B9C1B804D9A950293C2165363EED62BA, ___keySelector_2)); }
	inline Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 * get_keySelector_2() const { return ___keySelector_2; }
	inline Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 ** get_address_of_keySelector_2() { return &___keySelector_2; }
	inline void set_keySelector_2(Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 * value)
	{
		___keySelector_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keySelector_2), (void*)value);
	}

	inline static int32_t get_offset_of_comparer_3() { return static_cast<int32_t>(offsetof(OrderedEnumerable_2_t2D037583B9C1B804D9A950293C2165363EED62BA, ___comparer_3)); }
	inline RuntimeObject* get_comparer_3() const { return ___comparer_3; }
	inline RuntimeObject** get_address_of_comparer_3() { return &___comparer_3; }
	inline void set_comparer_3(RuntimeObject* value)
	{
		___comparer_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___comparer_3), (void*)value);
	}

	inline static int32_t get_offset_of_descending_4() { return static_cast<int32_t>(offsetof(OrderedEnumerable_2_t2D037583B9C1B804D9A950293C2165363EED62BA, ___descending_4)); }
	inline bool get_descending_4() const { return ___descending_4; }
	inline bool* get_address_of_descending_4() { return &___descending_4; }
	inline void set_descending_4(bool value)
	{
		___descending_4 = value;
	}
};


// System.Linq.OrderedEnumerable`2<System.Object,System.UInt32>
struct  OrderedEnumerable_2_t8CF56BCC85D75AC0001F38B4B1F1EEEE9D2F8CB5  : public OrderedEnumerable_1_t4ED7F4DE53F413B48E5FCFAFE1EFE1B04A7B5F6F
{
public:
	// System.Linq.OrderedEnumerable`1<TElement> System.Linq.OrderedEnumerable`2::parent
	OrderedEnumerable_1_t4ED7F4DE53F413B48E5FCFAFE1EFE1B04A7B5F6F * ___parent_1;
	// System.Func`2<TElement,TKey> System.Linq.OrderedEnumerable`2::keySelector
	Func_2_tC3246CBAFBB962E2C6075141A9B6BFC365266428 * ___keySelector_2;
	// System.Collections.Generic.IComparer`1<TKey> System.Linq.OrderedEnumerable`2::comparer
	RuntimeObject* ___comparer_3;
	// System.Boolean System.Linq.OrderedEnumerable`2::descending
	bool ___descending_4;

public:
	inline static int32_t get_offset_of_parent_1() { return static_cast<int32_t>(offsetof(OrderedEnumerable_2_t8CF56BCC85D75AC0001F38B4B1F1EEEE9D2F8CB5, ___parent_1)); }
	inline OrderedEnumerable_1_t4ED7F4DE53F413B48E5FCFAFE1EFE1B04A7B5F6F * get_parent_1() const { return ___parent_1; }
	inline OrderedEnumerable_1_t4ED7F4DE53F413B48E5FCFAFE1EFE1B04A7B5F6F ** get_address_of_parent_1() { return &___parent_1; }
	inline void set_parent_1(OrderedEnumerable_1_t4ED7F4DE53F413B48E5FCFAFE1EFE1B04A7B5F6F * value)
	{
		___parent_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___parent_1), (void*)value);
	}

	inline static int32_t get_offset_of_keySelector_2() { return static_cast<int32_t>(offsetof(OrderedEnumerable_2_t8CF56BCC85D75AC0001F38B4B1F1EEEE9D2F8CB5, ___keySelector_2)); }
	inline Func_2_tC3246CBAFBB962E2C6075141A9B6BFC365266428 * get_keySelector_2() const { return ___keySelector_2; }
	inline Func_2_tC3246CBAFBB962E2C6075141A9B6BFC365266428 ** get_address_of_keySelector_2() { return &___keySelector_2; }
	inline void set_keySelector_2(Func_2_tC3246CBAFBB962E2C6075141A9B6BFC365266428 * value)
	{
		___keySelector_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keySelector_2), (void*)value);
	}

	inline static int32_t get_offset_of_comparer_3() { return static_cast<int32_t>(offsetof(OrderedEnumerable_2_t8CF56BCC85D75AC0001F38B4B1F1EEEE9D2F8CB5, ___comparer_3)); }
	inline RuntimeObject* get_comparer_3() const { return ___comparer_3; }
	inline RuntimeObject** get_address_of_comparer_3() { return &___comparer_3; }
	inline void set_comparer_3(RuntimeObject* value)
	{
		___comparer_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___comparer_3), (void*)value);
	}

	inline static int32_t get_offset_of_descending_4() { return static_cast<int32_t>(offsetof(OrderedEnumerable_2_t8CF56BCC85D75AC0001F38B4B1F1EEEE9D2F8CB5, ___descending_4)); }
	inline bool get_descending_4() const { return ___descending_4; }
	inline bool* get_address_of_descending_4() { return &___descending_4; }
	inline void set_descending_4(bool value)
	{
		___descending_4 = value;
	}
};


// System.Runtime.CompilerServices.AsyncMethodBuilderCore
struct  AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34 
{
public:
	// System.Runtime.CompilerServices.IAsyncStateMachine System.Runtime.CompilerServices.AsyncMethodBuilderCore::m_stateMachine
	RuntimeObject* ___m_stateMachine_0;
	// System.Action System.Runtime.CompilerServices.AsyncMethodBuilderCore::m_defaultContextAction
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___m_defaultContextAction_1;

public:
	inline static int32_t get_offset_of_m_stateMachine_0() { return static_cast<int32_t>(offsetof(AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34, ___m_stateMachine_0)); }
	inline RuntimeObject* get_m_stateMachine_0() const { return ___m_stateMachine_0; }
	inline RuntimeObject** get_address_of_m_stateMachine_0() { return &___m_stateMachine_0; }
	inline void set_m_stateMachine_0(RuntimeObject* value)
	{
		___m_stateMachine_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_stateMachine_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_defaultContextAction_1() { return static_cast<int32_t>(offsetof(AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34, ___m_defaultContextAction_1)); }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * get_m_defaultContextAction_1() const { return ___m_defaultContextAction_1; }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 ** get_address_of_m_defaultContextAction_1() { return &___m_defaultContextAction_1; }
	inline void set_m_defaultContextAction_1(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * value)
	{
		___m_defaultContextAction_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_defaultContextAction_1), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Runtime.CompilerServices.AsyncMethodBuilderCore
struct AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34_marshaled_pinvoke
{
	RuntimeObject* ___m_stateMachine_0;
	Il2CppMethodPointer ___m_defaultContextAction_1;
};
// Native definition for COM marshalling of System.Runtime.CompilerServices.AsyncMethodBuilderCore
struct AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34_marshaled_com
{
	RuntimeObject* ___m_stateMachine_0;
	Il2CppMethodPointer ___m_defaultContextAction_1;
};

// System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1_ConfiguredTaskAwaiter<System.Boolean>
struct  ConfiguredTaskAwaiter_t286C97C0AF102C4C0BE55CE2025CC7BD1FB5C20C 
{
public:
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1_ConfiguredTaskAwaiter::m_task
	Task_1_t9C1FE9F18F52F3409B9E970FA38801A443AE7849 * ___m_task_0;
	// System.Boolean System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1_ConfiguredTaskAwaiter::m_continueOnCapturedContext
	bool ___m_continueOnCapturedContext_1;

public:
	inline static int32_t get_offset_of_m_task_0() { return static_cast<int32_t>(offsetof(ConfiguredTaskAwaiter_t286C97C0AF102C4C0BE55CE2025CC7BD1FB5C20C, ___m_task_0)); }
	inline Task_1_t9C1FE9F18F52F3409B9E970FA38801A443AE7849 * get_m_task_0() const { return ___m_task_0; }
	inline Task_1_t9C1FE9F18F52F3409B9E970FA38801A443AE7849 ** get_address_of_m_task_0() { return &___m_task_0; }
	inline void set_m_task_0(Task_1_t9C1FE9F18F52F3409B9E970FA38801A443AE7849 * value)
	{
		___m_task_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_task_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_continueOnCapturedContext_1() { return static_cast<int32_t>(offsetof(ConfiguredTaskAwaiter_t286C97C0AF102C4C0BE55CE2025CC7BD1FB5C20C, ___m_continueOnCapturedContext_1)); }
	inline bool get_m_continueOnCapturedContext_1() const { return ___m_continueOnCapturedContext_1; }
	inline bool* get_address_of_m_continueOnCapturedContext_1() { return &___m_continueOnCapturedContext_1; }
	inline void set_m_continueOnCapturedContext_1(bool value)
	{
		___m_continueOnCapturedContext_1 = value;
	}
};


// System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1_ConfiguredTaskAwaiter<System.Object>
struct  ConfiguredTaskAwaiter_t2CE498F9A6CE5405242AE2D77F03E58985B7C3ED 
{
public:
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1_ConfiguredTaskAwaiter::m_task
	Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 * ___m_task_0;
	// System.Boolean System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1_ConfiguredTaskAwaiter::m_continueOnCapturedContext
	bool ___m_continueOnCapturedContext_1;

public:
	inline static int32_t get_offset_of_m_task_0() { return static_cast<int32_t>(offsetof(ConfiguredTaskAwaiter_t2CE498F9A6CE5405242AE2D77F03E58985B7C3ED, ___m_task_0)); }
	inline Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 * get_m_task_0() const { return ___m_task_0; }
	inline Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 ** get_address_of_m_task_0() { return &___m_task_0; }
	inline void set_m_task_0(Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 * value)
	{
		___m_task_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_task_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_continueOnCapturedContext_1() { return static_cast<int32_t>(offsetof(ConfiguredTaskAwaiter_t2CE498F9A6CE5405242AE2D77F03E58985B7C3ED, ___m_continueOnCapturedContext_1)); }
	inline bool get_m_continueOnCapturedContext_1() const { return ___m_continueOnCapturedContext_1; }
	inline bool* get_address_of_m_continueOnCapturedContext_1() { return &___m_continueOnCapturedContext_1; }
	inline void set_m_continueOnCapturedContext_1(bool value)
	{
		___m_continueOnCapturedContext_1 = value;
	}
};


// System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1_ConfiguredTaskAwaiter<System.Threading.Tasks.Task>
struct  ConfiguredTaskAwaiter_tF64824CB5C3CFE2E1C4CAFE410B4CDE6831E4C78 
{
public:
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1_ConfiguredTaskAwaiter::m_task
	Task_1_t24E932728D4BE67BFA41487F43AE4FAEBBAC7284 * ___m_task_0;
	// System.Boolean System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1_ConfiguredTaskAwaiter::m_continueOnCapturedContext
	bool ___m_continueOnCapturedContext_1;

public:
	inline static int32_t get_offset_of_m_task_0() { return static_cast<int32_t>(offsetof(ConfiguredTaskAwaiter_tF64824CB5C3CFE2E1C4CAFE410B4CDE6831E4C78, ___m_task_0)); }
	inline Task_1_t24E932728D4BE67BFA41487F43AE4FAEBBAC7284 * get_m_task_0() const { return ___m_task_0; }
	inline Task_1_t24E932728D4BE67BFA41487F43AE4FAEBBAC7284 ** get_address_of_m_task_0() { return &___m_task_0; }
	inline void set_m_task_0(Task_1_t24E932728D4BE67BFA41487F43AE4FAEBBAC7284 * value)
	{
		___m_task_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_task_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_continueOnCapturedContext_1() { return static_cast<int32_t>(offsetof(ConfiguredTaskAwaiter_tF64824CB5C3CFE2E1C4CAFE410B4CDE6831E4C78, ___m_continueOnCapturedContext_1)); }
	inline bool get_m_continueOnCapturedContext_1() const { return ___m_continueOnCapturedContext_1; }
	inline bool* get_address_of_m_continueOnCapturedContext_1() { return &___m_continueOnCapturedContext_1; }
	inline void set_m_continueOnCapturedContext_1(bool value)
	{
		___m_continueOnCapturedContext_1 = value;
	}
};


// System.SByte
struct  SByte_t928712DD662DC29BA4FAAE8CE2230AFB23447F0B 
{
public:
	// System.SByte System.SByte::m_value
	int8_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(SByte_t928712DD662DC29BA4FAAE8CE2230AFB23447F0B, ___m_value_0)); }
	inline int8_t get_m_value_0() const { return ___m_value_0; }
	inline int8_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int8_t value)
	{
		___m_value_0 = value;
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


// System.Threading.CancellationToken
struct  CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD 
{
public:
	// System.Threading.CancellationTokenSource System.Threading.CancellationToken::m_source
	CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3 * ___m_source_0;

public:
	inline static int32_t get_offset_of_m_source_0() { return static_cast<int32_t>(offsetof(CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD, ___m_source_0)); }
	inline CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3 * get_m_source_0() const { return ___m_source_0; }
	inline CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3 ** get_address_of_m_source_0() { return &___m_source_0; }
	inline void set_m_source_0(CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3 * value)
	{
		___m_source_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_source_0), (void*)value);
	}
};

struct CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD_StaticFields
{
public:
	// System.Action`1<System.Object> System.Threading.CancellationToken::s_ActionToActionObjShunt
	Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * ___s_ActionToActionObjShunt_1;

public:
	inline static int32_t get_offset_of_s_ActionToActionObjShunt_1() { return static_cast<int32_t>(offsetof(CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD_StaticFields, ___s_ActionToActionObjShunt_1)); }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * get_s_ActionToActionObjShunt_1() const { return ___s_ActionToActionObjShunt_1; }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC ** get_address_of_s_ActionToActionObjShunt_1() { return &___s_ActionToActionObjShunt_1; }
	inline void set_s_ActionToActionObjShunt_1(Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * value)
	{
		___s_ActionToActionObjShunt_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_ActionToActionObjShunt_1), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Threading.CancellationToken
struct CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD_marshaled_pinvoke
{
	CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3 * ___m_source_0;
};
// Native definition for COM marshalling of System.Threading.CancellationToken
struct CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD_marshaled_com
{
	CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3 * ___m_source_0;
};

// System.Threading.ExecutionContext_Reader
struct  Reader_t6C70587C0F5A8CE8367A0407E3109E196764848C 
{
public:
	// System.Threading.ExecutionContext System.Threading.ExecutionContext_Reader::m_ec
	ExecutionContext_t16AC73BB21FEEEAD34A017877AC18DD8BB836414 * ___m_ec_0;

public:
	inline static int32_t get_offset_of_m_ec_0() { return static_cast<int32_t>(offsetof(Reader_t6C70587C0F5A8CE8367A0407E3109E196764848C, ___m_ec_0)); }
	inline ExecutionContext_t16AC73BB21FEEEAD34A017877AC18DD8BB836414 * get_m_ec_0() const { return ___m_ec_0; }
	inline ExecutionContext_t16AC73BB21FEEEAD34A017877AC18DD8BB836414 ** get_address_of_m_ec_0() { return &___m_ec_0; }
	inline void set_m_ec_0(ExecutionContext_t16AC73BB21FEEEAD34A017877AC18DD8BB836414 * value)
	{
		___m_ec_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ec_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Threading.ExecutionContext/Reader
struct Reader_t6C70587C0F5A8CE8367A0407E3109E196764848C_marshaled_pinvoke
{
	ExecutionContext_t16AC73BB21FEEEAD34A017877AC18DD8BB836414 * ___m_ec_0;
};
// Native definition for COM marshalling of System.Threading.ExecutionContext/Reader
struct Reader_t6C70587C0F5A8CE8367A0407E3109E196764848C_marshaled_com
{
	ExecutionContext_t16AC73BB21FEEEAD34A017877AC18DD8BB836414 * ___m_ec_0;
};

// System.UInt16
struct  UInt16_t894EA9D4FB7C799B244E7BBF2DF0EEEDBC77A8BD 
{
public:
	// System.UInt16 System.UInt16::m_value
	uint16_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(UInt16_t894EA9D4FB7C799B244E7BBF2DF0EEEDBC77A8BD, ___m_value_0)); }
	inline uint16_t get_m_value_0() const { return ___m_value_0; }
	inline uint16_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint16_t value)
	{
		___m_value_0 = value;
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


// System.UInt64
struct  UInt64_tEC57511B3E3CA2DBA1BEBD434C6983E31C943281 
{
public:
	// System.UInt64 System.UInt64::m_value
	uint64_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(UInt64_tEC57511B3E3CA2DBA1BEBD434C6983E31C943281, ___m_value_0)); }
	inline uint64_t get_m_value_0() const { return ___m_value_0; }
	inline uint64_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint64_t value)
	{
		___m_value_0 = value;
	}
};


// System.UIntPtr
struct  UIntPtr_t 
{
public:
	// System.Void* System.UIntPtr::_pointer
	void* ____pointer_1;

public:
	inline static int32_t get_offset_of__pointer_1() { return static_cast<int32_t>(offsetof(UIntPtr_t, ____pointer_1)); }
	inline void* get__pointer_1() const { return ____pointer_1; }
	inline void** get_address_of__pointer_1() { return &____pointer_1; }
	inline void set__pointer_1(void* value)
	{
		____pointer_1 = value;
	}
};

struct UIntPtr_t_StaticFields
{
public:
	// System.UIntPtr System.UIntPtr::Zero
	uintptr_t ___Zero_0;

public:
	inline static int32_t get_offset_of_Zero_0() { return static_cast<int32_t>(offsetof(UIntPtr_t_StaticFields, ___Zero_0)); }
	inline uintptr_t get_Zero_0() const { return ___Zero_0; }
	inline uintptr_t* get_address_of_Zero_0() { return &___Zero_0; }
	inline void set_Zero_0(uintptr_t value)
	{
		___Zero_0 = value;
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


// UnityEngine.Experimental.Rendering.Universal.LibTessDotNet.Vec3
struct  Vec3_tDD913B31171F6A37E61E4625FEA6C7901A6B1BC1 
{
public:
	// System.Single UnityEngine.Experimental.Rendering.Universal.LibTessDotNet.Vec3::X
	float ___X_1;
	// System.Single UnityEngine.Experimental.Rendering.Universal.LibTessDotNet.Vec3::Y
	float ___Y_2;
	// System.Single UnityEngine.Experimental.Rendering.Universal.LibTessDotNet.Vec3::Z
	float ___Z_3;

public:
	inline static int32_t get_offset_of_X_1() { return static_cast<int32_t>(offsetof(Vec3_tDD913B31171F6A37E61E4625FEA6C7901A6B1BC1, ___X_1)); }
	inline float get_X_1() const { return ___X_1; }
	inline float* get_address_of_X_1() { return &___X_1; }
	inline void set_X_1(float value)
	{
		___X_1 = value;
	}

	inline static int32_t get_offset_of_Y_2() { return static_cast<int32_t>(offsetof(Vec3_tDD913B31171F6A37E61E4625FEA6C7901A6B1BC1, ___Y_2)); }
	inline float get_Y_2() const { return ___Y_2; }
	inline float* get_address_of_Y_2() { return &___Y_2; }
	inline void set_Y_2(float value)
	{
		___Y_2 = value;
	}

	inline static int32_t get_offset_of_Z_3() { return static_cast<int32_t>(offsetof(Vec3_tDD913B31171F6A37E61E4625FEA6C7901A6B1BC1, ___Z_3)); }
	inline float get_Z_3() const { return ___Z_3; }
	inline float* get_address_of_Z_3() { return &___Z_3; }
	inline void set_Z_3(float value)
	{
		___Z_3 = value;
	}
};

struct Vec3_tDD913B31171F6A37E61E4625FEA6C7901A6B1BC1_StaticFields
{
public:
	// UnityEngine.Experimental.Rendering.Universal.LibTessDotNet.Vec3 UnityEngine.Experimental.Rendering.Universal.LibTessDotNet.Vec3::Zero
	Vec3_tDD913B31171F6A37E61E4625FEA6C7901A6B1BC1  ___Zero_0;

public:
	inline static int32_t get_offset_of_Zero_0() { return static_cast<int32_t>(offsetof(Vec3_tDD913B31171F6A37E61E4625FEA6C7901A6B1BC1_StaticFields, ___Zero_0)); }
	inline Vec3_tDD913B31171F6A37E61E4625FEA6C7901A6B1BC1  get_Zero_0() const { return ___Zero_0; }
	inline Vec3_tDD913B31171F6A37E61E4625FEA6C7901A6B1BC1 * get_address_of_Zero_0() { return &___Zero_0; }
	inline void set_Zero_0(Vec3_tDD913B31171F6A37E61E4625FEA6C7901A6B1BC1  value)
	{
		___Zero_0 = value;
	}
};


// System.DateTimeOffset
struct  DateTimeOffset_t205B59B1EFB6646DCE3CC50553377BF6023615B5 
{
public:
	// System.DateTime System.DateTimeOffset::m_dateTime
	DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  ___m_dateTime_2;
	// System.Int16 System.DateTimeOffset::m_offsetMinutes
	int16_t ___m_offsetMinutes_3;

public:
	inline static int32_t get_offset_of_m_dateTime_2() { return static_cast<int32_t>(offsetof(DateTimeOffset_t205B59B1EFB6646DCE3CC50553377BF6023615B5, ___m_dateTime_2)); }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  get_m_dateTime_2() const { return ___m_dateTime_2; }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 * get_address_of_m_dateTime_2() { return &___m_dateTime_2; }
	inline void set_m_dateTime_2(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  value)
	{
		___m_dateTime_2 = value;
	}

	inline static int32_t get_offset_of_m_offsetMinutes_3() { return static_cast<int32_t>(offsetof(DateTimeOffset_t205B59B1EFB6646DCE3CC50553377BF6023615B5, ___m_offsetMinutes_3)); }
	inline int16_t get_m_offsetMinutes_3() const { return ___m_offsetMinutes_3; }
	inline int16_t* get_address_of_m_offsetMinutes_3() { return &___m_offsetMinutes_3; }
	inline void set_m_offsetMinutes_3(int16_t value)
	{
		___m_offsetMinutes_3 = value;
	}
};

struct DateTimeOffset_t205B59B1EFB6646DCE3CC50553377BF6023615B5_StaticFields
{
public:
	// System.DateTimeOffset System.DateTimeOffset::MinValue
	DateTimeOffset_t205B59B1EFB6646DCE3CC50553377BF6023615B5  ___MinValue_0;
	// System.DateTimeOffset System.DateTimeOffset::MaxValue
	DateTimeOffset_t205B59B1EFB6646DCE3CC50553377BF6023615B5  ___MaxValue_1;

public:
	inline static int32_t get_offset_of_MinValue_0() { return static_cast<int32_t>(offsetof(DateTimeOffset_t205B59B1EFB6646DCE3CC50553377BF6023615B5_StaticFields, ___MinValue_0)); }
	inline DateTimeOffset_t205B59B1EFB6646DCE3CC50553377BF6023615B5  get_MinValue_0() const { return ___MinValue_0; }
	inline DateTimeOffset_t205B59B1EFB6646DCE3CC50553377BF6023615B5 * get_address_of_MinValue_0() { return &___MinValue_0; }
	inline void set_MinValue_0(DateTimeOffset_t205B59B1EFB6646DCE3CC50553377BF6023615B5  value)
	{
		___MinValue_0 = value;
	}

	inline static int32_t get_offset_of_MaxValue_1() { return static_cast<int32_t>(offsetof(DateTimeOffset_t205B59B1EFB6646DCE3CC50553377BF6023615B5_StaticFields, ___MaxValue_1)); }
	inline DateTimeOffset_t205B59B1EFB6646DCE3CC50553377BF6023615B5  get_MaxValue_1() const { return ___MaxValue_1; }
	inline DateTimeOffset_t205B59B1EFB6646DCE3CC50553377BF6023615B5 * get_address_of_MaxValue_1() { return &___MaxValue_1; }
	inline void set_MaxValue_1(DateTimeOffset_t205B59B1EFB6646DCE3CC50553377BF6023615B5  value)
	{
		___MaxValue_1 = value;
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

// System.Linq.Enumerable_WhereListIterator`1<System.Object>
struct  WhereListIterator_1_t42618389DB998070E03A982D15FA39BCA1DB56BD  : public Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279
{
public:
	// System.Collections.Generic.List`1<TSource> System.Linq.Enumerable_WhereListIterator`1::source
	List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * ___source_3;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable_WhereListIterator`1::predicate
	Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * ___predicate_4;
	// System.Collections.Generic.List`1_Enumerator<TSource> System.Linq.Enumerable_WhereListIterator`1::enumerator
	Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6  ___enumerator_5;

public:
	inline static int32_t get_offset_of_source_3() { return static_cast<int32_t>(offsetof(WhereListIterator_1_t42618389DB998070E03A982D15FA39BCA1DB56BD, ___source_3)); }
	inline List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * get_source_3() const { return ___source_3; }
	inline List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 ** get_address_of_source_3() { return &___source_3; }
	inline void set_source_3(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * value)
	{
		___source_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___source_3), (void*)value);
	}

	inline static int32_t get_offset_of_predicate_4() { return static_cast<int32_t>(offsetof(WhereListIterator_1_t42618389DB998070E03A982D15FA39BCA1DB56BD, ___predicate_4)); }
	inline Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * get_predicate_4() const { return ___predicate_4; }
	inline Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 ** get_address_of_predicate_4() { return &___predicate_4; }
	inline void set_predicate_4(Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * value)
	{
		___predicate_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___predicate_4), (void*)value);
	}

	inline static int32_t get_offset_of_enumerator_5() { return static_cast<int32_t>(offsetof(WhereListIterator_1_t42618389DB998070E03A982D15FA39BCA1DB56BD, ___enumerator_5)); }
	inline Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6  get_enumerator_5() const { return ___enumerator_5; }
	inline Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * get_address_of_enumerator_5() { return &___enumerator_5; }
	inline void set_enumerator_5(Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6  value)
	{
		___enumerator_5 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___enumerator_5))->___list_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___enumerator_5))->___current_3), (void*)NULL);
		#endif
	}
};


// System.Linq.Enumerable_WhereSelectListIterator`2<System.Int32,System.Int32>
struct  WhereSelectListIterator_2_t4CC3FE3A35610DC6F761EE7DB863B845957AD325  : public Iterator_1_tCFFC952B03DBE4E956DE317DB9704D936AEA2379
{
public:
	// System.Collections.Generic.List`1<TSource> System.Linq.Enumerable_WhereSelectListIterator`2::source
	List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * ___source_3;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable_WhereSelectListIterator`2::predicate
	Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 * ___predicate_4;
	// System.Func`2<TSource,TResult> System.Linq.Enumerable_WhereSelectListIterator`2::selector
	Func_2_tFF6AE79EFD0857556AD37A1A1594C43F76012FEA * ___selector_5;
	// System.Collections.Generic.List`1_Enumerator<TSource> System.Linq.Enumerable_WhereSelectListIterator`2::enumerator
	Enumerator_t7BA00929E14A2F2A62CE085585044A3FEB2C5F3C  ___enumerator_6;

public:
	inline static int32_t get_offset_of_source_3() { return static_cast<int32_t>(offsetof(WhereSelectListIterator_2_t4CC3FE3A35610DC6F761EE7DB863B845957AD325, ___source_3)); }
	inline List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * get_source_3() const { return ___source_3; }
	inline List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 ** get_address_of_source_3() { return &___source_3; }
	inline void set_source_3(List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * value)
	{
		___source_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___source_3), (void*)value);
	}

	inline static int32_t get_offset_of_predicate_4() { return static_cast<int32_t>(offsetof(WhereSelectListIterator_2_t4CC3FE3A35610DC6F761EE7DB863B845957AD325, ___predicate_4)); }
	inline Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 * get_predicate_4() const { return ___predicate_4; }
	inline Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 ** get_address_of_predicate_4() { return &___predicate_4; }
	inline void set_predicate_4(Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 * value)
	{
		___predicate_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___predicate_4), (void*)value);
	}

	inline static int32_t get_offset_of_selector_5() { return static_cast<int32_t>(offsetof(WhereSelectListIterator_2_t4CC3FE3A35610DC6F761EE7DB863B845957AD325, ___selector_5)); }
	inline Func_2_tFF6AE79EFD0857556AD37A1A1594C43F76012FEA * get_selector_5() const { return ___selector_5; }
	inline Func_2_tFF6AE79EFD0857556AD37A1A1594C43F76012FEA ** get_address_of_selector_5() { return &___selector_5; }
	inline void set_selector_5(Func_2_tFF6AE79EFD0857556AD37A1A1594C43F76012FEA * value)
	{
		___selector_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___selector_5), (void*)value);
	}

	inline static int32_t get_offset_of_enumerator_6() { return static_cast<int32_t>(offsetof(WhereSelectListIterator_2_t4CC3FE3A35610DC6F761EE7DB863B845957AD325, ___enumerator_6)); }
	inline Enumerator_t7BA00929E14A2F2A62CE085585044A3FEB2C5F3C  get_enumerator_6() const { return ___enumerator_6; }
	inline Enumerator_t7BA00929E14A2F2A62CE085585044A3FEB2C5F3C * get_address_of_enumerator_6() { return &___enumerator_6; }
	inline void set_enumerator_6(Enumerator_t7BA00929E14A2F2A62CE085585044A3FEB2C5F3C  value)
	{
		___enumerator_6 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___enumerator_6))->___list_0), (void*)NULL);
	}
};


// System.Linq.Enumerable_WhereSelectListIterator`2<System.Object,System.Object>
struct  WhereSelectListIterator_2_t85B78DFF0573BC95A62C79D6088FA39DFEBE1AF2  : public Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279
{
public:
	// System.Collections.Generic.List`1<TSource> System.Linq.Enumerable_WhereSelectListIterator`2::source
	List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * ___source_3;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable_WhereSelectListIterator`2::predicate
	Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * ___predicate_4;
	// System.Func`2<TSource,TResult> System.Linq.Enumerable_WhereSelectListIterator`2::selector
	Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 * ___selector_5;
	// System.Collections.Generic.List`1_Enumerator<TSource> System.Linq.Enumerable_WhereSelectListIterator`2::enumerator
	Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6  ___enumerator_6;

public:
	inline static int32_t get_offset_of_source_3() { return static_cast<int32_t>(offsetof(WhereSelectListIterator_2_t85B78DFF0573BC95A62C79D6088FA39DFEBE1AF2, ___source_3)); }
	inline List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * get_source_3() const { return ___source_3; }
	inline List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 ** get_address_of_source_3() { return &___source_3; }
	inline void set_source_3(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * value)
	{
		___source_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___source_3), (void*)value);
	}

	inline static int32_t get_offset_of_predicate_4() { return static_cast<int32_t>(offsetof(WhereSelectListIterator_2_t85B78DFF0573BC95A62C79D6088FA39DFEBE1AF2, ___predicate_4)); }
	inline Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * get_predicate_4() const { return ___predicate_4; }
	inline Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 ** get_address_of_predicate_4() { return &___predicate_4; }
	inline void set_predicate_4(Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * value)
	{
		___predicate_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___predicate_4), (void*)value);
	}

	inline static int32_t get_offset_of_selector_5() { return static_cast<int32_t>(offsetof(WhereSelectListIterator_2_t85B78DFF0573BC95A62C79D6088FA39DFEBE1AF2, ___selector_5)); }
	inline Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 * get_selector_5() const { return ___selector_5; }
	inline Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 ** get_address_of_selector_5() { return &___selector_5; }
	inline void set_selector_5(Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 * value)
	{
		___selector_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___selector_5), (void*)value);
	}

	inline static int32_t get_offset_of_enumerator_6() { return static_cast<int32_t>(offsetof(WhereSelectListIterator_2_t85B78DFF0573BC95A62C79D6088FA39DFEBE1AF2, ___enumerator_6)); }
	inline Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6  get_enumerator_6() const { return ___enumerator_6; }
	inline Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * get_address_of_enumerator_6() { return &___enumerator_6; }
	inline void set_enumerator_6(Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6  value)
	{
		___enumerator_6 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___enumerator_6))->___list_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___enumerator_6))->___current_3), (void*)NULL);
		#endif
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


// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Boolean>
struct  AsyncTaskMethodBuilder_1_tABE1DEF12F121D6FC8ABF04869ED964FF83EA9B5 
{
public:
	// System.Runtime.CompilerServices.AsyncMethodBuilderCore System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::m_coreState
	AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34  ___m_coreState_1;
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::m_task
	Task_1_t9C1FE9F18F52F3409B9E970FA38801A443AE7849 * ___m_task_2;

public:
	inline static int32_t get_offset_of_m_coreState_1() { return static_cast<int32_t>(offsetof(AsyncTaskMethodBuilder_1_tABE1DEF12F121D6FC8ABF04869ED964FF83EA9B5, ___m_coreState_1)); }
	inline AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34  get_m_coreState_1() const { return ___m_coreState_1; }
	inline AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34 * get_address_of_m_coreState_1() { return &___m_coreState_1; }
	inline void set_m_coreState_1(AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34  value)
	{
		___m_coreState_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_coreState_1))->___m_stateMachine_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_coreState_1))->___m_defaultContextAction_1), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_task_2() { return static_cast<int32_t>(offsetof(AsyncTaskMethodBuilder_1_tABE1DEF12F121D6FC8ABF04869ED964FF83EA9B5, ___m_task_2)); }
	inline Task_1_t9C1FE9F18F52F3409B9E970FA38801A443AE7849 * get_m_task_2() const { return ___m_task_2; }
	inline Task_1_t9C1FE9F18F52F3409B9E970FA38801A443AE7849 ** get_address_of_m_task_2() { return &___m_task_2; }
	inline void set_m_task_2(Task_1_t9C1FE9F18F52F3409B9E970FA38801A443AE7849 * value)
	{
		___m_task_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_task_2), (void*)value);
	}
};

struct AsyncTaskMethodBuilder_1_tABE1DEF12F121D6FC8ABF04869ED964FF83EA9B5_StaticFields
{
public:
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::s_defaultResultTask
	Task_1_t9C1FE9F18F52F3409B9E970FA38801A443AE7849 * ___s_defaultResultTask_0;

public:
	inline static int32_t get_offset_of_s_defaultResultTask_0() { return static_cast<int32_t>(offsetof(AsyncTaskMethodBuilder_1_tABE1DEF12F121D6FC8ABF04869ED964FF83EA9B5_StaticFields, ___s_defaultResultTask_0)); }
	inline Task_1_t9C1FE9F18F52F3409B9E970FA38801A443AE7849 * get_s_defaultResultTask_0() const { return ___s_defaultResultTask_0; }
	inline Task_1_t9C1FE9F18F52F3409B9E970FA38801A443AE7849 ** get_address_of_s_defaultResultTask_0() { return &___s_defaultResultTask_0; }
	inline void set_s_defaultResultTask_0(Task_1_t9C1FE9F18F52F3409B9E970FA38801A443AE7849 * value)
	{
		___s_defaultResultTask_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_defaultResultTask_0), (void*)value);
	}
};


// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Object>
struct  AsyncTaskMethodBuilder_1_tDD2A3BA099C327938EA03C35FDB1A7502BA73020 
{
public:
	// System.Runtime.CompilerServices.AsyncMethodBuilderCore System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::m_coreState
	AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34  ___m_coreState_1;
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::m_task
	Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 * ___m_task_2;

public:
	inline static int32_t get_offset_of_m_coreState_1() { return static_cast<int32_t>(offsetof(AsyncTaskMethodBuilder_1_tDD2A3BA099C327938EA03C35FDB1A7502BA73020, ___m_coreState_1)); }
	inline AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34  get_m_coreState_1() const { return ___m_coreState_1; }
	inline AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34 * get_address_of_m_coreState_1() { return &___m_coreState_1; }
	inline void set_m_coreState_1(AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34  value)
	{
		___m_coreState_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_coreState_1))->___m_stateMachine_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_coreState_1))->___m_defaultContextAction_1), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_task_2() { return static_cast<int32_t>(offsetof(AsyncTaskMethodBuilder_1_tDD2A3BA099C327938EA03C35FDB1A7502BA73020, ___m_task_2)); }
	inline Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 * get_m_task_2() const { return ___m_task_2; }
	inline Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 ** get_address_of_m_task_2() { return &___m_task_2; }
	inline void set_m_task_2(Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 * value)
	{
		___m_task_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_task_2), (void*)value);
	}
};

struct AsyncTaskMethodBuilder_1_tDD2A3BA099C327938EA03C35FDB1A7502BA73020_StaticFields
{
public:
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::s_defaultResultTask
	Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 * ___s_defaultResultTask_0;

public:
	inline static int32_t get_offset_of_s_defaultResultTask_0() { return static_cast<int32_t>(offsetof(AsyncTaskMethodBuilder_1_tDD2A3BA099C327938EA03C35FDB1A7502BA73020_StaticFields, ___s_defaultResultTask_0)); }
	inline Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 * get_s_defaultResultTask_0() const { return ___s_defaultResultTask_0; }
	inline Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 ** get_address_of_s_defaultResultTask_0() { return &___s_defaultResultTask_0; }
	inline void set_s_defaultResultTask_0(Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 * value)
	{
		___s_defaultResultTask_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_defaultResultTask_0), (void*)value);
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


// System.Threading.ExecutionContextSwitcher
struct  ExecutionContextSwitcher_t11B7DEE83408478EE3D5E29C988E5385AA9D7277 
{
public:
	// System.Threading.ExecutionContext_Reader System.Threading.ExecutionContextSwitcher::outerEC
	Reader_t6C70587C0F5A8CE8367A0407E3109E196764848C  ___outerEC_0;
	// System.Boolean System.Threading.ExecutionContextSwitcher::outerECBelongsToScope
	bool ___outerECBelongsToScope_1;
	// System.Object System.Threading.ExecutionContextSwitcher::hecsw
	RuntimeObject * ___hecsw_2;
	// System.Threading.Thread System.Threading.ExecutionContextSwitcher::thread
	Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414 * ___thread_3;

public:
	inline static int32_t get_offset_of_outerEC_0() { return static_cast<int32_t>(offsetof(ExecutionContextSwitcher_t11B7DEE83408478EE3D5E29C988E5385AA9D7277, ___outerEC_0)); }
	inline Reader_t6C70587C0F5A8CE8367A0407E3109E196764848C  get_outerEC_0() const { return ___outerEC_0; }
	inline Reader_t6C70587C0F5A8CE8367A0407E3109E196764848C * get_address_of_outerEC_0() { return &___outerEC_0; }
	inline void set_outerEC_0(Reader_t6C70587C0F5A8CE8367A0407E3109E196764848C  value)
	{
		___outerEC_0 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___outerEC_0))->___m_ec_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_outerECBelongsToScope_1() { return static_cast<int32_t>(offsetof(ExecutionContextSwitcher_t11B7DEE83408478EE3D5E29C988E5385AA9D7277, ___outerECBelongsToScope_1)); }
	inline bool get_outerECBelongsToScope_1() const { return ___outerECBelongsToScope_1; }
	inline bool* get_address_of_outerECBelongsToScope_1() { return &___outerECBelongsToScope_1; }
	inline void set_outerECBelongsToScope_1(bool value)
	{
		___outerECBelongsToScope_1 = value;
	}

	inline static int32_t get_offset_of_hecsw_2() { return static_cast<int32_t>(offsetof(ExecutionContextSwitcher_t11B7DEE83408478EE3D5E29C988E5385AA9D7277, ___hecsw_2)); }
	inline RuntimeObject * get_hecsw_2() const { return ___hecsw_2; }
	inline RuntimeObject ** get_address_of_hecsw_2() { return &___hecsw_2; }
	inline void set_hecsw_2(RuntimeObject * value)
	{
		___hecsw_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___hecsw_2), (void*)value);
	}

	inline static int32_t get_offset_of_thread_3() { return static_cast<int32_t>(offsetof(ExecutionContextSwitcher_t11B7DEE83408478EE3D5E29C988E5385AA9D7277, ___thread_3)); }
	inline Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414 * get_thread_3() const { return ___thread_3; }
	inline Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414 ** get_address_of_thread_3() { return &___thread_3; }
	inline void set_thread_3(Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414 * value)
	{
		___thread_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___thread_3), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Threading.ExecutionContextSwitcher
struct ExecutionContextSwitcher_t11B7DEE83408478EE3D5E29C988E5385AA9D7277_marshaled_pinvoke
{
	Reader_t6C70587C0F5A8CE8367A0407E3109E196764848C_marshaled_pinvoke ___outerEC_0;
	int32_t ___outerECBelongsToScope_1;
	Il2CppIUnknown* ___hecsw_2;
	Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414 * ___thread_3;
};
// Native definition for COM marshalling of System.Threading.ExecutionContextSwitcher
struct ExecutionContextSwitcher_t11B7DEE83408478EE3D5E29C988E5385AA9D7277_marshaled_com
{
	Reader_t6C70587C0F5A8CE8367A0407E3109E196764848C_marshaled_com ___outerEC_0;
	int32_t ___outerECBelongsToScope_1;
	Il2CppIUnknown* ___hecsw_2;
	Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414 * ___thread_3;
};

// System.Threading.Tasks.Task
struct  Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60  : public RuntimeObject
{
public:
	// System.Int32 modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_taskId
	int32_t ___m_taskId_4;
	// System.Object System.Threading.Tasks.Task::m_action
	RuntimeObject * ___m_action_5;
	// System.Object System.Threading.Tasks.Task::m_stateObject
	RuntimeObject * ___m_stateObject_6;
	// System.Threading.Tasks.TaskScheduler System.Threading.Tasks.Task::m_taskScheduler
	TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D * ___m_taskScheduler_7;
	// System.Threading.Tasks.Task System.Threading.Tasks.Task::m_parent
	Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * ___m_parent_8;
	// System.Int32 modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_stateFlags
	int32_t ___m_stateFlags_9;
	// System.Object modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_continuationObject
	RuntimeObject * ___m_continuationObject_10;
	// System.Threading.Tasks.Task_ContingentProperties modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_contingentProperties
	ContingentProperties_t1E249C737B8B8644ED1D60EEFA101D326B199EA0 * ___m_contingentProperties_15;

public:
	inline static int32_t get_offset_of_m_taskId_4() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60, ___m_taskId_4)); }
	inline int32_t get_m_taskId_4() const { return ___m_taskId_4; }
	inline int32_t* get_address_of_m_taskId_4() { return &___m_taskId_4; }
	inline void set_m_taskId_4(int32_t value)
	{
		___m_taskId_4 = value;
	}

	inline static int32_t get_offset_of_m_action_5() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60, ___m_action_5)); }
	inline RuntimeObject * get_m_action_5() const { return ___m_action_5; }
	inline RuntimeObject ** get_address_of_m_action_5() { return &___m_action_5; }
	inline void set_m_action_5(RuntimeObject * value)
	{
		___m_action_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_action_5), (void*)value);
	}

	inline static int32_t get_offset_of_m_stateObject_6() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60, ___m_stateObject_6)); }
	inline RuntimeObject * get_m_stateObject_6() const { return ___m_stateObject_6; }
	inline RuntimeObject ** get_address_of_m_stateObject_6() { return &___m_stateObject_6; }
	inline void set_m_stateObject_6(RuntimeObject * value)
	{
		___m_stateObject_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_stateObject_6), (void*)value);
	}

	inline static int32_t get_offset_of_m_taskScheduler_7() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60, ___m_taskScheduler_7)); }
	inline TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D * get_m_taskScheduler_7() const { return ___m_taskScheduler_7; }
	inline TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D ** get_address_of_m_taskScheduler_7() { return &___m_taskScheduler_7; }
	inline void set_m_taskScheduler_7(TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D * value)
	{
		___m_taskScheduler_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_taskScheduler_7), (void*)value);
	}

	inline static int32_t get_offset_of_m_parent_8() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60, ___m_parent_8)); }
	inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * get_m_parent_8() const { return ___m_parent_8; }
	inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 ** get_address_of_m_parent_8() { return &___m_parent_8; }
	inline void set_m_parent_8(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * value)
	{
		___m_parent_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_parent_8), (void*)value);
	}

	inline static int32_t get_offset_of_m_stateFlags_9() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60, ___m_stateFlags_9)); }
	inline int32_t get_m_stateFlags_9() const { return ___m_stateFlags_9; }
	inline int32_t* get_address_of_m_stateFlags_9() { return &___m_stateFlags_9; }
	inline void set_m_stateFlags_9(int32_t value)
	{
		___m_stateFlags_9 = value;
	}

	inline static int32_t get_offset_of_m_continuationObject_10() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60, ___m_continuationObject_10)); }
	inline RuntimeObject * get_m_continuationObject_10() const { return ___m_continuationObject_10; }
	inline RuntimeObject ** get_address_of_m_continuationObject_10() { return &___m_continuationObject_10; }
	inline void set_m_continuationObject_10(RuntimeObject * value)
	{
		___m_continuationObject_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_continuationObject_10), (void*)value);
	}

	inline static int32_t get_offset_of_m_contingentProperties_15() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60, ___m_contingentProperties_15)); }
	inline ContingentProperties_t1E249C737B8B8644ED1D60EEFA101D326B199EA0 * get_m_contingentProperties_15() const { return ___m_contingentProperties_15; }
	inline ContingentProperties_t1E249C737B8B8644ED1D60EEFA101D326B199EA0 ** get_address_of_m_contingentProperties_15() { return &___m_contingentProperties_15; }
	inline void set_m_contingentProperties_15(ContingentProperties_t1E249C737B8B8644ED1D60EEFA101D326B199EA0 * value)
	{
		___m_contingentProperties_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_contingentProperties_15), (void*)value);
	}
};

struct Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields
{
public:
	// System.Int32 System.Threading.Tasks.Task::s_taskIdCounter
	int32_t ___s_taskIdCounter_2;
	// System.Threading.Tasks.TaskFactory System.Threading.Tasks.Task::s_factory
	TaskFactory_t22D999A05A967C31A4B5FFBD08864809BF35EA3B * ___s_factory_3;
	// System.Object System.Threading.Tasks.Task::s_taskCompletionSentinel
	RuntimeObject * ___s_taskCompletionSentinel_11;
	// System.Boolean System.Threading.Tasks.Task::s_asyncDebuggingEnabled
	bool ___s_asyncDebuggingEnabled_12;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Threading.Tasks.Task> System.Threading.Tasks.Task::s_currentActiveTasks
	Dictionary_2_tB758E2A2593CD827EFC041BE1F1BB4B68DE1C3E8 * ___s_currentActiveTasks_13;
	// System.Object System.Threading.Tasks.Task::s_activeTasksLock
	RuntimeObject * ___s_activeTasksLock_14;
	// System.Action`1<System.Object> System.Threading.Tasks.Task::s_taskCancelCallback
	Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * ___s_taskCancelCallback_16;
	// System.Func`1<System.Threading.Tasks.Task_ContingentProperties> System.Threading.Tasks.Task::s_createContingentProperties
	Func_1_tBCF42601FA307876E83080BE4204110820F8BF3B * ___s_createContingentProperties_17;
	// System.Threading.Tasks.Task System.Threading.Tasks.Task::s_completedTask
	Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * ___s_completedTask_18;
	// System.Predicate`1<System.Threading.Tasks.Task> System.Threading.Tasks.Task::s_IsExceptionObservedByParentPredicate
	Predicate_1_tC0DBBC8498BD1EE6ABFFAA5628024105FA7D11BD * ___s_IsExceptionObservedByParentPredicate_19;
	// System.Threading.ContextCallback System.Threading.Tasks.Task::s_ecCallback
	ContextCallback_t93707E0430F4FF3E15E1FB5A4844BE89C657AE8B * ___s_ecCallback_20;
	// System.Predicate`1<System.Object> System.Threading.Tasks.Task::s_IsTaskContinuationNullPredicate
	Predicate_1_t5C96B81B31A697B11C4C3767E3298773AF25DFEB * ___s_IsTaskContinuationNullPredicate_21;

public:
	inline static int32_t get_offset_of_s_taskIdCounter_2() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_taskIdCounter_2)); }
	inline int32_t get_s_taskIdCounter_2() const { return ___s_taskIdCounter_2; }
	inline int32_t* get_address_of_s_taskIdCounter_2() { return &___s_taskIdCounter_2; }
	inline void set_s_taskIdCounter_2(int32_t value)
	{
		___s_taskIdCounter_2 = value;
	}

	inline static int32_t get_offset_of_s_factory_3() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_factory_3)); }
	inline TaskFactory_t22D999A05A967C31A4B5FFBD08864809BF35EA3B * get_s_factory_3() const { return ___s_factory_3; }
	inline TaskFactory_t22D999A05A967C31A4B5FFBD08864809BF35EA3B ** get_address_of_s_factory_3() { return &___s_factory_3; }
	inline void set_s_factory_3(TaskFactory_t22D999A05A967C31A4B5FFBD08864809BF35EA3B * value)
	{
		___s_factory_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_factory_3), (void*)value);
	}

	inline static int32_t get_offset_of_s_taskCompletionSentinel_11() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_taskCompletionSentinel_11)); }
	inline RuntimeObject * get_s_taskCompletionSentinel_11() const { return ___s_taskCompletionSentinel_11; }
	inline RuntimeObject ** get_address_of_s_taskCompletionSentinel_11() { return &___s_taskCompletionSentinel_11; }
	inline void set_s_taskCompletionSentinel_11(RuntimeObject * value)
	{
		___s_taskCompletionSentinel_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_taskCompletionSentinel_11), (void*)value);
	}

	inline static int32_t get_offset_of_s_asyncDebuggingEnabled_12() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_asyncDebuggingEnabled_12)); }
	inline bool get_s_asyncDebuggingEnabled_12() const { return ___s_asyncDebuggingEnabled_12; }
	inline bool* get_address_of_s_asyncDebuggingEnabled_12() { return &___s_asyncDebuggingEnabled_12; }
	inline void set_s_asyncDebuggingEnabled_12(bool value)
	{
		___s_asyncDebuggingEnabled_12 = value;
	}

	inline static int32_t get_offset_of_s_currentActiveTasks_13() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_currentActiveTasks_13)); }
	inline Dictionary_2_tB758E2A2593CD827EFC041BE1F1BB4B68DE1C3E8 * get_s_currentActiveTasks_13() const { return ___s_currentActiveTasks_13; }
	inline Dictionary_2_tB758E2A2593CD827EFC041BE1F1BB4B68DE1C3E8 ** get_address_of_s_currentActiveTasks_13() { return &___s_currentActiveTasks_13; }
	inline void set_s_currentActiveTasks_13(Dictionary_2_tB758E2A2593CD827EFC041BE1F1BB4B68DE1C3E8 * value)
	{
		___s_currentActiveTasks_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_currentActiveTasks_13), (void*)value);
	}

	inline static int32_t get_offset_of_s_activeTasksLock_14() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_activeTasksLock_14)); }
	inline RuntimeObject * get_s_activeTasksLock_14() const { return ___s_activeTasksLock_14; }
	inline RuntimeObject ** get_address_of_s_activeTasksLock_14() { return &___s_activeTasksLock_14; }
	inline void set_s_activeTasksLock_14(RuntimeObject * value)
	{
		___s_activeTasksLock_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_activeTasksLock_14), (void*)value);
	}

	inline static int32_t get_offset_of_s_taskCancelCallback_16() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_taskCancelCallback_16)); }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * get_s_taskCancelCallback_16() const { return ___s_taskCancelCallback_16; }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC ** get_address_of_s_taskCancelCallback_16() { return &___s_taskCancelCallback_16; }
	inline void set_s_taskCancelCallback_16(Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * value)
	{
		___s_taskCancelCallback_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_taskCancelCallback_16), (void*)value);
	}

	inline static int32_t get_offset_of_s_createContingentProperties_17() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_createContingentProperties_17)); }
	inline Func_1_tBCF42601FA307876E83080BE4204110820F8BF3B * get_s_createContingentProperties_17() const { return ___s_createContingentProperties_17; }
	inline Func_1_tBCF42601FA307876E83080BE4204110820F8BF3B ** get_address_of_s_createContingentProperties_17() { return &___s_createContingentProperties_17; }
	inline void set_s_createContingentProperties_17(Func_1_tBCF42601FA307876E83080BE4204110820F8BF3B * value)
	{
		___s_createContingentProperties_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_createContingentProperties_17), (void*)value);
	}

	inline static int32_t get_offset_of_s_completedTask_18() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_completedTask_18)); }
	inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * get_s_completedTask_18() const { return ___s_completedTask_18; }
	inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 ** get_address_of_s_completedTask_18() { return &___s_completedTask_18; }
	inline void set_s_completedTask_18(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * value)
	{
		___s_completedTask_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_completedTask_18), (void*)value);
	}

	inline static int32_t get_offset_of_s_IsExceptionObservedByParentPredicate_19() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_IsExceptionObservedByParentPredicate_19)); }
	inline Predicate_1_tC0DBBC8498BD1EE6ABFFAA5628024105FA7D11BD * get_s_IsExceptionObservedByParentPredicate_19() const { return ___s_IsExceptionObservedByParentPredicate_19; }
	inline Predicate_1_tC0DBBC8498BD1EE6ABFFAA5628024105FA7D11BD ** get_address_of_s_IsExceptionObservedByParentPredicate_19() { return &___s_IsExceptionObservedByParentPredicate_19; }
	inline void set_s_IsExceptionObservedByParentPredicate_19(Predicate_1_tC0DBBC8498BD1EE6ABFFAA5628024105FA7D11BD * value)
	{
		___s_IsExceptionObservedByParentPredicate_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_IsExceptionObservedByParentPredicate_19), (void*)value);
	}

	inline static int32_t get_offset_of_s_ecCallback_20() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_ecCallback_20)); }
	inline ContextCallback_t93707E0430F4FF3E15E1FB5A4844BE89C657AE8B * get_s_ecCallback_20() const { return ___s_ecCallback_20; }
	inline ContextCallback_t93707E0430F4FF3E15E1FB5A4844BE89C657AE8B ** get_address_of_s_ecCallback_20() { return &___s_ecCallback_20; }
	inline void set_s_ecCallback_20(ContextCallback_t93707E0430F4FF3E15E1FB5A4844BE89C657AE8B * value)
	{
		___s_ecCallback_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_ecCallback_20), (void*)value);
	}

	inline static int32_t get_offset_of_s_IsTaskContinuationNullPredicate_21() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_IsTaskContinuationNullPredicate_21)); }
	inline Predicate_1_t5C96B81B31A697B11C4C3767E3298773AF25DFEB * get_s_IsTaskContinuationNullPredicate_21() const { return ___s_IsTaskContinuationNullPredicate_21; }
	inline Predicate_1_t5C96B81B31A697B11C4C3767E3298773AF25DFEB ** get_address_of_s_IsTaskContinuationNullPredicate_21() { return &___s_IsTaskContinuationNullPredicate_21; }
	inline void set_s_IsTaskContinuationNullPredicate_21(Predicate_1_t5C96B81B31A697B11C4C3767E3298773AF25DFEB * value)
	{
		___s_IsTaskContinuationNullPredicate_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_IsTaskContinuationNullPredicate_21), (void*)value);
	}
};

struct Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_ThreadStaticFields
{
public:
	// System.Threading.Tasks.Task System.Threading.Tasks.Task::t_currentTask
	Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * ___t_currentTask_0;
	// System.Threading.Tasks.StackGuard System.Threading.Tasks.Task::t_stackGuard
	StackGuard_t88E1EE4741AD02CA5FEA04A4EB2CC70F230E0E6D * ___t_stackGuard_1;

public:
	inline static int32_t get_offset_of_t_currentTask_0() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_ThreadStaticFields, ___t_currentTask_0)); }
	inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * get_t_currentTask_0() const { return ___t_currentTask_0; }
	inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 ** get_address_of_t_currentTask_0() { return &___t_currentTask_0; }
	inline void set_t_currentTask_0(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * value)
	{
		___t_currentTask_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___t_currentTask_0), (void*)value);
	}

	inline static int32_t get_offset_of_t_stackGuard_1() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_ThreadStaticFields, ___t_stackGuard_1)); }
	inline StackGuard_t88E1EE4741AD02CA5FEA04A4EB2CC70F230E0E6D * get_t_stackGuard_1() const { return ___t_stackGuard_1; }
	inline StackGuard_t88E1EE4741AD02CA5FEA04A4EB2CC70F230E0E6D ** get_address_of_t_stackGuard_1() { return &___t_stackGuard_1; }
	inline void set_t_stackGuard_1(StackGuard_t88E1EE4741AD02CA5FEA04A4EB2CC70F230E0E6D * value)
	{
		___t_stackGuard_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___t_stackGuard_1), (void*)value);
	}
};


// System.TimeSpan
struct  TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 
{
public:
	// System.Int64 System.TimeSpan::_ticks
	int64_t ____ticks_3;

public:
	inline static int32_t get_offset_of__ticks_3() { return static_cast<int32_t>(offsetof(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203, ____ticks_3)); }
	inline int64_t get__ticks_3() const { return ____ticks_3; }
	inline int64_t* get_address_of__ticks_3() { return &____ticks_3; }
	inline void set__ticks_3(int64_t value)
	{
		____ticks_3 = value;
	}
};

struct TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203_StaticFields
{
public:
	// System.TimeSpan System.TimeSpan::Zero
	TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  ___Zero_0;
	// System.TimeSpan System.TimeSpan::MaxValue
	TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  ___MaxValue_1;
	// System.TimeSpan System.TimeSpan::MinValue
	TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  ___MinValue_2;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.TimeSpan::_legacyConfigChecked
	bool ____legacyConfigChecked_4;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.TimeSpan::_legacyMode
	bool ____legacyMode_5;

public:
	inline static int32_t get_offset_of_Zero_0() { return static_cast<int32_t>(offsetof(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203_StaticFields, ___Zero_0)); }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  get_Zero_0() const { return ___Zero_0; }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 * get_address_of_Zero_0() { return &___Zero_0; }
	inline void set_Zero_0(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  value)
	{
		___Zero_0 = value;
	}

	inline static int32_t get_offset_of_MaxValue_1() { return static_cast<int32_t>(offsetof(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203_StaticFields, ___MaxValue_1)); }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  get_MaxValue_1() const { return ___MaxValue_1; }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 * get_address_of_MaxValue_1() { return &___MaxValue_1; }
	inline void set_MaxValue_1(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  value)
	{
		___MaxValue_1 = value;
	}

	inline static int32_t get_offset_of_MinValue_2() { return static_cast<int32_t>(offsetof(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203_StaticFields, ___MinValue_2)); }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  get_MinValue_2() const { return ___MinValue_2; }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 * get_address_of_MinValue_2() { return &___MinValue_2; }
	inline void set_MinValue_2(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  value)
	{
		___MinValue_2 = value;
	}

	inline static int32_t get_offset_of__legacyConfigChecked_4() { return static_cast<int32_t>(offsetof(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203_StaticFields, ____legacyConfigChecked_4)); }
	inline bool get__legacyConfigChecked_4() const { return ____legacyConfigChecked_4; }
	inline bool* get_address_of__legacyConfigChecked_4() { return &____legacyConfigChecked_4; }
	inline void set__legacyConfigChecked_4(bool value)
	{
		____legacyConfigChecked_4 = value;
	}

	inline static int32_t get_offset_of__legacyMode_5() { return static_cast<int32_t>(offsetof(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203_StaticFields, ____legacyMode_5)); }
	inline bool get__legacyMode_5() const { return ____legacyMode_5; }
	inline bool* get_address_of__legacyMode_5() { return &____legacyMode_5; }
	inline void set__legacyMode_5(bool value)
	{
		____legacyMode_5 = value;
	}
};


// UnityEngine.Experimental.Rendering.RenderGraphModule.RenderGraphResourceType
struct  RenderGraphResourceType_tADC2B9FB2D4F19BE4A86D67644FBA60047190FD3 
{
public:
	// System.Int32 UnityEngine.Experimental.Rendering.RenderGraphModule.RenderGraphResourceType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(RenderGraphResourceType_tADC2B9FB2D4F19BE4A86D67644FBA60047190FD3, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Experimental.Rendering.Universal.LibTessDotNet.ContourVertex
struct  ContourVertex_tF9E27CB6BCC62DF5F4202153BBBECDE5E3283536 
{
public:
	// UnityEngine.Experimental.Rendering.Universal.LibTessDotNet.Vec3 UnityEngine.Experimental.Rendering.Universal.LibTessDotNet.ContourVertex::Position
	Vec3_tDD913B31171F6A37E61E4625FEA6C7901A6B1BC1  ___Position_0;
	// System.Object UnityEngine.Experimental.Rendering.Universal.LibTessDotNet.ContourVertex::Data
	RuntimeObject * ___Data_1;

public:
	inline static int32_t get_offset_of_Position_0() { return static_cast<int32_t>(offsetof(ContourVertex_tF9E27CB6BCC62DF5F4202153BBBECDE5E3283536, ___Position_0)); }
	inline Vec3_tDD913B31171F6A37E61E4625FEA6C7901A6B1BC1  get_Position_0() const { return ___Position_0; }
	inline Vec3_tDD913B31171F6A37E61E4625FEA6C7901A6B1BC1 * get_address_of_Position_0() { return &___Position_0; }
	inline void set_Position_0(Vec3_tDD913B31171F6A37E61E4625FEA6C7901A6B1BC1  value)
	{
		___Position_0 = value;
	}

	inline static int32_t get_offset_of_Data_1() { return static_cast<int32_t>(offsetof(ContourVertex_tF9E27CB6BCC62DF5F4202153BBBECDE5E3283536, ___Data_1)); }
	inline RuntimeObject * get_Data_1() const { return ___Data_1; }
	inline RuntimeObject ** get_address_of_Data_1() { return &___Data_1; }
	inline void set_Data_1(RuntimeObject * value)
	{
		___Data_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Data_1), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Experimental.Rendering.Universal.LibTessDotNet.ContourVertex
struct ContourVertex_tF9E27CB6BCC62DF5F4202153BBBECDE5E3283536_marshaled_pinvoke
{
	Vec3_tDD913B31171F6A37E61E4625FEA6C7901A6B1BC1  ___Position_0;
	Il2CppIUnknown* ___Data_1;
};
// Native definition for COM marshalling of UnityEngine.Experimental.Rendering.Universal.LibTessDotNet.ContourVertex
struct ContourVertex_tF9E27CB6BCC62DF5F4202153BBBECDE5E3283536_marshaled_com
{
	Vec3_tDD913B31171F6A37E61E4625FEA6C7901A6B1BC1  ___Position_0;
	Il2CppIUnknown* ___Data_1;
};

// UnityEngine.Rendering.ScriptableRenderContext
struct  ScriptableRenderContext_tEDDDFFA7401E6860E1D82DFD779B7A101939F52D 
{
public:
	// System.IntPtr UnityEngine.Rendering.ScriptableRenderContext::m_Ptr
	intptr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(ScriptableRenderContext_tEDDDFFA7401E6860E1D82DFD779B7A101939F52D, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}
};


// System.Linq.Enumerable_Iterator`1<UnityEngine.Experimental.Rendering.Universal.LibTessDotNet.ContourVertex>
struct  Iterator_1_t6C784C575BB1DDAB4121630701B8FB9F468ECA3D  : public RuntimeObject
{
public:
	// System.Int32 System.Linq.Enumerable_Iterator`1::threadId
	int32_t ___threadId_0;
	// System.Int32 System.Linq.Enumerable_Iterator`1::state
	int32_t ___state_1;
	// TSource System.Linq.Enumerable_Iterator`1::current
	ContourVertex_tF9E27CB6BCC62DF5F4202153BBBECDE5E3283536  ___current_2;

public:
	inline static int32_t get_offset_of_threadId_0() { return static_cast<int32_t>(offsetof(Iterator_1_t6C784C575BB1DDAB4121630701B8FB9F468ECA3D, ___threadId_0)); }
	inline int32_t get_threadId_0() const { return ___threadId_0; }
	inline int32_t* get_address_of_threadId_0() { return &___threadId_0; }
	inline void set_threadId_0(int32_t value)
	{
		___threadId_0 = value;
	}

	inline static int32_t get_offset_of_state_1() { return static_cast<int32_t>(offsetof(Iterator_1_t6C784C575BB1DDAB4121630701B8FB9F468ECA3D, ___state_1)); }
	inline int32_t get_state_1() const { return ___state_1; }
	inline int32_t* get_address_of_state_1() { return &___state_1; }
	inline void set_state_1(int32_t value)
	{
		___state_1 = value;
	}

	inline static int32_t get_offset_of_current_2() { return static_cast<int32_t>(offsetof(Iterator_1_t6C784C575BB1DDAB4121630701B8FB9F468ECA3D, ___current_2)); }
	inline ContourVertex_tF9E27CB6BCC62DF5F4202153BBBECDE5E3283536  get_current_2() const { return ___current_2; }
	inline ContourVertex_tF9E27CB6BCC62DF5F4202153BBBECDE5E3283536 * get_address_of_current_2() { return &___current_2; }
	inline void set_current_2(ContourVertex_tF9E27CB6BCC62DF5F4202153BBBECDE5E3283536  value)
	{
		___current_2 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___current_2))->___Data_1), (void*)NULL);
	}
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

// System.SystemException
struct  SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62  : public Exception_t
{
public:

public:
};


// System.Threading.SemaphoreSlim_<WaitUntilCountOrTimeoutAsync>d__31
struct  U3CWaitUntilCountOrTimeoutAsyncU3Ed__31_t227D1F5F19C948CA8C23C80B5F19147D4AAED14F 
{
public:
	// System.Int32 System.Threading.SemaphoreSlim_<WaitUntilCountOrTimeoutAsync>d__31::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Boolean> System.Threading.SemaphoreSlim_<WaitUntilCountOrTimeoutAsync>d__31::<>t__builder
	AsyncTaskMethodBuilder_1_tABE1DEF12F121D6FC8ABF04869ED964FF83EA9B5  ___U3CU3Et__builder_1;
	// System.Threading.CancellationToken System.Threading.SemaphoreSlim_<WaitUntilCountOrTimeoutAsync>d__31::cancellationToken
	CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  ___cancellationToken_2;
	// System.Threading.SemaphoreSlim_TaskNode System.Threading.SemaphoreSlim_<WaitUntilCountOrTimeoutAsync>d__31::asyncWaiter
	TaskNode_tD3014A57510D018F890E6524AC62F9417E2E6C4E * ___asyncWaiter_3;
	// System.Int32 System.Threading.SemaphoreSlim_<WaitUntilCountOrTimeoutAsync>d__31::millisecondsTimeout
	int32_t ___millisecondsTimeout_4;
	// System.Threading.CancellationTokenSource System.Threading.SemaphoreSlim_<WaitUntilCountOrTimeoutAsync>d__31::<cts>5__1
	CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3 * ___U3CctsU3E5__1_5;
	// System.Threading.SemaphoreSlim System.Threading.SemaphoreSlim_<WaitUntilCountOrTimeoutAsync>d__31::<>4__this
	SemaphoreSlim_t3EF85FC980AE57957BEBB6B78E81DE2E3233D385 * ___U3CU3E4__this_6;
	// System.Object System.Threading.SemaphoreSlim_<WaitUntilCountOrTimeoutAsync>d__31::<>7__wrap1
	RuntimeObject * ___U3CU3E7__wrap1_7;
	// System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1_ConfiguredTaskAwaiter<System.Threading.Tasks.Task> System.Threading.SemaphoreSlim_<WaitUntilCountOrTimeoutAsync>d__31::<>u__1
	ConfiguredTaskAwaiter_tF64824CB5C3CFE2E1C4CAFE410B4CDE6831E4C78  ___U3CU3Eu__1_8;
	// System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1_ConfiguredTaskAwaiter<System.Boolean> System.Threading.SemaphoreSlim_<WaitUntilCountOrTimeoutAsync>d__31::<>u__2
	ConfiguredTaskAwaiter_t286C97C0AF102C4C0BE55CE2025CC7BD1FB5C20C  ___U3CU3Eu__2_9;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CWaitUntilCountOrTimeoutAsyncU3Ed__31_t227D1F5F19C948CA8C23C80B5F19147D4AAED14F, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3Et__builder_1() { return static_cast<int32_t>(offsetof(U3CWaitUntilCountOrTimeoutAsyncU3Ed__31_t227D1F5F19C948CA8C23C80B5F19147D4AAED14F, ___U3CU3Et__builder_1)); }
	inline AsyncTaskMethodBuilder_1_tABE1DEF12F121D6FC8ABF04869ED964FF83EA9B5  get_U3CU3Et__builder_1() const { return ___U3CU3Et__builder_1; }
	inline AsyncTaskMethodBuilder_1_tABE1DEF12F121D6FC8ABF04869ED964FF83EA9B5 * get_address_of_U3CU3Et__builder_1() { return &___U3CU3Et__builder_1; }
	inline void set_U3CU3Et__builder_1(AsyncTaskMethodBuilder_1_tABE1DEF12F121D6FC8ABF04869ED964FF83EA9B5  value)
	{
		___U3CU3Et__builder_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___U3CU3Et__builder_1))->___m_coreState_1))->___m_stateMachine_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___U3CU3Et__builder_1))->___m_coreState_1))->___m_defaultContextAction_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3Et__builder_1))->___m_task_2), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_cancellationToken_2() { return static_cast<int32_t>(offsetof(U3CWaitUntilCountOrTimeoutAsyncU3Ed__31_t227D1F5F19C948CA8C23C80B5F19147D4AAED14F, ___cancellationToken_2)); }
	inline CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  get_cancellationToken_2() const { return ___cancellationToken_2; }
	inline CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD * get_address_of_cancellationToken_2() { return &___cancellationToken_2; }
	inline void set_cancellationToken_2(CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  value)
	{
		___cancellationToken_2 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___cancellationToken_2))->___m_source_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_asyncWaiter_3() { return static_cast<int32_t>(offsetof(U3CWaitUntilCountOrTimeoutAsyncU3Ed__31_t227D1F5F19C948CA8C23C80B5F19147D4AAED14F, ___asyncWaiter_3)); }
	inline TaskNode_tD3014A57510D018F890E6524AC62F9417E2E6C4E * get_asyncWaiter_3() const { return ___asyncWaiter_3; }
	inline TaskNode_tD3014A57510D018F890E6524AC62F9417E2E6C4E ** get_address_of_asyncWaiter_3() { return &___asyncWaiter_3; }
	inline void set_asyncWaiter_3(TaskNode_tD3014A57510D018F890E6524AC62F9417E2E6C4E * value)
	{
		___asyncWaiter_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___asyncWaiter_3), (void*)value);
	}

	inline static int32_t get_offset_of_millisecondsTimeout_4() { return static_cast<int32_t>(offsetof(U3CWaitUntilCountOrTimeoutAsyncU3Ed__31_t227D1F5F19C948CA8C23C80B5F19147D4AAED14F, ___millisecondsTimeout_4)); }
	inline int32_t get_millisecondsTimeout_4() const { return ___millisecondsTimeout_4; }
	inline int32_t* get_address_of_millisecondsTimeout_4() { return &___millisecondsTimeout_4; }
	inline void set_millisecondsTimeout_4(int32_t value)
	{
		___millisecondsTimeout_4 = value;
	}

	inline static int32_t get_offset_of_U3CctsU3E5__1_5() { return static_cast<int32_t>(offsetof(U3CWaitUntilCountOrTimeoutAsyncU3Ed__31_t227D1F5F19C948CA8C23C80B5F19147D4AAED14F, ___U3CctsU3E5__1_5)); }
	inline CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3 * get_U3CctsU3E5__1_5() const { return ___U3CctsU3E5__1_5; }
	inline CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3 ** get_address_of_U3CctsU3E5__1_5() { return &___U3CctsU3E5__1_5; }
	inline void set_U3CctsU3E5__1_5(CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3 * value)
	{
		___U3CctsU3E5__1_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CctsU3E5__1_5), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_6() { return static_cast<int32_t>(offsetof(U3CWaitUntilCountOrTimeoutAsyncU3Ed__31_t227D1F5F19C948CA8C23C80B5F19147D4AAED14F, ___U3CU3E4__this_6)); }
	inline SemaphoreSlim_t3EF85FC980AE57957BEBB6B78E81DE2E3233D385 * get_U3CU3E4__this_6() const { return ___U3CU3E4__this_6; }
	inline SemaphoreSlim_t3EF85FC980AE57957BEBB6B78E81DE2E3233D385 ** get_address_of_U3CU3E4__this_6() { return &___U3CU3E4__this_6; }
	inline void set_U3CU3E4__this_6(SemaphoreSlim_t3EF85FC980AE57957BEBB6B78E81DE2E3233D385 * value)
	{
		___U3CU3E4__this_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_6), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E7__wrap1_7() { return static_cast<int32_t>(offsetof(U3CWaitUntilCountOrTimeoutAsyncU3Ed__31_t227D1F5F19C948CA8C23C80B5F19147D4AAED14F, ___U3CU3E7__wrap1_7)); }
	inline RuntimeObject * get_U3CU3E7__wrap1_7() const { return ___U3CU3E7__wrap1_7; }
	inline RuntimeObject ** get_address_of_U3CU3E7__wrap1_7() { return &___U3CU3E7__wrap1_7; }
	inline void set_U3CU3E7__wrap1_7(RuntimeObject * value)
	{
		___U3CU3E7__wrap1_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E7__wrap1_7), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3Eu__1_8() { return static_cast<int32_t>(offsetof(U3CWaitUntilCountOrTimeoutAsyncU3Ed__31_t227D1F5F19C948CA8C23C80B5F19147D4AAED14F, ___U3CU3Eu__1_8)); }
	inline ConfiguredTaskAwaiter_tF64824CB5C3CFE2E1C4CAFE410B4CDE6831E4C78  get_U3CU3Eu__1_8() const { return ___U3CU3Eu__1_8; }
	inline ConfiguredTaskAwaiter_tF64824CB5C3CFE2E1C4CAFE410B4CDE6831E4C78 * get_address_of_U3CU3Eu__1_8() { return &___U3CU3Eu__1_8; }
	inline void set_U3CU3Eu__1_8(ConfiguredTaskAwaiter_tF64824CB5C3CFE2E1C4CAFE410B4CDE6831E4C78  value)
	{
		___U3CU3Eu__1_8 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3Eu__1_8))->___m_task_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_U3CU3Eu__2_9() { return static_cast<int32_t>(offsetof(U3CWaitUntilCountOrTimeoutAsyncU3Ed__31_t227D1F5F19C948CA8C23C80B5F19147D4AAED14F, ___U3CU3Eu__2_9)); }
	inline ConfiguredTaskAwaiter_t286C97C0AF102C4C0BE55CE2025CC7BD1FB5C20C  get_U3CU3Eu__2_9() const { return ___U3CU3Eu__2_9; }
	inline ConfiguredTaskAwaiter_t286C97C0AF102C4C0BE55CE2025CC7BD1FB5C20C * get_address_of_U3CU3Eu__2_9() { return &___U3CU3Eu__2_9; }
	inline void set_U3CU3Eu__2_9(ConfiguredTaskAwaiter_t286C97C0AF102C4C0BE55CE2025CC7BD1FB5C20C  value)
	{
		___U3CU3Eu__2_9 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3Eu__2_9))->___m_task_0), (void*)NULL);
	}
};


// System.Threading.Tasks.Task`1<System.Boolean>
struct  Task_1_t9C1FE9F18F52F3409B9E970FA38801A443AE7849  : public Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60
{
public:
	// TResult System.Threading.Tasks.Task`1::m_result
	bool ___m_result_22;

public:
	inline static int32_t get_offset_of_m_result_22() { return static_cast<int32_t>(offsetof(Task_1_t9C1FE9F18F52F3409B9E970FA38801A443AE7849, ___m_result_22)); }
	inline bool get_m_result_22() const { return ___m_result_22; }
	inline bool* get_address_of_m_result_22() { return &___m_result_22; }
	inline void set_m_result_22(bool value)
	{
		___m_result_22 = value;
	}
};

struct Task_1_t9C1FE9F18F52F3409B9E970FA38801A443AE7849_StaticFields
{
public:
	// System.Threading.Tasks.TaskFactory`1<TResult> System.Threading.Tasks.Task`1::s_Factory
	TaskFactory_1_t069438A73348A2B1B34A2C68E0478EE107ECCFC7 * ___s_Factory_23;
	// System.Func`2<System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>,System.Threading.Tasks.Task`1<TResult>> System.Threading.Tasks.Task`1::TaskWhenAnyCast
	Func_2_t24DC43D57AB022882FE433E3B16B6D7E4BD14BB4 * ___TaskWhenAnyCast_24;

public:
	inline static int32_t get_offset_of_s_Factory_23() { return static_cast<int32_t>(offsetof(Task_1_t9C1FE9F18F52F3409B9E970FA38801A443AE7849_StaticFields, ___s_Factory_23)); }
	inline TaskFactory_1_t069438A73348A2B1B34A2C68E0478EE107ECCFC7 * get_s_Factory_23() const { return ___s_Factory_23; }
	inline TaskFactory_1_t069438A73348A2B1B34A2C68E0478EE107ECCFC7 ** get_address_of_s_Factory_23() { return &___s_Factory_23; }
	inline void set_s_Factory_23(TaskFactory_1_t069438A73348A2B1B34A2C68E0478EE107ECCFC7 * value)
	{
		___s_Factory_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Factory_23), (void*)value);
	}

	inline static int32_t get_offset_of_TaskWhenAnyCast_24() { return static_cast<int32_t>(offsetof(Task_1_t9C1FE9F18F52F3409B9E970FA38801A443AE7849_StaticFields, ___TaskWhenAnyCast_24)); }
	inline Func_2_t24DC43D57AB022882FE433E3B16B6D7E4BD14BB4 * get_TaskWhenAnyCast_24() const { return ___TaskWhenAnyCast_24; }
	inline Func_2_t24DC43D57AB022882FE433E3B16B6D7E4BD14BB4 ** get_address_of_TaskWhenAnyCast_24() { return &___TaskWhenAnyCast_24; }
	inline void set_TaskWhenAnyCast_24(Func_2_t24DC43D57AB022882FE433E3B16B6D7E4BD14BB4 * value)
	{
		___TaskWhenAnyCast_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TaskWhenAnyCast_24), (void*)value);
	}
};


// System.Threading.Tasks.Task`1<System.Object>
struct  Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17  : public Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60
{
public:
	// TResult System.Threading.Tasks.Task`1::m_result
	RuntimeObject * ___m_result_22;

public:
	inline static int32_t get_offset_of_m_result_22() { return static_cast<int32_t>(offsetof(Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17, ___m_result_22)); }
	inline RuntimeObject * get_m_result_22() const { return ___m_result_22; }
	inline RuntimeObject ** get_address_of_m_result_22() { return &___m_result_22; }
	inline void set_m_result_22(RuntimeObject * value)
	{
		___m_result_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_result_22), (void*)value);
	}
};

struct Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17_StaticFields
{
public:
	// System.Threading.Tasks.TaskFactory`1<TResult> System.Threading.Tasks.Task`1::s_Factory
	TaskFactory_1_t16A95DD17BBA3D00F0A85C5077BB248421EF3A55 * ___s_Factory_23;
	// System.Func`2<System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>,System.Threading.Tasks.Task`1<TResult>> System.Threading.Tasks.Task`1::TaskWhenAnyCast
	Func_2_t44F36790F9746FCE5ABFDE6205B6020B2578F6DD * ___TaskWhenAnyCast_24;

public:
	inline static int32_t get_offset_of_s_Factory_23() { return static_cast<int32_t>(offsetof(Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17_StaticFields, ___s_Factory_23)); }
	inline TaskFactory_1_t16A95DD17BBA3D00F0A85C5077BB248421EF3A55 * get_s_Factory_23() const { return ___s_Factory_23; }
	inline TaskFactory_1_t16A95DD17BBA3D00F0A85C5077BB248421EF3A55 ** get_address_of_s_Factory_23() { return &___s_Factory_23; }
	inline void set_s_Factory_23(TaskFactory_1_t16A95DD17BBA3D00F0A85C5077BB248421EF3A55 * value)
	{
		___s_Factory_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Factory_23), (void*)value);
	}

	inline static int32_t get_offset_of_TaskWhenAnyCast_24() { return static_cast<int32_t>(offsetof(Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17_StaticFields, ___TaskWhenAnyCast_24)); }
	inline Func_2_t44F36790F9746FCE5ABFDE6205B6020B2578F6DD * get_TaskWhenAnyCast_24() const { return ___TaskWhenAnyCast_24; }
	inline Func_2_t44F36790F9746FCE5ABFDE6205B6020B2578F6DD ** get_address_of_TaskWhenAnyCast_24() { return &___TaskWhenAnyCast_24; }
	inline void set_TaskWhenAnyCast_24(Func_2_t44F36790F9746FCE5ABFDE6205B6020B2578F6DD * value)
	{
		___TaskWhenAnyCast_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TaskWhenAnyCast_24), (void*)value);
	}
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


// UnityEngine.Experimental.Rendering.RenderGraphModule.RenderGraphContext
struct  RenderGraphContext_t356A8F1ED1EB20D4778552A10E4B39254486A0DA 
{
public:
	// UnityEngine.Rendering.ScriptableRenderContext UnityEngine.Experimental.Rendering.RenderGraphModule.RenderGraphContext::renderContext
	ScriptableRenderContext_tEDDDFFA7401E6860E1D82DFD779B7A101939F52D  ___renderContext_0;
	// UnityEngine.Rendering.CommandBuffer UnityEngine.Experimental.Rendering.RenderGraphModule.RenderGraphContext::cmd
	CommandBuffer_t25CD231BD3E822660339DB7D0E8F8ED6B7DBEA29 * ___cmd_1;
	// UnityEngine.Experimental.Rendering.RenderGraphModule.RenderGraphObjectPool UnityEngine.Experimental.Rendering.RenderGraphModule.RenderGraphContext::renderGraphPool
	RenderGraphObjectPool_t40847D412C9FE90411FB6390EC6C4B5F8485B681 * ___renderGraphPool_2;
	// UnityEngine.Experimental.Rendering.RenderGraphModule.RenderGraphResourceRegistry UnityEngine.Experimental.Rendering.RenderGraphModule.RenderGraphContext::resources
	RenderGraphResourceRegistry_t25B71B4D5C2C9AE9DC7ED50F3D95AE125668EF66 * ___resources_3;

public:
	inline static int32_t get_offset_of_renderContext_0() { return static_cast<int32_t>(offsetof(RenderGraphContext_t356A8F1ED1EB20D4778552A10E4B39254486A0DA, ___renderContext_0)); }
	inline ScriptableRenderContext_tEDDDFFA7401E6860E1D82DFD779B7A101939F52D  get_renderContext_0() const { return ___renderContext_0; }
	inline ScriptableRenderContext_tEDDDFFA7401E6860E1D82DFD779B7A101939F52D * get_address_of_renderContext_0() { return &___renderContext_0; }
	inline void set_renderContext_0(ScriptableRenderContext_tEDDDFFA7401E6860E1D82DFD779B7A101939F52D  value)
	{
		___renderContext_0 = value;
	}

	inline static int32_t get_offset_of_cmd_1() { return static_cast<int32_t>(offsetof(RenderGraphContext_t356A8F1ED1EB20D4778552A10E4B39254486A0DA, ___cmd_1)); }
	inline CommandBuffer_t25CD231BD3E822660339DB7D0E8F8ED6B7DBEA29 * get_cmd_1() const { return ___cmd_1; }
	inline CommandBuffer_t25CD231BD3E822660339DB7D0E8F8ED6B7DBEA29 ** get_address_of_cmd_1() { return &___cmd_1; }
	inline void set_cmd_1(CommandBuffer_t25CD231BD3E822660339DB7D0E8F8ED6B7DBEA29 * value)
	{
		___cmd_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___cmd_1), (void*)value);
	}

	inline static int32_t get_offset_of_renderGraphPool_2() { return static_cast<int32_t>(offsetof(RenderGraphContext_t356A8F1ED1EB20D4778552A10E4B39254486A0DA, ___renderGraphPool_2)); }
	inline RenderGraphObjectPool_t40847D412C9FE90411FB6390EC6C4B5F8485B681 * get_renderGraphPool_2() const { return ___renderGraphPool_2; }
	inline RenderGraphObjectPool_t40847D412C9FE90411FB6390EC6C4B5F8485B681 ** get_address_of_renderGraphPool_2() { return &___renderGraphPool_2; }
	inline void set_renderGraphPool_2(RenderGraphObjectPool_t40847D412C9FE90411FB6390EC6C4B5F8485B681 * value)
	{
		___renderGraphPool_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___renderGraphPool_2), (void*)value);
	}

	inline static int32_t get_offset_of_resources_3() { return static_cast<int32_t>(offsetof(RenderGraphContext_t356A8F1ED1EB20D4778552A10E4B39254486A0DA, ___resources_3)); }
	inline RenderGraphResourceRegistry_t25B71B4D5C2C9AE9DC7ED50F3D95AE125668EF66 * get_resources_3() const { return ___resources_3; }
	inline RenderGraphResourceRegistry_t25B71B4D5C2C9AE9DC7ED50F3D95AE125668EF66 ** get_address_of_resources_3() { return &___resources_3; }
	inline void set_resources_3(RenderGraphResourceRegistry_t25B71B4D5C2C9AE9DC7ED50F3D95AE125668EF66 * value)
	{
		___resources_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___resources_3), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Experimental.Rendering.RenderGraphModule.RenderGraphContext
struct RenderGraphContext_t356A8F1ED1EB20D4778552A10E4B39254486A0DA_marshaled_pinvoke
{
	ScriptableRenderContext_tEDDDFFA7401E6860E1D82DFD779B7A101939F52D  ___renderContext_0;
	CommandBuffer_t25CD231BD3E822660339DB7D0E8F8ED6B7DBEA29 * ___cmd_1;
	RenderGraphObjectPool_t40847D412C9FE90411FB6390EC6C4B5F8485B681 * ___renderGraphPool_2;
	RenderGraphResourceRegistry_t25B71B4D5C2C9AE9DC7ED50F3D95AE125668EF66 * ___resources_3;
};
// Native definition for COM marshalling of UnityEngine.Experimental.Rendering.RenderGraphModule.RenderGraphContext
struct RenderGraphContext_t356A8F1ED1EB20D4778552A10E4B39254486A0DA_marshaled_com
{
	ScriptableRenderContext_tEDDDFFA7401E6860E1D82DFD779B7A101939F52D  ___renderContext_0;
	CommandBuffer_t25CD231BD3E822660339DB7D0E8F8ED6B7DBEA29 * ___cmd_1;
	RenderGraphObjectPool_t40847D412C9FE90411FB6390EC6C4B5F8485B681 * ___renderGraphPool_2;
	RenderGraphResourceRegistry_t25B71B4D5C2C9AE9DC7ED50F3D95AE125668EF66 * ___resources_3;
};

// UnityEngine.Experimental.Rendering.RenderGraphModule.RenderGraphMutableResource
struct  RenderGraphMutableResource_t728289A7068856645627DA7F8E87BDE80A308A21 
{
public:
	// System.Int32 UnityEngine.Experimental.Rendering.RenderGraphModule.RenderGraphMutableResource::<handle>k__BackingField
	int32_t ___U3ChandleU3Ek__BackingField_0;
	// UnityEngine.Experimental.Rendering.RenderGraphModule.RenderGraphResourceType UnityEngine.Experimental.Rendering.RenderGraphModule.RenderGraphMutableResource::<type>k__BackingField
	int32_t ___U3CtypeU3Ek__BackingField_1;
	// System.Int32 UnityEngine.Experimental.Rendering.RenderGraphModule.RenderGraphMutableResource::<version>k__BackingField
	int32_t ___U3CversionU3Ek__BackingField_2;

public:
	inline static int32_t get_offset_of_U3ChandleU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(RenderGraphMutableResource_t728289A7068856645627DA7F8E87BDE80A308A21, ___U3ChandleU3Ek__BackingField_0)); }
	inline int32_t get_U3ChandleU3Ek__BackingField_0() const { return ___U3ChandleU3Ek__BackingField_0; }
	inline int32_t* get_address_of_U3ChandleU3Ek__BackingField_0() { return &___U3ChandleU3Ek__BackingField_0; }
	inline void set_U3ChandleU3Ek__BackingField_0(int32_t value)
	{
		___U3ChandleU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of_U3CtypeU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(RenderGraphMutableResource_t728289A7068856645627DA7F8E87BDE80A308A21, ___U3CtypeU3Ek__BackingField_1)); }
	inline int32_t get_U3CtypeU3Ek__BackingField_1() const { return ___U3CtypeU3Ek__BackingField_1; }
	inline int32_t* get_address_of_U3CtypeU3Ek__BackingField_1() { return &___U3CtypeU3Ek__BackingField_1; }
	inline void set_U3CtypeU3Ek__BackingField_1(int32_t value)
	{
		___U3CtypeU3Ek__BackingField_1 = value;
	}

	inline static int32_t get_offset_of_U3CversionU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(RenderGraphMutableResource_t728289A7068856645627DA7F8E87BDE80A308A21, ___U3CversionU3Ek__BackingField_2)); }
	inline int32_t get_U3CversionU3Ek__BackingField_2() const { return ___U3CversionU3Ek__BackingField_2; }
	inline int32_t* get_address_of_U3CversionU3Ek__BackingField_2() { return &___U3CversionU3Ek__BackingField_2; }
	inline void set_U3CversionU3Ek__BackingField_2(int32_t value)
	{
		___U3CversionU3Ek__BackingField_2 = value;
	}
};


// System.Action
struct  Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6  : public MulticastDelegate_t
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


// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<System.Byte,System.Boolean>
struct  Transformer_1_t3DC67AE5707B4A6239FDC484B4051190F3DD73F6  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<System.Byte,System.Byte>
struct  Transformer_1_t28E2CE4E6000CFB5FD1E8661B28068A803A652CD  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<System.Byte,System.Char>
struct  Transformer_1_t327F0FF1377C87DD3EC9A5B30D921C1D378A879B  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<System.Byte,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct  Transformer_1_t7F28A44470BC903D7613912A5BE5E0A83B0C3A62  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<System.Byte,System.DateTime>
struct  Transformer_1_t3001FEA39E46E3DA96E358634D044AE54CB8E347  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<System.Byte,System.DateTimeOffset>
struct  Transformer_1_t2C08585197D68DA12A216A4373064B0363C8702C  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<System.Byte,System.Decimal>
struct  Transformer_1_t690EEF1811184AEE377AA96051EECB5956C1027D  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<System.Byte,System.Diagnostics.Tracing.EmptyStruct>
struct  Transformer_1_t4781F0887392462A71B8DA7362AE412BDBAC8498  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<System.Byte,System.Double>
struct  Transformer_1_t7F80BE9FB1DF9994C698CCC6664C2E010ECB94DF  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<System.Byte,System.Guid>
struct  Transformer_1_t1C30255A20A41F13A40891CED11C03BC98CAB381  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<System.Byte,System.Int16>
struct  Transformer_1_tC9D6DCE262D74560D6D8324567C11DD16602C216  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<System.Byte,System.Int32>
struct  Transformer_1_tB389982442B905977CFD9942EF65118312157BD3  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<System.Byte,System.Int64>
struct  Transformer_1_tEAF6BF35B1968343B8492E296BC8661120F443F7  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<System.Byte,System.IntPtr>
struct  Transformer_1_tDAC4F608DAB2EE6BC5CD91D42ECBACDFDBCEB0AB  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<System.Byte,System.Object>
struct  Transformer_1_t7758A5153ABEBF79026D781F2F12C0F4748450B4  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<System.Byte,System.SByte>
struct  Transformer_1_t35C6DC96DC1F138679D872A33D06394FF3BD4716  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<System.Byte,System.Single>
struct  Transformer_1_tFB91A7B8819395950BCFE210EDA54735CF4E574F  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<System.Byte,System.TimeSpan>
struct  Transformer_1_t75A228CF2470F94906973F31E5103CD0ACC45DA6  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<System.Byte,System.UInt16>
struct  Transformer_1_t8FC8FB2D451A3EC4077EF54E0E1AFE8D01BF8BA8  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<System.Byte,System.UInt32>
struct  Transformer_1_t66DDEE07B34D2CD03DF7E22CC15C182D874CD6A1  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<System.Byte,System.UInt64>
struct  Transformer_1_t16C0B9A25005C19C84993A6DF613E235C47DF3D8  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<System.Byte,System.UIntPtr>
struct  Transformer_1_tB3A92B161A295C5CE5BB20A5F09DAF8808175D63  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<System.Int16,System.Boolean>
struct  Transformer_1_t1DD535D7A0BF0DF1D9BD217F42BD8B86FED818F0  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<System.Int16,System.Byte>
struct  Transformer_1_t50ABA94494AF2D216A78139ACFFBE9584E70845C  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<System.Int16,System.Char>
struct  Transformer_1_t4A76AF5FABAC49231E9903360B082EB5E93769FE  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<System.Int16,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct  Transformer_1_t4E5755522485703458E57CE83CF0EC454BDD2A65  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<System.Int16,System.DateTime>
struct  Transformer_1_t7670F7F455D569AE5845734CA6275DDAB457DFD9  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<System.Int16,System.DateTimeOffset>
struct  Transformer_1_t6ED2F8177C72CFD7E30DFF454AA4BC1B74679C56  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<System.Int16,System.Decimal>
struct  Transformer_1_t641A86473503A4AB08D80E33213C47386F023BF3  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<System.Int16,System.Diagnostics.Tracing.EmptyStruct>
struct  Transformer_1_t6FEFE5B54753E83410F77B31890AED883398BD9E  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<System.Int16,System.Double>
struct  Transformer_1_t52E02D9A03321E660B3ED7DE9478EE15F5A8ABBA  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<System.Int16,System.Guid>
struct  Transformer_1_t7F21EEE32F525F971881D42A9C3C10149176FF64  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<System.Int16,System.Int16>
struct  Transformer_1_t419E6E51E81BB9975C7D042A2BA9F7775173A026  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<System.Int16,System.Int32>
struct  Transformer_1_tF45CCD70807F5D9D3F0F888314AF2D040221A9DF  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<System.Int16,System.Int64>
struct  Transformer_1_tE4D99CFDC91F9C2FD7B786088CC0C24C88A2ACD2  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<System.Int16,System.IntPtr>
struct  Transformer_1_t6CEF5B426229DB191F2B9957F2A090DC27527AC3  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<System.Int16,System.Object>
struct  Transformer_1_tCFCF83ED75D84A4CAF67C05C1FC5723F8C6A1045  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<System.Int16,System.SByte>
struct  Transformer_1_tBD2E80E7566D74877DA3212B5E8196D9FC0EEE9C  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<System.Int16,System.Single>
struct  Transformer_1_tE4654A831E478CF993AC1ECE67A127F7FB1E4A3E  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<System.Int16,System.TimeSpan>
struct  Transformer_1_t3DD73B3138E8429397F66CF88430EE935D8F6A5A  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<System.Int16,System.UInt16>
struct  Transformer_1_t1F4B4372781FC446330AC8A270A5E4FA8E97E7E0  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<System.Int16,System.UInt32>
struct  Transformer_1_t1FE24F77113F8F764EB938DC178B4BD87905418D  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<System.Int16,System.UInt64>
struct  Transformer_1_tF356827C832FD4AE0C32E65BE1B266E9B6179C89  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<System.Int16,System.UIntPtr>
struct  Transformer_1_t304A837732E6FE07B26DAD7E83654774230CB3FB  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<System.Int32,System.Boolean>
struct  Transformer_1_tBF8C995894CEE8C7A6B676EB123674338F92576B  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<System.Int32,System.Byte>
struct  Transformer_1_t01B518FF127F164CE97FA8EC16EEFCACA57EDDA1  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<System.Int32,System.Char>
struct  Transformer_1_tC16A37EE6FCC90F34784D3F3F1AEFE0FD27AFB5E  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<System.Int32,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct  Transformer_1_t93586EBFA51523F443E1EC8D4A94AE26E174F019  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<System.Int32,System.DateTime>
struct  Transformer_1_t328F2E76FF0B5E491B8CAF2EA380EBC4EB59B3F5  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<System.Int32,System.DateTimeOffset>
struct  Transformer_1_tCC180A1514B9EE5AC13DD30B6C50FA5A7FEDB57E  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<System.Int32,System.Decimal>
struct  Transformer_1_t9DA6EF3090A9A84BFB452303F6D54693ED562B8D  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<System.Int32,System.Diagnostics.Tracing.EmptyStruct>
struct  Transformer_1_t2E9D74696B8E5C5EB6BBCDC6CE43D2DEE3F09D96  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<System.Int32,System.Double>
struct  Transformer_1_t8A94E5D9EB877C6FC400168B14AF35D33EAC1927  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<System.Int32,System.Guid>
struct  Transformer_1_t3D5DF6751A5C0D60CF6F2B25C575C87B052B5A09  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<System.Int32,System.Int16>
struct  Transformer_1_t99F6F9B70C5895106F3A5DB68D4B296689F8B067  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<System.Int32,System.Int32>
struct  Transformer_1_tA81CCAAE8973F628B7A145877B4062C5A6476EBA  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<System.Int32,System.Int64>
struct  Transformer_1_t02AD560B0C76565668CD783B3106FF62B8B84B6A  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<System.Int32,System.IntPtr>
struct  Transformer_1_tF4E5AD75B7C97D1E146A64FE337106FD89C6F9A1  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<System.Int32,System.Object>
struct  Transformer_1_t8127E59A1665321B73B90EA261FA4C751848C9A9  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<System.Int32,System.SByte>
struct  Transformer_1_tBCB35269B242493E2D4A887CFFE7A61731CBEF5A  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<System.Int32,System.Single>
struct  Transformer_1_t3D59790A1C59CD6C9FB82446360BCF4333BDA0C0  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<System.Int32,System.TimeSpan>
struct  Transformer_1_t03D55FED65D94DBAED862349A37D45E92B20C2BD  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<System.Int32,System.UInt16>
struct  Transformer_1_t0BE87D3995F2502A8304E6BB9D2ECEBC3642A047  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<System.Int32,System.UInt32>
struct  Transformer_1_t61E0325EA41D08B9CBD542F1FD5575B3AE521EF9  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<System.Int32,System.UInt64>
struct  Transformer_1_t0E6E26122494478302E7A49E89B2996EF405CD94  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<System.Int32,System.UIntPtr>
struct  Transformer_1_t97F7D34BC6D17120EA3004D49E37A6C5ED7F4A2D  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<System.Int64,System.Boolean>
struct  Transformer_1_t476AB6D35C259B3EC718080C147176597C25CD89  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<System.Int64,System.Byte>
struct  Transformer_1_t91E959A6CAE1BE68AA170F06A153ADE1A7389266  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<System.Int64,System.Char>
struct  Transformer_1_tCF44E9940C3311C437EEEA20B8323BA248FFDC1C  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<System.Int64,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct  Transformer_1_t65360D5FC768CB17A9F463BAA4830584F51CC070  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<System.Int64,System.DateTime>
struct  Transformer_1_tEC949466F60165355AE9D6DD91FCE5D3BA94B31C  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<System.Int64,System.DateTimeOffset>
struct  Transformer_1_tAB7D785D4627FF77BCA35F5697866F93058D17A1  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<System.Int64,System.Decimal>
struct  Transformer_1_t5811E5E5AC2445E17746DB0CF9B97CE68CBF8CC3  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<System.Int64,System.Diagnostics.Tracing.EmptyStruct>
struct  Transformer_1_t769FB5C7E8D2DCBC58B48600F5E170AC9CF87E47  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<System.Int64,System.Double>
struct  Transformer_1_t96AA8665F22CF995BA6679B469328CAF084C63B1  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<System.Int64,System.Guid>
struct  Transformer_1_t7D25ED7E6618ACBCFDD309E39C5660C035ADDAF9  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<System.Int64,System.Int16>
struct  Transformer_1_t76BFF54E0F2CF5011E1567A7D589E72FFBE618B1  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<System.Int64,System.Int32>
struct  Transformer_1_tDD4BC5BF267EC2F5EC1E9BA3AEC66A3C4562E3E1  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<System.Int64,System.Int64>
struct  Transformer_1_t83D9EC4265AFBEA40FED539672672E87659FABFC  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<System.Int64,System.IntPtr>
struct  Transformer_1_tF9DEED24B755F01B6D5F383025E5382EC04380A1  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<System.Int64,System.Object>
struct  Transformer_1_tE0DFCD89E6241E5DE4719BAD8464FF514BF41CD0  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<System.Int64,System.SByte>
struct  Transformer_1_tF270241457E8F58BCBFE4A849CEBA0C960D8D171  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<System.Int64,System.Single>
struct  Transformer_1_t6303836C3ECC8993FF939539541E971A88D0043C  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<System.Int64,System.TimeSpan>
struct  Transformer_1_t91E5C13BDFE80888281C2A892214239458BD8862  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<System.Int64,System.UInt16>
struct  Transformer_1_t5523D607097D1283F94D8980CF88A23585DA5383  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<System.Int64,System.UInt32>
struct  Transformer_1_t2084433FA6FC68D6B72E5E5F89F08F24C224F90E  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<System.Int64,System.UInt64>
struct  Transformer_1_t2BC22C910E6F570EFD4A102BDDA4364EE856DF48  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<System.Int64,System.UIntPtr>
struct  Transformer_1_t1CA2AE91638C38BA8D1DC27612CA13ED6A654E05  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<System.Object,System.Object>
struct  Transformer_1_t5A30C1F1369A1F88C4E1270DCDC0988926509061  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<System.SByte,System.Boolean>
struct  Transformer_1_tD2FABFE8EEEB95BE98B3D75EDB8F87E1E19F7D6D  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<System.SByte,System.Byte>
struct  Transformer_1_t6C8811E6F600211E3864191A668925F5A52B6E15  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<System.SByte,System.Char>
struct  Transformer_1_t04BED633DA409C38CB6054BFE3D5735ABD62F518  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<System.SByte,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct  Transformer_1_tAB938303C0EB89617BAC00380BBC202940243F74  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<System.SByte,System.DateTime>
struct  Transformer_1_t85017CA131468548211F084ACC574B9CAA055755  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<System.SByte,System.DateTimeOffset>
struct  Transformer_1_t20B9AF65FC98204645CE3A23EBDADED45A21E450  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<System.SByte,System.Decimal>
struct  Transformer_1_t429ED8E730F5DD367D54C19D1BCF0B22889B5360  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<System.SByte,System.Diagnostics.Tracing.EmptyStruct>
struct  Transformer_1_t1EF34F51050152DBCF5D7D381E05F6C9B3A8D746  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<System.SByte,System.Double>
struct  Transformer_1_t3B93E16F965DE946BC07E0C76E2CCDAC56C43097  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<System.SByte,System.Guid>
struct  Transformer_1_t9C2A1982D971B2C2ED29E132D19A12E8CAA2945F  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<System.SByte,System.Int16>
struct  Transformer_1_tC3D8FE4B2D70F7C8B02BDC3B6F64504A479DDCDA  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<System.SByte,System.Int32>
struct  Transformer_1_tE959281326CA0E71564D9CC8C4CA65476647DF80  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<System.SByte,System.Int64>
struct  Transformer_1_t2C08914EC2A487CA1508E655D40922D31300FF44  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<System.SByte,System.IntPtr>
struct  Transformer_1_t9096E537ABBD1D40C46D5A1BB2AE3FAB1384C802  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<System.SByte,System.Object>
struct  Transformer_1_t3094845308EB0C4ECB81B9B9588FF604F1EFF383  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<System.SByte,System.SByte>
struct  Transformer_1_t07EAC2E730526DAEA7C7466509B2FC4E01EDAECF  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<System.SByte,System.Single>
struct  Transformer_1_t57EF7782BA47293FB8D84194159F9C6EC36E8E70  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<System.SByte,System.TimeSpan>
struct  Transformer_1_t0692E271430E76C7702E6C06685AEA460588A65D  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<System.SByte,System.UInt16>
struct  Transformer_1_t37842F590D779536C9F57CFE8A5F4C9054A7CD5D  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<System.SByte,System.UInt32>
struct  Transformer_1_t118F878BEA8CDEED4C8F998AE52CF291F41BC52E  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<System.SByte,System.UInt64>
struct  Transformer_1_t7CE5E2F2EE3F6B588EC93C03818D6AA88B4C2FA4  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<System.SByte,System.UIntPtr>
struct  Transformer_1_t7820A348FDE892902737AB3353C8DC9AF3173136  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<System.UInt16,System.Boolean>
struct  Transformer_1_tE80196F4B7A5A2110FC0182212C83F459727C6BE  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<System.UInt16,System.Byte>
struct  Transformer_1_t061320CC3547E178B43212A1634E5BA1C3296FB4  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<System.UInt16,System.Char>
struct  Transformer_1_t9332F82CDC7D05AC998F8BE0E7ECCD229EC1F111  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<System.UInt16,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct  Transformer_1_t121D121059312ABFEA00E7E0857D05CCC9415A45  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<System.UInt16,System.DateTime>
struct  Transformer_1_t18E7F2A91B58B4CC9C9DB99BCA5CBB14EC89E947  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<System.UInt16,System.DateTimeOffset>
struct  Transformer_1_tF16A2137C1450B0F436B28941D2EFDB38B768D77  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<System.UInt16,System.Decimal>
struct  Transformer_1_tC9194191386E267034CCDBD796CBAE0F96002D63  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<System.UInt16,System.Diagnostics.Tracing.EmptyStruct>
struct  Transformer_1_tEBC899D34A444538AF2C5EFBED4C84DB4BC45848  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<System.UInt16,System.Double>
struct  Transformer_1_t77DD442701A959DAE27DA4559054353BDB343B34  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<System.UInt16,System.Guid>
struct  Transformer_1_t1E44C39C080C0C1BCAA3AA096BC46637DC78FFC8  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<System.UInt16,System.Int16>
struct  Transformer_1_t8DA922273DCF1348A863E22DAED50A28F2E7EC4A  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<System.UInt16,System.Int32>
struct  Transformer_1_tE2F5517F18DDC45C27EB0CF011655F7290022FB0  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<System.UInt16,System.Int64>
struct  Transformer_1_t2468BF9AC5C45B9D777B0E34EC1949CE193D20F7  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<System.UInt16,System.IntPtr>
struct  Transformer_1_tCB7EE8D213E31FE3EAB291CBAEA6B0F015D13840  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<System.UInt16,System.Object>
struct  Transformer_1_t0001CA8726D9CA184026588C57396CC776ACEF06  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<System.UInt16,System.SByte>
struct  Transformer_1_t56AC8DD64FA3E1A9651D456D3D911E023CF88DCD  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<System.UInt16,System.Single>
struct  Transformer_1_tE78CCD9D44957F7F042B573ED59E8EE04C13D047  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<System.UInt16,System.TimeSpan>
struct  Transformer_1_t3348AF6EA9D56F7672FDA766E48C0EC31D244732  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<System.UInt16,System.UInt16>
struct  Transformer_1_t1BE0C17B380E3D75E214DF3668E20BEF6DCA9A4A  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<System.UInt16,System.UInt32>
struct  Transformer_1_t90F32598CDB2668A5BBD1A101374312C05F60543  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<System.UInt16,System.UInt64>
struct  Transformer_1_t04C7EED1579F30358FBDCDB6143DBC088C63AFDE  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<System.UInt16,System.UIntPtr>
struct  Transformer_1_t11D2CE81C8B59E67AB536F4C77727A85FD129449  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<System.UInt32,System.Boolean>
struct  Transformer_1_t60047D12F19EC963BBD5F0CEBE2F8036A20172F0  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<System.UInt32,System.Byte>
struct  Transformer_1_t5DE73FA1B0F7652CC9FB816D61938EA68158297B  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<System.UInt32,System.Char>
struct  Transformer_1_t3050C701F0AE1E95352D4339BFE606D2343F7F90  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<System.UInt32,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct  Transformer_1_t130D77E1B8D207F951F6D90F2C4A8E3792897617  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<System.UInt32,System.DateTime>
struct  Transformer_1_t10ED8D0D8FCCF8A65A34FD9CB0BB769E97C65617  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<System.UInt32,System.DateTimeOffset>
struct  Transformer_1_t769CC26F0F28BAA04C91A2DD4CA912A1C75B527C  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<System.UInt32,System.Decimal>
struct  Transformer_1_tC127664D3E7D230D4A314537786A12688DFA7A3E  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<System.UInt32,System.Diagnostics.Tracing.EmptyStruct>
struct  Transformer_1_tF07E13438506E2B3D01E6482C5493016DBECA428  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<System.UInt32,System.Double>
struct  Transformer_1_t98913A0CAF0396077F92C767353DCECE1CAE9D37  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<System.UInt32,System.Guid>
struct  Transformer_1_t7065170F0C1062F0BFC8CE0818DF6CB978951894  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<System.UInt32,System.Int16>
struct  Transformer_1_t286C753C28D2786E159E55BCD77AAC5FE99C8A6E  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<System.UInt32,System.Int32>
struct  Transformer_1_t4BE8EE1016BCB2E59D59BB8EBAD050C01F69481F  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<System.UInt32,System.Int64>
struct  Transformer_1_t0265D6C648532D20930747AC00E60A57882836D4  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<System.UInt32,System.IntPtr>
struct  Transformer_1_t1008B5FEF2C9C85E523733A1465641C24C2EF895  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<System.UInt32,System.Object>
struct  Transformer_1_t63A740E462CAF5DE201265ACF49D1F387549E5C2  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<System.UInt32,System.SByte>
struct  Transformer_1_tF3157E7DF7ABB616E4FBC816F8F899563EBAB35C  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<System.UInt32,System.Single>
struct  Transformer_1_tCBB0F5293357FBCE6345652A671907F2D668E97B  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<System.UInt32,System.TimeSpan>
struct  Transformer_1_tC9FFC78A73E6932AA70D077126BE4CA3FE45A302  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<System.UInt32,System.UInt16>
struct  Transformer_1_t1C80BF86214358F246CD19A956D8B220FCA25D7B  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<System.UInt32,System.UInt32>
struct  Transformer_1_t814D676F5A4ACC9A116D07D1C0A35D5BABDF8CAE  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<System.UInt32,System.UInt64>
struct  Transformer_1_t005021C08874BCC5C2A50167CE4E532B9CF4CD79  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<System.UInt32,System.UIntPtr>
struct  Transformer_1_t30E16CDE25487279253BB11A42DBEE6A21368087  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<System.UInt64,System.Boolean>
struct  Transformer_1_t80B7BC576266310FBF99805713CB124FB1325AFD  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<System.UInt64,System.Byte>
struct  Transformer_1_tB710AA1A4EF63E7A608E1F3552AD32FF1D7EC200  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<System.UInt64,System.Char>
struct  Transformer_1_t4C49EDB12597C819D2161020E90B0C9F2BFA6CB2  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<System.UInt64,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct  Transformer_1_t1DD85867F626725FB9A574D7B656426FB6D860E7  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<System.UInt64,System.DateTime>
struct  Transformer_1_t704F728FBE3D274B344E93D43F1EB70A681EABD0  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<System.UInt64,System.DateTimeOffset>
struct  Transformer_1_t99A6CF18BE9023163F159E1157E9EB2EADB175E5  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<System.UInt64,System.Decimal>
struct  Transformer_1_t2097FB14F7FB610418928F6C00B8B3C776B86D03  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<System.UInt64,System.Diagnostics.Tracing.EmptyStruct>
struct  Transformer_1_t4B5213C886234DE9246BB2EED20A4270B0BF8241  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<System.UInt64,System.Double>
struct  Transformer_1_t668A4176A39C3B956441F6D0CCC1AED020F7D6AF  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<System.UInt64,System.Guid>
struct  Transformer_1_t33F4656CC027550D29904EEB3703DEA5DB5A933E  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<System.UInt64,System.Int16>
struct  Transformer_1_t984F8DDF73126BB7D0564B2C8DB5B43DADEB1B87  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<System.UInt64,System.Int32>
struct  Transformer_1_t9E27086EA83291A9CB562EC6DF2DDCF1F811D348  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<System.UInt64,System.Int64>
struct  Transformer_1_tE5AF7FD8199D2F817240AC1D32C549AE12D4AAE9  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<System.UInt64,System.IntPtr>
struct  Transformer_1_t9509B600985704E02CF30F84A4CA3E70DFDC190C  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<System.UInt64,System.Object>
struct  Transformer_1_t65B23DA04E78FC4F4D12CDB469679D9D5C4ED9C4  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<System.UInt64,System.SByte>
struct  Transformer_1_tD9F86289E24471473065EC7A0AC7282EFFF25909  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<System.UInt64,System.Single>
struct  Transformer_1_tD47677532E0EB9F83E58642BAF11E614584BE1E4  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<System.UInt64,System.TimeSpan>
struct  Transformer_1_tFE1A34D9527A7310C69F3A1F2171ADE7234E1D64  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<System.UInt64,System.UInt16>
struct  Transformer_1_tB25EE30C228D308ED1E3D17E8A08E8FF7F6A0D77  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<System.UInt64,System.UInt32>
struct  Transformer_1_t39A024DD4A4E9FB07B8999CACF5FA5483C6572BF  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<System.UInt64,System.UInt64>
struct  Transformer_1_t236D9CA15237017ADE5E5DF9D4F03CC889C8C551  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1_Transformer`1<System.UInt64,System.UIntPtr>
struct  Transformer_1_t191E38853FA538EEEDB722F48BA28E2796E116E1  : public MulticastDelegate_t
{
public:

public:
};


// System.Func`2<System.Int32,System.Boolean>
struct  Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274  : public MulticastDelegate_t
{
public:

public:
};


// System.Func`2<System.Int32,System.Int32>
struct  Func_2_tFF6AE79EFD0857556AD37A1A1594C43F76012FEA  : public MulticastDelegate_t
{
public:

public:
};


// System.Func`2<System.Object,System.Boolean>
struct  Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8  : public MulticastDelegate_t
{
public:

public:
};


// System.Func`2<System.Object,System.Object>
struct  Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436  : public MulticastDelegate_t
{
public:

public:
};


// System.Func`2<System.Object,System.UInt32>
struct  Func_2_tC3246CBAFBB962E2C6075141A9B6BFC365266428  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.Experimental.Rendering.RenderGraphModule.RenderFunc`1<System.Object>
struct  RenderFunc_1_t091EA032D0005AAD02F0F4EE567103E57DCC507C  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.Experimental.Rendering.RenderGraphModule.RenderGraph_RenderPass
struct  RenderPass_tE9D4B9C3BB0DB42CFD72034E0288AF39ABCAAA51  : public RuntimeObject
{
public:
	// System.String UnityEngine.Experimental.Rendering.RenderGraphModule.RenderGraph_RenderPass::name
	String_t* ___name_0;
	// System.Int32 UnityEngine.Experimental.Rendering.RenderGraphModule.RenderGraph_RenderPass::index
	int32_t ___index_1;
	// UnityEngine.Rendering.ProfilingSampler UnityEngine.Experimental.Rendering.RenderGraphModule.RenderGraph_RenderPass::customSampler
	ProfilingSampler_tD118E30126C252A7D5064D4AD84B497A9CAB6E92 * ___customSampler_2;
	// System.Collections.Generic.List`1<UnityEngine.Experimental.Rendering.RenderGraphModule.RenderGraphResource> UnityEngine.Experimental.Rendering.RenderGraphModule.RenderGraph_RenderPass::resourceReadList
	List_1_t7B7AB87E69433EF284952108AC50279B13B454DD * ___resourceReadList_3;
	// System.Collections.Generic.List`1<UnityEngine.Experimental.Rendering.RenderGraphModule.RenderGraphMutableResource> UnityEngine.Experimental.Rendering.RenderGraphModule.RenderGraph_RenderPass::resourceWriteList
	List_1_t3BF4B5FF5CE6975DE11654564591061A6988E555 * ___resourceWriteList_4;
	// System.Collections.Generic.List`1<UnityEngine.Experimental.Rendering.RenderGraphModule.RenderGraphResource> UnityEngine.Experimental.Rendering.RenderGraphModule.RenderGraph_RenderPass::usedRendererListList
	List_1_t7B7AB87E69433EF284952108AC50279B13B454DD * ___usedRendererListList_5;
	// System.Boolean UnityEngine.Experimental.Rendering.RenderGraphModule.RenderGraph_RenderPass::enableAsyncCompute
	bool ___enableAsyncCompute_6;
	// UnityEngine.Experimental.Rendering.RenderGraphModule.RenderGraphMutableResource[] UnityEngine.Experimental.Rendering.RenderGraphModule.RenderGraph_RenderPass::m_ColorBuffers
	RenderGraphMutableResourceU5BU5D_t321394616FCBCB3C128105E0012CA75FF575FBFE* ___m_ColorBuffers_7;
	// UnityEngine.Experimental.Rendering.RenderGraphModule.RenderGraphMutableResource UnityEngine.Experimental.Rendering.RenderGraphModule.RenderGraph_RenderPass::m_DepthBuffer
	RenderGraphMutableResource_t728289A7068856645627DA7F8E87BDE80A308A21  ___m_DepthBuffer_8;
	// System.Int32 UnityEngine.Experimental.Rendering.RenderGraphModule.RenderGraph_RenderPass::m_MaxColorBufferIndex
	int32_t ___m_MaxColorBufferIndex_9;

public:
	inline static int32_t get_offset_of_name_0() { return static_cast<int32_t>(offsetof(RenderPass_tE9D4B9C3BB0DB42CFD72034E0288AF39ABCAAA51, ___name_0)); }
	inline String_t* get_name_0() const { return ___name_0; }
	inline String_t** get_address_of_name_0() { return &___name_0; }
	inline void set_name_0(String_t* value)
	{
		___name_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___name_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(RenderPass_tE9D4B9C3BB0DB42CFD72034E0288AF39ABCAAA51, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_customSampler_2() { return static_cast<int32_t>(offsetof(RenderPass_tE9D4B9C3BB0DB42CFD72034E0288AF39ABCAAA51, ___customSampler_2)); }
	inline ProfilingSampler_tD118E30126C252A7D5064D4AD84B497A9CAB6E92 * get_customSampler_2() const { return ___customSampler_2; }
	inline ProfilingSampler_tD118E30126C252A7D5064D4AD84B497A9CAB6E92 ** get_address_of_customSampler_2() { return &___customSampler_2; }
	inline void set_customSampler_2(ProfilingSampler_tD118E30126C252A7D5064D4AD84B497A9CAB6E92 * value)
	{
		___customSampler_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___customSampler_2), (void*)value);
	}

	inline static int32_t get_offset_of_resourceReadList_3() { return static_cast<int32_t>(offsetof(RenderPass_tE9D4B9C3BB0DB42CFD72034E0288AF39ABCAAA51, ___resourceReadList_3)); }
	inline List_1_t7B7AB87E69433EF284952108AC50279B13B454DD * get_resourceReadList_3() const { return ___resourceReadList_3; }
	inline List_1_t7B7AB87E69433EF284952108AC50279B13B454DD ** get_address_of_resourceReadList_3() { return &___resourceReadList_3; }
	inline void set_resourceReadList_3(List_1_t7B7AB87E69433EF284952108AC50279B13B454DD * value)
	{
		___resourceReadList_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___resourceReadList_3), (void*)value);
	}

	inline static int32_t get_offset_of_resourceWriteList_4() { return static_cast<int32_t>(offsetof(RenderPass_tE9D4B9C3BB0DB42CFD72034E0288AF39ABCAAA51, ___resourceWriteList_4)); }
	inline List_1_t3BF4B5FF5CE6975DE11654564591061A6988E555 * get_resourceWriteList_4() const { return ___resourceWriteList_4; }
	inline List_1_t3BF4B5FF5CE6975DE11654564591061A6988E555 ** get_address_of_resourceWriteList_4() { return &___resourceWriteList_4; }
	inline void set_resourceWriteList_4(List_1_t3BF4B5FF5CE6975DE11654564591061A6988E555 * value)
	{
		___resourceWriteList_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___resourceWriteList_4), (void*)value);
	}

	inline static int32_t get_offset_of_usedRendererListList_5() { return static_cast<int32_t>(offsetof(RenderPass_tE9D4B9C3BB0DB42CFD72034E0288AF39ABCAAA51, ___usedRendererListList_5)); }
	inline List_1_t7B7AB87E69433EF284952108AC50279B13B454DD * get_usedRendererListList_5() const { return ___usedRendererListList_5; }
	inline List_1_t7B7AB87E69433EF284952108AC50279B13B454DD ** get_address_of_usedRendererListList_5() { return &___usedRendererListList_5; }
	inline void set_usedRendererListList_5(List_1_t7B7AB87E69433EF284952108AC50279B13B454DD * value)
	{
		___usedRendererListList_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___usedRendererListList_5), (void*)value);
	}

	inline static int32_t get_offset_of_enableAsyncCompute_6() { return static_cast<int32_t>(offsetof(RenderPass_tE9D4B9C3BB0DB42CFD72034E0288AF39ABCAAA51, ___enableAsyncCompute_6)); }
	inline bool get_enableAsyncCompute_6() const { return ___enableAsyncCompute_6; }
	inline bool* get_address_of_enableAsyncCompute_6() { return &___enableAsyncCompute_6; }
	inline void set_enableAsyncCompute_6(bool value)
	{
		___enableAsyncCompute_6 = value;
	}

	inline static int32_t get_offset_of_m_ColorBuffers_7() { return static_cast<int32_t>(offsetof(RenderPass_tE9D4B9C3BB0DB42CFD72034E0288AF39ABCAAA51, ___m_ColorBuffers_7)); }
	inline RenderGraphMutableResourceU5BU5D_t321394616FCBCB3C128105E0012CA75FF575FBFE* get_m_ColorBuffers_7() const { return ___m_ColorBuffers_7; }
	inline RenderGraphMutableResourceU5BU5D_t321394616FCBCB3C128105E0012CA75FF575FBFE** get_address_of_m_ColorBuffers_7() { return &___m_ColorBuffers_7; }
	inline void set_m_ColorBuffers_7(RenderGraphMutableResourceU5BU5D_t321394616FCBCB3C128105E0012CA75FF575FBFE* value)
	{
		___m_ColorBuffers_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ColorBuffers_7), (void*)value);
	}

	inline static int32_t get_offset_of_m_DepthBuffer_8() { return static_cast<int32_t>(offsetof(RenderPass_tE9D4B9C3BB0DB42CFD72034E0288AF39ABCAAA51, ___m_DepthBuffer_8)); }
	inline RenderGraphMutableResource_t728289A7068856645627DA7F8E87BDE80A308A21  get_m_DepthBuffer_8() const { return ___m_DepthBuffer_8; }
	inline RenderGraphMutableResource_t728289A7068856645627DA7F8E87BDE80A308A21 * get_address_of_m_DepthBuffer_8() { return &___m_DepthBuffer_8; }
	inline void set_m_DepthBuffer_8(RenderGraphMutableResource_t728289A7068856645627DA7F8E87BDE80A308A21  value)
	{
		___m_DepthBuffer_8 = value;
	}

	inline static int32_t get_offset_of_m_MaxColorBufferIndex_9() { return static_cast<int32_t>(offsetof(RenderPass_tE9D4B9C3BB0DB42CFD72034E0288AF39ABCAAA51, ___m_MaxColorBufferIndex_9)); }
	inline int32_t get_m_MaxColorBufferIndex_9() const { return ___m_MaxColorBufferIndex_9; }
	inline int32_t* get_address_of_m_MaxColorBufferIndex_9() { return &___m_MaxColorBufferIndex_9; }
	inline void set_m_MaxColorBufferIndex_9(int32_t value)
	{
		___m_MaxColorBufferIndex_9 = value;
	}
};


// System.ArgumentNullException
struct  ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB  : public ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00
{
public:

public:
};


// UnityEngine.Experimental.Rendering.RenderGraphModule.RenderGraph_RenderPass`1<System.Object>
struct  RenderPass_1_tF9D61292A7D56CB12EDCFFEB76280811BDFC94A9  : public RenderPass_tE9D4B9C3BB0DB42CFD72034E0288AF39ABCAAA51
{
public:
	// PassData UnityEngine.Experimental.Rendering.RenderGraphModule.RenderGraph_RenderPass`1::data
	RuntimeObject * ___data_10;
	// UnityEngine.Experimental.Rendering.RenderGraphModule.RenderFunc`1<PassData> UnityEngine.Experimental.Rendering.RenderGraphModule.RenderGraph_RenderPass`1::renderFunc
	RenderFunc_1_t091EA032D0005AAD02F0F4EE567103E57DCC507C * ___renderFunc_11;

public:
	inline static int32_t get_offset_of_data_10() { return static_cast<int32_t>(offsetof(RenderPass_1_tF9D61292A7D56CB12EDCFFEB76280811BDFC94A9, ___data_10)); }
	inline RuntimeObject * get_data_10() const { return ___data_10; }
	inline RuntimeObject ** get_address_of_data_10() { return &___data_10; }
	inline void set_data_10(RuntimeObject * value)
	{
		___data_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___data_10), (void*)value);
	}

	inline static int32_t get_offset_of_renderFunc_11() { return static_cast<int32_t>(offsetof(RenderPass_1_tF9D61292A7D56CB12EDCFFEB76280811BDFC94A9, ___renderFunc_11)); }
	inline RenderFunc_1_t091EA032D0005AAD02F0F4EE567103E57DCC507C * get_renderFunc_11() const { return ___renderFunc_11; }
	inline RenderFunc_1_t091EA032D0005AAD02F0F4EE567103E57DCC507C ** get_address_of_renderFunc_11() { return &___renderFunc_11; }
	inline void set_renderFunc_11(RenderFunc_1_t091EA032D0005AAD02F0F4EE567103E57DCC507C * value)
	{
		___renderFunc_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___renderFunc_11), (void*)value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.String[]
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) String_t* m_Items[1];

public:
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
// UnityEngine.AndroidJavaObject[]
struct AndroidJavaObjectU5BU5D_tEE28563C9013906CEB39794019A55F4BA5B06120  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * m_Items[1];

public:
	inline AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Int32[]
struct Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32  : public RuntimeArray
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
// System.Boolean[]
struct BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) bool m_Items[1];

public:
	inline bool GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline bool* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, bool value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline bool GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline bool* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, bool value)
	{
		m_Items[index] = value;
	}
};
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
// System.SByte[]
struct SByteU5BU5D_t7D94C53295E6116625EA7CC7DEA21FEDC39869E7  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) int8_t m_Items[1];

public:
	inline int8_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline int8_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, int8_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline int8_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline int8_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, int8_t value)
	{
		m_Items[index] = value;
	}
};
// System.Int16[]
struct Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) int16_t m_Items[1];

public:
	inline int16_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline int16_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, int16_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline int16_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline int16_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, int16_t value)
	{
		m_Items[index] = value;
	}
};
// System.Int64[]
struct Int64U5BU5D_tCA61E42872C63A4286B24EEE6E0650143B43DCE6  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) int64_t m_Items[1];

public:
	inline int64_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline int64_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, int64_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline int64_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline int64_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, int64_t value)
	{
		m_Items[index] = value;
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
// System.Double[]
struct DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) double m_Items[1];

public:
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
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Il2CppChar m_Items[1];

public:
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


// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Boolean>::get_Task()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t9C1FE9F18F52F3409B9E970FA38801A443AE7849 * AsyncTaskMethodBuilder_1_get_Task_m6F8035FA0DEBE32D20BAD45867B41491F5D55F78_gshared (AsyncTaskMethodBuilder_1_tABE1DEF12F121D6FC8ABF04869ED964FF83EA9B5 * __this, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Boolean>::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/ConfiguredTaskAwaiter<System.Boolean>,System.Threading.SemaphoreSlim/<WaitUntilCountOrTimeoutAsync>d__31>(TAwaiter&,TStateMachine&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_t286C97C0AF102C4C0BE55CE2025CC7BD1FB5C20C_TisU3CWaitUntilCountOrTimeoutAsyncU3Ed__31_t227D1F5F19C948CA8C23C80B5F19147D4AAED14F_m06010DFBCE2CDD2AE1BB5ADD25230521E9B527DC_gshared (AsyncTaskMethodBuilder_1_tABE1DEF12F121D6FC8ABF04869ED964FF83EA9B5 * __this, ConfiguredTaskAwaiter_t286C97C0AF102C4C0BE55CE2025CC7BD1FB5C20C * ___awaiter0, U3CWaitUntilCountOrTimeoutAsyncU3Ed__31_t227D1F5F19C948CA8C23C80B5F19147D4AAED14F * ___stateMachine1, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Boolean>::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/ConfiguredTaskAwaiter<System.Object>,System.Threading.SemaphoreSlim/<WaitUntilCountOrTimeoutAsync>d__31>(TAwaiter&,TStateMachine&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_t2CE498F9A6CE5405242AE2D77F03E58985B7C3ED_TisU3CWaitUntilCountOrTimeoutAsyncU3Ed__31_t227D1F5F19C948CA8C23C80B5F19147D4AAED14F_m4FDC6642836D25291A0E343845527873A88013C9_gshared (AsyncTaskMethodBuilder_1_tABE1DEF12F121D6FC8ABF04869ED964FF83EA9B5 * __this, ConfiguredTaskAwaiter_t2CE498F9A6CE5405242AE2D77F03E58985B7C3ED * ___awaiter0, U3CWaitUntilCountOrTimeoutAsyncU3Ed__31_t227D1F5F19C948CA8C23C80B5F19147D4AAED14F * ___stateMachine1, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Boolean>::Start<System.Threading.SemaphoreSlim/<WaitUntilCountOrTimeoutAsync>d__31>(TStateMachine&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_Start_TisU3CWaitUntilCountOrTimeoutAsyncU3Ed__31_t227D1F5F19C948CA8C23C80B5F19147D4AAED14F_m67A42FEF4C09E843DDA99A81F84E675F9AB87CF9_gshared (AsyncTaskMethodBuilder_1_tABE1DEF12F121D6FC8ABF04869ED964FF83EA9B5 * __this, U3CWaitUntilCountOrTimeoutAsyncU3Ed__31_t227D1F5F19C948CA8C23C80B5F19147D4AAED14F * ___stateMachine0, const RuntimeMethod* method);
// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Object>::get_Task()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 * AsyncTaskMethodBuilder_1_get_Task_m61DEC300353320E428E17DA0D59D61974F4415BB_gshared (AsyncTaskMethodBuilder_1_tDD2A3BA099C327938EA03C35FDB1A7502BA73020 * __this, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Object>::AwaitUnsafeOnCompleted<System.Object,System.Object>(TAwaiter&,TStateMachine&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisRuntimeObject_TisRuntimeObject_mD7F0BC5F052B851265FF930DD5AB23C8E96269DE_gshared (AsyncTaskMethodBuilder_1_tDD2A3BA099C327938EA03C35FDB1A7502BA73020 * __this, RuntimeObject ** ___awaiter0, RuntimeObject ** ___stateMachine1, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Object>::Start<System.Object>(TStateMachine&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_Start_TisRuntimeObject_m25C57EA59EF179635A81530036C12082EE50878B_gshared (AsyncTaskMethodBuilder_1_tDD2A3BA099C327938EA03C35FDB1A7502BA73020 * __this, RuntimeObject ** ___stateMachine0, const RuntimeMethod* method);

// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t * Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E (RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  ___handle0, const RuntimeMethod* method);
// System.Boolean UnityEngine.AndroidReflection::IsPrimitive(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AndroidReflection_IsPrimitive_mDD6A4050793DF2FA1EDF58010982C64A3F17376D (Type_t * ___t0, const RuntimeMethod* method);
// System.Int32[] UnityEngine.AndroidJNISafe::FromIntArray(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* AndroidJNISafe_FromIntArray_mBF0C0B4309BA525BBA12D7FD3C2790C8FA7C4703 (intptr_t ___array0, const RuntimeMethod* method);
// System.Boolean[] UnityEngine.AndroidJNISafe::FromBooleanArray(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C* AndroidJNISafe_FromBooleanArray_m77A66C34FCB94ADB1AD5E1D88262500C930A5DBF (intptr_t ___array0, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::LogWarning(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogWarning_m24085D883C9E74D7AB423F0625E13259923960E7 (RuntimeObject * ___message0, const RuntimeMethod* method);
// System.Byte[] UnityEngine.AndroidJNISafe::FromByteArray(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* AndroidJNISafe_FromByteArray_m81760A688AECE368E1CFF7DAAC8E141F1B8FA8A8 (intptr_t ___array0, const RuntimeMethod* method);
// System.SByte[] UnityEngine.AndroidJNISafe::FromSByteArray(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SByteU5BU5D_t7D94C53295E6116625EA7CC7DEA21FEDC39869E7* AndroidJNISafe_FromSByteArray_m01F6539AF10F86B3927436955B57CC809C52416D (intptr_t ___array0, const RuntimeMethod* method);
// System.Int16[] UnityEngine.AndroidJNISafe::FromShortArray(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* AndroidJNISafe_FromShortArray_mCDF5B796D950D31035BD35A2E463D41509E4A5CD (intptr_t ___array0, const RuntimeMethod* method);
// System.Int64[] UnityEngine.AndroidJNISafe::FromLongArray(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Int64U5BU5D_tCA61E42872C63A4286B24EEE6E0650143B43DCE6* AndroidJNISafe_FromLongArray_m0E7C56CB8CFD0EC240F0D86ECBBFD635FFE55CDA (intptr_t ___array0, const RuntimeMethod* method);
// System.Single[] UnityEngine.AndroidJNISafe::FromFloatArray(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* AndroidJNISafe_FromFloatArray_mF6A63CA1B7C10BC27EEC033F0E390772DFDD652D (intptr_t ___array0, const RuntimeMethod* method);
// System.Double[] UnityEngine.AndroidJNISafe::FromDoubleArray(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* AndroidJNISafe_FromDoubleArray_m9438B5668E8B2DB3B18CACFF0CC9CAEAB5EC73C8 (intptr_t ___array0, const RuntimeMethod* method);
// System.Char[] UnityEngine.AndroidJNISafe::FromCharArray(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* AndroidJNISafe_FromCharArray_mA49DB27755EF3B2AE81487E0FCFE06E23F617305 (intptr_t ___array0, const RuntimeMethod* method);
// System.Int32 UnityEngine.AndroidJNISafe::GetArrayLength(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AndroidJNISafe_GetArrayLength_m3015C191DBFC246946A88592731441A934507B56 (intptr_t ___array0, const RuntimeMethod* method);
// System.IntPtr UnityEngine.AndroidJNI::GetObjectArrayElement(System.IntPtr,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJNI_GetObjectArrayElement_m502026BF77232EE45D03661E4923C2E5E99FDE18 (intptr_t ___array0, int32_t ___index1, const RuntimeMethod* method);
// System.String UnityEngine.AndroidJNISafe::GetStringChars(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AndroidJNISafe_GetStringChars_mD59FFDE4192F837E1380B51569B5803E09BE58C8 (intptr_t ___str0, const RuntimeMethod* method);
// System.Void UnityEngine.AndroidJNISafe::DeleteLocalRef(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJNISafe_DeleteLocalRef_m7AB242A76D13A3BF4C04831D77960C020D6ADA39 (intptr_t ___localref0, const RuntimeMethod* method);
// System.Void UnityEngine.AndroidJavaObject::.ctor(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJavaObject__ctor_m880F6533139DF0BD36C6EF428E45E9F44B6534A3 (AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * __this, intptr_t ___jobject0, const RuntimeMethod* method);
// System.String System.String::Concat(System.Object,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_mFCF5F98D38F99DE7C831CBB9A1BAAAB148FC7D57 (RuntimeObject * ___arg00, RuntimeObject * ___arg11, RuntimeObject * ___arg22, const RuntimeMethod* method);
// System.Void System.Exception::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Exception__ctor_m8ECDE8ACA7F2E0EF1144BD1200FB5DB2870B5F11 (Exception_t * __this, String_t* ___message0, const RuntimeMethod* method);
// System.IntPtr UnityEngine.AndroidJNIHelper::GetMethodID(System.IntPtr,System.String,System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJNIHelper_GetMethodID_m2B5E7C9B05905F6C6B60A735B8A6E97BBA468535 (intptr_t ___javaClass0, String_t* ___methodName1, String_t* ___signature2, bool ___isStatic3, const RuntimeMethod* method);
// System.Void System.Text.StringBuilder::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringBuilder__ctor_m5A81DE19E748F748E19FF13FB6FFD2547F9212D9 (StringBuilder_t * __this, const RuntimeMethod* method);
// System.Text.StringBuilder System.Text.StringBuilder::Append(System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t * StringBuilder_Append_m1ADA3C16E40BF253BCDB5F9579B4DBA9C3E5B22E (StringBuilder_t * __this, Il2CppChar ___value0, const RuntimeMethod* method);
// System.String UnityEngine._AndroidJNIHelper::GetSignature(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* _AndroidJNIHelper_GetSignature_m4A272D66518BF9A4C746B02B91AAB1361293232C (RuntimeObject * ___obj0, const RuntimeMethod* method);
// System.Text.StringBuilder System.Text.StringBuilder::Append(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t * StringBuilder_Append_mD02AB0C74C6F55E3E330818C77EC147E22096FB1 (StringBuilder_t * __this, String_t* ___value0, const RuntimeMethod* method);
// System.Boolean System.Threading.Tasks.AsyncCausalityTracer::get_LoggingOn()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AsyncCausalityTracer_get_LoggingOn_mE0A03E121425371B1D1B65640172137C3B8EEA15 (const RuntimeMethod* method);
// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Boolean>::get_Task()
inline Task_1_t9C1FE9F18F52F3409B9E970FA38801A443AE7849 * AsyncTaskMethodBuilder_1_get_Task_m6F8035FA0DEBE32D20BAD45867B41491F5D55F78 (AsyncTaskMethodBuilder_1_tABE1DEF12F121D6FC8ABF04869ED964FF83EA9B5 * __this, const RuntimeMethod* method)
{
	return ((  Task_1_t9C1FE9F18F52F3409B9E970FA38801A443AE7849 * (*) (AsyncTaskMethodBuilder_1_tABE1DEF12F121D6FC8ABF04869ED964FF83EA9B5 *, const RuntimeMethod*))AsyncTaskMethodBuilder_1_get_Task_m6F8035FA0DEBE32D20BAD45867B41491F5D55F78_gshared)(__this, method);
}
// System.Action System.Runtime.CompilerServices.AsyncMethodBuilderCore::GetCompletionAction(System.Threading.Tasks.Task,System.Runtime.CompilerServices.AsyncMethodBuilderCore/MoveNextRunner&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * AsyncMethodBuilderCore_GetCompletionAction_m7FE7F57CC452F0EDE870AB08EEB648E2027D4F5C (AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34 * __this, Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * ___taskForTracing0, MoveNextRunner_tFAEA0BEDD353E2E34E8E287C67B1F5572FD30C2D ** ___runnerToInitialize1, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncMethodBuilderCore::PostBoxInitialization(System.Runtime.CompilerServices.IAsyncStateMachine,System.Runtime.CompilerServices.AsyncMethodBuilderCore/MoveNextRunner,System.Threading.Tasks.Task)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncMethodBuilderCore_PostBoxInitialization_m22C1D9A2745255C6FC1426D4CB0C4355FBDA07E3 (AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34 * __this, RuntimeObject* ___stateMachine0, MoveNextRunner_tFAEA0BEDD353E2E34E8E287C67B1F5572FD30C2D * ___runner1, Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * ___builtTask2, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncMethodBuilderCore::ThrowAsync(System.Exception,System.Threading.SynchronizationContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncMethodBuilderCore_ThrowAsync_m69800E9752B30F7A1D824C2F1EBDEBA44BA75610 (Exception_t * ___exception0, SynchronizationContext_t17D9365B5E0D30A0910A16FA4351C525232EF069 * ___targetContext1, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Boolean>::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/ConfiguredTaskAwaiter<System.Boolean>,System.Threading.SemaphoreSlim/<WaitUntilCountOrTimeoutAsync>d__31>(TAwaiter&,TStateMachine&)
inline void AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_t286C97C0AF102C4C0BE55CE2025CC7BD1FB5C20C_TisU3CWaitUntilCountOrTimeoutAsyncU3Ed__31_t227D1F5F19C948CA8C23C80B5F19147D4AAED14F_m06010DFBCE2CDD2AE1BB5ADD25230521E9B527DC (AsyncTaskMethodBuilder_1_tABE1DEF12F121D6FC8ABF04869ED964FF83EA9B5 * __this, ConfiguredTaskAwaiter_t286C97C0AF102C4C0BE55CE2025CC7BD1FB5C20C * ___awaiter0, U3CWaitUntilCountOrTimeoutAsyncU3Ed__31_t227D1F5F19C948CA8C23C80B5F19147D4AAED14F * ___stateMachine1, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_tABE1DEF12F121D6FC8ABF04869ED964FF83EA9B5 *, ConfiguredTaskAwaiter_t286C97C0AF102C4C0BE55CE2025CC7BD1FB5C20C *, U3CWaitUntilCountOrTimeoutAsyncU3Ed__31_t227D1F5F19C948CA8C23C80B5F19147D4AAED14F *, const RuntimeMethod*))AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_t286C97C0AF102C4C0BE55CE2025CC7BD1FB5C20C_TisU3CWaitUntilCountOrTimeoutAsyncU3Ed__31_t227D1F5F19C948CA8C23C80B5F19147D4AAED14F_m06010DFBCE2CDD2AE1BB5ADD25230521E9B527DC_gshared)(__this, ___awaiter0, ___stateMachine1, method);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Boolean>::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/ConfiguredTaskAwaiter<System.Object>,System.Threading.SemaphoreSlim/<WaitUntilCountOrTimeoutAsync>d__31>(TAwaiter&,TStateMachine&)
inline void AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_t2CE498F9A6CE5405242AE2D77F03E58985B7C3ED_TisU3CWaitUntilCountOrTimeoutAsyncU3Ed__31_t227D1F5F19C948CA8C23C80B5F19147D4AAED14F_m4FDC6642836D25291A0E343845527873A88013C9 (AsyncTaskMethodBuilder_1_tABE1DEF12F121D6FC8ABF04869ED964FF83EA9B5 * __this, ConfiguredTaskAwaiter_t2CE498F9A6CE5405242AE2D77F03E58985B7C3ED * ___awaiter0, U3CWaitUntilCountOrTimeoutAsyncU3Ed__31_t227D1F5F19C948CA8C23C80B5F19147D4AAED14F * ___stateMachine1, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_tABE1DEF12F121D6FC8ABF04869ED964FF83EA9B5 *, ConfiguredTaskAwaiter_t2CE498F9A6CE5405242AE2D77F03E58985B7C3ED *, U3CWaitUntilCountOrTimeoutAsyncU3Ed__31_t227D1F5F19C948CA8C23C80B5F19147D4AAED14F *, const RuntimeMethod*))AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_t2CE498F9A6CE5405242AE2D77F03E58985B7C3ED_TisU3CWaitUntilCountOrTimeoutAsyncU3Ed__31_t227D1F5F19C948CA8C23C80B5F19147D4AAED14F_m4FDC6642836D25291A0E343845527873A88013C9_gshared)(__this, ___awaiter0, ___stateMachine1, method);
}
// System.Void System.ArgumentNullException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentNullException__ctor_m81AB157B93BFE2FBFDB08B88F84B444293042F97 (ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB * __this, String_t* ___paramName0, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.RuntimeHelpers::PrepareConstrainedRegions()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RuntimeHelpers_PrepareConstrainedRegions_m4A4D3987FEE068EE30D1ABC4005CDD29D5C52560 (const RuntimeMethod* method);
// System.Void System.Threading.ExecutionContext::EstablishCopyOnWriteScope(System.Threading.ExecutionContextSwitcher&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExecutionContext_EstablishCopyOnWriteScope_m526741703B27626D3AD07B14ADA3FECBF5C4E8DD (ExecutionContextSwitcher_t11B7DEE83408478EE3D5E29C988E5385AA9D7277 * ___ecsw0, const RuntimeMethod* method);
// System.Void System.Threading.SemaphoreSlim/<WaitUntilCountOrTimeoutAsync>d__31::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CWaitUntilCountOrTimeoutAsyncU3Ed__31_MoveNext_mB5E635B57C016D9A7039342703EB200F7BE8218E (U3CWaitUntilCountOrTimeoutAsyncU3Ed__31_t227D1F5F19C948CA8C23C80B5F19147D4AAED14F * __this, const RuntimeMethod* method);
// System.Void System.Threading.ExecutionContextSwitcher::Undo()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExecutionContextSwitcher_Undo_mEC7752EB8502405D0F45F0E337C1B1FF34B74BF8 (ExecutionContextSwitcher_t11B7DEE83408478EE3D5E29C988E5385AA9D7277 * __this, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Boolean>::Start<System.Threading.SemaphoreSlim/<WaitUntilCountOrTimeoutAsync>d__31>(TStateMachine&)
inline void AsyncTaskMethodBuilder_1_Start_TisU3CWaitUntilCountOrTimeoutAsyncU3Ed__31_t227D1F5F19C948CA8C23C80B5F19147D4AAED14F_m67A42FEF4C09E843DDA99A81F84E675F9AB87CF9 (AsyncTaskMethodBuilder_1_tABE1DEF12F121D6FC8ABF04869ED964FF83EA9B5 * __this, U3CWaitUntilCountOrTimeoutAsyncU3Ed__31_t227D1F5F19C948CA8C23C80B5F19147D4AAED14F * ___stateMachine0, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_tABE1DEF12F121D6FC8ABF04869ED964FF83EA9B5 *, U3CWaitUntilCountOrTimeoutAsyncU3Ed__31_t227D1F5F19C948CA8C23C80B5F19147D4AAED14F *, const RuntimeMethod*))AsyncTaskMethodBuilder_1_Start_TisU3CWaitUntilCountOrTimeoutAsyncU3Ed__31_t227D1F5F19C948CA8C23C80B5F19147D4AAED14F_m67A42FEF4C09E843DDA99A81F84E675F9AB87CF9_gshared)(__this, ___stateMachine0, method);
}
// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Object>::get_Task()
inline Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 * AsyncTaskMethodBuilder_1_get_Task_m61DEC300353320E428E17DA0D59D61974F4415BB (AsyncTaskMethodBuilder_1_tDD2A3BA099C327938EA03C35FDB1A7502BA73020 * __this, const RuntimeMethod* method)
{
	return ((  Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 * (*) (AsyncTaskMethodBuilder_1_tDD2A3BA099C327938EA03C35FDB1A7502BA73020 *, const RuntimeMethod*))AsyncTaskMethodBuilder_1_get_Task_m61DEC300353320E428E17DA0D59D61974F4415BB_gshared)(__this, method);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Object>::AwaitUnsafeOnCompleted<System.Object,System.Object>(TAwaiter&,TStateMachine&)
inline void AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisRuntimeObject_TisRuntimeObject_mD7F0BC5F052B851265FF930DD5AB23C8E96269DE (AsyncTaskMethodBuilder_1_tDD2A3BA099C327938EA03C35FDB1A7502BA73020 * __this, RuntimeObject ** ___awaiter0, RuntimeObject ** ___stateMachine1, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_tDD2A3BA099C327938EA03C35FDB1A7502BA73020 *, RuntimeObject **, RuntimeObject **, const RuntimeMethod*))AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisRuntimeObject_TisRuntimeObject_mD7F0BC5F052B851265FF930DD5AB23C8E96269DE_gshared)(__this, ___awaiter0, ___stateMachine1, method);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Object>::Start<System.Object>(TStateMachine&)
inline void AsyncTaskMethodBuilder_1_Start_TisRuntimeObject_m25C57EA59EF179635A81530036C12082EE50878B (AsyncTaskMethodBuilder_1_tDD2A3BA099C327938EA03C35FDB1A7502BA73020 * __this, RuntimeObject ** ___stateMachine0, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_tDD2A3BA099C327938EA03C35FDB1A7502BA73020 *, RuntimeObject **, const RuntimeMethod*))AsyncTaskMethodBuilder_1_Start_TisRuntimeObject_m25C57EA59EF179635A81530036C12082EE50878B_gshared)(__this, ___stateMachine0, method);
}
// ArrayType UnityEngine._AndroidJNIHelper::ConvertFromJNIArray<System.Double>(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double _AndroidJNIHelper_ConvertFromJNIArray_TisDouble_t42821932CB52DE2057E685D0E1AF3DE5033D2181_m5DFA0BED6B580096B2E3ADB1394F918653E21D07_gshared (intptr_t ___array0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (_AndroidJNIHelper_ConvertFromJNIArray_TisDouble_t42821932CB52DE2057E685D0E1AF3DE5033D2181_m5DFA0BED6B580096B2E3ADB1394F918653E21D07_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Type_t * V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	double V_3 = 0.0;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	bool V_8 = false;
	bool V_9 = false;
	bool V_10 = false;
	bool V_11 = false;
	bool V_12 = false;
	int32_t V_13 = 0;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* V_14 = NULL;
	int32_t V_15 = 0;
	intptr_t V_16;
	memset((&V_16), 0, sizeof(V_16));
	bool V_17 = false;
	bool V_18 = false;
	int32_t V_19 = 0;
	AndroidJavaObjectU5BU5D_tEE28563C9013906CEB39794019A55F4BA5B06120* V_20 = NULL;
	int32_t V_21 = 0;
	intptr_t V_22;
	memset((&V_22), 0, sizeof(V_22));
	bool V_23 = false;
	double V_24 = 0.0;
	{
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_0 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->rgctx_data, 0)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_1 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_0, /*hidden argument*/NULL);
		NullCheck((Type_t *)L_1);
		Type_t * L_2 = VirtFuncInvoker0< Type_t * >::Invoke(97 /* System.Type System.Type::GetElementType() */, (Type_t *)L_1);
		V_0 = (Type_t *)L_2;
		Type_t * L_3 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(AndroidReflection_tEB6633FD5B7D2816E1AC6C711E11B2DD33822F16_il2cpp_TypeInfo_var);
		bool L_4 = AndroidReflection_IsPrimitive_mDD6A4050793DF2FA1EDF58010982C64A3F17376D((Type_t *)L_3, /*hidden argument*/NULL);
		V_1 = (bool)L_4;
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_0173;
		}
	}
	{
		Type_t * L_6 = V_0;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_7 = { reinterpret_cast<intptr_t> (Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_8 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_7, /*hidden argument*/NULL);
		V_2 = (bool)((((RuntimeObject*)(Type_t *)L_6) == ((RuntimeObject*)(Type_t *)L_8))? 1 : 0);
		bool L_9 = V_2;
		if (!L_9)
		{
			goto IL_0041;
		}
	}
	{
		intptr_t L_10 = ___array0;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_11 = AndroidJNISafe_FromIntArray_mBF0C0B4309BA525BBA12D7FD3C2790C8FA7C4703((intptr_t)L_10, /*hidden argument*/NULL);
		V_3 = (double)((*(double*)((double*)UnBox((RuntimeObject *)L_11, IL2CPP_RGCTX_DATA(method->rgctx_data, 1)))));
		goto IL_0266;
	}

IL_0041:
	{
		Type_t * L_12 = V_0;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_13 = { reinterpret_cast<intptr_t> (Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_14 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_13, /*hidden argument*/NULL);
		V_4 = (bool)((((RuntimeObject*)(Type_t *)L_12) == ((RuntimeObject*)(Type_t *)L_14))? 1 : 0);
		bool L_15 = V_4;
		if (!L_15)
		{
			goto IL_0065;
		}
	}
	{
		intptr_t L_16 = ___array0;
		BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C* L_17 = AndroidJNISafe_FromBooleanArray_m77A66C34FCB94ADB1AD5E1D88262500C930A5DBF((intptr_t)L_16, /*hidden argument*/NULL);
		V_3 = (double)((*(double*)((double*)UnBox((RuntimeObject *)L_17, IL2CPP_RGCTX_DATA(method->rgctx_data, 1)))));
		goto IL_0266;
	}

IL_0065:
	{
		Type_t * L_18 = V_0;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_19 = { reinterpret_cast<intptr_t> (Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_20 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_19, /*hidden argument*/NULL);
		V_5 = (bool)((((RuntimeObject*)(Type_t *)L_18) == ((RuntimeObject*)(Type_t *)L_20))? 1 : 0);
		bool L_21 = V_5;
		if (!L_21)
		{
			goto IL_0095;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_LogWarning_m24085D883C9E74D7AB423F0625E13259923960E7((RuntimeObject *)_stringLiteral24CC8D396132365E532646F936DFC8579E2299B2, /*hidden argument*/NULL);
		intptr_t L_22 = ___array0;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_23 = AndroidJNISafe_FromByteArray_m81760A688AECE368E1CFF7DAAC8E141F1B8FA8A8((intptr_t)L_22, /*hidden argument*/NULL);
		V_3 = (double)((*(double*)((double*)UnBox((RuntimeObject *)L_23, IL2CPP_RGCTX_DATA(method->rgctx_data, 1)))));
		goto IL_0266;
	}

IL_0095:
	{
		Type_t * L_24 = V_0;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_25 = { reinterpret_cast<intptr_t> (SByte_t928712DD662DC29BA4FAAE8CE2230AFB23447F0B_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_26 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_25, /*hidden argument*/NULL);
		V_6 = (bool)((((RuntimeObject*)(Type_t *)L_24) == ((RuntimeObject*)(Type_t *)L_26))? 1 : 0);
		bool L_27 = V_6;
		if (!L_27)
		{
			goto IL_00b9;
		}
	}
	{
		intptr_t L_28 = ___array0;
		SByteU5BU5D_t7D94C53295E6116625EA7CC7DEA21FEDC39869E7* L_29 = AndroidJNISafe_FromSByteArray_m01F6539AF10F86B3927436955B57CC809C52416D((intptr_t)L_28, /*hidden argument*/NULL);
		V_3 = (double)((*(double*)((double*)UnBox((RuntimeObject *)L_29, IL2CPP_RGCTX_DATA(method->rgctx_data, 1)))));
		goto IL_0266;
	}

IL_00b9:
	{
		Type_t * L_30 = V_0;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_31 = { reinterpret_cast<intptr_t> (Int16_tD0F031114106263BB459DA1F099FF9F42691295A_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_32 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_31, /*hidden argument*/NULL);
		V_7 = (bool)((((RuntimeObject*)(Type_t *)L_30) == ((RuntimeObject*)(Type_t *)L_32))? 1 : 0);
		bool L_33 = V_7;
		if (!L_33)
		{
			goto IL_00dd;
		}
	}
	{
		intptr_t L_34 = ___array0;
		Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* L_35 = AndroidJNISafe_FromShortArray_mCDF5B796D950D31035BD35A2E463D41509E4A5CD((intptr_t)L_34, /*hidden argument*/NULL);
		V_3 = (double)((*(double*)((double*)UnBox((RuntimeObject *)L_35, IL2CPP_RGCTX_DATA(method->rgctx_data, 1)))));
		goto IL_0266;
	}

IL_00dd:
	{
		Type_t * L_36 = V_0;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_37 = { reinterpret_cast<intptr_t> (Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_38 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_37, /*hidden argument*/NULL);
		V_8 = (bool)((((RuntimeObject*)(Type_t *)L_36) == ((RuntimeObject*)(Type_t *)L_38))? 1 : 0);
		bool L_39 = V_8;
		if (!L_39)
		{
			goto IL_0101;
		}
	}
	{
		intptr_t L_40 = ___array0;
		Int64U5BU5D_tCA61E42872C63A4286B24EEE6E0650143B43DCE6* L_41 = AndroidJNISafe_FromLongArray_m0E7C56CB8CFD0EC240F0D86ECBBFD635FFE55CDA((intptr_t)L_40, /*hidden argument*/NULL);
		V_3 = (double)((*(double*)((double*)UnBox((RuntimeObject *)L_41, IL2CPP_RGCTX_DATA(method->rgctx_data, 1)))));
		goto IL_0266;
	}

IL_0101:
	{
		Type_t * L_42 = V_0;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_43 = { reinterpret_cast<intptr_t> (Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_44 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_43, /*hidden argument*/NULL);
		V_9 = (bool)((((RuntimeObject*)(Type_t *)L_42) == ((RuntimeObject*)(Type_t *)L_44))? 1 : 0);
		bool L_45 = V_9;
		if (!L_45)
		{
			goto IL_0125;
		}
	}
	{
		intptr_t L_46 = ___array0;
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_47 = AndroidJNISafe_FromFloatArray_mF6A63CA1B7C10BC27EEC033F0E390772DFDD652D((intptr_t)L_46, /*hidden argument*/NULL);
		V_3 = (double)((*(double*)((double*)UnBox((RuntimeObject *)L_47, IL2CPP_RGCTX_DATA(method->rgctx_data, 1)))));
		goto IL_0266;
	}

IL_0125:
	{
		Type_t * L_48 = V_0;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_49 = { reinterpret_cast<intptr_t> (Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_50 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_49, /*hidden argument*/NULL);
		V_10 = (bool)((((RuntimeObject*)(Type_t *)L_48) == ((RuntimeObject*)(Type_t *)L_50))? 1 : 0);
		bool L_51 = V_10;
		if (!L_51)
		{
			goto IL_0149;
		}
	}
	{
		intptr_t L_52 = ___array0;
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_53 = AndroidJNISafe_FromDoubleArray_m9438B5668E8B2DB3B18CACFF0CC9CAEAB5EC73C8((intptr_t)L_52, /*hidden argument*/NULL);
		V_3 = (double)((*(double*)((double*)UnBox((RuntimeObject *)L_53, IL2CPP_RGCTX_DATA(method->rgctx_data, 1)))));
		goto IL_0266;
	}

IL_0149:
	{
		Type_t * L_54 = V_0;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_55 = { reinterpret_cast<intptr_t> (Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_56 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_55, /*hidden argument*/NULL);
		V_11 = (bool)((((RuntimeObject*)(Type_t *)L_54) == ((RuntimeObject*)(Type_t *)L_56))? 1 : 0);
		bool L_57 = V_11;
		if (!L_57)
		{
			goto IL_016d;
		}
	}
	{
		intptr_t L_58 = ___array0;
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_59 = AndroidJNISafe_FromCharArray_mA49DB27755EF3B2AE81487E0FCFE06E23F617305((intptr_t)L_58, /*hidden argument*/NULL);
		V_3 = (double)((*(double*)((double*)UnBox((RuntimeObject *)L_59, IL2CPP_RGCTX_DATA(method->rgctx_data, 1)))));
		goto IL_0266;
	}

IL_016d:
	{
		goto IL_0259;
	}

IL_0173:
	{
		Type_t * L_60 = V_0;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_61 = { reinterpret_cast<intptr_t> (String_t_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_62 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_61, /*hidden argument*/NULL);
		V_12 = (bool)((((RuntimeObject*)(Type_t *)L_60) == ((RuntimeObject*)(Type_t *)L_62))? 1 : 0);
		bool L_63 = V_12;
		if (!L_63)
		{
			goto IL_01dc;
		}
	}
	{
		intptr_t L_64 = ___array0;
		int32_t L_65 = AndroidJNISafe_GetArrayLength_m3015C191DBFC246946A88592731441A934507B56((intptr_t)L_64, /*hidden argument*/NULL);
		V_13 = (int32_t)L_65;
		int32_t L_66 = V_13;
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_67 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)SZArrayNew(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var, (uint32_t)L_66);
		V_14 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)L_67;
		V_15 = (int32_t)0;
		goto IL_01c3;
	}

IL_019d:
	{
		intptr_t L_68 = ___array0;
		int32_t L_69 = V_15;
		intptr_t L_70 = AndroidJNI_GetObjectArrayElement_m502026BF77232EE45D03661E4923C2E5E99FDE18((intptr_t)L_68, (int32_t)L_69, /*hidden argument*/NULL);
		V_16 = (intptr_t)L_70;
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_71 = V_14;
		int32_t L_72 = V_15;
		intptr_t L_73 = V_16;
		String_t* L_74 = AndroidJNISafe_GetStringChars_mD59FFDE4192F837E1380B51569B5803E09BE58C8((intptr_t)L_73, /*hidden argument*/NULL);
		NullCheck(L_71);
		ArrayElementTypeCheck (L_71, L_74);
		(L_71)->SetAt(static_cast<il2cpp_array_size_t>(L_72), (String_t*)L_74);
		intptr_t L_75 = V_16;
		AndroidJNISafe_DeleteLocalRef_m7AB242A76D13A3BF4C04831D77960C020D6ADA39((intptr_t)L_75, /*hidden argument*/NULL);
		int32_t L_76 = V_15;
		V_15 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_76, (int32_t)1));
	}

IL_01c3:
	{
		int32_t L_77 = V_15;
		int32_t L_78 = V_13;
		V_17 = (bool)((((int32_t)L_77) < ((int32_t)L_78))? 1 : 0);
		bool L_79 = V_17;
		if (L_79)
		{
			goto IL_019d;
		}
	}
	{
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_80 = V_14;
		V_3 = (double)((*(double*)((double*)UnBox((RuntimeObject *)L_80, IL2CPP_RGCTX_DATA(method->rgctx_data, 1)))));
		goto IL_0266;
	}

IL_01dc:
	{
		Type_t * L_81 = V_0;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_82 = { reinterpret_cast<intptr_t> (AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_83 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_82, /*hidden argument*/NULL);
		V_18 = (bool)((((RuntimeObject*)(Type_t *)L_81) == ((RuntimeObject*)(Type_t *)L_83))? 1 : 0);
		bool L_84 = V_18;
		if (!L_84)
		{
			goto IL_0242;
		}
	}
	{
		intptr_t L_85 = ___array0;
		int32_t L_86 = AndroidJNISafe_GetArrayLength_m3015C191DBFC246946A88592731441A934507B56((intptr_t)L_85, /*hidden argument*/NULL);
		V_19 = (int32_t)L_86;
		int32_t L_87 = V_19;
		AndroidJavaObjectU5BU5D_tEE28563C9013906CEB39794019A55F4BA5B06120* L_88 = (AndroidJavaObjectU5BU5D_tEE28563C9013906CEB39794019A55F4BA5B06120*)(AndroidJavaObjectU5BU5D_tEE28563C9013906CEB39794019A55F4BA5B06120*)SZArrayNew(AndroidJavaObjectU5BU5D_tEE28563C9013906CEB39794019A55F4BA5B06120_il2cpp_TypeInfo_var, (uint32_t)L_87);
		V_20 = (AndroidJavaObjectU5BU5D_tEE28563C9013906CEB39794019A55F4BA5B06120*)L_88;
		V_21 = (int32_t)0;
		goto IL_022c;
	}

IL_0206:
	{
		intptr_t L_89 = ___array0;
		int32_t L_90 = V_21;
		intptr_t L_91 = AndroidJNI_GetObjectArrayElement_m502026BF77232EE45D03661E4923C2E5E99FDE18((intptr_t)L_89, (int32_t)L_90, /*hidden argument*/NULL);
		V_22 = (intptr_t)L_91;
		AndroidJavaObjectU5BU5D_tEE28563C9013906CEB39794019A55F4BA5B06120* L_92 = V_20;
		int32_t L_93 = V_21;
		intptr_t L_94 = V_22;
		AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_95 = (AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E *)il2cpp_codegen_object_new(AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_il2cpp_TypeInfo_var);
		AndroidJavaObject__ctor_m880F6533139DF0BD36C6EF428E45E9F44B6534A3(L_95, (intptr_t)L_94, /*hidden argument*/NULL);
		NullCheck(L_92);
		ArrayElementTypeCheck (L_92, L_95);
		(L_92)->SetAt(static_cast<il2cpp_array_size_t>(L_93), (AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E *)L_95);
		intptr_t L_96 = V_22;
		AndroidJNISafe_DeleteLocalRef_m7AB242A76D13A3BF4C04831D77960C020D6ADA39((intptr_t)L_96, /*hidden argument*/NULL);
		int32_t L_97 = V_21;
		V_21 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_97, (int32_t)1));
	}

IL_022c:
	{
		int32_t L_98 = V_21;
		int32_t L_99 = V_19;
		V_23 = (bool)((((int32_t)L_98) < ((int32_t)L_99))? 1 : 0);
		bool L_100 = V_23;
		if (L_100)
		{
			goto IL_0206;
		}
	}
	{
		AndroidJavaObjectU5BU5D_tEE28563C9013906CEB39794019A55F4BA5B06120* L_101 = V_20;
		V_3 = (double)((*(double*)((double*)UnBox((RuntimeObject *)L_101, IL2CPP_RGCTX_DATA(method->rgctx_data, 1)))));
		goto IL_0266;
	}

IL_0242:
	{
		Type_t * L_102 = V_0;
		String_t* L_103 = String_Concat_mFCF5F98D38F99DE7C831CBB9A1BAAAB148FC7D57((RuntimeObject *)_stringLiteral51253131B895C2F8066BCC47E62D44F18F43446C, (RuntimeObject *)L_102, (RuntimeObject *)_stringLiteral42646B33B50B6AA15E22733C8900716F0FE19E1D, /*hidden argument*/NULL);
		Exception_t * L_104 = (Exception_t *)il2cpp_codegen_object_new(Exception_t_il2cpp_TypeInfo_var);
		Exception__ctor_m8ECDE8ACA7F2E0EF1144BD1200FB5DB2870B5F11(L_104, (String_t*)L_103, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_104, _AndroidJNIHelper_ConvertFromJNIArray_TisDouble_t42821932CB52DE2057E685D0E1AF3DE5033D2181_m5DFA0BED6B580096B2E3ADB1394F918653E21D07_RuntimeMethod_var);
	}

IL_0259:
	{
		il2cpp_codegen_initobj((&V_24), sizeof(double));
		double L_105 = V_24;
		V_3 = (double)L_105;
		goto IL_0266;
	}

IL_0266:
	{
		double L_106 = V_3;
		return L_106;
	}
}
// ArrayType UnityEngine._AndroidJNIHelper::ConvertFromJNIArray<System.Int16>(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int16_t _AndroidJNIHelper_ConvertFromJNIArray_TisInt16_tD0F031114106263BB459DA1F099FF9F42691295A_m8139D52A1384EE34677345013798688D522DFF37_gshared (intptr_t ___array0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (_AndroidJNIHelper_ConvertFromJNIArray_TisInt16_tD0F031114106263BB459DA1F099FF9F42691295A_m8139D52A1384EE34677345013798688D522DFF37_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Type_t * V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	int16_t V_3 = 0;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	bool V_8 = false;
	bool V_9 = false;
	bool V_10 = false;
	bool V_11 = false;
	bool V_12 = false;
	int32_t V_13 = 0;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* V_14 = NULL;
	int32_t V_15 = 0;
	intptr_t V_16;
	memset((&V_16), 0, sizeof(V_16));
	bool V_17 = false;
	bool V_18 = false;
	int32_t V_19 = 0;
	AndroidJavaObjectU5BU5D_tEE28563C9013906CEB39794019A55F4BA5B06120* V_20 = NULL;
	int32_t V_21 = 0;
	intptr_t V_22;
	memset((&V_22), 0, sizeof(V_22));
	bool V_23 = false;
	int16_t V_24 = 0;
	{
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_0 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->rgctx_data, 0)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_1 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_0, /*hidden argument*/NULL);
		NullCheck((Type_t *)L_1);
		Type_t * L_2 = VirtFuncInvoker0< Type_t * >::Invoke(97 /* System.Type System.Type::GetElementType() */, (Type_t *)L_1);
		V_0 = (Type_t *)L_2;
		Type_t * L_3 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(AndroidReflection_tEB6633FD5B7D2816E1AC6C711E11B2DD33822F16_il2cpp_TypeInfo_var);
		bool L_4 = AndroidReflection_IsPrimitive_mDD6A4050793DF2FA1EDF58010982C64A3F17376D((Type_t *)L_3, /*hidden argument*/NULL);
		V_1 = (bool)L_4;
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_0173;
		}
	}
	{
		Type_t * L_6 = V_0;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_7 = { reinterpret_cast<intptr_t> (Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_8 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_7, /*hidden argument*/NULL);
		V_2 = (bool)((((RuntimeObject*)(Type_t *)L_6) == ((RuntimeObject*)(Type_t *)L_8))? 1 : 0);
		bool L_9 = V_2;
		if (!L_9)
		{
			goto IL_0041;
		}
	}
	{
		intptr_t L_10 = ___array0;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_11 = AndroidJNISafe_FromIntArray_mBF0C0B4309BA525BBA12D7FD3C2790C8FA7C4703((intptr_t)L_10, /*hidden argument*/NULL);
		V_3 = (int16_t)((*(int16_t*)((int16_t*)UnBox((RuntimeObject *)L_11, IL2CPP_RGCTX_DATA(method->rgctx_data, 1)))));
		goto IL_0266;
	}

IL_0041:
	{
		Type_t * L_12 = V_0;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_13 = { reinterpret_cast<intptr_t> (Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_14 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_13, /*hidden argument*/NULL);
		V_4 = (bool)((((RuntimeObject*)(Type_t *)L_12) == ((RuntimeObject*)(Type_t *)L_14))? 1 : 0);
		bool L_15 = V_4;
		if (!L_15)
		{
			goto IL_0065;
		}
	}
	{
		intptr_t L_16 = ___array0;
		BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C* L_17 = AndroidJNISafe_FromBooleanArray_m77A66C34FCB94ADB1AD5E1D88262500C930A5DBF((intptr_t)L_16, /*hidden argument*/NULL);
		V_3 = (int16_t)((*(int16_t*)((int16_t*)UnBox((RuntimeObject *)L_17, IL2CPP_RGCTX_DATA(method->rgctx_data, 1)))));
		goto IL_0266;
	}

IL_0065:
	{
		Type_t * L_18 = V_0;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_19 = { reinterpret_cast<intptr_t> (Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_20 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_19, /*hidden argument*/NULL);
		V_5 = (bool)((((RuntimeObject*)(Type_t *)L_18) == ((RuntimeObject*)(Type_t *)L_20))? 1 : 0);
		bool L_21 = V_5;
		if (!L_21)
		{
			goto IL_0095;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_LogWarning_m24085D883C9E74D7AB423F0625E13259923960E7((RuntimeObject *)_stringLiteral24CC8D396132365E532646F936DFC8579E2299B2, /*hidden argument*/NULL);
		intptr_t L_22 = ___array0;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_23 = AndroidJNISafe_FromByteArray_m81760A688AECE368E1CFF7DAAC8E141F1B8FA8A8((intptr_t)L_22, /*hidden argument*/NULL);
		V_3 = (int16_t)((*(int16_t*)((int16_t*)UnBox((RuntimeObject *)L_23, IL2CPP_RGCTX_DATA(method->rgctx_data, 1)))));
		goto IL_0266;
	}

IL_0095:
	{
		Type_t * L_24 = V_0;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_25 = { reinterpret_cast<intptr_t> (SByte_t928712DD662DC29BA4FAAE8CE2230AFB23447F0B_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_26 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_25, /*hidden argument*/NULL);
		V_6 = (bool)((((RuntimeObject*)(Type_t *)L_24) == ((RuntimeObject*)(Type_t *)L_26))? 1 : 0);
		bool L_27 = V_6;
		if (!L_27)
		{
			goto IL_00b9;
		}
	}
	{
		intptr_t L_28 = ___array0;
		SByteU5BU5D_t7D94C53295E6116625EA7CC7DEA21FEDC39869E7* L_29 = AndroidJNISafe_FromSByteArray_m01F6539AF10F86B3927436955B57CC809C52416D((intptr_t)L_28, /*hidden argument*/NULL);
		V_3 = (int16_t)((*(int16_t*)((int16_t*)UnBox((RuntimeObject *)L_29, IL2CPP_RGCTX_DATA(method->rgctx_data, 1)))));
		goto IL_0266;
	}

IL_00b9:
	{
		Type_t * L_30 = V_0;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_31 = { reinterpret_cast<intptr_t> (Int16_tD0F031114106263BB459DA1F099FF9F42691295A_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_32 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_31, /*hidden argument*/NULL);
		V_7 = (bool)((((RuntimeObject*)(Type_t *)L_30) == ((RuntimeObject*)(Type_t *)L_32))? 1 : 0);
		bool L_33 = V_7;
		if (!L_33)
		{
			goto IL_00dd;
		}
	}
	{
		intptr_t L_34 = ___array0;
		Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* L_35 = AndroidJNISafe_FromShortArray_mCDF5B796D950D31035BD35A2E463D41509E4A5CD((intptr_t)L_34, /*hidden argument*/NULL);
		V_3 = (int16_t)((*(int16_t*)((int16_t*)UnBox((RuntimeObject *)L_35, IL2CPP_RGCTX_DATA(method->rgctx_data, 1)))));
		goto IL_0266;
	}

IL_00dd:
	{
		Type_t * L_36 = V_0;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_37 = { reinterpret_cast<intptr_t> (Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_38 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_37, /*hidden argument*/NULL);
		V_8 = (bool)((((RuntimeObject*)(Type_t *)L_36) == ((RuntimeObject*)(Type_t *)L_38))? 1 : 0);
		bool L_39 = V_8;
		if (!L_39)
		{
			goto IL_0101;
		}
	}
	{
		intptr_t L_40 = ___array0;
		Int64U5BU5D_tCA61E42872C63A4286B24EEE6E0650143B43DCE6* L_41 = AndroidJNISafe_FromLongArray_m0E7C56CB8CFD0EC240F0D86ECBBFD635FFE55CDA((intptr_t)L_40, /*hidden argument*/NULL);
		V_3 = (int16_t)((*(int16_t*)((int16_t*)UnBox((RuntimeObject *)L_41, IL2CPP_RGCTX_DATA(method->rgctx_data, 1)))));
		goto IL_0266;
	}

IL_0101:
	{
		Type_t * L_42 = V_0;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_43 = { reinterpret_cast<intptr_t> (Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_44 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_43, /*hidden argument*/NULL);
		V_9 = (bool)((((RuntimeObject*)(Type_t *)L_42) == ((RuntimeObject*)(Type_t *)L_44))? 1 : 0);
		bool L_45 = V_9;
		if (!L_45)
		{
			goto IL_0125;
		}
	}
	{
		intptr_t L_46 = ___array0;
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_47 = AndroidJNISafe_FromFloatArray_mF6A63CA1B7C10BC27EEC033F0E390772DFDD652D((intptr_t)L_46, /*hidden argument*/NULL);
		V_3 = (int16_t)((*(int16_t*)((int16_t*)UnBox((RuntimeObject *)L_47, IL2CPP_RGCTX_DATA(method->rgctx_data, 1)))));
		goto IL_0266;
	}

IL_0125:
	{
		Type_t * L_48 = V_0;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_49 = { reinterpret_cast<intptr_t> (Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_50 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_49, /*hidden argument*/NULL);
		V_10 = (bool)((((RuntimeObject*)(Type_t *)L_48) == ((RuntimeObject*)(Type_t *)L_50))? 1 : 0);
		bool L_51 = V_10;
		if (!L_51)
		{
			goto IL_0149;
		}
	}
	{
		intptr_t L_52 = ___array0;
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_53 = AndroidJNISafe_FromDoubleArray_m9438B5668E8B2DB3B18CACFF0CC9CAEAB5EC73C8((intptr_t)L_52, /*hidden argument*/NULL);
		V_3 = (int16_t)((*(int16_t*)((int16_t*)UnBox((RuntimeObject *)L_53, IL2CPP_RGCTX_DATA(method->rgctx_data, 1)))));
		goto IL_0266;
	}

IL_0149:
	{
		Type_t * L_54 = V_0;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_55 = { reinterpret_cast<intptr_t> (Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_56 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_55, /*hidden argument*/NULL);
		V_11 = (bool)((((RuntimeObject*)(Type_t *)L_54) == ((RuntimeObject*)(Type_t *)L_56))? 1 : 0);
		bool L_57 = V_11;
		if (!L_57)
		{
			goto IL_016d;
		}
	}
	{
		intptr_t L_58 = ___array0;
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_59 = AndroidJNISafe_FromCharArray_mA49DB27755EF3B2AE81487E0FCFE06E23F617305((intptr_t)L_58, /*hidden argument*/NULL);
		V_3 = (int16_t)((*(int16_t*)((int16_t*)UnBox((RuntimeObject *)L_59, IL2CPP_RGCTX_DATA(method->rgctx_data, 1)))));
		goto IL_0266;
	}

IL_016d:
	{
		goto IL_0259;
	}

IL_0173:
	{
		Type_t * L_60 = V_0;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_61 = { reinterpret_cast<intptr_t> (String_t_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_62 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_61, /*hidden argument*/NULL);
		V_12 = (bool)((((RuntimeObject*)(Type_t *)L_60) == ((RuntimeObject*)(Type_t *)L_62))? 1 : 0);
		bool L_63 = V_12;
		if (!L_63)
		{
			goto IL_01dc;
		}
	}
	{
		intptr_t L_64 = ___array0;
		int32_t L_65 = AndroidJNISafe_GetArrayLength_m3015C191DBFC246946A88592731441A934507B56((intptr_t)L_64, /*hidden argument*/NULL);
		V_13 = (int32_t)L_65;
		int32_t L_66 = V_13;
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_67 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)SZArrayNew(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var, (uint32_t)L_66);
		V_14 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)L_67;
		V_15 = (int32_t)0;
		goto IL_01c3;
	}

IL_019d:
	{
		intptr_t L_68 = ___array0;
		int32_t L_69 = V_15;
		intptr_t L_70 = AndroidJNI_GetObjectArrayElement_m502026BF77232EE45D03661E4923C2E5E99FDE18((intptr_t)L_68, (int32_t)L_69, /*hidden argument*/NULL);
		V_16 = (intptr_t)L_70;
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_71 = V_14;
		int32_t L_72 = V_15;
		intptr_t L_73 = V_16;
		String_t* L_74 = AndroidJNISafe_GetStringChars_mD59FFDE4192F837E1380B51569B5803E09BE58C8((intptr_t)L_73, /*hidden argument*/NULL);
		NullCheck(L_71);
		ArrayElementTypeCheck (L_71, L_74);
		(L_71)->SetAt(static_cast<il2cpp_array_size_t>(L_72), (String_t*)L_74);
		intptr_t L_75 = V_16;
		AndroidJNISafe_DeleteLocalRef_m7AB242A76D13A3BF4C04831D77960C020D6ADA39((intptr_t)L_75, /*hidden argument*/NULL);
		int32_t L_76 = V_15;
		V_15 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_76, (int32_t)1));
	}

IL_01c3:
	{
		int32_t L_77 = V_15;
		int32_t L_78 = V_13;
		V_17 = (bool)((((int32_t)L_77) < ((int32_t)L_78))? 1 : 0);
		bool L_79 = V_17;
		if (L_79)
		{
			goto IL_019d;
		}
	}
	{
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_80 = V_14;
		V_3 = (int16_t)((*(int16_t*)((int16_t*)UnBox((RuntimeObject *)L_80, IL2CPP_RGCTX_DATA(method->rgctx_data, 1)))));
		goto IL_0266;
	}

IL_01dc:
	{
		Type_t * L_81 = V_0;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_82 = { reinterpret_cast<intptr_t> (AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_83 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_82, /*hidden argument*/NULL);
		V_18 = (bool)((((RuntimeObject*)(Type_t *)L_81) == ((RuntimeObject*)(Type_t *)L_83))? 1 : 0);
		bool L_84 = V_18;
		if (!L_84)
		{
			goto IL_0242;
		}
	}
	{
		intptr_t L_85 = ___array0;
		int32_t L_86 = AndroidJNISafe_GetArrayLength_m3015C191DBFC246946A88592731441A934507B56((intptr_t)L_85, /*hidden argument*/NULL);
		V_19 = (int32_t)L_86;
		int32_t L_87 = V_19;
		AndroidJavaObjectU5BU5D_tEE28563C9013906CEB39794019A55F4BA5B06120* L_88 = (AndroidJavaObjectU5BU5D_tEE28563C9013906CEB39794019A55F4BA5B06120*)(AndroidJavaObjectU5BU5D_tEE28563C9013906CEB39794019A55F4BA5B06120*)SZArrayNew(AndroidJavaObjectU5BU5D_tEE28563C9013906CEB39794019A55F4BA5B06120_il2cpp_TypeInfo_var, (uint32_t)L_87);
		V_20 = (AndroidJavaObjectU5BU5D_tEE28563C9013906CEB39794019A55F4BA5B06120*)L_88;
		V_21 = (int32_t)0;
		goto IL_022c;
	}

IL_0206:
	{
		intptr_t L_89 = ___array0;
		int32_t L_90 = V_21;
		intptr_t L_91 = AndroidJNI_GetObjectArrayElement_m502026BF77232EE45D03661E4923C2E5E99FDE18((intptr_t)L_89, (int32_t)L_90, /*hidden argument*/NULL);
		V_22 = (intptr_t)L_91;
		AndroidJavaObjectU5BU5D_tEE28563C9013906CEB39794019A55F4BA5B06120* L_92 = V_20;
		int32_t L_93 = V_21;
		intptr_t L_94 = V_22;
		AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_95 = (AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E *)il2cpp_codegen_object_new(AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_il2cpp_TypeInfo_var);
		AndroidJavaObject__ctor_m880F6533139DF0BD36C6EF428E45E9F44B6534A3(L_95, (intptr_t)L_94, /*hidden argument*/NULL);
		NullCheck(L_92);
		ArrayElementTypeCheck (L_92, L_95);
		(L_92)->SetAt(static_cast<il2cpp_array_size_t>(L_93), (AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E *)L_95);
		intptr_t L_96 = V_22;
		AndroidJNISafe_DeleteLocalRef_m7AB242A76D13A3BF4C04831D77960C020D6ADA39((intptr_t)L_96, /*hidden argument*/NULL);
		int32_t L_97 = V_21;
		V_21 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_97, (int32_t)1));
	}

IL_022c:
	{
		int32_t L_98 = V_21;
		int32_t L_99 = V_19;
		V_23 = (bool)((((int32_t)L_98) < ((int32_t)L_99))? 1 : 0);
		bool L_100 = V_23;
		if (L_100)
		{
			goto IL_0206;
		}
	}
	{
		AndroidJavaObjectU5BU5D_tEE28563C9013906CEB39794019A55F4BA5B06120* L_101 = V_20;
		V_3 = (int16_t)((*(int16_t*)((int16_t*)UnBox((RuntimeObject *)L_101, IL2CPP_RGCTX_DATA(method->rgctx_data, 1)))));
		goto IL_0266;
	}

IL_0242:
	{
		Type_t * L_102 = V_0;
		String_t* L_103 = String_Concat_mFCF5F98D38F99DE7C831CBB9A1BAAAB148FC7D57((RuntimeObject *)_stringLiteral51253131B895C2F8066BCC47E62D44F18F43446C, (RuntimeObject *)L_102, (RuntimeObject *)_stringLiteral42646B33B50B6AA15E22733C8900716F0FE19E1D, /*hidden argument*/NULL);
		Exception_t * L_104 = (Exception_t *)il2cpp_codegen_object_new(Exception_t_il2cpp_TypeInfo_var);
		Exception__ctor_m8ECDE8ACA7F2E0EF1144BD1200FB5DB2870B5F11(L_104, (String_t*)L_103, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_104, _AndroidJNIHelper_ConvertFromJNIArray_TisInt16_tD0F031114106263BB459DA1F099FF9F42691295A_m8139D52A1384EE34677345013798688D522DFF37_RuntimeMethod_var);
	}

IL_0259:
	{
		il2cpp_codegen_initobj((&V_24), sizeof(int16_t));
		int16_t L_105 = V_24;
		V_3 = (int16_t)L_105;
		goto IL_0266;
	}

IL_0266:
	{
		int16_t L_106 = V_3;
		return L_106;
	}
}
// ArrayType UnityEngine._AndroidJNIHelper::ConvertFromJNIArray<System.Int32>(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t _AndroidJNIHelper_ConvertFromJNIArray_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m46E475527292788C29DD62A991E948CE3D9189A3_gshared (intptr_t ___array0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (_AndroidJNIHelper_ConvertFromJNIArray_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m46E475527292788C29DD62A991E948CE3D9189A3_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Type_t * V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	int32_t V_3 = 0;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	bool V_8 = false;
	bool V_9 = false;
	bool V_10 = false;
	bool V_11 = false;
	bool V_12 = false;
	int32_t V_13 = 0;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* V_14 = NULL;
	int32_t V_15 = 0;
	intptr_t V_16;
	memset((&V_16), 0, sizeof(V_16));
	bool V_17 = false;
	bool V_18 = false;
	int32_t V_19 = 0;
	AndroidJavaObjectU5BU5D_tEE28563C9013906CEB39794019A55F4BA5B06120* V_20 = NULL;
	int32_t V_21 = 0;
	intptr_t V_22;
	memset((&V_22), 0, sizeof(V_22));
	bool V_23 = false;
	int32_t V_24 = 0;
	{
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_0 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->rgctx_data, 0)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_1 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_0, /*hidden argument*/NULL);
		NullCheck((Type_t *)L_1);
		Type_t * L_2 = VirtFuncInvoker0< Type_t * >::Invoke(97 /* System.Type System.Type::GetElementType() */, (Type_t *)L_1);
		V_0 = (Type_t *)L_2;
		Type_t * L_3 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(AndroidReflection_tEB6633FD5B7D2816E1AC6C711E11B2DD33822F16_il2cpp_TypeInfo_var);
		bool L_4 = AndroidReflection_IsPrimitive_mDD6A4050793DF2FA1EDF58010982C64A3F17376D((Type_t *)L_3, /*hidden argument*/NULL);
		V_1 = (bool)L_4;
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_0173;
		}
	}
	{
		Type_t * L_6 = V_0;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_7 = { reinterpret_cast<intptr_t> (Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_8 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_7, /*hidden argument*/NULL);
		V_2 = (bool)((((RuntimeObject*)(Type_t *)L_6) == ((RuntimeObject*)(Type_t *)L_8))? 1 : 0);
		bool L_9 = V_2;
		if (!L_9)
		{
			goto IL_0041;
		}
	}
	{
		intptr_t L_10 = ___array0;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_11 = AndroidJNISafe_FromIntArray_mBF0C0B4309BA525BBA12D7FD3C2790C8FA7C4703((intptr_t)L_10, /*hidden argument*/NULL);
		V_3 = (int32_t)((*(int32_t*)((int32_t*)UnBox((RuntimeObject *)L_11, IL2CPP_RGCTX_DATA(method->rgctx_data, 1)))));
		goto IL_0266;
	}

IL_0041:
	{
		Type_t * L_12 = V_0;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_13 = { reinterpret_cast<intptr_t> (Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_14 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_13, /*hidden argument*/NULL);
		V_4 = (bool)((((RuntimeObject*)(Type_t *)L_12) == ((RuntimeObject*)(Type_t *)L_14))? 1 : 0);
		bool L_15 = V_4;
		if (!L_15)
		{
			goto IL_0065;
		}
	}
	{
		intptr_t L_16 = ___array0;
		BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C* L_17 = AndroidJNISafe_FromBooleanArray_m77A66C34FCB94ADB1AD5E1D88262500C930A5DBF((intptr_t)L_16, /*hidden argument*/NULL);
		V_3 = (int32_t)((*(int32_t*)((int32_t*)UnBox((RuntimeObject *)L_17, IL2CPP_RGCTX_DATA(method->rgctx_data, 1)))));
		goto IL_0266;
	}

IL_0065:
	{
		Type_t * L_18 = V_0;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_19 = { reinterpret_cast<intptr_t> (Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_20 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_19, /*hidden argument*/NULL);
		V_5 = (bool)((((RuntimeObject*)(Type_t *)L_18) == ((RuntimeObject*)(Type_t *)L_20))? 1 : 0);
		bool L_21 = V_5;
		if (!L_21)
		{
			goto IL_0095;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_LogWarning_m24085D883C9E74D7AB423F0625E13259923960E7((RuntimeObject *)_stringLiteral24CC8D396132365E532646F936DFC8579E2299B2, /*hidden argument*/NULL);
		intptr_t L_22 = ___array0;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_23 = AndroidJNISafe_FromByteArray_m81760A688AECE368E1CFF7DAAC8E141F1B8FA8A8((intptr_t)L_22, /*hidden argument*/NULL);
		V_3 = (int32_t)((*(int32_t*)((int32_t*)UnBox((RuntimeObject *)L_23, IL2CPP_RGCTX_DATA(method->rgctx_data, 1)))));
		goto IL_0266;
	}

IL_0095:
	{
		Type_t * L_24 = V_0;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_25 = { reinterpret_cast<intptr_t> (SByte_t928712DD662DC29BA4FAAE8CE2230AFB23447F0B_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_26 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_25, /*hidden argument*/NULL);
		V_6 = (bool)((((RuntimeObject*)(Type_t *)L_24) == ((RuntimeObject*)(Type_t *)L_26))? 1 : 0);
		bool L_27 = V_6;
		if (!L_27)
		{
			goto IL_00b9;
		}
	}
	{
		intptr_t L_28 = ___array0;
		SByteU5BU5D_t7D94C53295E6116625EA7CC7DEA21FEDC39869E7* L_29 = AndroidJNISafe_FromSByteArray_m01F6539AF10F86B3927436955B57CC809C52416D((intptr_t)L_28, /*hidden argument*/NULL);
		V_3 = (int32_t)((*(int32_t*)((int32_t*)UnBox((RuntimeObject *)L_29, IL2CPP_RGCTX_DATA(method->rgctx_data, 1)))));
		goto IL_0266;
	}

IL_00b9:
	{
		Type_t * L_30 = V_0;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_31 = { reinterpret_cast<intptr_t> (Int16_tD0F031114106263BB459DA1F099FF9F42691295A_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_32 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_31, /*hidden argument*/NULL);
		V_7 = (bool)((((RuntimeObject*)(Type_t *)L_30) == ((RuntimeObject*)(Type_t *)L_32))? 1 : 0);
		bool L_33 = V_7;
		if (!L_33)
		{
			goto IL_00dd;
		}
	}
	{
		intptr_t L_34 = ___array0;
		Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* L_35 = AndroidJNISafe_FromShortArray_mCDF5B796D950D31035BD35A2E463D41509E4A5CD((intptr_t)L_34, /*hidden argument*/NULL);
		V_3 = (int32_t)((*(int32_t*)((int32_t*)UnBox((RuntimeObject *)L_35, IL2CPP_RGCTX_DATA(method->rgctx_data, 1)))));
		goto IL_0266;
	}

IL_00dd:
	{
		Type_t * L_36 = V_0;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_37 = { reinterpret_cast<intptr_t> (Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_38 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_37, /*hidden argument*/NULL);
		V_8 = (bool)((((RuntimeObject*)(Type_t *)L_36) == ((RuntimeObject*)(Type_t *)L_38))? 1 : 0);
		bool L_39 = V_8;
		if (!L_39)
		{
			goto IL_0101;
		}
	}
	{
		intptr_t L_40 = ___array0;
		Int64U5BU5D_tCA61E42872C63A4286B24EEE6E0650143B43DCE6* L_41 = AndroidJNISafe_FromLongArray_m0E7C56CB8CFD0EC240F0D86ECBBFD635FFE55CDA((intptr_t)L_40, /*hidden argument*/NULL);
		V_3 = (int32_t)((*(int32_t*)((int32_t*)UnBox((RuntimeObject *)L_41, IL2CPP_RGCTX_DATA(method->rgctx_data, 1)))));
		goto IL_0266;
	}

IL_0101:
	{
		Type_t * L_42 = V_0;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_43 = { reinterpret_cast<intptr_t> (Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_44 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_43, /*hidden argument*/NULL);
		V_9 = (bool)((((RuntimeObject*)(Type_t *)L_42) == ((RuntimeObject*)(Type_t *)L_44))? 1 : 0);
		bool L_45 = V_9;
		if (!L_45)
		{
			goto IL_0125;
		}
	}
	{
		intptr_t L_46 = ___array0;
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_47 = AndroidJNISafe_FromFloatArray_mF6A63CA1B7C10BC27EEC033F0E390772DFDD652D((intptr_t)L_46, /*hidden argument*/NULL);
		V_3 = (int32_t)((*(int32_t*)((int32_t*)UnBox((RuntimeObject *)L_47, IL2CPP_RGCTX_DATA(method->rgctx_data, 1)))));
		goto IL_0266;
	}

IL_0125:
	{
		Type_t * L_48 = V_0;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_49 = { reinterpret_cast<intptr_t> (Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_50 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_49, /*hidden argument*/NULL);
		V_10 = (bool)((((RuntimeObject*)(Type_t *)L_48) == ((RuntimeObject*)(Type_t *)L_50))? 1 : 0);
		bool L_51 = V_10;
		if (!L_51)
		{
			goto IL_0149;
		}
	}
	{
		intptr_t L_52 = ___array0;
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_53 = AndroidJNISafe_FromDoubleArray_m9438B5668E8B2DB3B18CACFF0CC9CAEAB5EC73C8((intptr_t)L_52, /*hidden argument*/NULL);
		V_3 = (int32_t)((*(int32_t*)((int32_t*)UnBox((RuntimeObject *)L_53, IL2CPP_RGCTX_DATA(method->rgctx_data, 1)))));
		goto IL_0266;
	}

IL_0149:
	{
		Type_t * L_54 = V_0;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_55 = { reinterpret_cast<intptr_t> (Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_56 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_55, /*hidden argument*/NULL);
		V_11 = (bool)((((RuntimeObject*)(Type_t *)L_54) == ((RuntimeObject*)(Type_t *)L_56))? 1 : 0);
		bool L_57 = V_11;
		if (!L_57)
		{
			goto IL_016d;
		}
	}
	{
		intptr_t L_58 = ___array0;
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_59 = AndroidJNISafe_FromCharArray_mA49DB27755EF3B2AE81487E0FCFE06E23F617305((intptr_t)L_58, /*hidden argument*/NULL);
		V_3 = (int32_t)((*(int32_t*)((int32_t*)UnBox((RuntimeObject *)L_59, IL2CPP_RGCTX_DATA(method->rgctx_data, 1)))));
		goto IL_0266;
	}

IL_016d:
	{
		goto IL_0259;
	}

IL_0173:
	{
		Type_t * L_60 = V_0;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_61 = { reinterpret_cast<intptr_t> (String_t_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_62 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_61, /*hidden argument*/NULL);
		V_12 = (bool)((((RuntimeObject*)(Type_t *)L_60) == ((RuntimeObject*)(Type_t *)L_62))? 1 : 0);
		bool L_63 = V_12;
		if (!L_63)
		{
			goto IL_01dc;
		}
	}
	{
		intptr_t L_64 = ___array0;
		int32_t L_65 = AndroidJNISafe_GetArrayLength_m3015C191DBFC246946A88592731441A934507B56((intptr_t)L_64, /*hidden argument*/NULL);
		V_13 = (int32_t)L_65;
		int32_t L_66 = V_13;
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_67 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)SZArrayNew(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var, (uint32_t)L_66);
		V_14 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)L_67;
		V_15 = (int32_t)0;
		goto IL_01c3;
	}

IL_019d:
	{
		intptr_t L_68 = ___array0;
		int32_t L_69 = V_15;
		intptr_t L_70 = AndroidJNI_GetObjectArrayElement_m502026BF77232EE45D03661E4923C2E5E99FDE18((intptr_t)L_68, (int32_t)L_69, /*hidden argument*/NULL);
		V_16 = (intptr_t)L_70;
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_71 = V_14;
		int32_t L_72 = V_15;
		intptr_t L_73 = V_16;
		String_t* L_74 = AndroidJNISafe_GetStringChars_mD59FFDE4192F837E1380B51569B5803E09BE58C8((intptr_t)L_73, /*hidden argument*/NULL);
		NullCheck(L_71);
		ArrayElementTypeCheck (L_71, L_74);
		(L_71)->SetAt(static_cast<il2cpp_array_size_t>(L_72), (String_t*)L_74);
		intptr_t L_75 = V_16;
		AndroidJNISafe_DeleteLocalRef_m7AB242A76D13A3BF4C04831D77960C020D6ADA39((intptr_t)L_75, /*hidden argument*/NULL);
		int32_t L_76 = V_15;
		V_15 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_76, (int32_t)1));
	}

IL_01c3:
	{
		int32_t L_77 = V_15;
		int32_t L_78 = V_13;
		V_17 = (bool)((((int32_t)L_77) < ((int32_t)L_78))? 1 : 0);
		bool L_79 = V_17;
		if (L_79)
		{
			goto IL_019d;
		}
	}
	{
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_80 = V_14;
		V_3 = (int32_t)((*(int32_t*)((int32_t*)UnBox((RuntimeObject *)L_80, IL2CPP_RGCTX_DATA(method->rgctx_data, 1)))));
		goto IL_0266;
	}

IL_01dc:
	{
		Type_t * L_81 = V_0;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_82 = { reinterpret_cast<intptr_t> (AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_83 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_82, /*hidden argument*/NULL);
		V_18 = (bool)((((RuntimeObject*)(Type_t *)L_81) == ((RuntimeObject*)(Type_t *)L_83))? 1 : 0);
		bool L_84 = V_18;
		if (!L_84)
		{
			goto IL_0242;
		}
	}
	{
		intptr_t L_85 = ___array0;
		int32_t L_86 = AndroidJNISafe_GetArrayLength_m3015C191DBFC246946A88592731441A934507B56((intptr_t)L_85, /*hidden argument*/NULL);
		V_19 = (int32_t)L_86;
		int32_t L_87 = V_19;
		AndroidJavaObjectU5BU5D_tEE28563C9013906CEB39794019A55F4BA5B06120* L_88 = (AndroidJavaObjectU5BU5D_tEE28563C9013906CEB39794019A55F4BA5B06120*)(AndroidJavaObjectU5BU5D_tEE28563C9013906CEB39794019A55F4BA5B06120*)SZArrayNew(AndroidJavaObjectU5BU5D_tEE28563C9013906CEB39794019A55F4BA5B06120_il2cpp_TypeInfo_var, (uint32_t)L_87);
		V_20 = (AndroidJavaObjectU5BU5D_tEE28563C9013906CEB39794019A55F4BA5B06120*)L_88;
		V_21 = (int32_t)0;
		goto IL_022c;
	}

IL_0206:
	{
		intptr_t L_89 = ___array0;
		int32_t L_90 = V_21;
		intptr_t L_91 = AndroidJNI_GetObjectArrayElement_m502026BF77232EE45D03661E4923C2E5E99FDE18((intptr_t)L_89, (int32_t)L_90, /*hidden argument*/NULL);
		V_22 = (intptr_t)L_91;
		AndroidJavaObjectU5BU5D_tEE28563C9013906CEB39794019A55F4BA5B06120* L_92 = V_20;
		int32_t L_93 = V_21;
		intptr_t L_94 = V_22;
		AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_95 = (AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E *)il2cpp_codegen_object_new(AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_il2cpp_TypeInfo_var);
		AndroidJavaObject__ctor_m880F6533139DF0BD36C6EF428E45E9F44B6534A3(L_95, (intptr_t)L_94, /*hidden argument*/NULL);
		NullCheck(L_92);
		ArrayElementTypeCheck (L_92, L_95);
		(L_92)->SetAt(static_cast<il2cpp_array_size_t>(L_93), (AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E *)L_95);
		intptr_t L_96 = V_22;
		AndroidJNISafe_DeleteLocalRef_m7AB242A76D13A3BF4C04831D77960C020D6ADA39((intptr_t)L_96, /*hidden argument*/NULL);
		int32_t L_97 = V_21;
		V_21 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_97, (int32_t)1));
	}

IL_022c:
	{
		int32_t L_98 = V_21;
		int32_t L_99 = V_19;
		V_23 = (bool)((((int32_t)L_98) < ((int32_t)L_99))? 1 : 0);
		bool L_100 = V_23;
		if (L_100)
		{
			goto IL_0206;
		}
	}
	{
		AndroidJavaObjectU5BU5D_tEE28563C9013906CEB39794019A55F4BA5B06120* L_101 = V_20;
		V_3 = (int32_t)((*(int32_t*)((int32_t*)UnBox((RuntimeObject *)L_101, IL2CPP_RGCTX_DATA(method->rgctx_data, 1)))));
		goto IL_0266;
	}

IL_0242:
	{
		Type_t * L_102 = V_0;
		String_t* L_103 = String_Concat_mFCF5F98D38F99DE7C831CBB9A1BAAAB148FC7D57((RuntimeObject *)_stringLiteral51253131B895C2F8066BCC47E62D44F18F43446C, (RuntimeObject *)L_102, (RuntimeObject *)_stringLiteral42646B33B50B6AA15E22733C8900716F0FE19E1D, /*hidden argument*/NULL);
		Exception_t * L_104 = (Exception_t *)il2cpp_codegen_object_new(Exception_t_il2cpp_TypeInfo_var);
		Exception__ctor_m8ECDE8ACA7F2E0EF1144BD1200FB5DB2870B5F11(L_104, (String_t*)L_103, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_104, _AndroidJNIHelper_ConvertFromJNIArray_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m46E475527292788C29DD62A991E948CE3D9189A3_RuntimeMethod_var);
	}

IL_0259:
	{
		il2cpp_codegen_initobj((&V_24), sizeof(int32_t));
		int32_t L_105 = V_24;
		V_3 = (int32_t)L_105;
		goto IL_0266;
	}

IL_0266:
	{
		int32_t L_106 = V_3;
		return L_106;
	}
}
// ArrayType UnityEngine._AndroidJNIHelper::ConvertFromJNIArray<System.Int64>(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t _AndroidJNIHelper_ConvertFromJNIArray_TisInt64_t378EE0D608BD3107E77238E85F30D2BBD46981F3_m67885FB92D65381C9570857BCD66D9A5377C9FC2_gshared (intptr_t ___array0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (_AndroidJNIHelper_ConvertFromJNIArray_TisInt64_t378EE0D608BD3107E77238E85F30D2BBD46981F3_m67885FB92D65381C9570857BCD66D9A5377C9FC2_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Type_t * V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	int64_t V_3 = 0;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	bool V_8 = false;
	bool V_9 = false;
	bool V_10 = false;
	bool V_11 = false;
	bool V_12 = false;
	int32_t V_13 = 0;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* V_14 = NULL;
	int32_t V_15 = 0;
	intptr_t V_16;
	memset((&V_16), 0, sizeof(V_16));
	bool V_17 = false;
	bool V_18 = false;
	int32_t V_19 = 0;
	AndroidJavaObjectU5BU5D_tEE28563C9013906CEB39794019A55F4BA5B06120* V_20 = NULL;
	int32_t V_21 = 0;
	intptr_t V_22;
	memset((&V_22), 0, sizeof(V_22));
	bool V_23 = false;
	int64_t V_24 = 0;
	{
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_0 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->rgctx_data, 0)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_1 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_0, /*hidden argument*/NULL);
		NullCheck((Type_t *)L_1);
		Type_t * L_2 = VirtFuncInvoker0< Type_t * >::Invoke(97 /* System.Type System.Type::GetElementType() */, (Type_t *)L_1);
		V_0 = (Type_t *)L_2;
		Type_t * L_3 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(AndroidReflection_tEB6633FD5B7D2816E1AC6C711E11B2DD33822F16_il2cpp_TypeInfo_var);
		bool L_4 = AndroidReflection_IsPrimitive_mDD6A4050793DF2FA1EDF58010982C64A3F17376D((Type_t *)L_3, /*hidden argument*/NULL);
		V_1 = (bool)L_4;
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_0173;
		}
	}
	{
		Type_t * L_6 = V_0;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_7 = { reinterpret_cast<intptr_t> (Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_8 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_7, /*hidden argument*/NULL);
		V_2 = (bool)((((RuntimeObject*)(Type_t *)L_6) == ((RuntimeObject*)(Type_t *)L_8))? 1 : 0);
		bool L_9 = V_2;
		if (!L_9)
		{
			goto IL_0041;
		}
	}
	{
		intptr_t L_10 = ___array0;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_11 = AndroidJNISafe_FromIntArray_mBF0C0B4309BA525BBA12D7FD3C2790C8FA7C4703((intptr_t)L_10, /*hidden argument*/NULL);
		V_3 = (int64_t)((*(int64_t*)((int64_t*)UnBox((RuntimeObject *)L_11, IL2CPP_RGCTX_DATA(method->rgctx_data, 1)))));
		goto IL_0266;
	}

IL_0041:
	{
		Type_t * L_12 = V_0;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_13 = { reinterpret_cast<intptr_t> (Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_14 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_13, /*hidden argument*/NULL);
		V_4 = (bool)((((RuntimeObject*)(Type_t *)L_12) == ((RuntimeObject*)(Type_t *)L_14))? 1 : 0);
		bool L_15 = V_4;
		if (!L_15)
		{
			goto IL_0065;
		}
	}
	{
		intptr_t L_16 = ___array0;
		BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C* L_17 = AndroidJNISafe_FromBooleanArray_m77A66C34FCB94ADB1AD5E1D88262500C930A5DBF((intptr_t)L_16, /*hidden argument*/NULL);
		V_3 = (int64_t)((*(int64_t*)((int64_t*)UnBox((RuntimeObject *)L_17, IL2CPP_RGCTX_DATA(method->rgctx_data, 1)))));
		goto IL_0266;
	}

IL_0065:
	{
		Type_t * L_18 = V_0;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_19 = { reinterpret_cast<intptr_t> (Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_20 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_19, /*hidden argument*/NULL);
		V_5 = (bool)((((RuntimeObject*)(Type_t *)L_18) == ((RuntimeObject*)(Type_t *)L_20))? 1 : 0);
		bool L_21 = V_5;
		if (!L_21)
		{
			goto IL_0095;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_LogWarning_m24085D883C9E74D7AB423F0625E13259923960E7((RuntimeObject *)_stringLiteral24CC8D396132365E532646F936DFC8579E2299B2, /*hidden argument*/NULL);
		intptr_t L_22 = ___array0;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_23 = AndroidJNISafe_FromByteArray_m81760A688AECE368E1CFF7DAAC8E141F1B8FA8A8((intptr_t)L_22, /*hidden argument*/NULL);
		V_3 = (int64_t)((*(int64_t*)((int64_t*)UnBox((RuntimeObject *)L_23, IL2CPP_RGCTX_DATA(method->rgctx_data, 1)))));
		goto IL_0266;
	}

IL_0095:
	{
		Type_t * L_24 = V_0;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_25 = { reinterpret_cast<intptr_t> (SByte_t928712DD662DC29BA4FAAE8CE2230AFB23447F0B_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_26 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_25, /*hidden argument*/NULL);
		V_6 = (bool)((((RuntimeObject*)(Type_t *)L_24) == ((RuntimeObject*)(Type_t *)L_26))? 1 : 0);
		bool L_27 = V_6;
		if (!L_27)
		{
			goto IL_00b9;
		}
	}
	{
		intptr_t L_28 = ___array0;
		SByteU5BU5D_t7D94C53295E6116625EA7CC7DEA21FEDC39869E7* L_29 = AndroidJNISafe_FromSByteArray_m01F6539AF10F86B3927436955B57CC809C52416D((intptr_t)L_28, /*hidden argument*/NULL);
		V_3 = (int64_t)((*(int64_t*)((int64_t*)UnBox((RuntimeObject *)L_29, IL2CPP_RGCTX_DATA(method->rgctx_data, 1)))));
		goto IL_0266;
	}

IL_00b9:
	{
		Type_t * L_30 = V_0;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_31 = { reinterpret_cast<intptr_t> (Int16_tD0F031114106263BB459DA1F099FF9F42691295A_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_32 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_31, /*hidden argument*/NULL);
		V_7 = (bool)((((RuntimeObject*)(Type_t *)L_30) == ((RuntimeObject*)(Type_t *)L_32))? 1 : 0);
		bool L_33 = V_7;
		if (!L_33)
		{
			goto IL_00dd;
		}
	}
	{
		intptr_t L_34 = ___array0;
		Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* L_35 = AndroidJNISafe_FromShortArray_mCDF5B796D950D31035BD35A2E463D41509E4A5CD((intptr_t)L_34, /*hidden argument*/NULL);
		V_3 = (int64_t)((*(int64_t*)((int64_t*)UnBox((RuntimeObject *)L_35, IL2CPP_RGCTX_DATA(method->rgctx_data, 1)))));
		goto IL_0266;
	}

IL_00dd:
	{
		Type_t * L_36 = V_0;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_37 = { reinterpret_cast<intptr_t> (Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_38 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_37, /*hidden argument*/NULL);
		V_8 = (bool)((((RuntimeObject*)(Type_t *)L_36) == ((RuntimeObject*)(Type_t *)L_38))? 1 : 0);
		bool L_39 = V_8;
		if (!L_39)
		{
			goto IL_0101;
		}
	}
	{
		intptr_t L_40 = ___array0;
		Int64U5BU5D_tCA61E42872C63A4286B24EEE6E0650143B43DCE6* L_41 = AndroidJNISafe_FromLongArray_m0E7C56CB8CFD0EC240F0D86ECBBFD635FFE55CDA((intptr_t)L_40, /*hidden argument*/NULL);
		V_3 = (int64_t)((*(int64_t*)((int64_t*)UnBox((RuntimeObject *)L_41, IL2CPP_RGCTX_DATA(method->rgctx_data, 1)))));
		goto IL_0266;
	}

IL_0101:
	{
		Type_t * L_42 = V_0;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_43 = { reinterpret_cast<intptr_t> (Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_44 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_43, /*hidden argument*/NULL);
		V_9 = (bool)((((RuntimeObject*)(Type_t *)L_42) == ((RuntimeObject*)(Type_t *)L_44))? 1 : 0);
		bool L_45 = V_9;
		if (!L_45)
		{
			goto IL_0125;
		}
	}
	{
		intptr_t L_46 = ___array0;
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_47 = AndroidJNISafe_FromFloatArray_mF6A63CA1B7C10BC27EEC033F0E390772DFDD652D((intptr_t)L_46, /*hidden argument*/NULL);
		V_3 = (int64_t)((*(int64_t*)((int64_t*)UnBox((RuntimeObject *)L_47, IL2CPP_RGCTX_DATA(method->rgctx_data, 1)))));
		goto IL_0266;
	}

IL_0125:
	{
		Type_t * L_48 = V_0;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_49 = { reinterpret_cast<intptr_t> (Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_50 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_49, /*hidden argument*/NULL);
		V_10 = (bool)((((RuntimeObject*)(Type_t *)L_48) == ((RuntimeObject*)(Type_t *)L_50))? 1 : 0);
		bool L_51 = V_10;
		if (!L_51)
		{
			goto IL_0149;
		}
	}
	{
		intptr_t L_52 = ___array0;
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_53 = AndroidJNISafe_FromDoubleArray_m9438B5668E8B2DB3B18CACFF0CC9CAEAB5EC73C8((intptr_t)L_52, /*hidden argument*/NULL);
		V_3 = (int64_t)((*(int64_t*)((int64_t*)UnBox((RuntimeObject *)L_53, IL2CPP_RGCTX_DATA(method->rgctx_data, 1)))));
		goto IL_0266;
	}

IL_0149:
	{
		Type_t * L_54 = V_0;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_55 = { reinterpret_cast<intptr_t> (Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_56 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_55, /*hidden argument*/NULL);
		V_11 = (bool)((((RuntimeObject*)(Type_t *)L_54) == ((RuntimeObject*)(Type_t *)L_56))? 1 : 0);
		bool L_57 = V_11;
		if (!L_57)
		{
			goto IL_016d;
		}
	}
	{
		intptr_t L_58 = ___array0;
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_59 = AndroidJNISafe_FromCharArray_mA49DB27755EF3B2AE81487E0FCFE06E23F617305((intptr_t)L_58, /*hidden argument*/NULL);
		V_3 = (int64_t)((*(int64_t*)((int64_t*)UnBox((RuntimeObject *)L_59, IL2CPP_RGCTX_DATA(method->rgctx_data, 1)))));
		goto IL_0266;
	}

IL_016d:
	{
		goto IL_0259;
	}

IL_0173:
	{
		Type_t * L_60 = V_0;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_61 = { reinterpret_cast<intptr_t> (String_t_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_62 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_61, /*hidden argument*/NULL);
		V_12 = (bool)((((RuntimeObject*)(Type_t *)L_60) == ((RuntimeObject*)(Type_t *)L_62))? 1 : 0);
		bool L_63 = V_12;
		if (!L_63)
		{
			goto IL_01dc;
		}
	}
	{
		intptr_t L_64 = ___array0;
		int32_t L_65 = AndroidJNISafe_GetArrayLength_m3015C191DBFC246946A88592731441A934507B56((intptr_t)L_64, /*hidden argument*/NULL);
		V_13 = (int32_t)L_65;
		int32_t L_66 = V_13;
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_67 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)SZArrayNew(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var, (uint32_t)L_66);
		V_14 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)L_67;
		V_15 = (int32_t)0;
		goto IL_01c3;
	}

IL_019d:
	{
		intptr_t L_68 = ___array0;
		int32_t L_69 = V_15;
		intptr_t L_70 = AndroidJNI_GetObjectArrayElement_m502026BF77232EE45D03661E4923C2E5E99FDE18((intptr_t)L_68, (int32_t)L_69, /*hidden argument*/NULL);
		V_16 = (intptr_t)L_70;
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_71 = V_14;
		int32_t L_72 = V_15;
		intptr_t L_73 = V_16;
		String_t* L_74 = AndroidJNISafe_GetStringChars_mD59FFDE4192F837E1380B51569B5803E09BE58C8((intptr_t)L_73, /*hidden argument*/NULL);
		NullCheck(L_71);
		ArrayElementTypeCheck (L_71, L_74);
		(L_71)->SetAt(static_cast<il2cpp_array_size_t>(L_72), (String_t*)L_74);
		intptr_t L_75 = V_16;
		AndroidJNISafe_DeleteLocalRef_m7AB242A76D13A3BF4C04831D77960C020D6ADA39((intptr_t)L_75, /*hidden argument*/NULL);
		int32_t L_76 = V_15;
		V_15 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_76, (int32_t)1));
	}

IL_01c3:
	{
		int32_t L_77 = V_15;
		int32_t L_78 = V_13;
		V_17 = (bool)((((int32_t)L_77) < ((int32_t)L_78))? 1 : 0);
		bool L_79 = V_17;
		if (L_79)
		{
			goto IL_019d;
		}
	}
	{
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_80 = V_14;
		V_3 = (int64_t)((*(int64_t*)((int64_t*)UnBox((RuntimeObject *)L_80, IL2CPP_RGCTX_DATA(method->rgctx_data, 1)))));
		goto IL_0266;
	}

IL_01dc:
	{
		Type_t * L_81 = V_0;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_82 = { reinterpret_cast<intptr_t> (AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_83 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_82, /*hidden argument*/NULL);
		V_18 = (bool)((((RuntimeObject*)(Type_t *)L_81) == ((RuntimeObject*)(Type_t *)L_83))? 1 : 0);
		bool L_84 = V_18;
		if (!L_84)
		{
			goto IL_0242;
		}
	}
	{
		intptr_t L_85 = ___array0;
		int32_t L_86 = AndroidJNISafe_GetArrayLength_m3015C191DBFC246946A88592731441A934507B56((intptr_t)L_85, /*hidden argument*/NULL);
		V_19 = (int32_t)L_86;
		int32_t L_87 = V_19;
		AndroidJavaObjectU5BU5D_tEE28563C9013906CEB39794019A55F4BA5B06120* L_88 = (AndroidJavaObjectU5BU5D_tEE28563C9013906CEB39794019A55F4BA5B06120*)(AndroidJavaObjectU5BU5D_tEE28563C9013906CEB39794019A55F4BA5B06120*)SZArrayNew(AndroidJavaObjectU5BU5D_tEE28563C9013906CEB39794019A55F4BA5B06120_il2cpp_TypeInfo_var, (uint32_t)L_87);
		V_20 = (AndroidJavaObjectU5BU5D_tEE28563C9013906CEB39794019A55F4BA5B06120*)L_88;
		V_21 = (int32_t)0;
		goto IL_022c;
	}

IL_0206:
	{
		intptr_t L_89 = ___array0;
		int32_t L_90 = V_21;
		intptr_t L_91 = AndroidJNI_GetObjectArrayElement_m502026BF77232EE45D03661E4923C2E5E99FDE18((intptr_t)L_89, (int32_t)L_90, /*hidden argument*/NULL);
		V_22 = (intptr_t)L_91;
		AndroidJavaObjectU5BU5D_tEE28563C9013906CEB39794019A55F4BA5B06120* L_92 = V_20;
		int32_t L_93 = V_21;
		intptr_t L_94 = V_22;
		AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_95 = (AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E *)il2cpp_codegen_object_new(AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_il2cpp_TypeInfo_var);
		AndroidJavaObject__ctor_m880F6533139DF0BD36C6EF428E45E9F44B6534A3(L_95, (intptr_t)L_94, /*hidden argument*/NULL);
		NullCheck(L_92);
		ArrayElementTypeCheck (L_92, L_95);
		(L_92)->SetAt(static_cast<il2cpp_array_size_t>(L_93), (AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E *)L_95);
		intptr_t L_96 = V_22;
		AndroidJNISafe_DeleteLocalRef_m7AB242A76D13A3BF4C04831D77960C020D6ADA39((intptr_t)L_96, /*hidden argument*/NULL);
		int32_t L_97 = V_21;
		V_21 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_97, (int32_t)1));
	}

IL_022c:
	{
		int32_t L_98 = V_21;
		int32_t L_99 = V_19;
		V_23 = (bool)((((int32_t)L_98) < ((int32_t)L_99))? 1 : 0);
		bool L_100 = V_23;
		if (L_100)
		{
			goto IL_0206;
		}
	}
	{
		AndroidJavaObjectU5BU5D_tEE28563C9013906CEB39794019A55F4BA5B06120* L_101 = V_20;
		V_3 = (int64_t)((*(int64_t*)((int64_t*)UnBox((RuntimeObject *)L_101, IL2CPP_RGCTX_DATA(method->rgctx_data, 1)))));
		goto IL_0266;
	}

IL_0242:
	{
		Type_t * L_102 = V_0;
		String_t* L_103 = String_Concat_mFCF5F98D38F99DE7C831CBB9A1BAAAB148FC7D57((RuntimeObject *)_stringLiteral51253131B895C2F8066BCC47E62D44F18F43446C, (RuntimeObject *)L_102, (RuntimeObject *)_stringLiteral42646B33B50B6AA15E22733C8900716F0FE19E1D, /*hidden argument*/NULL);
		Exception_t * L_104 = (Exception_t *)il2cpp_codegen_object_new(Exception_t_il2cpp_TypeInfo_var);
		Exception__ctor_m8ECDE8ACA7F2E0EF1144BD1200FB5DB2870B5F11(L_104, (String_t*)L_103, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_104, _AndroidJNIHelper_ConvertFromJNIArray_TisInt64_t378EE0D608BD3107E77238E85F30D2BBD46981F3_m67885FB92D65381C9570857BCD66D9A5377C9FC2_RuntimeMethod_var);
	}

IL_0259:
	{
		il2cpp_codegen_initobj((&V_24), sizeof(int64_t));
		int64_t L_105 = V_24;
		V_3 = (int64_t)L_105;
		goto IL_0266;
	}

IL_0266:
	{
		int64_t L_106 = V_3;
		return L_106;
	}
}
// ArrayType UnityEngine._AndroidJNIHelper::ConvertFromJNIArray<System.SByte>(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int8_t _AndroidJNIHelper_ConvertFromJNIArray_TisSByte_t928712DD662DC29BA4FAAE8CE2230AFB23447F0B_m2F4CBB579C50AAAF7EF6FBC73C5FC304A87A60EE_gshared (intptr_t ___array0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (_AndroidJNIHelper_ConvertFromJNIArray_TisSByte_t928712DD662DC29BA4FAAE8CE2230AFB23447F0B_m2F4CBB579C50AAAF7EF6FBC73C5FC304A87A60EE_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Type_t * V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	int8_t V_3 = 0x0;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	bool V_8 = false;
	bool V_9 = false;
	bool V_10 = false;
	bool V_11 = false;
	bool V_12 = false;
	int32_t V_13 = 0;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* V_14 = NULL;
	int32_t V_15 = 0;
	intptr_t V_16;
	memset((&V_16), 0, sizeof(V_16));
	bool V_17 = false;
	bool V_18 = false;
	int32_t V_19 = 0;
	AndroidJavaObjectU5BU5D_tEE28563C9013906CEB39794019A55F4BA5B06120* V_20 = NULL;
	int32_t V_21 = 0;
	intptr_t V_22;
	memset((&V_22), 0, sizeof(V_22));
	bool V_23 = false;
	int8_t V_24 = 0x0;
	{
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_0 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->rgctx_data, 0)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_1 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_0, /*hidden argument*/NULL);
		NullCheck((Type_t *)L_1);
		Type_t * L_2 = VirtFuncInvoker0< Type_t * >::Invoke(97 /* System.Type System.Type::GetElementType() */, (Type_t *)L_1);
		V_0 = (Type_t *)L_2;
		Type_t * L_3 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(AndroidReflection_tEB6633FD5B7D2816E1AC6C711E11B2DD33822F16_il2cpp_TypeInfo_var);
		bool L_4 = AndroidReflection_IsPrimitive_mDD6A4050793DF2FA1EDF58010982C64A3F17376D((Type_t *)L_3, /*hidden argument*/NULL);
		V_1 = (bool)L_4;
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_0173;
		}
	}
	{
		Type_t * L_6 = V_0;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_7 = { reinterpret_cast<intptr_t> (Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_8 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_7, /*hidden argument*/NULL);
		V_2 = (bool)((((RuntimeObject*)(Type_t *)L_6) == ((RuntimeObject*)(Type_t *)L_8))? 1 : 0);
		bool L_9 = V_2;
		if (!L_9)
		{
			goto IL_0041;
		}
	}
	{
		intptr_t L_10 = ___array0;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_11 = AndroidJNISafe_FromIntArray_mBF0C0B4309BA525BBA12D7FD3C2790C8FA7C4703((intptr_t)L_10, /*hidden argument*/NULL);
		V_3 = (int8_t)((*(int8_t*)((int8_t*)UnBox((RuntimeObject *)L_11, IL2CPP_RGCTX_DATA(method->rgctx_data, 1)))));
		goto IL_0266;
	}

IL_0041:
	{
		Type_t * L_12 = V_0;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_13 = { reinterpret_cast<intptr_t> (Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_14 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_13, /*hidden argument*/NULL);
		V_4 = (bool)((((RuntimeObject*)(Type_t *)L_12) == ((RuntimeObject*)(Type_t *)L_14))? 1 : 0);
		bool L_15 = V_4;
		if (!L_15)
		{
			goto IL_0065;
		}
	}
	{
		intptr_t L_16 = ___array0;
		BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C* L_17 = AndroidJNISafe_FromBooleanArray_m77A66C34FCB94ADB1AD5E1D88262500C930A5DBF((intptr_t)L_16, /*hidden argument*/NULL);
		V_3 = (int8_t)((*(int8_t*)((int8_t*)UnBox((RuntimeObject *)L_17, IL2CPP_RGCTX_DATA(method->rgctx_data, 1)))));
		goto IL_0266;
	}

IL_0065:
	{
		Type_t * L_18 = V_0;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_19 = { reinterpret_cast<intptr_t> (Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_20 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_19, /*hidden argument*/NULL);
		V_5 = (bool)((((RuntimeObject*)(Type_t *)L_18) == ((RuntimeObject*)(Type_t *)L_20))? 1 : 0);
		bool L_21 = V_5;
		if (!L_21)
		{
			goto IL_0095;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_LogWarning_m24085D883C9E74D7AB423F0625E13259923960E7((RuntimeObject *)_stringLiteral24CC8D396132365E532646F936DFC8579E2299B2, /*hidden argument*/NULL);
		intptr_t L_22 = ___array0;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_23 = AndroidJNISafe_FromByteArray_m81760A688AECE368E1CFF7DAAC8E141F1B8FA8A8((intptr_t)L_22, /*hidden argument*/NULL);
		V_3 = (int8_t)((*(int8_t*)((int8_t*)UnBox((RuntimeObject *)L_23, IL2CPP_RGCTX_DATA(method->rgctx_data, 1)))));
		goto IL_0266;
	}

IL_0095:
	{
		Type_t * L_24 = V_0;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_25 = { reinterpret_cast<intptr_t> (SByte_t928712DD662DC29BA4FAAE8CE2230AFB23447F0B_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_26 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_25, /*hidden argument*/NULL);
		V_6 = (bool)((((RuntimeObject*)(Type_t *)L_24) == ((RuntimeObject*)(Type_t *)L_26))? 1 : 0);
		bool L_27 = V_6;
		if (!L_27)
		{
			goto IL_00b9;
		}
	}
	{
		intptr_t L_28 = ___array0;
		SByteU5BU5D_t7D94C53295E6116625EA7CC7DEA21FEDC39869E7* L_29 = AndroidJNISafe_FromSByteArray_m01F6539AF10F86B3927436955B57CC809C52416D((intptr_t)L_28, /*hidden argument*/NULL);
		V_3 = (int8_t)((*(int8_t*)((int8_t*)UnBox((RuntimeObject *)L_29, IL2CPP_RGCTX_DATA(method->rgctx_data, 1)))));
		goto IL_0266;
	}

IL_00b9:
	{
		Type_t * L_30 = V_0;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_31 = { reinterpret_cast<intptr_t> (Int16_tD0F031114106263BB459DA1F099FF9F42691295A_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_32 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_31, /*hidden argument*/NULL);
		V_7 = (bool)((((RuntimeObject*)(Type_t *)L_30) == ((RuntimeObject*)(Type_t *)L_32))? 1 : 0);
		bool L_33 = V_7;
		if (!L_33)
		{
			goto IL_00dd;
		}
	}
	{
		intptr_t L_34 = ___array0;
		Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* L_35 = AndroidJNISafe_FromShortArray_mCDF5B796D950D31035BD35A2E463D41509E4A5CD((intptr_t)L_34, /*hidden argument*/NULL);
		V_3 = (int8_t)((*(int8_t*)((int8_t*)UnBox((RuntimeObject *)L_35, IL2CPP_RGCTX_DATA(method->rgctx_data, 1)))));
		goto IL_0266;
	}

IL_00dd:
	{
		Type_t * L_36 = V_0;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_37 = { reinterpret_cast<intptr_t> (Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_38 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_37, /*hidden argument*/NULL);
		V_8 = (bool)((((RuntimeObject*)(Type_t *)L_36) == ((RuntimeObject*)(Type_t *)L_38))? 1 : 0);
		bool L_39 = V_8;
		if (!L_39)
		{
			goto IL_0101;
		}
	}
	{
		intptr_t L_40 = ___array0;
		Int64U5BU5D_tCA61E42872C63A4286B24EEE6E0650143B43DCE6* L_41 = AndroidJNISafe_FromLongArray_m0E7C56CB8CFD0EC240F0D86ECBBFD635FFE55CDA((intptr_t)L_40, /*hidden argument*/NULL);
		V_3 = (int8_t)((*(int8_t*)((int8_t*)UnBox((RuntimeObject *)L_41, IL2CPP_RGCTX_DATA(method->rgctx_data, 1)))));
		goto IL_0266;
	}

IL_0101:
	{
		Type_t * L_42 = V_0;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_43 = { reinterpret_cast<intptr_t> (Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_44 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_43, /*hidden argument*/NULL);
		V_9 = (bool)((((RuntimeObject*)(Type_t *)L_42) == ((RuntimeObject*)(Type_t *)L_44))? 1 : 0);
		bool L_45 = V_9;
		if (!L_45)
		{
			goto IL_0125;
		}
	}
	{
		intptr_t L_46 = ___array0;
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_47 = AndroidJNISafe_FromFloatArray_mF6A63CA1B7C10BC27EEC033F0E390772DFDD652D((intptr_t)L_46, /*hidden argument*/NULL);
		V_3 = (int8_t)((*(int8_t*)((int8_t*)UnBox((RuntimeObject *)L_47, IL2CPP_RGCTX_DATA(method->rgctx_data, 1)))));
		goto IL_0266;
	}

IL_0125:
	{
		Type_t * L_48 = V_0;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_49 = { reinterpret_cast<intptr_t> (Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_50 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_49, /*hidden argument*/NULL);
		V_10 = (bool)((((RuntimeObject*)(Type_t *)L_48) == ((RuntimeObject*)(Type_t *)L_50))? 1 : 0);
		bool L_51 = V_10;
		if (!L_51)
		{
			goto IL_0149;
		}
	}
	{
		intptr_t L_52 = ___array0;
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_53 = AndroidJNISafe_FromDoubleArray_m9438B5668E8B2DB3B18CACFF0CC9CAEAB5EC73C8((intptr_t)L_52, /*hidden argument*/NULL);
		V_3 = (int8_t)((*(int8_t*)((int8_t*)UnBox((RuntimeObject *)L_53, IL2CPP_RGCTX_DATA(method->rgctx_data, 1)))));
		goto IL_0266;
	}

IL_0149:
	{
		Type_t * L_54 = V_0;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_55 = { reinterpret_cast<intptr_t> (Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_56 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_55, /*hidden argument*/NULL);
		V_11 = (bool)((((RuntimeObject*)(Type_t *)L_54) == ((RuntimeObject*)(Type_t *)L_56))? 1 : 0);
		bool L_57 = V_11;
		if (!L_57)
		{
			goto IL_016d;
		}
	}
	{
		intptr_t L_58 = ___array0;
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_59 = AndroidJNISafe_FromCharArray_mA49DB27755EF3B2AE81487E0FCFE06E23F617305((intptr_t)L_58, /*hidden argument*/NULL);
		V_3 = (int8_t)((*(int8_t*)((int8_t*)UnBox((RuntimeObject *)L_59, IL2CPP_RGCTX_DATA(method->rgctx_data, 1)))));
		goto IL_0266;
	}

IL_016d:
	{
		goto IL_0259;
	}

IL_0173:
	{
		Type_t * L_60 = V_0;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_61 = { reinterpret_cast<intptr_t> (String_t_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_62 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_61, /*hidden argument*/NULL);
		V_12 = (bool)((((RuntimeObject*)(Type_t *)L_60) == ((RuntimeObject*)(Type_t *)L_62))? 1 : 0);
		bool L_63 = V_12;
		if (!L_63)
		{
			goto IL_01dc;
		}
	}
	{
		intptr_t L_64 = ___array0;
		int32_t L_65 = AndroidJNISafe_GetArrayLength_m3015C191DBFC246946A88592731441A934507B56((intptr_t)L_64, /*hidden argument*/NULL);
		V_13 = (int32_t)L_65;
		int32_t L_66 = V_13;
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_67 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)SZArrayNew(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var, (uint32_t)L_66);
		V_14 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)L_67;
		V_15 = (int32_t)0;
		goto IL_01c3;
	}

IL_019d:
	{
		intptr_t L_68 = ___array0;
		int32_t L_69 = V_15;
		intptr_t L_70 = AndroidJNI_GetObjectArrayElement_m502026BF77232EE45D03661E4923C2E5E99FDE18((intptr_t)L_68, (int32_t)L_69, /*hidden argument*/NULL);
		V_16 = (intptr_t)L_70;
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_71 = V_14;
		int32_t L_72 = V_15;
		intptr_t L_73 = V_16;
		String_t* L_74 = AndroidJNISafe_GetStringChars_mD59FFDE4192F837E1380B51569B5803E09BE58C8((intptr_t)L_73, /*hidden argument*/NULL);
		NullCheck(L_71);
		ArrayElementTypeCheck (L_71, L_74);
		(L_71)->SetAt(static_cast<il2cpp_array_size_t>(L_72), (String_t*)L_74);
		intptr_t L_75 = V_16;
		AndroidJNISafe_DeleteLocalRef_m7AB242A76D13A3BF4C04831D77960C020D6ADA39((intptr_t)L_75, /*hidden argument*/NULL);
		int32_t L_76 = V_15;
		V_15 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_76, (int32_t)1));
	}

IL_01c3:
	{
		int32_t L_77 = V_15;
		int32_t L_78 = V_13;
		V_17 = (bool)((((int32_t)L_77) < ((int32_t)L_78))? 1 : 0);
		bool L_79 = V_17;
		if (L_79)
		{
			goto IL_019d;
		}
	}
	{
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_80 = V_14;
		V_3 = (int8_t)((*(int8_t*)((int8_t*)UnBox((RuntimeObject *)L_80, IL2CPP_RGCTX_DATA(method->rgctx_data, 1)))));
		goto IL_0266;
	}

IL_01dc:
	{
		Type_t * L_81 = V_0;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_82 = { reinterpret_cast<intptr_t> (AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_83 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_82, /*hidden argument*/NULL);
		V_18 = (bool)((((RuntimeObject*)(Type_t *)L_81) == ((RuntimeObject*)(Type_t *)L_83))? 1 : 0);
		bool L_84 = V_18;
		if (!L_84)
		{
			goto IL_0242;
		}
	}
	{
		intptr_t L_85 = ___array0;
		int32_t L_86 = AndroidJNISafe_GetArrayLength_m3015C191DBFC246946A88592731441A934507B56((intptr_t)L_85, /*hidden argument*/NULL);
		V_19 = (int32_t)L_86;
		int32_t L_87 = V_19;
		AndroidJavaObjectU5BU5D_tEE28563C9013906CEB39794019A55F4BA5B06120* L_88 = (AndroidJavaObjectU5BU5D_tEE28563C9013906CEB39794019A55F4BA5B06120*)(AndroidJavaObjectU5BU5D_tEE28563C9013906CEB39794019A55F4BA5B06120*)SZArrayNew(AndroidJavaObjectU5BU5D_tEE28563C9013906CEB39794019A55F4BA5B06120_il2cpp_TypeInfo_var, (uint32_t)L_87);
		V_20 = (AndroidJavaObjectU5BU5D_tEE28563C9013906CEB39794019A55F4BA5B06120*)L_88;
		V_21 = (int32_t)0;
		goto IL_022c;
	}

IL_0206:
	{
		intptr_t L_89 = ___array0;
		int32_t L_90 = V_21;
		intptr_t L_91 = AndroidJNI_GetObjectArrayElement_m502026BF77232EE45D03661E4923C2E5E99FDE18((intptr_t)L_89, (int32_t)L_90, /*hidden argument*/NULL);
		V_22 = (intptr_t)L_91;
		AndroidJavaObjectU5BU5D_tEE28563C9013906CEB39794019A55F4BA5B06120* L_92 = V_20;
		int32_t L_93 = V_21;
		intptr_t L_94 = V_22;
		AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_95 = (AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E *)il2cpp_codegen_object_new(AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_il2cpp_TypeInfo_var);
		AndroidJavaObject__ctor_m880F6533139DF0BD36C6EF428E45E9F44B6534A3(L_95, (intptr_t)L_94, /*hidden argument*/NULL);
		NullCheck(L_92);
		ArrayElementTypeCheck (L_92, L_95);
		(L_92)->SetAt(static_cast<il2cpp_array_size_t>(L_93), (AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E *)L_95);
		intptr_t L_96 = V_22;
		AndroidJNISafe_DeleteLocalRef_m7AB242A76D13A3BF4C04831D77960C020D6ADA39((intptr_t)L_96, /*hidden argument*/NULL);
		int32_t L_97 = V_21;
		V_21 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_97, (int32_t)1));
	}

IL_022c:
	{
		int32_t L_98 = V_21;
		int32_t L_99 = V_19;
		V_23 = (bool)((((int32_t)L_98) < ((int32_t)L_99))? 1 : 0);
		bool L_100 = V_23;
		if (L_100)
		{
			goto IL_0206;
		}
	}
	{
		AndroidJavaObjectU5BU5D_tEE28563C9013906CEB39794019A55F4BA5B06120* L_101 = V_20;
		V_3 = (int8_t)((*(int8_t*)((int8_t*)UnBox((RuntimeObject *)L_101, IL2CPP_RGCTX_DATA(method->rgctx_data, 1)))));
		goto IL_0266;
	}

IL_0242:
	{
		Type_t * L_102 = V_0;
		String_t* L_103 = String_Concat_mFCF5F98D38F99DE7C831CBB9A1BAAAB148FC7D57((RuntimeObject *)_stringLiteral51253131B895C2F8066BCC47E62D44F18F43446C, (RuntimeObject *)L_102, (RuntimeObject *)_stringLiteral42646B33B50B6AA15E22733C8900716F0FE19E1D, /*hidden argument*/NULL);
		Exception_t * L_104 = (Exception_t *)il2cpp_codegen_object_new(Exception_t_il2cpp_TypeInfo_var);
		Exception__ctor_m8ECDE8ACA7F2E0EF1144BD1200FB5DB2870B5F11(L_104, (String_t*)L_103, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_104, _AndroidJNIHelper_ConvertFromJNIArray_TisSByte_t928712DD662DC29BA4FAAE8CE2230AFB23447F0B_m2F4CBB579C50AAAF7EF6FBC73C5FC304A87A60EE_RuntimeMethod_var);
	}

IL_0259:
	{
		il2cpp_codegen_initobj((&V_24), sizeof(int8_t));
		int8_t L_105 = V_24;
		V_3 = (int8_t)L_105;
		goto IL_0266;
	}

IL_0266:
	{
		int8_t L_106 = V_3;
		return L_106;
	}
}
// ArrayType UnityEngine._AndroidJNIHelper::ConvertFromJNIArray<System.Single>(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float _AndroidJNIHelper_ConvertFromJNIArray_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_mD3EDB3217478F469F150970E33043F80EF1BA3CB_gshared (intptr_t ___array0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (_AndroidJNIHelper_ConvertFromJNIArray_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_mD3EDB3217478F469F150970E33043F80EF1BA3CB_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Type_t * V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	float V_3 = 0.0f;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	bool V_8 = false;
	bool V_9 = false;
	bool V_10 = false;
	bool V_11 = false;
	bool V_12 = false;
	int32_t V_13 = 0;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* V_14 = NULL;
	int32_t V_15 = 0;
	intptr_t V_16;
	memset((&V_16), 0, sizeof(V_16));
	bool V_17 = false;
	bool V_18 = false;
	int32_t V_19 = 0;
	AndroidJavaObjectU5BU5D_tEE28563C9013906CEB39794019A55F4BA5B06120* V_20 = NULL;
	int32_t V_21 = 0;
	intptr_t V_22;
	memset((&V_22), 0, sizeof(V_22));
	bool V_23 = false;
	float V_24 = 0.0f;
	{
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_0 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->rgctx_data, 0)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_1 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_0, /*hidden argument*/NULL);
		NullCheck((Type_t *)L_1);
		Type_t * L_2 = VirtFuncInvoker0< Type_t * >::Invoke(97 /* System.Type System.Type::GetElementType() */, (Type_t *)L_1);
		V_0 = (Type_t *)L_2;
		Type_t * L_3 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(AndroidReflection_tEB6633FD5B7D2816E1AC6C711E11B2DD33822F16_il2cpp_TypeInfo_var);
		bool L_4 = AndroidReflection_IsPrimitive_mDD6A4050793DF2FA1EDF58010982C64A3F17376D((Type_t *)L_3, /*hidden argument*/NULL);
		V_1 = (bool)L_4;
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_0173;
		}
	}
	{
		Type_t * L_6 = V_0;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_7 = { reinterpret_cast<intptr_t> (Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_8 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_7, /*hidden argument*/NULL);
		V_2 = (bool)((((RuntimeObject*)(Type_t *)L_6) == ((RuntimeObject*)(Type_t *)L_8))? 1 : 0);
		bool L_9 = V_2;
		if (!L_9)
		{
			goto IL_0041;
		}
	}
	{
		intptr_t L_10 = ___array0;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_11 = AndroidJNISafe_FromIntArray_mBF0C0B4309BA525BBA12D7FD3C2790C8FA7C4703((intptr_t)L_10, /*hidden argument*/NULL);
		V_3 = (float)((*(float*)((float*)UnBox((RuntimeObject *)L_11, IL2CPP_RGCTX_DATA(method->rgctx_data, 1)))));
		goto IL_0266;
	}

IL_0041:
	{
		Type_t * L_12 = V_0;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_13 = { reinterpret_cast<intptr_t> (Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_14 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_13, /*hidden argument*/NULL);
		V_4 = (bool)((((RuntimeObject*)(Type_t *)L_12) == ((RuntimeObject*)(Type_t *)L_14))? 1 : 0);
		bool L_15 = V_4;
		if (!L_15)
		{
			goto IL_0065;
		}
	}
	{
		intptr_t L_16 = ___array0;
		BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C* L_17 = AndroidJNISafe_FromBooleanArray_m77A66C34FCB94ADB1AD5E1D88262500C930A5DBF((intptr_t)L_16, /*hidden argument*/NULL);
		V_3 = (float)((*(float*)((float*)UnBox((RuntimeObject *)L_17, IL2CPP_RGCTX_DATA(method->rgctx_data, 1)))));
		goto IL_0266;
	}

IL_0065:
	{
		Type_t * L_18 = V_0;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_19 = { reinterpret_cast<intptr_t> (Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_20 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_19, /*hidden argument*/NULL);
		V_5 = (bool)((((RuntimeObject*)(Type_t *)L_18) == ((RuntimeObject*)(Type_t *)L_20))? 1 : 0);
		bool L_21 = V_5;
		if (!L_21)
		{
			goto IL_0095;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_LogWarning_m24085D883C9E74D7AB423F0625E13259923960E7((RuntimeObject *)_stringLiteral24CC8D396132365E532646F936DFC8579E2299B2, /*hidden argument*/NULL);
		intptr_t L_22 = ___array0;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_23 = AndroidJNISafe_FromByteArray_m81760A688AECE368E1CFF7DAAC8E141F1B8FA8A8((intptr_t)L_22, /*hidden argument*/NULL);
		V_3 = (float)((*(float*)((float*)UnBox((RuntimeObject *)L_23, IL2CPP_RGCTX_DATA(method->rgctx_data, 1)))));
		goto IL_0266;
	}

IL_0095:
	{
		Type_t * L_24 = V_0;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_25 = { reinterpret_cast<intptr_t> (SByte_t928712DD662DC29BA4FAAE8CE2230AFB23447F0B_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_26 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_25, /*hidden argument*/NULL);
		V_6 = (bool)((((RuntimeObject*)(Type_t *)L_24) == ((RuntimeObject*)(Type_t *)L_26))? 1 : 0);
		bool L_27 = V_6;
		if (!L_27)
		{
			goto IL_00b9;
		}
	}
	{
		intptr_t L_28 = ___array0;
		SByteU5BU5D_t7D94C53295E6116625EA7CC7DEA21FEDC39869E7* L_29 = AndroidJNISafe_FromSByteArray_m01F6539AF10F86B3927436955B57CC809C52416D((intptr_t)L_28, /*hidden argument*/NULL);
		V_3 = (float)((*(float*)((float*)UnBox((RuntimeObject *)L_29, IL2CPP_RGCTX_DATA(method->rgctx_data, 1)))));
		goto IL_0266;
	}

IL_00b9:
	{
		Type_t * L_30 = V_0;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_31 = { reinterpret_cast<intptr_t> (Int16_tD0F031114106263BB459DA1F099FF9F42691295A_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_32 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_31, /*hidden argument*/NULL);
		V_7 = (bool)((((RuntimeObject*)(Type_t *)L_30) == ((RuntimeObject*)(Type_t *)L_32))? 1 : 0);
		bool L_33 = V_7;
		if (!L_33)
		{
			goto IL_00dd;
		}
	}
	{
		intptr_t L_34 = ___array0;
		Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* L_35 = AndroidJNISafe_FromShortArray_mCDF5B796D950D31035BD35A2E463D41509E4A5CD((intptr_t)L_34, /*hidden argument*/NULL);
		V_3 = (float)((*(float*)((float*)UnBox((RuntimeObject *)L_35, IL2CPP_RGCTX_DATA(method->rgctx_data, 1)))));
		goto IL_0266;
	}

IL_00dd:
	{
		Type_t * L_36 = V_0;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_37 = { reinterpret_cast<intptr_t> (Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_38 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_37, /*hidden argument*/NULL);
		V_8 = (bool)((((RuntimeObject*)(Type_t *)L_36) == ((RuntimeObject*)(Type_t *)L_38))? 1 : 0);
		bool L_39 = V_8;
		if (!L_39)
		{
			goto IL_0101;
		}
	}
	{
		intptr_t L_40 = ___array0;
		Int64U5BU5D_tCA61E42872C63A4286B24EEE6E0650143B43DCE6* L_41 = AndroidJNISafe_FromLongArray_m0E7C56CB8CFD0EC240F0D86ECBBFD635FFE55CDA((intptr_t)L_40, /*hidden argument*/NULL);
		V_3 = (float)((*(float*)((float*)UnBox((RuntimeObject *)L_41, IL2CPP_RGCTX_DATA(method->rgctx_data, 1)))));
		goto IL_0266;
	}

IL_0101:
	{
		Type_t * L_42 = V_0;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_43 = { reinterpret_cast<intptr_t> (Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_44 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_43, /*hidden argument*/NULL);
		V_9 = (bool)((((RuntimeObject*)(Type_t *)L_42) == ((RuntimeObject*)(Type_t *)L_44))? 1 : 0);
		bool L_45 = V_9;
		if (!L_45)
		{
			goto IL_0125;
		}
	}
	{
		intptr_t L_46 = ___array0;
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_47 = AndroidJNISafe_FromFloatArray_mF6A63CA1B7C10BC27EEC033F0E390772DFDD652D((intptr_t)L_46, /*hidden argument*/NULL);
		V_3 = (float)((*(float*)((float*)UnBox((RuntimeObject *)L_47, IL2CPP_RGCTX_DATA(method->rgctx_data, 1)))));
		goto IL_0266;
	}

IL_0125:
	{
		Type_t * L_48 = V_0;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_49 = { reinterpret_cast<intptr_t> (Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_50 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_49, /*hidden argument*/NULL);
		V_10 = (bool)((((RuntimeObject*)(Type_t *)L_48) == ((RuntimeObject*)(Type_t *)L_50))? 1 : 0);
		bool L_51 = V_10;
		if (!L_51)
		{
			goto IL_0149;
		}
	}
	{
		intptr_t L_52 = ___array0;
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_53 = AndroidJNISafe_FromDoubleArray_m9438B5668E8B2DB3B18CACFF0CC9CAEAB5EC73C8((intptr_t)L_52, /*hidden argument*/NULL);
		V_3 = (float)((*(float*)((float*)UnBox((RuntimeObject *)L_53, IL2CPP_RGCTX_DATA(method->rgctx_data, 1)))));
		goto IL_0266;
	}

IL_0149:
	{
		Type_t * L_54 = V_0;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_55 = { reinterpret_cast<intptr_t> (Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_56 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_55, /*hidden argument*/NULL);
		V_11 = (bool)((((RuntimeObject*)(Type_t *)L_54) == ((RuntimeObject*)(Type_t *)L_56))? 1 : 0);
		bool L_57 = V_11;
		if (!L_57)
		{
			goto IL_016d;
		}
	}
	{
		intptr_t L_58 = ___array0;
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_59 = AndroidJNISafe_FromCharArray_mA49DB27755EF3B2AE81487E0FCFE06E23F617305((intptr_t)L_58, /*hidden argument*/NULL);
		V_3 = (float)((*(float*)((float*)UnBox((RuntimeObject *)L_59, IL2CPP_RGCTX_DATA(method->rgctx_data, 1)))));
		goto IL_0266;
	}

IL_016d:
	{
		goto IL_0259;
	}

IL_0173:
	{
		Type_t * L_60 = V_0;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_61 = { reinterpret_cast<intptr_t> (String_t_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_62 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_61, /*hidden argument*/NULL);
		V_12 = (bool)((((RuntimeObject*)(Type_t *)L_60) == ((RuntimeObject*)(Type_t *)L_62))? 1 : 0);
		bool L_63 = V_12;
		if (!L_63)
		{
			goto IL_01dc;
		}
	}
	{
		intptr_t L_64 = ___array0;
		int32_t L_65 = AndroidJNISafe_GetArrayLength_m3015C191DBFC246946A88592731441A934507B56((intptr_t)L_64, /*hidden argument*/NULL);
		V_13 = (int32_t)L_65;
		int32_t L_66 = V_13;
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_67 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)SZArrayNew(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var, (uint32_t)L_66);
		V_14 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)L_67;
		V_15 = (int32_t)0;
		goto IL_01c3;
	}

IL_019d:
	{
		intptr_t L_68 = ___array0;
		int32_t L_69 = V_15;
		intptr_t L_70 = AndroidJNI_GetObjectArrayElement_m502026BF77232EE45D03661E4923C2E5E99FDE18((intptr_t)L_68, (int32_t)L_69, /*hidden argument*/NULL);
		V_16 = (intptr_t)L_70;
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_71 = V_14;
		int32_t L_72 = V_15;
		intptr_t L_73 = V_16;
		String_t* L_74 = AndroidJNISafe_GetStringChars_mD59FFDE4192F837E1380B51569B5803E09BE58C8((intptr_t)L_73, /*hidden argument*/NULL);
		NullCheck(L_71);
		ArrayElementTypeCheck (L_71, L_74);
		(L_71)->SetAt(static_cast<il2cpp_array_size_t>(L_72), (String_t*)L_74);
		intptr_t L_75 = V_16;
		AndroidJNISafe_DeleteLocalRef_m7AB242A76D13A3BF4C04831D77960C020D6ADA39((intptr_t)L_75, /*hidden argument*/NULL);
		int32_t L_76 = V_15;
		V_15 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_76, (int32_t)1));
	}

IL_01c3:
	{
		int32_t L_77 = V_15;
		int32_t L_78 = V_13;
		V_17 = (bool)((((int32_t)L_77) < ((int32_t)L_78))? 1 : 0);
		bool L_79 = V_17;
		if (L_79)
		{
			goto IL_019d;
		}
	}
	{
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_80 = V_14;
		V_3 = (float)((*(float*)((float*)UnBox((RuntimeObject *)L_80, IL2CPP_RGCTX_DATA(method->rgctx_data, 1)))));
		goto IL_0266;
	}

IL_01dc:
	{
		Type_t * L_81 = V_0;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_82 = { reinterpret_cast<intptr_t> (AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_83 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_82, /*hidden argument*/NULL);
		V_18 = (bool)((((RuntimeObject*)(Type_t *)L_81) == ((RuntimeObject*)(Type_t *)L_83))? 1 : 0);
		bool L_84 = V_18;
		if (!L_84)
		{
			goto IL_0242;
		}
	}
	{
		intptr_t L_85 = ___array0;
		int32_t L_86 = AndroidJNISafe_GetArrayLength_m3015C191DBFC246946A88592731441A934507B56((intptr_t)L_85, /*hidden argument*/NULL);
		V_19 = (int32_t)L_86;
		int32_t L_87 = V_19;
		AndroidJavaObjectU5BU5D_tEE28563C9013906CEB39794019A55F4BA5B06120* L_88 = (AndroidJavaObjectU5BU5D_tEE28563C9013906CEB39794019A55F4BA5B06120*)(AndroidJavaObjectU5BU5D_tEE28563C9013906CEB39794019A55F4BA5B06120*)SZArrayNew(AndroidJavaObjectU5BU5D_tEE28563C9013906CEB39794019A55F4BA5B06120_il2cpp_TypeInfo_var, (uint32_t)L_87);
		V_20 = (AndroidJavaObjectU5BU5D_tEE28563C9013906CEB39794019A55F4BA5B06120*)L_88;
		V_21 = (int32_t)0;
		goto IL_022c;
	}

IL_0206:
	{
		intptr_t L_89 = ___array0;
		int32_t L_90 = V_21;
		intptr_t L_91 = AndroidJNI_GetObjectArrayElement_m502026BF77232EE45D03661E4923C2E5E99FDE18((intptr_t)L_89, (int32_t)L_90, /*hidden argument*/NULL);
		V_22 = (intptr_t)L_91;
		AndroidJavaObjectU5BU5D_tEE28563C9013906CEB39794019A55F4BA5B06120* L_92 = V_20;
		int32_t L_93 = V_21;
		intptr_t L_94 = V_22;
		AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_95 = (AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E *)il2cpp_codegen_object_new(AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_il2cpp_TypeInfo_var);
		AndroidJavaObject__ctor_m880F6533139DF0BD36C6EF428E45E9F44B6534A3(L_95, (intptr_t)L_94, /*hidden argument*/NULL);
		NullCheck(L_92);
		ArrayElementTypeCheck (L_92, L_95);
		(L_92)->SetAt(static_cast<il2cpp_array_size_t>(L_93), (AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E *)L_95);
		intptr_t L_96 = V_22;
		AndroidJNISafe_DeleteLocalRef_m7AB242A76D13A3BF4C04831D77960C020D6ADA39((intptr_t)L_96, /*hidden argument*/NULL);
		int32_t L_97 = V_21;
		V_21 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_97, (int32_t)1));
	}

IL_022c:
	{
		int32_t L_98 = V_21;
		int32_t L_99 = V_19;
		V_23 = (bool)((((int32_t)L_98) < ((int32_t)L_99))? 1 : 0);
		bool L_100 = V_23;
		if (L_100)
		{
			goto IL_0206;
		}
	}
	{
		AndroidJavaObjectU5BU5D_tEE28563C9013906CEB39794019A55F4BA5B06120* L_101 = V_20;
		V_3 = (float)((*(float*)((float*)UnBox((RuntimeObject *)L_101, IL2CPP_RGCTX_DATA(method->rgctx_data, 1)))));
		goto IL_0266;
	}

IL_0242:
	{
		Type_t * L_102 = V_0;
		String_t* L_103 = String_Concat_mFCF5F98D38F99DE7C831CBB9A1BAAAB148FC7D57((RuntimeObject *)_stringLiteral51253131B895C2F8066BCC47E62D44F18F43446C, (RuntimeObject *)L_102, (RuntimeObject *)_stringLiteral42646B33B50B6AA15E22733C8900716F0FE19E1D, /*hidden argument*/NULL);
		Exception_t * L_104 = (Exception_t *)il2cpp_codegen_object_new(Exception_t_il2cpp_TypeInfo_var);
		Exception__ctor_m8ECDE8ACA7F2E0EF1144BD1200FB5DB2870B5F11(L_104, (String_t*)L_103, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_104, _AndroidJNIHelper_ConvertFromJNIArray_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_mD3EDB3217478F469F150970E33043F80EF1BA3CB_RuntimeMethod_var);
	}

IL_0259:
	{
		il2cpp_codegen_initobj((&V_24), sizeof(float));
		float L_105 = V_24;
		V_3 = (float)L_105;
		goto IL_0266;
	}

IL_0266:
	{
		float L_106 = V_3;
		return L_106;
	}
}
// ArrayType UnityEngine._AndroidJNIHelper::ConvertFromJNIArray<System.Object>(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * _AndroidJNIHelper_ConvertFromJNIArray_TisRuntimeObject_m353E485413995A0C209B6FAA96D368CF72FB4592_gshared (intptr_t ___array0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (_AndroidJNIHelper_ConvertFromJNIArray_TisRuntimeObject_m353E485413995A0C209B6FAA96D368CF72FB4592_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Type_t * V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	RuntimeObject * V_3 = NULL;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	bool V_8 = false;
	bool V_9 = false;
	bool V_10 = false;
	bool V_11 = false;
	bool V_12 = false;
	int32_t V_13 = 0;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* V_14 = NULL;
	int32_t V_15 = 0;
	intptr_t V_16;
	memset((&V_16), 0, sizeof(V_16));
	bool V_17 = false;
	bool V_18 = false;
	int32_t V_19 = 0;
	AndroidJavaObjectU5BU5D_tEE28563C9013906CEB39794019A55F4BA5B06120* V_20 = NULL;
	int32_t V_21 = 0;
	intptr_t V_22;
	memset((&V_22), 0, sizeof(V_22));
	bool V_23 = false;
	RuntimeObject * V_24 = NULL;
	{
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_0 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->rgctx_data, 0)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_1 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_0, /*hidden argument*/NULL);
		NullCheck((Type_t *)L_1);
		Type_t * L_2 = VirtFuncInvoker0< Type_t * >::Invoke(97 /* System.Type System.Type::GetElementType() */, (Type_t *)L_1);
		V_0 = (Type_t *)L_2;
		Type_t * L_3 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(AndroidReflection_tEB6633FD5B7D2816E1AC6C711E11B2DD33822F16_il2cpp_TypeInfo_var);
		bool L_4 = AndroidReflection_IsPrimitive_mDD6A4050793DF2FA1EDF58010982C64A3F17376D((Type_t *)L_3, /*hidden argument*/NULL);
		V_1 = (bool)L_4;
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_0173;
		}
	}
	{
		Type_t * L_6 = V_0;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_7 = { reinterpret_cast<intptr_t> (Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_8 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_7, /*hidden argument*/NULL);
		V_2 = (bool)((((RuntimeObject*)(Type_t *)L_6) == ((RuntimeObject*)(Type_t *)L_8))? 1 : 0);
		bool L_9 = V_2;
		if (!L_9)
		{
			goto IL_0041;
		}
	}
	{
		intptr_t L_10 = ___array0;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_11 = AndroidJNISafe_FromIntArray_mBF0C0B4309BA525BBA12D7FD3C2790C8FA7C4703((intptr_t)L_10, /*hidden argument*/NULL);
		V_3 = (RuntimeObject *)((RuntimeObject *)Castclass((RuntimeObject*)L_11, IL2CPP_RGCTX_DATA(method->rgctx_data, 1)));
		goto IL_0266;
	}

IL_0041:
	{
		Type_t * L_12 = V_0;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_13 = { reinterpret_cast<intptr_t> (Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_14 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_13, /*hidden argument*/NULL);
		V_4 = (bool)((((RuntimeObject*)(Type_t *)L_12) == ((RuntimeObject*)(Type_t *)L_14))? 1 : 0);
		bool L_15 = V_4;
		if (!L_15)
		{
			goto IL_0065;
		}
	}
	{
		intptr_t L_16 = ___array0;
		BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C* L_17 = AndroidJNISafe_FromBooleanArray_m77A66C34FCB94ADB1AD5E1D88262500C930A5DBF((intptr_t)L_16, /*hidden argument*/NULL);
		V_3 = (RuntimeObject *)((RuntimeObject *)Castclass((RuntimeObject*)L_17, IL2CPP_RGCTX_DATA(method->rgctx_data, 1)));
		goto IL_0266;
	}

IL_0065:
	{
		Type_t * L_18 = V_0;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_19 = { reinterpret_cast<intptr_t> (Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_20 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_19, /*hidden argument*/NULL);
		V_5 = (bool)((((RuntimeObject*)(Type_t *)L_18) == ((RuntimeObject*)(Type_t *)L_20))? 1 : 0);
		bool L_21 = V_5;
		if (!L_21)
		{
			goto IL_0095;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_LogWarning_m24085D883C9E74D7AB423F0625E13259923960E7((RuntimeObject *)_stringLiteral24CC8D396132365E532646F936DFC8579E2299B2, /*hidden argument*/NULL);
		intptr_t L_22 = ___array0;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_23 = AndroidJNISafe_FromByteArray_m81760A688AECE368E1CFF7DAAC8E141F1B8FA8A8((intptr_t)L_22, /*hidden argument*/NULL);
		V_3 = (RuntimeObject *)((RuntimeObject *)Castclass((RuntimeObject*)L_23, IL2CPP_RGCTX_DATA(method->rgctx_data, 1)));
		goto IL_0266;
	}

IL_0095:
	{
		Type_t * L_24 = V_0;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_25 = { reinterpret_cast<intptr_t> (SByte_t928712DD662DC29BA4FAAE8CE2230AFB23447F0B_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_26 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_25, /*hidden argument*/NULL);
		V_6 = (bool)((((RuntimeObject*)(Type_t *)L_24) == ((RuntimeObject*)(Type_t *)L_26))? 1 : 0);
		bool L_27 = V_6;
		if (!L_27)
		{
			goto IL_00b9;
		}
	}
	{
		intptr_t L_28 = ___array0;
		SByteU5BU5D_t7D94C53295E6116625EA7CC7DEA21FEDC39869E7* L_29 = AndroidJNISafe_FromSByteArray_m01F6539AF10F86B3927436955B57CC809C52416D((intptr_t)L_28, /*hidden argument*/NULL);
		V_3 = (RuntimeObject *)((RuntimeObject *)Castclass((RuntimeObject*)L_29, IL2CPP_RGCTX_DATA(method->rgctx_data, 1)));
		goto IL_0266;
	}

IL_00b9:
	{
		Type_t * L_30 = V_0;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_31 = { reinterpret_cast<intptr_t> (Int16_tD0F031114106263BB459DA1F099FF9F42691295A_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_32 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_31, /*hidden argument*/NULL);
		V_7 = (bool)((((RuntimeObject*)(Type_t *)L_30) == ((RuntimeObject*)(Type_t *)L_32))? 1 : 0);
		bool L_33 = V_7;
		if (!L_33)
		{
			goto IL_00dd;
		}
	}
	{
		intptr_t L_34 = ___array0;
		Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* L_35 = AndroidJNISafe_FromShortArray_mCDF5B796D950D31035BD35A2E463D41509E4A5CD((intptr_t)L_34, /*hidden argument*/NULL);
		V_3 = (RuntimeObject *)((RuntimeObject *)Castclass((RuntimeObject*)L_35, IL2CPP_RGCTX_DATA(method->rgctx_data, 1)));
		goto IL_0266;
	}

IL_00dd:
	{
		Type_t * L_36 = V_0;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_37 = { reinterpret_cast<intptr_t> (Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_38 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_37, /*hidden argument*/NULL);
		V_8 = (bool)((((RuntimeObject*)(Type_t *)L_36) == ((RuntimeObject*)(Type_t *)L_38))? 1 : 0);
		bool L_39 = V_8;
		if (!L_39)
		{
			goto IL_0101;
		}
	}
	{
		intptr_t L_40 = ___array0;
		Int64U5BU5D_tCA61E42872C63A4286B24EEE6E0650143B43DCE6* L_41 = AndroidJNISafe_FromLongArray_m0E7C56CB8CFD0EC240F0D86ECBBFD635FFE55CDA((intptr_t)L_40, /*hidden argument*/NULL);
		V_3 = (RuntimeObject *)((RuntimeObject *)Castclass((RuntimeObject*)L_41, IL2CPP_RGCTX_DATA(method->rgctx_data, 1)));
		goto IL_0266;
	}

IL_0101:
	{
		Type_t * L_42 = V_0;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_43 = { reinterpret_cast<intptr_t> (Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_44 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_43, /*hidden argument*/NULL);
		V_9 = (bool)((((RuntimeObject*)(Type_t *)L_42) == ((RuntimeObject*)(Type_t *)L_44))? 1 : 0);
		bool L_45 = V_9;
		if (!L_45)
		{
			goto IL_0125;
		}
	}
	{
		intptr_t L_46 = ___array0;
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_47 = AndroidJNISafe_FromFloatArray_mF6A63CA1B7C10BC27EEC033F0E390772DFDD652D((intptr_t)L_46, /*hidden argument*/NULL);
		V_3 = (RuntimeObject *)((RuntimeObject *)Castclass((RuntimeObject*)L_47, IL2CPP_RGCTX_DATA(method->rgctx_data, 1)));
		goto IL_0266;
	}

IL_0125:
	{
		Type_t * L_48 = V_0;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_49 = { reinterpret_cast<intptr_t> (Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_50 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_49, /*hidden argument*/NULL);
		V_10 = (bool)((((RuntimeObject*)(Type_t *)L_48) == ((RuntimeObject*)(Type_t *)L_50))? 1 : 0);
		bool L_51 = V_10;
		if (!L_51)
		{
			goto IL_0149;
		}
	}
	{
		intptr_t L_52 = ___array0;
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_53 = AndroidJNISafe_FromDoubleArray_m9438B5668E8B2DB3B18CACFF0CC9CAEAB5EC73C8((intptr_t)L_52, /*hidden argument*/NULL);
		V_3 = (RuntimeObject *)((RuntimeObject *)Castclass((RuntimeObject*)L_53, IL2CPP_RGCTX_DATA(method->rgctx_data, 1)));
		goto IL_0266;
	}

IL_0149:
	{
		Type_t * L_54 = V_0;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_55 = { reinterpret_cast<intptr_t> (Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_56 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_55, /*hidden argument*/NULL);
		V_11 = (bool)((((RuntimeObject*)(Type_t *)L_54) == ((RuntimeObject*)(Type_t *)L_56))? 1 : 0);
		bool L_57 = V_11;
		if (!L_57)
		{
			goto IL_016d;
		}
	}
	{
		intptr_t L_58 = ___array0;
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_59 = AndroidJNISafe_FromCharArray_mA49DB27755EF3B2AE81487E0FCFE06E23F617305((intptr_t)L_58, /*hidden argument*/NULL);
		V_3 = (RuntimeObject *)((RuntimeObject *)Castclass((RuntimeObject*)L_59, IL2CPP_RGCTX_DATA(method->rgctx_data, 1)));
		goto IL_0266;
	}

IL_016d:
	{
		goto IL_0259;
	}

IL_0173:
	{
		Type_t * L_60 = V_0;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_61 = { reinterpret_cast<intptr_t> (String_t_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_62 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_61, /*hidden argument*/NULL);
		V_12 = (bool)((((RuntimeObject*)(Type_t *)L_60) == ((RuntimeObject*)(Type_t *)L_62))? 1 : 0);
		bool L_63 = V_12;
		if (!L_63)
		{
			goto IL_01dc;
		}
	}
	{
		intptr_t L_64 = ___array0;
		int32_t L_65 = AndroidJNISafe_GetArrayLength_m3015C191DBFC246946A88592731441A934507B56((intptr_t)L_64, /*hidden argument*/NULL);
		V_13 = (int32_t)L_65;
		int32_t L_66 = V_13;
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_67 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)SZArrayNew(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var, (uint32_t)L_66);
		V_14 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)L_67;
		V_15 = (int32_t)0;
		goto IL_01c3;
	}

IL_019d:
	{
		intptr_t L_68 = ___array0;
		int32_t L_69 = V_15;
		intptr_t L_70 = AndroidJNI_GetObjectArrayElement_m502026BF77232EE45D03661E4923C2E5E99FDE18((intptr_t)L_68, (int32_t)L_69, /*hidden argument*/NULL);
		V_16 = (intptr_t)L_70;
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_71 = V_14;
		int32_t L_72 = V_15;
		intptr_t L_73 = V_16;
		String_t* L_74 = AndroidJNISafe_GetStringChars_mD59FFDE4192F837E1380B51569B5803E09BE58C8((intptr_t)L_73, /*hidden argument*/NULL);
		NullCheck(L_71);
		ArrayElementTypeCheck (L_71, L_74);
		(L_71)->SetAt(static_cast<il2cpp_array_size_t>(L_72), (String_t*)L_74);
		intptr_t L_75 = V_16;
		AndroidJNISafe_DeleteLocalRef_m7AB242A76D13A3BF4C04831D77960C020D6ADA39((intptr_t)L_75, /*hidden argument*/NULL);
		int32_t L_76 = V_15;
		V_15 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_76, (int32_t)1));
	}

IL_01c3:
	{
		int32_t L_77 = V_15;
		int32_t L_78 = V_13;
		V_17 = (bool)((((int32_t)L_77) < ((int32_t)L_78))? 1 : 0);
		bool L_79 = V_17;
		if (L_79)
		{
			goto IL_019d;
		}
	}
	{
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_80 = V_14;
		V_3 = (RuntimeObject *)((RuntimeObject *)Castclass((RuntimeObject*)L_80, IL2CPP_RGCTX_DATA(method->rgctx_data, 1)));
		goto IL_0266;
	}

IL_01dc:
	{
		Type_t * L_81 = V_0;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_82 = { reinterpret_cast<intptr_t> (AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_83 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_82, /*hidden argument*/NULL);
		V_18 = (bool)((((RuntimeObject*)(Type_t *)L_81) == ((RuntimeObject*)(Type_t *)L_83))? 1 : 0);
		bool L_84 = V_18;
		if (!L_84)
		{
			goto IL_0242;
		}
	}
	{
		intptr_t L_85 = ___array0;
		int32_t L_86 = AndroidJNISafe_GetArrayLength_m3015C191DBFC246946A88592731441A934507B56((intptr_t)L_85, /*hidden argument*/NULL);
		V_19 = (int32_t)L_86;
		int32_t L_87 = V_19;
		AndroidJavaObjectU5BU5D_tEE28563C9013906CEB39794019A55F4BA5B06120* L_88 = (AndroidJavaObjectU5BU5D_tEE28563C9013906CEB39794019A55F4BA5B06120*)(AndroidJavaObjectU5BU5D_tEE28563C9013906CEB39794019A55F4BA5B06120*)SZArrayNew(AndroidJavaObjectU5BU5D_tEE28563C9013906CEB39794019A55F4BA5B06120_il2cpp_TypeInfo_var, (uint32_t)L_87);
		V_20 = (AndroidJavaObjectU5BU5D_tEE28563C9013906CEB39794019A55F4BA5B06120*)L_88;
		V_21 = (int32_t)0;
		goto IL_022c;
	}

IL_0206:
	{
		intptr_t L_89 = ___array0;
		int32_t L_90 = V_21;
		intptr_t L_91 = AndroidJNI_GetObjectArrayElement_m502026BF77232EE45D03661E4923C2E5E99FDE18((intptr_t)L_89, (int32_t)L_90, /*hidden argument*/NULL);
		V_22 = (intptr_t)L_91;
		AndroidJavaObjectU5BU5D_tEE28563C9013906CEB39794019A55F4BA5B06120* L_92 = V_20;
		int32_t L_93 = V_21;
		intptr_t L_94 = V_22;
		AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_95 = (AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E *)il2cpp_codegen_object_new(AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_il2cpp_TypeInfo_var);
		AndroidJavaObject__ctor_m880F6533139DF0BD36C6EF428E45E9F44B6534A3(L_95, (intptr_t)L_94, /*hidden argument*/NULL);
		NullCheck(L_92);
		ArrayElementTypeCheck (L_92, L_95);
		(L_92)->SetAt(static_cast<il2cpp_array_size_t>(L_93), (AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E *)L_95);
		intptr_t L_96 = V_22;
		AndroidJNISafe_DeleteLocalRef_m7AB242A76D13A3BF4C04831D77960C020D6ADA39((intptr_t)L_96, /*hidden argument*/NULL);
		int32_t L_97 = V_21;
		V_21 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_97, (int32_t)1));
	}

IL_022c:
	{
		int32_t L_98 = V_21;
		int32_t L_99 = V_19;
		V_23 = (bool)((((int32_t)L_98) < ((int32_t)L_99))? 1 : 0);
		bool L_100 = V_23;
		if (L_100)
		{
			goto IL_0206;
		}
	}
	{
		AndroidJavaObjectU5BU5D_tEE28563C9013906CEB39794019A55F4BA5B06120* L_101 = V_20;
		V_3 = (RuntimeObject *)((RuntimeObject *)Castclass((RuntimeObject*)L_101, IL2CPP_RGCTX_DATA(method->rgctx_data, 1)));
		goto IL_0266;
	}

IL_0242:
	{
		Type_t * L_102 = V_0;
		String_t* L_103 = String_Concat_mFCF5F98D38F99DE7C831CBB9A1BAAAB148FC7D57((RuntimeObject *)_stringLiteral51253131B895C2F8066BCC47E62D44F18F43446C, (RuntimeObject *)L_102, (RuntimeObject *)_stringLiteral42646B33B50B6AA15E22733C8900716F0FE19E1D, /*hidden argument*/NULL);
		Exception_t * L_104 = (Exception_t *)il2cpp_codegen_object_new(Exception_t_il2cpp_TypeInfo_var);
		Exception__ctor_m8ECDE8ACA7F2E0EF1144BD1200FB5DB2870B5F11(L_104, (String_t*)L_103, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_104, _AndroidJNIHelper_ConvertFromJNIArray_TisRuntimeObject_m353E485413995A0C209B6FAA96D368CF72FB4592_RuntimeMethod_var);
	}

IL_0259:
	{
		il2cpp_codegen_initobj((&V_24), sizeof(RuntimeObject *));
		RuntimeObject * L_105 = V_24;
		V_3 = (RuntimeObject *)L_105;
		goto IL_0266;
	}

IL_0266:
	{
		RuntimeObject * L_106 = V_3;
		return L_106;
	}
}
// System.IntPtr UnityEngine._AndroidJNIHelper::GetMethodID<System.Boolean>(System.IntPtr,System.String,System.Object[],System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t _AndroidJNIHelper_GetMethodID_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_mA6A3AB087792C0011A244BF219EB013D009592B2_gshared (intptr_t ___jclass0, String_t* ___methodName1, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___args2, bool ___isStatic3, const RuntimeMethod* method)
{
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		intptr_t L_0 = ___jclass0;
		String_t* L_1 = ___methodName1;
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_2 = ___args2;
		String_t* L_3 = ((  String_t* (*) (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)((ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		bool L_4 = ___isStatic3;
		intptr_t L_5 = AndroidJNIHelper_GetMethodID_m2B5E7C9B05905F6C6B60A735B8A6E97BBA468535((intptr_t)L_0, (String_t*)L_1, (String_t*)L_3, (bool)L_4, /*hidden argument*/NULL);
		V_0 = (intptr_t)L_5;
		goto IL_0012;
	}

IL_0012:
	{
		intptr_t L_6 = V_0;
		return (intptr_t)L_6;
	}
}
// System.IntPtr UnityEngine._AndroidJNIHelper::GetMethodID<System.Char>(System.IntPtr,System.String,System.Object[],System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t _AndroidJNIHelper_GetMethodID_TisChar_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_mF091800677E029891EFE21CF853FAF7A59EAA5EB_gshared (intptr_t ___jclass0, String_t* ___methodName1, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___args2, bool ___isStatic3, const RuntimeMethod* method)
{
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		intptr_t L_0 = ___jclass0;
		String_t* L_1 = ___methodName1;
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_2 = ___args2;
		String_t* L_3 = ((  String_t* (*) (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)((ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		bool L_4 = ___isStatic3;
		intptr_t L_5 = AndroidJNIHelper_GetMethodID_m2B5E7C9B05905F6C6B60A735B8A6E97BBA468535((intptr_t)L_0, (String_t*)L_1, (String_t*)L_3, (bool)L_4, /*hidden argument*/NULL);
		V_0 = (intptr_t)L_5;
		goto IL_0012;
	}

IL_0012:
	{
		intptr_t L_6 = V_0;
		return (intptr_t)L_6;
	}
}
// System.IntPtr UnityEngine._AndroidJNIHelper::GetMethodID<System.Double>(System.IntPtr,System.String,System.Object[],System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t _AndroidJNIHelper_GetMethodID_TisDouble_t42821932CB52DE2057E685D0E1AF3DE5033D2181_m2AC2F0071B32B0242BD624B60ED4DF0989C8FA51_gshared (intptr_t ___jclass0, String_t* ___methodName1, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___args2, bool ___isStatic3, const RuntimeMethod* method)
{
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		intptr_t L_0 = ___jclass0;
		String_t* L_1 = ___methodName1;
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_2 = ___args2;
		String_t* L_3 = ((  String_t* (*) (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)((ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		bool L_4 = ___isStatic3;
		intptr_t L_5 = AndroidJNIHelper_GetMethodID_m2B5E7C9B05905F6C6B60A735B8A6E97BBA468535((intptr_t)L_0, (String_t*)L_1, (String_t*)L_3, (bool)L_4, /*hidden argument*/NULL);
		V_0 = (intptr_t)L_5;
		goto IL_0012;
	}

IL_0012:
	{
		intptr_t L_6 = V_0;
		return (intptr_t)L_6;
	}
}
// System.IntPtr UnityEngine._AndroidJNIHelper::GetMethodID<System.Int16>(System.IntPtr,System.String,System.Object[],System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t _AndroidJNIHelper_GetMethodID_TisInt16_tD0F031114106263BB459DA1F099FF9F42691295A_m75B0CDC857E28490BBB6B93E24923ECA7D896754_gshared (intptr_t ___jclass0, String_t* ___methodName1, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___args2, bool ___isStatic3, const RuntimeMethod* method)
{
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		intptr_t L_0 = ___jclass0;
		String_t* L_1 = ___methodName1;
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_2 = ___args2;
		String_t* L_3 = ((  String_t* (*) (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)((ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		bool L_4 = ___isStatic3;
		intptr_t L_5 = AndroidJNIHelper_GetMethodID_m2B5E7C9B05905F6C6B60A735B8A6E97BBA468535((intptr_t)L_0, (String_t*)L_1, (String_t*)L_3, (bool)L_4, /*hidden argument*/NULL);
		V_0 = (intptr_t)L_5;
		goto IL_0012;
	}

IL_0012:
	{
		intptr_t L_6 = V_0;
		return (intptr_t)L_6;
	}
}
// System.IntPtr UnityEngine._AndroidJNIHelper::GetMethodID<System.Int32>(System.IntPtr,System.String,System.Object[],System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t _AndroidJNIHelper_GetMethodID_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m74985872D44523341B02768E3167C022A0BB74C0_gshared (intptr_t ___jclass0, String_t* ___methodName1, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___args2, bool ___isStatic3, const RuntimeMethod* method)
{
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		intptr_t L_0 = ___jclass0;
		String_t* L_1 = ___methodName1;
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_2 = ___args2;
		String_t* L_3 = ((  String_t* (*) (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)((ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		bool L_4 = ___isStatic3;
		intptr_t L_5 = AndroidJNIHelper_GetMethodID_m2B5E7C9B05905F6C6B60A735B8A6E97BBA468535((intptr_t)L_0, (String_t*)L_1, (String_t*)L_3, (bool)L_4, /*hidden argument*/NULL);
		V_0 = (intptr_t)L_5;
		goto IL_0012;
	}

IL_0012:
	{
		intptr_t L_6 = V_0;
		return (intptr_t)L_6;
	}
}
// System.IntPtr UnityEngine._AndroidJNIHelper::GetMethodID<System.Int64>(System.IntPtr,System.String,System.Object[],System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t _AndroidJNIHelper_GetMethodID_TisInt64_t378EE0D608BD3107E77238E85F30D2BBD46981F3_m94135D9C37BCAFBC5C814AB2EB52A4A2B46A92A4_gshared (intptr_t ___jclass0, String_t* ___methodName1, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___args2, bool ___isStatic3, const RuntimeMethod* method)
{
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		intptr_t L_0 = ___jclass0;
		String_t* L_1 = ___methodName1;
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_2 = ___args2;
		String_t* L_3 = ((  String_t* (*) (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)((ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		bool L_4 = ___isStatic3;
		intptr_t L_5 = AndroidJNIHelper_GetMethodID_m2B5E7C9B05905F6C6B60A735B8A6E97BBA468535((intptr_t)L_0, (String_t*)L_1, (String_t*)L_3, (bool)L_4, /*hidden argument*/NULL);
		V_0 = (intptr_t)L_5;
		goto IL_0012;
	}

IL_0012:
	{
		intptr_t L_6 = V_0;
		return (intptr_t)L_6;
	}
}
// System.IntPtr UnityEngine._AndroidJNIHelper::GetMethodID<System.SByte>(System.IntPtr,System.String,System.Object[],System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t _AndroidJNIHelper_GetMethodID_TisSByte_t928712DD662DC29BA4FAAE8CE2230AFB23447F0B_m33DBC436D5D48BD8B087CC4D6BDC0FF2B658D402_gshared (intptr_t ___jclass0, String_t* ___methodName1, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___args2, bool ___isStatic3, const RuntimeMethod* method)
{
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		intptr_t L_0 = ___jclass0;
		String_t* L_1 = ___methodName1;
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_2 = ___args2;
		String_t* L_3 = ((  String_t* (*) (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)((ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		bool L_4 = ___isStatic3;
		intptr_t L_5 = AndroidJNIHelper_GetMethodID_m2B5E7C9B05905F6C6B60A735B8A6E97BBA468535((intptr_t)L_0, (String_t*)L_1, (String_t*)L_3, (bool)L_4, /*hidden argument*/NULL);
		V_0 = (intptr_t)L_5;
		goto IL_0012;
	}

IL_0012:
	{
		intptr_t L_6 = V_0;
		return (intptr_t)L_6;
	}
}
// System.IntPtr UnityEngine._AndroidJNIHelper::GetMethodID<System.Single>(System.IntPtr,System.String,System.Object[],System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t _AndroidJNIHelper_GetMethodID_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_m056304D259B1FDB717A6CEE1A2262C45CE33DEBC_gshared (intptr_t ___jclass0, String_t* ___methodName1, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___args2, bool ___isStatic3, const RuntimeMethod* method)
{
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		intptr_t L_0 = ___jclass0;
		String_t* L_1 = ___methodName1;
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_2 = ___args2;
		String_t* L_3 = ((  String_t* (*) (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)((ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		bool L_4 = ___isStatic3;
		intptr_t L_5 = AndroidJNIHelper_GetMethodID_m2B5E7C9B05905F6C6B60A735B8A6E97BBA468535((intptr_t)L_0, (String_t*)L_1, (String_t*)L_3, (bool)L_4, /*hidden argument*/NULL);
		V_0 = (intptr_t)L_5;
		goto IL_0012;
	}

IL_0012:
	{
		intptr_t L_6 = V_0;
		return (intptr_t)L_6;
	}
}
// System.IntPtr UnityEngine._AndroidJNIHelper::GetMethodID<System.Object>(System.IntPtr,System.String,System.Object[],System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t _AndroidJNIHelper_GetMethodID_TisRuntimeObject_mE923D006BD57E879AAE0EF692E8D0045CF7E0748_gshared (intptr_t ___jclass0, String_t* ___methodName1, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___args2, bool ___isStatic3, const RuntimeMethod* method)
{
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		intptr_t L_0 = ___jclass0;
		String_t* L_1 = ___methodName1;
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_2 = ___args2;
		String_t* L_3 = ((  String_t* (*) (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)((ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		bool L_4 = ___isStatic3;
		intptr_t L_5 = AndroidJNIHelper_GetMethodID_m2B5E7C9B05905F6C6B60A735B8A6E97BBA468535((intptr_t)L_0, (String_t*)L_1, (String_t*)L_3, (bool)L_4, /*hidden argument*/NULL);
		V_0 = (intptr_t)L_5;
		goto IL_0012;
	}

IL_0012:
	{
		intptr_t L_6 = V_0;
		return (intptr_t)L_6;
	}
}
// System.String UnityEngine._AndroidJNIHelper::GetSignature<System.Boolean>(System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* _AndroidJNIHelper_GetSignature_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_mBD54DD62EF90673A4806A2CEFA031CFE3C998274_gshared (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___args0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (_AndroidJNIHelper_GetSignature_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_mBD54DD62EF90673A4806A2CEFA031CFE3C998274_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StringBuilder_t * V_0 = NULL;
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* V_1 = NULL;
	int32_t V_2 = 0;
	RuntimeObject * V_3 = NULL;
	String_t* V_4 = NULL;
	{
		StringBuilder_t * L_0 = (StringBuilder_t *)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		StringBuilder__ctor_m5A81DE19E748F748E19FF13FB6FFD2547F9212D9(L_0, /*hidden argument*/NULL);
		V_0 = (StringBuilder_t *)L_0;
		StringBuilder_t * L_1 = V_0;
		NullCheck((StringBuilder_t *)L_1);
		StringBuilder_Append_m1ADA3C16E40BF253BCDB5F9579B4DBA9C3E5B22E((StringBuilder_t *)L_1, (Il2CppChar)((int32_t)40), /*hidden argument*/NULL);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_2 = ___args0;
		V_1 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)L_2;
		V_2 = (int32_t)0;
		goto IL_002e;
	}

IL_0017:
	{
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_3 = V_1;
		int32_t L_4 = V_2;
		NullCheck(L_3);
		int32_t L_5 = L_4;
		RuntimeObject * L_6 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		V_3 = (RuntimeObject *)L_6;
		StringBuilder_t * L_7 = V_0;
		RuntimeObject * L_8 = V_3;
		String_t* L_9 = _AndroidJNIHelper_GetSignature_m4A272D66518BF9A4C746B02B91AAB1361293232C((RuntimeObject *)L_8, /*hidden argument*/NULL);
		NullCheck((StringBuilder_t *)L_7);
		StringBuilder_Append_mD02AB0C74C6F55E3E330818C77EC147E22096FB1((StringBuilder_t *)L_7, (String_t*)L_9, /*hidden argument*/NULL);
		int32_t L_10 = V_2;
		V_2 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_10, (int32_t)1));
	}

IL_002e:
	{
		int32_t L_11 = V_2;
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_12 = V_1;
		NullCheck(L_12);
		if ((((int32_t)L_11) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_12)->max_length)))))))
		{
			goto IL_0017;
		}
	}
	{
		StringBuilder_t * L_13 = V_0;
		NullCheck((StringBuilder_t *)L_13);
		StringBuilder_Append_m1ADA3C16E40BF253BCDB5F9579B4DBA9C3E5B22E((StringBuilder_t *)L_13, (Il2CppChar)((int32_t)41), /*hidden argument*/NULL);
		StringBuilder_t * L_14 = V_0;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_15 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->rgctx_data, 0)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_16 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_15, /*hidden argument*/NULL);
		String_t* L_17 = _AndroidJNIHelper_GetSignature_m4A272D66518BF9A4C746B02B91AAB1361293232C((RuntimeObject *)L_16, /*hidden argument*/NULL);
		NullCheck((StringBuilder_t *)L_14);
		StringBuilder_Append_mD02AB0C74C6F55E3E330818C77EC147E22096FB1((StringBuilder_t *)L_14, (String_t*)L_17, /*hidden argument*/NULL);
		StringBuilder_t * L_18 = V_0;
		NullCheck((RuntimeObject *)L_18);
		String_t* L_19 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, (RuntimeObject *)L_18);
		V_4 = (String_t*)L_19;
		goto IL_005d;
	}

IL_005d:
	{
		String_t* L_20 = V_4;
		return L_20;
	}
}
// System.String UnityEngine._AndroidJNIHelper::GetSignature<System.Char>(System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* _AndroidJNIHelper_GetSignature_TisChar_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_mB636DED19D226BEDFC17AE941CAD220377CA0584_gshared (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___args0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (_AndroidJNIHelper_GetSignature_TisChar_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_mB636DED19D226BEDFC17AE941CAD220377CA0584_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StringBuilder_t * V_0 = NULL;
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* V_1 = NULL;
	int32_t V_2 = 0;
	RuntimeObject * V_3 = NULL;
	String_t* V_4 = NULL;
	{
		StringBuilder_t * L_0 = (StringBuilder_t *)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		StringBuilder__ctor_m5A81DE19E748F748E19FF13FB6FFD2547F9212D9(L_0, /*hidden argument*/NULL);
		V_0 = (StringBuilder_t *)L_0;
		StringBuilder_t * L_1 = V_0;
		NullCheck((StringBuilder_t *)L_1);
		StringBuilder_Append_m1ADA3C16E40BF253BCDB5F9579B4DBA9C3E5B22E((StringBuilder_t *)L_1, (Il2CppChar)((int32_t)40), /*hidden argument*/NULL);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_2 = ___args0;
		V_1 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)L_2;
		V_2 = (int32_t)0;
		goto IL_002e;
	}

IL_0017:
	{
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_3 = V_1;
		int32_t L_4 = V_2;
		NullCheck(L_3);
		int32_t L_5 = L_4;
		RuntimeObject * L_6 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		V_3 = (RuntimeObject *)L_6;
		StringBuilder_t * L_7 = V_0;
		RuntimeObject * L_8 = V_3;
		String_t* L_9 = _AndroidJNIHelper_GetSignature_m4A272D66518BF9A4C746B02B91AAB1361293232C((RuntimeObject *)L_8, /*hidden argument*/NULL);
		NullCheck((StringBuilder_t *)L_7);
		StringBuilder_Append_mD02AB0C74C6F55E3E330818C77EC147E22096FB1((StringBuilder_t *)L_7, (String_t*)L_9, /*hidden argument*/NULL);
		int32_t L_10 = V_2;
		V_2 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_10, (int32_t)1));
	}

IL_002e:
	{
		int32_t L_11 = V_2;
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_12 = V_1;
		NullCheck(L_12);
		if ((((int32_t)L_11) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_12)->max_length)))))))
		{
			goto IL_0017;
		}
	}
	{
		StringBuilder_t * L_13 = V_0;
		NullCheck((StringBuilder_t *)L_13);
		StringBuilder_Append_m1ADA3C16E40BF253BCDB5F9579B4DBA9C3E5B22E((StringBuilder_t *)L_13, (Il2CppChar)((int32_t)41), /*hidden argument*/NULL);
		StringBuilder_t * L_14 = V_0;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_15 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->rgctx_data, 0)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_16 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_15, /*hidden argument*/NULL);
		String_t* L_17 = _AndroidJNIHelper_GetSignature_m4A272D66518BF9A4C746B02B91AAB1361293232C((RuntimeObject *)L_16, /*hidden argument*/NULL);
		NullCheck((StringBuilder_t *)L_14);
		StringBuilder_Append_mD02AB0C74C6F55E3E330818C77EC147E22096FB1((StringBuilder_t *)L_14, (String_t*)L_17, /*hidden argument*/NULL);
		StringBuilder_t * L_18 = V_0;
		NullCheck((RuntimeObject *)L_18);
		String_t* L_19 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, (RuntimeObject *)L_18);
		V_4 = (String_t*)L_19;
		goto IL_005d;
	}

IL_005d:
	{
		String_t* L_20 = V_4;
		return L_20;
	}
}
// System.String UnityEngine._AndroidJNIHelper::GetSignature<System.Double>(System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* _AndroidJNIHelper_GetSignature_TisDouble_t42821932CB52DE2057E685D0E1AF3DE5033D2181_mD09A1E6993B600273E5DA6DD5A610B0A45E10035_gshared (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___args0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (_AndroidJNIHelper_GetSignature_TisDouble_t42821932CB52DE2057E685D0E1AF3DE5033D2181_mD09A1E6993B600273E5DA6DD5A610B0A45E10035_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StringBuilder_t * V_0 = NULL;
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* V_1 = NULL;
	int32_t V_2 = 0;
	RuntimeObject * V_3 = NULL;
	String_t* V_4 = NULL;
	{
		StringBuilder_t * L_0 = (StringBuilder_t *)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		StringBuilder__ctor_m5A81DE19E748F748E19FF13FB6FFD2547F9212D9(L_0, /*hidden argument*/NULL);
		V_0 = (StringBuilder_t *)L_0;
		StringBuilder_t * L_1 = V_0;
		NullCheck((StringBuilder_t *)L_1);
		StringBuilder_Append_m1ADA3C16E40BF253BCDB5F9579B4DBA9C3E5B22E((StringBuilder_t *)L_1, (Il2CppChar)((int32_t)40), /*hidden argument*/NULL);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_2 = ___args0;
		V_1 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)L_2;
		V_2 = (int32_t)0;
		goto IL_002e;
	}

IL_0017:
	{
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_3 = V_1;
		int32_t L_4 = V_2;
		NullCheck(L_3);
		int32_t L_5 = L_4;
		RuntimeObject * L_6 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		V_3 = (RuntimeObject *)L_6;
		StringBuilder_t * L_7 = V_0;
		RuntimeObject * L_8 = V_3;
		String_t* L_9 = _AndroidJNIHelper_GetSignature_m4A272D66518BF9A4C746B02B91AAB1361293232C((RuntimeObject *)L_8, /*hidden argument*/NULL);
		NullCheck((StringBuilder_t *)L_7);
		StringBuilder_Append_mD02AB0C74C6F55E3E330818C77EC147E22096FB1((StringBuilder_t *)L_7, (String_t*)L_9, /*hidden argument*/NULL);
		int32_t L_10 = V_2;
		V_2 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_10, (int32_t)1));
	}

IL_002e:
	{
		int32_t L_11 = V_2;
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_12 = V_1;
		NullCheck(L_12);
		if ((((int32_t)L_11) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_12)->max_length)))))))
		{
			goto IL_0017;
		}
	}
	{
		StringBuilder_t * L_13 = V_0;
		NullCheck((StringBuilder_t *)L_13);
		StringBuilder_Append_m1ADA3C16E40BF253BCDB5F9579B4DBA9C3E5B22E((StringBuilder_t *)L_13, (Il2CppChar)((int32_t)41), /*hidden argument*/NULL);
		StringBuilder_t * L_14 = V_0;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_15 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->rgctx_data, 0)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_16 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_15, /*hidden argument*/NULL);
		String_t* L_17 = _AndroidJNIHelper_GetSignature_m4A272D66518BF9A4C746B02B91AAB1361293232C((RuntimeObject *)L_16, /*hidden argument*/NULL);
		NullCheck((StringBuilder_t *)L_14);
		StringBuilder_Append_mD02AB0C74C6F55E3E330818C77EC147E22096FB1((StringBuilder_t *)L_14, (String_t*)L_17, /*hidden argument*/NULL);
		StringBuilder_t * L_18 = V_0;
		NullCheck((RuntimeObject *)L_18);
		String_t* L_19 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, (RuntimeObject *)L_18);
		V_4 = (String_t*)L_19;
		goto IL_005d;
	}

IL_005d:
	{
		String_t* L_20 = V_4;
		return L_20;
	}
}
// System.String UnityEngine._AndroidJNIHelper::GetSignature<System.Int16>(System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* _AndroidJNIHelper_GetSignature_TisInt16_tD0F031114106263BB459DA1F099FF9F42691295A_m53EA03473D7F4C2525577E0D9E0999F78F5E7F7B_gshared (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___args0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (_AndroidJNIHelper_GetSignature_TisInt16_tD0F031114106263BB459DA1F099FF9F42691295A_m53EA03473D7F4C2525577E0D9E0999F78F5E7F7B_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StringBuilder_t * V_0 = NULL;
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* V_1 = NULL;
	int32_t V_2 = 0;
	RuntimeObject * V_3 = NULL;
	String_t* V_4 = NULL;
	{
		StringBuilder_t * L_0 = (StringBuilder_t *)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		StringBuilder__ctor_m5A81DE19E748F748E19FF13FB6FFD2547F9212D9(L_0, /*hidden argument*/NULL);
		V_0 = (StringBuilder_t *)L_0;
		StringBuilder_t * L_1 = V_0;
		NullCheck((StringBuilder_t *)L_1);
		StringBuilder_Append_m1ADA3C16E40BF253BCDB5F9579B4DBA9C3E5B22E((StringBuilder_t *)L_1, (Il2CppChar)((int32_t)40), /*hidden argument*/NULL);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_2 = ___args0;
		V_1 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)L_2;
		V_2 = (int32_t)0;
		goto IL_002e;
	}

IL_0017:
	{
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_3 = V_1;
		int32_t L_4 = V_2;
		NullCheck(L_3);
		int32_t L_5 = L_4;
		RuntimeObject * L_6 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		V_3 = (RuntimeObject *)L_6;
		StringBuilder_t * L_7 = V_0;
		RuntimeObject * L_8 = V_3;
		String_t* L_9 = _AndroidJNIHelper_GetSignature_m4A272D66518BF9A4C746B02B91AAB1361293232C((RuntimeObject *)L_8, /*hidden argument*/NULL);
		NullCheck((StringBuilder_t *)L_7);
		StringBuilder_Append_mD02AB0C74C6F55E3E330818C77EC147E22096FB1((StringBuilder_t *)L_7, (String_t*)L_9, /*hidden argument*/NULL);
		int32_t L_10 = V_2;
		V_2 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_10, (int32_t)1));
	}

IL_002e:
	{
		int32_t L_11 = V_2;
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_12 = V_1;
		NullCheck(L_12);
		if ((((int32_t)L_11) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_12)->max_length)))))))
		{
			goto IL_0017;
		}
	}
	{
		StringBuilder_t * L_13 = V_0;
		NullCheck((StringBuilder_t *)L_13);
		StringBuilder_Append_m1ADA3C16E40BF253BCDB5F9579B4DBA9C3E5B22E((StringBuilder_t *)L_13, (Il2CppChar)((int32_t)41), /*hidden argument*/NULL);
		StringBuilder_t * L_14 = V_0;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_15 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->rgctx_data, 0)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_16 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_15, /*hidden argument*/NULL);
		String_t* L_17 = _AndroidJNIHelper_GetSignature_m4A272D66518BF9A4C746B02B91AAB1361293232C((RuntimeObject *)L_16, /*hidden argument*/NULL);
		NullCheck((StringBuilder_t *)L_14);
		StringBuilder_Append_mD02AB0C74C6F55E3E330818C77EC147E22096FB1((StringBuilder_t *)L_14, (String_t*)L_17, /*hidden argument*/NULL);
		StringBuilder_t * L_18 = V_0;
		NullCheck((RuntimeObject *)L_18);
		String_t* L_19 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, (RuntimeObject *)L_18);
		V_4 = (String_t*)L_19;
		goto IL_005d;
	}

IL_005d:
	{
		String_t* L_20 = V_4;
		return L_20;
	}
}
// System.String UnityEngine._AndroidJNIHelper::GetSignature<System.Int32>(System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* _AndroidJNIHelper_GetSignature_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m83D9133FDC0884534CE97F82ED983AC5AE9465CA_gshared (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___args0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (_AndroidJNIHelper_GetSignature_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m83D9133FDC0884534CE97F82ED983AC5AE9465CA_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StringBuilder_t * V_0 = NULL;
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* V_1 = NULL;
	int32_t V_2 = 0;
	RuntimeObject * V_3 = NULL;
	String_t* V_4 = NULL;
	{
		StringBuilder_t * L_0 = (StringBuilder_t *)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		StringBuilder__ctor_m5A81DE19E748F748E19FF13FB6FFD2547F9212D9(L_0, /*hidden argument*/NULL);
		V_0 = (StringBuilder_t *)L_0;
		StringBuilder_t * L_1 = V_0;
		NullCheck((StringBuilder_t *)L_1);
		StringBuilder_Append_m1ADA3C16E40BF253BCDB5F9579B4DBA9C3E5B22E((StringBuilder_t *)L_1, (Il2CppChar)((int32_t)40), /*hidden argument*/NULL);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_2 = ___args0;
		V_1 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)L_2;
		V_2 = (int32_t)0;
		goto IL_002e;
	}

IL_0017:
	{
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_3 = V_1;
		int32_t L_4 = V_2;
		NullCheck(L_3);
		int32_t L_5 = L_4;
		RuntimeObject * L_6 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		V_3 = (RuntimeObject *)L_6;
		StringBuilder_t * L_7 = V_0;
		RuntimeObject * L_8 = V_3;
		String_t* L_9 = _AndroidJNIHelper_GetSignature_m4A272D66518BF9A4C746B02B91AAB1361293232C((RuntimeObject *)L_8, /*hidden argument*/NULL);
		NullCheck((StringBuilder_t *)L_7);
		StringBuilder_Append_mD02AB0C74C6F55E3E330818C77EC147E22096FB1((StringBuilder_t *)L_7, (String_t*)L_9, /*hidden argument*/NULL);
		int32_t L_10 = V_2;
		V_2 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_10, (int32_t)1));
	}

IL_002e:
	{
		int32_t L_11 = V_2;
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_12 = V_1;
		NullCheck(L_12);
		if ((((int32_t)L_11) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_12)->max_length)))))))
		{
			goto IL_0017;
		}
	}
	{
		StringBuilder_t * L_13 = V_0;
		NullCheck((StringBuilder_t *)L_13);
		StringBuilder_Append_m1ADA3C16E40BF253BCDB5F9579B4DBA9C3E5B22E((StringBuilder_t *)L_13, (Il2CppChar)((int32_t)41), /*hidden argument*/NULL);
		StringBuilder_t * L_14 = V_0;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_15 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->rgctx_data, 0)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_16 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_15, /*hidden argument*/NULL);
		String_t* L_17 = _AndroidJNIHelper_GetSignature_m4A272D66518BF9A4C746B02B91AAB1361293232C((RuntimeObject *)L_16, /*hidden argument*/NULL);
		NullCheck((StringBuilder_t *)L_14);
		StringBuilder_Append_mD02AB0C74C6F55E3E330818C77EC147E22096FB1((StringBuilder_t *)L_14, (String_t*)L_17, /*hidden argument*/NULL);
		StringBuilder_t * L_18 = V_0;
		NullCheck((RuntimeObject *)L_18);
		String_t* L_19 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, (RuntimeObject *)L_18);
		V_4 = (String_t*)L_19;
		goto IL_005d;
	}

IL_005d:
	{
		String_t* L_20 = V_4;
		return L_20;
	}
}
// System.String UnityEngine._AndroidJNIHelper::GetSignature<System.Int64>(System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* _AndroidJNIHelper_GetSignature_TisInt64_t378EE0D608BD3107E77238E85F30D2BBD46981F3_m413740B31E01EB314EE0D3A2B1CF91DAD24A9659_gshared (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___args0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (_AndroidJNIHelper_GetSignature_TisInt64_t378EE0D608BD3107E77238E85F30D2BBD46981F3_m413740B31E01EB314EE0D3A2B1CF91DAD24A9659_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StringBuilder_t * V_0 = NULL;
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* V_1 = NULL;
	int32_t V_2 = 0;
	RuntimeObject * V_3 = NULL;
	String_t* V_4 = NULL;
	{
		StringBuilder_t * L_0 = (StringBuilder_t *)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		StringBuilder__ctor_m5A81DE19E748F748E19FF13FB6FFD2547F9212D9(L_0, /*hidden argument*/NULL);
		V_0 = (StringBuilder_t *)L_0;
		StringBuilder_t * L_1 = V_0;
		NullCheck((StringBuilder_t *)L_1);
		StringBuilder_Append_m1ADA3C16E40BF253BCDB5F9579B4DBA9C3E5B22E((StringBuilder_t *)L_1, (Il2CppChar)((int32_t)40), /*hidden argument*/NULL);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_2 = ___args0;
		V_1 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)L_2;
		V_2 = (int32_t)0;
		goto IL_002e;
	}

IL_0017:
	{
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_3 = V_1;
		int32_t L_4 = V_2;
		NullCheck(L_3);
		int32_t L_5 = L_4;
		RuntimeObject * L_6 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		V_3 = (RuntimeObject *)L_6;
		StringBuilder_t * L_7 = V_0;
		RuntimeObject * L_8 = V_3;
		String_t* L_9 = _AndroidJNIHelper_GetSignature_m4A272D66518BF9A4C746B02B91AAB1361293232C((RuntimeObject *)L_8, /*hidden argument*/NULL);
		NullCheck((StringBuilder_t *)L_7);
		StringBuilder_Append_mD02AB0C74C6F55E3E330818C77EC147E22096FB1((StringBuilder_t *)L_7, (String_t*)L_9, /*hidden argument*/NULL);
		int32_t L_10 = V_2;
		V_2 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_10, (int32_t)1));
	}

IL_002e:
	{
		int32_t L_11 = V_2;
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_12 = V_1;
		NullCheck(L_12);
		if ((((int32_t)L_11) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_12)->max_length)))))))
		{
			goto IL_0017;
		}
	}
	{
		StringBuilder_t * L_13 = V_0;
		NullCheck((StringBuilder_t *)L_13);
		StringBuilder_Append_m1ADA3C16E40BF253BCDB5F9579B4DBA9C3E5B22E((StringBuilder_t *)L_13, (Il2CppChar)((int32_t)41), /*hidden argument*/NULL);
		StringBuilder_t * L_14 = V_0;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_15 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->rgctx_data, 0)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_16 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_15, /*hidden argument*/NULL);
		String_t* L_17 = _AndroidJNIHelper_GetSignature_m4A272D66518BF9A4C746B02B91AAB1361293232C((RuntimeObject *)L_16, /*hidden argument*/NULL);
		NullCheck((StringBuilder_t *)L_14);
		StringBuilder_Append_mD02AB0C74C6F55E3E330818C77EC147E22096FB1((StringBuilder_t *)L_14, (String_t*)L_17, /*hidden argument*/NULL);
		StringBuilder_t * L_18 = V_0;
		NullCheck((RuntimeObject *)L_18);
		String_t* L_19 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, (RuntimeObject *)L_18);
		V_4 = (String_t*)L_19;
		goto IL_005d;
	}

IL_005d:
	{
		String_t* L_20 = V_4;
		return L_20;
	}
}
// System.String UnityEngine._AndroidJNIHelper::GetSignature<System.SByte>(System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* _AndroidJNIHelper_GetSignature_TisSByte_t928712DD662DC29BA4FAAE8CE2230AFB23447F0B_mA275B45366DA25AFB161A011BC8F1888F54B0BF2_gshared (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___args0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (_AndroidJNIHelper_GetSignature_TisSByte_t928712DD662DC29BA4FAAE8CE2230AFB23447F0B_mA275B45366DA25AFB161A011BC8F1888F54B0BF2_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StringBuilder_t * V_0 = NULL;
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* V_1 = NULL;
	int32_t V_2 = 0;
	RuntimeObject * V_3 = NULL;
	String_t* V_4 = NULL;
	{
		StringBuilder_t * L_0 = (StringBuilder_t *)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		StringBuilder__ctor_m5A81DE19E748F748E19FF13FB6FFD2547F9212D9(L_0, /*hidden argument*/NULL);
		V_0 = (StringBuilder_t *)L_0;
		StringBuilder_t * L_1 = V_0;
		NullCheck((StringBuilder_t *)L_1);
		StringBuilder_Append_m1ADA3C16E40BF253BCDB5F9579B4DBA9C3E5B22E((StringBuilder_t *)L_1, (Il2CppChar)((int32_t)40), /*hidden argument*/NULL);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_2 = ___args0;
		V_1 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)L_2;
		V_2 = (int32_t)0;
		goto IL_002e;
	}

IL_0017:
	{
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_3 = V_1;
		int32_t L_4 = V_2;
		NullCheck(L_3);
		int32_t L_5 = L_4;
		RuntimeObject * L_6 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		V_3 = (RuntimeObject *)L_6;
		StringBuilder_t * L_7 = V_0;
		RuntimeObject * L_8 = V_3;
		String_t* L_9 = _AndroidJNIHelper_GetSignature_m4A272D66518BF9A4C746B02B91AAB1361293232C((RuntimeObject *)L_8, /*hidden argument*/NULL);
		NullCheck((StringBuilder_t *)L_7);
		StringBuilder_Append_mD02AB0C74C6F55E3E330818C77EC147E22096FB1((StringBuilder_t *)L_7, (String_t*)L_9, /*hidden argument*/NULL);
		int32_t L_10 = V_2;
		V_2 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_10, (int32_t)1));
	}

IL_002e:
	{
		int32_t L_11 = V_2;
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_12 = V_1;
		NullCheck(L_12);
		if ((((int32_t)L_11) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_12)->max_length)))))))
		{
			goto IL_0017;
		}
	}
	{
		StringBuilder_t * L_13 = V_0;
		NullCheck((StringBuilder_t *)L_13);
		StringBuilder_Append_m1ADA3C16E40BF253BCDB5F9579B4DBA9C3E5B22E((StringBuilder_t *)L_13, (Il2CppChar)((int32_t)41), /*hidden argument*/NULL);
		StringBuilder_t * L_14 = V_0;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_15 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->rgctx_data, 0)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_16 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_15, /*hidden argument*/NULL);
		String_t* L_17 = _AndroidJNIHelper_GetSignature_m4A272D66518BF9A4C746B02B91AAB1361293232C((RuntimeObject *)L_16, /*hidden argument*/NULL);
		NullCheck((StringBuilder_t *)L_14);
		StringBuilder_Append_mD02AB0C74C6F55E3E330818C77EC147E22096FB1((StringBuilder_t *)L_14, (String_t*)L_17, /*hidden argument*/NULL);
		StringBuilder_t * L_18 = V_0;
		NullCheck((RuntimeObject *)L_18);
		String_t* L_19 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, (RuntimeObject *)L_18);
		V_4 = (String_t*)L_19;
		goto IL_005d;
	}

IL_005d:
	{
		String_t* L_20 = V_4;
		return L_20;
	}
}
// System.String UnityEngine._AndroidJNIHelper::GetSignature<System.Single>(System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* _AndroidJNIHelper_GetSignature_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_m82A85440F4B906A83640CA6939D1BC0D1BDEB2C3_gshared (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___args0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (_AndroidJNIHelper_GetSignature_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_m82A85440F4B906A83640CA6939D1BC0D1BDEB2C3_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StringBuilder_t * V_0 = NULL;
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* V_1 = NULL;
	int32_t V_2 = 0;
	RuntimeObject * V_3 = NULL;
	String_t* V_4 = NULL;
	{
		StringBuilder_t * L_0 = (StringBuilder_t *)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		StringBuilder__ctor_m5A81DE19E748F748E19FF13FB6FFD2547F9212D9(L_0, /*hidden argument*/NULL);
		V_0 = (StringBuilder_t *)L_0;
		StringBuilder_t * L_1 = V_0;
		NullCheck((StringBuilder_t *)L_1);
		StringBuilder_Append_m1ADA3C16E40BF253BCDB5F9579B4DBA9C3E5B22E((StringBuilder_t *)L_1, (Il2CppChar)((int32_t)40), /*hidden argument*/NULL);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_2 = ___args0;
		V_1 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)L_2;
		V_2 = (int32_t)0;
		goto IL_002e;
	}

IL_0017:
	{
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_3 = V_1;
		int32_t L_4 = V_2;
		NullCheck(L_3);
		int32_t L_5 = L_4;
		RuntimeObject * L_6 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		V_3 = (RuntimeObject *)L_6;
		StringBuilder_t * L_7 = V_0;
		RuntimeObject * L_8 = V_3;
		String_t* L_9 = _AndroidJNIHelper_GetSignature_m4A272D66518BF9A4C746B02B91AAB1361293232C((RuntimeObject *)L_8, /*hidden argument*/NULL);
		NullCheck((StringBuilder_t *)L_7);
		StringBuilder_Append_mD02AB0C74C6F55E3E330818C77EC147E22096FB1((StringBuilder_t *)L_7, (String_t*)L_9, /*hidden argument*/NULL);
		int32_t L_10 = V_2;
		V_2 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_10, (int32_t)1));
	}

IL_002e:
	{
		int32_t L_11 = V_2;
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_12 = V_1;
		NullCheck(L_12);
		if ((((int32_t)L_11) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_12)->max_length)))))))
		{
			goto IL_0017;
		}
	}
	{
		StringBuilder_t * L_13 = V_0;
		NullCheck((StringBuilder_t *)L_13);
		StringBuilder_Append_m1ADA3C16E40BF253BCDB5F9579B4DBA9C3E5B22E((StringBuilder_t *)L_13, (Il2CppChar)((int32_t)41), /*hidden argument*/NULL);
		StringBuilder_t * L_14 = V_0;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_15 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->rgctx_data, 0)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_16 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_15, /*hidden argument*/NULL);
		String_t* L_17 = _AndroidJNIHelper_GetSignature_m4A272D66518BF9A4C746B02B91AAB1361293232C((RuntimeObject *)L_16, /*hidden argument*/NULL);
		NullCheck((StringBuilder_t *)L_14);
		StringBuilder_Append_mD02AB0C74C6F55E3E330818C77EC147E22096FB1((StringBuilder_t *)L_14, (String_t*)L_17, /*hidden argument*/NULL);
		StringBuilder_t * L_18 = V_0;
		NullCheck((RuntimeObject *)L_18);
		String_t* L_19 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, (RuntimeObject *)L_18);
		V_4 = (String_t*)L_19;
		goto IL_005d;
	}

IL_005d:
	{
		String_t* L_20 = V_4;
		return L_20;
	}
}
// System.String UnityEngine._AndroidJNIHelper::GetSignature<System.Object>(System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* _AndroidJNIHelper_GetSignature_TisRuntimeObject_mC6BEA8EDE34CA523E26ACA072A4E246C7FF6DB25_gshared (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___args0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (_AndroidJNIHelper_GetSignature_TisRuntimeObject_mC6BEA8EDE34CA523E26ACA072A4E246C7FF6DB25_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StringBuilder_t * V_0 = NULL;
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* V_1 = NULL;
	int32_t V_2 = 0;
	RuntimeObject * V_3 = NULL;
	String_t* V_4 = NULL;
	{
		StringBuilder_t * L_0 = (StringBuilder_t *)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		StringBuilder__ctor_m5A81DE19E748F748E19FF13FB6FFD2547F9212D9(L_0, /*hidden argument*/NULL);
		V_0 = (StringBuilder_t *)L_0;
		StringBuilder_t * L_1 = V_0;
		NullCheck((StringBuilder_t *)L_1);
		StringBuilder_Append_m1ADA3C16E40BF253BCDB5F9579B4DBA9C3E5B22E((StringBuilder_t *)L_1, (Il2CppChar)((int32_t)40), /*hidden argument*/NULL);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_2 = ___args0;
		V_1 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)L_2;
		V_2 = (int32_t)0;
		goto IL_002e;
	}

IL_0017:
	{
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_3 = V_1;
		int32_t L_4 = V_2;
		NullCheck(L_3);
		int32_t L_5 = L_4;
		RuntimeObject * L_6 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		V_3 = (RuntimeObject *)L_6;
		StringBuilder_t * L_7 = V_0;
		RuntimeObject * L_8 = V_3;
		String_t* L_9 = _AndroidJNIHelper_GetSignature_m4A272D66518BF9A4C746B02B91AAB1361293232C((RuntimeObject *)L_8, /*hidden argument*/NULL);
		NullCheck((StringBuilder_t *)L_7);
		StringBuilder_Append_mD02AB0C74C6F55E3E330818C77EC147E22096FB1((StringBuilder_t *)L_7, (String_t*)L_9, /*hidden argument*/NULL);
		int32_t L_10 = V_2;
		V_2 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_10, (int32_t)1));
	}

IL_002e:
	{
		int32_t L_11 = V_2;
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_12 = V_1;
		NullCheck(L_12);
		if ((((int32_t)L_11) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_12)->max_length)))))))
		{
			goto IL_0017;
		}
	}
	{
		StringBuilder_t * L_13 = V_0;
		NullCheck((StringBuilder_t *)L_13);
		StringBuilder_Append_m1ADA3C16E40BF253BCDB5F9579B4DBA9C3E5B22E((StringBuilder_t *)L_13, (Il2CppChar)((int32_t)41), /*hidden argument*/NULL);
		StringBuilder_t * L_14 = V_0;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_15 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->rgctx_data, 0)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_16 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_15, /*hidden argument*/NULL);
		String_t* L_17 = _AndroidJNIHelper_GetSignature_m4A272D66518BF9A4C746B02B91AAB1361293232C((RuntimeObject *)L_16, /*hidden argument*/NULL);
		NullCheck((StringBuilder_t *)L_14);
		StringBuilder_Append_mD02AB0C74C6F55E3E330818C77EC147E22096FB1((StringBuilder_t *)L_14, (String_t*)L_17, /*hidden argument*/NULL);
		StringBuilder_t * L_18 = V_0;
		NullCheck((RuntimeObject *)L_18);
		String_t* L_19 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, (RuntimeObject *)L_18);
		V_4 = (String_t*)L_19;
		goto IL_005d;
	}

IL_005d:
	{
		String_t* L_20 = V_4;
		return L_20;
	}
}
// UnityEngine.Experimental.Rendering.RenderGraphModule.RenderFunc`1<PassData> UnityEngine.Experimental.Rendering.RenderGraphModule.RenderGraph_RenderPass::GetExecuteDelegate<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RenderFunc_1_t091EA032D0005AAD02F0F4EE567103E57DCC507C * RenderPass_GetExecuteDelegate_TisRuntimeObject_m5B964BF5A24125574DAE88F23AED1A437FC80D9C_gshared (RenderPass_tE9D4B9C3BB0DB42CFD72034E0288AF39ABCAAA51 * __this, const RuntimeMethod* method)
{
	{
		// where PassData : class, new() => ((RenderPass<PassData>)this).renderFunc;
		NullCheck(((RenderPass_1_tF9D61292A7D56CB12EDCFFEB76280811BDFC94A9 *)Castclass((RuntimeObject*)__this, IL2CPP_RGCTX_DATA(method->rgctx_data, 0))));
		RenderFunc_1_t091EA032D0005AAD02F0F4EE567103E57DCC507C * L_0 = (RenderFunc_1_t091EA032D0005AAD02F0F4EE567103E57DCC507C *)((RenderPass_1_tF9D61292A7D56CB12EDCFFEB76280811BDFC94A9 *)Castclass((RuntimeObject*)__this, IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_renderFunc_11();
		return L_0;
	}
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Boolean>::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1_ConfiguredTaskAwaiter<System.Boolean>,System.Threading.SemaphoreSlim_<WaitUntilCountOrTimeoutAsync>d__31>(TAwaiter&,TStateMachine&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_t286C97C0AF102C4C0BE55CE2025CC7BD1FB5C20C_TisU3CWaitUntilCountOrTimeoutAsyncU3Ed__31_t227D1F5F19C948CA8C23C80B5F19147D4AAED14F_m06010DFBCE2CDD2AE1BB5ADD25230521E9B527DC_gshared (AsyncTaskMethodBuilder_1_tABE1DEF12F121D6FC8ABF04869ED964FF83EA9B5 * __this, ConfiguredTaskAwaiter_t286C97C0AF102C4C0BE55CE2025CC7BD1FB5C20C * ___awaiter0, U3CWaitUntilCountOrTimeoutAsyncU3Ed__31_t227D1F5F19C948CA8C23C80B5F19147D4AAED14F * ___stateMachine1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_t286C97C0AF102C4C0BE55CE2025CC7BD1FB5C20C_TisU3CWaitUntilCountOrTimeoutAsyncU3Ed__31_t227D1F5F19C948CA8C23C80B5F19147D4AAED14F_m06010DFBCE2CDD2AE1BB5ADD25230521E9B527DC_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	MoveNextRunner_tFAEA0BEDD353E2E34E8E287C67B1F5572FD30C2D * V_0 = NULL;
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * V_1 = NULL;
	Task_1_t9C1FE9F18F52F3409B9E970FA38801A443AE7849 * V_2 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 2);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34 * G_B2_0 = NULL;
	AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34 * G_B1_0 = NULL;
	Task_1_t9C1FE9F18F52F3409B9E970FA38801A443AE7849 * G_B3_0 = NULL;
	AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34 * G_B3_1 = NULL;

IL_0000:
	try
	{ // begin try (depth: 1)
		{
			V_0 = (MoveNextRunner_tFAEA0BEDD353E2E34E8E287C67B1F5572FD30C2D *)NULL;
			AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34 * L_0 = (AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34 *)__this->get_address_of_m_coreState_1();
			bool L_1 = AsyncCausalityTracer_get_LoggingOn_mE0A03E121425371B1D1B65640172137C3B8EEA15(/*hidden argument*/NULL);
			G_B1_0 = L_0;
			if (L_1)
			{
				G_B2_0 = L_0;
				goto IL_0012;
			}
		}

IL_000f:
		{
			G_B3_0 = ((Task_1_t9C1FE9F18F52F3409B9E970FA38801A443AE7849 *)(NULL));
			G_B3_1 = G_B1_0;
			goto IL_0018;
		}

IL_0012:
		{
			Task_1_t9C1FE9F18F52F3409B9E970FA38801A443AE7849 * L_2 = AsyncTaskMethodBuilder_1_get_Task_m6F8035FA0DEBE32D20BAD45867B41491F5D55F78((AsyncTaskMethodBuilder_1_tABE1DEF12F121D6FC8ABF04869ED964FF83EA9B5 *)(AsyncTaskMethodBuilder_1_tABE1DEF12F121D6FC8ABF04869ED964FF83EA9B5 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 0));
			G_B3_0 = L_2;
			G_B3_1 = G_B2_0;
		}

IL_0018:
		{
			Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_3 = AsyncMethodBuilderCore_GetCompletionAction_m7FE7F57CC452F0EDE870AB08EEB648E2027D4F5C((AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34 *)(AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34 *)G_B3_1, (Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 *)G_B3_0, (MoveNextRunner_tFAEA0BEDD353E2E34E8E287C67B1F5572FD30C2D **)(MoveNextRunner_tFAEA0BEDD353E2E34E8E287C67B1F5572FD30C2D **)(&V_0), /*hidden argument*/NULL);
			V_1 = (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)L_3;
			AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34 * L_4 = (AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34 *)__this->get_address_of_m_coreState_1();
			RuntimeObject* L_5 = (RuntimeObject*)L_4->get_m_stateMachine_0();
			if (L_5)
			{
				goto IL_004c;
			}
		}

IL_002d:
		{
			Task_1_t9C1FE9F18F52F3409B9E970FA38801A443AE7849 * L_6 = AsyncTaskMethodBuilder_1_get_Task_m6F8035FA0DEBE32D20BAD45867B41491F5D55F78((AsyncTaskMethodBuilder_1_tABE1DEF12F121D6FC8ABF04869ED964FF83EA9B5 *)(AsyncTaskMethodBuilder_1_tABE1DEF12F121D6FC8ABF04869ED964FF83EA9B5 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 0));
			V_2 = (Task_1_t9C1FE9F18F52F3409B9E970FA38801A443AE7849 *)L_6;
			AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34 * L_7 = (AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34 *)__this->get_address_of_m_coreState_1();
			U3CWaitUntilCountOrTimeoutAsyncU3Ed__31_t227D1F5F19C948CA8C23C80B5F19147D4AAED14F * L_8 = ___stateMachine1;
			U3CWaitUntilCountOrTimeoutAsyncU3Ed__31_t227D1F5F19C948CA8C23C80B5F19147D4AAED14F  L_9 = (*(U3CWaitUntilCountOrTimeoutAsyncU3Ed__31_t227D1F5F19C948CA8C23C80B5F19147D4AAED14F *)L_8);
			U3CWaitUntilCountOrTimeoutAsyncU3Ed__31_t227D1F5F19C948CA8C23C80B5F19147D4AAED14F  L_10 = L_9;
			RuntimeObject * L_11 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), &L_10);
			MoveNextRunner_tFAEA0BEDD353E2E34E8E287C67B1F5572FD30C2D * L_12 = V_0;
			Task_1_t9C1FE9F18F52F3409B9E970FA38801A443AE7849 * L_13 = V_2;
			AsyncMethodBuilderCore_PostBoxInitialization_m22C1D9A2745255C6FC1426D4CB0C4355FBDA07E3((AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34 *)(AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34 *)L_7, (RuntimeObject*)L_11, (MoveNextRunner_tFAEA0BEDD353E2E34E8E287C67B1F5572FD30C2D *)L_12, (Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 *)L_13, /*hidden argument*/NULL);
		}

IL_004c:
		{
			ConfiguredTaskAwaiter_t286C97C0AF102C4C0BE55CE2025CC7BD1FB5C20C * L_14 = ___awaiter0;
			Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_15 = V_1;
			Il2CppFakeBox<ConfiguredTaskAwaiter_t286C97C0AF102C4C0BE55CE2025CC7BD1FB5C20C > L_16(IL2CPP_RGCTX_DATA(method->rgctx_data, 1), L_14);
			const VirtualInvokeData& il2cpp_virtual_invoke_data__84 = il2cpp_codegen_get_interface_invoke_data(0, (&L_16), ICriticalNotifyCompletion_t3F4FCEA29CDCACD07747F3A1D6D1406521556838_il2cpp_TypeInfo_var);
			((  void (*) (RuntimeObject*, Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *, const RuntimeMethod*))il2cpp_virtual_invoke_data__84.methodPtr)((RuntimeObject*)(&L_16), (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)L_15, /*hidden argument*/il2cpp_virtual_invoke_data__84.method);
			*L_14 = L_16.m_Value;
			goto IL_0063;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (Exception_t_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
			goto CATCH_005b;
		throw e;
	}

CATCH_005b:
	{ // begin catch(System.Exception)
		AsyncMethodBuilderCore_ThrowAsync_m69800E9752B30F7A1D824C2F1EBDEBA44BA75610((Exception_t *)((Exception_t *)__exception_local), (SynchronizationContext_t17D9365B5E0D30A0910A16FA4351C525232EF069 *)NULL, /*hidden argument*/NULL);
		goto IL_0063;
	} // end catch (depth: 1)

IL_0063:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_t286C97C0AF102C4C0BE55CE2025CC7BD1FB5C20C_TisU3CWaitUntilCountOrTimeoutAsyncU3Ed__31_t227D1F5F19C948CA8C23C80B5F19147D4AAED14F_m06010DFBCE2CDD2AE1BB5ADD25230521E9B527DC_AdjustorThunk (RuntimeObject * __this, ConfiguredTaskAwaiter_t286C97C0AF102C4C0BE55CE2025CC7BD1FB5C20C * ___awaiter0, U3CWaitUntilCountOrTimeoutAsyncU3Ed__31_t227D1F5F19C948CA8C23C80B5F19147D4AAED14F * ___stateMachine1, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	AsyncTaskMethodBuilder_1_tABE1DEF12F121D6FC8ABF04869ED964FF83EA9B5 * _thisAdjusted = reinterpret_cast<AsyncTaskMethodBuilder_1_tABE1DEF12F121D6FC8ABF04869ED964FF83EA9B5 *>(__this + _offset);
	AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_t286C97C0AF102C4C0BE55CE2025CC7BD1FB5C20C_TisU3CWaitUntilCountOrTimeoutAsyncU3Ed__31_t227D1F5F19C948CA8C23C80B5F19147D4AAED14F_m06010DFBCE2CDD2AE1BB5ADD25230521E9B527DC(_thisAdjusted, ___awaiter0, ___stateMachine1, method);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Boolean>::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1_ConfiguredTaskAwaiter<System.Object>,System.Threading.SemaphoreSlim_<WaitUntilCountOrTimeoutAsync>d__31>(TAwaiter&,TStateMachine&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_t2CE498F9A6CE5405242AE2D77F03E58985B7C3ED_TisU3CWaitUntilCountOrTimeoutAsyncU3Ed__31_t227D1F5F19C948CA8C23C80B5F19147D4AAED14F_m4FDC6642836D25291A0E343845527873A88013C9_gshared (AsyncTaskMethodBuilder_1_tABE1DEF12F121D6FC8ABF04869ED964FF83EA9B5 * __this, ConfiguredTaskAwaiter_t2CE498F9A6CE5405242AE2D77F03E58985B7C3ED * ___awaiter0, U3CWaitUntilCountOrTimeoutAsyncU3Ed__31_t227D1F5F19C948CA8C23C80B5F19147D4AAED14F * ___stateMachine1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_t2CE498F9A6CE5405242AE2D77F03E58985B7C3ED_TisU3CWaitUntilCountOrTimeoutAsyncU3Ed__31_t227D1F5F19C948CA8C23C80B5F19147D4AAED14F_m4FDC6642836D25291A0E343845527873A88013C9_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	MoveNextRunner_tFAEA0BEDD353E2E34E8E287C67B1F5572FD30C2D * V_0 = NULL;
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * V_1 = NULL;
	Task_1_t9C1FE9F18F52F3409B9E970FA38801A443AE7849 * V_2 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 2);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34 * G_B2_0 = NULL;
	AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34 * G_B1_0 = NULL;
	Task_1_t9C1FE9F18F52F3409B9E970FA38801A443AE7849 * G_B3_0 = NULL;
	AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34 * G_B3_1 = NULL;

IL_0000:
	try
	{ // begin try (depth: 1)
		{
			V_0 = (MoveNextRunner_tFAEA0BEDD353E2E34E8E287C67B1F5572FD30C2D *)NULL;
			AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34 * L_0 = (AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34 *)__this->get_address_of_m_coreState_1();
			bool L_1 = AsyncCausalityTracer_get_LoggingOn_mE0A03E121425371B1D1B65640172137C3B8EEA15(/*hidden argument*/NULL);
			G_B1_0 = L_0;
			if (L_1)
			{
				G_B2_0 = L_0;
				goto IL_0012;
			}
		}

IL_000f:
		{
			G_B3_0 = ((Task_1_t9C1FE9F18F52F3409B9E970FA38801A443AE7849 *)(NULL));
			G_B3_1 = G_B1_0;
			goto IL_0018;
		}

IL_0012:
		{
			Task_1_t9C1FE9F18F52F3409B9E970FA38801A443AE7849 * L_2 = AsyncTaskMethodBuilder_1_get_Task_m6F8035FA0DEBE32D20BAD45867B41491F5D55F78((AsyncTaskMethodBuilder_1_tABE1DEF12F121D6FC8ABF04869ED964FF83EA9B5 *)(AsyncTaskMethodBuilder_1_tABE1DEF12F121D6FC8ABF04869ED964FF83EA9B5 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 0));
			G_B3_0 = L_2;
			G_B3_1 = G_B2_0;
		}

IL_0018:
		{
			Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_3 = AsyncMethodBuilderCore_GetCompletionAction_m7FE7F57CC452F0EDE870AB08EEB648E2027D4F5C((AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34 *)(AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34 *)G_B3_1, (Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 *)G_B3_0, (MoveNextRunner_tFAEA0BEDD353E2E34E8E287C67B1F5572FD30C2D **)(MoveNextRunner_tFAEA0BEDD353E2E34E8E287C67B1F5572FD30C2D **)(&V_0), /*hidden argument*/NULL);
			V_1 = (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)L_3;
			AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34 * L_4 = (AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34 *)__this->get_address_of_m_coreState_1();
			RuntimeObject* L_5 = (RuntimeObject*)L_4->get_m_stateMachine_0();
			if (L_5)
			{
				goto IL_004c;
			}
		}

IL_002d:
		{
			Task_1_t9C1FE9F18F52F3409B9E970FA38801A443AE7849 * L_6 = AsyncTaskMethodBuilder_1_get_Task_m6F8035FA0DEBE32D20BAD45867B41491F5D55F78((AsyncTaskMethodBuilder_1_tABE1DEF12F121D6FC8ABF04869ED964FF83EA9B5 *)(AsyncTaskMethodBuilder_1_tABE1DEF12F121D6FC8ABF04869ED964FF83EA9B5 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 0));
			V_2 = (Task_1_t9C1FE9F18F52F3409B9E970FA38801A443AE7849 *)L_6;
			AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34 * L_7 = (AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34 *)__this->get_address_of_m_coreState_1();
			U3CWaitUntilCountOrTimeoutAsyncU3Ed__31_t227D1F5F19C948CA8C23C80B5F19147D4AAED14F * L_8 = ___stateMachine1;
			U3CWaitUntilCountOrTimeoutAsyncU3Ed__31_t227D1F5F19C948CA8C23C80B5F19147D4AAED14F  L_9 = (*(U3CWaitUntilCountOrTimeoutAsyncU3Ed__31_t227D1F5F19C948CA8C23C80B5F19147D4AAED14F *)L_8);
			U3CWaitUntilCountOrTimeoutAsyncU3Ed__31_t227D1F5F19C948CA8C23C80B5F19147D4AAED14F  L_10 = L_9;
			RuntimeObject * L_11 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), &L_10);
			MoveNextRunner_tFAEA0BEDD353E2E34E8E287C67B1F5572FD30C2D * L_12 = V_0;
			Task_1_t9C1FE9F18F52F3409B9E970FA38801A443AE7849 * L_13 = V_2;
			AsyncMethodBuilderCore_PostBoxInitialization_m22C1D9A2745255C6FC1426D4CB0C4355FBDA07E3((AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34 *)(AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34 *)L_7, (RuntimeObject*)L_11, (MoveNextRunner_tFAEA0BEDD353E2E34E8E287C67B1F5572FD30C2D *)L_12, (Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 *)L_13, /*hidden argument*/NULL);
		}

IL_004c:
		{
			ConfiguredTaskAwaiter_t2CE498F9A6CE5405242AE2D77F03E58985B7C3ED * L_14 = ___awaiter0;
			Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_15 = V_1;
			Il2CppFakeBox<ConfiguredTaskAwaiter_t2CE498F9A6CE5405242AE2D77F03E58985B7C3ED > L_16(IL2CPP_RGCTX_DATA(method->rgctx_data, 1), L_14);
			const VirtualInvokeData& il2cpp_virtual_invoke_data__84 = il2cpp_codegen_get_interface_invoke_data(0, (&L_16), ICriticalNotifyCompletion_t3F4FCEA29CDCACD07747F3A1D6D1406521556838_il2cpp_TypeInfo_var);
			((  void (*) (RuntimeObject*, Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *, const RuntimeMethod*))il2cpp_virtual_invoke_data__84.methodPtr)((RuntimeObject*)(&L_16), (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)L_15, /*hidden argument*/il2cpp_virtual_invoke_data__84.method);
			*L_14 = L_16.m_Value;
			goto IL_0063;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (Exception_t_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
			goto CATCH_005b;
		throw e;
	}

CATCH_005b:
	{ // begin catch(System.Exception)
		AsyncMethodBuilderCore_ThrowAsync_m69800E9752B30F7A1D824C2F1EBDEBA44BA75610((Exception_t *)((Exception_t *)__exception_local), (SynchronizationContext_t17D9365B5E0D30A0910A16FA4351C525232EF069 *)NULL, /*hidden argument*/NULL);
		goto IL_0063;
	} // end catch (depth: 1)

IL_0063:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_t2CE498F9A6CE5405242AE2D77F03E58985B7C3ED_TisU3CWaitUntilCountOrTimeoutAsyncU3Ed__31_t227D1F5F19C948CA8C23C80B5F19147D4AAED14F_m4FDC6642836D25291A0E343845527873A88013C9_AdjustorThunk (RuntimeObject * __this, ConfiguredTaskAwaiter_t2CE498F9A6CE5405242AE2D77F03E58985B7C3ED * ___awaiter0, U3CWaitUntilCountOrTimeoutAsyncU3Ed__31_t227D1F5F19C948CA8C23C80B5F19147D4AAED14F * ___stateMachine1, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	AsyncTaskMethodBuilder_1_tABE1DEF12F121D6FC8ABF04869ED964FF83EA9B5 * _thisAdjusted = reinterpret_cast<AsyncTaskMethodBuilder_1_tABE1DEF12F121D6FC8ABF04869ED964FF83EA9B5 *>(__this + _offset);
	AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_t2CE498F9A6CE5405242AE2D77F03E58985B7C3ED_TisU3CWaitUntilCountOrTimeoutAsyncU3Ed__31_t227D1F5F19C948CA8C23C80B5F19147D4AAED14F_m4FDC6642836D25291A0E343845527873A88013C9(_thisAdjusted, ___awaiter0, ___stateMachine1, method);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Boolean>::Start<System.Threading.SemaphoreSlim_<WaitUntilCountOrTimeoutAsync>d__31>(TStateMachine&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_Start_TisU3CWaitUntilCountOrTimeoutAsyncU3Ed__31_t227D1F5F19C948CA8C23C80B5F19147D4AAED14F_m67A42FEF4C09E843DDA99A81F84E675F9AB87CF9_gshared (AsyncTaskMethodBuilder_1_tABE1DEF12F121D6FC8ABF04869ED964FF83EA9B5 * __this, U3CWaitUntilCountOrTimeoutAsyncU3Ed__31_t227D1F5F19C948CA8C23C80B5F19147D4AAED14F * ___stateMachine0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (AsyncTaskMethodBuilder_1_Start_TisU3CWaitUntilCountOrTimeoutAsyncU3Ed__31_t227D1F5F19C948CA8C23C80B5F19147D4AAED14F_m67A42FEF4C09E843DDA99A81F84E675F9AB87CF9_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ExecutionContextSwitcher_t11B7DEE83408478EE3D5E29C988E5385AA9D7277  V_0;
	memset((&V_0), 0, sizeof(V_0));
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 1);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		goto IL_0018;
	}
	{
		ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB * L_1 = (ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB *)il2cpp_codegen_object_new(ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m81AB157B93BFE2FBFDB08B88F84B444293042F97(L_1, (String_t*)_stringLiteralC70965A7D491520CA8D04D4EA01613EFED3309E0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, AsyncTaskMethodBuilder_1_Start_TisU3CWaitUntilCountOrTimeoutAsyncU3Ed__31_t227D1F5F19C948CA8C23C80B5F19147D4AAED14F_m67A42FEF4C09E843DDA99A81F84E675F9AB87CF9_RuntimeMethod_var);
	}

IL_0018:
	{
		il2cpp_codegen_initobj((&V_0), sizeof(ExecutionContextSwitcher_t11B7DEE83408478EE3D5E29C988E5385AA9D7277 ));
		RuntimeHelpers_PrepareConstrainedRegions_m4A4D3987FEE068EE30D1ABC4005CDD29D5C52560(/*hidden argument*/NULL);
	}

IL_0025:
	try
	{ // begin try (depth: 1)
		IL2CPP_RUNTIME_CLASS_INIT(ExecutionContext_t16AC73BB21FEEEAD34A017877AC18DD8BB836414_il2cpp_TypeInfo_var);
		ExecutionContext_EstablishCopyOnWriteScope_m526741703B27626D3AD07B14ADA3FECBF5C4E8DD((ExecutionContextSwitcher_t11B7DEE83408478EE3D5E29C988E5385AA9D7277 *)(ExecutionContextSwitcher_t11B7DEE83408478EE3D5E29C988E5385AA9D7277 *)(&V_0), /*hidden argument*/NULL);
		U3CWaitUntilCountOrTimeoutAsyncU3Ed__31_t227D1F5F19C948CA8C23C80B5F19147D4AAED14F * L_2 = ___stateMachine0;
		U3CWaitUntilCountOrTimeoutAsyncU3Ed__31_MoveNext_mB5E635B57C016D9A7039342703EB200F7BE8218E((U3CWaitUntilCountOrTimeoutAsyncU3Ed__31_t227D1F5F19C948CA8C23C80B5F19147D4AAED14F *)(U3CWaitUntilCountOrTimeoutAsyncU3Ed__31_t227D1F5F19C948CA8C23C80B5F19147D4AAED14F *)L_2, /*hidden argument*/NULL);
		IL2CPP_LEAVE(0x42, FINALLY_003a);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_003a;
	}

FINALLY_003a:
	{ // begin finally (depth: 1)
		ExecutionContextSwitcher_Undo_mEC7752EB8502405D0F45F0E337C1B1FF34B74BF8((ExecutionContextSwitcher_t11B7DEE83408478EE3D5E29C988E5385AA9D7277 *)(ExecutionContextSwitcher_t11B7DEE83408478EE3D5E29C988E5385AA9D7277 *)(&V_0), /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(58)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(58)
	{
		IL2CPP_JUMP_TBL(0x42, IL_0042)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0042:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void AsyncTaskMethodBuilder_1_Start_TisU3CWaitUntilCountOrTimeoutAsyncU3Ed__31_t227D1F5F19C948CA8C23C80B5F19147D4AAED14F_m67A42FEF4C09E843DDA99A81F84E675F9AB87CF9_AdjustorThunk (RuntimeObject * __this, U3CWaitUntilCountOrTimeoutAsyncU3Ed__31_t227D1F5F19C948CA8C23C80B5F19147D4AAED14F * ___stateMachine0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	AsyncTaskMethodBuilder_1_tABE1DEF12F121D6FC8ABF04869ED964FF83EA9B5 * _thisAdjusted = reinterpret_cast<AsyncTaskMethodBuilder_1_tABE1DEF12F121D6FC8ABF04869ED964FF83EA9B5 *>(__this + _offset);
	AsyncTaskMethodBuilder_1_Start_TisU3CWaitUntilCountOrTimeoutAsyncU3Ed__31_t227D1F5F19C948CA8C23C80B5F19147D4AAED14F_m67A42FEF4C09E843DDA99A81F84E675F9AB87CF9(_thisAdjusted, ___stateMachine0, method);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Object>::AwaitUnsafeOnCompleted<System.Object,System.Object>(TAwaiter&,TStateMachine&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisRuntimeObject_TisRuntimeObject_mD7F0BC5F052B851265FF930DD5AB23C8E96269DE_gshared (AsyncTaskMethodBuilder_1_tDD2A3BA099C327938EA03C35FDB1A7502BA73020 * __this, RuntimeObject ** ___awaiter0, RuntimeObject ** ___stateMachine1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisRuntimeObject_TisRuntimeObject_mD7F0BC5F052B851265FF930DD5AB23C8E96269DE_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	MoveNextRunner_tFAEA0BEDD353E2E34E8E287C67B1F5572FD30C2D * V_0 = NULL;
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * V_1 = NULL;
	Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 * V_2 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 2);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34 * G_B2_0 = NULL;
	AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34 * G_B1_0 = NULL;
	Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 * G_B3_0 = NULL;
	AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34 * G_B3_1 = NULL;

IL_0000:
	try
	{ // begin try (depth: 1)
		{
			V_0 = (MoveNextRunner_tFAEA0BEDD353E2E34E8E287C67B1F5572FD30C2D *)NULL;
			AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34 * L_0 = (AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34 *)__this->get_address_of_m_coreState_1();
			bool L_1 = AsyncCausalityTracer_get_LoggingOn_mE0A03E121425371B1D1B65640172137C3B8EEA15(/*hidden argument*/NULL);
			G_B1_0 = L_0;
			if (L_1)
			{
				G_B2_0 = L_0;
				goto IL_0012;
			}
		}

IL_000f:
		{
			G_B3_0 = ((Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 *)(NULL));
			G_B3_1 = G_B1_0;
			goto IL_0018;
		}

IL_0012:
		{
			Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 * L_2 = AsyncTaskMethodBuilder_1_get_Task_m61DEC300353320E428E17DA0D59D61974F4415BB((AsyncTaskMethodBuilder_1_tDD2A3BA099C327938EA03C35FDB1A7502BA73020 *)(AsyncTaskMethodBuilder_1_tDD2A3BA099C327938EA03C35FDB1A7502BA73020 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 0));
			G_B3_0 = L_2;
			G_B3_1 = G_B2_0;
		}

IL_0018:
		{
			Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_3 = AsyncMethodBuilderCore_GetCompletionAction_m7FE7F57CC452F0EDE870AB08EEB648E2027D4F5C((AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34 *)(AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34 *)G_B3_1, (Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 *)G_B3_0, (MoveNextRunner_tFAEA0BEDD353E2E34E8E287C67B1F5572FD30C2D **)(MoveNextRunner_tFAEA0BEDD353E2E34E8E287C67B1F5572FD30C2D **)(&V_0), /*hidden argument*/NULL);
			V_1 = (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)L_3;
			AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34 * L_4 = (AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34 *)__this->get_address_of_m_coreState_1();
			RuntimeObject* L_5 = (RuntimeObject*)L_4->get_m_stateMachine_0();
			if (L_5)
			{
				goto IL_004c;
			}
		}

IL_002d:
		{
			Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 * L_6 = AsyncTaskMethodBuilder_1_get_Task_m61DEC300353320E428E17DA0D59D61974F4415BB((AsyncTaskMethodBuilder_1_tDD2A3BA099C327938EA03C35FDB1A7502BA73020 *)(AsyncTaskMethodBuilder_1_tDD2A3BA099C327938EA03C35FDB1A7502BA73020 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 0));
			V_2 = (Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 *)L_6;
			AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34 * L_7 = (AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34 *)__this->get_address_of_m_coreState_1();
			RuntimeObject ** L_8 = ___stateMachine1;
			RuntimeObject * L_9 = (*(RuntimeObject **)L_8);
			MoveNextRunner_tFAEA0BEDD353E2E34E8E287C67B1F5572FD30C2D * L_10 = V_0;
			Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 * L_11 = V_2;
			AsyncMethodBuilderCore_PostBoxInitialization_m22C1D9A2745255C6FC1426D4CB0C4355FBDA07E3((AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34 *)(AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34 *)L_7, (RuntimeObject*)L_9, (MoveNextRunner_tFAEA0BEDD353E2E34E8E287C67B1F5572FD30C2D *)L_10, (Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 *)L_11, /*hidden argument*/NULL);
		}

IL_004c:
		{
			RuntimeObject ** L_12 = ___awaiter0;
			Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_13 = V_1;
			NullCheck((RuntimeObject*)(*L_12));
			InterfaceActionInvoker1< Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * >::Invoke(0 /* System.Void System.Runtime.CompilerServices.ICriticalNotifyCompletion::UnsafeOnCompleted(System.Action) */, ICriticalNotifyCompletion_t3F4FCEA29CDCACD07747F3A1D6D1406521556838_il2cpp_TypeInfo_var, (RuntimeObject*)(*L_12), (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)L_13);
			goto IL_0063;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (Exception_t_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
			goto CATCH_005b;
		throw e;
	}

CATCH_005b:
	{ // begin catch(System.Exception)
		AsyncMethodBuilderCore_ThrowAsync_m69800E9752B30F7A1D824C2F1EBDEBA44BA75610((Exception_t *)((Exception_t *)__exception_local), (SynchronizationContext_t17D9365B5E0D30A0910A16FA4351C525232EF069 *)NULL, /*hidden argument*/NULL);
		goto IL_0063;
	} // end catch (depth: 1)

IL_0063:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisRuntimeObject_TisRuntimeObject_mD7F0BC5F052B851265FF930DD5AB23C8E96269DE_AdjustorThunk (RuntimeObject * __this, RuntimeObject ** ___awaiter0, RuntimeObject ** ___stateMachine1, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	AsyncTaskMethodBuilder_1_tDD2A3BA099C327938EA03C35FDB1A7502BA73020 * _thisAdjusted = reinterpret_cast<AsyncTaskMethodBuilder_1_tDD2A3BA099C327938EA03C35FDB1A7502BA73020 *>(__this + _offset);
	AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisRuntimeObject_TisRuntimeObject_mD7F0BC5F052B851265FF930DD5AB23C8E96269DE(_thisAdjusted, ___awaiter0, ___stateMachine1, method);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Object>::Start<System.Object>(TStateMachine&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_Start_TisRuntimeObject_m25C57EA59EF179635A81530036C12082EE50878B_gshared (AsyncTaskMethodBuilder_1_tDD2A3BA099C327938EA03C35FDB1A7502BA73020 * __this, RuntimeObject ** ___stateMachine0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (AsyncTaskMethodBuilder_1_Start_TisRuntimeObject_m25C57EA59EF179635A81530036C12082EE50878B_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ExecutionContextSwitcher_t11B7DEE83408478EE3D5E29C988E5385AA9D7277  V_0;
	memset((&V_0), 0, sizeof(V_0));
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 1);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		RuntimeObject ** L_0 = ___stateMachine0;
		RuntimeObject * L_1 = (*(RuntimeObject **)L_0);
		if (L_1)
		{
			goto IL_0018;
		}
	}
	{
		ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB * L_2 = (ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB *)il2cpp_codegen_object_new(ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m81AB157B93BFE2FBFDB08B88F84B444293042F97(L_2, (String_t*)_stringLiteralC70965A7D491520CA8D04D4EA01613EFED3309E0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, AsyncTaskMethodBuilder_1_Start_TisRuntimeObject_m25C57EA59EF179635A81530036C12082EE50878B_RuntimeMethod_var);
	}

IL_0018:
	{
		il2cpp_codegen_initobj((&V_0), sizeof(ExecutionContextSwitcher_t11B7DEE83408478EE3D5E29C988E5385AA9D7277 ));
		RuntimeHelpers_PrepareConstrainedRegions_m4A4D3987FEE068EE30D1ABC4005CDD29D5C52560(/*hidden argument*/NULL);
	}

IL_0025:
	try
	{ // begin try (depth: 1)
		IL2CPP_RUNTIME_CLASS_INIT(ExecutionContext_t16AC73BB21FEEEAD34A017877AC18DD8BB836414_il2cpp_TypeInfo_var);
		ExecutionContext_EstablishCopyOnWriteScope_m526741703B27626D3AD07B14ADA3FECBF5C4E8DD((ExecutionContextSwitcher_t11B7DEE83408478EE3D5E29C988E5385AA9D7277 *)(ExecutionContextSwitcher_t11B7DEE83408478EE3D5E29C988E5385AA9D7277 *)(&V_0), /*hidden argument*/NULL);
		RuntimeObject ** L_3 = ___stateMachine0;
		NullCheck((RuntimeObject*)(*L_3));
		InterfaceActionInvoker0::Invoke(0 /* System.Void System.Runtime.CompilerServices.IAsyncStateMachine::MoveNext() */, IAsyncStateMachine_tAE063F84A60E1058FCA4E3EA9F555D3462641F7D_il2cpp_TypeInfo_var, (RuntimeObject*)(*L_3));
		IL2CPP_LEAVE(0x42, FINALLY_003a);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_003a;
	}

FINALLY_003a:
	{ // begin finally (depth: 1)
		ExecutionContextSwitcher_Undo_mEC7752EB8502405D0F45F0E337C1B1FF34B74BF8((ExecutionContextSwitcher_t11B7DEE83408478EE3D5E29C988E5385AA9D7277 *)(ExecutionContextSwitcher_t11B7DEE83408478EE3D5E29C988E5385AA9D7277 *)(&V_0), /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(58)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(58)
	{
		IL2CPP_JUMP_TBL(0x42, IL_0042)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0042:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void AsyncTaskMethodBuilder_1_Start_TisRuntimeObject_m25C57EA59EF179635A81530036C12082EE50878B_AdjustorThunk (RuntimeObject * __this, RuntimeObject ** ___stateMachine0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	AsyncTaskMethodBuilder_1_tDD2A3BA099C327938EA03C35FDB1A7502BA73020 * _thisAdjusted = reinterpret_cast<AsyncTaskMethodBuilder_1_tDD2A3BA099C327938EA03C35FDB1A7502BA73020 *>(__this + _offset);
	AsyncTaskMethodBuilder_1_Start_TisRuntimeObject_m25C57EA59EF179635A81530036C12082EE50878B(_thisAdjusted, ___stateMachine0, method);
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.Byte>::Cast<System.Boolean>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t EnumHelper_1_Cast_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_m65632A9612550A9884DF95B32001567A6BF185BC_gshared (bool ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_t3DC67AE5707B4A6239FDC484B4051190F3DD73F6 * L_0 = ((Caster_1_tCFCED75135FB93572DAAB1B0D9C1E13DD440E074_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		bool L_1 = ___value0;
		NullCheck((Transformer_1_t3DC67AE5707B4A6239FDC484B4051190F3DD73F6 *)L_0);
		uint8_t L_2 = ((  uint8_t (*) (Transformer_1_t3DC67AE5707B4A6239FDC484B4051190F3DD73F6 *, bool, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_t3DC67AE5707B4A6239FDC484B4051190F3DD73F6 *)L_0, (bool)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.Byte>::Cast<System.Byte>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t EnumHelper_1_Cast_TisByte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_m2118138954DAC5570753C1C19D04940C746280F2_gshared (uint8_t ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_t28E2CE4E6000CFB5FD1E8661B28068A803A652CD * L_0 = ((Caster_1_t5CD894D52674E925A7990CABE1A515C866852FD3_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		uint8_t L_1 = ___value0;
		NullCheck((Transformer_1_t28E2CE4E6000CFB5FD1E8661B28068A803A652CD *)L_0);
		uint8_t L_2 = ((  uint8_t (*) (Transformer_1_t28E2CE4E6000CFB5FD1E8661B28068A803A652CD *, uint8_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_t28E2CE4E6000CFB5FD1E8661B28068A803A652CD *)L_0, (uint8_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.Byte>::Cast<System.Char>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t EnumHelper_1_Cast_TisChar_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_m3ACC983289C1604860850AF29655B8DF93F775A7_gshared (Il2CppChar ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_t327F0FF1377C87DD3EC9A5B30D921C1D378A879B * L_0 = ((Caster_1_t6BA3AA69A295D7FE472126EEF8104FDEC5FC8EC6_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		Il2CppChar L_1 = ___value0;
		NullCheck((Transformer_1_t327F0FF1377C87DD3EC9A5B30D921C1D378A879B *)L_0);
		uint8_t L_2 = ((  uint8_t (*) (Transformer_1_t327F0FF1377C87DD3EC9A5B30D921C1D378A879B *, Il2CppChar, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_t327F0FF1377C87DD3EC9A5B30D921C1D378A879B *)L_0, (Il2CppChar)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.Byte>::Cast<System.DateTime>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t EnumHelper_1_Cast_TisDateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_mE30CDF32862007911E84D2C691E8F302A8E93CBB_gshared (DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_t3001FEA39E46E3DA96E358634D044AE54CB8E347 * L_0 = ((Caster_1_tA012B9C2191521E1AC810D432A4D06C2BC5D4C71_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  L_1 = ___value0;
		NullCheck((Transformer_1_t3001FEA39E46E3DA96E358634D044AE54CB8E347 *)L_0);
		uint8_t L_2 = ((  uint8_t (*) (Transformer_1_t3001FEA39E46E3DA96E358634D044AE54CB8E347 *, DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_t3001FEA39E46E3DA96E358634D044AE54CB8E347 *)L_0, (DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 )L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.Byte>::Cast<System.DateTimeOffset>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t EnumHelper_1_Cast_TisDateTimeOffset_t205B59B1EFB6646DCE3CC50553377BF6023615B5_m26CA43D8D81F26DAAF6F3517E67A95952A49A26A_gshared (DateTimeOffset_t205B59B1EFB6646DCE3CC50553377BF6023615B5  ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_t2C08585197D68DA12A216A4373064B0363C8702C * L_0 = ((Caster_1_t1A728514A96CA0B36724F1AD49EF42DB49A71581_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		DateTimeOffset_t205B59B1EFB6646DCE3CC50553377BF6023615B5  L_1 = ___value0;
		NullCheck((Transformer_1_t2C08585197D68DA12A216A4373064B0363C8702C *)L_0);
		uint8_t L_2 = ((  uint8_t (*) (Transformer_1_t2C08585197D68DA12A216A4373064B0363C8702C *, DateTimeOffset_t205B59B1EFB6646DCE3CC50553377BF6023615B5 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_t2C08585197D68DA12A216A4373064B0363C8702C *)L_0, (DateTimeOffset_t205B59B1EFB6646DCE3CC50553377BF6023615B5 )L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.Byte>::Cast<System.Decimal>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t EnumHelper_1_Cast_TisDecimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7_m535967C0D3E5484F8FDA16CF83885FB1AC7EA042_gshared (Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_t690EEF1811184AEE377AA96051EECB5956C1027D * L_0 = ((Caster_1_tA67891064DEEF82D513D5D1D7953FFEF0DC9F24A_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  L_1 = ___value0;
		NullCheck((Transformer_1_t690EEF1811184AEE377AA96051EECB5956C1027D *)L_0);
		uint8_t L_2 = ((  uint8_t (*) (Transformer_1_t690EEF1811184AEE377AA96051EECB5956C1027D *, Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_t690EEF1811184AEE377AA96051EECB5956C1027D *)L_0, (Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7 )L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.Byte>::Cast<System.Double>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t EnumHelper_1_Cast_TisDouble_t42821932CB52DE2057E685D0E1AF3DE5033D2181_m76D275CD3571351A9E80C797420314677BE7DD6D_gshared (double ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_t7F80BE9FB1DF9994C698CCC6664C2E010ECB94DF * L_0 = ((Caster_1_t144369B8BF110535D7668437D81750525FE7488A_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		double L_1 = ___value0;
		NullCheck((Transformer_1_t7F80BE9FB1DF9994C698CCC6664C2E010ECB94DF *)L_0);
		uint8_t L_2 = ((  uint8_t (*) (Transformer_1_t7F80BE9FB1DF9994C698CCC6664C2E010ECB94DF *, double, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_t7F80BE9FB1DF9994C698CCC6664C2E010ECB94DF *)L_0, (double)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.Byte>::Cast<System.Diagnostics.Tracing.EmptyStruct>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t EnumHelper_1_Cast_TisEmptyStruct_t4261C00C8DDCEA2FE01A2264519DDB55BA275F62_m0C69120DD3C5360E92659C50F9F97FC4638232B7_gshared (EmptyStruct_t4261C00C8DDCEA2FE01A2264519DDB55BA275F62  ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_t4781F0887392462A71B8DA7362AE412BDBAC8498 * L_0 = ((Caster_1_t1996873E8C7CA32DD1AFF0378177BD01993195DA_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		EmptyStruct_t4261C00C8DDCEA2FE01A2264519DDB55BA275F62  L_1 = ___value0;
		NullCheck((Transformer_1_t4781F0887392462A71B8DA7362AE412BDBAC8498 *)L_0);
		uint8_t L_2 = ((  uint8_t (*) (Transformer_1_t4781F0887392462A71B8DA7362AE412BDBAC8498 *, EmptyStruct_t4261C00C8DDCEA2FE01A2264519DDB55BA275F62 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_t4781F0887392462A71B8DA7362AE412BDBAC8498 *)L_0, (EmptyStruct_t4261C00C8DDCEA2FE01A2264519DDB55BA275F62 )L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.Byte>::Cast<System.Guid>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t EnumHelper_1_Cast_TisGuid_t_m5F1EEB4F84FAA53E9815267292C266D4E1394239_gshared (Guid_t  ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_t1C30255A20A41F13A40891CED11C03BC98CAB381 * L_0 = ((Caster_1_t058DE37DDE56EF2251B2B7507BEAB0B2992AF3AB_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		Guid_t  L_1 = ___value0;
		NullCheck((Transformer_1_t1C30255A20A41F13A40891CED11C03BC98CAB381 *)L_0);
		uint8_t L_2 = ((  uint8_t (*) (Transformer_1_t1C30255A20A41F13A40891CED11C03BC98CAB381 *, Guid_t , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_t1C30255A20A41F13A40891CED11C03BC98CAB381 *)L_0, (Guid_t )L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.Byte>::Cast<System.Int16>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t EnumHelper_1_Cast_TisInt16_tD0F031114106263BB459DA1F099FF9F42691295A_m616080968E13CCDC821F195AEAE4EF73A0523B76_gshared (int16_t ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_tC9D6DCE262D74560D6D8324567C11DD16602C216 * L_0 = ((Caster_1_tBB2D67B4CC292225005B4D5EB8B51337BF2A6A39_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		int16_t L_1 = ___value0;
		NullCheck((Transformer_1_tC9D6DCE262D74560D6D8324567C11DD16602C216 *)L_0);
		uint8_t L_2 = ((  uint8_t (*) (Transformer_1_tC9D6DCE262D74560D6D8324567C11DD16602C216 *, int16_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_tC9D6DCE262D74560D6D8324567C11DD16602C216 *)L_0, (int16_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.Byte>::Cast<System.Int32>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t EnumHelper_1_Cast_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m68F9A8C94BF3C497866ED5B2D1A84279622309B6_gshared (int32_t ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_tB389982442B905977CFD9942EF65118312157BD3 * L_0 = ((Caster_1_tEEEAF59DA096D2CD82C17E7418812863A351315B_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		int32_t L_1 = ___value0;
		NullCheck((Transformer_1_tB389982442B905977CFD9942EF65118312157BD3 *)L_0);
		uint8_t L_2 = ((  uint8_t (*) (Transformer_1_tB389982442B905977CFD9942EF65118312157BD3 *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_tB389982442B905977CFD9942EF65118312157BD3 *)L_0, (int32_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.Byte>::Cast<System.Int64>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t EnumHelper_1_Cast_TisInt64_t378EE0D608BD3107E77238E85F30D2BBD46981F3_mF154FE8C66231A802D5970A1C9C375925C390728_gshared (int64_t ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_tEAF6BF35B1968343B8492E296BC8661120F443F7 * L_0 = ((Caster_1_tD77590572D7D7B6FF580ECA0F157FD9704FE7D4C_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		int64_t L_1 = ___value0;
		NullCheck((Transformer_1_tEAF6BF35B1968343B8492E296BC8661120F443F7 *)L_0);
		uint8_t L_2 = ((  uint8_t (*) (Transformer_1_tEAF6BF35B1968343B8492E296BC8661120F443F7 *, int64_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_tEAF6BF35B1968343B8492E296BC8661120F443F7 *)L_0, (int64_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.Byte>::Cast<System.IntPtr>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t EnumHelper_1_Cast_TisIntPtr_t_m6628925934945C9D8B88C12CD0C754E9FF746752_gshared (intptr_t ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_tDAC4F608DAB2EE6BC5CD91D42ECBACDFDBCEB0AB * L_0 = ((Caster_1_tDE5A2F5470EE5FC764FCEFB93C0F814DF53085D1_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		intptr_t L_1 = ___value0;
		NullCheck((Transformer_1_tDAC4F608DAB2EE6BC5CD91D42ECBACDFDBCEB0AB *)L_0);
		uint8_t L_2 = ((  uint8_t (*) (Transformer_1_tDAC4F608DAB2EE6BC5CD91D42ECBACDFDBCEB0AB *, intptr_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_tDAC4F608DAB2EE6BC5CD91D42ECBACDFDBCEB0AB *)L_0, (intptr_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.Byte>::Cast<System.Object>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t EnumHelper_1_Cast_TisRuntimeObject_m9AB8020F4AE042AD7E8AC9EE8F3B2456C8C22CA8_gshared (RuntimeObject * ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_t7758A5153ABEBF79026D781F2F12C0F4748450B4 * L_0 = ((Caster_1_tA4F5C46578196FA46AD3A20BEAE479145A087636_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		RuntimeObject * L_1 = ___value0;
		NullCheck((Transformer_1_t7758A5153ABEBF79026D781F2F12C0F4748450B4 *)L_0);
		uint8_t L_2 = ((  uint8_t (*) (Transformer_1_t7758A5153ABEBF79026D781F2F12C0F4748450B4 *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_t7758A5153ABEBF79026D781F2F12C0F4748450B4 *)L_0, (RuntimeObject *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.Byte>::Cast<System.SByte>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t EnumHelper_1_Cast_TisSByte_t928712DD662DC29BA4FAAE8CE2230AFB23447F0B_m205745A097BAE38D3D4EB656ED9148B925007208_gshared (int8_t ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_t35C6DC96DC1F138679D872A33D06394FF3BD4716 * L_0 = ((Caster_1_t9264D2DCCC5AB3D851B5BF6F32647061B5ABA64C_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		int8_t L_1 = ___value0;
		NullCheck((Transformer_1_t35C6DC96DC1F138679D872A33D06394FF3BD4716 *)L_0);
		uint8_t L_2 = ((  uint8_t (*) (Transformer_1_t35C6DC96DC1F138679D872A33D06394FF3BD4716 *, int8_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_t35C6DC96DC1F138679D872A33D06394FF3BD4716 *)L_0, (int8_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.Byte>::Cast<System.Single>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t EnumHelper_1_Cast_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_m0E7ED5F59E6D703DE2A4B540F2CA05E6552949E8_gshared (float ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_tFB91A7B8819395950BCFE210EDA54735CF4E574F * L_0 = ((Caster_1_t248F6262CD42540733F87B775F9ED33DEB6DA3BA_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		float L_1 = ___value0;
		NullCheck((Transformer_1_tFB91A7B8819395950BCFE210EDA54735CF4E574F *)L_0);
		uint8_t L_2 = ((  uint8_t (*) (Transformer_1_tFB91A7B8819395950BCFE210EDA54735CF4E574F *, float, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_tFB91A7B8819395950BCFE210EDA54735CF4E574F *)L_0, (float)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.Byte>::Cast<System.TimeSpan>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t EnumHelper_1_Cast_TisTimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203_mC7639A6F741ABF3E5283583CD6B8954ED2BCF4BD_gshared (TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_t75A228CF2470F94906973F31E5103CD0ACC45DA6 * L_0 = ((Caster_1_t955B3AB72A29A2506256E28756B6A4457CDF6773_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  L_1 = ___value0;
		NullCheck((Transformer_1_t75A228CF2470F94906973F31E5103CD0ACC45DA6 *)L_0);
		uint8_t L_2 = ((  uint8_t (*) (Transformer_1_t75A228CF2470F94906973F31E5103CD0ACC45DA6 *, TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_t75A228CF2470F94906973F31E5103CD0ACC45DA6 *)L_0, (TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 )L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.Byte>::Cast<System.UInt16>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t EnumHelper_1_Cast_TisUInt16_t894EA9D4FB7C799B244E7BBF2DF0EEEDBC77A8BD_m01B62D366C62B6FB4DA390B2800E634304A4E072_gshared (uint16_t ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_t8FC8FB2D451A3EC4077EF54E0E1AFE8D01BF8BA8 * L_0 = ((Caster_1_t7AB320029EAC4D74F4CE0AFA0C783D1CD7CC1D29_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		uint16_t L_1 = ___value0;
		NullCheck((Transformer_1_t8FC8FB2D451A3EC4077EF54E0E1AFE8D01BF8BA8 *)L_0);
		uint8_t L_2 = ((  uint8_t (*) (Transformer_1_t8FC8FB2D451A3EC4077EF54E0E1AFE8D01BF8BA8 *, uint16_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_t8FC8FB2D451A3EC4077EF54E0E1AFE8D01BF8BA8 *)L_0, (uint16_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.Byte>::Cast<System.UInt32>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t EnumHelper_1_Cast_TisUInt32_tE60352A06233E4E69DD198BCC67142159F686B15_m5ECA66279A683BB6D1DEDF8D30FF42981EF96659_gshared (uint32_t ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_t66DDEE07B34D2CD03DF7E22CC15C182D874CD6A1 * L_0 = ((Caster_1_tBF9E6EC155A9FBDBF980CF1F0F6224AB4AA37A68_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		uint32_t L_1 = ___value0;
		NullCheck((Transformer_1_t66DDEE07B34D2CD03DF7E22CC15C182D874CD6A1 *)L_0);
		uint8_t L_2 = ((  uint8_t (*) (Transformer_1_t66DDEE07B34D2CD03DF7E22CC15C182D874CD6A1 *, uint32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_t66DDEE07B34D2CD03DF7E22CC15C182D874CD6A1 *)L_0, (uint32_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.Byte>::Cast<System.UInt64>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t EnumHelper_1_Cast_TisUInt64_tEC57511B3E3CA2DBA1BEBD434C6983E31C943281_mCA1736E24763EF4A88FABD71C7F44EDE0ADDC458_gshared (uint64_t ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_t16C0B9A25005C19C84993A6DF613E235C47DF3D8 * L_0 = ((Caster_1_t2CA443C9D90B2AC43B053165D7BC85A19BFCF2D5_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		uint64_t L_1 = ___value0;
		NullCheck((Transformer_1_t16C0B9A25005C19C84993A6DF613E235C47DF3D8 *)L_0);
		uint8_t L_2 = ((  uint8_t (*) (Transformer_1_t16C0B9A25005C19C84993A6DF613E235C47DF3D8 *, uint64_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_t16C0B9A25005C19C84993A6DF613E235C47DF3D8 *)L_0, (uint64_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.Byte>::Cast<System.UIntPtr>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t EnumHelper_1_Cast_TisUIntPtr_t_mD61CDCA57B42F4A67045976806B45E5DAA21A5E9_gshared (uintptr_t ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_tB3A92B161A295C5CE5BB20A5F09DAF8808175D63 * L_0 = ((Caster_1_tC1342B867E547659C2DE93A11672D24B7DD9CED7_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		uintptr_t L_1 = ___value0;
		NullCheck((Transformer_1_tB3A92B161A295C5CE5BB20A5F09DAF8808175D63 *)L_0);
		uint8_t L_2 = ((  uint8_t (*) (Transformer_1_tB3A92B161A295C5CE5BB20A5F09DAF8808175D63 *, uintptr_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_tB3A92B161A295C5CE5BB20A5F09DAF8808175D63 *)L_0, (uintptr_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.Byte>::Cast<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t EnumHelper_1_Cast_TisKeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625_m919BC881A36A78B9AEF52429CBADE77651CCB47B_gshared (KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625  ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_t7F28A44470BC903D7613912A5BE5E0A83B0C3A62 * L_0 = ((Caster_1_tD834295A95CE11FCDA5917358B03D086E7C253AE_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625  L_1 = ___value0;
		NullCheck((Transformer_1_t7F28A44470BC903D7613912A5BE5E0A83B0C3A62 *)L_0);
		uint8_t L_2 = ((  uint8_t (*) (Transformer_1_t7F28A44470BC903D7613912A5BE5E0A83B0C3A62 *, KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_t7F28A44470BC903D7613912A5BE5E0A83B0C3A62 *)L_0, (KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 )L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.Int16>::Cast<System.Boolean>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int16_t EnumHelper_1_Cast_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_m67A5E6F493C157EFEADAB6201AAFA8481EEE71C4_gshared (bool ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_t1DD535D7A0BF0DF1D9BD217F42BD8B86FED818F0 * L_0 = ((Caster_1_t0B30A0D4BA7D5C6566B3E0FF1E610301CA832250_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		bool L_1 = ___value0;
		NullCheck((Transformer_1_t1DD535D7A0BF0DF1D9BD217F42BD8B86FED818F0 *)L_0);
		int16_t L_2 = ((  int16_t (*) (Transformer_1_t1DD535D7A0BF0DF1D9BD217F42BD8B86FED818F0 *, bool, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_t1DD535D7A0BF0DF1D9BD217F42BD8B86FED818F0 *)L_0, (bool)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.Int16>::Cast<System.Byte>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int16_t EnumHelper_1_Cast_TisByte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_m3C361459109F2F4C5DE1B4615452A4CD486FC8E1_gshared (uint8_t ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_t50ABA94494AF2D216A78139ACFFBE9584E70845C * L_0 = ((Caster_1_t0491219BACF522D16AECE2AB6BD690C9464F10F4_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		uint8_t L_1 = ___value0;
		NullCheck((Transformer_1_t50ABA94494AF2D216A78139ACFFBE9584E70845C *)L_0);
		int16_t L_2 = ((  int16_t (*) (Transformer_1_t50ABA94494AF2D216A78139ACFFBE9584E70845C *, uint8_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_t50ABA94494AF2D216A78139ACFFBE9584E70845C *)L_0, (uint8_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.Int16>::Cast<System.Char>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int16_t EnumHelper_1_Cast_TisChar_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_m95C258038BFF220C6CB1617FF926F9BBED557644_gshared (Il2CppChar ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_t4A76AF5FABAC49231E9903360B082EB5E93769FE * L_0 = ((Caster_1_tA51B86B2FD3FC818E61AF31A48228C5AF4C71212_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		Il2CppChar L_1 = ___value0;
		NullCheck((Transformer_1_t4A76AF5FABAC49231E9903360B082EB5E93769FE *)L_0);
		int16_t L_2 = ((  int16_t (*) (Transformer_1_t4A76AF5FABAC49231E9903360B082EB5E93769FE *, Il2CppChar, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_t4A76AF5FABAC49231E9903360B082EB5E93769FE *)L_0, (Il2CppChar)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.Int16>::Cast<System.DateTime>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int16_t EnumHelper_1_Cast_TisDateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_m342BD5D41B540E74E19F639AF9F835F91BA82E5B_gshared (DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_t7670F7F455D569AE5845734CA6275DDAB457DFD9 * L_0 = ((Caster_1_t16726D78015CB49831B9ADBA7CEFAEFC87309821_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  L_1 = ___value0;
		NullCheck((Transformer_1_t7670F7F455D569AE5845734CA6275DDAB457DFD9 *)L_0);
		int16_t L_2 = ((  int16_t (*) (Transformer_1_t7670F7F455D569AE5845734CA6275DDAB457DFD9 *, DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_t7670F7F455D569AE5845734CA6275DDAB457DFD9 *)L_0, (DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 )L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.Int16>::Cast<System.DateTimeOffset>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int16_t EnumHelper_1_Cast_TisDateTimeOffset_t205B59B1EFB6646DCE3CC50553377BF6023615B5_m63B729475B2AF8BD7661C58F7A9ED73AC86DAC4B_gshared (DateTimeOffset_t205B59B1EFB6646DCE3CC50553377BF6023615B5  ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_t6ED2F8177C72CFD7E30DFF454AA4BC1B74679C56 * L_0 = ((Caster_1_t09398F3F7D26086013828F5CD0B514F10F1BFB1C_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		DateTimeOffset_t205B59B1EFB6646DCE3CC50553377BF6023615B5  L_1 = ___value0;
		NullCheck((Transformer_1_t6ED2F8177C72CFD7E30DFF454AA4BC1B74679C56 *)L_0);
		int16_t L_2 = ((  int16_t (*) (Transformer_1_t6ED2F8177C72CFD7E30DFF454AA4BC1B74679C56 *, DateTimeOffset_t205B59B1EFB6646DCE3CC50553377BF6023615B5 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_t6ED2F8177C72CFD7E30DFF454AA4BC1B74679C56 *)L_0, (DateTimeOffset_t205B59B1EFB6646DCE3CC50553377BF6023615B5 )L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.Int16>::Cast<System.Decimal>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int16_t EnumHelper_1_Cast_TisDecimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7_m5C2FA717A9D80B06828ACC59613DEEFF872BE4B2_gshared (Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_t641A86473503A4AB08D80E33213C47386F023BF3 * L_0 = ((Caster_1_tDBC5689DFC01B97FDD16F4D26DF9387B7F21056E_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  L_1 = ___value0;
		NullCheck((Transformer_1_t641A86473503A4AB08D80E33213C47386F023BF3 *)L_0);
		int16_t L_2 = ((  int16_t (*) (Transformer_1_t641A86473503A4AB08D80E33213C47386F023BF3 *, Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_t641A86473503A4AB08D80E33213C47386F023BF3 *)L_0, (Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7 )L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.Int16>::Cast<System.Double>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int16_t EnumHelper_1_Cast_TisDouble_t42821932CB52DE2057E685D0E1AF3DE5033D2181_m0AF882964F4B99F79BD2AAB963EDB454D0E98E56_gshared (double ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_t52E02D9A03321E660B3ED7DE9478EE15F5A8ABBA * L_0 = ((Caster_1_tB2E729DB6666F1806CFFBB8D54BC0632DE489ABE_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		double L_1 = ___value0;
		NullCheck((Transformer_1_t52E02D9A03321E660B3ED7DE9478EE15F5A8ABBA *)L_0);
		int16_t L_2 = ((  int16_t (*) (Transformer_1_t52E02D9A03321E660B3ED7DE9478EE15F5A8ABBA *, double, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_t52E02D9A03321E660B3ED7DE9478EE15F5A8ABBA *)L_0, (double)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.Int16>::Cast<System.Diagnostics.Tracing.EmptyStruct>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int16_t EnumHelper_1_Cast_TisEmptyStruct_t4261C00C8DDCEA2FE01A2264519DDB55BA275F62_m40294FFA78654ED0B20A50CD2B118960AB769D22_gshared (EmptyStruct_t4261C00C8DDCEA2FE01A2264519DDB55BA275F62  ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_t6FEFE5B54753E83410F77B31890AED883398BD9E * L_0 = ((Caster_1_tE1E5D78C81A8F6D328F84599BBB28574BC19C9DB_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		EmptyStruct_t4261C00C8DDCEA2FE01A2264519DDB55BA275F62  L_1 = ___value0;
		NullCheck((Transformer_1_t6FEFE5B54753E83410F77B31890AED883398BD9E *)L_0);
		int16_t L_2 = ((  int16_t (*) (Transformer_1_t6FEFE5B54753E83410F77B31890AED883398BD9E *, EmptyStruct_t4261C00C8DDCEA2FE01A2264519DDB55BA275F62 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_t6FEFE5B54753E83410F77B31890AED883398BD9E *)L_0, (EmptyStruct_t4261C00C8DDCEA2FE01A2264519DDB55BA275F62 )L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.Int16>::Cast<System.Guid>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int16_t EnumHelper_1_Cast_TisGuid_t_mA0715DE18733EEABDA95F4178CE73EE500B02AA4_gshared (Guid_t  ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_t7F21EEE32F525F971881D42A9C3C10149176FF64 * L_0 = ((Caster_1_tE8D150944ED5F3C65255675A1102CBE45E53A67A_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		Guid_t  L_1 = ___value0;
		NullCheck((Transformer_1_t7F21EEE32F525F971881D42A9C3C10149176FF64 *)L_0);
		int16_t L_2 = ((  int16_t (*) (Transformer_1_t7F21EEE32F525F971881D42A9C3C10149176FF64 *, Guid_t , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_t7F21EEE32F525F971881D42A9C3C10149176FF64 *)L_0, (Guid_t )L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.Int16>::Cast<System.Int16>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int16_t EnumHelper_1_Cast_TisInt16_tD0F031114106263BB459DA1F099FF9F42691295A_mABBD5BF5CF6E829802131A7B48553EFAF361C7A4_gshared (int16_t ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_t419E6E51E81BB9975C7D042A2BA9F7775173A026 * L_0 = ((Caster_1_tF7215950D0CE02AC5CCDB60DBAE63F97F90289D5_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		int16_t L_1 = ___value0;
		NullCheck((Transformer_1_t419E6E51E81BB9975C7D042A2BA9F7775173A026 *)L_0);
		int16_t L_2 = ((  int16_t (*) (Transformer_1_t419E6E51E81BB9975C7D042A2BA9F7775173A026 *, int16_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_t419E6E51E81BB9975C7D042A2BA9F7775173A026 *)L_0, (int16_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.Int16>::Cast<System.Int32>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int16_t EnumHelper_1_Cast_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_mCE2A297897E27AB4919E46D7D64FAAE28A066A1B_gshared (int32_t ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_tF45CCD70807F5D9D3F0F888314AF2D040221A9DF * L_0 = ((Caster_1_t57AB060B5F925FCB67D5FB3E1CA3A3D5FE61ABA3_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		int32_t L_1 = ___value0;
		NullCheck((Transformer_1_tF45CCD70807F5D9D3F0F888314AF2D040221A9DF *)L_0);
		int16_t L_2 = ((  int16_t (*) (Transformer_1_tF45CCD70807F5D9D3F0F888314AF2D040221A9DF *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_tF45CCD70807F5D9D3F0F888314AF2D040221A9DF *)L_0, (int32_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.Int16>::Cast<System.Int64>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int16_t EnumHelper_1_Cast_TisInt64_t378EE0D608BD3107E77238E85F30D2BBD46981F3_m38EA7F3009E1CD4F601C536B4A7F8EB5E2853857_gshared (int64_t ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_tE4D99CFDC91F9C2FD7B786088CC0C24C88A2ACD2 * L_0 = ((Caster_1_tC5E49B074681892EDD34AFC0D37E72E9A61E3365_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		int64_t L_1 = ___value0;
		NullCheck((Transformer_1_tE4D99CFDC91F9C2FD7B786088CC0C24C88A2ACD2 *)L_0);
		int16_t L_2 = ((  int16_t (*) (Transformer_1_tE4D99CFDC91F9C2FD7B786088CC0C24C88A2ACD2 *, int64_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_tE4D99CFDC91F9C2FD7B786088CC0C24C88A2ACD2 *)L_0, (int64_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.Int16>::Cast<System.IntPtr>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int16_t EnumHelper_1_Cast_TisIntPtr_t_m353EEA879C6E7FF5F6178585C0BEC4C3FFFB7EFB_gshared (intptr_t ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_t6CEF5B426229DB191F2B9957F2A090DC27527AC3 * L_0 = ((Caster_1_tF0970E662BDB615DD3C168CEEC1D17122620D2ED_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		intptr_t L_1 = ___value0;
		NullCheck((Transformer_1_t6CEF5B426229DB191F2B9957F2A090DC27527AC3 *)L_0);
		int16_t L_2 = ((  int16_t (*) (Transformer_1_t6CEF5B426229DB191F2B9957F2A090DC27527AC3 *, intptr_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_t6CEF5B426229DB191F2B9957F2A090DC27527AC3 *)L_0, (intptr_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.Int16>::Cast<System.Object>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int16_t EnumHelper_1_Cast_TisRuntimeObject_m49E0B745A52414D9407DC9A96235B9B8D4CE4A0D_gshared (RuntimeObject * ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_tCFCF83ED75D84A4CAF67C05C1FC5723F8C6A1045 * L_0 = ((Caster_1_tD87C66383C598E45BB2849C2C280F7E38199CE5B_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		RuntimeObject * L_1 = ___value0;
		NullCheck((Transformer_1_tCFCF83ED75D84A4CAF67C05C1FC5723F8C6A1045 *)L_0);
		int16_t L_2 = ((  int16_t (*) (Transformer_1_tCFCF83ED75D84A4CAF67C05C1FC5723F8C6A1045 *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_tCFCF83ED75D84A4CAF67C05C1FC5723F8C6A1045 *)L_0, (RuntimeObject *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.Int16>::Cast<System.SByte>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int16_t EnumHelper_1_Cast_TisSByte_t928712DD662DC29BA4FAAE8CE2230AFB23447F0B_mA32F78F64715D5A792832FE03F9750226C847533_gshared (int8_t ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_tBD2E80E7566D74877DA3212B5E8196D9FC0EEE9C * L_0 = ((Caster_1_tDC81706502EDEF8F14A2742E1DDD1BD12751C63D_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		int8_t L_1 = ___value0;
		NullCheck((Transformer_1_tBD2E80E7566D74877DA3212B5E8196D9FC0EEE9C *)L_0);
		int16_t L_2 = ((  int16_t (*) (Transformer_1_tBD2E80E7566D74877DA3212B5E8196D9FC0EEE9C *, int8_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_tBD2E80E7566D74877DA3212B5E8196D9FC0EEE9C *)L_0, (int8_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.Int16>::Cast<System.Single>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int16_t EnumHelper_1_Cast_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_m1971AFF74E0A6846E606CEFC712AEEFFDECA6417_gshared (float ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_tE4654A831E478CF993AC1ECE67A127F7FB1E4A3E * L_0 = ((Caster_1_tDAF7C40F23E3EC6040380D96895B7C2212CEAF5C_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		float L_1 = ___value0;
		NullCheck((Transformer_1_tE4654A831E478CF993AC1ECE67A127F7FB1E4A3E *)L_0);
		int16_t L_2 = ((  int16_t (*) (Transformer_1_tE4654A831E478CF993AC1ECE67A127F7FB1E4A3E *, float, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_tE4654A831E478CF993AC1ECE67A127F7FB1E4A3E *)L_0, (float)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.Int16>::Cast<System.TimeSpan>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int16_t EnumHelper_1_Cast_TisTimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203_m27444BBF6A5CB8E4857A88BCD7BC33CF542B539A_gshared (TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_t3DD73B3138E8429397F66CF88430EE935D8F6A5A * L_0 = ((Caster_1_t26B54EB37145B1A61214BB990A2AE1D20C46AD27_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  L_1 = ___value0;
		NullCheck((Transformer_1_t3DD73B3138E8429397F66CF88430EE935D8F6A5A *)L_0);
		int16_t L_2 = ((  int16_t (*) (Transformer_1_t3DD73B3138E8429397F66CF88430EE935D8F6A5A *, TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_t3DD73B3138E8429397F66CF88430EE935D8F6A5A *)L_0, (TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 )L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.Int16>::Cast<System.UInt16>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int16_t EnumHelper_1_Cast_TisUInt16_t894EA9D4FB7C799B244E7BBF2DF0EEEDBC77A8BD_m7BFD169E863870EC6C6A8347C74B8D7A08CFD7F0_gshared (uint16_t ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_t1F4B4372781FC446330AC8A270A5E4FA8E97E7E0 * L_0 = ((Caster_1_tC25E79DE2B55C003D51235BEEBF18781726EF094_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		uint16_t L_1 = ___value0;
		NullCheck((Transformer_1_t1F4B4372781FC446330AC8A270A5E4FA8E97E7E0 *)L_0);
		int16_t L_2 = ((  int16_t (*) (Transformer_1_t1F4B4372781FC446330AC8A270A5E4FA8E97E7E0 *, uint16_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_t1F4B4372781FC446330AC8A270A5E4FA8E97E7E0 *)L_0, (uint16_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.Int16>::Cast<System.UInt32>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int16_t EnumHelper_1_Cast_TisUInt32_tE60352A06233E4E69DD198BCC67142159F686B15_mF6D651E642C8A0A7C0564BC8CA53082B47B1172F_gshared (uint32_t ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_t1FE24F77113F8F764EB938DC178B4BD87905418D * L_0 = ((Caster_1_tB8ED6E949DD7AB158E8FE36D703C8F6901F95ECB_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		uint32_t L_1 = ___value0;
		NullCheck((Transformer_1_t1FE24F77113F8F764EB938DC178B4BD87905418D *)L_0);
		int16_t L_2 = ((  int16_t (*) (Transformer_1_t1FE24F77113F8F764EB938DC178B4BD87905418D *, uint32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_t1FE24F77113F8F764EB938DC178B4BD87905418D *)L_0, (uint32_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.Int16>::Cast<System.UInt64>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int16_t EnumHelper_1_Cast_TisUInt64_tEC57511B3E3CA2DBA1BEBD434C6983E31C943281_mA2597ABC8C80B890FC5ADE662153CB8FCE95DAC6_gshared (uint64_t ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_tF356827C832FD4AE0C32E65BE1B266E9B6179C89 * L_0 = ((Caster_1_t1429D9BA96F7699397E49F9F7DFE8BA131D36690_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		uint64_t L_1 = ___value0;
		NullCheck((Transformer_1_tF356827C832FD4AE0C32E65BE1B266E9B6179C89 *)L_0);
		int16_t L_2 = ((  int16_t (*) (Transformer_1_tF356827C832FD4AE0C32E65BE1B266E9B6179C89 *, uint64_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_tF356827C832FD4AE0C32E65BE1B266E9B6179C89 *)L_0, (uint64_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.Int16>::Cast<System.UIntPtr>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int16_t EnumHelper_1_Cast_TisUIntPtr_t_m0368A0AADAB2BBDFB4AEAE3F154216478383F5B6_gshared (uintptr_t ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_t304A837732E6FE07B26DAD7E83654774230CB3FB * L_0 = ((Caster_1_t04B4FCAAD6792A3E90C896EC73A365ED6A40BB16_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		uintptr_t L_1 = ___value0;
		NullCheck((Transformer_1_t304A837732E6FE07B26DAD7E83654774230CB3FB *)L_0);
		int16_t L_2 = ((  int16_t (*) (Transformer_1_t304A837732E6FE07B26DAD7E83654774230CB3FB *, uintptr_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_t304A837732E6FE07B26DAD7E83654774230CB3FB *)L_0, (uintptr_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.Int16>::Cast<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int16_t EnumHelper_1_Cast_TisKeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625_m0139EF25B25FEA31F9E3AE76DB8E3CC694517F37_gshared (KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625  ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_t4E5755522485703458E57CE83CF0EC454BDD2A65 * L_0 = ((Caster_1_t71D2A64D437FC4544AFAA49A7886CB0F8A2181BB_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625  L_1 = ___value0;
		NullCheck((Transformer_1_t4E5755522485703458E57CE83CF0EC454BDD2A65 *)L_0);
		int16_t L_2 = ((  int16_t (*) (Transformer_1_t4E5755522485703458E57CE83CF0EC454BDD2A65 *, KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_t4E5755522485703458E57CE83CF0EC454BDD2A65 *)L_0, (KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 )L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.Int32>::Cast<System.Boolean>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t EnumHelper_1_Cast_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_m6DB819561AFB12562EF1AC66F3A4755B307E2240_gshared (bool ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_tBF8C995894CEE8C7A6B676EB123674338F92576B * L_0 = ((Caster_1_t4AC4FAB02EEEA58E1227CC25B4207DB242576F21_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		bool L_1 = ___value0;
		NullCheck((Transformer_1_tBF8C995894CEE8C7A6B676EB123674338F92576B *)L_0);
		int32_t L_2 = ((  int32_t (*) (Transformer_1_tBF8C995894CEE8C7A6B676EB123674338F92576B *, bool, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_tBF8C995894CEE8C7A6B676EB123674338F92576B *)L_0, (bool)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.Int32>::Cast<System.Byte>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t EnumHelper_1_Cast_TisByte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_mEB2DDCD583A26E2713008941D3E4014E15C6A1A1_gshared (uint8_t ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_t01B518FF127F164CE97FA8EC16EEFCACA57EDDA1 * L_0 = ((Caster_1_t81CB7C813BA62407F73AC8CD5519E2489E8AC560_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		uint8_t L_1 = ___value0;
		NullCheck((Transformer_1_t01B518FF127F164CE97FA8EC16EEFCACA57EDDA1 *)L_0);
		int32_t L_2 = ((  int32_t (*) (Transformer_1_t01B518FF127F164CE97FA8EC16EEFCACA57EDDA1 *, uint8_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_t01B518FF127F164CE97FA8EC16EEFCACA57EDDA1 *)L_0, (uint8_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.Int32>::Cast<System.Char>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t EnumHelper_1_Cast_TisChar_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_mA1210183E09A0AFA10C5328727AA51281C4BA395_gshared (Il2CppChar ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_tC16A37EE6FCC90F34784D3F3F1AEFE0FD27AFB5E * L_0 = ((Caster_1_t7E18CFA246A94CA41CB928FFB3CFF155F9040294_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		Il2CppChar L_1 = ___value0;
		NullCheck((Transformer_1_tC16A37EE6FCC90F34784D3F3F1AEFE0FD27AFB5E *)L_0);
		int32_t L_2 = ((  int32_t (*) (Transformer_1_tC16A37EE6FCC90F34784D3F3F1AEFE0FD27AFB5E *, Il2CppChar, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_tC16A37EE6FCC90F34784D3F3F1AEFE0FD27AFB5E *)L_0, (Il2CppChar)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.Int32>::Cast<System.DateTime>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t EnumHelper_1_Cast_TisDateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_m33533A21BBA431195228CF1A0439CE90AFAF48D3_gshared (DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_t328F2E76FF0B5E491B8CAF2EA380EBC4EB59B3F5 * L_0 = ((Caster_1_tD833AB38E756CEA71E0D1B2CA33C6891D1888D8E_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  L_1 = ___value0;
		NullCheck((Transformer_1_t328F2E76FF0B5E491B8CAF2EA380EBC4EB59B3F5 *)L_0);
		int32_t L_2 = ((  int32_t (*) (Transformer_1_t328F2E76FF0B5E491B8CAF2EA380EBC4EB59B3F5 *, DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_t328F2E76FF0B5E491B8CAF2EA380EBC4EB59B3F5 *)L_0, (DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 )L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.Int32>::Cast<System.DateTimeOffset>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t EnumHelper_1_Cast_TisDateTimeOffset_t205B59B1EFB6646DCE3CC50553377BF6023615B5_mE1BB181FF48BA0D6FACD1A408B586E6CB7752B2F_gshared (DateTimeOffset_t205B59B1EFB6646DCE3CC50553377BF6023615B5  ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_tCC180A1514B9EE5AC13DD30B6C50FA5A7FEDB57E * L_0 = ((Caster_1_t5DE1C65B929D772ABEAD922217249AE5434F90B5_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		DateTimeOffset_t205B59B1EFB6646DCE3CC50553377BF6023615B5  L_1 = ___value0;
		NullCheck((Transformer_1_tCC180A1514B9EE5AC13DD30B6C50FA5A7FEDB57E *)L_0);
		int32_t L_2 = ((  int32_t (*) (Transformer_1_tCC180A1514B9EE5AC13DD30B6C50FA5A7FEDB57E *, DateTimeOffset_t205B59B1EFB6646DCE3CC50553377BF6023615B5 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_tCC180A1514B9EE5AC13DD30B6C50FA5A7FEDB57E *)L_0, (DateTimeOffset_t205B59B1EFB6646DCE3CC50553377BF6023615B5 )L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.Int32>::Cast<System.Decimal>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t EnumHelper_1_Cast_TisDecimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7_mE109EA89910558BC8F998BD5D922FBC6CE47EB42_gshared (Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_t9DA6EF3090A9A84BFB452303F6D54693ED562B8D * L_0 = ((Caster_1_t28CE25E0B5F9395712639641A884283578320BE9_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  L_1 = ___value0;
		NullCheck((Transformer_1_t9DA6EF3090A9A84BFB452303F6D54693ED562B8D *)L_0);
		int32_t L_2 = ((  int32_t (*) (Transformer_1_t9DA6EF3090A9A84BFB452303F6D54693ED562B8D *, Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_t9DA6EF3090A9A84BFB452303F6D54693ED562B8D *)L_0, (Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7 )L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.Int32>::Cast<System.Double>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t EnumHelper_1_Cast_TisDouble_t42821932CB52DE2057E685D0E1AF3DE5033D2181_m7F87BC8B0D58F55273F9B296C99A881700244A9B_gshared (double ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_t8A94E5D9EB877C6FC400168B14AF35D33EAC1927 * L_0 = ((Caster_1_t75EAF0B25B1D78A6F0CE986103E85AEF19D32077_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		double L_1 = ___value0;
		NullCheck((Transformer_1_t8A94E5D9EB877C6FC400168B14AF35D33EAC1927 *)L_0);
		int32_t L_2 = ((  int32_t (*) (Transformer_1_t8A94E5D9EB877C6FC400168B14AF35D33EAC1927 *, double, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_t8A94E5D9EB877C6FC400168B14AF35D33EAC1927 *)L_0, (double)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.Int32>::Cast<System.Diagnostics.Tracing.EmptyStruct>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t EnumHelper_1_Cast_TisEmptyStruct_t4261C00C8DDCEA2FE01A2264519DDB55BA275F62_m00E1D8493A67E66055D3BC859F3B34D473886D1A_gshared (EmptyStruct_t4261C00C8DDCEA2FE01A2264519DDB55BA275F62  ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_t2E9D74696B8E5C5EB6BBCDC6CE43D2DEE3F09D96 * L_0 = ((Caster_1_tD991ABD4C10A22CA292289253C124B08646531E9_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		EmptyStruct_t4261C00C8DDCEA2FE01A2264519DDB55BA275F62  L_1 = ___value0;
		NullCheck((Transformer_1_t2E9D74696B8E5C5EB6BBCDC6CE43D2DEE3F09D96 *)L_0);
		int32_t L_2 = ((  int32_t (*) (Transformer_1_t2E9D74696B8E5C5EB6BBCDC6CE43D2DEE3F09D96 *, EmptyStruct_t4261C00C8DDCEA2FE01A2264519DDB55BA275F62 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_t2E9D74696B8E5C5EB6BBCDC6CE43D2DEE3F09D96 *)L_0, (EmptyStruct_t4261C00C8DDCEA2FE01A2264519DDB55BA275F62 )L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.Int32>::Cast<System.Guid>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t EnumHelper_1_Cast_TisGuid_t_mB286A505F6479AA0C59C80724A98F05CC5BD0323_gshared (Guid_t  ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_t3D5DF6751A5C0D60CF6F2B25C575C87B052B5A09 * L_0 = ((Caster_1_t570603B5E72059BEF54C343789566B033E0BC81F_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		Guid_t  L_1 = ___value0;
		NullCheck((Transformer_1_t3D5DF6751A5C0D60CF6F2B25C575C87B052B5A09 *)L_0);
		int32_t L_2 = ((  int32_t (*) (Transformer_1_t3D5DF6751A5C0D60CF6F2B25C575C87B052B5A09 *, Guid_t , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_t3D5DF6751A5C0D60CF6F2B25C575C87B052B5A09 *)L_0, (Guid_t )L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.Int32>::Cast<System.Int16>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t EnumHelper_1_Cast_TisInt16_tD0F031114106263BB459DA1F099FF9F42691295A_m41C3A8662ADD077AE3D839A937E1CCAAF6E466AC_gshared (int16_t ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_t99F6F9B70C5895106F3A5DB68D4B296689F8B067 * L_0 = ((Caster_1_t5E7364B68A513E014F7C7BE9ADBAF37EF3F005F3_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		int16_t L_1 = ___value0;
		NullCheck((Transformer_1_t99F6F9B70C5895106F3A5DB68D4B296689F8B067 *)L_0);
		int32_t L_2 = ((  int32_t (*) (Transformer_1_t99F6F9B70C5895106F3A5DB68D4B296689F8B067 *, int16_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_t99F6F9B70C5895106F3A5DB68D4B296689F8B067 *)L_0, (int16_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.Int32>::Cast<System.Int32>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t EnumHelper_1_Cast_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m709F6C7F8590C74492D4ABCA352094FF41FB10A9_gshared (int32_t ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_tA81CCAAE8973F628B7A145877B4062C5A6476EBA * L_0 = ((Caster_1_t16B97B89A5E2AFAA2F23D6835CAC8D09AD8321BF_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		int32_t L_1 = ___value0;
		NullCheck((Transformer_1_tA81CCAAE8973F628B7A145877B4062C5A6476EBA *)L_0);
		int32_t L_2 = ((  int32_t (*) (Transformer_1_tA81CCAAE8973F628B7A145877B4062C5A6476EBA *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_tA81CCAAE8973F628B7A145877B4062C5A6476EBA *)L_0, (int32_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.Int32>::Cast<System.Int64>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t EnumHelper_1_Cast_TisInt64_t378EE0D608BD3107E77238E85F30D2BBD46981F3_mE191BA78BF62CC70C045AB78423D91369A600C55_gshared (int64_t ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_t02AD560B0C76565668CD783B3106FF62B8B84B6A * L_0 = ((Caster_1_t8FE124A275CD1D6FB67CEB3CE133803C71D0DC23_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		int64_t L_1 = ___value0;
		NullCheck((Transformer_1_t02AD560B0C76565668CD783B3106FF62B8B84B6A *)L_0);
		int32_t L_2 = ((  int32_t (*) (Transformer_1_t02AD560B0C76565668CD783B3106FF62B8B84B6A *, int64_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_t02AD560B0C76565668CD783B3106FF62B8B84B6A *)L_0, (int64_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.Int32>::Cast<System.IntPtr>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t EnumHelper_1_Cast_TisIntPtr_t_m874909D7F866DB736BC465E575D5E4B392470DAE_gshared (intptr_t ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_tF4E5AD75B7C97D1E146A64FE337106FD89C6F9A1 * L_0 = ((Caster_1_tA5FAEEF004E4BE07EBB15208BE2E74CEB2CAE96F_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		intptr_t L_1 = ___value0;
		NullCheck((Transformer_1_tF4E5AD75B7C97D1E146A64FE337106FD89C6F9A1 *)L_0);
		int32_t L_2 = ((  int32_t (*) (Transformer_1_tF4E5AD75B7C97D1E146A64FE337106FD89C6F9A1 *, intptr_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_tF4E5AD75B7C97D1E146A64FE337106FD89C6F9A1 *)L_0, (intptr_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.Int32>::Cast<System.Object>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t EnumHelper_1_Cast_TisRuntimeObject_mB191225B126500EA2C9932C3DB51E29301927C54_gshared (RuntimeObject * ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_t8127E59A1665321B73B90EA261FA4C751848C9A9 * L_0 = ((Caster_1_t92052BF2CFF2EDED4ADB9A83AD65BDA995BBA7C0_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		RuntimeObject * L_1 = ___value0;
		NullCheck((Transformer_1_t8127E59A1665321B73B90EA261FA4C751848C9A9 *)L_0);
		int32_t L_2 = ((  int32_t (*) (Transformer_1_t8127E59A1665321B73B90EA261FA4C751848C9A9 *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_t8127E59A1665321B73B90EA261FA4C751848C9A9 *)L_0, (RuntimeObject *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.Int32>::Cast<System.SByte>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t EnumHelper_1_Cast_TisSByte_t928712DD662DC29BA4FAAE8CE2230AFB23447F0B_mFA304950A18FB5CF34593ABFABB3FD6F5E935D82_gshared (int8_t ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_tBCB35269B242493E2D4A887CFFE7A61731CBEF5A * L_0 = ((Caster_1_tC8E3D988751FF2A00C122855C1A6D761D425AA78_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		int8_t L_1 = ___value0;
		NullCheck((Transformer_1_tBCB35269B242493E2D4A887CFFE7A61731CBEF5A *)L_0);
		int32_t L_2 = ((  int32_t (*) (Transformer_1_tBCB35269B242493E2D4A887CFFE7A61731CBEF5A *, int8_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_tBCB35269B242493E2D4A887CFFE7A61731CBEF5A *)L_0, (int8_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.Int32>::Cast<System.Single>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t EnumHelper_1_Cast_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_m7E2875F1A1BEDB4AE945DE17D621CD9F8142389E_gshared (float ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_t3D59790A1C59CD6C9FB82446360BCF4333BDA0C0 * L_0 = ((Caster_1_t504D47BCCE5ADEBF8882184FF715CB68AC4B5051_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		float L_1 = ___value0;
		NullCheck((Transformer_1_t3D59790A1C59CD6C9FB82446360BCF4333BDA0C0 *)L_0);
		int32_t L_2 = ((  int32_t (*) (Transformer_1_t3D59790A1C59CD6C9FB82446360BCF4333BDA0C0 *, float, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_t3D59790A1C59CD6C9FB82446360BCF4333BDA0C0 *)L_0, (float)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.Int32>::Cast<System.TimeSpan>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t EnumHelper_1_Cast_TisTimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203_mD49FD3921EFAF7BE65007D663777EDADB3171DF0_gshared (TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_t03D55FED65D94DBAED862349A37D45E92B20C2BD * L_0 = ((Caster_1_t6163D9A5112744E950CFB66A2DF592E366052B6B_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  L_1 = ___value0;
		NullCheck((Transformer_1_t03D55FED65D94DBAED862349A37D45E92B20C2BD *)L_0);
		int32_t L_2 = ((  int32_t (*) (Transformer_1_t03D55FED65D94DBAED862349A37D45E92B20C2BD *, TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_t03D55FED65D94DBAED862349A37D45E92B20C2BD *)L_0, (TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 )L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.Int32>::Cast<System.UInt16>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t EnumHelper_1_Cast_TisUInt16_t894EA9D4FB7C799B244E7BBF2DF0EEEDBC77A8BD_mB3C2E4ED43FA29B7C228C9D816109A41131F0EDC_gshared (uint16_t ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_t0BE87D3995F2502A8304E6BB9D2ECEBC3642A047 * L_0 = ((Caster_1_t39D7EAE606D7415D8EB470D832481BF8AB270361_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		uint16_t L_1 = ___value0;
		NullCheck((Transformer_1_t0BE87D3995F2502A8304E6BB9D2ECEBC3642A047 *)L_0);
		int32_t L_2 = ((  int32_t (*) (Transformer_1_t0BE87D3995F2502A8304E6BB9D2ECEBC3642A047 *, uint16_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_t0BE87D3995F2502A8304E6BB9D2ECEBC3642A047 *)L_0, (uint16_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.Int32>::Cast<System.UInt32>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t EnumHelper_1_Cast_TisUInt32_tE60352A06233E4E69DD198BCC67142159F686B15_mCDD7A9FF411400C6BB2C951C4AB5C9BD4FB432F6_gshared (uint32_t ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_t61E0325EA41D08B9CBD542F1FD5575B3AE521EF9 * L_0 = ((Caster_1_t7EDD1567547221FF0FB7EC955F24924ABC7A84E7_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		uint32_t L_1 = ___value0;
		NullCheck((Transformer_1_t61E0325EA41D08B9CBD542F1FD5575B3AE521EF9 *)L_0);
		int32_t L_2 = ((  int32_t (*) (Transformer_1_t61E0325EA41D08B9CBD542F1FD5575B3AE521EF9 *, uint32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_t61E0325EA41D08B9CBD542F1FD5575B3AE521EF9 *)L_0, (uint32_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.Int32>::Cast<System.UInt64>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t EnumHelper_1_Cast_TisUInt64_tEC57511B3E3CA2DBA1BEBD434C6983E31C943281_m6CDC9BDA0F13678DFC179D2097F26B22B794D7BD_gshared (uint64_t ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_t0E6E26122494478302E7A49E89B2996EF405CD94 * L_0 = ((Caster_1_t6DF262FAAE38A5B0B306577088BDA059ECCC9F65_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		uint64_t L_1 = ___value0;
		NullCheck((Transformer_1_t0E6E26122494478302E7A49E89B2996EF405CD94 *)L_0);
		int32_t L_2 = ((  int32_t (*) (Transformer_1_t0E6E26122494478302E7A49E89B2996EF405CD94 *, uint64_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_t0E6E26122494478302E7A49E89B2996EF405CD94 *)L_0, (uint64_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.Int32>::Cast<System.UIntPtr>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t EnumHelper_1_Cast_TisUIntPtr_t_m2859048A976999F6838B1B91CF4B9152C642CB0A_gshared (uintptr_t ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_t97F7D34BC6D17120EA3004D49E37A6C5ED7F4A2D * L_0 = ((Caster_1_tB613C28BF5CDACEDED37873D181F3D877FAA0BD4_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		uintptr_t L_1 = ___value0;
		NullCheck((Transformer_1_t97F7D34BC6D17120EA3004D49E37A6C5ED7F4A2D *)L_0);
		int32_t L_2 = ((  int32_t (*) (Transformer_1_t97F7D34BC6D17120EA3004D49E37A6C5ED7F4A2D *, uintptr_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_t97F7D34BC6D17120EA3004D49E37A6C5ED7F4A2D *)L_0, (uintptr_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.Int32>::Cast<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t EnumHelper_1_Cast_TisKeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625_mD9797F5564D912D5A0493BA40992356886C051FA_gshared (KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625  ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_t93586EBFA51523F443E1EC8D4A94AE26E174F019 * L_0 = ((Caster_1_t86EA30280ADC42FFD1F18CD72B5FC235DA9A151C_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625  L_1 = ___value0;
		NullCheck((Transformer_1_t93586EBFA51523F443E1EC8D4A94AE26E174F019 *)L_0);
		int32_t L_2 = ((  int32_t (*) (Transformer_1_t93586EBFA51523F443E1EC8D4A94AE26E174F019 *, KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_t93586EBFA51523F443E1EC8D4A94AE26E174F019 *)L_0, (KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 )L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.Int64>::Cast<System.Boolean>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t EnumHelper_1_Cast_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_mAE787C874775A1CD6399BCB45D4087EC47F06D76_gshared (bool ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_t476AB6D35C259B3EC718080C147176597C25CD89 * L_0 = ((Caster_1_t19DD5895960BB8EC09D9AC747742D0BF3CA768C7_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		bool L_1 = ___value0;
		NullCheck((Transformer_1_t476AB6D35C259B3EC718080C147176597C25CD89 *)L_0);
		int64_t L_2 = ((  int64_t (*) (Transformer_1_t476AB6D35C259B3EC718080C147176597C25CD89 *, bool, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_t476AB6D35C259B3EC718080C147176597C25CD89 *)L_0, (bool)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.Int64>::Cast<System.Byte>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t EnumHelper_1_Cast_TisByte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_m0B39BB8F16C52DD328EC7BA315DD0AB010E35A68_gshared (uint8_t ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_t91E959A6CAE1BE68AA170F06A153ADE1A7389266 * L_0 = ((Caster_1_t4D2FC6AFBE9836A3564F2FC128F3C56FAD32C319_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		uint8_t L_1 = ___value0;
		NullCheck((Transformer_1_t91E959A6CAE1BE68AA170F06A153ADE1A7389266 *)L_0);
		int64_t L_2 = ((  int64_t (*) (Transformer_1_t91E959A6CAE1BE68AA170F06A153ADE1A7389266 *, uint8_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_t91E959A6CAE1BE68AA170F06A153ADE1A7389266 *)L_0, (uint8_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.Int64>::Cast<System.Char>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t EnumHelper_1_Cast_TisChar_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_m14A93DB68E00FD070436FEB5C10022AF04A10C13_gshared (Il2CppChar ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_tCF44E9940C3311C437EEEA20B8323BA248FFDC1C * L_0 = ((Caster_1_tCC175D3B74CC958ABF7CB37AFF02E72B4030E7DF_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		Il2CppChar L_1 = ___value0;
		NullCheck((Transformer_1_tCF44E9940C3311C437EEEA20B8323BA248FFDC1C *)L_0);
		int64_t L_2 = ((  int64_t (*) (Transformer_1_tCF44E9940C3311C437EEEA20B8323BA248FFDC1C *, Il2CppChar, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_tCF44E9940C3311C437EEEA20B8323BA248FFDC1C *)L_0, (Il2CppChar)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.Int64>::Cast<System.DateTime>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t EnumHelper_1_Cast_TisDateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_mAE2A0A3C41349F632335EAC7083F21A6918EBC1B_gshared (DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_tEC949466F60165355AE9D6DD91FCE5D3BA94B31C * L_0 = ((Caster_1_t13A47AE7E758FC72624048C0ACDCDFBBEA080342_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  L_1 = ___value0;
		NullCheck((Transformer_1_tEC949466F60165355AE9D6DD91FCE5D3BA94B31C *)L_0);
		int64_t L_2 = ((  int64_t (*) (Transformer_1_tEC949466F60165355AE9D6DD91FCE5D3BA94B31C *, DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_tEC949466F60165355AE9D6DD91FCE5D3BA94B31C *)L_0, (DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 )L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.Int64>::Cast<System.DateTimeOffset>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t EnumHelper_1_Cast_TisDateTimeOffset_t205B59B1EFB6646DCE3CC50553377BF6023615B5_m29903C054B00DC33B5651645D769377EB380FC1A_gshared (DateTimeOffset_t205B59B1EFB6646DCE3CC50553377BF6023615B5  ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_tAB7D785D4627FF77BCA35F5697866F93058D17A1 * L_0 = ((Caster_1_t25DC0B4053C2D75C10FFAEF4AD7F2AD7ED4219EC_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		DateTimeOffset_t205B59B1EFB6646DCE3CC50553377BF6023615B5  L_1 = ___value0;
		NullCheck((Transformer_1_tAB7D785D4627FF77BCA35F5697866F93058D17A1 *)L_0);
		int64_t L_2 = ((  int64_t (*) (Transformer_1_tAB7D785D4627FF77BCA35F5697866F93058D17A1 *, DateTimeOffset_t205B59B1EFB6646DCE3CC50553377BF6023615B5 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_tAB7D785D4627FF77BCA35F5697866F93058D17A1 *)L_0, (DateTimeOffset_t205B59B1EFB6646DCE3CC50553377BF6023615B5 )L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.Int64>::Cast<System.Decimal>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t EnumHelper_1_Cast_TisDecimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7_m1EEB3F0A62293440FB031F587CB8BA1F44D4F5B5_gshared (Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_t5811E5E5AC2445E17746DB0CF9B97CE68CBF8CC3 * L_0 = ((Caster_1_tD3FD442F9868C39046AA05D510EA34B45C4C6FAC_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  L_1 = ___value0;
		NullCheck((Transformer_1_t5811E5E5AC2445E17746DB0CF9B97CE68CBF8CC3 *)L_0);
		int64_t L_2 = ((  int64_t (*) (Transformer_1_t5811E5E5AC2445E17746DB0CF9B97CE68CBF8CC3 *, Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_t5811E5E5AC2445E17746DB0CF9B97CE68CBF8CC3 *)L_0, (Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7 )L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.Int64>::Cast<System.Double>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t EnumHelper_1_Cast_TisDouble_t42821932CB52DE2057E685D0E1AF3DE5033D2181_m8FD38CDE165E4308257AA5D2BADEE086EA8FF7DD_gshared (double ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_t96AA8665F22CF995BA6679B469328CAF084C63B1 * L_0 = ((Caster_1_t8ACEA5F28CE61D34A51E109E4B6CA3F90E83E43D_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		double L_1 = ___value0;
		NullCheck((Transformer_1_t96AA8665F22CF995BA6679B469328CAF084C63B1 *)L_0);
		int64_t L_2 = ((  int64_t (*) (Transformer_1_t96AA8665F22CF995BA6679B469328CAF084C63B1 *, double, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_t96AA8665F22CF995BA6679B469328CAF084C63B1 *)L_0, (double)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.Int64>::Cast<System.Diagnostics.Tracing.EmptyStruct>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t EnumHelper_1_Cast_TisEmptyStruct_t4261C00C8DDCEA2FE01A2264519DDB55BA275F62_m982A3F3862A1AF08E743C3D2BB99A21DDAAE254B_gshared (EmptyStruct_t4261C00C8DDCEA2FE01A2264519DDB55BA275F62  ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_t769FB5C7E8D2DCBC58B48600F5E170AC9CF87E47 * L_0 = ((Caster_1_tE52CC2717F8A79278819713E060B94356D02A723_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		EmptyStruct_t4261C00C8DDCEA2FE01A2264519DDB55BA275F62  L_1 = ___value0;
		NullCheck((Transformer_1_t769FB5C7E8D2DCBC58B48600F5E170AC9CF87E47 *)L_0);
		int64_t L_2 = ((  int64_t (*) (Transformer_1_t769FB5C7E8D2DCBC58B48600F5E170AC9CF87E47 *, EmptyStruct_t4261C00C8DDCEA2FE01A2264519DDB55BA275F62 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_t769FB5C7E8D2DCBC58B48600F5E170AC9CF87E47 *)L_0, (EmptyStruct_t4261C00C8DDCEA2FE01A2264519DDB55BA275F62 )L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.Int64>::Cast<System.Guid>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t EnumHelper_1_Cast_TisGuid_t_m0985B8E4723751D35FE6C17A70DAB8406F7B43FF_gshared (Guid_t  ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_t7D25ED7E6618ACBCFDD309E39C5660C035ADDAF9 * L_0 = ((Caster_1_t1036147CC663C4B4CDDA191F9303A95AD081F0D2_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		Guid_t  L_1 = ___value0;
		NullCheck((Transformer_1_t7D25ED7E6618ACBCFDD309E39C5660C035ADDAF9 *)L_0);
		int64_t L_2 = ((  int64_t (*) (Transformer_1_t7D25ED7E6618ACBCFDD309E39C5660C035ADDAF9 *, Guid_t , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_t7D25ED7E6618ACBCFDD309E39C5660C035ADDAF9 *)L_0, (Guid_t )L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.Int64>::Cast<System.Int16>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t EnumHelper_1_Cast_TisInt16_tD0F031114106263BB459DA1F099FF9F42691295A_m6962AF48FC976E22145C8A2B06BF1290AFFCEAEA_gshared (int16_t ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_t76BFF54E0F2CF5011E1567A7D589E72FFBE618B1 * L_0 = ((Caster_1_t024FFC25440726A8B80C0910742A3E7CB54E2C35_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		int16_t L_1 = ___value0;
		NullCheck((Transformer_1_t76BFF54E0F2CF5011E1567A7D589E72FFBE618B1 *)L_0);
		int64_t L_2 = ((  int64_t (*) (Transformer_1_t76BFF54E0F2CF5011E1567A7D589E72FFBE618B1 *, int16_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_t76BFF54E0F2CF5011E1567A7D589E72FFBE618B1 *)L_0, (int16_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.Int64>::Cast<System.Int32>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t EnumHelper_1_Cast_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m04B9A456D01549992BDB33CE742CF682943DC437_gshared (int32_t ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_tDD4BC5BF267EC2F5EC1E9BA3AEC66A3C4562E3E1 * L_0 = ((Caster_1_t70C4789E193DDF1EE8FF1EAE7B23AA698374F2BC_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		int32_t L_1 = ___value0;
		NullCheck((Transformer_1_tDD4BC5BF267EC2F5EC1E9BA3AEC66A3C4562E3E1 *)L_0);
		int64_t L_2 = ((  int64_t (*) (Transformer_1_tDD4BC5BF267EC2F5EC1E9BA3AEC66A3C4562E3E1 *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_tDD4BC5BF267EC2F5EC1E9BA3AEC66A3C4562E3E1 *)L_0, (int32_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.Int64>::Cast<System.Int64>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t EnumHelper_1_Cast_TisInt64_t378EE0D608BD3107E77238E85F30D2BBD46981F3_m0D66A12461CBC9C3C74CB61D1331FA36AC1BE307_gshared (int64_t ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_t83D9EC4265AFBEA40FED539672672E87659FABFC * L_0 = ((Caster_1_tDF3C56EF05C9C323E1699967C09C7B95572DB884_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		int64_t L_1 = ___value0;
		NullCheck((Transformer_1_t83D9EC4265AFBEA40FED539672672E87659FABFC *)L_0);
		int64_t L_2 = ((  int64_t (*) (Transformer_1_t83D9EC4265AFBEA40FED539672672E87659FABFC *, int64_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_t83D9EC4265AFBEA40FED539672672E87659FABFC *)L_0, (int64_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.Int64>::Cast<System.IntPtr>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t EnumHelper_1_Cast_TisIntPtr_t_mB614C1F3DD7D3D0BB19B7ED33229392502B6F661_gshared (intptr_t ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_tF9DEED24B755F01B6D5F383025E5382EC04380A1 * L_0 = ((Caster_1_tC1BEAAED563F601D1AB34FA885D4DC73B0593A01_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		intptr_t L_1 = ___value0;
		NullCheck((Transformer_1_tF9DEED24B755F01B6D5F383025E5382EC04380A1 *)L_0);
		int64_t L_2 = ((  int64_t (*) (Transformer_1_tF9DEED24B755F01B6D5F383025E5382EC04380A1 *, intptr_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_tF9DEED24B755F01B6D5F383025E5382EC04380A1 *)L_0, (intptr_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.Int64>::Cast<System.Object>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t EnumHelper_1_Cast_TisRuntimeObject_m0135BD3FC77B6223FCE0955929BFC6A8623F83FC_gshared (RuntimeObject * ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_tE0DFCD89E6241E5DE4719BAD8464FF514BF41CD0 * L_0 = ((Caster_1_t9827C62922CE67B63670F7E395C36604B3284B82_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		RuntimeObject * L_1 = ___value0;
		NullCheck((Transformer_1_tE0DFCD89E6241E5DE4719BAD8464FF514BF41CD0 *)L_0);
		int64_t L_2 = ((  int64_t (*) (Transformer_1_tE0DFCD89E6241E5DE4719BAD8464FF514BF41CD0 *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_tE0DFCD89E6241E5DE4719BAD8464FF514BF41CD0 *)L_0, (RuntimeObject *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.Int64>::Cast<System.SByte>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t EnumHelper_1_Cast_TisSByte_t928712DD662DC29BA4FAAE8CE2230AFB23447F0B_mAEC424919D7FF23A610AD689137CC2E4EBB2601E_gshared (int8_t ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_tF270241457E8F58BCBFE4A849CEBA0C960D8D171 * L_0 = ((Caster_1_tBE68CFB112A68FF8E1439A6D50611D57D2B78929_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		int8_t L_1 = ___value0;
		NullCheck((Transformer_1_tF270241457E8F58BCBFE4A849CEBA0C960D8D171 *)L_0);
		int64_t L_2 = ((  int64_t (*) (Transformer_1_tF270241457E8F58BCBFE4A849CEBA0C960D8D171 *, int8_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_tF270241457E8F58BCBFE4A849CEBA0C960D8D171 *)L_0, (int8_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.Int64>::Cast<System.Single>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t EnumHelper_1_Cast_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_mB1E90BDDA4926F745B21DE0871A726BC7308C53F_gshared (float ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_t6303836C3ECC8993FF939539541E971A88D0043C * L_0 = ((Caster_1_tA96AB66BC3B680A41161A539CA7A0D45E183A207_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		float L_1 = ___value0;
		NullCheck((Transformer_1_t6303836C3ECC8993FF939539541E971A88D0043C *)L_0);
		int64_t L_2 = ((  int64_t (*) (Transformer_1_t6303836C3ECC8993FF939539541E971A88D0043C *, float, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_t6303836C3ECC8993FF939539541E971A88D0043C *)L_0, (float)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.Int64>::Cast<System.TimeSpan>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t EnumHelper_1_Cast_TisTimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203_m8192CECEAB9DB05D4354D707FF88FCE8C9800159_gshared (TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_t91E5C13BDFE80888281C2A892214239458BD8862 * L_0 = ((Caster_1_t12C78E087522A8854105EA56B1656FA396D7D4F4_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  L_1 = ___value0;
		NullCheck((Transformer_1_t91E5C13BDFE80888281C2A892214239458BD8862 *)L_0);
		int64_t L_2 = ((  int64_t (*) (Transformer_1_t91E5C13BDFE80888281C2A892214239458BD8862 *, TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_t91E5C13BDFE80888281C2A892214239458BD8862 *)L_0, (TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 )L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.Int64>::Cast<System.UInt16>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t EnumHelper_1_Cast_TisUInt16_t894EA9D4FB7C799B244E7BBF2DF0EEEDBC77A8BD_m8AF5181D04F45A3BE92DC37B2CAC1EBDCFBF3636_gshared (uint16_t ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_t5523D607097D1283F94D8980CF88A23585DA5383 * L_0 = ((Caster_1_tB27660B38359B950168ADEF98D7C792A423A211A_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		uint16_t L_1 = ___value0;
		NullCheck((Transformer_1_t5523D607097D1283F94D8980CF88A23585DA5383 *)L_0);
		int64_t L_2 = ((  int64_t (*) (Transformer_1_t5523D607097D1283F94D8980CF88A23585DA5383 *, uint16_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_t5523D607097D1283F94D8980CF88A23585DA5383 *)L_0, (uint16_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.Int64>::Cast<System.UInt32>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t EnumHelper_1_Cast_TisUInt32_tE60352A06233E4E69DD198BCC67142159F686B15_m4D81BA705A73895E1FDA1CC263946D100415E2C5_gshared (uint32_t ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_t2084433FA6FC68D6B72E5E5F89F08F24C224F90E * L_0 = ((Caster_1_tD4099ACC173F871B13EFCBBAEF67B0998F1AF043_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		uint32_t L_1 = ___value0;
		NullCheck((Transformer_1_t2084433FA6FC68D6B72E5E5F89F08F24C224F90E *)L_0);
		int64_t L_2 = ((  int64_t (*) (Transformer_1_t2084433FA6FC68D6B72E5E5F89F08F24C224F90E *, uint32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_t2084433FA6FC68D6B72E5E5F89F08F24C224F90E *)L_0, (uint32_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.Int64>::Cast<System.UInt64>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t EnumHelper_1_Cast_TisUInt64_tEC57511B3E3CA2DBA1BEBD434C6983E31C943281_m60C2279A8101E03B449F13BCE0E4475288B6155F_gshared (uint64_t ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_t2BC22C910E6F570EFD4A102BDDA4364EE856DF48 * L_0 = ((Caster_1_t1E7F2BFA620BFA6B4D131AF0754217C21DC3DC76_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		uint64_t L_1 = ___value0;
		NullCheck((Transformer_1_t2BC22C910E6F570EFD4A102BDDA4364EE856DF48 *)L_0);
		int64_t L_2 = ((  int64_t (*) (Transformer_1_t2BC22C910E6F570EFD4A102BDDA4364EE856DF48 *, uint64_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_t2BC22C910E6F570EFD4A102BDDA4364EE856DF48 *)L_0, (uint64_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.Int64>::Cast<System.UIntPtr>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t EnumHelper_1_Cast_TisUIntPtr_t_mF137C9F6315B3927905CBACFF07F9EA8CA63714E_gshared (uintptr_t ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_t1CA2AE91638C38BA8D1DC27612CA13ED6A654E05 * L_0 = ((Caster_1_t8D66EB4609DD0809802358A5F2C34FF083CC9E95_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		uintptr_t L_1 = ___value0;
		NullCheck((Transformer_1_t1CA2AE91638C38BA8D1DC27612CA13ED6A654E05 *)L_0);
		int64_t L_2 = ((  int64_t (*) (Transformer_1_t1CA2AE91638C38BA8D1DC27612CA13ED6A654E05 *, uintptr_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_t1CA2AE91638C38BA8D1DC27612CA13ED6A654E05 *)L_0, (uintptr_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.Int64>::Cast<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t EnumHelper_1_Cast_TisKeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625_mA2E21EEC7983078681333B7D3347C3F83E2E616D_gshared (KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625  ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_t65360D5FC768CB17A9F463BAA4830584F51CC070 * L_0 = ((Caster_1_tDEB8E64C292126E69D8045806810D8AE28F4380F_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625  L_1 = ___value0;
		NullCheck((Transformer_1_t65360D5FC768CB17A9F463BAA4830584F51CC070 *)L_0);
		int64_t L_2 = ((  int64_t (*) (Transformer_1_t65360D5FC768CB17A9F463BAA4830584F51CC070 *, KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_t65360D5FC768CB17A9F463BAA4830584F51CC070 *)L_0, (KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 )L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.Object>::Cast<System.Object>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * EnumHelper_1_Cast_TisRuntimeObject_mF1BB354F76B6D5CC2972B5C756B45AFFBD86FC35_gshared (RuntimeObject * ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_t5A30C1F1369A1F88C4E1270DCDC0988926509061 * L_0 = ((Caster_1_tC3972B33B78D374E68B197BFBA0F750AC728CE0B_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		RuntimeObject * L_1 = ___value0;
		NullCheck((Transformer_1_t5A30C1F1369A1F88C4E1270DCDC0988926509061 *)L_0);
		RuntimeObject * L_2 = ((  RuntimeObject * (*) (Transformer_1_t5A30C1F1369A1F88C4E1270DCDC0988926509061 *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_t5A30C1F1369A1F88C4E1270DCDC0988926509061 *)L_0, (RuntimeObject *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.SByte>::Cast<System.Boolean>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int8_t EnumHelper_1_Cast_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_m723C68A15D9450A8E76EB9DD53F2D195FA73E0E6_gshared (bool ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_tD2FABFE8EEEB95BE98B3D75EDB8F87E1E19F7D6D * L_0 = ((Caster_1_t1BD4C60F02C5F8490B8F0C8D66C1E7AB72398982_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		bool L_1 = ___value0;
		NullCheck((Transformer_1_tD2FABFE8EEEB95BE98B3D75EDB8F87E1E19F7D6D *)L_0);
		int8_t L_2 = ((  int8_t (*) (Transformer_1_tD2FABFE8EEEB95BE98B3D75EDB8F87E1E19F7D6D *, bool, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_tD2FABFE8EEEB95BE98B3D75EDB8F87E1E19F7D6D *)L_0, (bool)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.SByte>::Cast<System.Byte>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int8_t EnumHelper_1_Cast_TisByte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_m716490B18241E6B8B6A39197A57BE1194EC2B875_gshared (uint8_t ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_t6C8811E6F600211E3864191A668925F5A52B6E15 * L_0 = ((Caster_1_t30A6AB5C2962F37220090F428E0DC77388038379_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		uint8_t L_1 = ___value0;
		NullCheck((Transformer_1_t6C8811E6F600211E3864191A668925F5A52B6E15 *)L_0);
		int8_t L_2 = ((  int8_t (*) (Transformer_1_t6C8811E6F600211E3864191A668925F5A52B6E15 *, uint8_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_t6C8811E6F600211E3864191A668925F5A52B6E15 *)L_0, (uint8_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.SByte>::Cast<System.Char>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int8_t EnumHelper_1_Cast_TisChar_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_m2C04D616FE488D97601EEB421FF64B137E930A42_gshared (Il2CppChar ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_t04BED633DA409C38CB6054BFE3D5735ABD62F518 * L_0 = ((Caster_1_t1244636E53CA3A25ECCDFA53A0A1579702035790_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		Il2CppChar L_1 = ___value0;
		NullCheck((Transformer_1_t04BED633DA409C38CB6054BFE3D5735ABD62F518 *)L_0);
		int8_t L_2 = ((  int8_t (*) (Transformer_1_t04BED633DA409C38CB6054BFE3D5735ABD62F518 *, Il2CppChar, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_t04BED633DA409C38CB6054BFE3D5735ABD62F518 *)L_0, (Il2CppChar)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.SByte>::Cast<System.DateTime>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int8_t EnumHelper_1_Cast_TisDateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_m0630E187D44D29938289D9E486AC76CEC13FC740_gshared (DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_t85017CA131468548211F084ACC574B9CAA055755 * L_0 = ((Caster_1_t1BF309AADA05A572B2F9CC2F7A68EF99D670AB98_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  L_1 = ___value0;
		NullCheck((Transformer_1_t85017CA131468548211F084ACC574B9CAA055755 *)L_0);
		int8_t L_2 = ((  int8_t (*) (Transformer_1_t85017CA131468548211F084ACC574B9CAA055755 *, DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_t85017CA131468548211F084ACC574B9CAA055755 *)L_0, (DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 )L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.SByte>::Cast<System.DateTimeOffset>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int8_t EnumHelper_1_Cast_TisDateTimeOffset_t205B59B1EFB6646DCE3CC50553377BF6023615B5_m891CFFD64622F4CD911A0CE35FA4BD5B2A3F72F2_gshared (DateTimeOffset_t205B59B1EFB6646DCE3CC50553377BF6023615B5  ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_t20B9AF65FC98204645CE3A23EBDADED45A21E450 * L_0 = ((Caster_1_t58169F4240E4111F7A32AE2FDD77268B70A27DA4_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		DateTimeOffset_t205B59B1EFB6646DCE3CC50553377BF6023615B5  L_1 = ___value0;
		NullCheck((Transformer_1_t20B9AF65FC98204645CE3A23EBDADED45A21E450 *)L_0);
		int8_t L_2 = ((  int8_t (*) (Transformer_1_t20B9AF65FC98204645CE3A23EBDADED45A21E450 *, DateTimeOffset_t205B59B1EFB6646DCE3CC50553377BF6023615B5 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_t20B9AF65FC98204645CE3A23EBDADED45A21E450 *)L_0, (DateTimeOffset_t205B59B1EFB6646DCE3CC50553377BF6023615B5 )L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.SByte>::Cast<System.Decimal>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int8_t EnumHelper_1_Cast_TisDecimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7_mBA589D405CF0E2808E5D7B2C3A348109CA23FE94_gshared (Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_t429ED8E730F5DD367D54C19D1BCF0B22889B5360 * L_0 = ((Caster_1_tB27BEE43CA1315350CE91684999408CB0D8B38CE_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  L_1 = ___value0;
		NullCheck((Transformer_1_t429ED8E730F5DD367D54C19D1BCF0B22889B5360 *)L_0);
		int8_t L_2 = ((  int8_t (*) (Transformer_1_t429ED8E730F5DD367D54C19D1BCF0B22889B5360 *, Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_t429ED8E730F5DD367D54C19D1BCF0B22889B5360 *)L_0, (Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7 )L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.SByte>::Cast<System.Double>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int8_t EnumHelper_1_Cast_TisDouble_t42821932CB52DE2057E685D0E1AF3DE5033D2181_mA6764AE7FE1F5EBA16C800A24AAB5A9300942CEE_gshared (double ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_t3B93E16F965DE946BC07E0C76E2CCDAC56C43097 * L_0 = ((Caster_1_t0E96099314BC1001361C090363363C27D456FF68_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		double L_1 = ___value0;
		NullCheck((Transformer_1_t3B93E16F965DE946BC07E0C76E2CCDAC56C43097 *)L_0);
		int8_t L_2 = ((  int8_t (*) (Transformer_1_t3B93E16F965DE946BC07E0C76E2CCDAC56C43097 *, double, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_t3B93E16F965DE946BC07E0C76E2CCDAC56C43097 *)L_0, (double)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.SByte>::Cast<System.Diagnostics.Tracing.EmptyStruct>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int8_t EnumHelper_1_Cast_TisEmptyStruct_t4261C00C8DDCEA2FE01A2264519DDB55BA275F62_m218A603E06B1DA38C89838836D38C31CEFE01FD4_gshared (EmptyStruct_t4261C00C8DDCEA2FE01A2264519DDB55BA275F62  ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_t1EF34F51050152DBCF5D7D381E05F6C9B3A8D746 * L_0 = ((Caster_1_t5DF12DEB83CDE47DE415E477930BFFE3C7175F19_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		EmptyStruct_t4261C00C8DDCEA2FE01A2264519DDB55BA275F62  L_1 = ___value0;
		NullCheck((Transformer_1_t1EF34F51050152DBCF5D7D381E05F6C9B3A8D746 *)L_0);
		int8_t L_2 = ((  int8_t (*) (Transformer_1_t1EF34F51050152DBCF5D7D381E05F6C9B3A8D746 *, EmptyStruct_t4261C00C8DDCEA2FE01A2264519DDB55BA275F62 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_t1EF34F51050152DBCF5D7D381E05F6C9B3A8D746 *)L_0, (EmptyStruct_t4261C00C8DDCEA2FE01A2264519DDB55BA275F62 )L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.SByte>::Cast<System.Guid>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int8_t EnumHelper_1_Cast_TisGuid_t_m69CE83B136238800D560D220264134E826E46FDF_gshared (Guid_t  ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_t9C2A1982D971B2C2ED29E132D19A12E8CAA2945F * L_0 = ((Caster_1_t5F81299DC5B220B4CA376F3799381DD1B09439D4_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		Guid_t  L_1 = ___value0;
		NullCheck((Transformer_1_t9C2A1982D971B2C2ED29E132D19A12E8CAA2945F *)L_0);
		int8_t L_2 = ((  int8_t (*) (Transformer_1_t9C2A1982D971B2C2ED29E132D19A12E8CAA2945F *, Guid_t , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_t9C2A1982D971B2C2ED29E132D19A12E8CAA2945F *)L_0, (Guid_t )L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.SByte>::Cast<System.Int16>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int8_t EnumHelper_1_Cast_TisInt16_tD0F031114106263BB459DA1F099FF9F42691295A_m6E5E881A4B546E5EADB70CD277184B396762F7E0_gshared (int16_t ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_tC3D8FE4B2D70F7C8B02BDC3B6F64504A479DDCDA * L_0 = ((Caster_1_tE9CD352FE55AC176689697C28A1A977B0C0775A8_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		int16_t L_1 = ___value0;
		NullCheck((Transformer_1_tC3D8FE4B2D70F7C8B02BDC3B6F64504A479DDCDA *)L_0);
		int8_t L_2 = ((  int8_t (*) (Transformer_1_tC3D8FE4B2D70F7C8B02BDC3B6F64504A479DDCDA *, int16_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_tC3D8FE4B2D70F7C8B02BDC3B6F64504A479DDCDA *)L_0, (int16_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.SByte>::Cast<System.Int32>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int8_t EnumHelper_1_Cast_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m248C98C91F53A72EF4EC60A9F552BA97895A3A0E_gshared (int32_t ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_tE959281326CA0E71564D9CC8C4CA65476647DF80 * L_0 = ((Caster_1_t88FF0864B2C503EFAD5ED37705978F3B2582A1A5_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		int32_t L_1 = ___value0;
		NullCheck((Transformer_1_tE959281326CA0E71564D9CC8C4CA65476647DF80 *)L_0);
		int8_t L_2 = ((  int8_t (*) (Transformer_1_tE959281326CA0E71564D9CC8C4CA65476647DF80 *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_tE959281326CA0E71564D9CC8C4CA65476647DF80 *)L_0, (int32_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.SByte>::Cast<System.Int64>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int8_t EnumHelper_1_Cast_TisInt64_t378EE0D608BD3107E77238E85F30D2BBD46981F3_mA676871AF2481FB16FD48F86C6E1698CB0EB314E_gshared (int64_t ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_t2C08914EC2A487CA1508E655D40922D31300FF44 * L_0 = ((Caster_1_t163E755F3C31D895AD0BDE502B676681BDC4DB3B_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		int64_t L_1 = ___value0;
		NullCheck((Transformer_1_t2C08914EC2A487CA1508E655D40922D31300FF44 *)L_0);
		int8_t L_2 = ((  int8_t (*) (Transformer_1_t2C08914EC2A487CA1508E655D40922D31300FF44 *, int64_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_t2C08914EC2A487CA1508E655D40922D31300FF44 *)L_0, (int64_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.SByte>::Cast<System.IntPtr>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int8_t EnumHelper_1_Cast_TisIntPtr_t_mFE3788C8EE43181397F8671919CF5FC38F8B4D90_gshared (intptr_t ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_t9096E537ABBD1D40C46D5A1BB2AE3FAB1384C802 * L_0 = ((Caster_1_tF8115F4B0CE80B556961ACB2289616B0DEC331AB_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		intptr_t L_1 = ___value0;
		NullCheck((Transformer_1_t9096E537ABBD1D40C46D5A1BB2AE3FAB1384C802 *)L_0);
		int8_t L_2 = ((  int8_t (*) (Transformer_1_t9096E537ABBD1D40C46D5A1BB2AE3FAB1384C802 *, intptr_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_t9096E537ABBD1D40C46D5A1BB2AE3FAB1384C802 *)L_0, (intptr_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.SByte>::Cast<System.Object>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int8_t EnumHelper_1_Cast_TisRuntimeObject_m5546FFD8F44F7C3BB94F17F6D5C059D6A92AF750_gshared (RuntimeObject * ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_t3094845308EB0C4ECB81B9B9588FF604F1EFF383 * L_0 = ((Caster_1_tC4FA729FF9BC09C7B4EC9C2301EA897047768618_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		RuntimeObject * L_1 = ___value0;
		NullCheck((Transformer_1_t3094845308EB0C4ECB81B9B9588FF604F1EFF383 *)L_0);
		int8_t L_2 = ((  int8_t (*) (Transformer_1_t3094845308EB0C4ECB81B9B9588FF604F1EFF383 *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_t3094845308EB0C4ECB81B9B9588FF604F1EFF383 *)L_0, (RuntimeObject *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.SByte>::Cast<System.SByte>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int8_t EnumHelper_1_Cast_TisSByte_t928712DD662DC29BA4FAAE8CE2230AFB23447F0B_m7BCF10F1968AB0EBA7764BCF65A3D2EC064352C0_gshared (int8_t ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_t07EAC2E730526DAEA7C7466509B2FC4E01EDAECF * L_0 = ((Caster_1_t7647E71BE8B30B3842204E3EC510510866F46BD9_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		int8_t L_1 = ___value0;
		NullCheck((Transformer_1_t07EAC2E730526DAEA7C7466509B2FC4E01EDAECF *)L_0);
		int8_t L_2 = ((  int8_t (*) (Transformer_1_t07EAC2E730526DAEA7C7466509B2FC4E01EDAECF *, int8_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_t07EAC2E730526DAEA7C7466509B2FC4E01EDAECF *)L_0, (int8_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.SByte>::Cast<System.Single>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int8_t EnumHelper_1_Cast_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_m36279A8CF65A0053A5E4ACEE0073CFDEB86B5AE1_gshared (float ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_t57EF7782BA47293FB8D84194159F9C6EC36E8E70 * L_0 = ((Caster_1_t33D96820C90C18AAB27CE45A2342ACADA8EF20E4_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		float L_1 = ___value0;
		NullCheck((Transformer_1_t57EF7782BA47293FB8D84194159F9C6EC36E8E70 *)L_0);
		int8_t L_2 = ((  int8_t (*) (Transformer_1_t57EF7782BA47293FB8D84194159F9C6EC36E8E70 *, float, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_t57EF7782BA47293FB8D84194159F9C6EC36E8E70 *)L_0, (float)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.SByte>::Cast<System.TimeSpan>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int8_t EnumHelper_1_Cast_TisTimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203_m4EB0EAD8AC0FFA2E62E5F9C07AB90B49F436ACB4_gshared (TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_t0692E271430E76C7702E6C06685AEA460588A65D * L_0 = ((Caster_1_t17ACB9A58115DEA27D4C0D2744F74900E858E353_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  L_1 = ___value0;
		NullCheck((Transformer_1_t0692E271430E76C7702E6C06685AEA460588A65D *)L_0);
		int8_t L_2 = ((  int8_t (*) (Transformer_1_t0692E271430E76C7702E6C06685AEA460588A65D *, TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_t0692E271430E76C7702E6C06685AEA460588A65D *)L_0, (TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 )L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.SByte>::Cast<System.UInt16>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int8_t EnumHelper_1_Cast_TisUInt16_t894EA9D4FB7C799B244E7BBF2DF0EEEDBC77A8BD_mB1DBAA55106A989DC9767B2AE1EEFEC78A55FD9D_gshared (uint16_t ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_t37842F590D779536C9F57CFE8A5F4C9054A7CD5D * L_0 = ((Caster_1_t870029184001271CD749C94DCA95C7A2C0D1A4FE_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		uint16_t L_1 = ___value0;
		NullCheck((Transformer_1_t37842F590D779536C9F57CFE8A5F4C9054A7CD5D *)L_0);
		int8_t L_2 = ((  int8_t (*) (Transformer_1_t37842F590D779536C9F57CFE8A5F4C9054A7CD5D *, uint16_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_t37842F590D779536C9F57CFE8A5F4C9054A7CD5D *)L_0, (uint16_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.SByte>::Cast<System.UInt32>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int8_t EnumHelper_1_Cast_TisUInt32_tE60352A06233E4E69DD198BCC67142159F686B15_m672C8062F0D0C709BD11332225381A96994A3AD6_gshared (uint32_t ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_t118F878BEA8CDEED4C8F998AE52CF291F41BC52E * L_0 = ((Caster_1_tA41091CA45F9A4B6EDB6AC286316274A05D80186_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		uint32_t L_1 = ___value0;
		NullCheck((Transformer_1_t118F878BEA8CDEED4C8F998AE52CF291F41BC52E *)L_0);
		int8_t L_2 = ((  int8_t (*) (Transformer_1_t118F878BEA8CDEED4C8F998AE52CF291F41BC52E *, uint32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_t118F878BEA8CDEED4C8F998AE52CF291F41BC52E *)L_0, (uint32_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.SByte>::Cast<System.UInt64>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int8_t EnumHelper_1_Cast_TisUInt64_tEC57511B3E3CA2DBA1BEBD434C6983E31C943281_m369FE39FA5C5C7741FC446D22C80AB162635F341_gshared (uint64_t ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_t7CE5E2F2EE3F6B588EC93C03818D6AA88B4C2FA4 * L_0 = ((Caster_1_t60127F9AA9497FABC02BFD54AC24744A8071E56B_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		uint64_t L_1 = ___value0;
		NullCheck((Transformer_1_t7CE5E2F2EE3F6B588EC93C03818D6AA88B4C2FA4 *)L_0);
		int8_t L_2 = ((  int8_t (*) (Transformer_1_t7CE5E2F2EE3F6B588EC93C03818D6AA88B4C2FA4 *, uint64_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_t7CE5E2F2EE3F6B588EC93C03818D6AA88B4C2FA4 *)L_0, (uint64_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.SByte>::Cast<System.UIntPtr>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int8_t EnumHelper_1_Cast_TisUIntPtr_t_m92BC3723419BC694036D4C982B7DF09954196304_gshared (uintptr_t ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_t7820A348FDE892902737AB3353C8DC9AF3173136 * L_0 = ((Caster_1_t740C3B7D2E14D9E73F3F0EFCF14F8BA60FB849A6_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		uintptr_t L_1 = ___value0;
		NullCheck((Transformer_1_t7820A348FDE892902737AB3353C8DC9AF3173136 *)L_0);
		int8_t L_2 = ((  int8_t (*) (Transformer_1_t7820A348FDE892902737AB3353C8DC9AF3173136 *, uintptr_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_t7820A348FDE892902737AB3353C8DC9AF3173136 *)L_0, (uintptr_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.SByte>::Cast<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int8_t EnumHelper_1_Cast_TisKeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625_m1A2E72FDD3F66ED8A8A673DB8E4C01C1A0566A59_gshared (KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625  ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_tAB938303C0EB89617BAC00380BBC202940243F74 * L_0 = ((Caster_1_t2B74904278820C410C8B5A8D72DE27A24035727C_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625  L_1 = ___value0;
		NullCheck((Transformer_1_tAB938303C0EB89617BAC00380BBC202940243F74 *)L_0);
		int8_t L_2 = ((  int8_t (*) (Transformer_1_tAB938303C0EB89617BAC00380BBC202940243F74 *, KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_tAB938303C0EB89617BAC00380BBC202940243F74 *)L_0, (KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 )L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.UInt16>::Cast<System.Boolean>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint16_t EnumHelper_1_Cast_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_mEEA42EF1968DFFE1EC7763EAC46E451C2D73F582_gshared (bool ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_tE80196F4B7A5A2110FC0182212C83F459727C6BE * L_0 = ((Caster_1_t1C9883B28F2C3F274ADC13F46C49C02C54494BD6_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		bool L_1 = ___value0;
		NullCheck((Transformer_1_tE80196F4B7A5A2110FC0182212C83F459727C6BE *)L_0);
		uint16_t L_2 = ((  uint16_t (*) (Transformer_1_tE80196F4B7A5A2110FC0182212C83F459727C6BE *, bool, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_tE80196F4B7A5A2110FC0182212C83F459727C6BE *)L_0, (bool)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.UInt16>::Cast<System.Byte>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint16_t EnumHelper_1_Cast_TisByte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_m5FF6D632A37497590B0E7B6E02BD39347048F601_gshared (uint8_t ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_t061320CC3547E178B43212A1634E5BA1C3296FB4 * L_0 = ((Caster_1_t95C9CBFB005FB2C9D0C0F2A240E797403CBE2F87_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		uint8_t L_1 = ___value0;
		NullCheck((Transformer_1_t061320CC3547E178B43212A1634E5BA1C3296FB4 *)L_0);
		uint16_t L_2 = ((  uint16_t (*) (Transformer_1_t061320CC3547E178B43212A1634E5BA1C3296FB4 *, uint8_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_t061320CC3547E178B43212A1634E5BA1C3296FB4 *)L_0, (uint8_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.UInt16>::Cast<System.Char>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint16_t EnumHelper_1_Cast_TisChar_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_m35A52E9768C10001029A9A8AB1550CF2C82C43ED_gshared (Il2CppChar ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_t9332F82CDC7D05AC998F8BE0E7ECCD229EC1F111 * L_0 = ((Caster_1_t9DA610447C49902B9FBFE6DEC227E850F4A80137_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		Il2CppChar L_1 = ___value0;
		NullCheck((Transformer_1_t9332F82CDC7D05AC998F8BE0E7ECCD229EC1F111 *)L_0);
		uint16_t L_2 = ((  uint16_t (*) (Transformer_1_t9332F82CDC7D05AC998F8BE0E7ECCD229EC1F111 *, Il2CppChar, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_t9332F82CDC7D05AC998F8BE0E7ECCD229EC1F111 *)L_0, (Il2CppChar)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.UInt16>::Cast<System.DateTime>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint16_t EnumHelper_1_Cast_TisDateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_m0A50269606565656924956A0B7396E8669913224_gshared (DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_t18E7F2A91B58B4CC9C9DB99BCA5CBB14EC89E947 * L_0 = ((Caster_1_t9CD44B9D0BF57F470EA3652BB01215672BE364F6_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  L_1 = ___value0;
		NullCheck((Transformer_1_t18E7F2A91B58B4CC9C9DB99BCA5CBB14EC89E947 *)L_0);
		uint16_t L_2 = ((  uint16_t (*) (Transformer_1_t18E7F2A91B58B4CC9C9DB99BCA5CBB14EC89E947 *, DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_t18E7F2A91B58B4CC9C9DB99BCA5CBB14EC89E947 *)L_0, (DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 )L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.UInt16>::Cast<System.DateTimeOffset>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint16_t EnumHelper_1_Cast_TisDateTimeOffset_t205B59B1EFB6646DCE3CC50553377BF6023615B5_m54DD46874F5439BBE7D7A5CC440B064894A60F16_gshared (DateTimeOffset_t205B59B1EFB6646DCE3CC50553377BF6023615B5  ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_tF16A2137C1450B0F436B28941D2EFDB38B768D77 * L_0 = ((Caster_1_tB519A5C4AF8613C51607CB6DA06B4E509DE94CE1_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		DateTimeOffset_t205B59B1EFB6646DCE3CC50553377BF6023615B5  L_1 = ___value0;
		NullCheck((Transformer_1_tF16A2137C1450B0F436B28941D2EFDB38B768D77 *)L_0);
		uint16_t L_2 = ((  uint16_t (*) (Transformer_1_tF16A2137C1450B0F436B28941D2EFDB38B768D77 *, DateTimeOffset_t205B59B1EFB6646DCE3CC50553377BF6023615B5 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_tF16A2137C1450B0F436B28941D2EFDB38B768D77 *)L_0, (DateTimeOffset_t205B59B1EFB6646DCE3CC50553377BF6023615B5 )L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.UInt16>::Cast<System.Decimal>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint16_t EnumHelper_1_Cast_TisDecimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7_mE19A21D21BD98395F0DF7056C39B77299FB81368_gshared (Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_tC9194191386E267034CCDBD796CBAE0F96002D63 * L_0 = ((Caster_1_t97215292B31E6EDD9D0CCF730C574A219DB14FA6_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  L_1 = ___value0;
		NullCheck((Transformer_1_tC9194191386E267034CCDBD796CBAE0F96002D63 *)L_0);
		uint16_t L_2 = ((  uint16_t (*) (Transformer_1_tC9194191386E267034CCDBD796CBAE0F96002D63 *, Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_tC9194191386E267034CCDBD796CBAE0F96002D63 *)L_0, (Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7 )L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.UInt16>::Cast<System.Double>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint16_t EnumHelper_1_Cast_TisDouble_t42821932CB52DE2057E685D0E1AF3DE5033D2181_m026F75CB8F56B042FDF4A222BA60EF7FA72DA875_gshared (double ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_t77DD442701A959DAE27DA4559054353BDB343B34 * L_0 = ((Caster_1_t3758D8A416E0335940152F85A9EF16351B5E50B4_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		double L_1 = ___value0;
		NullCheck((Transformer_1_t77DD442701A959DAE27DA4559054353BDB343B34 *)L_0);
		uint16_t L_2 = ((  uint16_t (*) (Transformer_1_t77DD442701A959DAE27DA4559054353BDB343B34 *, double, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_t77DD442701A959DAE27DA4559054353BDB343B34 *)L_0, (double)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.UInt16>::Cast<System.Diagnostics.Tracing.EmptyStruct>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint16_t EnumHelper_1_Cast_TisEmptyStruct_t4261C00C8DDCEA2FE01A2264519DDB55BA275F62_mDDD0986C6B9B9F9FAA119BF6DF6299F72046F36D_gshared (EmptyStruct_t4261C00C8DDCEA2FE01A2264519DDB55BA275F62  ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_tEBC899D34A444538AF2C5EFBED4C84DB4BC45848 * L_0 = ((Caster_1_t36421096E51C706002F451EE0EF4F2C050E65FDC_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		EmptyStruct_t4261C00C8DDCEA2FE01A2264519DDB55BA275F62  L_1 = ___value0;
		NullCheck((Transformer_1_tEBC899D34A444538AF2C5EFBED4C84DB4BC45848 *)L_0);
		uint16_t L_2 = ((  uint16_t (*) (Transformer_1_tEBC899D34A444538AF2C5EFBED4C84DB4BC45848 *, EmptyStruct_t4261C00C8DDCEA2FE01A2264519DDB55BA275F62 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_tEBC899D34A444538AF2C5EFBED4C84DB4BC45848 *)L_0, (EmptyStruct_t4261C00C8DDCEA2FE01A2264519DDB55BA275F62 )L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.UInt16>::Cast<System.Guid>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint16_t EnumHelper_1_Cast_TisGuid_t_mDA9DD8BA822B0FF4295DE1D9FB942F89AA38BA47_gshared (Guid_t  ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_t1E44C39C080C0C1BCAA3AA096BC46637DC78FFC8 * L_0 = ((Caster_1_tE7DEB9C1C2CA14F5BAC58EDE3DC45FC7BC5E2D71_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		Guid_t  L_1 = ___value0;
		NullCheck((Transformer_1_t1E44C39C080C0C1BCAA3AA096BC46637DC78FFC8 *)L_0);
		uint16_t L_2 = ((  uint16_t (*) (Transformer_1_t1E44C39C080C0C1BCAA3AA096BC46637DC78FFC8 *, Guid_t , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_t1E44C39C080C0C1BCAA3AA096BC46637DC78FFC8 *)L_0, (Guid_t )L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.UInt16>::Cast<System.Int16>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint16_t EnumHelper_1_Cast_TisInt16_tD0F031114106263BB459DA1F099FF9F42691295A_m5C55ED2E551392B816C531D44BDF7E79151F0AAA_gshared (int16_t ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_t8DA922273DCF1348A863E22DAED50A28F2E7EC4A * L_0 = ((Caster_1_tC5BA8BEE276B2CE5B5971AED6A81D2209E331D5D_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		int16_t L_1 = ___value0;
		NullCheck((Transformer_1_t8DA922273DCF1348A863E22DAED50A28F2E7EC4A *)L_0);
		uint16_t L_2 = ((  uint16_t (*) (Transformer_1_t8DA922273DCF1348A863E22DAED50A28F2E7EC4A *, int16_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_t8DA922273DCF1348A863E22DAED50A28F2E7EC4A *)L_0, (int16_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.UInt16>::Cast<System.Int32>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint16_t EnumHelper_1_Cast_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m33FB1E94DCC9F871CDBD4B70662BC660FA6B4B24_gshared (int32_t ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_tE2F5517F18DDC45C27EB0CF011655F7290022FB0 * L_0 = ((Caster_1_t2A00EDBD48775854B6F07521F9C38B3D985895DD_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		int32_t L_1 = ___value0;
		NullCheck((Transformer_1_tE2F5517F18DDC45C27EB0CF011655F7290022FB0 *)L_0);
		uint16_t L_2 = ((  uint16_t (*) (Transformer_1_tE2F5517F18DDC45C27EB0CF011655F7290022FB0 *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_tE2F5517F18DDC45C27EB0CF011655F7290022FB0 *)L_0, (int32_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.UInt16>::Cast<System.Int64>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint16_t EnumHelper_1_Cast_TisInt64_t378EE0D608BD3107E77238E85F30D2BBD46981F3_m87A2033A51524AD193C763B7B4F047F823C73B43_gshared (int64_t ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_t2468BF9AC5C45B9D777B0E34EC1949CE193D20F7 * L_0 = ((Caster_1_t001E88A8CE2BFC0E48CBD781528BDB1B5D626B23_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		int64_t L_1 = ___value0;
		NullCheck((Transformer_1_t2468BF9AC5C45B9D777B0E34EC1949CE193D20F7 *)L_0);
		uint16_t L_2 = ((  uint16_t (*) (Transformer_1_t2468BF9AC5C45B9D777B0E34EC1949CE193D20F7 *, int64_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_t2468BF9AC5C45B9D777B0E34EC1949CE193D20F7 *)L_0, (int64_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.UInt16>::Cast<System.IntPtr>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint16_t EnumHelper_1_Cast_TisIntPtr_t_m920944DCC4A628AB10BEBE3A7A10C359B518F678_gshared (intptr_t ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_tCB7EE8D213E31FE3EAB291CBAEA6B0F015D13840 * L_0 = ((Caster_1_tE61A67E1226C9AAEF271BA0F9697770921AE95AC_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		intptr_t L_1 = ___value0;
		NullCheck((Transformer_1_tCB7EE8D213E31FE3EAB291CBAEA6B0F015D13840 *)L_0);
		uint16_t L_2 = ((  uint16_t (*) (Transformer_1_tCB7EE8D213E31FE3EAB291CBAEA6B0F015D13840 *, intptr_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_tCB7EE8D213E31FE3EAB291CBAEA6B0F015D13840 *)L_0, (intptr_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.UInt16>::Cast<System.Object>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint16_t EnumHelper_1_Cast_TisRuntimeObject_mB59A318B4868830486B499A0E9A9EBC55D04B7E8_gshared (RuntimeObject * ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_t0001CA8726D9CA184026588C57396CC776ACEF06 * L_0 = ((Caster_1_t1DF332D98A7CFD921311E400AA7EB85F360716CF_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		RuntimeObject * L_1 = ___value0;
		NullCheck((Transformer_1_t0001CA8726D9CA184026588C57396CC776ACEF06 *)L_0);
		uint16_t L_2 = ((  uint16_t (*) (Transformer_1_t0001CA8726D9CA184026588C57396CC776ACEF06 *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_t0001CA8726D9CA184026588C57396CC776ACEF06 *)L_0, (RuntimeObject *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.UInt16>::Cast<System.SByte>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint16_t EnumHelper_1_Cast_TisSByte_t928712DD662DC29BA4FAAE8CE2230AFB23447F0B_mF8CC833A292B6C73489E63BCC5C9BEC11C9DE310_gshared (int8_t ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_t56AC8DD64FA3E1A9651D456D3D911E023CF88DCD * L_0 = ((Caster_1_tEB118780DCAADB459CFF6F3503D3155B1FBE042B_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		int8_t L_1 = ___value0;
		NullCheck((Transformer_1_t56AC8DD64FA3E1A9651D456D3D911E023CF88DCD *)L_0);
		uint16_t L_2 = ((  uint16_t (*) (Transformer_1_t56AC8DD64FA3E1A9651D456D3D911E023CF88DCD *, int8_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_t56AC8DD64FA3E1A9651D456D3D911E023CF88DCD *)L_0, (int8_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.UInt16>::Cast<System.Single>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint16_t EnumHelper_1_Cast_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_m0471F4FDFBE5815F0EE55CD395290E4787D25D14_gshared (float ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_tE78CCD9D44957F7F042B573ED59E8EE04C13D047 * L_0 = ((Caster_1_t3F36BE5AE6C1F8A32498C9F48EFDCF9C97F77649_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		float L_1 = ___value0;
		NullCheck((Transformer_1_tE78CCD9D44957F7F042B573ED59E8EE04C13D047 *)L_0);
		uint16_t L_2 = ((  uint16_t (*) (Transformer_1_tE78CCD9D44957F7F042B573ED59E8EE04C13D047 *, float, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_tE78CCD9D44957F7F042B573ED59E8EE04C13D047 *)L_0, (float)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.UInt16>::Cast<System.TimeSpan>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint16_t EnumHelper_1_Cast_TisTimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203_m3267914BA46BA91D970343C5377C8A16E6DE0213_gshared (TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_t3348AF6EA9D56F7672FDA766E48C0EC31D244732 * L_0 = ((Caster_1_tD718F5C5131976B010CAE236DB97BFF85D813E54_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  L_1 = ___value0;
		NullCheck((Transformer_1_t3348AF6EA9D56F7672FDA766E48C0EC31D244732 *)L_0);
		uint16_t L_2 = ((  uint16_t (*) (Transformer_1_t3348AF6EA9D56F7672FDA766E48C0EC31D244732 *, TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_t3348AF6EA9D56F7672FDA766E48C0EC31D244732 *)L_0, (TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 )L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.UInt16>::Cast<System.UInt16>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint16_t EnumHelper_1_Cast_TisUInt16_t894EA9D4FB7C799B244E7BBF2DF0EEEDBC77A8BD_mDAEFC8A13DA4C1E8CEFC664C8F10C6E28BBB4EC6_gshared (uint16_t ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_t1BE0C17B380E3D75E214DF3668E20BEF6DCA9A4A * L_0 = ((Caster_1_tE98A18E634417A96EC0EB7E3F3AEEDDCDE5030DD_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		uint16_t L_1 = ___value0;
		NullCheck((Transformer_1_t1BE0C17B380E3D75E214DF3668E20BEF6DCA9A4A *)L_0);
		uint16_t L_2 = ((  uint16_t (*) (Transformer_1_t1BE0C17B380E3D75E214DF3668E20BEF6DCA9A4A *, uint16_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_t1BE0C17B380E3D75E214DF3668E20BEF6DCA9A4A *)L_0, (uint16_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.UInt16>::Cast<System.UInt32>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint16_t EnumHelper_1_Cast_TisUInt32_tE60352A06233E4E69DD198BCC67142159F686B15_mDE61A055D83BD3AD84776AE0FFA5613E94A5AF82_gshared (uint32_t ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_t90F32598CDB2668A5BBD1A101374312C05F60543 * L_0 = ((Caster_1_tCF9EF4E40F2FC2B2EB7902E1934BE213E69EE065_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		uint32_t L_1 = ___value0;
		NullCheck((Transformer_1_t90F32598CDB2668A5BBD1A101374312C05F60543 *)L_0);
		uint16_t L_2 = ((  uint16_t (*) (Transformer_1_t90F32598CDB2668A5BBD1A101374312C05F60543 *, uint32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_t90F32598CDB2668A5BBD1A101374312C05F60543 *)L_0, (uint32_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.UInt16>::Cast<System.UInt64>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint16_t EnumHelper_1_Cast_TisUInt64_tEC57511B3E3CA2DBA1BEBD434C6983E31C943281_m1164812A40F0FA7C178B7FD1F599CD49E4730E6D_gshared (uint64_t ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_t04C7EED1579F30358FBDCDB6143DBC088C63AFDE * L_0 = ((Caster_1_tDCA4B028D037B066692AE9595936AAD91890E1CF_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		uint64_t L_1 = ___value0;
		NullCheck((Transformer_1_t04C7EED1579F30358FBDCDB6143DBC088C63AFDE *)L_0);
		uint16_t L_2 = ((  uint16_t (*) (Transformer_1_t04C7EED1579F30358FBDCDB6143DBC088C63AFDE *, uint64_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_t04C7EED1579F30358FBDCDB6143DBC088C63AFDE *)L_0, (uint64_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.UInt16>::Cast<System.UIntPtr>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint16_t EnumHelper_1_Cast_TisUIntPtr_t_m34A91CE908B2D7D997B8BE7BE2892D3208B815A1_gshared (uintptr_t ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_t11D2CE81C8B59E67AB536F4C77727A85FD129449 * L_0 = ((Caster_1_t3E7C36D31A48255DAD25B3B2AE6B917F8340B991_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		uintptr_t L_1 = ___value0;
		NullCheck((Transformer_1_t11D2CE81C8B59E67AB536F4C77727A85FD129449 *)L_0);
		uint16_t L_2 = ((  uint16_t (*) (Transformer_1_t11D2CE81C8B59E67AB536F4C77727A85FD129449 *, uintptr_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_t11D2CE81C8B59E67AB536F4C77727A85FD129449 *)L_0, (uintptr_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.UInt16>::Cast<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint16_t EnumHelper_1_Cast_TisKeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625_m036C3CAB1998E7C578EBC23ABD81517B7ADCE139_gshared (KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625  ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_t121D121059312ABFEA00E7E0857D05CCC9415A45 * L_0 = ((Caster_1_tE598EB10B0A995EFB2D98C6255D19AEB04880A4D_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625  L_1 = ___value0;
		NullCheck((Transformer_1_t121D121059312ABFEA00E7E0857D05CCC9415A45 *)L_0);
		uint16_t L_2 = ((  uint16_t (*) (Transformer_1_t121D121059312ABFEA00E7E0857D05CCC9415A45 *, KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_t121D121059312ABFEA00E7E0857D05CCC9415A45 *)L_0, (KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 )L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.UInt32>::Cast<System.Boolean>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t EnumHelper_1_Cast_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_mA686488EB1CEC989D7B14D7FEA916C30700AAE70_gshared (bool ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_t60047D12F19EC963BBD5F0CEBE2F8036A20172F0 * L_0 = ((Caster_1_tF2AFB02A87ADE0E7A8A250D34EAFA734BA067304_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		bool L_1 = ___value0;
		NullCheck((Transformer_1_t60047D12F19EC963BBD5F0CEBE2F8036A20172F0 *)L_0);
		uint32_t L_2 = ((  uint32_t (*) (Transformer_1_t60047D12F19EC963BBD5F0CEBE2F8036A20172F0 *, bool, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_t60047D12F19EC963BBD5F0CEBE2F8036A20172F0 *)L_0, (bool)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.UInt32>::Cast<System.Byte>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t EnumHelper_1_Cast_TisByte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_m398CF03A71EA616F539E58C779F586E2A4785A8B_gshared (uint8_t ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_t5DE73FA1B0F7652CC9FB816D61938EA68158297B * L_0 = ((Caster_1_tCE480BD8AB8248F2B6480301D05F0F36C531CDB9_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		uint8_t L_1 = ___value0;
		NullCheck((Transformer_1_t5DE73FA1B0F7652CC9FB816D61938EA68158297B *)L_0);
		uint32_t L_2 = ((  uint32_t (*) (Transformer_1_t5DE73FA1B0F7652CC9FB816D61938EA68158297B *, uint8_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_t5DE73FA1B0F7652CC9FB816D61938EA68158297B *)L_0, (uint8_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.UInt32>::Cast<System.Char>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t EnumHelper_1_Cast_TisChar_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_mA66129BA9A7383CDD15C9F3F51620AE254A4557D_gshared (Il2CppChar ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_t3050C701F0AE1E95352D4339BFE606D2343F7F90 * L_0 = ((Caster_1_tAF055C28617E7BBE97D0A4F6D3BB9DA6AE2FDE51_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		Il2CppChar L_1 = ___value0;
		NullCheck((Transformer_1_t3050C701F0AE1E95352D4339BFE606D2343F7F90 *)L_0);
		uint32_t L_2 = ((  uint32_t (*) (Transformer_1_t3050C701F0AE1E95352D4339BFE606D2343F7F90 *, Il2CppChar, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_t3050C701F0AE1E95352D4339BFE606D2343F7F90 *)L_0, (Il2CppChar)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.UInt32>::Cast<System.DateTime>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t EnumHelper_1_Cast_TisDateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_m3D61C02658BB7ABF01730CD28AF88022BEC92208_gshared (DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_t10ED8D0D8FCCF8A65A34FD9CB0BB769E97C65617 * L_0 = ((Caster_1_t901773DD618F4F8D0F11AA64220BDF5B5588A9CB_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  L_1 = ___value0;
		NullCheck((Transformer_1_t10ED8D0D8FCCF8A65A34FD9CB0BB769E97C65617 *)L_0);
		uint32_t L_2 = ((  uint32_t (*) (Transformer_1_t10ED8D0D8FCCF8A65A34FD9CB0BB769E97C65617 *, DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_t10ED8D0D8FCCF8A65A34FD9CB0BB769E97C65617 *)L_0, (DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 )L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.UInt32>::Cast<System.DateTimeOffset>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t EnumHelper_1_Cast_TisDateTimeOffset_t205B59B1EFB6646DCE3CC50553377BF6023615B5_m52E0FCB849B00F0CB904AD6F2B8002AF326AD007_gshared (DateTimeOffset_t205B59B1EFB6646DCE3CC50553377BF6023615B5  ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_t769CC26F0F28BAA04C91A2DD4CA912A1C75B527C * L_0 = ((Caster_1_t81822C420408C79A1D831535F2CF93DA5EA48B3A_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		DateTimeOffset_t205B59B1EFB6646DCE3CC50553377BF6023615B5  L_1 = ___value0;
		NullCheck((Transformer_1_t769CC26F0F28BAA04C91A2DD4CA912A1C75B527C *)L_0);
		uint32_t L_2 = ((  uint32_t (*) (Transformer_1_t769CC26F0F28BAA04C91A2DD4CA912A1C75B527C *, DateTimeOffset_t205B59B1EFB6646DCE3CC50553377BF6023615B5 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_t769CC26F0F28BAA04C91A2DD4CA912A1C75B527C *)L_0, (DateTimeOffset_t205B59B1EFB6646DCE3CC50553377BF6023615B5 )L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.UInt32>::Cast<System.Decimal>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t EnumHelper_1_Cast_TisDecimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7_mE6462F4574EDF6E28B7DACD3EC583A81DF20FA18_gshared (Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_tC127664D3E7D230D4A314537786A12688DFA7A3E * L_0 = ((Caster_1_t40AD1A1AF479039B1D54E5F3380B6B0CF2B15644_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  L_1 = ___value0;
		NullCheck((Transformer_1_tC127664D3E7D230D4A314537786A12688DFA7A3E *)L_0);
		uint32_t L_2 = ((  uint32_t (*) (Transformer_1_tC127664D3E7D230D4A314537786A12688DFA7A3E *, Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_tC127664D3E7D230D4A314537786A12688DFA7A3E *)L_0, (Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7 )L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.UInt32>::Cast<System.Double>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t EnumHelper_1_Cast_TisDouble_t42821932CB52DE2057E685D0E1AF3DE5033D2181_m0AFF356A45C77B9798B5372003BB2466B5E1EB5B_gshared (double ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_t98913A0CAF0396077F92C767353DCECE1CAE9D37 * L_0 = ((Caster_1_t6143C0151137A083CB0F6EFBCE486661FD0489FB_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		double L_1 = ___value0;
		NullCheck((Transformer_1_t98913A0CAF0396077F92C767353DCECE1CAE9D37 *)L_0);
		uint32_t L_2 = ((  uint32_t (*) (Transformer_1_t98913A0CAF0396077F92C767353DCECE1CAE9D37 *, double, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_t98913A0CAF0396077F92C767353DCECE1CAE9D37 *)L_0, (double)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.UInt32>::Cast<System.Diagnostics.Tracing.EmptyStruct>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t EnumHelper_1_Cast_TisEmptyStruct_t4261C00C8DDCEA2FE01A2264519DDB55BA275F62_m9743682CEC3E125CEE6A960972769361D7FE930E_gshared (EmptyStruct_t4261C00C8DDCEA2FE01A2264519DDB55BA275F62  ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_tF07E13438506E2B3D01E6482C5493016DBECA428 * L_0 = ((Caster_1_tA382B961BB6DECA7E9912DE8BCE86A2760D3536C_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		EmptyStruct_t4261C00C8DDCEA2FE01A2264519DDB55BA275F62  L_1 = ___value0;
		NullCheck((Transformer_1_tF07E13438506E2B3D01E6482C5493016DBECA428 *)L_0);
		uint32_t L_2 = ((  uint32_t (*) (Transformer_1_tF07E13438506E2B3D01E6482C5493016DBECA428 *, EmptyStruct_t4261C00C8DDCEA2FE01A2264519DDB55BA275F62 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_tF07E13438506E2B3D01E6482C5493016DBECA428 *)L_0, (EmptyStruct_t4261C00C8DDCEA2FE01A2264519DDB55BA275F62 )L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.UInt32>::Cast<System.Guid>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t EnumHelper_1_Cast_TisGuid_t_mD71C7E0E904D4F729A529E389BF692E29706D048_gshared (Guid_t  ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_t7065170F0C1062F0BFC8CE0818DF6CB978951894 * L_0 = ((Caster_1_t05D7391E16AAD38161724DD6C261B74130C36705_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		Guid_t  L_1 = ___value0;
		NullCheck((Transformer_1_t7065170F0C1062F0BFC8CE0818DF6CB978951894 *)L_0);
		uint32_t L_2 = ((  uint32_t (*) (Transformer_1_t7065170F0C1062F0BFC8CE0818DF6CB978951894 *, Guid_t , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_t7065170F0C1062F0BFC8CE0818DF6CB978951894 *)L_0, (Guid_t )L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.UInt32>::Cast<System.Int16>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t EnumHelper_1_Cast_TisInt16_tD0F031114106263BB459DA1F099FF9F42691295A_mFE0DAFB0F0E9AB6ABD7A5E415317C414042DDB15_gshared (int16_t ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_t286C753C28D2786E159E55BCD77AAC5FE99C8A6E * L_0 = ((Caster_1_t05E36EAA415EA6B5B1C08B9D4E494A0588524227_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		int16_t L_1 = ___value0;
		NullCheck((Transformer_1_t286C753C28D2786E159E55BCD77AAC5FE99C8A6E *)L_0);
		uint32_t L_2 = ((  uint32_t (*) (Transformer_1_t286C753C28D2786E159E55BCD77AAC5FE99C8A6E *, int16_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_t286C753C28D2786E159E55BCD77AAC5FE99C8A6E *)L_0, (int16_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.UInt32>::Cast<System.Int32>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t EnumHelper_1_Cast_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_mC998A0F577B57817825124BB28387130027C2CC2_gshared (int32_t ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_t4BE8EE1016BCB2E59D59BB8EBAD050C01F69481F * L_0 = ((Caster_1_t519E78DB0E5DF907F1CB998EE1427A3E8E221BED_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		int32_t L_1 = ___value0;
		NullCheck((Transformer_1_t4BE8EE1016BCB2E59D59BB8EBAD050C01F69481F *)L_0);
		uint32_t L_2 = ((  uint32_t (*) (Transformer_1_t4BE8EE1016BCB2E59D59BB8EBAD050C01F69481F *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_t4BE8EE1016BCB2E59D59BB8EBAD050C01F69481F *)L_0, (int32_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.UInt32>::Cast<System.Int64>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t EnumHelper_1_Cast_TisInt64_t378EE0D608BD3107E77238E85F30D2BBD46981F3_m1D0238357825B1AD550C9C1DBDD46CE1EE3B805B_gshared (int64_t ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_t0265D6C648532D20930747AC00E60A57882836D4 * L_0 = ((Caster_1_t4282DB10490A87367535C2292A0292F381AB2D8A_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		int64_t L_1 = ___value0;
		NullCheck((Transformer_1_t0265D6C648532D20930747AC00E60A57882836D4 *)L_0);
		uint32_t L_2 = ((  uint32_t (*) (Transformer_1_t0265D6C648532D20930747AC00E60A57882836D4 *, int64_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_t0265D6C648532D20930747AC00E60A57882836D4 *)L_0, (int64_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.UInt32>::Cast<System.IntPtr>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t EnumHelper_1_Cast_TisIntPtr_t_m93E84625CC0FB936C2A8263CBCD933315ADDC89F_gshared (intptr_t ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_t1008B5FEF2C9C85E523733A1465641C24C2EF895 * L_0 = ((Caster_1_t69A273B2F262F2B7EF8D384649270F25004CDE21_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		intptr_t L_1 = ___value0;
		NullCheck((Transformer_1_t1008B5FEF2C9C85E523733A1465641C24C2EF895 *)L_0);
		uint32_t L_2 = ((  uint32_t (*) (Transformer_1_t1008B5FEF2C9C85E523733A1465641C24C2EF895 *, intptr_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_t1008B5FEF2C9C85E523733A1465641C24C2EF895 *)L_0, (intptr_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.UInt32>::Cast<System.Object>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t EnumHelper_1_Cast_TisRuntimeObject_m5DF73FDFB625B3FDDE0FAA3E08AA7A82476FAE96_gshared (RuntimeObject * ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_t63A740E462CAF5DE201265ACF49D1F387549E5C2 * L_0 = ((Caster_1_t137FB3B1278245F81E87955980453BD358BC9FDD_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		RuntimeObject * L_1 = ___value0;
		NullCheck((Transformer_1_t63A740E462CAF5DE201265ACF49D1F387549E5C2 *)L_0);
		uint32_t L_2 = ((  uint32_t (*) (Transformer_1_t63A740E462CAF5DE201265ACF49D1F387549E5C2 *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_t63A740E462CAF5DE201265ACF49D1F387549E5C2 *)L_0, (RuntimeObject *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.UInt32>::Cast<System.SByte>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t EnumHelper_1_Cast_TisSByte_t928712DD662DC29BA4FAAE8CE2230AFB23447F0B_mD717641100586CF9E09C8C513C7A2C06FE05FCD5_gshared (int8_t ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_tF3157E7DF7ABB616E4FBC816F8F899563EBAB35C * L_0 = ((Caster_1_t2FFB438F208B3B129F9605FB1F10B32FCE533406_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		int8_t L_1 = ___value0;
		NullCheck((Transformer_1_tF3157E7DF7ABB616E4FBC816F8F899563EBAB35C *)L_0);
		uint32_t L_2 = ((  uint32_t (*) (Transformer_1_tF3157E7DF7ABB616E4FBC816F8F899563EBAB35C *, int8_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_tF3157E7DF7ABB616E4FBC816F8F899563EBAB35C *)L_0, (int8_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.UInt32>::Cast<System.Single>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t EnumHelper_1_Cast_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_m11BAB43BD9E84FA2C3E63E24BE8801C68E0DAD83_gshared (float ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_tCBB0F5293357FBCE6345652A671907F2D668E97B * L_0 = ((Caster_1_t9A112A2C70E550894FAC0C3A124091DCCBDF8012_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		float L_1 = ___value0;
		NullCheck((Transformer_1_tCBB0F5293357FBCE6345652A671907F2D668E97B *)L_0);
		uint32_t L_2 = ((  uint32_t (*) (Transformer_1_tCBB0F5293357FBCE6345652A671907F2D668E97B *, float, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_tCBB0F5293357FBCE6345652A671907F2D668E97B *)L_0, (float)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.UInt32>::Cast<System.TimeSpan>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t EnumHelper_1_Cast_TisTimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203_m74C6178CA1354F190097453AB28D2119C6AEFD62_gshared (TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_tC9FFC78A73E6932AA70D077126BE4CA3FE45A302 * L_0 = ((Caster_1_t5D3645B8EC343703DBE9DE7EA90363CD546B667A_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  L_1 = ___value0;
		NullCheck((Transformer_1_tC9FFC78A73E6932AA70D077126BE4CA3FE45A302 *)L_0);
		uint32_t L_2 = ((  uint32_t (*) (Transformer_1_tC9FFC78A73E6932AA70D077126BE4CA3FE45A302 *, TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_tC9FFC78A73E6932AA70D077126BE4CA3FE45A302 *)L_0, (TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 )L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.UInt32>::Cast<System.UInt16>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t EnumHelper_1_Cast_TisUInt16_t894EA9D4FB7C799B244E7BBF2DF0EEEDBC77A8BD_m94D085B9736D957266DB80B43AA1658CA1F7F483_gshared (uint16_t ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_t1C80BF86214358F246CD19A956D8B220FCA25D7B * L_0 = ((Caster_1_t093C74E154CC3D388C2CB09F38F181A557EFFEBE_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		uint16_t L_1 = ___value0;
		NullCheck((Transformer_1_t1C80BF86214358F246CD19A956D8B220FCA25D7B *)L_0);
		uint32_t L_2 = ((  uint32_t (*) (Transformer_1_t1C80BF86214358F246CD19A956D8B220FCA25D7B *, uint16_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_t1C80BF86214358F246CD19A956D8B220FCA25D7B *)L_0, (uint16_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.UInt32>::Cast<System.UInt32>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t EnumHelper_1_Cast_TisUInt32_tE60352A06233E4E69DD198BCC67142159F686B15_mBEEDB8C9DC2227D52CF112D0272B75CEA0003DF0_gshared (uint32_t ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_t814D676F5A4ACC9A116D07D1C0A35D5BABDF8CAE * L_0 = ((Caster_1_t5511E837A8586227F074F7E28421C634A073E16A_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		uint32_t L_1 = ___value0;
		NullCheck((Transformer_1_t814D676F5A4ACC9A116D07D1C0A35D5BABDF8CAE *)L_0);
		uint32_t L_2 = ((  uint32_t (*) (Transformer_1_t814D676F5A4ACC9A116D07D1C0A35D5BABDF8CAE *, uint32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_t814D676F5A4ACC9A116D07D1C0A35D5BABDF8CAE *)L_0, (uint32_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.UInt32>::Cast<System.UInt64>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t EnumHelper_1_Cast_TisUInt64_tEC57511B3E3CA2DBA1BEBD434C6983E31C943281_m973B1C239D56E9B5E06DD022E52B26242C1F4E7E_gshared (uint64_t ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_t005021C08874BCC5C2A50167CE4E532B9CF4CD79 * L_0 = ((Caster_1_t232EC3F74CC0AC8B7BB52B78D3FF1DD8CB08C472_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		uint64_t L_1 = ___value0;
		NullCheck((Transformer_1_t005021C08874BCC5C2A50167CE4E532B9CF4CD79 *)L_0);
		uint32_t L_2 = ((  uint32_t (*) (Transformer_1_t005021C08874BCC5C2A50167CE4E532B9CF4CD79 *, uint64_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_t005021C08874BCC5C2A50167CE4E532B9CF4CD79 *)L_0, (uint64_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.UInt32>::Cast<System.UIntPtr>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t EnumHelper_1_Cast_TisUIntPtr_t_mCEDADB5B365CA2C0104D7EA2F0CE498BD7E78BD2_gshared (uintptr_t ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_t30E16CDE25487279253BB11A42DBEE6A21368087 * L_0 = ((Caster_1_tEDA4AF60F40734E22B03C10431C74F8444BD6EA6_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		uintptr_t L_1 = ___value0;
		NullCheck((Transformer_1_t30E16CDE25487279253BB11A42DBEE6A21368087 *)L_0);
		uint32_t L_2 = ((  uint32_t (*) (Transformer_1_t30E16CDE25487279253BB11A42DBEE6A21368087 *, uintptr_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_t30E16CDE25487279253BB11A42DBEE6A21368087 *)L_0, (uintptr_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.UInt32>::Cast<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t EnumHelper_1_Cast_TisKeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625_m3D3425DA3AD77C19937F266690530CEF55B54AC9_gshared (KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625  ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_t130D77E1B8D207F951F6D90F2C4A8E3792897617 * L_0 = ((Caster_1_t815F5BE908D188229045CE6394C20260EF7CD34A_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625  L_1 = ___value0;
		NullCheck((Transformer_1_t130D77E1B8D207F951F6D90F2C4A8E3792897617 *)L_0);
		uint32_t L_2 = ((  uint32_t (*) (Transformer_1_t130D77E1B8D207F951F6D90F2C4A8E3792897617 *, KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_t130D77E1B8D207F951F6D90F2C4A8E3792897617 *)L_0, (KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 )L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.UInt64>::Cast<System.Boolean>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t EnumHelper_1_Cast_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_m2D0DAEAF673DBBC7663181E556CD14A3322C3F9D_gshared (bool ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_t80B7BC576266310FBF99805713CB124FB1325AFD * L_0 = ((Caster_1_t9FE3224C68AEE6C4ABA9C3A09F120EDA52A78A85_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		bool L_1 = ___value0;
		NullCheck((Transformer_1_t80B7BC576266310FBF99805713CB124FB1325AFD *)L_0);
		uint64_t L_2 = ((  uint64_t (*) (Transformer_1_t80B7BC576266310FBF99805713CB124FB1325AFD *, bool, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_t80B7BC576266310FBF99805713CB124FB1325AFD *)L_0, (bool)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.UInt64>::Cast<System.Byte>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t EnumHelper_1_Cast_TisByte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_mEC292A013AF98D9D2BA9C1203C76263EE1FA1672_gshared (uint8_t ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_tB710AA1A4EF63E7A608E1F3552AD32FF1D7EC200 * L_0 = ((Caster_1_tD07A01A4AB8A981E25B1815E0F56DBBA481FB488_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		uint8_t L_1 = ___value0;
		NullCheck((Transformer_1_tB710AA1A4EF63E7A608E1F3552AD32FF1D7EC200 *)L_0);
		uint64_t L_2 = ((  uint64_t (*) (Transformer_1_tB710AA1A4EF63E7A608E1F3552AD32FF1D7EC200 *, uint8_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_tB710AA1A4EF63E7A608E1F3552AD32FF1D7EC200 *)L_0, (uint8_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.UInt64>::Cast<System.Char>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t EnumHelper_1_Cast_TisChar_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_mAA1E48492DDE9533BDD5DFAE885A85FAD297F015_gshared (Il2CppChar ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_t4C49EDB12597C819D2161020E90B0C9F2BFA6CB2 * L_0 = ((Caster_1_t23E1BEDEA465B2FE0C4BC88DF482A3A0621245E2_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		Il2CppChar L_1 = ___value0;
		NullCheck((Transformer_1_t4C49EDB12597C819D2161020E90B0C9F2BFA6CB2 *)L_0);
		uint64_t L_2 = ((  uint64_t (*) (Transformer_1_t4C49EDB12597C819D2161020E90B0C9F2BFA6CB2 *, Il2CppChar, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_t4C49EDB12597C819D2161020E90B0C9F2BFA6CB2 *)L_0, (Il2CppChar)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.UInt64>::Cast<System.DateTime>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t EnumHelper_1_Cast_TisDateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_m716333268A5BE70E10A6B8D8804C14CE8ECD6578_gshared (DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_t704F728FBE3D274B344E93D43F1EB70A681EABD0 * L_0 = ((Caster_1_t03F1A22DDCFFB6CA1EE3157E94B9A415498F3E45_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  L_1 = ___value0;
		NullCheck((Transformer_1_t704F728FBE3D274B344E93D43F1EB70A681EABD0 *)L_0);
		uint64_t L_2 = ((  uint64_t (*) (Transformer_1_t704F728FBE3D274B344E93D43F1EB70A681EABD0 *, DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_t704F728FBE3D274B344E93D43F1EB70A681EABD0 *)L_0, (DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 )L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.UInt64>::Cast<System.DateTimeOffset>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t EnumHelper_1_Cast_TisDateTimeOffset_t205B59B1EFB6646DCE3CC50553377BF6023615B5_m1D9F209BD3B66AD5CC1544CD31E5767DE9F8858C_gshared (DateTimeOffset_t205B59B1EFB6646DCE3CC50553377BF6023615B5  ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_t99A6CF18BE9023163F159E1157E9EB2EADB175E5 * L_0 = ((Caster_1_tD466E195E4E33B18AC090BE8227230DD00254871_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		DateTimeOffset_t205B59B1EFB6646DCE3CC50553377BF6023615B5  L_1 = ___value0;
		NullCheck((Transformer_1_t99A6CF18BE9023163F159E1157E9EB2EADB175E5 *)L_0);
		uint64_t L_2 = ((  uint64_t (*) (Transformer_1_t99A6CF18BE9023163F159E1157E9EB2EADB175E5 *, DateTimeOffset_t205B59B1EFB6646DCE3CC50553377BF6023615B5 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_t99A6CF18BE9023163F159E1157E9EB2EADB175E5 *)L_0, (DateTimeOffset_t205B59B1EFB6646DCE3CC50553377BF6023615B5 )L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.UInt64>::Cast<System.Decimal>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t EnumHelper_1_Cast_TisDecimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7_m01D55EB8AFF1FD6D4246BA3C41316978C4B0DA35_gshared (Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_t2097FB14F7FB610418928F6C00B8B3C776B86D03 * L_0 = ((Caster_1_t356F1486915070BEE950AE11D1BF52A9C2C0DE20_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  L_1 = ___value0;
		NullCheck((Transformer_1_t2097FB14F7FB610418928F6C00B8B3C776B86D03 *)L_0);
		uint64_t L_2 = ((  uint64_t (*) (Transformer_1_t2097FB14F7FB610418928F6C00B8B3C776B86D03 *, Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_t2097FB14F7FB610418928F6C00B8B3C776B86D03 *)L_0, (Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7 )L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.UInt64>::Cast<System.Double>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t EnumHelper_1_Cast_TisDouble_t42821932CB52DE2057E685D0E1AF3DE5033D2181_m4A7F97654D1E670F310238621777BF3A7A7D0956_gshared (double ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_t668A4176A39C3B956441F6D0CCC1AED020F7D6AF * L_0 = ((Caster_1_t204C853C13D273E3449FC5E906E5E6B941CCD600_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		double L_1 = ___value0;
		NullCheck((Transformer_1_t668A4176A39C3B956441F6D0CCC1AED020F7D6AF *)L_0);
		uint64_t L_2 = ((  uint64_t (*) (Transformer_1_t668A4176A39C3B956441F6D0CCC1AED020F7D6AF *, double, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_t668A4176A39C3B956441F6D0CCC1AED020F7D6AF *)L_0, (double)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.UInt64>::Cast<System.Diagnostics.Tracing.EmptyStruct>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t EnumHelper_1_Cast_TisEmptyStruct_t4261C00C8DDCEA2FE01A2264519DDB55BA275F62_m875E27CF4439D28859E9B6D69834028016E8CC34_gshared (EmptyStruct_t4261C00C8DDCEA2FE01A2264519DDB55BA275F62  ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_t4B5213C886234DE9246BB2EED20A4270B0BF8241 * L_0 = ((Caster_1_t42349D34EA9FAC76F234F2F981A14480957DCAE5_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		EmptyStruct_t4261C00C8DDCEA2FE01A2264519DDB55BA275F62  L_1 = ___value0;
		NullCheck((Transformer_1_t4B5213C886234DE9246BB2EED20A4270B0BF8241 *)L_0);
		uint64_t L_2 = ((  uint64_t (*) (Transformer_1_t4B5213C886234DE9246BB2EED20A4270B0BF8241 *, EmptyStruct_t4261C00C8DDCEA2FE01A2264519DDB55BA275F62 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_t4B5213C886234DE9246BB2EED20A4270B0BF8241 *)L_0, (EmptyStruct_t4261C00C8DDCEA2FE01A2264519DDB55BA275F62 )L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.UInt64>::Cast<System.Guid>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t EnumHelper_1_Cast_TisGuid_t_m0DE322AAB4218C24F71BA1CC5FC274A83A08315D_gshared (Guid_t  ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_t33F4656CC027550D29904EEB3703DEA5DB5A933E * L_0 = ((Caster_1_t868D5311D106D9FE55DBB4F56BFA1F80AB361666_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		Guid_t  L_1 = ___value0;
		NullCheck((Transformer_1_t33F4656CC027550D29904EEB3703DEA5DB5A933E *)L_0);
		uint64_t L_2 = ((  uint64_t (*) (Transformer_1_t33F4656CC027550D29904EEB3703DEA5DB5A933E *, Guid_t , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_t33F4656CC027550D29904EEB3703DEA5DB5A933E *)L_0, (Guid_t )L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.UInt64>::Cast<System.Int16>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t EnumHelper_1_Cast_TisInt16_tD0F031114106263BB459DA1F099FF9F42691295A_m521CB6E1FBBE029F3484B6D2FDFA4D3E345E83CF_gshared (int16_t ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_t984F8DDF73126BB7D0564B2C8DB5B43DADEB1B87 * L_0 = ((Caster_1_tB91A82FA14A4A4E569EB93553EA899B6FBBA7E78_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		int16_t L_1 = ___value0;
		NullCheck((Transformer_1_t984F8DDF73126BB7D0564B2C8DB5B43DADEB1B87 *)L_0);
		uint64_t L_2 = ((  uint64_t (*) (Transformer_1_t984F8DDF73126BB7D0564B2C8DB5B43DADEB1B87 *, int16_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_t984F8DDF73126BB7D0564B2C8DB5B43DADEB1B87 *)L_0, (int16_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.UInt64>::Cast<System.Int32>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t EnumHelper_1_Cast_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m5803F399300063B8BBE04C85068D81DE0F483F85_gshared (int32_t ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_t9E27086EA83291A9CB562EC6DF2DDCF1F811D348 * L_0 = ((Caster_1_tE1DD30AB4029612CD56B09122178FD4DF29CEA5E_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		int32_t L_1 = ___value0;
		NullCheck((Transformer_1_t9E27086EA83291A9CB562EC6DF2DDCF1F811D348 *)L_0);
		uint64_t L_2 = ((  uint64_t (*) (Transformer_1_t9E27086EA83291A9CB562EC6DF2DDCF1F811D348 *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_t9E27086EA83291A9CB562EC6DF2DDCF1F811D348 *)L_0, (int32_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.UInt64>::Cast<System.Int64>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t EnumHelper_1_Cast_TisInt64_t378EE0D608BD3107E77238E85F30D2BBD46981F3_m258C0D7FA5FA14AB3781EE1C21817896A6F17764_gshared (int64_t ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_tE5AF7FD8199D2F817240AC1D32C549AE12D4AAE9 * L_0 = ((Caster_1_t168FC169D2FD7651A831F26A3AF8F79C89700F84_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		int64_t L_1 = ___value0;
		NullCheck((Transformer_1_tE5AF7FD8199D2F817240AC1D32C549AE12D4AAE9 *)L_0);
		uint64_t L_2 = ((  uint64_t (*) (Transformer_1_tE5AF7FD8199D2F817240AC1D32C549AE12D4AAE9 *, int64_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_tE5AF7FD8199D2F817240AC1D32C549AE12D4AAE9 *)L_0, (int64_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.UInt64>::Cast<System.IntPtr>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t EnumHelper_1_Cast_TisIntPtr_t_m0FBCA2E254ACF92C1AF80F2B507A69B313AAC27D_gshared (intptr_t ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_t9509B600985704E02CF30F84A4CA3E70DFDC190C * L_0 = ((Caster_1_t40BE0AF08E046636C00A1A588EB58F2F3377E223_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		intptr_t L_1 = ___value0;
		NullCheck((Transformer_1_t9509B600985704E02CF30F84A4CA3E70DFDC190C *)L_0);
		uint64_t L_2 = ((  uint64_t (*) (Transformer_1_t9509B600985704E02CF30F84A4CA3E70DFDC190C *, intptr_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_t9509B600985704E02CF30F84A4CA3E70DFDC190C *)L_0, (intptr_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.UInt64>::Cast<System.Object>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t EnumHelper_1_Cast_TisRuntimeObject_mD0EC4DC725D1E27363C98E68C38184DD6D475C9C_gshared (RuntimeObject * ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_t65B23DA04E78FC4F4D12CDB469679D9D5C4ED9C4 * L_0 = ((Caster_1_t12DF6952392D0FED624EF47F6DE9D2FB1F8B046D_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		RuntimeObject * L_1 = ___value0;
		NullCheck((Transformer_1_t65B23DA04E78FC4F4D12CDB469679D9D5C4ED9C4 *)L_0);
		uint64_t L_2 = ((  uint64_t (*) (Transformer_1_t65B23DA04E78FC4F4D12CDB469679D9D5C4ED9C4 *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_t65B23DA04E78FC4F4D12CDB469679D9D5C4ED9C4 *)L_0, (RuntimeObject *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.UInt64>::Cast<System.SByte>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t EnumHelper_1_Cast_TisSByte_t928712DD662DC29BA4FAAE8CE2230AFB23447F0B_m898262DB9241A6926DEE049C4728D511132B0C12_gshared (int8_t ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_tD9F86289E24471473065EC7A0AC7282EFFF25909 * L_0 = ((Caster_1_tF4338CF2303C845BF3E79CEBCBE82A0DE79DC6AD_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		int8_t L_1 = ___value0;
		NullCheck((Transformer_1_tD9F86289E24471473065EC7A0AC7282EFFF25909 *)L_0);
		uint64_t L_2 = ((  uint64_t (*) (Transformer_1_tD9F86289E24471473065EC7A0AC7282EFFF25909 *, int8_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_tD9F86289E24471473065EC7A0AC7282EFFF25909 *)L_0, (int8_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.UInt64>::Cast<System.Single>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t EnumHelper_1_Cast_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_m5B04965319B365F33F33EB1E72A4F6434B290736_gshared (float ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_tD47677532E0EB9F83E58642BAF11E614584BE1E4 * L_0 = ((Caster_1_tF67DB938E6F11BBA2F382812E0A292FC1A5C2C0E_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		float L_1 = ___value0;
		NullCheck((Transformer_1_tD47677532E0EB9F83E58642BAF11E614584BE1E4 *)L_0);
		uint64_t L_2 = ((  uint64_t (*) (Transformer_1_tD47677532E0EB9F83E58642BAF11E614584BE1E4 *, float, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_tD47677532E0EB9F83E58642BAF11E614584BE1E4 *)L_0, (float)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.UInt64>::Cast<System.TimeSpan>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t EnumHelper_1_Cast_TisTimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203_m6106F1D8C44FA73CEF921CEE3BFC189E946C6645_gshared (TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_tFE1A34D9527A7310C69F3A1F2171ADE7234E1D64 * L_0 = ((Caster_1_t9A297416E25E59EF55DA67381A6AACA321D6402C_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  L_1 = ___value0;
		NullCheck((Transformer_1_tFE1A34D9527A7310C69F3A1F2171ADE7234E1D64 *)L_0);
		uint64_t L_2 = ((  uint64_t (*) (Transformer_1_tFE1A34D9527A7310C69F3A1F2171ADE7234E1D64 *, TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_tFE1A34D9527A7310C69F3A1F2171ADE7234E1D64 *)L_0, (TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 )L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.UInt64>::Cast<System.UInt16>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t EnumHelper_1_Cast_TisUInt16_t894EA9D4FB7C799B244E7BBF2DF0EEEDBC77A8BD_m5358E01BC4E22423981D62DBF9DCC0A7FB048F4F_gshared (uint16_t ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_tB25EE30C228D308ED1E3D17E8A08E8FF7F6A0D77 * L_0 = ((Caster_1_t0AB03EBEEE4F0D9B08B36FE7BD6A6159AFEEDF12_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		uint16_t L_1 = ___value0;
		NullCheck((Transformer_1_tB25EE30C228D308ED1E3D17E8A08E8FF7F6A0D77 *)L_0);
		uint64_t L_2 = ((  uint64_t (*) (Transformer_1_tB25EE30C228D308ED1E3D17E8A08E8FF7F6A0D77 *, uint16_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_tB25EE30C228D308ED1E3D17E8A08E8FF7F6A0D77 *)L_0, (uint16_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.UInt64>::Cast<System.UInt32>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t EnumHelper_1_Cast_TisUInt32_tE60352A06233E4E69DD198BCC67142159F686B15_mAA077A77307C699D3380DEB5CC4BEECBBBEF7E10_gshared (uint32_t ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_t39A024DD4A4E9FB07B8999CACF5FA5483C6572BF * L_0 = ((Caster_1_t06142C64346ABC2D451ADF4CB9E980C5CA27CD88_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		uint32_t L_1 = ___value0;
		NullCheck((Transformer_1_t39A024DD4A4E9FB07B8999CACF5FA5483C6572BF *)L_0);
		uint64_t L_2 = ((  uint64_t (*) (Transformer_1_t39A024DD4A4E9FB07B8999CACF5FA5483C6572BF *, uint32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_t39A024DD4A4E9FB07B8999CACF5FA5483C6572BF *)L_0, (uint32_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.UInt64>::Cast<System.UInt64>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t EnumHelper_1_Cast_TisUInt64_tEC57511B3E3CA2DBA1BEBD434C6983E31C943281_m69DE990C71B6A7929FC75241269E8049AE2D094D_gshared (uint64_t ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_t236D9CA15237017ADE5E5DF9D4F03CC889C8C551 * L_0 = ((Caster_1_t920F9B7FFCFDFB9B9024484E88617329683105F2_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		uint64_t L_1 = ___value0;
		NullCheck((Transformer_1_t236D9CA15237017ADE5E5DF9D4F03CC889C8C551 *)L_0);
		uint64_t L_2 = ((  uint64_t (*) (Transformer_1_t236D9CA15237017ADE5E5DF9D4F03CC889C8C551 *, uint64_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_t236D9CA15237017ADE5E5DF9D4F03CC889C8C551 *)L_0, (uint64_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.UInt64>::Cast<System.UIntPtr>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t EnumHelper_1_Cast_TisUIntPtr_t_m808B88700355E1CEBBDE3479FD7F9D2C0683C6D6_gshared (uintptr_t ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_t191E38853FA538EEEDB722F48BA28E2796E116E1 * L_0 = ((Caster_1_t59015BBD0A7090C4DD0FEB6C85876BA881B2E1A3_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		uintptr_t L_1 = ___value0;
		NullCheck((Transformer_1_t191E38853FA538EEEDB722F48BA28E2796E116E1 *)L_0);
		uint64_t L_2 = ((  uint64_t (*) (Transformer_1_t191E38853FA538EEEDB722F48BA28E2796E116E1 *, uintptr_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_t191E38853FA538EEEDB722F48BA28E2796E116E1 *)L_0, (uintptr_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.UInt64>::Cast<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t EnumHelper_1_Cast_TisKeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625_m11C6DEE92CD83EACFD4DB69B58647CC410AA88B8_gshared (KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625  ___value0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_t1DD85867F626725FB9A574D7B656426FB6D860E7 * L_0 = ((Caster_1_tB9CE9C085D67ADB638BA02C0CA3D2578A8DBD1A1_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625  L_1 = ___value0;
		NullCheck((Transformer_1_t1DD85867F626725FB9A574D7B656426FB6D860E7 *)L_0);
		uint64_t L_2 = ((  uint64_t (*) (Transformer_1_t1DD85867F626725FB9A574D7B656426FB6D860E7 *, KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_t1DD85867F626725FB9A574D7B656426FB6D860E7 *)L_0, (KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 )L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return L_2;
	}
}
// System.Linq.IOrderedEnumerable`1<TElement> System.Linq.OrderedEnumerable`1<System.Object>::System.Linq.IOrderedEnumerable<TElement>.CreateOrderedEnumerable<System.UInt32>(System.Func`2<TElement,TKey>,System.Collections.Generic.IComparer`1<TKey>,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* OrderedEnumerable_1_System_Linq_IOrderedEnumerableU3CTElementU3E_CreateOrderedEnumerable_TisUInt32_tE60352A06233E4E69DD198BCC67142159F686B15_m955AFFB9468F95B4A8BFFD8DCA49D55B552F1346_gshared (OrderedEnumerable_1_t4ED7F4DE53F413B48E5FCFAFE1EFE1B04A7B5F6F * __this, Func_2_tC3246CBAFBB962E2C6075141A9B6BFC365266428 * ___keySelector0, RuntimeObject* ___comparer1, bool ___descending2, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->get_source_0();
		Func_2_tC3246CBAFBB962E2C6075141A9B6BFC365266428 * L_1 = ___keySelector0;
		RuntimeObject* L_2 = ___comparer1;
		bool L_3 = ___descending2;
		OrderedEnumerable_2_t8CF56BCC85D75AC0001F38B4B1F1EEEE9D2F8CB5 * L_4 = (OrderedEnumerable_2_t8CF56BCC85D75AC0001F38B4B1F1EEEE9D2F8CB5 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		((  void (*) (OrderedEnumerable_2_t8CF56BCC85D75AC0001F38B4B1F1EEEE9D2F8CB5 *, RuntimeObject*, Func_2_tC3246CBAFBB962E2C6075141A9B6BFC365266428 *, RuntimeObject*, bool, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)(L_4, (RuntimeObject*)L_0, (Func_2_tC3246CBAFBB962E2C6075141A9B6BFC365266428 *)L_1, (RuntimeObject*)L_2, (bool)L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		OrderedEnumerable_2_t8CF56BCC85D75AC0001F38B4B1F1EEEE9D2F8CB5 * L_5 = (OrderedEnumerable_2_t8CF56BCC85D75AC0001F38B4B1F1EEEE9D2F8CB5 *)L_4;
		NullCheck(L_5);
		L_5->set_parent_1(__this);
		return L_5;
	}
}
// System.Linq.IOrderedEnumerable`1<TElement> System.Linq.OrderedEnumerable`1<System.Object>::System.Linq.IOrderedEnumerable<TElement>.CreateOrderedEnumerable<System.Object>(System.Func`2<TElement,TKey>,System.Collections.Generic.IComparer`1<TKey>,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* OrderedEnumerable_1_System_Linq_IOrderedEnumerableU3CTElementU3E_CreateOrderedEnumerable_TisRuntimeObject_m943FAA9D7BB13581F7827399CE1CB7FD6755F33F_gshared (OrderedEnumerable_1_t4ED7F4DE53F413B48E5FCFAFE1EFE1B04A7B5F6F * __this, Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 * ___keySelector0, RuntimeObject* ___comparer1, bool ___descending2, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->get_source_0();
		Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 * L_1 = ___keySelector0;
		RuntimeObject* L_2 = ___comparer1;
		bool L_3 = ___descending2;
		OrderedEnumerable_2_t2D037583B9C1B804D9A950293C2165363EED62BA * L_4 = (OrderedEnumerable_2_t2D037583B9C1B804D9A950293C2165363EED62BA *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		((  void (*) (OrderedEnumerable_2_t2D037583B9C1B804D9A950293C2165363EED62BA *, RuntimeObject*, Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 *, RuntimeObject*, bool, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)(L_4, (RuntimeObject*)L_0, (Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 *)L_1, (RuntimeObject*)L_2, (bool)L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		OrderedEnumerable_2_t2D037583B9C1B804D9A950293C2165363EED62BA * L_5 = (OrderedEnumerable_2_t2D037583B9C1B804D9A950293C2165363EED62BA *)L_4;
		NullCheck(L_5);
		L_5->set_parent_1(__this);
		return L_5;
	}
}
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable_WhereArrayIterator`1<System.Object>::Select<System.Object>(System.Func`2<TSource,TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereArrayIterator_1_Select_TisRuntimeObject_m3F62D1BC0508A986BB7AFE1B34D82A3AE058BAEA_gshared (WhereArrayIterator_1_t7D84D638EB94F5CC3BE1B29D8FC781CA8CD15A86 * __this, Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 * ___selector0, const RuntimeMethod* method)
{
	{
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_0 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)__this->get_source_3();
		Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * L_1 = (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)__this->get_predicate_4();
		Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 * L_2 = ___selector0;
		WhereSelectArrayIterator_2_tA706D5B1608A9A8F1BF43C6E5D9D682C901DB244 * L_3 = (WhereSelectArrayIterator_2_tA706D5B1608A9A8F1BF43C6E5D9D682C901DB244 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		((  void (*) (WhereSelectArrayIterator_2_tA706D5B1608A9A8F1BF43C6E5D9D682C901DB244 *, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*, Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *, Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)(L_3, (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)L_0, (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)L_1, (Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return L_3;
	}
}
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable_WhereEnumerableIterator`1<System.Int32>::Select<System.Int32>(System.Func`2<TSource,TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereEnumerableIterator_1_Select_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m5A1BADBD6A2B66CC73B08F543B58AC35E7F4ADA1_gshared (WhereEnumerableIterator_1_t9F4DDC70173BABD72AEC7AA00D62F4FAE2613CEA * __this, Func_2_tFF6AE79EFD0857556AD37A1A1594C43F76012FEA * ___selector0, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->get_source_3();
		Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 * L_1 = (Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 *)__this->get_predicate_4();
		Func_2_tFF6AE79EFD0857556AD37A1A1594C43F76012FEA * L_2 = ___selector0;
		WhereSelectEnumerableIterator_2_t70C236BD8C0DBBA43FCE3CE4E4F6B545579333EF * L_3 = (WhereSelectEnumerableIterator_2_t70C236BD8C0DBBA43FCE3CE4E4F6B545579333EF *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		((  void (*) (WhereSelectEnumerableIterator_2_t70C236BD8C0DBBA43FCE3CE4E4F6B545579333EF *, RuntimeObject*, Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 *, Func_2_tFF6AE79EFD0857556AD37A1A1594C43F76012FEA *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)(L_3, (RuntimeObject*)L_0, (Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 *)L_1, (Func_2_tFF6AE79EFD0857556AD37A1A1594C43F76012FEA *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return L_3;
	}
}
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable_WhereEnumerableIterator`1<System.Object>::Select<System.Object>(System.Func`2<TSource,TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereEnumerableIterator_1_Select_TisRuntimeObject_m86824588E74E4D4FF560E2E0EF019C56C083890D_gshared (WhereEnumerableIterator_1_t1E9FDCFD8F8136C6A5A5740C1E093EF03F0B5CE0 * __this, Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 * ___selector0, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->get_source_3();
		Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * L_1 = (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)__this->get_predicate_4();
		Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 * L_2 = ___selector0;
		WhereSelectEnumerableIterator_2_tDAA8BFBEA68F81670F3F51C6200EBD26D7A8FBAB * L_3 = (WhereSelectEnumerableIterator_2_tDAA8BFBEA68F81670F3F51C6200EBD26D7A8FBAB *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		((  void (*) (WhereSelectEnumerableIterator_2_tDAA8BFBEA68F81670F3F51C6200EBD26D7A8FBAB *, RuntimeObject*, Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *, Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)(L_3, (RuntimeObject*)L_0, (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)L_1, (Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return L_3;
	}
}
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable_WhereListIterator`1<System.Object>::Select<System.Object>(System.Func`2<TSource,TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereListIterator_1_Select_TisRuntimeObject_m4531C1631D6A7374AE147B6A1A51D157BD6EA395_gshared (WhereListIterator_1_t42618389DB998070E03A982D15FA39BCA1DB56BD * __this, Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 * ___selector0, const RuntimeMethod* method)
{
	{
		List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * L_0 = (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *)__this->get_source_3();
		Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * L_1 = (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)__this->get_predicate_4();
		Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 * L_2 = ___selector0;
		WhereSelectListIterator_2_t85B78DFF0573BC95A62C79D6088FA39DFEBE1AF2 * L_3 = (WhereSelectListIterator_2_t85B78DFF0573BC95A62C79D6088FA39DFEBE1AF2 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		((  void (*) (WhereSelectListIterator_2_t85B78DFF0573BC95A62C79D6088FA39DFEBE1AF2 *, List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *, Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *, Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)(L_3, (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *)L_0, (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)L_1, (Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return L_3;
	}
}
// System.Collections.Generic.IEnumerable`1<TResult2> System.Linq.Enumerable_WhereSelectArrayIterator`2<System.Int32,System.Int32>::Select<System.Int32>(System.Func`2<TResult,TResult2>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectArrayIterator_2_Select_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_mD3B8936E043C5A70787F83CD64CEC2D11E953E97_gshared (WhereSelectArrayIterator_2_t00D4CC16A86C24F0CC80D3112E1FA2D451FF5D0C * __this, Func_2_tFF6AE79EFD0857556AD37A1A1594C43F76012FEA * ___selector0, const RuntimeMethod* method)
{
	{
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_0 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)__this->get_source_3();
		Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 * L_1 = (Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 *)__this->get_predicate_4();
		Func_2_tFF6AE79EFD0857556AD37A1A1594C43F76012FEA * L_2 = (Func_2_tFF6AE79EFD0857556AD37A1A1594C43F76012FEA *)__this->get_selector_5();
		Func_2_tFF6AE79EFD0857556AD37A1A1594C43F76012FEA * L_3 = ___selector0;
		Func_2_tFF6AE79EFD0857556AD37A1A1594C43F76012FEA * L_4 = ((  Func_2_tFF6AE79EFD0857556AD37A1A1594C43F76012FEA * (*) (Func_2_tFF6AE79EFD0857556AD37A1A1594C43F76012FEA *, Func_2_tFF6AE79EFD0857556AD37A1A1594C43F76012FEA *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)((Func_2_tFF6AE79EFD0857556AD37A1A1594C43F76012FEA *)L_2, (Func_2_tFF6AE79EFD0857556AD37A1A1594C43F76012FEA *)L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		WhereSelectArrayIterator_2_t00D4CC16A86C24F0CC80D3112E1FA2D451FF5D0C * L_5 = (WhereSelectArrayIterator_2_t00D4CC16A86C24F0CC80D3112E1FA2D451FF5D0C *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->rgctx_data, 1));
		((  void (*) (WhereSelectArrayIterator_2_t00D4CC16A86C24F0CC80D3112E1FA2D451FF5D0C *, Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*, Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 *, Func_2_tFF6AE79EFD0857556AD37A1A1594C43F76012FEA *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2)->methodPointer)(L_5, (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)L_0, (Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 *)L_1, (Func_2_tFF6AE79EFD0857556AD37A1A1594C43F76012FEA *)L_4, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2));
		return L_5;
	}
}
// System.Collections.Generic.IEnumerable`1<TResult2> System.Linq.Enumerable_WhereSelectArrayIterator`2<System.Object,System.Object>::Select<System.Object>(System.Func`2<TResult,TResult2>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectArrayIterator_2_Select_TisRuntimeObject_mD506A268CB28E27A66AF4279C67FF2A2FC60480F_gshared (WhereSelectArrayIterator_2_tA706D5B1608A9A8F1BF43C6E5D9D682C901DB244 * __this, Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 * ___selector0, const RuntimeMethod* method)
{
	{
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_0 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)__this->get_source_3();
		Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * L_1 = (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)__this->get_predicate_4();
		Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 * L_2 = (Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 *)__this->get_selector_5();
		Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 * L_3 = ___selector0;
		Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 * L_4 = ((  Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 * (*) (Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 *, Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)((Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 *)L_2, (Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 *)L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		WhereSelectArrayIterator_2_tA706D5B1608A9A8F1BF43C6E5D9D682C901DB244 * L_5 = (WhereSelectArrayIterator_2_tA706D5B1608A9A8F1BF43C6E5D9D682C901DB244 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->rgctx_data, 1));
		((  void (*) (WhereSelectArrayIterator_2_tA706D5B1608A9A8F1BF43C6E5D9D682C901DB244 *, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*, Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *, Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2)->methodPointer)(L_5, (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)L_0, (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)L_1, (Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 *)L_4, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2));
		return L_5;
	}
}
// System.Collections.Generic.IEnumerable`1<TResult2> System.Linq.Enumerable_WhereSelectEnumerableIterator`2<System.Int32,System.Int32>::Select<System.Int32>(System.Func`2<TResult,TResult2>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectEnumerableIterator_2_Select_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m327FB113A9C792CCDCF167A4615EB5FC28D95309_gshared (WhereSelectEnumerableIterator_2_t70C236BD8C0DBBA43FCE3CE4E4F6B545579333EF * __this, Func_2_tFF6AE79EFD0857556AD37A1A1594C43F76012FEA * ___selector0, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->get_source_3();
		Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 * L_1 = (Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 *)__this->get_predicate_4();
		Func_2_tFF6AE79EFD0857556AD37A1A1594C43F76012FEA * L_2 = (Func_2_tFF6AE79EFD0857556AD37A1A1594C43F76012FEA *)__this->get_selector_5();
		Func_2_tFF6AE79EFD0857556AD37A1A1594C43F76012FEA * L_3 = ___selector0;
		Func_2_tFF6AE79EFD0857556AD37A1A1594C43F76012FEA * L_4 = ((  Func_2_tFF6AE79EFD0857556AD37A1A1594C43F76012FEA * (*) (Func_2_tFF6AE79EFD0857556AD37A1A1594C43F76012FEA *, Func_2_tFF6AE79EFD0857556AD37A1A1594C43F76012FEA *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)((Func_2_tFF6AE79EFD0857556AD37A1A1594C43F76012FEA *)L_2, (Func_2_tFF6AE79EFD0857556AD37A1A1594C43F76012FEA *)L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		WhereSelectEnumerableIterator_2_t70C236BD8C0DBBA43FCE3CE4E4F6B545579333EF * L_5 = (WhereSelectEnumerableIterator_2_t70C236BD8C0DBBA43FCE3CE4E4F6B545579333EF *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->rgctx_data, 1));
		((  void (*) (WhereSelectEnumerableIterator_2_t70C236BD8C0DBBA43FCE3CE4E4F6B545579333EF *, RuntimeObject*, Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 *, Func_2_tFF6AE79EFD0857556AD37A1A1594C43F76012FEA *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2)->methodPointer)(L_5, (RuntimeObject*)L_0, (Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 *)L_1, (Func_2_tFF6AE79EFD0857556AD37A1A1594C43F76012FEA *)L_4, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2));
		return L_5;
	}
}
// System.Collections.Generic.IEnumerable`1<TResult2> System.Linq.Enumerable_WhereSelectEnumerableIterator`2<System.Object,System.Object>::Select<System.Object>(System.Func`2<TResult,TResult2>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectEnumerableIterator_2_Select_TisRuntimeObject_m235EF3D30EA338CBBA7505DC21C0A5E844439E3E_gshared (WhereSelectEnumerableIterator_2_tDAA8BFBEA68F81670F3F51C6200EBD26D7A8FBAB * __this, Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 * ___selector0, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->get_source_3();
		Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * L_1 = (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)__this->get_predicate_4();
		Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 * L_2 = (Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 *)__this->get_selector_5();
		Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 * L_3 = ___selector0;
		Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 * L_4 = ((  Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 * (*) (Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 *, Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)((Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 *)L_2, (Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 *)L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		WhereSelectEnumerableIterator_2_tDAA8BFBEA68F81670F3F51C6200EBD26D7A8FBAB * L_5 = (WhereSelectEnumerableIterator_2_tDAA8BFBEA68F81670F3F51C6200EBD26D7A8FBAB *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->rgctx_data, 1));
		((  void (*) (WhereSelectEnumerableIterator_2_tDAA8BFBEA68F81670F3F51C6200EBD26D7A8FBAB *, RuntimeObject*, Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *, Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2)->methodPointer)(L_5, (RuntimeObject*)L_0, (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)L_1, (Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 *)L_4, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2));
		return L_5;
	}
}
// System.Collections.Generic.IEnumerable`1<TResult2> System.Linq.Enumerable_WhereSelectListIterator`2<System.Int32,System.Int32>::Select<System.Int32>(System.Func`2<TResult,TResult2>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectListIterator_2_Select_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_mC28550080B7C7F1565706C242A5BB56C7EFD3FAB_gshared (WhereSelectListIterator_2_t4CC3FE3A35610DC6F761EE7DB863B845957AD325 * __this, Func_2_tFF6AE79EFD0857556AD37A1A1594C43F76012FEA * ___selector0, const RuntimeMethod* method)
{
	{
		List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * L_0 = (List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 *)__this->get_source_3();
		Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 * L_1 = (Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 *)__this->get_predicate_4();
		Func_2_tFF6AE79EFD0857556AD37A1A1594C43F76012FEA * L_2 = (Func_2_tFF6AE79EFD0857556AD37A1A1594C43F76012FEA *)__this->get_selector_5();
		Func_2_tFF6AE79EFD0857556AD37A1A1594C43F76012FEA * L_3 = ___selector0;
		Func_2_tFF6AE79EFD0857556AD37A1A1594C43F76012FEA * L_4 = ((  Func_2_tFF6AE79EFD0857556AD37A1A1594C43F76012FEA * (*) (Func_2_tFF6AE79EFD0857556AD37A1A1594C43F76012FEA *, Func_2_tFF6AE79EFD0857556AD37A1A1594C43F76012FEA *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)((Func_2_tFF6AE79EFD0857556AD37A1A1594C43F76012FEA *)L_2, (Func_2_tFF6AE79EFD0857556AD37A1A1594C43F76012FEA *)L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		WhereSelectListIterator_2_t4CC3FE3A35610DC6F761EE7DB863B845957AD325 * L_5 = (WhereSelectListIterator_2_t4CC3FE3A35610DC6F761EE7DB863B845957AD325 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->rgctx_data, 1));
		((  void (*) (WhereSelectListIterator_2_t4CC3FE3A35610DC6F761EE7DB863B845957AD325 *, List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 *, Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 *, Func_2_tFF6AE79EFD0857556AD37A1A1594C43F76012FEA *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2)->methodPointer)(L_5, (List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 *)L_0, (Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 *)L_1, (Func_2_tFF6AE79EFD0857556AD37A1A1594C43F76012FEA *)L_4, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2));
		return L_5;
	}
}
// System.Collections.Generic.IEnumerable`1<TResult2> System.Linq.Enumerable_WhereSelectListIterator`2<System.Object,System.Object>::Select<System.Object>(System.Func`2<TResult,TResult2>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectListIterator_2_Select_TisRuntimeObject_m57ACB6C6C928322059DE23054FABD1ED74869A58_gshared (WhereSelectListIterator_2_t85B78DFF0573BC95A62C79D6088FA39DFEBE1AF2 * __this, Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 * ___selector0, const RuntimeMethod* method)
{
	{
		List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * L_0 = (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *)__this->get_source_3();
		Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * L_1 = (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)__this->get_predicate_4();
		Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 * L_2 = (Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 *)__this->get_selector_5();
		Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 * L_3 = ___selector0;
		Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 * L_4 = ((  Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 * (*) (Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 *, Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)((Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 *)L_2, (Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 *)L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		WhereSelectListIterator_2_t85B78DFF0573BC95A62C79D6088FA39DFEBE1AF2 * L_5 = (WhereSelectListIterator_2_t85B78DFF0573BC95A62C79D6088FA39DFEBE1AF2 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->rgctx_data, 1));
		((  void (*) (WhereSelectListIterator_2_t85B78DFF0573BC95A62C79D6088FA39DFEBE1AF2 *, List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *, Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *, Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2)->methodPointer)(L_5, (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *)L_0, (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)L_1, (Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 *)L_4, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2));
		return L_5;
	}
}
