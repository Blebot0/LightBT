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

#include "SequenceNode.h"

using namespace BehaviourTree;

SequenceNode::SequenceNode()
{
    node_type_ = eBtNodeType::SEQUENCE;
    node_status_ = eBtStatus::IDLE;
    node_id_ = setCounter();
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
    return node_status_;
}

const size_t BehaviourTree::SequenceNode::getNodeID()
{
    return node_id_;
}

eBtStatus BehaviourTree::SequenceNode::executeTick()
{
    std::cout << "Sequence Node: " + std::to_string(node_status_) + "\n";

    size_t len = children_nodes_.size();
    node_status_ = eBtStatus::RUNNING;

    eBtStatus curr_status = eBtStatus::SUCCESS;

    for (size_t i = 0; i < len; i++)
    {
        if(children_nodes_[i]->executeTick() == eBtStatus::FAILURE){
            curr_status = eBtStatus::FAILURE;
            break;
        }
    }

    node_status_ = curr_status;
    return node_status_;
}