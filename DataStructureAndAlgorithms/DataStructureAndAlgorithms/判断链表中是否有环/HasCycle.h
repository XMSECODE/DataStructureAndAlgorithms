//
//  HasCycle.h
//  DataStructureAndAlgorithms
//
//  Created by xiatian on 2022/12/7.
//

#ifndef HasCycle_h
#define HasCycle_h

#include <stdio.h>
#include <stdbool.h>


struct ListNode {
    int val;
    struct ListNode *next;
};


/**
 *
 * @param head ListNode类
 * @return bool布尔型
 */
bool hasCycle(struct ListNode* head );

#endif /* HasCycle_h */
