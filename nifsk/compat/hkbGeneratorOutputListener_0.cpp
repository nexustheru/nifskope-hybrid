#include "mat.h"
#include "hkbGeneratorOutputListener_0.h"

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


// Signature:  da8c7d7d
extern const hkClass hkReferencedObjectClass;
extern const hkClass hkbGeneratorOutputListenerClass;
const hkClass hkbGeneratorOutputListenerClass(
    "hkbGeneratorOutputListener",
    &hkReferencedObjectClass, // parent
    sizeof(hkbGeneratorOutputListener),
    HK_NULL, 0, // interfaces
    HK_NULL, 0, // enums
    HK_NULL, 0, // members
    HK_NULL, // defaults
    HK_NULL, // attributes
    0, // flags
    0 // version
 );
HK_REFLECTION_DEFINE_VIRTUAL(hkbGeneratorOutputListener, hkbGeneratorOutputListener);

