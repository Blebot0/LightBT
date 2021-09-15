#include "TreeConnector.h"

TreeConnector::TreeConnector(/* args */)
{
}

TreeConnector::~TreeConnector()
{
}

template<int T>
void TreeConnector::Connect( ExecutionNode<T> parent_node_id, int child_node_id){
    parent_node_id.child_id_.push_back(child_node_id);
}

template<int T>
void TreeConnector::Connect( ControlFlowNode<T> parent_node_id, int child_node_id){
    parent_node_id.child_id_.push_back(child_node_id);

}