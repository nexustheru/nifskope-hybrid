#include "mat.h"
#include "hkbCombineTransformsModifierInternalState_0.h"

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


static const hkInternalClassMember hkbCombineTransformsModifierInternalStateClass_Members[] =
{
   { "translationOut",HK_NULL,HK_NULL,hkClassMember::TYPE_VECTOR4,hkClassMember::TYPE_VOID,0,hkClassMember::FLAGS_NONE,HK_OFFSET_OF(hkbCombineTransformsModifierInternalState,m_translationOut) /*16*/,HK_NULL},
   { "rotationOut",HK_NULL,HK_NULL,hkClassMember::TYPE_QUATERNION,hkClassMember::TYPE_VOID,0,hkClassMember::FLAGS_NONE,HK_OFFSET_OF(hkbCombineTransformsModifierInternalState,m_rotationOut) /*32*/,HK_NULL},
};

// Signature:  a92ed39f
extern const hkClass hkReferencedObjectClass;
extern const hkClass hkbCombineTransformsModifierInternalStateClass;
const hkClass hkbCombineTransformsModifierInternalStateClass(
    "hkbCombineTransformsModifierInternalState",
    &hkReferencedObjectClass, // parent
    sizeof(hkbCombineTransformsModifierInternalState),
    HK_NULL, 0, // interfaces
    HK_NULL, 0, // enums
    reinterpret_cast<const hkClassMember*>(hkbCombineTransformsModifierInternalStateClass_Members), HK_COUNT_OF(hkbCombineTransformsModifierInternalStateClass_Members),
    HK_NULL, // defaults
    HK_NULL, // attributes
    0, // flags
    0 // version
 );
HK_REFLECTION_DEFINE_VIRTUAL(hkbCombineTransformsModifierInternalState, hkbCombineTransformsModifierInternalState);

