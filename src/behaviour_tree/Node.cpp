#include "Node.h"

Node::Node(){
    status_ = NODE_STATUS::DEFAULT;
    
    this->node_id_ = 0;
    this->parent_id_ = 0;
}

Node::~Node(){

}

