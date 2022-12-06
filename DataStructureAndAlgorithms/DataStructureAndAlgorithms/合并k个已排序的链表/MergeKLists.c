//
//  MergeKLists.c
//  DataStructureAndAlgorithms
//
//  Created by xiatian on 2022/12/6.
//

#include "MergeKLists.h"

struct ListNode* mergeKLists(struct ListNode** lists, int listsLen ) {
    struct ListNode *tP = NULL,*HP=NULL;
    if(lists == NULL){
        return NULL;
    }
    if(listsLen == 0){
        return NULL;
    }
    if(listsLen == 1){
        return lists[0];
    }
    while (1) {
        int t = 0;
        int index = 0;
        int v = 0;
        for (int i = 0; i < listsLen; i++) {
            struct ListNode *list = lists[i];
            if(list == NULL){
                lists[i] = lists[listsLen - 1];
                i--;
                listsLen--;
                continue;
            }
            if(i == 0){
                v = list->val;
            }else{
                if(list->val < v){
                    v = list->val;
                    index = i;
                }
            }
        }
        
        if(tP == NULL){
            tP = lists[index];
            if(tP == NULL){
                return NULL;
            }
            HP = tP;
            if(tP->next != NULL){
                lists[index] = tP->next;
            }else{
                if(index == listsLen - 1){
                    listsLen = listsLen - 1;
                }else{
                    listsLen = listsLen - 1;
                    lists[index] = lists[listsLen];
                }
            }
            if(listsLen == 1){
                tP->next = lists[0];
                break;
            }
            if(listsLen == 0){
                break;
            }
        }else{
            tP->next = lists[index];
            tP = tP->next;
            if(tP->next != NULL){
                lists[index] = tP->next;
            }else{
                if(index == listsLen - 1){
                    listsLen = listsLen - 1;
                }else{
                    listsLen = listsLen - 1;
                    lists[index] = lists[listsLen];
                }
            }
            if(listsLen == 1){
                tP->next = lists[0];
                break;
            }
            if(listsLen == 0){
                break;
            }
        }
        
        
        
        
        
    }
    
    return HP;
}
