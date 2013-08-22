#define private public
#define protected public


//assimp
#include <assimp\Importer.hpp>
#include <assimp\Exporter.hpp>
#include <assimp\scene.h>
#include <assimp\mesh.h>
#include <assimp\config.h>
#include <assimp\material.h>
#include <assimp\cimport.h>
#include <assimp\postprocess.h>
//niflib

#include <niflib.h>
#include <MatTexCollection.h>
#include <NIF_IO.h>
#include <obj\NiObject.h>
#include <obj\NiNode.h>
#include <obj\BSFadeNode.h>
#include <Ref.h>
#include <obj\NiObject.h>
#include <gen\Header.h>
#include <obj\NiTriShape.h>
#include <obj\NiProperty.h>
#include <obj\NiTriShapeData.h>
#include <obj\BSLightingShaderProperty.h>
#include <obj\BSShaderTextureSet.h>
#include <obj\BSShaderProperty.h>
#include <obj\NiParticleBomb.h>
#include <obj\NiParticleColorModifier.h>
#include <obj\NiParticleGrowFade.h>
#include <obj\NiParticleMeshes.h>
#include <obj\NiParticleMeshesData.h>
#include <obj\NiParticleMeshModifier.h>
#include <obj\NiParticleModifier.h>
#include <obj\NiParticleRotation.h>
#include <obj\NiParticles.h>
#include <obj\NiParticlesData.h>
#include <obj\NiParticleSystem.h>
#include <obj\NiParticleSystemController.h>
#include <obj\NiMaterialProperty.h>
#include <obj\BSDismemberSkinInstance.h>
#include <obj\NiSkinData.h>
#include <obj\NiSkinInstance.h>
#include <gen\BodyPartList.h>
#include <obj\NiSkinningLODController.h>
#include <obj\NiSkinningMeshModifier.h>
#include <obj\NiSkinPartition.h>
#include <obj\NiTriStrips.h>
#include <obj\NiTriStripsData.h>
#include <obj\NiSkinInstance.h>
#include <obj\BSLightingShaderProperty.h>
#include <obj\BSShaderProperty.h>
#include <obj\BSShaderLightingProperty.h>
#include <obj\BSShaderTextureSet.h>
#include <obj\NiShadeProperty.h>
#include <gen\enums.h>
#include <obj\NiWireframeProperty.h>
#include <obj\NiAlphaProperty.h>
#include <obj\NiStencilProperty.h>
#include <obj\NiShadeProperty.h>
#include <obj\NiVertexColorProperty.h>
#include <obj\NiDitherProperty.h>
#include <obj\NiSpecularProperty.h>
#include <obj\NiTextureProperty.h>
#include <obj\NiImage.h>
#include <obj\TallGrassShaderProperty.h>
#include <obj\Lighting30ShaderProperty.h>
#include <obj\BSShaderNoLightingProperty.h>
#include <obj\BSShaderPPLightingProperty.h>
#include <obj\BSShaderTextureSet.h>
#include <obj\BSLightingShaderProperty.h>
#include <obj\NIAVObject.h>
#include <obj\BSEffectShaderProperty.h>
#include <obj\BSEffectShaderPropertyColorController.h>
#include <obj\BSEffectShaderPropertyFloatController.h>
#include <obj\NiFloatData.h>
#include <obj\NiFloatExtraData.h>
#include <obj\NiFloatExtraDataController.h>
#include <obj\NiFloatInterpController.h>
#include <obj\NiFloatInterpolator.h>
#include <obj\NiFloatsExtraData.h>
#include <obj\NiObjectNET.h>
//havok
#pragma region Havok Headers
//////////////////////////////////////////////////////////////////////////
// Havok Includes
//////////////////////////////////////////////////////////////////////////

#include <Common/Base/hkBase.h>
#include <Common/Base/Memory/System/Util/hkMemoryInitUtil.h>
#include <Common/Base/Memory/Allocator/Malloc/hkMallocAllocator.h>
#include <Common/Base/System/Io/IStream/hkIStream.h>

