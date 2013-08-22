#include "mat.h"
#include "hkbHandIkControlsModifier_0.h"

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


static const hkInternalClassMember hkbHandIkControlsModifierClass_Members[] =
{
   { "hands",&hkbHandIkControlsModifierHandClass,HK_NULL,hkClassMember::TYPE_ARRAY,hkClassMember::TYPE_STRUCT,0,hkClassMember::FLAGS_NONE,HK_OFFSET_OF(hkbHandIkControlsModifier,m_hands) /*44*/,HK_NULL},
};

// Signature:  9f0488bb
extern const hkClass hkbModifierClass;
extern const hkClass hkbHandIkControlsModifierClass;
const hkClass hkbHandIkControlsModifierClass(
    "hkbHandIkControlsModifier",
    &hkbModifierClass, // parent
    sizeof(hkbHandIkControlsModifier),
    HK_NULL, 0, // interfaces
    HK_NULL, 0, // enums
    reinterpret_cast<const hkClassMember*>(hkbHandIkControlsModifierClass_Members), HK_COUNT_OF(hkbHandIkControlsModifierClass_Members),
    HK_NULL, // defaults
    HK_NULL, // attributes
    0, // flags
    0 // version
 );
HK_REFLECTION_DEFINE_VIRTUAL(hkbHandIkControlsModifier, hkbHandIkControlsModifier);

