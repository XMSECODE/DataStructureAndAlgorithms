//
//  RemoveNthFromEnd.c
//  DataStructureAndAlgorithms
//
//  Created by xiatian on 2022/12/10.
//

#include "RemoveNthFromEnd.h"

struct ListNode* removeNthFromEnd(struct ListNode* head, int n ) {
    
    int count = 0;
    if(head == NULL){
        return NULL;
    }
    if(n == 0){
        return head;
    }
    if(head->next == NULL){
        if(n == 1){
            return NULL;
        }else{
            if(n > 1){
                return NULL;
            }else{
                return head;
            }
        }
    }
    struct ListNode *tp = head;
    while (1) {
        count++;
        if(tp->next == NULL){
            break;
        }
        tp = tp->next;
    }
    if(n > count){
        return head;
    }
    if(n == count){
        return head->next;
    }
    tp = head;
    int index = count - n;
    for (int i = 0; i < count; i++) {
        if(i == index - 1){
            break;
        }
        tp = tp->next;
    }
    if(tp->next != NULL){
        tp->next = tp->next->next;
    }else{
        tp->next = NULL;
    }
    
    
    
    return head;
}
