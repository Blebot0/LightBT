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

#include <iostream>
#include "SequenceNode.h"

using namespace BehaviourTree;
 
SequenceNode::SequenceNode()
{
    node_type_ = eBtNodeType::SEQUENCE;
    node_status_ = eBtStatus::IDLE;
    node_id_ =  setCounter();
    // node_counter_++; // Next Node will have next ID
}

bool SequenceNode::add_child(std::shared_ptr<AbstractNode> child)
{
    children_nodes_.push_back(child);
    return true;
}

const eBtNodeType SequenceNode::getNodeType()
{
    return eBtNodeType::SEQUENCE;
}

const eBtStatus BehaviourTree::SequenceNode::getNodeStatus()
{
    return eBtStatus();
}

const size_t BehaviourTree::SequenceNode::getNodeID()
{
    return node_id_;
}

SequenceNode::~SequenceNode()
{
}