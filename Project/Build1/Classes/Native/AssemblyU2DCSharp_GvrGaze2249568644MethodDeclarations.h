﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// GvrGaze
struct GvrGaze_t2249568644;
// UnityEngine.GameObject
struct GameObject_t1756533147;
// UnityEngine.Camera
struct Camera_t189460977;
// IGvrGazeResponder
struct IGvrGazeResponder_t1981717083;
// IGvrGazePointer
struct IGvrGazePointer_t3118039122;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t1158329972;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_GameObject1756533147.h"
#include "UnityEngine_UnityEngine_Camera189460977.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"
#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

// System.Void GvrGaze::.ctor()
extern "C"  void GvrGaze__ctor_m1648835245 (GvrGaze_t2249568644 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject GvrGaze::get_PointerObject()
extern "C"  GameObject_t1756533147 * GvrGaze_get_PointerObject_m1050365749 (GvrGaze_t2249568644 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GvrGaze::set_PointerObject(UnityEngine.GameObject)
extern "C"  void GvrGaze_set_PointerObject_m1622492156 (GvrGaze_t2249568644 * __this, GameObject_t1756533147 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Camera GvrGaze::get_cam()
extern "C"  Camera_t189460977 * GvrGaze_get_cam_m3640560956 (GvrGaze_t2249568644 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GvrGaze::set_cam(UnityEngine.Camera)
extern "C"  void GvrGaze_set_cam_m2353116945 (GvrGaze_t2249568644 * __this, Camera_t189460977 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GvrGaze::Awake()
extern "C"  void GvrGaze_Awake_m129419220 (GvrGaze_t2249568644 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GvrGaze::OnEnable()
extern "C"  void GvrGaze_OnEnable_m3369338453 (GvrGaze_t2249568644 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GvrGaze::OnDisable()
extern "C"  void GvrGaze_OnDisable_m3420047932 (GvrGaze_t2249568644 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GvrGaze::LateUpdate()
extern "C"  void GvrGaze_LateUpdate_m2567067798 (GvrGaze_t2249568644 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GvrGaze::HandleGaze()
extern "C"  void GvrGaze_HandleGaze_m3896536584 (GvrGaze_t2249568644 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject GvrGaze::FindGazeTarget(System.Single,IGvrGazeResponder&,UnityEngine.Vector3&)
extern "C"  GameObject_t1756533147 * GvrGaze_FindGazeTarget_m3477673822 (GvrGaze_t2249568644 * __this, float ___radius0, Il2CppObject ** ___responder1, Vector3_t2243707580 * ___intersectPosition2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GvrGaze::IsGazeNearObject(System.Single,UnityEngine.GameObject,UnityEngine.Vector3&)
extern "C"  bool GvrGaze_IsGazeNearObject_m3473773425 (GvrGaze_t2249568644 * __this, float ___radius0, GameObject_t1756533147 * ___target1, Vector3_t2243707580 * ___intersectPosition2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GvrGaze::HandleTrigger()
extern "C"  void GvrGaze_HandleTrigger_m136751567 (GvrGaze_t2249568644 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// IGvrGazePointer GvrGaze::<set_PointerObject>m__0(UnityEngine.MonoBehaviour)
extern "C"  Il2CppObject * GvrGaze_U3Cset_PointerObjectU3Em__0_m2868598519 (Il2CppObject * __this /* static, unused */, MonoBehaviour_t1158329972 * ___c0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GvrGaze::<set_PointerObject>m__1(IGvrGazePointer)
extern "C"  bool GvrGaze_U3Cset_PointerObjectU3Em__1_m1855775004 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___c0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
