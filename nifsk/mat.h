//normals
#include <stdio.h>
#include <tchar.h>

#include <iomanip>
#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <map>
#include <string>
#include <cstringt.h>
#include <Windows.h>

#include <Common/Base/hkBase.h>
#include <Common/Base/Memory/System/Util/hkMemoryInitUtil.h>
#include <Common/Base/Memory/Allocator/Malloc/hkMallocAllocator.h>
#include <Common/Base/System/Io/IStream/hkIStream.h>

#include <Common/Base/Reflection/Registry/hkDefaultClassNameRegistry.h>
#include <Common/Serialize/Util/hkStaticClassNameRegistry.h>
//vs
#include <cstdio>
// Scene
#include <Common/SceneData/Scene/hkxScene.h>
// Compatibility
#include <Common/Compat/hkCompat.h>
// Scene
#include <Common/SceneData/Scene/hkxScene.h>
// Serialize
#include <Common/Serialize/Util/hkRootLevelContainer.h>
#include <Common/Serialize/Util/hkLoader.h>
#include <Common/Serialize/Util/hkSerializeUtil.h>
#include <Common/Serialize/Version/hkVersionPatchManager.h>
#include <Common/Serialize/Data/hkDataObject.h>
#include <Common/Compat/Deprecated/Packfile/hkPackfileReader.h>
#include <Common\Base\System\Io\Reader\hkStreamReader.h>
//#include <Common/Serialize/Util/hkBuiltinTypeRegistry.h>

// Reflection
#include <Common/Base/Reflection/hkClass.h>
#include <Common/Base/Reflection/hkClassMember.h>
#include <Common/Base/Reflection/hkInternalClassMember.h>
#include <Common/Base/Reflection/hkClassMemberAccessor.h>
// Animation
#include <Animation/Animation/Rig/hkaSkeleton.h>
#include <Animation/Animation/hkaAnimationContainer.h>
#include <Animation/Animation/Mapper/hkaSkeletonMapper.h>
#include <Animation/Animation/Playback/Control/Default/hkaDefaultAnimationControl.h>
#include <Animation/Animation/Playback/hkaAnimatedSkeleton.h>
#include <Animation/Animation/Animation/SplineCompressed/hkaSplineCompressedAnimation.h>
#include <Animation/Animation/Rig/hkaPose.h>
#include <Animation/Ragdoll/Controller/PoweredConstraint/hkaRagdollPoweredConstraintController.h>
#include <Animation/Ragdoll/Controller/RigidBody/hkaRagdollRigidBodyController.h>
#include <Animation/Ragdoll/Utils/hkaRagdollUtils.h>
// Physics
#include <Physics/Dynamics/Entity/hkpRigidBody.h>
#include <Physics/Collide/Shape/Convex/Box/hkpBoxShape.h>
#include <Physics/Utilities/Dynamics/Inertia/hkpInertiaTensorComputer.h>
#include <Physics/Collide/Shape/Convex/Box/hkpBoxShape.h>
#include <Physics/Dynamics/Entity/hkpRigidBody.h>

#include <Common/Base/hkBase.h>
#include <Common/Base/Types/Geometry/hkGeometry.h>
#include <Common/Base/System/Io/IStream/hkIStream.h>
#include <Common/Base/System/hkBaseSystem.h>
#include <Common/Base/System/Error/hkDefaultError.h>
#include <Common/Base/Memory/System/Util/hkMemoryInitUtil.h>
#include <Common/Base/Monitor/hkMonitorStream.h>
#include <Common/Base/Memory/System/hkMemorySystem.h>
#include <Common/Base/Memory/Allocator/Malloc/hkMallocAllocator.h>
#include <Common/Base/Container/String/hkStringBuf.h>
#include <Common/Serialize/Util/hkSerializeUtil.h>
#include <Common\Base\Container\hkContainerAllocators.h>
#include <Common\Base\Container\Array\hkArray.h>
#include <Common\Base\System\Io\IStream\hkIStream.h>
#include <Common\Base\System\Io\OStream\hkOStream.h>

// Dynamics includes
#include <Physics/Collide/hkpCollide.h>	
#include <Common\Internal\ConvexHull\hkGeometryUtility.h>
#include <Physics/Collide/Agent/ConvexAgent/SphereBox/hkpSphereBoxAgent.h>	
#include <Physics/Collide/Shape/Convex/Box/hkpBoxShape.h>					
#include <Physics/Collide/Shape/Convex/Sphere/hkpSphereShape.h>
#include <Physics/Collide/Shape/Convex/hkpConvexShape.h>
#include <Physics/Collide/Dispatch/hkpAgentRegisterUtil.h>
#include <Physics/Collide/Query/CastUtil/hkpWorldRayCastInput.h>			
#include <Physics/Collide/Query/CastUtil/hkpWorldRayCastOutput.h>			
#include <Physics/Dynamics/World/hkpWorld.h>								
#include <Physics/Dynamics/Entity/hkpRigidBody.h>
#include <Physics/Dynamics/Entity/hkpRigidBodyCinfo.h>
#include <Physics/Utilities/Dynamics/Inertia/hkpInertiaTensorComputer.h>
#include <Common\Serialize\Util\hkLoader.h>
#include <Common\Serialize\Util\hkRootLevelContainer.h>
#include <Physics\Utilities\Serialize\hkpPhysicsData.h> 
#include <common/base/Container/hkContainerAllocators.h> 
#include <Animation/Ragdoll/hkaRagdoll.h>
#include <Animation/Ragdoll/Instance/hkaRagdollInstance.h>
#include <Physics/Dynamics/Constraint/hkpConstraintInstance.h>
#include <Common\GeometryUtilities\hkGeometryUtilities.h>
#include <Common\GeometryUtilities\Mesh\hkMeshBody.h>
#include <Common\SceneData\hkSceneData.h>
#include <Common\SceneData\Mesh\hkxMesh.h>
#include <Common\SceneData\Scene\hkxScene.h>
#include <Common\SceneData\Graph\hkxNode.h>
//animations skeletons

#include <Animation\Animation\hkaAnimationContainer.h>
#include <Animation\Animation\hkaAnimation.h>
#include <Animation\Animation\Mapper\hkaSkeletonMapper.h>
#include <Animation\Animation\Mapper\hkaSkeletonMapperUtils.h>
#include <Animation\Animation\Rig\hkaSkeletonUtils.h>
#include <Animation\Animation\Rig\hkaSkeleton.h>
#include <Animation\Animation\Rig\hkaBone.h>

#include <behaviorincludes.h>