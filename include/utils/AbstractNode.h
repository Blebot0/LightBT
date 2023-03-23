/*
* Author: Keshav Kapur
* Date: 23 March 2023
* 
* Short Description: Abstract Node for all differenct classes of Nodes in Behaviour Tree
*
* Long Description: The Behaviour tree nodes have similar properties. Therefore to reduce 
* redundancy, we create an Abstract Class
*/

#ifndef BT_ABSTRACT_NODE_H
#define BT_ABSTRACT_NODE_H

#include "utils/Status.h"
#include "utils/NodeType.h"

namespace BehaviourTree
{
    class AbstractNode
    {
        protected:
            int node_id_;
            eBtNodeType node_type_;
            eBtStatus node_status_;
        public:
            eBtNodeType getNodeType();
            eBtStatus getNodeStatus();
            int getNodeID();
    };
    
} // namespace BehaviourTree

#endif