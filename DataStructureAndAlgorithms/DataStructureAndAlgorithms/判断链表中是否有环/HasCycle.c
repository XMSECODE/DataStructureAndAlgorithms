//
//  HasCycle.c
//  DataStructureAndAlgorithms
//
//  Created by xiatian on 2022/12/7.
//

#include "HasCycle.h"

bool hasCycle(struct ListNode* head ){
    
    if(head == NULL){
        return false;
    }
    struct ListNode *h1 = NULL;
    printf("123");
    while (1) {
        if(h1 == NULL){
            h1 = head;
        }else{
            h1 = h1->next;
        }
        struct ListNode *h2 = h1->next;
        if(h2 == h1){
            return true;
        }else{
            if(h2 == NULL){
                return false;
            }
        }
        int t = 0;
        while (1) {
            h2 = h2->next;
            if(h2 == NULL){
                break;
            }else{
                if(h2 == h1){
                    return true;
                }
            }
            t++;
            if(t > 10000){
                return true;
            }
        }
    }
    
    return false;
}
