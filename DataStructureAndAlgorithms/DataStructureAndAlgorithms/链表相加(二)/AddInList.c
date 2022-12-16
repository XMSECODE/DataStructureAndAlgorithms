//
//  AddInList.c
//  DataStructureAndAlgorithms
//
//  Created by xiatian on 2022/12/12.
//

#include "AddInList.h"
#include <mm_malloc.h>

struct ListNode *rList(struct ListNode *h);

/**
 *
 * @param head1 ListNode类
 * @param head2 ListNode类
 * @return ListNode类
 */
struct ListNode* addInList(struct ListNode* head1, struct ListNode* head2 )  {
    if(head1 == NULL) {
        return head2;
    }
    if(head2 == NULL){
        return head1;
    }
    struct ListNode *hr1,*hr2;
    hr1 = rList(head1);
    hr2 = rList(head2);

     
    struct ListNode *rP = NULL;
    struct ListNode *rhp = NULL;
    int ti = 0;
    while (1) {
        int v1 = 0;
        if(hr1 != NULL){
            v1 = hr1->val;
            hr1 = hr1->next;
        }
        int v2 = 0;
        if(hr2 != NULL){
            v2 = hr2->val;
            hr2 = hr2->next;
        }
        int r = v1 + v2 + ti;
        void *t = malloc((unsigned long)sizeof(struct ListNode));
        struct ListNode *resultN = t;
        if(r >= 10){
            resultN->val = r - 10;
            ti = 1;
        }else{
            resultN->val = r;
            ti = 0;
        }
        if(rP == NULL){
            rP = resultN;
            rhp = rP;
        }else{
            rP->next = resultN;
            rP = rP->next;
        }
        
        if(hr1 == NULL && hr2 == NULL && ti == 0){
            break;
        }
    }
    rP = rList(rhp);
    
    return rP;
}

struct ListNode *rList(struct ListNode *h){
    struct ListNode *pr = NULL,*pc = NULL,*pn = NULL;
    
    while (1) {
        if(pn == NULL){
            pn = h;
        }else{
            if(pc == NULL){
                if(pn->next == NULL){
                    return pn;
                }else{
                    pc = pn;
                    pn = pn->next;
                    pc->next = NULL;
                }
            }else{
                if(pr == NULL){
                    if(pn->next == NULL){
                        pn->next = pc;
                        pc->next = NULL;
                        return pn;
                    }else{
                        pr = pc;
                        pc = pn;
                        pn = pn->next;
                    }
                }else{
                    if(pn->next == NULL){
                        pc->next = pr;
                        pn->next = pc;
                        return pn;
                    }else{
                        pc->next = pr;
                        pr = pc;
                        pc = pn;
                        pn = pn->next;
                    }
                }
            }
        }
    }
    return pn;
}
