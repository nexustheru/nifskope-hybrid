#include "mat.h"
#include "hkbEventsFromRangeModifierInternalState_0.h"

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


static const hkInternalClassMember hkbEventsFromRangeModifierInternalStateClass_Members[] =
{
   { "wasActiveInPreviousFrame",HK_NULL,HK_NULL,hkClassMember::TYPE_ARRAY,hkClassMember::TYPE_BOOL,0,hkClassMember::FLAGS_NONE,HK_OFFSET_OF(hkbEventsFromRangeModifierInternalState,m_wasActiveInPreviousFrame) /*8*/,HK_NULL},
};

// Signature:  cc47b48d
extern const hkClass hkReferencedObjectClass;
extern const hkClass hkbEventsFromRangeModifierInternalStateClass;
const hkClass hkbEventsFromRangeModifierInternalStateClass(
    "hkbEventsFromRangeModifierInternalState",
    &hkReferencedObjectClass, // parent
    sizeof(hkbEventsFromRangeModifierInternalState),
    HK_NULL, 0, // interfaces
    HK_NULL, 0, // enums
    reinterpret_cast<const hkClassMember*>(hkbEventsFromRangeModifierInternalStateClass_Members), HK_COUNT_OF(hkbEventsFromRangeModifierInternalStateClass_Members),
    HK_NULL, // defaults
    HK_NULL, // attributes
    0, // flags
    0 // version
 );
HK_REFLECTION_DEFINE_VIRTUAL(hkbEventsFromRangeModifierInternalState, hkbEventsFromRangeModifierInternalState);

