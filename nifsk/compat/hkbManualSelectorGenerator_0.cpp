#include "mat.h"
#include "hkbManualSelectorGenerator_0.h"

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


static const hkInternalClassMember hkbManualSelectorGeneratorClass_Members[] =
{
   { "generators",&hkbGeneratorClass,HK_NULL,hkClassMember::TYPE_ARRAY,hkClassMember::TYPE_POINTER,0,hkClassMember::FLAGS_NONE,HK_OFFSET_OF(hkbManualSelectorGenerator,m_generators) /*40*/,HK_NULL},
   { "selectedGeneratorIndex",HK_NULL,HK_NULL,hkClassMember::TYPE_INT8,hkClassMember::TYPE_VOID,0,hkClassMember::FLAGS_NONE,HK_OFFSET_OF(hkbManualSelectorGenerator,m_selectedGeneratorIndex) /*52*/,HK_NULL},
   { "currentGeneratorIndex",HK_NULL,HK_NULL,hkClassMember::TYPE_INT8,hkClassMember::TYPE_VOID,0,hkClassMember::FLAGS_NONE,HK_OFFSET_OF(hkbManualSelectorGenerator,m_currentGeneratorIndex) /*53*/,HK_NULL},
};

// Signature:  d932fab8
extern const hkClass hkbGeneratorClass;
extern const hkClass hkbManualSelectorGeneratorClass;
const hkClass hkbManualSelectorGeneratorClass(
    "hkbManualSelectorGenerator",
    &hkbGeneratorClass, // parent
    sizeof(hkbManualSelectorGenerator),
    HK_NULL, 0, // interfaces
    HK_NULL, 0, // enums
    reinterpret_cast<const hkClassMember*>(hkbManualSelectorGeneratorClass_Members), HK_COUNT_OF(hkbManualSelectorGeneratorClass_Members),
    HK_NULL, // defaults
    HK_NULL, // attributes
    0, // flags
    0 // version
 );
HK_REFLECTION_DEFINE_VIRTUAL(hkbManualSelectorGenerator, hkbManualSelectorGenerator);

