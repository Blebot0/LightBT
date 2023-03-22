/*
* Author: Keshav Kapur
* Date: 22 March 2023
* 
* Short Description: Status of Node is essential to the behaviour tree.
*
* Long Description: Status of Each node in the behaviour tree is essential 
* to the behaviour tree. The Behaviour tree is tick engine dependent and
* the final state of the behaviour tree is dependent on the status.
*/

#ifndef BT_STATUS_H
#define BT_STATUS_H

namespace BehaviourTree
{
    typedef enum {
        SUCCESS = 1,
        RUNNING = 0,
        FAILURE = -1
    } eBtStatus;

} // namespace BehaviourTree

#endif