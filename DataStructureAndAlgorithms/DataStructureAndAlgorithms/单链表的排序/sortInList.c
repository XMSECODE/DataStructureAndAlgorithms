//
//  sortInList.c
//  DataStructureAndAlgorithms
//
//  Created by xiatian on 2022/12/14.
//

#include "sortInList.h"
#include <mm_malloc.h>
void pf(struct ListNode *p);
struct ListNode {
    int val;
    struct ListNode *next;
};
void test(void){
    
    int count = 41;
    
    int arr[6] = {-426572,-406609,724427,-157789,-132713,720732,-39078,-348926,-693458,559374,114739,-748249,428207,-767407,401563,646432,-682870,483610,-608888,94840,749542,359115,131739,935294,347325,80573,-869091,-757897,-860166,-227942,-484068,-170790,-362441,-860466,819197,817675,886101,463504,-100482,496406,-860791};
    struct ListNode *h = NULL,*t = NULL;
    for(int i = 0;i < count;i++){
        struct ListNode *l = malloc(sizeof(struct ListNode));
        if(i == 0){
            h = l;
        }
        l->val = arr[i];
        if(t == NULL){
            t = l;
        }else{
            t->next = l;
            t = l;
        }
    }
    t = h;
//    for (int i = 0; i < count; i++) {
//        printf("%d ",t->val);
//        t = t->next;
//    }
    h = sortInList(h);
    pf(h);
}

void pf(struct ListNode *p) {
    struct ListNode *h = p;
    while (1) {
        printf("%d ",h->val);
        h = h->next;
        if(h == NULL){
            break;
        }
    }
    printf(" ==\n");
}

/**
 *
 * @param head ListNode类 the head node
 * @return ListNode类
 */
struct ListNode* sortInList(struct ListNode* head ) {
    if(head == NULL || head->next == NULL){
        return head;
    }
    // write code here
    struct ListNode *h = head;
    
    int count = 1;
    while(1){
        if(h->next == NULL){
            break;
        }else{
            count++;
            h = h->next;
        }
    }
    h = head;
    
    struct ListNode **arr = malloc(sizeof(struct ListNode *) * count);
    for (int i = 0; i < count; i++) {
        arr[i] = h;
        h = h->next;
    }
    for (int i = 0; i < count; i++) {
        for (int j = i + 1; j < count; j++) {
            struct ListNode *l1 = arr[i];
            struct ListNode *l2 = arr[j];
            if(l1->val > l2->val){
                int a = l1->val;
                l1->val = l2->val;
                l2->val = a;
            }
        }
    }
    free(arr);
    
    
    
    
    
//    struct ListNode *p1 = NULL,*p2 = NULL,*p3=NULL,*p4=NULL,*p5=NULL,*p6=NULL;
//    for(int i = 0;i < count - 1;i++){
//        if(i == 0){
//            p1 = NULL;
//            p2 = h;
//            p3 = h->next;
//        }else{
//            if(p1 == NULL){
//                p1 = h;
//            }else{
//                p1 = p1->next;
//            }
//
//            p2 = p1->next;
//            if(p2 == NULL){
//                p3 = NULL;
//            }else{
//                p3 = p2->next;
//            }
//        }
//        for(int j = i + 1;j < count;j++){
//            if(j == i + 1){
//                p4 = p2;
//                p5 = p3;
//                if(p5 == NULL){
//                    continue;
//                }
//                if(p5->next == NULL){
//                    p6 = NULL;
//                }else{
//                    p6 = p5->next;
//                }
//            }else{
//                p4 = p5;
//                if(p5 == NULL){
//                    p5 = NULL;
//                }else{
//                    p5 = p5->next;
//                }
//
//
//                if(p5 != NULL){
//                    p6 = p5 ->next;
//                }else{
//                    p6 = NULL;
//                }
//
//            }
//            if(p5 == NULL){
//                continue;
//            }
//            if(p2->val > p5->val){
//                //交换
//                if(i == 0){
//                    // printf("%d %d %d %d %d \n",p2->val,p3->val,p4->val,p5->val,p6->val);
//                    if(j == i + 1){
//                        h = p5;
//                        p5 = p2;
//                        p2 = h;
//                        p2->next = p5;
//                        p5->next = p6;
//
//                        p3 = p5;
//
//                    }else{
//                        h = p5;
//                        p5 = p2;
//                        p2 = h;
//                        p2->next = p3;
//                        p4->next = p5;
//                        p5->next = p6;
//
//                        p3 = p2->next;
//
//                    }
//
//                    // printf("%d %d %d %d %d \n",p2->val,p3->val,p4->val,p5->val,p6->val);
//                }else{
//                    if(j == i + 1){
//                        p1->next = p5;
//                        p5 = p2;
//                        p2 = p1->next;
//                        p5->next = p6;
//                        p2->next = p5;
//                        p2 = p2->next;
//                    }else{
//                        struct ListNode * t = p2;
//                        p2 = p5;
//                        p5 = t;
//                        p1->next = p2;
//                        p2->next = p3;
//                        p4->next = p5;
//                        p5->next = p6;
//                        p2 = p2->next;
//                    }
//
//                }
//            }
//        }
//    }
    
    // struct ListNode *ppL = NULL,*pL = NULL,*nl = NULL,*nnl = NULL;
    // int f = 0;
    // for(int i = 0;i < count;i++){
    //     f = 0;
    //     for(int j = 0;j < count - 1;j++){
    //         // printf("%d",j);
    //         if(j == 0){
    //             ppL = NULL;
    //             pL = h;
    //         }else{
    //             ppL = pL;
    //             pL = pL->next;
    //         }
    //         nl = pL->next;
    //         if(nl->next != NULL){
    //             nnl = nl->next;
    //         }else{
    //             nnl = NULL;
    //         }
    //         if(pL->val > nl->val){
    //             f = 1;
    //         //     //交换
    //             if(ppL == NULL){
    //                 printf("%d %d %d ",pL->val,nl->val,nnl->val);
    //                 h = nl;
    //                 nl = pL;
    //                 pL = h;
    //                 pL->next = nl;
    //                 nl->next = nnl;
    //                 // printf(" %d \n",h->val);
    //             }else{
    //                 if(nnl == NULL){
    //                     ppL->next = nl;
    //                     nl = pL;
    //                     pL = ppL->next;
    //                     pL->next = nl;
    //                     nl->next = NULL;
    //                 }else{
    //                     ppL->next = nl;
    //                     nl = pL;
    //                     pL = ppL->next;
    //                     pL->next = nl;
    //                     nl->next = nnl;
    //                 }
    
    //             }
    //             if(nl->next == NULL){
    //                 pL = NULL;
    //                 ppL = NULL;
    //                 nl = NULL;
    //                 nnl = NULL;
    //                 break;
    //             }
    //         }
    //     }
    //     if(f == 0){
    //         break;
    //     }
    // }

    return head;
    
}
