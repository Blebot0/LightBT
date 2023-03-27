/*
* Author: Keshav Kapur
* Date: 26 March 2023
*
* Short Description: Implementation of the action node in a behaviour tree
* 
* Detailed Description: A action node is a executor node which handles the 
* the final actions. 
* 
* Success: If Action is a success
* Fails: If Action fails
* Running: While Action is running
*/

#include "ActionNode.h"

using namespace BehaviourTree;

BehaviourTree::ActionNode::ActionNode()
{
    node_type_ = eBtNodeType::ACTION;
    node_status_ = eBtStatus::IDLE;
    node_id_ =  setCounter();
    // node_counter_++; // Next Node will have next ID
}



const eBtNodeType BehaviourTree::ActionNode::getNodeType()
{
    return node_type_;
}

const eBtStatus BehaviourTree::ActionNode::getNodeStatus()
{
    return node_status_;
}

const size_t BehaviourTree::ActionNode::getNodeID()
{
    return node_id_;
}

eBtStatus BehaviourTree::ActionNode::executeTick()
{
    tick = true;
    std::cout << "Action Node: " + std::to_string(node_status_) + "\n";

    return success_ ? eBtStatus::SUCCESS : eBtStatus::FAILURE;
}



BehaviourTree::ActionNode::~ActionNode()
{
}
