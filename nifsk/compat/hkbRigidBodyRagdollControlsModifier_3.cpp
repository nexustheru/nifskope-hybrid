#include "mat.h"
#include "hkbRigidBodyRagdollControlsModifier_3.h"

#include <Common/Serialize/hkSerialize.h>
#include <Common/Serialize/Util/hkSerializeUtil.h>
#include <Common/Serialize/Version/hkVersionPatchManager.h>
#include <Common/Serialize/Data/Dict/hkDataObjectDict.h>
#include <Common/Serialize/Data/Native/hkDataObjectNative.h>
#include <Common/Serialize/Data/Util/hkDataObjectUtil.h>
#include <Common/Base/Reflection/Registry/hkDynamicClassNameRegistry.h>
#include <Common/Base/Reflection/Registry/hkVtableClassRegistry.h>
#include <Common/Base/Reflection/hkClass.h>
#include <Common/Base/Reflection/hkInternalClassMember.h>
#include <Common/Serialize/Util/hkSerializationCheckingUtils.h>
#include <Common/Serialize/Util/hkVersionCheckingUtils.h>


static const hkInternalClassMember hkbRigidBodyRagdollControlsModifierClass_Members[] =
{
   { "controlData",&hkbRigidBodyRagdollControlDataClass,HK_NULL,hkClassMember::TYPE_STRUCT,hkClassMember::TYPE_VOID,0,hkClassMember::FLAGS_NONE,HK_OFFSET_OF(hkbRigidBodyRagdollControlsModifier,m_controlData) /*48*/,HK_NULL},
   { "bones",&hkbBoneIndexArrayClass,HK_NULL,hkClassMember::TYPE_POINTER,hkClassMember::TYPE_STRUCT,0,hkClassMember::FLAGS_NONE,HK_OFFSET_OF(hkbRigidBodyRagdollControlsModifier,m_bones) /*112*/,HK_NULL},
};

// Signature:  aa87d1eb
extern const hkClass hkbModifierClass;
extern const hkClass hkbRigidBodyRagdollControlsModifierClass;
const hkClass hkbRigidBodyRagdollControlsModifierClass(
    "hkbRigidBodyRagdollControlsModifier",
    &hkbModifierClass, // parent
    sizeof(hkbRigidBodyRagdollControlsModifier),
    HK_NULL, 0, // interfaces
    HK_NULL, 0, // enums
    reinterpret_cast<const hkClassMember*>(hkbRigidBodyRagdollControlsModifierClass_Members), HK_COUNT_OF(hkbRigidBodyRagdollControlsModifierClass_Members),
    HK_NULL, // defaults
    HK_NULL, // attributes
    0, // flags
    3 // version
 );
HK_REFLECTION_DEFINE_VIRTUAL(hkbRigidBodyRagdollControlsModifier, hkbRigidBodyRagdollControlsModifier);

