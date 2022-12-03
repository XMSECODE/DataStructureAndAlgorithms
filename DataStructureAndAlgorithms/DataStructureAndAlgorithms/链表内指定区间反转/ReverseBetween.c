//
//  ReverseBetween.c
//  DataStructureAndAlgorithms
//
//  Created by xiatian on 2022/12/3.
//

#include "ReverseBetween.h"


struct ListNode* reverseBetween(struct ListNode* head, int m, int n ) {
    
    if(m == n){
        return head;
    }
    struct ListNode *spL,*sL;
    
    if(m == 1){
        spL = NULL;
        sL = head;
    }else{
        spL = head;
        for(int i = 0;i < m - 2;i++){
            spL = spL->next;
        }
        sL = spL->next;
    }
    
    
    
    struct ListNode *PP,*CP,*NP;
    CP = sL;
    NP = CP->next;
    for (int i = 0; i < n - m; i++) {
        PP = CP;
        CP = NP;
        NP = NP->next;
        CP->next = PP;
    }
    if(spL == NULL){
        if(NP == NULL){
            sL->next = NULL;
            return CP;
        }
        sL->next = NP;
        return CP;
    }else{
        spL->next = CP;
        sL->next = NP;
    }
    
    
    
    return head;
}
