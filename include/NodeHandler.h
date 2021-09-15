#pragma once
#include "Node.h"
#include <map>

struct NodeHandler
{
    std::map<int, Node*> node_map;
};
