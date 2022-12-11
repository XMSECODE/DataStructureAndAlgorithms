//
//  FindKthToTail.h
//  DataStructureAndAlgorithms
//
//  Created by xiatian on 2022/12/9.
//

#ifndef FindKthToTail_h
#define FindKthToTail_h

#include <stdio.h>


struct ListNode {
    int val;
    struct ListNode *next;
};
/*
 描述
 输入一个长度为 n 的链表，设链表中的元素的值为 ai ，返回该链表中倒数第k个节点。
 如果该链表长度小于k，请返回一个长度为 0 的链表。


 数据范围：0 \leq n \leq 10^50≤n≤10
 5
  ，0 \leq a_i \leq 10^90≤a
 i
 ​
  ≤10
 9
  ，0 \leq k \leq 10^90≤k≤10
 9
  
 要求：空间复杂度 O(n)O(n)，时间复杂度 O(n)O(n)
 进阶：空间复杂度 O(1)O(1)，时间复杂度 O(n)O(n)

 */
/**
 * 代码中的类名、方法名、参数名已经指定，请勿修改，直接返回方法规定的值即可
 *
 *
 * @param pHead ListNode类
 * @param k int整型
 * @return ListNode类
 */
struct ListNode* FindKthToTail(struct ListNode* pHead, int k );

#endif /* FindKthToTail_h */
