#include "ExecutionNode.h"
#include "ControlFlowNode.h"
#include "TreeConnector.h"
#include "NodeHandler.h"

int main(){

    NodeHandler handle;
    ControlFlowNode<0> root(0), a_1(4);
    ExecutionNode<0> a(1, "obs_Avoid"), b(2, "nav"), c(3, "hello");

    TreeConnector connector;

    connector.Connect(root, 4);
    connector.Connect(root, 1);
    handle.node_map.insert({0, &root});
    return 0;
}