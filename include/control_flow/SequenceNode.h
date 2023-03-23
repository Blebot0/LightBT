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

#include "utils/Status.h"
#include "utils/AbstractNode.h"

namespace BehaviourTree
{
    class SequenceNode : public AbstractNode
    {
    private:

    public:
        SequenceNode();
        ~SequenceNode();
    };  
} // namespace BehaviourTree

#endif