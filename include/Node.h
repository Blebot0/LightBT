#pragma once 

#include <vector>
// by default null node value is given as parent ID
// null node ID is 0
// root node ID is 1
enum NODE_STATUS{

    SUCCESS = 1,
    FAILIURE = -1,
    RUNNING = 0,
    DEFAULT = -2
};
// TODO: Rem Parent ID

class Node
{
    private:

    public:

        int status_;
        unsigned int parent_id_;
        unsigned int node_id_;
        std::vector<Node> child_id_;

        int type_;
        
        int num_children;
        Node();
        ~Node();

        inline const int NodeStatus(){
            return status_;
        }

        inline void ResetNodeStatus(){
            status_ = NODE_STATUS::DEFAULT;
        }

        virtual int GetType() = 0;

        inline const int NumChild() {
            return num_children;
        }
};


