/*
* Author: Keshav Kapur
* Date: 22 March 2023
*
* Short Description: Implementation of the sequence node in a behaviour tree
* 
* Detailed Description: A sequence node is a control flow node which handles the 
* the flow of its child nodes. 
* 
* Success: All Children Nodes Succeed
* Fails: One Child Fails
* Running: If One Child return Running
*/

#include "control_flow/SequenceNode.h"

using namespace BehaviourTree;
 
SequenceNode::SequenceNode()
{
    node_type_ = eBtNodeType::SEQUENCE;
    
}

SequenceNode::~SequenceNode()
{
}