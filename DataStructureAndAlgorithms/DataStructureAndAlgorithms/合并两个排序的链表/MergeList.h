//
//  MergeList.h
//  DataStructureAndAlgorithms
//
//  Created by xiatian on 2022/12/5.
//

#ifndef MergeList_h
#define MergeList_h

#include <stdio.h>
/*
 描述
 输入两个递增的链表，单个链表的长度为n，合并这两个链表并使新链表中的节点仍然是递增排序的。
 数据范围： 0 \le n \le 10000≤n≤1000，-1000 \le 节点值 \le 1000−1000≤节点值≤1000
 要求：空间复杂度 O(1)O(1)，时间复杂度 O(n)O(n)

 如输入{1,3,5},{2,4,6}时，合并后的链表为{1,2,3,4,5,6}，所以对应的输出为{1,2,3,4,5,6}，
 */


struct ListNode {
    int val;
    struct ListNode *next;
};

/**
 *
 * @param pHead1 ListNode类
 * @param pHead2 ListNode类
 * @return ListNode类
 */
struct ListNode* Merge(struct ListNode* pHead1, struct ListNode* pHead2 );

#endif /* MergeList_h */
