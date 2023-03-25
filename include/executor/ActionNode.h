/*
* Author: Keshav Kapur
* Date: 22 March 2023
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

#ifndef BT_ACTION_NODE_H_
#define BT_ACTION_NODE_H_

#include <Status.h>
#include <AbstractNode.h>
#include <memory>
#include <vector>

namespace BehaviourTree
{
    class ActionNode : public AbstractNode
    {
    private:
    public:
        ActionNode();
        // virtual bool addMethod() = 0;
        eBtNodeType getNodeType() override;
        ~ActionNode();
    };
    
    inline eBtNodeType ActionNode::getNodeType(){
        return eBtNodeType::ACTION;
    }

    inline ActionNode::ActionNode(){
        node_type_ = eBtNodeType::ACTION;
        node_status_ = eBtStatus::IDLE;
    }
} // namespace BehaviourTree

#endif