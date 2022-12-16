//
//  AddInList.h
//  DataStructureAndAlgorithms
//
//  Created by xiatian on 2022/12/12.
//

#ifndef AddInList_h
#define AddInList_h

#include <stdio.h>


/*
 描述
 假设链表中每一个节点的值都在 0 - 9 之间，那么链表整体就可以代表一个整数。
 给定两个这种链表，请生成代表两个整数相加值的结果链表。
 数据范围：0 \le n,m \le 10000000≤n,m≤1000000，链表任意值 0 \le val \le 90≤val≤9
 要求：空间复杂度 O(n)O(n)，时间复杂度 O(n)O(n)

 例如：链表 1 为 9->3->7，链表 2 为 6->3，最后生成新的结果链表为 1->0->0->0
 */

struct ListNode {
    int val;
    struct ListNode *next;
};


/**
 *
 * @param head1 ListNode类
 * @param head2 ListNode类
 * @return ListNode类
 */
struct ListNode* addInList(struct ListNode* head1, struct ListNode* head2 );

#endif /* AddInList_h */