#include <Common/Base/Reflection/Registry/hkDefaultClassNameRegistry.h>
#include <Common/Serialize/Util/hkStaticClassNameRegistry.h>
//vs
#include <cstdio>
// Scene
#include <Common/SceneData/Scene/hkxScene.h>
// Compatibility
#include <Common/Compat/hkCompat.h>
// Scene
#include <Common/SceneData/Scene/hkxScene.h>
// Serialize
#include <Common/Serialize/Util/hkRootLevelContainer.h>
#include <Common/Serialize/Util/hkLoader.h>
#include <Common/Serialize/Util/hkSerializeUtil.h>
#include <Common/Serialize/Version/hkVersionPatchManager.h>
#include <Common/Serialize/Data/hkDataObject.h>
//#include <Common/Serialize/Util/hkBuiltinTypeRegistry.h>

// Reflection
#include <Common/Base/Reflection/hkClass.h>
#include <Common/Base/Reflection/hkClassMember.h>
#include <Common/Base/Reflection/hkInternalClassMember.h>
#include <Common/Base/Reflection/hkClassMemberAccessor.h>
// Animation
#include <Animation/Animation/Rig/hkaSkeleton.h>
#include <Animation/Animation/hkaAnimationContainer.h>
#include <Animation/Animation/Mapper/hkaSkeletonMapper.h>
#include <Animation/Animation/Playback/Control/Default/hkaDefaultAnimationControl.h>
#include <Animation/Animation/Playback/hkaAnimatedSkeleton.h>
#include <Animation/Animation/Animation/SplineCompressed/hkaSplineCompressedAnimation.h>
#include <Animation/Animation/Rig/hkaPose.h>
#include <Animation/Ragdoll/Controller/PoweredConstraint/hkaRagdollPoweredConstraintController.h>
#include <Animation/Ragdoll/Controller/RigidBody/hkaRagdollRigidBodyController.h>
#include <Animation/Ragdoll/Utils/hkaRagdollUtils.h>
// Physics
#include <Physics/Dynamics/Entity/hkpRigidBody.h>
#include <Physics/Collide/Shape/Convex/Box/hkpBoxShape.h>
#include <Physics/Utilities/Dynamics/Inertia/hkpInertiaTensorComputer.h>
#include <Physics/Collide/Shape/Convex/Box/hkpBoxShape.h>
#include <Physics/Dynamics/Entity/hkpRigidBody.h>

static void HK_CALL errorReport(const char* msg, void* userContext)
{
	using namespace std;
	 printf("%",msg);
}

#include <Common/Base/keycode.cxx>
// [id=keycode]

// [id=productfeatures]
// We're using only physics - we undef products even if the keycode is present so
// that we don't get the usual initialization for these products.

#undef HK_FEATURE_PRODUCT_AI
//#undef HK_FEATURE_PRODUCT_ANIMATION
#undef HK_FEATURE_PRODUCT_CLOTH
#undef HK_FEATURE_PRODUCT_DESTRUCTION
//#undef HK_FEATURE_PRODUCT_BEHAVIOR
//#undef HK_FEATURE_PRODUCT_PHYSICS
#undef HK_FEATURE_PRODUCT_MILSIM
//#undef HK_FEATURE_PRODUCT_NEW_PHYSICS

#define HK_CLASSES_FILE "hkxreg.h"
//#include <Common/Serialize/Util/hkBuiltinTypeRegistry.cxx>
#include <Common/Base/Config/hkProductFeatures.cxx>
#undef HK_CLASSES_FILE

