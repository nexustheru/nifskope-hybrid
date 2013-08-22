#include "mat.h"
#include "hkbComputeDirectionModifierInternalState_0.h"

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


static const hkInternalClassMember hkbComputeDirectionModifierInternalStateClass_Members[] =
{
   { "pointOut",HK_NULL,HK_NULL,hkClassMember::TYPE_VECTOR4,hkClassMember::TYPE_VOID,0,hkClassMember::FLAGS_NONE,HK_OFFSET_OF(hkbComputeDirectionModifierInternalState,m_pointOut) /*16*/,HK_NULL},
   { "groundAngleOut",HK_NULL,HK_NULL,hkClassMember::TYPE_REAL,hkClassMember::TYPE_VOID,0,hkClassMember::FLAGS_NONE,HK_OFFSET_OF(hkbComputeDirectionModifierInternalState,m_groundAngleOut) /*32*/,HK_NULL},
   { "upAngleOut",HK_NULL,HK_NULL,hkClassMember::TYPE_REAL,hkClassMember::TYPE_VOID,0,hkClassMember::FLAGS_NONE,HK_OFFSET_OF(hkbComputeDirectionModifierInternalState,m_upAngleOut) /*36*/,HK_NULL},
   { "computedOutput",HK_NULL,HK_NULL,hkClassMember::TYPE_BOOL,hkClassMember::TYPE_VOID,0,hkClassMember::FLAGS_NONE,HK_OFFSET_OF(hkbComputeDirectionModifierInternalState,m_computedOutput) /*40*/,HK_NULL},
};

// Signature:  6ac054d7
extern const hkClass hkReferencedObjectClass;
extern const hkClass hkbComputeDirectionModifierInternalStateClass;
const hkClass hkbComputeDirectionModifierInternalStateClass(
    "hkbComputeDirectionModifierInternalState",
    &hkReferencedObjectClass, // parent
    sizeof(hkbComputeDirectionModifierInternalState),
    HK_NULL, 0, // interfaces
    HK_NULL, 0, // enums
    reinterpret_cast<const hkClassMember*>(hkbComputeDirectionModifierInternalStateClass_Members), HK_COUNT_OF(hkbComputeDirectionModifierInternalStateClass_Members),
    HK_NULL, // defaults
    HK_NULL, // attributes
    0, // flags
    0 // version
 );
HK_REFLECTION_DEFINE_VIRTUAL(hkbComputeDirectionModifierInternalState, hkbComputeDirectionModifierInternalState);

