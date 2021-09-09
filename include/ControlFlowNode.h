#pragma once CONTROL_FLOW_NODE_H_
#include "Node.h"

enum CONTROL_NODE{
    SEQUENCE = 0,  // (->)
    FALLBACK = 1   // (?)
};
class ControlFlowNode : public Node
{
private:
    int type_;

public:
    ControlFlowNode(/* args */);
    ~ControlFlowNode();
};


