#include "mat.h"
#include "hkbGeneratorSyncInfo_0.h"

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


static const hkInternalClassMember hkbGeneratorSyncInfoClass_Members[] =
{
   { "syncPoints",&hkbGeneratorSyncInfoSyncPointClass,HK_NULL,hkClassMember::TYPE_STRUCT,hkClassMember::TYPE_VOID,8,hkClassMember::FLAGS_NONE,HK_OFFSET_OF(hkbGeneratorSyncInfo,m_syncPoints) /*0*/,HK_NULL},
   { "baseFrequency",HK_NULL,HK_NULL,hkClassMember::TYPE_REAL,hkClassMember::TYPE_VOID,0,hkClassMember::FLAGS_NONE,HK_OFFSET_OF(hkbGeneratorSyncInfo,m_baseFrequency) /*64*/,HK_NULL},
   { "localTime",HK_NULL,HK_NULL,hkClassMember::TYPE_REAL,hkClassMember::TYPE_VOID,0,hkClassMember::FLAGS_NONE,HK_OFFSET_OF(hkbGeneratorSyncInfo,m_localTime) /*68*/,HK_NULL},
   { "playbackSpeed",HK_NULL,HK_NULL,hkClassMember::TYPE_REAL,hkClassMember::TYPE_VOID,0,hkClassMember::FLAGS_NONE,HK_OFFSET_OF(hkbGeneratorSyncInfo,m_playbackSpeed) /*72*/,HK_NULL},
   { "numSyncPoints",HK_NULL,HK_NULL,hkClassMember::TYPE_INT8,hkClassMember::TYPE_VOID,0,hkClassMember::FLAGS_NONE,HK_OFFSET_OF(hkbGeneratorSyncInfo,m_numSyncPoints) /*76*/,HK_NULL},
   { "isCyclic",HK_NULL,HK_NULL,hkClassMember::TYPE_BOOL,hkClassMember::TYPE_VOID,0,hkClassMember::FLAGS_NONE,HK_OFFSET_OF(hkbGeneratorSyncInfo,m_isCyclic) /*77*/,HK_NULL},
   { "isMirrored",HK_NULL,HK_NULL,hkClassMember::TYPE_BOOL,hkClassMember::TYPE_VOID,0,hkClassMember::FLAGS_NONE,HK_OFFSET_OF(hkbGeneratorSyncInfo,m_isMirrored) /*78*/,HK_NULL},
   { "isAdditive",HK_NULL,HK_NULL,hkClassMember::TYPE_BOOL,hkClassMember::TYPE_VOID,0,hkClassMember::FLAGS_NONE,HK_OFFSET_OF(hkbGeneratorSyncInfo,m_isAdditive) /*79*/,HK_NULL},
};

// Signature:  a3c341f8
extern const hkClass hkbGeneratorSyncInfoClass;
const hkClass hkbGeneratorSyncInfoClass(
    "hkbGeneratorSyncInfo",
    HK_NULL, // parent
    sizeof(hkbGeneratorSyncInfo),
    HK_NULL, 0, // interfaces
    HK_NULL, 0, // enums
    reinterpret_cast<const hkClassMember*>(hkbGeneratorSyncInfoClass_Members), HK_COUNT_OF(hkbGeneratorSyncInfoClass_Members),
    HK_NULL, // defaults
    HK_NULL, // attributes
    0, // flags
    0 // version
 );
HK_REFLECTION_DEFINE_SIMPLE(hkbGeneratorSyncInfo, hkbGeneratorSyncInfo);