#define DEFINE_CUSTOMPATCH_STUB(name) static void HK_CALL name(hkDataObject& obj){}
DEFINE_CUSTOMPATCH_STUB(hkbMoveBoneTowardTargetModifier_0_to_1)
DEFINE_CUSTOMPATCH_STUB(hkbSplinePathGenerator_0_to_1)
DEFINE_CUSTOMPATCH_STUB(hkbAttachmentModifier_0_to_1)
DEFINE_CUSTOMPATCH_STUB(hkbTimerModifier_0_to_1)
DEFINE_CUSTOMPATCH_STUB(hkbTargetRigidBodyModifier_0_to_1)
DEFINE_CUSTOMPATCH_STUB(hkbDetectCloseToGroundModifier_0_to_1)
DEFINE_CUSTOMPATCH_STUB(hkbVariableBindingSetBinding_0_to_1)
DEFINE_CUSTOMPATCH_STUB(hkbVariableBindingSet_0_to_1)
DEFINE_CUSTOMPATCH_STUB(hkbNode_0_to_1)
DEFINE_CUSTOMPATCH_STUB(hkbPositionRelativeSelectorGenerator_0_to_1)
DEFINE_CUSTOMPATCH_STUB(hkbCheckRagdollSpeedModifier_0_to_1)
DEFINE_CUSTOMPATCH_STUB(hkbFootIkModifierLeg_0_to_1)
DEFINE_CUSTOMPATCH_STUB(hkbClipTrigger_0_to_1)
DEFINE_CUSTOMPATCH_STUB(hkbClipGenerator_0_to_1)
DEFINE_CUSTOMPATCH_STUB(hkbCatchFallModifier_0_to_1)
DEFINE_CUSTOMPATCH_STUB(hkbStateMachineStateInfo_0_to_1)
DEFINE_CUSTOMPATCH_STUB(hkbBehaviorGraphData_0_to_1)
DEFINE_CUSTOMPATCH_STUB(hkbPoweredRagdollControlsModifier_0_to_1)
DEFINE_CUSTOMPATCH_STUB(hkbStateMachine_0_to_1)
DEFINE_CUSTOMPATCH_STUB(hkbKeyframeBonesModifier_0_to_1)
DEFINE_CUSTOMPATCH_STUB(hkbBlenderGeneratorChild_0_to_1)
DEFINE_CUSTOMPATCH_STUB(hkbRigidBodyRagdollModifier_0_to_1)
DEFINE_CUSTOMPATCH_STUB(hkbJigglerGroup_0_to_1)
DEFINE_CUSTOMPATCH_STUB(hkbStateMachineStateInfo_1_to_2)
DEFINE_CUSTOMPATCH_STUB(hkbDemoConfig_0_to_1)
DEFINE_CUSTOMPATCH_STUB(hkbVariableBindingSet_1_to_2)
DEFINE_CUSTOMPATCH_STUB(hkbClipGenerator_1_to_2)
DEFINE_CUSTOMPATCH_STUB(hkbRagdollController_0_to_1)
DEFINE_CUSTOMPATCH_STUB(hkbRagdollModifier_1_to_2)
DEFINE_CUSTOMPATCH_STUB(hkbPoweredRagdollControlsModifier_3_to_4)
DEFINE_CUSTOMPATCH_STUB(hkbDemoConfig_1_to_2)
DEFINE_CUSTOMPATCH_STUB(hkbGetUpModifier_1_to_2)
DEFINE_CUSTOMPATCH_STUB(hkbStateMachine_2_to_3)
DEFINE_CUSTOMPATCH_STUB(hkbSceneModifierList_0_to_1)
DEFINE_CUSTOMPATCH_STUB(hkbBehaviorGraph_0_to_1)
DEFINE_CUSTOMPATCH_STUB(hkbStateMachineStateInfo_3_to_4)
DEFINE_CUSTOMPATCH_STUB(hkbLookAtModifier_2_to_3)

// This automatically registers the patches from the HK_PATCHES_FILE
// with the given hkVersionPatchmanager

void HK_CALL CustomRegisterPatches(hkVersionPatchManager& man)
{
#	define HK_PATCHES_FILE <Common/Compat/Patches/hkbPatches.cxx>
#	include <Common/Serialize/Version/hkVersionPatchManager.cxx>
#	undef HK_PATCHES_FILE
}


#pragma endregion

