#include "mat.h"
#include "hkbIntEventPayload_0.h"

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


static const hkInternalClassMember hkbIntEventPayloadClass_Members[] =
{
   { "data",HK_NULL,HK_NULL,hkClassMember::TYPE_INT32,hkClassMember::TYPE_VOID,0,hkClassMember::FLAGS_NONE,HK_OFFSET_OF(hkbIntEventPayload,m_data) /*8*/,HK_NULL},
};

// Signature:  ebbc1bd3
extern const hkClass hkbEventPayloadClass;
extern const hkClass hkbIntEventPayloadClass;
const hkClass hkbIntEventPayloadClass(
    "hkbIntEventPayload",
    &hkbEventPayloadClass, // parent
    sizeof(hkbIntEventPayload),
    HK_NULL, 0, // interfaces
    HK_NULL, 0, // enums
    reinterpret_cast<const hkClassMember*>(hkbIntEventPayloadClass_Members), HK_COUNT_OF(hkbIntEventPayloadClass_Members),
    HK_NULL, // defaults
    HK_NULL, // attributes
    0, // flags
    0 // version
 );
HK_REFLECTION_DEFINE_VIRTUAL(hkbIntEventPayload, hkbIntEventPayload);

