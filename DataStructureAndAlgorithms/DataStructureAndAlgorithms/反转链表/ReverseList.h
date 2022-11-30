//
//  ReverseList.h
//  DataStructureAndAlgorithms
//
//  Created by xiatian on 2022/11/30.
//

#ifndef ReverseList_h
#define ReverseList_h

#include <stdio.h>

struct ListNode {
    int val;
    struct ListNode *next;
};


/**
 *
 * @param pHead ListNode类
 * @return ListNode类
 */
struct ListNode* ReverseList(struct ListNode* pHead );
#endif /* ReverseList_h */
