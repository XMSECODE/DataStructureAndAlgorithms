//
//  ReverseKGroup.c
//  DataStructureAndAlgorithms
//
//  Created by xiatian on 2022/12/4.
//

#include "ReverseKGroup.h"

/**
 * 代码中的类名、方法名、参数名已经指定，请勿修改，直接返回方法规定的值即可
 *
 *
 * @param head ListNode类
 * @param k int整型
 * @return ListNode类
 */
struct ListNode* reverseKGroup(struct ListNode* head, int k ) {
    // write code here
    int n = 1;
    struct ListNode *l = head;
    if(l == NULL){
        return head;
    }
    while (1) {
        if(l->next == NULL){
            break;
        }else{
            l = l->next;
            n++;
        }
    }
    if(n < k){
        return head;
    }
    if(k == 1){
        return head;
    }
    struct ListNode *returnH = head;
    
    struct ListNode *hL = NULL;
    struct ListNode *hNextL = NULL;
    struct ListNode *REL = NULL;
    struct ListNode *EL = NULL;
    struct ListNode *cL = NULL,*nL = NULL,*nnL = NULL;
    
    for (int i = 0; i < n;) {
        //判断是否超出长度
        if(i + k > n){
            hL->next =EL;
            break;
        }
        if(i == 0){
            hL = NULL;
        }
        //初始化
        if(i == 0){
            cL = head;
        }else{
            cL = EL;
        }
        nL = cL->next;
        nnL = nL->next;
        
        
        //翻转
        for (int j = 0; j < k; j++) {
            if(j == 0 ){
                cL->next = NULL;
                hNextL = cL;
            }else{
                nL->next = cL;
                cL = nL;
                nL = nnL;
                if(nnL != NULL && nnL->next != NULL){
                    nnL = nnL->next;
                }
                if(j + 1 == k){
                    REL = cL;
                    EL = nL;
                }
                
            }
        }
        if(i == 0){
            returnH = cL;
            if(k == n){
                hNextL->next = NULL;
                break;
            }else{
                hL = hNextL;
                hNextL = nL;
            }
        }else{
            hL->next = REL;
            hL = hNextL;
            hNextL = EL;
            
        }
        i = i + k;
    }
    
    return returnH;
}
