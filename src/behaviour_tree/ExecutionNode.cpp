#include "ExecutionNode.h"

template <int N>
ExecutionNode<N>::ExecutionNode(int node_id, const std::string& action){
    type_ = N;
    this->action_ = action;
    this->node_id_ = node_id;

}

template<int N>
ExecutionNode<N>::~ExecutionNode(){
}
