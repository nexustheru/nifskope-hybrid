#define private public
#define protected public

#include <mat.h>
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
#include <nif_basic_types.h>

//havok
#pragma region Havok Headers
//////////////////////////////////////////////////////////////////////////
// Havok Includes
#include <mat.h>	
//////////////////////////////////////////////////////////////////////////
//fbx
#include <fbxsdk.h>



static void HK_CALL errorReport(const char* msg, void* userContext)
{
	using namespace std;

	 printf("%s", msg);
}

#include <Common/Base/keycode.cxx>
// [id=keycode]

// [id=productfeatures]
// We're using only physics - we undef products even if the keycode is present so
// that we don't get the usual initialization for these products.

#undef HK_FEATURE_PRODUCT_AI
#undef HK_FEATURE_PRODUCT_CLOTH
#undef HK_FEATURE_PRODUCT_DESTRUCTION
#define HK_FEATURE_PRODUCT_PHYSICS
#define HK_FEATURE_REFLECTION_PHYSICS
#define HK_FEATURE_PRODUCT_ANIMATION
#define HK_FEATURE_REFLECTION_ANIMATION


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
void HK_CALL registerBehaviorPatches()
{
}

// This automatically registers the patches from the HK_PATCHES_FILE
// with the given hkVersionPatchmanager
void HK_CALL CustomRegisterPatches(hkVersionPatchManager& man)
{
#	define HK_PATCHES_FILE <Common/Compat/Patches/hkbPatches.cxx>
#	include <Common/Serialize/Version/hkVersionPatchManager.cxx>
#	undef HK_PATCHES_FILE
}

#define ASSERT_SIGNATURE(XXX, YYY) \
   if (XXX##Class.getSignature(0) != YYY) { Log::Warn("Class Signature Mismatch: '" #XXX "' %08lx != %08lx", XXX##Class.getSignature(0), YYY); }\

#define REGISTER_CLASS(XXX) \
   extern const hkClass XXX##Class; \
   extern const hkTypeInfo XXX##TypeInfo; \
   hkDefaultClassNameRegistry::getInstance().registerClass(&XXX##Class); \
   hkTypeInfoRegistry::getInstance().registerTypeInfo(&XXX##TypeInfo); \

#define REGISTER_CLASS_W_SIG(XXX, YYY) \
   REGISTER_CLASS(##XXX); \
   Log::Debug("Class Registered: '" #XXX "' %08lx", XXX##Class.getSignature(0)); \
   ASSERT_SIGNATURE(##XXX, ##YYY); \



void HK_CALL ValidateClassSignatures()
{
#define HKCLASS_VERIFY(XXX, YYY) \
   extern const hkClass XXX##Class; \
   if (XXX##Class.getSignature(0) != YYY) { Log::Warn("Class Signature Mismatch: '" #XXX "' %08lx != %08lx", XXX##Class.getSignature(0), YYY); }\

#include "hkxverify.inl"
#undef HKCLASS_VERIFY
}

void HK_CALL CustomRegisterDefaultClasses()
{
#define HKCLASS_VERIFY(XXX, YYY) REGISTER_CLASS_W_SIG(##XXX, ##YYY)
#include "hkxverify.inl"
#undef HKCLASS_VERIFY
}

namespace hkHavok660r1Classes
{
   extern const hkStaticClassNameRegistry hkHavokDefaultClassRegistry;
}

void HK_CALL CustomRegisterOverrideClasses(hkDynamicClassNameRegistry& registry)
{
   const hkStaticClassNameRegistry** regList = hkVersionRegistry::StaticLinkedClassRegistries;
   for ( const hkStaticClassNameRegistry** itr = regList; *itr != NULL; ++itr)
   {
      const hkStaticClassNameRegistry* oldRegistry = (*itr);
      if (const hkClass* hclass = oldRegistry->getClassByName("hkClassEnum") )
      {
         //if ( hclass->getSignature() == 0x9617a10c )
         if ( hclass->getSignature() == 0x9EE66732 )
         {
            registry.registerClass(hclass);
            return;
         }
      }
   }

   //const hkStaticClassNameRegistry& oldRegistry = hkHavok660r1Classes::hkHavokDefaultClassRegistry;

   //REGISTER_CLASS_W_SIG(, ##YYY)
}


#pragma endregion



#pragma endregion
