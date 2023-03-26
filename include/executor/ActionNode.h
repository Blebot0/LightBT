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
        virtual const eBtNodeType getNodeType() override;  
        virtual const eBtStatus getNodeStatus() override;
        virtual const size_t getNodeID() override;
        ~ActionNode();
    };
    typedef std::shared_ptr<ActionNode> ActionNodePtr;
    
} // namespace BehaviourTree

#endif