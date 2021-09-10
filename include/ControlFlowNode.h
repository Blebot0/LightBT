#pragma once 
#include "Node.h"

enum CONTROL_NODE{
    SEQUENCE = 0,  // (->)
    FALLBACK = 1   // (?)
};

template <int N>
class ControlFlowNode : public Node
{
private:
    int type_ = N;

public:
    ControlFlowNode(int node_id);
    ~ControlFlowNode();
};


