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
#include "AssemblyU2DCSharp_TiltWindow1839185375.h"
#include "AssemblyU2DCSharp_ObstacleRenderer489142038.h"
#include "AssemblyU2DCSharp_ScoreManager3573108141.h"
#include "AssemblyU2DCSharp_TutorialDisplayer329953459.h"
#include "AssemblyU2DCSharp_TutorialExecutor2783498777.h"
#include "AssemblyU2DCSharp_TutorialRenderer71534203.h"
#include "AssemblyU2DCSharp_TutorialRendererMobile2567490859.h"



#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1700 = { sizeof (TiltWindow_t1839185375), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1700[4] = 
{
	TiltWindow_t1839185375::get_offset_of_range_2(),
	TiltWindow_t1839185375::get_offset_of_mTrans_3(),
	TiltWindow_t1839185375::get_offset_of_mStart_4(),
	TiltWindow_t1839185375::get_offset_of_mRot_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1701 = { sizeof (ObstacleRenderer_t489142038), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1701[17] = 
{
	ObstacleRenderer_t489142038::get_offset_of_SINE_OBS_2(),
	ObstacleRenderer_t489142038::get_offset_of_TRIANGLE_OBS_3(),
	ObstacleRenderer_t489142038::get_offset_of_SQUARE_OBS_4(),
	ObstacleRenderer_t489142038::get_offset_of_CHOKE_OBS_5(),
	ObstacleRenderer_t489142038::get_offset_of_SHORTRECTANGLE_OBS_6(),
	ObstacleRenderer_t489142038::get_offset_of_SHORTSAW_OBS_7(),
	ObstacleRenderer_t489142038::get_offset_of_SHORTSINE_OBS_8(),
	ObstacleRenderer_t489142038::get_offset_of_spawnDistance_9(),
	ObstacleRenderer_t489142038::get_offset_of_obstacleXScale_10(),
	ObstacleRenderer_t489142038::get_offset_of_obstacleYScale_11(),
	ObstacleRenderer_t489142038::get_offset_of_stepSize_12(),
	ObstacleRenderer_t489142038::get_offset_of_player_13(),
	ObstacleRenderer_t489142038::get_offset_of_state_14(),
	ObstacleRenderer_t489142038::get_offset_of_lifetime_15(),
	ObstacleRenderer_t489142038::get_offset_of_timer_16(),
	ObstacleRenderer_t489142038::get_offset_of_toggledOnce_17(),
	ObstacleRenderer_t489142038::get_offset_of_secondsBetweenSpawning_18(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1702 = { sizeof (ScoreManager_t3573108141), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1702[2] = 
{
	ScoreManager_t3573108141::get_offset_of_scoreDisp_2(),
	ScoreManager_t3573108141::get_offset_of_lp_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1703 = { sizeof (TutorialDisplayer_t329953459), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1703[5] = 
{
	TutorialDisplayer_t329953459::get_offset_of_tut_2(),
	TutorialDisplayer_t329953459::get_offset_of_listener_3(),
	TutorialDisplayer_t329953459::get_offset_of_dispMedium_4(),
	TutorialDisplayer_t329953459::get_offset_of_txt_5(),
	TutorialDisplayer_t329953459::get_offset_of_timer_6(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1704 = { sizeof (TutorialExecutor_t2783498777), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1704[3] = 
{
	TutorialExecutor_t2783498777::get_offset_of_tutorialText_2(),
	TutorialExecutor_t2783498777::get_offset_of_stage_3(),
	TutorialExecutor_t2783498777::get_offset_of_tipCount_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1705 = { sizeof (TutorialRenderer_t71534203), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1705[9] = 
{
	TutorialRenderer_t71534203::get_offset_of_tutText_2(),
	TutorialRenderer_t71534203::get_offset_of_keys_3(),
	TutorialRenderer_t71534203::get_offset_of_tutBox_4(),
	TutorialRenderer_t71534203::get_offset_of_HUD_Canvas_5(),
	TutorialRenderer_t71534203::get_offset_of_obstacleRenderer_6(),
	TutorialRenderer_t71534203::get_offset_of_tut_7(),
	TutorialRenderer_t71534203::get_offset_of_satisfied_8(),
	TutorialRenderer_t71534203::get_offset_of_timer_9(),
	TutorialRenderer_t71534203::get_offset_of_currentCondition_10(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1706 = { sizeof (TutorialRendererMobile_t2567490859), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1706[10] = 
{
	TutorialRendererMobile_t2567490859::get_offset_of_tutText_2(),
	TutorialRendererMobile_t2567490859::get_offset_of_buttonNames_3(),
	TutorialRendererMobile_t2567490859::get_offset_of_tutBox_4(),
	TutorialRendererMobile_t2567490859::get_offset_of_HUD_Canvas_5(),
	TutorialRendererMobile_t2567490859::get_offset_of_obstacleRenderer_6(),
	TutorialRendererMobile_t2567490859::get_offset_of_es_7(),
	TutorialRendererMobile_t2567490859::get_offset_of_tut_8(),
	TutorialRendererMobile_t2567490859::get_offset_of_satisfied_9(),
	TutorialRendererMobile_t2567490859::get_offset_of_timer_10(),
	TutorialRendererMobile_t2567490859::get_offset_of_currentCondition_11(),
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
