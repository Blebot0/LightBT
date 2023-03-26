#include "SequenceNode.h"
#include "ActionNode.h"
#include "RootNode.h"

#include <iostream>

int main(){
    
    BehaviourTree::RootNodePtr r_ptr = std::make_shared<BehaviourTree::RootNode>();
    BehaviourTree::SequenceNodePtr s_ptr = std::make_shared<BehaviourTree::SequenceNode>();
    BehaviourTree::ActionNodePtr a_ptr = std::make_shared<BehaviourTree::ActionNode>();
    BehaviourTree::ActionNodePtr a2_ptr = std::make_shared<BehaviourTree::ActionNode>();
    r_ptr->addChild(s_ptr);
    s_ptr->add_child(a_ptr);
    s_ptr->add_child(a2_ptr);
    r_ptr->executeTick();
    // s->add_child(a);
    
    
}