#include "mat.h"
#include "hkbCharacterData_7.h"

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


static const hkInternalClassMember hkbCharacterDataClass_Members[] =
{
   { "characterControllerInfo",&hkbCharacterDataCharacterControllerInfoClass,HK_NULL,hkClassMember::TYPE_STRUCT,hkClassMember::TYPE_VOID,0,hkClassMember::FLAGS_NONE,HK_OFFSET_OF(hkbCharacterData,m_characterControllerInfo) /*8*/,HK_NULL},
   { "modelUpMS",HK_NULL,HK_NULL,hkClassMember::TYPE_VECTOR4,hkClassMember::TYPE_VOID,0,hkClassMember::FLAGS_NONE,HK_OFFSET_OF(hkbCharacterData,m_modelUpMS) /*32*/,HK_NULL},
   { "modelForwardMS",HK_NULL,HK_NULL,hkClassMember::TYPE_VECTOR4,hkClassMember::TYPE_VOID,0,hkClassMember::FLAGS_NONE,HK_OFFSET_OF(hkbCharacterData,m_modelForwardMS) /*48*/,HK_NULL},
   { "modelRightMS",HK_NULL,HK_NULL,hkClassMember::TYPE_VECTOR4,hkClassMember::TYPE_VOID,0,hkClassMember::FLAGS_NONE,HK_OFFSET_OF(hkbCharacterData,m_modelRightMS) /*64*/,HK_NULL},
   { "characterPropertyInfos",&hkbVariableInfoClass,HK_NULL,hkClassMember::TYPE_ARRAY,hkClassMember::TYPE_STRUCT,0,hkClassMember::FLAGS_NONE,HK_OFFSET_OF(hkbCharacterData,m_characterPropertyInfos) /*80*/,HK_NULL},
   { "numBonesPerLod",HK_NULL,HK_NULL,hkClassMember::TYPE_ARRAY,hkClassMember::TYPE_INT32,0,hkClassMember::FLAGS_NONE,HK_OFFSET_OF(hkbCharacterData,m_numBonesPerLod) /*92*/,HK_NULL},
   { "characterPropertyValues",&hkbVariableValueSetClass,HK_NULL,hkClassMember::TYPE_POINTER,hkClassMember::TYPE_STRUCT,0,hkClassMember::FLAGS_NONE,HK_OFFSET_OF(hkbCharacterData,m_characterPropertyValues) /*104*/,HK_NULL},
   { "footIkDriverInfo",&hkbFootIkDriverInfoClass,HK_NULL,hkClassMember::TYPE_POINTER,hkClassMember::TYPE_STRUCT,0,hkClassMember::FLAGS_NONE,HK_OFFSET_OF(hkbCharacterData,m_footIkDriverInfo) /*108*/,HK_NULL},
   { "handIkDriverInfo",&hkbHandIkDriverInfoClass,HK_NULL,hkClassMember::TYPE_POINTER,hkClassMember::TYPE_STRUCT,0,hkClassMember::FLAGS_NONE,HK_OFFSET_OF(hkbCharacterData,m_handIkDriverInfo) /*112*/,HK_NULL},
   { "stringData",&hkbCharacterStringDataClass,HK_NULL,hkClassMember::TYPE_POINTER,hkClassMember::TYPE_STRUCT,0,hkClassMember::FLAGS_NONE,HK_OFFSET_OF(hkbCharacterData,m_stringData) /*116*/,HK_NULL},
   { "mirroredSkeletonInfo",&hkbMirroredSkeletonInfoClass,HK_NULL,hkClassMember::TYPE_POINTER,hkClassMember::TYPE_STRUCT,0,hkClassMember::FLAGS_NONE,HK_OFFSET_OF(hkbCharacterData,m_mirroredSkeletonInfo) /*120*/,HK_NULL},
   { "scale",HK_NULL,HK_NULL,hkClassMember::TYPE_REAL,hkClassMember::TYPE_VOID,0,hkClassMember::FLAGS_NONE,HK_OFFSET_OF(hkbCharacterData,m_scale) /*124*/,HK_NULL},
   { "numHands",HK_NULL,HK_NULL,hkClassMember::TYPE_INT16,hkClassMember::TYPE_VOID,0,hkClassMember::SERIALIZE_IGNORED,HK_OFFSET_OF(hkbCharacterData,m_numHands) /*128*/,HK_NULL},
   { "numFloatSlots",HK_NULL,HK_NULL,hkClassMember::TYPE_INT16,hkClassMember::TYPE_VOID,0,hkClassMember::SERIALIZE_IGNORED,HK_OFFSET_OF(hkbCharacterData,m_numFloatSlots) /*130*/,HK_NULL},
};

// Signature:  300d6808
extern const hkClass hkReferencedObjectClass;
extern const hkClass hkbCharacterDataClass;
const hkClass hkbCharacterDataClass(
    "hkbCharacterData",
    &hkReferencedObjectClass, // parent
    sizeof(hkbCharacterData),
    HK_NULL, 0, // interfaces
    HK_NULL, 0, // enums
    reinterpret_cast<const hkClassMember*>(hkbCharacterDataClass_Members), HK_COUNT_OF(hkbCharacterDataClass_Members),
    HK_NULL, // defaults
    HK_NULL, // attributes
    0, // flags
    7 // version
 );
HK_REFLECTION_DEFINE_VIRTUAL(hkbCharacterData, hkbCharacterData);

