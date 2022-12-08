//
//  EntryNodeOfLoop.c
//  DataStructureAndAlgorithms
//
//  Created by xiatian on 2022/12/8.
//

#include "EntryNodeOfLoop.h"

struct ListNode* EntryNodeOfLoop(struct ListNode* pHead ) {
    struct ListNode *parr[10000];
    if(pHead == NULL){
        return NULL;
    }
    int i = 0;
    while (1) {
        parr[i] = pHead;
        i++;
        pHead = pHead->next;
        if(pHead == NULL){
            return NULL;
        }
        for (int j = 0; j < i; j++) {
            if(pHead->next == parr[j]){
                return parr[j];
            }
        }
    }
    
    
    return pHead;
}
