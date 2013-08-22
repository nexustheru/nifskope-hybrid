#include "mat.h"
#include "hkbMoveCharacterModifierInternalState_0.h"

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


static const hkInternalClassMember hkbMoveCharacterModifierInternalStateClass_Members[] =
{
   { "timeSinceLastModify",HK_NULL,HK_NULL,hkClassMember::TYPE_REAL,hkClassMember::TYPE_VOID,0,hkClassMember::FLAGS_NONE,HK_OFFSET_OF(hkbMoveCharacterModifierInternalState,m_timeSinceLastModify) /*8*/,HK_NULL},
};

// Signature:  28f67ba0
extern const hkClass hkReferencedObjectClass;
extern const hkClass hkbMoveCharacterModifierInternalStateClass;
const hkClass hkbMoveCharacterModifierInternalStateClass(
    "hkbMoveCharacterModifierInternalState",
    &hkReferencedObjectClass, // parent
    sizeof(hkbMoveCharacterModifierInternalState),
    HK_NULL, 0, // interfaces
    HK_NULL, 0, // enums
    reinterpret_cast<const hkClassMember*>(hkbMoveCharacterModifierInternalStateClass_Members), HK_COUNT_OF(hkbMoveCharacterModifierInternalStateClass_Members),
    HK_NULL, // defaults
    HK_NULL, // attributes
    0, // flags
    0 // version
 );
HK_REFLECTION_DEFINE_VIRTUAL(hkbMoveCharacterModifierInternalState, hkbMoveCharacterModifierInternalState);

