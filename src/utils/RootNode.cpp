/*
* Author: Keshav Kapur
* Date: 26 March 2023
* 
* Short Description: Root Node for initialising the Behaviour Tree
*
* Long Description: The Behaviour tree has a Root Node which connects
* to a single Node of any type to initialise the behaviour tree.
* To initialise the behaviour tree, the root node member will have a single 
* child. The user will execute tick function in root node after attaching the
* the child to the root node. Once executed the Behaviour tree will start. 
*/

#include "RootNode.h"

using namespace BehaviourTree;

RootNode::RootNode(/* args */)
{
    node_status_ = eBtStatus::IDLE;
    node_type_ = eBtNodeType::ROOT;
    node_id_ = setCounter();
}

const eBtNodeType BehaviourTree::RootNode::getNodeType()
{
    return node_type_;
}

const eBtStatus BehaviourTree::RootNode::getNodeStatus()
{
    return node_status_;
}

const size_t BehaviourTree::RootNode::getNodeID()
{
    return node_id_;
}

eBtStatus BehaviourTree::RootNode::executeTick()
{
    tick = true;
    node_status_ = eBtStatus::RUNNING;
    std::cout << "Root Node: " + std::to_string(node_status_) + "\n";

    node_status_ = child_node_->executeTick();

    return node_status_;
}

bool RootNode::addChild(std::shared_ptr<AbstractNode> child)
{
    // Add static assert for single child
    child_node_ = child;
    return true;
}

RootNode::~RootNode()
{
}
    