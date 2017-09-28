#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <cstring>
#include <string.h>
#include <stdio.h>
#include <cmath>
#include <limits>
#include <assert.h>

#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Array3829468939.h"
#include "AssemblyU2DCSharp_U3CModuleU3E3783534214.h"
#include "AssemblyU2DCSharp_ChapterController31207323.h"
#include "mscorlib_System_Void1841601450.h"
#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "UnityEngine_UI_UnityEngine_UI_Text356221433.h"
#include "mscorlib_System_String2029220233.h"
#include "AssemblyU2DCSharp_TextController_States2214569690.h"
#include "AssemblyU2DCSharp_TextController949652095.h"
#include "UnityEngine_UnityEngine_SceneManagement_Scene1684909666.h"
#include "mscorlib_System_Boolean3825574718.h"
#include "UnityEngine_UnityEngine_KeyCode2283395152.h"

// ChapterController
struct ChapterController_t31207323;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t1158329972;
// TextController
struct TextController_t949652095;
// System.String
struct String_t;
extern Il2CppCodeGenString* _stringLiteral1896164624;
extern const uint32_t ChapterController_Start_m4095327756_MetadataUsageId;
extern Il2CppClass* TextController_t949652095_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral120953962;
extern Il2CppCodeGenString* _stringLiteral2445430670;
extern Il2CppCodeGenString* _stringLiteral2901353828;
extern Il2CppCodeGenString* _stringLiteral1476124129;
extern Il2CppCodeGenString* _stringLiteral4002083934;
extern Il2CppCodeGenString* _stringLiteral3178465250;
extern const uint32_t ChapterController_Update_m4105536131_MetadataUsageId;
extern Il2CppClass* String_t_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral192354598;
extern Il2CppCodeGenString* _stringLiteral2921237953;
extern const uint32_t TextController_Start_m3645149610_MetadataUsageId;
extern const uint32_t TextController_Update_m1619616711_MetadataUsageId;
extern Il2CppCodeGenString* _stringLiteral4084037367;
extern const uint32_t TextController_load_level2_m1760937211_MetadataUsageId;
extern const uint32_t TextController_load_level3_m1760937116_MetadataUsageId;
extern Il2CppClass* Input_t1785128008_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral1410766593;
extern const uint32_t TextController_intro_m3215691880_MetadataUsageId;
extern Il2CppCodeGenString* _stringLiteral63984588;
extern const uint32_t TextController_entrance_m1053101958_MetadataUsageId;
extern Il2CppCodeGenString* _stringLiteral4124698381;
extern const uint32_t TextController_door_0_m488733563_MetadataUsageId;
extern Il2CppCodeGenString* _stringLiteral2805530022;
extern const uint32_t TextController_ask_0_m3546484176_MetadataUsageId;
extern Il2CppCodeGenString* _stringLiteral3160419644;
extern const uint32_t TextController_gully_m2864555385_MetadataUsageId;
extern Il2CppCodeGenString* _stringLiteral2064166693;
extern const uint32_t TextController_gully_lock_m2995970337_MetadataUsageId;
extern Il2CppCodeGenString* _stringLiteral3005332441;
extern const uint32_t TextController_ask_1_m3546484081_MetadataUsageId;
extern Il2CppCodeGenString* _stringLiteral1504307373;
extern const uint32_t TextController_dungeon_m2518070460_MetadataUsageId;
extern Il2CppCodeGenString* _stringLiteral2212439664;
extern const uint32_t TextController_stairs_m3078146050_MetadataUsageId;
extern Il2CppCodeGenString* _stringLiteral1624193017;
extern const uint32_t TextController_small_door_m3122073924_MetadataUsageId;
extern Il2CppCodeGenString* _stringLiteral3586558649;
extern const uint32_t TextController_book_m3452809167_MetadataUsageId;
extern Il2CppCodeGenString* _stringLiteral204118358;
extern const uint32_t TextController_map_m3942991468_MetadataUsageId;
extern Il2CppCodeGenString* _stringLiteral1125445517;
extern const uint32_t TextController_sewer_m3845413136_MetadataUsageId;
extern Il2CppCodeGenString* _stringLiteral33428099;
extern const uint32_t TextController_small_opening_m2856475814_MetadataUsageId;
extern Il2CppCodeGenString* _stringLiteral397657906;
extern const uint32_t TextController_release_princess_m272475227_MetadataUsageId;
extern Il2CppCodeGenString* _stringLiteral1503964556;
extern const uint32_t TextController_halt_ritual_m3717347419_MetadataUsageId;
extern Il2CppCodeGenString* _stringLiteral308965418;
extern const uint32_t TextController_release_princess1_m70954886_MetadataUsageId;
extern Il2CppCodeGenString* _stringLiteral4115909911;
extern const uint32_t TextController_the_end_m1800270551_MetadataUsageId;




