/*
* Author: Keshav Kapur
* Date: 23 March 2023
* 
* Short Description: Abstract Node for all differenct classes of Nodes in Behaviour Tree
*
* Long Description: The Behaviour tree nodes have similar properties. Therefore to reduce 
* redundancy, we create an Abstract Class
*/

#include "utils/AbstractNode.h"
#include "AbstractNode.h"

using namespace BehaviourTree;

eBtNodeType AbstractNode::getNodeType()
{
    return node_type_;
}

eBtStatus AbstractNode::getNodeStatus()
{
    return node_status_;
}

int AbstractNode::getNodeID()
{
    return node_id_;
}