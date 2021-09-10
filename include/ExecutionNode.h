#pragma once
#include "Node.h"
#include <string>

#define OBS_AVOID 0x00
#define NAV 0x01


enum {
    ACTION, 
    CONDITION
};
template <int N>
class ExecutionNode : public Node
{
    private:

        int type_;
        std::string action_;
    public:
        ExecutionNode(int node_id, const std::string& action);
        ~ExecutionNode();
};

