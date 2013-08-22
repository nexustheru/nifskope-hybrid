#include "mat.h"
#include "hkbSequenceStringData_0.h"

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


static const hkInternalClassMember hkbSequenceStringDataClass_Members[] =
{
   { "eventNames",HK_NULL,HK_NULL,hkClassMember::TYPE_ARRAY,hkClassMember::TYPE_STRINGPTR,0,hkClassMember::FLAGS_NONE,HK_OFFSET_OF(hkbSequenceStringData,m_eventNames) /*8*/,HK_NULL},
   { "variableNames",HK_NULL,HK_NULL,hkClassMember::TYPE_ARRAY,hkClassMember::TYPE_STRINGPTR,0,hkClassMember::FLAGS_NONE,HK_OFFSET_OF(hkbSequenceStringData,m_variableNames) /*20*/,HK_NULL},
};

// Signature:  6a5094e3
extern const hkClass hkReferencedObjectClass;
extern const hkClass hkbSequenceStringDataClass;
const hkClass hkbSequenceStringDataClass(
    "hkbSequenceStringData",
    &hkReferencedObjectClass, // parent
    sizeof(hkbSequenceStringData),
    HK_NULL, 0, // interfaces
    HK_NULL, 0, // enums
    reinterpret_cast<const hkClassMember*>(hkbSequenceStringDataClass_Members), HK_COUNT_OF(hkbSequenceStringDataClass_Members),
    HK_NULL, // defaults
    HK_NULL, // attributes
    0, // flags
    0 // version
 );
HK_REFLECTION_DEFINE_VIRTUAL(hkbSequenceStringData, hkbSequenceStringData);

