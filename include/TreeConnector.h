#pragma once

#include "ExecutionNode.h"
#include "ControlFlowNode.h"

class TreeConnector
{
private:
    
public:
    TreeConnector();

    template<int T>
    void Connect(ControlFlowNode<T> parent_node_id, int child_node_id);
    template<int T>
    void Connect(ExecutionNode<T> parent_node_id, int child_node_id);

    ~TreeConnector();
};


