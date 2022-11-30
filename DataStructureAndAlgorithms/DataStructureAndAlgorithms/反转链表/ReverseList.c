//
//  ReverseList.c
//  DataStructureAndAlgorithms
//
//  Created by xiatian on 2022/11/30.
//

#include "ReverseList.h"

struct ListNode* ReverseList(struct ListNode* pHead ) {
    struct ListNode *pf = NULL;
    struct ListNode *pc = pHead;
    struct ListNode *pn = NULL;
    if(pHead == NULL){
        return NULL;
    }
    if(pHead->next == NULL){
        return pHead;
    }
    while (1) {
        if(pf != NULL){
            pf = pc;
            pc = pn;
            if(pc->next) {
                pn = pc->next;
            }else{
                pc->next = pf;
                return pc;
            }
            pc->next = pf;
        }else{
            pf = pc;
            pc = pf->next;
            pf->next = NULL;
            if(pc->next){
                pn = pc->next;
            }else{
                pc->next = pf;
                return pc;
            }
            pc->next = pf;
        }
        
    }
    return pHead;
}
