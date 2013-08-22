#include "mat.h"
#include "hkbCharacterControllerControlData_0.h"

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


static const hkInternalClassMember hkbCharacterControllerControlDataClass_Members[] =
{
   { "desiredVelocity",HK_NULL,HK_NULL,hkClassMember::TYPE_VECTOR4,hkClassMember::TYPE_VOID,0,hkClassMember::FLAGS_NONE,HK_OFFSET_OF(hkbCharacterControllerControlData,m_desiredVelocity) /*0*/,HK_NULL},
   { "verticalGain",HK_NULL,HK_NULL,hkClassMember::TYPE_REAL,hkClassMember::TYPE_VOID,0,hkClassMember::FLAGS_NONE,HK_OFFSET_OF(hkbCharacterControllerControlData,m_verticalGain) /*16*/,HK_NULL},
   { "horizontalCatchUpGain",HK_NULL,HK_NULL,hkClassMember::TYPE_REAL,hkClassMember::TYPE_VOID,0,hkClassMember::FLAGS_NONE,HK_OFFSET_OF(hkbCharacterControllerControlData,m_horizontalCatchUpGain) /*20*/,HK_NULL},
   { "maxVerticalSeparation",HK_NULL,HK_NULL,hkClassMember::TYPE_REAL,hkClassMember::TYPE_VOID,0,hkClassMember::FLAGS_NONE,HK_OFFSET_OF(hkbCharacterControllerControlData,m_maxVerticalSeparation) /*24*/,HK_NULL},
   { "maxHorizontalSeparation",HK_NULL,HK_NULL,hkClassMember::TYPE_REAL,hkClassMember::TYPE_VOID,0,hkClassMember::FLAGS_NONE,HK_OFFSET_OF(hkbCharacterControllerControlData,m_maxHorizontalSeparation) /*28*/,HK_NULL},
};

// Signature:  5b6c03d9
extern const hkClass hkbCharacterControllerControlDataClass;
const hkClass hkbCharacterControllerControlDataClass(
    "hkbCharacterControllerControlData",
    HK_NULL, // parent
    sizeof(hkbCharacterControllerControlData),
    HK_NULL, 0, // interfaces
    HK_NULL, 0, // enums
    reinterpret_cast<const hkClassMember*>(hkbCharacterControllerControlDataClass_Members), HK_COUNT_OF(hkbCharacterControllerControlDataClass_Members),
    HK_NULL, // defaults
    HK_NULL, // attributes
    0, // flags
    0 // version
 );
HK_REFLECTION_DEFINE_SIMPLE(hkbCharacterControllerControlData, hkbCharacterControllerControlData);

