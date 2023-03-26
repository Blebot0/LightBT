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

#include <Status.h>
#include <NodeType.h>

#include <stdio.h>
#include <memory>
#include <iostream>

namespace BehaviourTree
{
    class AbstractNode
    {
        protected:
            size_t node_counter_ = 0;
            size_t node_id_;
            eBtNodeType node_type_;
            eBtStatus node_status_;

            inline size_t setCounter(){
                return node_counter_++;
            }

            bool tick;
        public:
            // add method for children count
            virtual const eBtNodeType getNodeType() = 0;
            virtual const eBtStatus getNodeStatus() = 0;
            virtual const size_t getNodeID() = 0;
            virtual eBtStatus executeTick() = 0;
    };
    
} // namespace BehaviourTree

#endif