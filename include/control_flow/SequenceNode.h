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

#include <utils/Status.h>
#include <utils/AbstractNode.h>
#include <memory>
#include <vector>

namespace BehaviourTree
{
    class SequenceNode : public AbstractNode
    {
    private:

        std::vector<AbstractNode *> children_nodes_;

    public:
        SequenceNode();
        
        bool add_child(AbstractNode * child);
        virtual eBtNodeType getNodeType() override;  
        eBtStatus execute_tick();
        ~SequenceNode();
    };

    inline eBtNodeType SequenceNode::getNodeType(){
        return eBtNodeType::SEQUENCE;
    }
} // namespace BehaviourTree

#endif