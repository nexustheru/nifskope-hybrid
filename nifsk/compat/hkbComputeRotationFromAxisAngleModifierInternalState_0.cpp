#include "mat.h"
#include "hkbComputeRotationFromAxisAngleModifierInternalState_0.h"

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


static const hkInternalClassMember hkbComputeRotationFromAxisAngleModifierInternalStateClass_Members[] =
{
   { "rotationOut",HK_NULL,HK_NULL,hkClassMember::TYPE_QUATERNION,hkClassMember::TYPE_VOID,0,hkClassMember::FLAGS_NONE,HK_OFFSET_OF(hkbComputeRotationFromAxisAngleModifierInternalState,m_rotationOut) /*16*/,HK_NULL},
};

// Signature:  71cd1eb0
extern const hkClass hkReferencedObjectClass;
extern const hkClass hkbComputeRotationFromAxisAngleModifierInternalStateClass;
const hkClass hkbComputeRotationFromAxisAngleModifierInternalStateClass(
    "hkbComputeRotationFromAxisAngleModifierInternalState",
    &hkReferencedObjectClass, // parent
    sizeof(hkbComputeRotationFromAxisAngleModifierInternalState),
    HK_NULL, 0, // interfaces
    HK_NULL, 0, // enums
    reinterpret_cast<const hkClassMember*>(hkbComputeRotationFromAxisAngleModifierInternalStateClass_Members), HK_COUNT_OF(hkbComputeRotationFromAxisAngleModifierInternalStateClass_Members),
    HK_NULL, // defaults
    HK_NULL, // attributes
    0, // flags
    0 // version
 );
HK_REFLECTION_DEFINE_VIRTUAL(hkbComputeRotationFromAxisAngleModifierInternalState, hkbComputeRotationFromAxisAngleModifierInternalState);

