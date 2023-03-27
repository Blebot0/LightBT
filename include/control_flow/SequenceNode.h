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

#ifndef BT_SEQUENCE_NODE_H_
#define BT_SEQUENCE_NODE_H_

#include <AbstractNode.h>
#include <memory>
#include <vector>

namespace BehaviourTree
{

    
    class SequenceNode : public AbstractNode
    {
    private:

        std::vector<std::shared_ptr<AbstractNode>> children_nodes_;

    public:
        SequenceNode();
        
        bool add_child(std::shared_ptr<AbstractNode> child);
        virtual const eBtNodeType getNodeType() override;  
        virtual const eBtStatus getNodeStatus() override;
        virtual const size_t getNodeID() override;
        virtual eBtStatus executeTick() override;

        eBtStatus execute_tick();
        ~SequenceNode();
    };

    typedef std::shared_ptr<SequenceNode> SequenceNodePtr;

} // namespace BehaviourTree

#endif