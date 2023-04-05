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

// BT 
#include <AbstractNode.h>

// C++ Common 
#include <memory>
#include <vector>
#include <iostream>

namespace BehaviourTree
{

    /// @brief Class to define Sequence Node Behaviour
    class SequenceNode : public AbstractNode
    {
    private:

        /// @brief Container to store children nodes of the Sequence Node
        std::vector<std::shared_ptr<AbstractNode>> children_nodes_;

    public:

        /// @brief Constructor
        SequenceNode();

        /// @brief method to add child node to the current node
        /// @param child input child node
        /// @return returns True if success, else False
        bool add_child(std::shared_ptr<AbstractNode> child);


        /// @brief method to get Node Type
        /// @return Node Type Enum
        virtual const eBtNodeType getNodeType() override;


        /// @brief method to get Node Status
        /// @return Node Status Enum
        virtual const eBtStatus getNodeStatus() override;


        /// @brief method to get Node ID
        /// @return Node ID Enum
        virtual const size_t getNodeID() override;


        /// @brief method to execute the Tick received
        /// from parent node and execute all the subsequent
        /// child nodes
        /// @return Node Status Enum
        virtual eBtStatus executeTick() override;

        /// @brief Destructor
        ~SequenceNode() = default;
    };

    /// @brief Shared Ptr of Sequence Node Object
    typedef std::shared_ptr<SequenceNode> SequenceNodePtr;

} // namespace BehaviourTree

#endif