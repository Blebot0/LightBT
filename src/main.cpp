#include "utils/AbstractNode.h"
#include "control_flow/SequenceNode.h"
#include "executor/ActionNode.h"
#include <iostream>
// TODO: Complete CMAKE file
int main(){
    
    BehaviourTree::SequenceNode s;
    BehaviourTree::ActionNode* a = new BehaviourTree::ActionNode();
    s.add_child(a);
    
    // std::cout << "main";
    // std::cout << s.getNodeType();

    
}