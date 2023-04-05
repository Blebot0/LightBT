#include <ActionNode.h>
#include <RootNode.h>
#include <SequenceNode.h>

#include <iostream>

bool action1(){
    std::cout <<"action1\n";
    return true;
}

bool action2(int a){
    std::cout <<"action2: " << a << '\n';
    return true;
}

bool action3(double d){
    std::cout <<"action3 : " << d << '\n';
    return false;
}

bool action4(int a, int b){
    std::cout <<"action4 : " << a << " " << b << '\n';
    return true;
}

int main(){
    
    BehaviourTree::RootNodePtr r_ptr = std::make_shared<BehaviourTree::RootNode>();
    BehaviourTree::SequenceNodePtr s_ptr = std::make_shared<BehaviourTree::SequenceNode>();
    BehaviourTree::ActionNodePtr a_ptr = std::make_shared<BehaviourTree::ActionNode>();
    BehaviourTree::ActionNodePtr a2_ptr = std::make_shared<BehaviourTree::ActionNode>();

    r_ptr->addChild(s_ptr);
    s_ptr->add_child(a_ptr);
    s_ptr->add_child(a2_ptr);
    BehaviourTree::SequenceNodePtr s1_ptr = std::make_shared<BehaviourTree::SequenceNode>();
    BehaviourTree::ActionNodePtr a3_ptr = std::make_shared<BehaviourTree::ActionNode>();
    BehaviourTree::ActionNodePtr a4_ptr = std::make_shared<BehaviourTree::ActionNode>();
    s_ptr->add_child(s1_ptr);
    s1_ptr->add_child(a3_ptr);
    s1_ptr->add_child(a4_ptr);
    
    // std::function<bool(int)> f = &action2;
    // a_ptr->registerAction(&action1);
    // run Behaviour Tree;

    a2_ptr->registerAction(&action2, 2);
    a3_ptr->registerAction(&action3, 2.555);
    a4_ptr->registerAction(&action4, 2, 5);

    BehaviourTree::eBtStatus status =  r_ptr->executeTick();
    
    std::cout << status;
    // s->add_child(a);
    // a2_ptr-> (*action)
    
}