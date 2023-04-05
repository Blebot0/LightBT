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

#include <AbstractNode.h>

#include <memory>
#include <vector>
#include <functional>

namespace BehaviourTree
{

    /// @brief Class to define Action Node Behaviour
    class ActionNode : public AbstractNode
    {
    private:

        /// @brief attribute to determine whether the registered
        /// action was successful 
        bool success_ = false;

    public:

        /// @brief Constructor
        ActionNode();
        
        /// @brief method to register an action to the node
        /// @tparam Function User-defined Function Type
        /// @tparam ...Args User-defined Arguments of Function
        /// @param f input function
        /// @param ...args input arguments
        /// @return success if True, else False
        template <typename Function, typename... Args>
        bool registerAction(Function f, Args... args);

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
        ~ActionNode() = default;
    };
    
    /// @brief Shared Ptr of Sequence Node Object
    typedef std::shared_ptr<ActionNode> ActionNodePtr;

    template <typename Function, typename... Args>
    inline bool ActionNode::registerAction(Function f, Args... args)
    {
        std::function<bool(Args...)> funcObj(f);
        success_ = funcObj(args...);
        return true;
    }


} // namespace BehaviourTree

#endif