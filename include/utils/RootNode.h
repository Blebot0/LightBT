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

#ifndef BT_ROOT_NODE_H
#define BT_ROOT_NODE_H

#include "AbstractNode.h"

namespace BehaviourTree
{
    class RootNode : public AbstractNode
    {
    private:
        
        std::shared_ptr<AbstractNode> child_node_;

    public:
        RootNode();
        virtual const eBtNodeType getNodeType() override;  
        virtual const eBtStatus getNodeStatus() override;
        virtual const size_t getNodeID() override;
        virtual eBtStatus executeTick() override;
        bool addChild(std::shared_ptr<AbstractNode> child);
        ~RootNode();
    };
    
    typedef std::shared_ptr<RootNode> RootNodePtr;
} // namespace BehaviourTree

#endif