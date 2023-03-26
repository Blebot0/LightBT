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
    return eBtNodeType();
}

const eBtStatus BehaviourTree::ActionNode::getNodeStatus()
{
    return eBtStatus();
}

const size_t BehaviourTree::ActionNode::getNodeID()
{
    return size_t();
}

BehaviourTree::ActionNode::~ActionNode()
{
}
