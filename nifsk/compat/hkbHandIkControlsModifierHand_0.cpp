#include "mat.h"
#include "hkbHandIkControlsModifierHand_0.h"

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


static const hkInternalClassMember hkbHandIkControlsModifierHandClass_Members[] =
{
   { "controlData",&hkbHandIkControlDataClass,HK_NULL,hkClassMember::TYPE_STRUCT,hkClassMember::TYPE_VOID,0,hkClassMember::FLAGS_NONE,HK_OFFSET_OF(hkbHandIkControlsModifierHand,m_controlData) /*0*/,HK_NULL},
   { "handIndex",HK_NULL,HK_NULL,hkClassMember::TYPE_INT32,hkClassMember::TYPE_VOID,0,hkClassMember::FLAGS_NONE,HK_OFFSET_OF(hkbHandIkControlsModifierHand,m_handIndex) /*80*/,HK_NULL},
   { "enable",HK_NULL,HK_NULL,hkClassMember::TYPE_BOOL,hkClassMember::TYPE_VOID,0,hkClassMember::FLAGS_NONE,HK_OFFSET_OF(hkbHandIkControlsModifierHand,m_enable) /*84*/,HK_NULL},
};

// Signature:  9c72e9e3
extern const hkClass hkbHandIkControlsModifierHandClass;
const hkClass hkbHandIkControlsModifierHandClass(
    "hkbHandIkControlsModifierHand",
    HK_NULL, // parent
    sizeof(hkbHandIkControlsModifierHand),
    HK_NULL, 0, // interfaces
    HK_NULL, 0, // enums
    reinterpret_cast<const hkClassMember*>(hkbHandIkControlsModifierHandClass_Members), HK_COUNT_OF(hkbHandIkControlsModifierHandClass_Members),
    HK_NULL, // defaults
    HK_NULL, // attributes
    0, // flags
    0 // version
 );
HK_REFLECTION_DEFINE_SIMPLE(hkbHandIkControlsModifierHand, hkbHandIkControlsModifierHand);