// System.Void UnityEngine.MonoBehaviour::.ctor()
extern "C"  void MonoBehaviour__ctor_m2464341955 (MonoBehaviour_t1158329972 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.SceneManagement.Scene UnityEngine.SceneManagement.SceneManager::GetActiveScene()
extern "C"  Scene_t1684909666  SceneManager_GetActiveScene_m2964039490 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.SceneManagement.Scene::get_name()
extern "C"  String_t* Scene_get_name_m745914591 (Scene_t1684909666 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.String::op_Equality(System.String,System.String)
extern "C"  bool String_op_Equality_m1790663636 (Il2CppObject * __this /* static, unused */, String_t* p0, String_t* p1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TextController::intro()
extern "C"  void TextController_intro_m3215691880 (TextController_t949652095 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TextController::entrance()
extern "C"  void TextController_entrance_m1053101958 (TextController_t949652095 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TextController::door_0()
extern "C"  void TextController_door_0_m488733563 (TextController_t949652095 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TextController::ask_0()
extern "C"  void TextController_ask_0_m3546484176 (TextController_t949652095 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TextController::gully()
extern "C"  void TextController_gully_m2864555385 (TextController_t949652095 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TextController::gully_lock()
extern "C"  void TextController_gully_lock_m2995970337 (TextController_t949652095 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TextController::ask_1()
extern "C"  void TextController_ask_1_m3546484081 (TextController_t949652095 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TextController::load_level2()
extern "C"  void TextController_load_level2_m1760937211 (TextController_t949652095 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TextController::dungeon()
extern "C"  void TextController_dungeon_m2518070460 (TextController_t949652095 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TextController::stairs()
extern "C"  void TextController_stairs_m3078146050 (TextController_t949652095 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TextController::small_door()
extern "C"  void TextController_small_door_m3122073924 (TextController_t949652095 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TextController::book()
extern "C"  void TextController_book_m3452809167 (TextController_t949652095 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TextController::map()
extern "C"  void TextController_map_m3942991468 (TextController_t949652095 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TextController::sewer()
extern "C"  void TextController_sewer_m3845413136 (TextController_t949652095 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TextController::small_opening()
extern "C"  void TextController_small_opening_m2856475814 (TextController_t949652095 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TextController::release_princess()
extern "C"  void TextController_release_princess_m272475227 (TextController_t949652095 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TextController::halt_ritual()
extern "C"  void TextController_halt_ritual_m3717347419 (TextController_t949652095 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TextController::load_level3()
extern "C"  void TextController_load_level3_m1760937116 (TextController_t949652095 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TextController::release_princess1()
extern "C"  void TextController_release_princess1_m70954886 (TextController_t949652095 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TextController::the_end()
extern "C"  void TextController_the_end_m1800270551 (TextController_t949652095 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.SceneManagement.SceneManager::LoadScene(System.String)
extern "C"  void SceneManager_LoadScene_m1619949821 (Il2CppObject * __this /* static, unused */, String_t* p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.String::op_Inequality(System.String,System.String)
extern "C"  bool String_op_Inequality_m304203149 (Il2CppObject * __this /* static, unused */, String_t* p0, String_t* p1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Input::GetKeyDown(UnityEngine.KeyCode)
extern "C"  bool Input_GetKeyDown_m1771960377 (Il2CppObject * __this /* static, unused */, int32_t p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void ChapterController::.ctor()
extern "C"  void ChapterController__ctor_m2322262448 (ChapterController_t31207323 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m2464341955(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void ChapterController::Start()
extern "C"  void ChapterController_Start_m4095327756 (ChapterController_t31207323 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ChapterController_Start_m4095327756_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Text_t356221433 * L_0 = __this->get_text_2();
		VirtActionInvoker1< String_t* >::Invoke(72 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_0, _stringLiteral1896164624);
		return;
	}
}
// System.Void ChapterController::Update()
extern "C"  void ChapterController_Update_m4105536131 (ChapterController_t31207323 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ChapterController_Update_m4105536131_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0 = ((TextController_t949652095_StaticFields*)TextController_t949652095_il2cpp_TypeInfo_var->static_fields)->get_myState_3();
		V_0 = L_0;
		int32_t L_1 = V_0;
		switch (((int32_t)((int32_t)L_1-(int32_t)8)))
		{
			case 0:
			{
				goto IL_008c;
			}
			case 1:
			{
				goto IL_0077;
			}
			case 2:
			{
				goto IL_0077;
			}
			case 3:
			{
				goto IL_0077;
			}
			case 4:
			{
				goto IL_00a1;
			}
			case 5:
			{
				goto IL_0036;
			}
			case 6:
			{
				goto IL_0036;
			}
			case 7:
			{
				goto IL_0036;
			}
			case 8:
			{
				goto IL_00b6;
			}
			case 9:
			{
				goto IL_00a1;
			}
		}
	}

IL_0036:
	{
		int32_t L_2 = V_0;
		switch (L_2)
		{
			case 0:
			{
				goto IL_004d;
			}
			case 1:
			{
				goto IL_00cb;
			}
			case 2:
			{
				goto IL_0062;
			}
		}
	}
	{
		goto IL_00cb;
	}

IL_004d:
	{
		Text_t356221433 * L_3 = __this->get_text_2();
		VirtActionInvoker1< String_t* >::Invoke(72 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_3, _stringLiteral1896164624);
		goto IL_00e0;
	}

IL_0062:
	{
		Text_t356221433 * L_4 = __this->get_text_2();
		VirtActionInvoker1< String_t* >::Invoke(72 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_4, _stringLiteral120953962);
		goto IL_00e0;
	}

IL_0077:
	{
		Text_t356221433 * L_5 = __this->get_text_2();
		VirtActionInvoker1< String_t* >::Invoke(72 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_5, _stringLiteral2445430670);
		goto IL_00e0;
	}

IL_008c:
	{
		Text_t356221433 * L_6 = __this->get_text_2();
		VirtActionInvoker1< String_t* >::Invoke(72 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_6, _stringLiteral2901353828);
		goto IL_00e0;
	}

IL_00a1:
	{
		Text_t356221433 * L_7 = __this->get_text_2();
		VirtActionInvoker1< String_t* >::Invoke(72 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_7, _stringLiteral1476124129);
		goto IL_00e0;
	}

IL_00b6:
	{
		Text_t356221433 * L_8 = __this->get_text_2();
		VirtActionInvoker1< String_t* >::Invoke(72 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_8, _stringLiteral4002083934);
		goto IL_00e0;
	}

IL_00cb:
	{
		Text_t356221433 * L_9 = __this->get_text_2();
		VirtActionInvoker1< String_t* >::Invoke(72 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_9, _stringLiteral3178465250);
		goto IL_00e0;
	}

IL_00e0:
	{
		return;
	}
}
// System.Void TextController::.ctor()
extern "C"  void TextController__ctor_m4032868830 (TextController_t949652095 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m2464341955(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void TextController::Start()
extern "C"  void TextController_Start_m3645149610 (TextController_t949652095 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TextController_Start_m3645149610_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Scene_t1684909666  V_0;
	memset(&V_0, 0, sizeof(V_0));
	String_t* V_1 = NULL;
	{
		Scene_t1684909666  L_0 = SceneManager_GetActiveScene_m2964039490(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_0 = L_0;
		String_t* L_1 = Scene_get_name_m745914591((&V_0), /*hidden argument*/NULL);
		V_1 = L_1;
		((TextController_t949652095_StaticFields*)TextController_t949652095_il2cpp_TypeInfo_var->static_fields)->set_myState_3(0);
		String_t* L_2 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_3 = String_op_Equality_m1790663636(NULL /*static, unused*/, L_2, _stringLiteral192354598, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_002f;
		}
	}
	{
		((TextController_t949652095_StaticFields*)TextController_t949652095_il2cpp_TypeInfo_var->static_fields)->set_myState_3(7);
		goto IL_0046;
	}

IL_002f:
	{
		String_t* L_4 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_5 = String_op_Equality_m1790663636(NULL /*static, unused*/, L_4, _stringLiteral2921237953, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_0046;
		}
	}
	{
		((TextController_t949652095_StaticFields*)TextController_t949652095_il2cpp_TypeInfo_var->static_fields)->set_myState_3(((int32_t)16));
	}

IL_0046:
	{
		return;
	}
}
// System.Void TextController::Update()
extern "C"  void TextController_Update_m1619616711 (TextController_t949652095 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TextController_Update_m1619616711_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0 = ((TextController_t949652095_StaticFields*)TextController_t949652095_il2cpp_TypeInfo_var->static_fields)->get_myState_3();
		V_0 = L_0;
		int32_t L_1 = V_0;
		switch (L_1)
		{
			case 0:
			{
				goto IL_0059;
			}
			case 1:
			{
				goto IL_0064;
			}
			case 2:
			{
				goto IL_0085;
			}
			case 3:
			{
				goto IL_006f;
			}
			case 4:
			{
				goto IL_007a;
			}
			case 5:
			{
				goto IL_0090;
			}
			case 6:
			{
				goto IL_009b;
			}
			case 7:
			{
				goto IL_00a6;
			}
			case 8:
			{
				goto IL_00b7;
			}
			case 9:
			{
				goto IL_00c2;
			}
			case 10:
			{
				goto IL_00cd;
			}
			case 11:
			{
				goto IL_00d8;
			}
			case 12:
			{
				goto IL_00e3;
			}
			case 13:
			{
				goto IL_00ee;
			}
			case 14:
			{
				goto IL_00f9;
			}
			case 15:
			{
				goto IL_0104;
			}
			case 16:
			{
				goto IL_010f;
			}
			case 17:
			{
				goto IL_0120;
			}
		}
	}
	{
		goto IL_012b;
	}

IL_0059:
	{
		TextController_intro_m3215691880(__this, /*hidden argument*/NULL);
		goto IL_012b;
	}

IL_0064:
	{
		TextController_entrance_m1053101958(__this, /*hidden argument*/NULL);
		goto IL_012b;
	}

IL_006f:
	{
		TextController_door_0_m488733563(__this, /*hidden argument*/NULL);
		goto IL_012b;
	}

IL_007a:
	{
		TextController_ask_0_m3546484176(__this, /*hidden argument*/NULL);
		goto IL_012b;
	}

IL_0085:
	{
		TextController_gully_m2864555385(__this, /*hidden argument*/NULL);
		goto IL_012b;
	}

IL_0090:
	{
		TextController_gully_lock_m2995970337(__this, /*hidden argument*/NULL);
		goto IL_012b;
	}

IL_009b:
	{
		TextController_ask_1_m3546484081(__this, /*hidden argument*/NULL);
		goto IL_012b;
	}

IL_00a6:
	{
		TextController_load_level2_m1760937211(__this, /*hidden argument*/NULL);
		TextController_dungeon_m2518070460(__this, /*hidden argument*/NULL);
		goto IL_012b;
	}

IL_00b7:
	{
		TextController_stairs_m3078146050(__this, /*hidden argument*/NULL);
		goto IL_012b;
	}

IL_00c2:
	{
		TextController_small_door_m3122073924(__this, /*hidden argument*/NULL);
		goto IL_012b;
	}

IL_00cd:
	{
		TextController_book_m3452809167(__this, /*hidden argument*/NULL);
		goto IL_012b;
	}

IL_00d8:
	{
		TextController_map_m3942991468(__this, /*hidden argument*/NULL);
		goto IL_012b;
	}

IL_00e3:
	{
		TextController_sewer_m3845413136(__this, /*hidden argument*/NULL);
		goto IL_012b;
	}

IL_00ee:
	{
		TextController_small_opening_m2856475814(__this, /*hidden argument*/NULL);
		goto IL_012b;
	}

IL_00f9:
	{
		TextController_release_princess_m272475227(__this, /*hidden argument*/NULL);
		goto IL_012b;
	}

IL_0104:
	{
		TextController_halt_ritual_m3717347419(__this, /*hidden argument*/NULL);
		goto IL_012b;
	}

IL_010f:
	{
		TextController_load_level3_m1760937116(__this, /*hidden argument*/NULL);
		TextController_release_princess1_m70954886(__this, /*hidden argument*/NULL);
		goto IL_012b;
	}

IL_0120:
	{
		TextController_the_end_m1800270551(__this, /*hidden argument*/NULL);
		goto IL_012b;
	}

IL_012b:
	{
		return;
	}
}
// System.Void TextController::load_level2()
extern "C"  void TextController_load_level2_m1760937211 (TextController_t949652095 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TextController_load_level2_m1760937211_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Scene_t1684909666  V_0;
	memset(&V_0, 0, sizeof(V_0));
	String_t* V_1 = NULL;
	{
		Scene_t1684909666  L_0 = SceneManager_GetActiveScene_m2964039490(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_0 = L_0;
		String_t* L_1 = Scene_get_name_m745914591((&V_0), /*hidden argument*/NULL);
		V_1 = L_1;
		String_t* L_2 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_3 = String_op_Equality_m1790663636(NULL /*static, unused*/, L_2, _stringLiteral4084037367, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0028;
		}
	}
	{
		SceneManager_LoadScene_m1619949821(NULL /*static, unused*/, _stringLiteral192354598, /*hidden argument*/NULL);
	}

IL_0028:
	{
		return;
	}
}
// System.Void TextController::load_level3()
extern "C"  void TextController_load_level3_m1760937116 (TextController_t949652095 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TextController_load_level3_m1760937116_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Scene_t1684909666  V_0;
	memset(&V_0, 0, sizeof(V_0));
	String_t* V_1 = NULL;
	{
		Scene_t1684909666  L_0 = SceneManager_GetActiveScene_m2964039490(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_0 = L_0;
		String_t* L_1 = Scene_get_name_m745914591((&V_0), /*hidden argument*/NULL);
		V_1 = L_1;
		String_t* L_2 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_3 = String_op_Equality_m1790663636(NULL /*static, unused*/, L_2, _stringLiteral192354598, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0028;
		}
	}
	{
		SceneManager_LoadScene_m1619949821(NULL /*static, unused*/, _stringLiteral2921237953, /*hidden argument*/NULL);
	}

IL_0028:
	{
		return;
	}
}
// System.Void TextController::intro()
extern "C"  void TextController_intro_m3215691880 (TextController_t949652095 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TextController_intro_m3215691880_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Scene_t1684909666  V_0;
	memset(&V_0, 0, sizeof(V_0));
	String_t* V_1 = NULL;
	{
		Scene_t1684909666  L_0 = SceneManager_GetActiveScene_m2964039490(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_0 = L_0;
		String_t* L_1 = Scene_get_name_m745914591((&V_0), /*hidden argument*/NULL);
		V_1 = L_1;
		String_t* L_2 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_3 = String_op_Inequality_m304203149(NULL /*static, unused*/, L_2, _stringLiteral4084037367, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0028;
		}
	}
	{
		SceneManager_LoadScene_m1619949821(NULL /*static, unused*/, _stringLiteral4084037367, /*hidden argument*/NULL);
	}

IL_0028:
	{
		Text_t356221433 * L_4 = __this->get_text_2();
		VirtActionInvoker1< String_t* >::Invoke(72 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_4, _stringLiteral1410766593);
		IL2CPP_RUNTIME_CLASS_INIT(Input_t1785128008_il2cpp_TypeInfo_var);
		bool L_5 = Input_GetKeyDown_m1771960377(NULL /*static, unused*/, ((int32_t)32), /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_004a;
		}
	}
	{
		((TextController_t949652095_StaticFields*)TextController_t949652095_il2cpp_TypeInfo_var->static_fields)->set_myState_3(1);
	}

IL_004a:
	{
		return;
	}
}
// System.Void TextController::entrance()
extern "C"  void TextController_entrance_m1053101958 (TextController_t949652095 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TextController_entrance_m1053101958_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Text_t356221433 * L_0 = __this->get_text_2();
		VirtActionInvoker1< String_t* >::Invoke(72 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_0, _stringLiteral63984588);
		IL2CPP_RUNTIME_CLASS_INIT(Input_t1785128008_il2cpp_TypeInfo_var);
		bool L_1 = Input_GetKeyDown_m1771960377(NULL /*static, unused*/, ((int32_t)97), /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0027;
		}
	}
	{
		((TextController_t949652095_StaticFields*)TextController_t949652095_il2cpp_TypeInfo_var->static_fields)->set_myState_3(4);
		goto IL_0050;
	}

IL_0027:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t1785128008_il2cpp_TypeInfo_var);
		bool L_2 = Input_GetKeyDown_m1771960377(NULL /*static, unused*/, ((int32_t)103), /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_003e;
		}
	}
	{
		((TextController_t949652095_StaticFields*)TextController_t949652095_il2cpp_TypeInfo_var->static_fields)->set_myState_3(2);
		goto IL_0050;
	}

IL_003e:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t1785128008_il2cpp_TypeInfo_var);
		bool L_3 = Input_GetKeyDown_m1771960377(NULL /*static, unused*/, ((int32_t)105), /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0050;
		}
	}
	{
		((TextController_t949652095_StaticFields*)TextController_t949652095_il2cpp_TypeInfo_var->static_fields)->set_myState_3(3);
	}

IL_0050:
	{
		return;
	}
}
// System.Void TextController::door_0()
extern "C"  void TextController_door_0_m488733563 (TextController_t949652095 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TextController_door_0_m488733563_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Text_t356221433 * L_0 = __this->get_text_2();
		VirtActionInvoker1< String_t* >::Invoke(72 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_0, _stringLiteral4124698381);
		IL2CPP_RUNTIME_CLASS_INIT(Input_t1785128008_il2cpp_TypeInfo_var);
		bool L_1 = Input_GetKeyDown_m1771960377(NULL /*static, unused*/, ((int32_t)114), /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0022;
		}
	}
	{
		((TextController_t949652095_StaticFields*)TextController_t949652095_il2cpp_TypeInfo_var->static_fields)->set_myState_3(1);
	}

IL_0022:
	{
		return;
	}
}
// System.Void TextController::ask_0()
extern "C"  void TextController_ask_0_m3546484176 (TextController_t949652095 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TextController_ask_0_m3546484176_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Text_t356221433 * L_0 = __this->get_text_2();
		VirtActionInvoker1< String_t* >::Invoke(72 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_0, _stringLiteral2805530022);
		IL2CPP_RUNTIME_CLASS_INIT(Input_t1785128008_il2cpp_TypeInfo_var);
		bool L_1 = Input_GetKeyDown_m1771960377(NULL /*static, unused*/, ((int32_t)114), /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0022;
		}
	}
	{
		((TextController_t949652095_StaticFields*)TextController_t949652095_il2cpp_TypeInfo_var->static_fields)->set_myState_3(1);
	}

IL_0022:
	{
		return;
	}
}
// System.Void TextController::gully()
extern "C"  void TextController_gully_m2864555385 (TextController_t949652095 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TextController_gully_m2864555385_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Text_t356221433 * L_0 = __this->get_text_2();
		VirtActionInvoker1< String_t* >::Invoke(72 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_0, _stringLiteral3160419644);
		IL2CPP_RUNTIME_CLASS_INIT(Input_t1785128008_il2cpp_TypeInfo_var);
		bool L_1 = Input_GetKeyDown_m1771960377(NULL /*static, unused*/, ((int32_t)114), /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0022;
		}
	}
	{
		((TextController_t949652095_StaticFields*)TextController_t949652095_il2cpp_TypeInfo_var->static_fields)->set_myState_3(5);
	}

IL_0022:
	{
		return;
	}
}
// System.Void TextController::gully_lock()
extern "C"  void TextController_gully_lock_m2995970337 (TextController_t949652095 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TextController_gully_lock_m2995970337_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Text_t356221433 * L_0 = __this->get_text_2();
		VirtActionInvoker1< String_t* >::Invoke(72 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_0, _stringLiteral2064166693);
		IL2CPP_RUNTIME_CLASS_INIT(Input_t1785128008_il2cpp_TypeInfo_var);
		bool L_1 = Input_GetKeyDown_m1771960377(NULL /*static, unused*/, ((int32_t)97), /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0027;
		}
	}
	{
		((TextController_t949652095_StaticFields*)TextController_t949652095_il2cpp_TypeInfo_var->static_fields)->set_myState_3(6);
		goto IL_0039;
	}

IL_0027:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t1785128008_il2cpp_TypeInfo_var);
		bool L_2 = Input_GetKeyDown_m1771960377(NULL /*static, unused*/, ((int32_t)111), /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0039;
		}
	}
	{
		((TextController_t949652095_StaticFields*)TextController_t949652095_il2cpp_TypeInfo_var->static_fields)->set_myState_3(7);
	}

IL_0039:
	{
		return;
	}
}
// System.Void TextController::ask_1()
extern "C"  void TextController_ask_1_m3546484081 (TextController_t949652095 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TextController_ask_1_m3546484081_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Text_t356221433 * L_0 = __this->get_text_2();
		VirtActionInvoker1< String_t* >::Invoke(72 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_0, _stringLiteral3005332441);
		IL2CPP_RUNTIME_CLASS_INIT(Input_t1785128008_il2cpp_TypeInfo_var);
		bool L_1 = Input_GetKeyDown_m1771960377(NULL /*static, unused*/, ((int32_t)114), /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0022;
		}
	}
	{
		((TextController_t949652095_StaticFields*)TextController_t949652095_il2cpp_TypeInfo_var->static_fields)->set_myState_3(5);
	}

IL_0022:
	{
		return;
	}
}
// System.Void TextController::dungeon()
extern "C"  void TextController_dungeon_m2518070460 (TextController_t949652095 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TextController_dungeon_m2518070460_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Text_t356221433 * L_0 = __this->get_text_2();
		VirtActionInvoker1< String_t* >::Invoke(72 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_0, _stringLiteral1504307373);
		IL2CPP_RUNTIME_CLASS_INIT(Input_t1785128008_il2cpp_TypeInfo_var);
		bool L_1 = Input_GetKeyDown_m1771960377(NULL /*static, unused*/, ((int32_t)100), /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0027;
		}
	}
	{
		((TextController_t949652095_StaticFields*)TextController_t949652095_il2cpp_TypeInfo_var->static_fields)->set_myState_3(8);
		goto IL_003a;
	}

IL_0027:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t1785128008_il2cpp_TypeInfo_var);
		bool L_2 = Input_GetKeyDown_m1771960377(NULL /*static, unused*/, ((int32_t)111), /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_003a;
		}
	}
	{
		((TextController_t949652095_StaticFields*)TextController_t949652095_il2cpp_TypeInfo_var->static_fields)->set_myState_3(((int32_t)9));
	}

IL_003a:
	{
		return;
	}
}
// System.Void TextController::stairs()
extern "C"  void TextController_stairs_m3078146050 (TextController_t949652095 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TextController_stairs_m3078146050_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Text_t356221433 * L_0 = __this->get_text_2();
		VirtActionInvoker1< String_t* >::Invoke(72 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_0, _stringLiteral2212439664);
		IL2CPP_RUNTIME_CLASS_INIT(Input_t1785128008_il2cpp_TypeInfo_var);
		bool L_1 = Input_GetKeyDown_m1771960377(NULL /*static, unused*/, ((int32_t)114), /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0022;
		}
	}
	{
		((TextController_t949652095_StaticFields*)TextController_t949652095_il2cpp_TypeInfo_var->static_fields)->set_myState_3(7);
	}

IL_0022:
	{
		return;
	}
}
// System.Void TextController::small_door()
extern "C"  void TextController_small_door_m3122073924 (TextController_t949652095 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TextController_small_door_m3122073924_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Text_t356221433 * L_0 = __this->get_text_2();
		VirtActionInvoker1< String_t* >::Invoke(72 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_0, _stringLiteral1624193017);
		IL2CPP_RUNTIME_CLASS_INIT(Input_t1785128008_il2cpp_TypeInfo_var);
		bool L_1 = Input_GetKeyDown_m1771960377(NULL /*static, unused*/, ((int32_t)114), /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0028;
		}
	}
	{
		((TextController_t949652095_StaticFields*)TextController_t949652095_il2cpp_TypeInfo_var->static_fields)->set_myState_3(((int32_t)10));
		goto IL_0053;
	}

IL_0028:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t1785128008_il2cpp_TypeInfo_var);
		bool L_2 = Input_GetKeyDown_m1771960377(NULL /*static, unused*/, ((int32_t)116), /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0040;
		}
	}
	{
		((TextController_t949652095_StaticFields*)TextController_t949652095_il2cpp_TypeInfo_var->static_fields)->set_myState_3(((int32_t)11));
		goto IL_0053;
	}

IL_0040:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t1785128008_il2cpp_TypeInfo_var);
		bool L_3 = Input_GetKeyDown_m1771960377(NULL /*static, unused*/, ((int32_t)111), /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0053;
		}
	}
	{
		((TextController_t949652095_StaticFields*)TextController_t949652095_il2cpp_TypeInfo_var->static_fields)->set_myState_3(((int32_t)12));
	}

IL_0053:
	{
		return;
	}
}
// System.Void TextController::book()
extern "C"  void TextController_book_m3452809167 (TextController_t949652095 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TextController_book_m3452809167_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Text_t356221433 * L_0 = __this->get_text_2();
		VirtActionInvoker1< String_t* >::Invoke(72 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_0, _stringLiteral3586558649);
		IL2CPP_RUNTIME_CLASS_INIT(Input_t1785128008_il2cpp_TypeInfo_var);
		bool L_1 = Input_GetKeyDown_m1771960377(NULL /*static, unused*/, ((int32_t)114), /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0023;
		}
	}
	{
		((TextController_t949652095_StaticFields*)TextController_t949652095_il2cpp_TypeInfo_var->static_fields)->set_myState_3(((int32_t)9));
	}

IL_0023:
	{
		return;
	}
}
// System.Void TextController::map()
extern "C"  void TextController_map_m3942991468 (TextController_t949652095 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TextController_map_m3942991468_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Text_t356221433 * L_0 = __this->get_text_2();
		VirtActionInvoker1< String_t* >::Invoke(72 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_0, _stringLiteral204118358);
		IL2CPP_RUNTIME_CLASS_INIT(Input_t1785128008_il2cpp_TypeInfo_var);
		bool L_1 = Input_GetKeyDown_m1771960377(NULL /*static, unused*/, ((int32_t)114), /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0023;
		}
	}
	{
		((TextController_t949652095_StaticFields*)TextController_t949652095_il2cpp_TypeInfo_var->static_fields)->set_myState_3(((int32_t)9));
	}

IL_0023:
	{
		return;
	}
}
// System.Void TextController::sewer()
extern "C"  void TextController_sewer_m3845413136 (TextController_t949652095 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TextController_sewer_m3845413136_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Text_t356221433 * L_0 = __this->get_text_2();
		VirtActionInvoker1< String_t* >::Invoke(72 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_0, _stringLiteral1125445517);
		IL2CPP_RUNTIME_CLASS_INIT(Input_t1785128008_il2cpp_TypeInfo_var);
		bool L_1 = Input_GetKeyDown_m1771960377(NULL /*static, unused*/, ((int32_t)99), /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0028;
		}
	}
	{
		((TextController_t949652095_StaticFields*)TextController_t949652095_il2cpp_TypeInfo_var->static_fields)->set_myState_3(((int32_t)17));
		goto IL_003b;
	}

IL_0028:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t1785128008_il2cpp_TypeInfo_var);
		bool L_2 = Input_GetKeyDown_m1771960377(NULL /*static, unused*/, ((int32_t)115), /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_003b;
		}
	}
	{
		((TextController_t949652095_StaticFields*)TextController_t949652095_il2cpp_TypeInfo_var->static_fields)->set_myState_3(((int32_t)13));
	}

IL_003b:
	{
		return;
	}
}
// System.Void TextController::small_opening()
extern "C"  void TextController_small_opening_m2856475814 (TextController_t949652095 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TextController_small_opening_m2856475814_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Text_t356221433 * L_0 = __this->get_text_2();
		VirtActionInvoker1< String_t* >::Invoke(72 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_0, _stringLiteral33428099);
		IL2CPP_RUNTIME_CLASS_INIT(Input_t1785128008_il2cpp_TypeInfo_var);
		bool L_1 = Input_GetKeyDown_m1771960377(NULL /*static, unused*/, ((int32_t)114), /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0028;
		}
	}
	{
		((TextController_t949652095_StaticFields*)TextController_t949652095_il2cpp_TypeInfo_var->static_fields)->set_myState_3(((int32_t)14));
		goto IL_003b;
	}

IL_0028:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t1785128008_il2cpp_TypeInfo_var);
		bool L_2 = Input_GetKeyDown_m1771960377(NULL /*static, unused*/, ((int32_t)104), /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_003b;
		}
	}
	{
		((TextController_t949652095_StaticFields*)TextController_t949652095_il2cpp_TypeInfo_var->static_fields)->set_myState_3(((int32_t)15));
	}

IL_003b:
	{
		return;
	}
}
// System.Void TextController::release_princess()
extern "C"  void TextController_release_princess_m272475227 (TextController_t949652095 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TextController_release_princess_m272475227_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Text_t356221433 * L_0 = __this->get_text_2();
		VirtActionInvoker1< String_t* >::Invoke(72 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_0, _stringLiteral397657906);
		IL2CPP_RUNTIME_CLASS_INIT(Input_t1785128008_il2cpp_TypeInfo_var);
		bool L_1 = Input_GetKeyDown_m1771960377(NULL /*static, unused*/, ((int32_t)114), /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0023;
		}
	}
	{
		((TextController_t949652095_StaticFields*)TextController_t949652095_il2cpp_TypeInfo_var->static_fields)->set_myState_3(((int32_t)13));
	}

IL_0023:
	{
		return;
	}
}
// System.Void TextController::halt_ritual()
extern "C"  void TextController_halt_ritual_m3717347419 (TextController_t949652095 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TextController_halt_ritual_m3717347419_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Text_t356221433 * L_0 = __this->get_text_2();
		VirtActionInvoker1< String_t* >::Invoke(72 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_0, _stringLiteral1503964556);
		IL2CPP_RUNTIME_CLASS_INIT(Input_t1785128008_il2cpp_TypeInfo_var);
		bool L_1 = Input_GetKeyDown_m1771960377(NULL /*static, unused*/, ((int32_t)117), /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0023;
		}
	}
	{
		((TextController_t949652095_StaticFields*)TextController_t949652095_il2cpp_TypeInfo_var->static_fields)->set_myState_3(((int32_t)16));
	}

IL_0023:
	{
		return;
	}
}
// System.Void TextController::release_princess1()
extern "C"  void TextController_release_princess1_m70954886 (TextController_t949652095 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TextController_release_princess1_m70954886_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Text_t356221433 * L_0 = __this->get_text_2();
		VirtActionInvoker1< String_t* >::Invoke(72 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_0, _stringLiteral308965418);
		IL2CPP_RUNTIME_CLASS_INIT(Input_t1785128008_il2cpp_TypeInfo_var);
		bool L_1 = Input_GetKeyDown_m1771960377(NULL /*static, unused*/, ((int32_t)32), /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0026;
		}
	}
	{
		SceneManager_LoadScene_m1619949821(NULL /*static, unused*/, _stringLiteral4084037367, /*hidden argument*/NULL);
	}

IL_0026:
	{
		return;
	}
}
// System.Void TextController::the_end()
extern "C"  void TextController_the_end_m1800270551 (TextController_t949652095 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TextController_the_end_m1800270551_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Text_t356221433 * L_0 = __this->get_text_2();
		VirtActionInvoker1< String_t* >::Invoke(72 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_0, _stringLiteral4115909911);
		IL2CPP_RUNTIME_CLASS_INIT(Input_t1785128008_il2cpp_TypeInfo_var);
		bool L_1 = Input_GetKeyDown_m1771960377(NULL /*static, unused*/, ((int32_t)32), /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0026;
		}
	}
	{
		SceneManager_LoadScene_m1619949821(NULL /*static, unused*/, _stringLiteral4084037367, /*hidden argument*/NULL);
	}

IL_0026:
	{
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
