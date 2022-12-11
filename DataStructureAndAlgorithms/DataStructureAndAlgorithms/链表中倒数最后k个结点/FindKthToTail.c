//
//  FindKthToTail.c
//  DataStructureAndAlgorithms
//
//  Created by xiatian on 2022/12/9.
//

#include "FindKthToTail.h"

struct ListNode* FindKthToTail(struct ListNode* pHead, int k ) {
    if(pHead == NULL){
        return pHead;
    }
//    struct ListNode *pArray[100];
    int i = 0;
    struct ListNode *tp = pHead;
    while (1) {
        i++;
//        if(i % 10000000 == 0){
//            pArray[i / 10000000] = tp;
//        }
        if(tp == NULL) {
            break;
        }
        tp = tp->next;
    }
    if(k > i){
        return NULL;
    }
    tp = pHead;
    int index = i - k;
    i = 0;
    while (1) {
        if(index - 1 == i){
            return tp;
        }
        tp = tp->next;
        i++;
    }
    
    
    return pHead;
}
