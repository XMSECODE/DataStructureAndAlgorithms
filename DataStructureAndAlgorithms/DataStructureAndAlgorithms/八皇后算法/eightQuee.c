//
//  eightQuee.c
//  DataStructureAndAlgorithms
//
//  Created by xiatian on 2022/11/26.
//

#include "eightQuee.h"

void printq(int *a) {
    for (int i = 0; i < 8; i++) {
        int ia = a[i];
        for (int j = 7; j >= 0; j--) {
            if((ia & 1 << j) == ia && ia != 0) {
                printf("1 ");
            }else {
                printf("0 ");
            }
        }
        printf("\n");
    }
    printf("\n");
}

int eightQuee(void) {
    int quees[8] = {0,0,0,0,0,0,0,0};
    int lastIndexArray[8] = {0,0,0,0,0,0,0,0};
    //    printq(quees);
    int lastIndex = 0;
    int lastJ = 0;
    int count =0;
    for (int j = 0; j < 8; j++) {
        int a = 1;

        
        a = a << lastIndex;
        
        //            printf("%d==%d===%d\n",a,i,j);
        quees[j] = a;
        //            printq(quees);
        if(lastIndex == 8) {
            quees[j] = 0;
            lastIndexArray[j] = 0;
            lastIndex = lastIndexArray[j - 1] + 1;
            j = j - 2;
            if(j == -1 && lastIndex == 8) {
                printf("%d\n",count);
                return 0;
            }
            continue;
        }
        lastIndex++;
        lastJ = j;
        //判断是否合法
        for (int k = 0; k < 8; k++) {
            for (int n = k + 1; n < 8; n++) {
                //                    printf("%d %d  ",k,n);
                int q1 = quees[k];
                int q2 = quees[n];
                if(q1 == 0 || q2 == 0) {
                    k = 8;
                    break;
                }
                if(q1 == q2) {
                    k = 8;
                    quees[j] = 0;
                    j--;
                    break;
                }
                if(q1 > q2){
                    q1 = q1 >> (n - k);
                    if((q1 & q2) == q1 & q1 != 0) {
                        k = 8;
                        quees[j] = 0;
                        j--;
                        break;
                    }
                }else{
                    if(q1 == 4 && q2 == 8) {
                        printf("");
                    }
                    q1 = q1 << (n - k);
                    if((q1 & q2) == q1 & q1 != 0) {
                        k = 8;
                        quees[j] = 0;
                        j--;
                        break;
                    }
                }
            }
        }
        if(lastJ != j + 1) {
            if(j != 7){
                lastIndexArray[j] = lastIndex - 1;
                lastIndex = 0;
            }
        }
        
        if(quees[7] != 0) {
            printq(quees);
            j--;
            count++;
        }
    }
    
    return 0;
}


