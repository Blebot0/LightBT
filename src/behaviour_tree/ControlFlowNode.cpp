#include "ControlFlowNode.h"

template <int N>
ControlFlowNode<N>::ControlFlowNode(int node_id){
    this->node_id_ = node_id;
    this->type_ = N;
}

template <int N>
ControlFlowNode<N>::~ControlFlowNode(){
}
