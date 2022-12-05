//
//  MergeList.c
//  DataStructureAndAlgorithms
//
//  Created by xiatian on 2022/12/5.
//

#include "MergeList.h"

struct ListNode* Merge(struct ListNode* pHead1, struct ListNode* pHead2 ){
    
    struct ListNode *pH = NULL,*pH1 = pHead1,*pH2 = pHead2;
    struct ListNode *H = NULL;
    if(pHead1 == NULL){
        if(pHead2 == NULL){
            return pHead1;
        }else{
            return pHead2;
        }
    }else{
        if(pHead2 == NULL){
            return pHead1;
        }
    }
    
    while (1) {
        if(pH1 == NULL){
            if(pH2 == NULL){
                
            }else{
                pH->next = pH2;
                pH = pH2;
                pH2 = pH2->next;
            }
            break;
        }else{
            if(pH2 == NULL){
                pH->next = pH1;
                pH = pH1;
                pH1 = pH1->next;
                break;
            }else{
                if(pH1->val > pH2->val){
                    if(pH == NULL){
                        pH = pH2;
                        H = pH;
                        pH2 = pH2->next;
                    }else{
                        pH->next = pH2;
                        pH = pH2;
                        pH2 = pH2->next;
                    }
                }else{
                    if(pH == NULL){
                        pH = pH1;
                        H = pH;
                        pH1 = pH1->next;
                    }else{
                        pH->next = pH1;
                        pH = pH1;
                        pH1 = pH1->next;
                    }
                }
            }
        }

        
    }
    
    return H;
}
