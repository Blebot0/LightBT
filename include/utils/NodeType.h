/*
* Author: Keshav Kapur
* Date: 23 March 2023
* 
* Short Description: Enumerator to assign Node Type to each Class
*/

#ifndef BT_NODE_TYPE_H
#define BT_NODE_TYPE_H

namespace BehaviourTree
{
    typedef enum {
        SEQUENCE = 0,
        FALLBACK = 1,
        PARALLEL = 2,
        DECORATOR = 3,
        ACTION = 4,
        CONDITION = 5,
        ROOT = 6
    } eBtNodeType;

} // namespace BehaviourTree

#endif