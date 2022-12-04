//
//  ReverseKGroup.h
//  DataStructureAndAlgorithms
//
//  Created by xiatian on 2022/12/4.
//

#ifndef ReverseKGroup_h
#define ReverseKGroup_h

/*
 描述
 将给出的链表中的节点每 k 个一组翻转，返回翻转后的链表
 如果链表中的节点数不是 k 的倍数，将最后剩下的节点保持原样
 你不能更改节点中的值，只能更改节点本身。

 数据范围： \ 0 \le n \le 2000 0≤n≤2000 ， 1 \le k \le 20001≤k≤2000 ，链表中每个元素都满足 0 \le val \le 10000≤val≤1000
 要求空间复杂度 O(1)O(1)，时间复杂度 O(n)O(n)
 例如：
 给定的链表是 1\to2\to3\to4\to51→2→3→4→5
 对于 k = 2k=2 , 你应该返回 2\to 1\to 4\to 3\to 52→1→4→3→5
 对于 k = 3k=3 , 你应该返回 3\to2 \to1 \to 4\to 53→2→1→4→5
 */

#include <stdio.h>
struct ListNode {
    int val;
    struct ListNode *next;
};
/**
 * 代码中的类名、方法名、参数名已经指定，请勿修改，直接返回方法规定的值即可
 *
 *
 * @param head ListNode类
 * @param k int整型
 * @return ListNode类
 */
struct ListNode* reverseKGroup(struct ListNode* head, int k );

#endif /* ReverseKGroup_h */
