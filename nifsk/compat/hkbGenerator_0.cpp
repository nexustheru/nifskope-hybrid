#include "mat.h"
#include "hkbGenerator_0.h"

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


// Signature:  0d68aefc
extern const hkClass hkbNodeClass;
extern const hkClass hkbGeneratorClass;
const hkClass hkbGeneratorClass(
    "hkbGenerator",
    &hkbNodeClass, // parent
    sizeof(hkbGenerator),
    HK_NULL, 0, // interfaces
    HK_NULL, 0, // enums
    HK_NULL, 0, // members
    HK_NULL, // defaults
    HK_NULL, // attributes
    0, // flags
    0 // version
 );
HK_REFLECTION_DEFINE_VIRTUAL(hkbGenerator, hkbGenerator);

