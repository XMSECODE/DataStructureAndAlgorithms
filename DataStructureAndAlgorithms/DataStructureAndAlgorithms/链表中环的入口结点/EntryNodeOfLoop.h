//
//  EntryNodeOfLoop.h
//  DataStructureAndAlgorithms
//
//  Created by xiatian on 2022/12/8.
//

#ifndef EntryNodeOfLoop_h
#define EntryNodeOfLoop_h

#include <stdio.h>

struct ListNode {
    int val;
    struct ListNode *next;
};

/**
 * 代码中的类名、方法名、参数名已经指定，请勿修改，直接返回方法规定的值即可
 *
 *
 * @param pHead ListNode类
 * @return ListNode类
 */
struct ListNode* EntryNodeOfLoop(struct ListNode* pHead );

#endif /* EntryNodeOfLoop_h */
