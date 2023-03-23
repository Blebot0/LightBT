/*
* Author: Keshav Kapur
* Date: 23 March 2023
*
* Short Description: Implementation of the depth first traversal in a behaviour tree
* 
* Detailed Description: Depth First Traversal is an essence foe Behaviour Tree.
* The Tick goes from the root node of the tree to its child nodes. As we know that 
* BT has items of higher priority in left and lower priority in right, DFS becomes
* a suitable traversal algorithm for the same reason.
*
* Here, we consider that ever node has a parent node and vector of child nodes.
* We go down the depth of each node while keeping the node above running. 
*
* Depending on the status received from child node, the parent nodes status would be 
* established.
*/

#ifndef BT_TICK_TRAVERSAL_H
#define BT_TICK_TRAVERSAL_H

#include "utils/Status.h"
#include "utils/AbstractNode.h"
#include <memory>

namespace BehaviourTree
{
    eBtStatus tickTraversal(std::shared_ptr<BehaviourTree::AbstractNode> parent){

// TODO: Figure out Traversal
// Use shared and unique ptr for child vectors
// once tick reaches a node, only then it is activated. Once the tick is complete, it returns back.
        /// void inOrder(struct Node *root)
    // stack<Node *> s;
    // Node *curr = root;
 
    // while (curr != NULL || s.empty() == false)
    // {
    //     /* Reach the left most Node of the
    //        curr Node */
    //     while (curr !=  NULL)
    //     {
    //         /* place pointer to a tree node on
    //            the stack before traversing
    //           the node's left subtree */
    //         s.push(curr);
    //         curr = curr->left;
    //     }
 
    //     /* Current must be NULL at this point */
    //     curr = s.top();
    //     s.pop();
 
    //     cout << curr->data << " ";
 
    //     /* we have visited the node and its
    //        left subtree.  Now, it's right
    //        subtree's turn */
    //     curr = curr->right;
 
    // } /* end of while */
}
} // namespace BehaviourTree

#endif