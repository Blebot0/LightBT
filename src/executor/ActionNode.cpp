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
    std::cout << "Action Node: " + std::to_string(node_status_) + std::to_string('\n');

    return eBtStatus::SUCCESS;
}

BehaviourTree::ActionNode::~ActionNode()
{
}
