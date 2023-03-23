#include "control_flow/SequenceNode.h"

using namespace BehaviourTree;
 
SequenceNode::SequenceNode()
{
    node_type_ = eBtNodeType::SEQUENCE;
    
}

SequenceNode::~SequenceNode()
{
}