//
//  MergeKLists.h
//  DataStructureAndAlgorithms
//
//  Created by xiatian on 2022/12/6.
//

#ifndef MergeKLists_h
#define MergeKLists_h

#include <stdio.h>



struct ListNode {
    int val;
    struct ListNode *next;
};

/**
 *
 * @param lists ListNode类一维数组
 * @param listsLen int lists数组长度
 * @return ListNode类
 */
struct ListNode* mergeKLists(struct ListNode** lists, int listsLen );

#endif /* MergeKLists_h */
