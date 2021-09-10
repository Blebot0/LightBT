// @Blebot0

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

        // This variable is used to define status of the Node
        // at enum NODE_STATUS
        int status_;

        // This is the parent ID for the current node
        unsigned int parent_id_;

        // This is the current node ID
        unsigned int node_id_;

        // This holds the child ID of the current node ID
        std::vector<Node> child_id_;

        // This var has the type of the node 
        // Function GetType() has been overriden for derived classes 
        int type_;
        
        // Holds the number of children in the class
        int num_children;

        // Constructor of the class
        Node();

        // Destructor of the class
        ~Node();

        /*
        * Function: NodeStatus()
        * @param None 
        * @return returns the status of the Node
        */
        inline const int NodeStatus(){
            return status_;
        }
        /*
        * Function: ResetNodeStatus()
        * @param None 
        * @details resets the Node Status to default
        * @return None
        */        
        inline void ResetNodeStatus(){
            status_ = NODE_STATUS::DEFAULT;
        }
        /*
        * Function: GetType()
        * @param None
        * @return Node Type
        */  
        virtual int GetType() = 0;

        /*
        * Function: NumChild()
        * @param None 
        * @return number of children for current node
        */  
        inline const int NumChild() {
            return num_children;
        }
};


