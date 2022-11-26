//
//  Get1NumberCount.c
//  DataStructureAndAlgorithms
//
//  Created by feifan5号 on 2022/10/20.
//

#include "Get1NumberCount.h"

void get1NumberCount(void) {
    int a;
    scanf("%d", &a);
    int count = 0;
    for (int i = 0; i < 32; i++) {
        int b = a & 1;
        if (b == 1) {
            count++;
        }
        a = a >> 1;
        if (a <= 0) {
            break;
        }
    }
    printf("%d",count);
        
}
