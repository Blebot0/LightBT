#pragma once

#include "ExecutionNode.h"
#include "ControlFlowNode.h"


class TreeConnector
{
private:
    /* data */
public:
    TreeConnector(/* args */);

    void Connect(int parent_node_id, int child_node_id);
    ~TreeConnector();
};


