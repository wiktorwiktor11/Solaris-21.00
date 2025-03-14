﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AudioShapes

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function AudioShapes.AudioShapeComponent.UpdateAudioShape
// 0x0010 (0x0010 - 0x0000)
struct AudioShapeComponent_UpdateAudioShape final
{
public:
	TArray<class APlayerController*>              InLocalControllers;                                // 0x0000(0x0010)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
};
static_assert(alignof(AudioShapeComponent_UpdateAudioShape) == 0x000008, "Wrong alignment on AudioShapeComponent_UpdateAudioShape");
static_assert(sizeof(AudioShapeComponent_UpdateAudioShape) == 0x000010, "Wrong size on AudioShapeComponent_UpdateAudioShape");
static_assert(offsetof(AudioShapeComponent_UpdateAudioShape, InLocalControllers) == 0x000000, "Member 'AudioShapeComponent_UpdateAudioShape::InLocalControllers' has a wrong offset!");

// Function AudioShapes.AudioShapePrimitiveComponent.GetEdgeAudioComponent
// 0x0008 (0x0008 - 0x0000)
struct AudioShapePrimitiveComponent_GetEdgeAudioComponent final
{
public:
	class UAudioComponent*                        ReturnValue;                                       // 0x0000(0x0008)(ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(AudioShapePrimitiveComponent_GetEdgeAudioComponent) == 0x000008, "Wrong alignment on AudioShapePrimitiveComponent_GetEdgeAudioComponent");
static_assert(sizeof(AudioShapePrimitiveComponent_GetEdgeAudioComponent) == 0x000008, "Wrong size on AudioShapePrimitiveComponent_GetEdgeAudioComponent");
static_assert(offsetof(AudioShapePrimitiveComponent_GetEdgeAudioComponent, ReturnValue) == 0x000000, "Member 'AudioShapePrimitiveComponent_GetEdgeAudioComponent::ReturnValue' has a wrong offset!");

// Function AudioShapes.AudioShapePrimitiveComponent.GetInsideAudioComponent
// 0x0008 (0x0008 - 0x0000)
struct AudioShapePrimitiveComponent_GetInsideAudioComponent final
{
public:
	class UAudioComponent*                        ReturnValue;                                       // 0x0000(0x0008)(ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(AudioShapePrimitiveComponent_GetInsideAudioComponent) == 0x000008, "Wrong alignment on AudioShapePrimitiveComponent_GetInsideAudioComponent");
static_assert(sizeof(AudioShapePrimitiveComponent_GetInsideAudioComponent) == 0x000008, "Wrong size on AudioShapePrimitiveComponent_GetInsideAudioComponent");
static_assert(offsetof(AudioShapePrimitiveComponent_GetInsideAudioComponent, ReturnValue) == 0x000000, "Member 'AudioShapePrimitiveComponent_GetInsideAudioComponent::ReturnValue' has a wrong offset!");

// Function AudioShapes.AudioShapePrimitiveComponent.GetIsPlayerInside
// 0x0001 (0x0001 - 0x0000)
struct AudioShapePrimitiveComponent_GetIsPlayerInside final
{
public:
	bool                                          ReturnValue;                                       // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(AudioShapePrimitiveComponent_GetIsPlayerInside) == 0x000001, "Wrong alignment on AudioShapePrimitiveComponent_GetIsPlayerInside");
static_assert(sizeof(AudioShapePrimitiveComponent_GetIsPlayerInside) == 0x000001, "Wrong size on AudioShapePrimitiveComponent_GetIsPlayerInside");
static_assert(offsetof(AudioShapePrimitiveComponent_GetIsPlayerInside, ReturnValue) == 0x000000, "Member 'AudioShapePrimitiveComponent_GetIsPlayerInside::ReturnValue' has a wrong offset!");

// Function AudioShapes.AudioShapeBoxComponent.SetBoxTransform
// 0x0060 (0x0060 - 0x0000)
struct AudioShapeBoxComponent_SetBoxTransform final
{
public:
	struct FTransform                             InTransform;                                       // 0x0000(0x0060)(ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};
static_assert(alignof(AudioShapeBoxComponent_SetBoxTransform) == 0x000010, "Wrong alignment on AudioShapeBoxComponent_SetBoxTransform");
static_assert(sizeof(AudioShapeBoxComponent_SetBoxTransform) == 0x000060, "Wrong size on AudioShapeBoxComponent_SetBoxTransform");
static_assert(offsetof(AudioShapeBoxComponent_SetBoxTransform, InTransform) == 0x000000, "Member 'AudioShapeBoxComponent_SetBoxTransform::InTransform' has a wrong offset!");

// Function AudioShapes.AudioShapeCylinderComponent.SetHalfHeight
// 0x0004 (0x0004 - 0x0000)
struct AudioShapeCylinderComponent_SetHalfHeight final
{
public:
	float                                         InHalfHeight;                                      // 0x0000(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(AudioShapeCylinderComponent_SetHalfHeight) == 0x000004, "Wrong alignment on AudioShapeCylinderComponent_SetHalfHeight");
static_assert(sizeof(AudioShapeCylinderComponent_SetHalfHeight) == 0x000004, "Wrong size on AudioShapeCylinderComponent_SetHalfHeight");
static_assert(offsetof(AudioShapeCylinderComponent_SetHalfHeight, InHalfHeight) == 0x000000, "Member 'AudioShapeCylinderComponent_SetHalfHeight::InHalfHeight' has a wrong offset!");

// Function AudioShapes.AudioShapeCylinderComponent.SetRadius
// 0x0004 (0x0004 - 0x0000)
struct AudioShapeCylinderComponent_SetRadius final
{
public:
	float                                         InRadius;                                          // 0x0000(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(AudioShapeCylinderComponent_SetRadius) == 0x000004, "Wrong alignment on AudioShapeCylinderComponent_SetRadius");
static_assert(sizeof(AudioShapeCylinderComponent_SetRadius) == 0x000004, "Wrong size on AudioShapeCylinderComponent_SetRadius");
static_assert(offsetof(AudioShapeCylinderComponent_SetRadius, InRadius) == 0x000000, "Member 'AudioShapeCylinderComponent_SetRadius::InRadius' has a wrong offset!");

// Function AudioShapes.AudioShapeLineComponent.SetEndPoint
// 0x0018 (0x0018 - 0x0000)
struct AudioShapeLineComponent_SetEndPoint final
{
public:
	struct FVector                                InEndPoint;                                        // 0x0000(0x0018)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(AudioShapeLineComponent_SetEndPoint) == 0x000008, "Wrong alignment on AudioShapeLineComponent_SetEndPoint");
static_assert(sizeof(AudioShapeLineComponent_SetEndPoint) == 0x000018, "Wrong size on AudioShapeLineComponent_SetEndPoint");
static_assert(offsetof(AudioShapeLineComponent_SetEndPoint, InEndPoint) == 0x000000, "Member 'AudioShapeLineComponent_SetEndPoint::InEndPoint' has a wrong offset!");

// Function AudioShapes.AudioShapeLineComponent.SetStartPoint
// 0x0018 (0x0018 - 0x0000)
struct AudioShapeLineComponent_SetStartPoint final
{
public:
	struct FVector                                InStartPoint;                                      // 0x0000(0x0018)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(AudioShapeLineComponent_SetStartPoint) == 0x000008, "Wrong alignment on AudioShapeLineComponent_SetStartPoint");
static_assert(sizeof(AudioShapeLineComponent_SetStartPoint) == 0x000018, "Wrong size on AudioShapeLineComponent_SetStartPoint");
static_assert(offsetof(AudioShapeLineComponent_SetStartPoint, InStartPoint) == 0x000000, "Member 'AudioShapeLineComponent_SetStartPoint::InStartPoint' has a wrong offset!");

// Function AudioShapes.AudioShapeSphereComponent.SetRadius
// 0x0004 (0x0004 - 0x0000)
struct AudioShapeSphereComponent_SetRadius final
{
public:
	float                                         InRadius;                                          // 0x0000(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(AudioShapeSphereComponent_SetRadius) == 0x000004, "Wrong alignment on AudioShapeSphereComponent_SetRadius");
static_assert(sizeof(AudioShapeSphereComponent_SetRadius) == 0x000004, "Wrong size on AudioShapeSphereComponent_SetRadius");
static_assert(offsetof(AudioShapeSphereComponent_SetRadius, InRadius) == 0x000000, "Member 'AudioShapeSphereComponent_SetRadius::InRadius' has a wrong offset!");

}

