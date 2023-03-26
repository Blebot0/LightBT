#include "SequenceNode.h"
#include "ActionNode.h"
#include <iostream>
// TODO: Complete CMAKE file
int main(){
    
    BehaviourTree::SequenceNodePtr s_ptr = std::make_shared<BehaviourTree::SequenceNode>();
    BehaviourTree::ActionNodePtr a_ptr = std::make_shared<BehaviourTree::ActionNode>();
    BehaviourTree::ActionNodePtr a2_ptr = std::make_shared<BehaviourTree::ActionNode>();

    s_ptr->add_child(a_ptr);
    s_ptr->add_child(a2_ptr);

    // s->add_child(a);
    
    
}