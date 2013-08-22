#include "mat.h"
#include "hkbEventRaisedInfo_2.h"

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


static const hkInternalClassMember hkbEventRaisedInfoClass_Members[] =
{
   { "characterId",HK_NULL,HK_NULL,hkClassMember::TYPE_UINT64,hkClassMember::TYPE_VOID,0,hkClassMember::FLAGS_NONE,HK_OFFSET_OF(hkbEventRaisedInfo,m_characterId) /*8*/,HK_NULL},
   { "eventName",HK_NULL,HK_NULL,hkClassMember::TYPE_STRINGPTR,hkClassMember::TYPE_VOID,0,hkClassMember::FLAGS_NONE,HK_OFFSET_OF(hkbEventRaisedInfo,m_eventName) /*16*/,HK_NULL},
   { "raisedBySdk",HK_NULL,HK_NULL,hkClassMember::TYPE_BOOL,hkClassMember::TYPE_VOID,0,hkClassMember::FLAGS_NONE,HK_OFFSET_OF(hkbEventRaisedInfo,m_raisedBySdk) /*20*/,HK_NULL},
   { "senderId",HK_NULL,HK_NULL,hkClassMember::TYPE_INT32,hkClassMember::TYPE_VOID,0,hkClassMember::FLAGS_NONE,HK_OFFSET_OF(hkbEventRaisedInfo,m_senderId) /*24*/,HK_NULL},
   { "padding",HK_NULL,HK_NULL,hkClassMember::TYPE_INT32,hkClassMember::TYPE_VOID,0,hkClassMember::FLAGS_NONE,HK_OFFSET_OF(hkbEventRaisedInfo,m_padding) /*28*/,HK_NULL},
};

// Signature:  00c02da3
extern const hkClass hkReferencedObjectClass;
extern const hkClass hkbEventRaisedInfoClass;
const hkClass hkbEventRaisedInfoClass(
    "hkbEventRaisedInfo",
    &hkReferencedObjectClass, // parent
    sizeof(hkbEventRaisedInfo),
    HK_NULL, 0, // interfaces
    HK_NULL, 0, // enums
    reinterpret_cast<const hkClassMember*>(hkbEventRaisedInfoClass_Members), HK_COUNT_OF(hkbEventRaisedInfoClass_Members),
    HK_NULL, // defaults
    HK_NULL, // attributes
    0, // flags
    2 // version
 );
HK_REFLECTION_DEFINE_VIRTUAL(hkbEventRaisedInfo, hkbEventRaisedInfo);

