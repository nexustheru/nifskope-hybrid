#include "mat.h"
#include "hkbBehaviorGraphInternalState_0.h"

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


static const hkInternalClassMember hkbBehaviorGraphInternalStateClass_Members[] =
{
   { "nodeInternalStateInfos",&hkbNodeInternalStateInfoClass,HK_NULL,hkClassMember::TYPE_ARRAY,hkClassMember::TYPE_POINTER,0,hkClassMember::FLAGS_NONE,HK_OFFSET_OF(hkbBehaviorGraphInternalState,m_nodeInternalStateInfos) /*8*/,HK_NULL},
   { "variableValueSet",&hkbVariableValueSetClass,HK_NULL,hkClassMember::TYPE_POINTER,hkClassMember::TYPE_STRUCT,0,hkClassMember::FLAGS_NONE,HK_OFFSET_OF(hkbBehaviorGraphInternalState,m_variableValueSet) /*20*/,HK_NULL},
};

// Signature:  8699b6eb
extern const hkClass hkReferencedObjectClass;
extern const hkClass hkbBehaviorGraphInternalStateClass;
const hkClass hkbBehaviorGraphInternalStateClass(
    "hkbBehaviorGraphInternalState",
    &hkReferencedObjectClass, // parent
    sizeof(hkbBehaviorGraphInternalState),
    HK_NULL, 0, // interfaces
    HK_NULL, 0, // enums
    reinterpret_cast<const hkClassMember*>(hkbBehaviorGraphInternalStateClass_Members), HK_COUNT_OF(hkbBehaviorGraphInternalStateClass_Members),
    HK_NULL, // defaults
    HK_NULL, // attributes
    0, // flags
    0 // version
 );
HK_REFLECTION_DEFINE_VIRTUAL(hkbBehaviorGraphInternalState, hkbBehaviorGraphInternalState);

