#include "mat.h"
#include "hkbSequenceInternalState_0.h"

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


static const hkInternalClassMember hkbSequenceInternalStateClass_Members[] =
{
   { "nextSampleEvents",HK_NULL,HK_NULL,hkClassMember::TYPE_ARRAY,hkClassMember::TYPE_INT32,0,hkClassMember::FLAGS_NONE,HK_OFFSET_OF(hkbSequenceInternalState,m_nextSampleEvents) /*8*/,HK_NULL},
   { "nextSampleReals",HK_NULL,HK_NULL,hkClassMember::TYPE_ARRAY,hkClassMember::TYPE_INT32,0,hkClassMember::FLAGS_NONE,HK_OFFSET_OF(hkbSequenceInternalState,m_nextSampleReals) /*20*/,HK_NULL},
   { "nextSampleBools",HK_NULL,HK_NULL,hkClassMember::TYPE_ARRAY,hkClassMember::TYPE_INT32,0,hkClassMember::FLAGS_NONE,HK_OFFSET_OF(hkbSequenceInternalState,m_nextSampleBools) /*32*/,HK_NULL},
   { "nextSampleInts",HK_NULL,HK_NULL,hkClassMember::TYPE_ARRAY,hkClassMember::TYPE_INT32,0,hkClassMember::FLAGS_NONE,HK_OFFSET_OF(hkbSequenceInternalState,m_nextSampleInts) /*44*/,HK_NULL},
   { "time",HK_NULL,HK_NULL,hkClassMember::TYPE_REAL,hkClassMember::TYPE_VOID,0,hkClassMember::FLAGS_NONE,HK_OFFSET_OF(hkbSequenceInternalState,m_time) /*56*/,HK_NULL},
   { "isEnabled",HK_NULL,HK_NULL,hkClassMember::TYPE_BOOL,hkClassMember::TYPE_VOID,0,hkClassMember::FLAGS_NONE,HK_OFFSET_OF(hkbSequenceInternalState,m_isEnabled) /*60*/,HK_NULL},
};

// Signature:  419b9a05
extern const hkClass hkReferencedObjectClass;
extern const hkClass hkbSequenceInternalStateClass;
const hkClass hkbSequenceInternalStateClass(
    "hkbSequenceInternalState",
    &hkReferencedObjectClass, // parent
    sizeof(hkbSequenceInternalState),
    HK_NULL, 0, // interfaces
    HK_NULL, 0, // enums
    reinterpret_cast<const hkClassMember*>(hkbSequenceInternalStateClass_Members), HK_COUNT_OF(hkbSequenceInternalStateClass_Members),
    HK_NULL, // defaults
    HK_NULL, // attributes
    0, // flags
    0 // version
 );
HK_REFLECTION_DEFINE_VIRTUAL(hkbSequenceInternalState, hkbSequenceInternalState);

