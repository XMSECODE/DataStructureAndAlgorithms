//
//  shoppinglist.c
//  DataStructureAndAlgorithms
//
//  Created by feifan5号 on 2022/10/18.
//

#include "shoppinglist.h"
#include <mm_malloc.h>

int getMaxShoppingList(void) {
    int a, b;
    
    while (scanf("%d %d", &a, &b) != EOF) { // 注意 while 处理多个 case
        // 64 位输出请用 printf("%lld")
        int shops[3 * b];
        for (int i = 0; i < b; i++) {
            scanf("%d %d %d",shops+i * 3,shops +i * 3 + 1,shops +i * 3 + 2);
        }
        
        
        
        
        int result[a / 10 + 1];
        int zhujianResult[a / 10 * b + 1];
        for (int i = 0; i < a / 10 + 1; i++) {
            result[i] = 0;
            for (int j = 0; j < b; j++) {
                zhujianResult[i*b + j] = 0;
            }
        }
        int maxResult = 0;
        int maxMoney = 0;
        for (int i = 0; i < b; i++) {
            int v = shops[i * 3];
            int p = shops[i * 3 + 1];
            int q = shops[i * 3 + 2];
            if (q == 0) {
                if (maxResult == 0) {
                    if (v <= a) {
                        maxResult = v * p;
                        maxMoney = v;
                        result[v / 10] = maxResult;
                    }else {
                        
                    }
                }else {
                    int tem = maxMoney + v;
                    if (tem <= a) {
                        maxResult = maxResult + v * p;
                        maxMoney = maxMoney + v;
                        result[maxMoney / 10] = maxResult;
                    }else {
                        int temM = a - v;
                        if (result[tem / 10] > 0) {
                            int temMax = result[tem / 10] + v * p;
                            if (temMax > maxResult) {
                                maxResult = temMax;
                                maxMoney = a;
                                result[a / 10] = maxResult;
                            }else {
                                
                            }
                        }else{
                            for (int j = temM / 10 - 1; j > 0; j--) {
                                if (result[j] > 0) {
                                    int temMax = result[j] + v * p;
                                    if (temMax > maxResult) {
                                        maxResult = temMax;
                                        maxMoney = j * 10 + v;
                                        result[maxMoney / 10] = maxResult;
                                        break;
                                    }else {
                                        
                                    }
                                }
                            }
                            int temMax = v * p;
                            if (result[v / 10] < temMax) {
                                result[v / 10] = temMax;
                            }
                        }
                    }
                }
            }else {
                int vz = shops[q - 1];
                int pz = shops[q - 1];
                
                if (maxResult == 0) {
                    if (v + vz <= a) {
                        maxResult = v * p + vz * pz;
                        maxMoney = v + vz;
                        result[maxMoney / 10] = maxResult;
                        for (int j = 0; j < b; j++) {
                            int zhujian = zhujianResult[maxMoney / 10 * b+ j];
                            if (zhujian == 0) {
                                zhujianResult[maxMoney / 10 + j] = q;
                                break;
                            }else if(zhujian == q){
                                break;
                            }
                        }
                    }else {
                        
                    }
                }else {
                    
                    int isContaintQ = 0;
                    for (int j = 0; j < b; j++) {
                        int zhujian = zhujianResult[maxMoney / 10 * b+ j];
                        if (zhujian == q) {
                            isContaintQ = 1;
                            break;
                        }
                    }
                    if (isContaintQ == 1) {
                        int tem = maxMoney + v;
                        if (tem <= a) {
                            maxResult = maxResult + v * p;
                            maxMoney = maxMoney + v;
                            result[maxMoney / 10] = maxResult;
                        }else {

                            int temM = a - v;
                            if (result[tem / 10] > 0) {
                                
                                int isContaintQ1 = 0;
                                for (int j = 0; j < b; j++) {
                                    int zhujian = zhujianResult[temM / 10 * b+ j];
                                    if (zhujian == q) {
                                        isContaintQ1 = 1;
                                        break;
                                    }
                                }
                                if (isContaintQ1 == 1) {
                                    int temMax = result[tem / 10] + v * p;
                                    if (temMax > maxResult) {
                                        maxResult = temMax;
                                        maxMoney = a;
                                        result[a / 10] = maxResult;
                                    }else {
                                        
                                    }
                                }else {
                                    
                                }
                            }else{
                                for (int k = temM / 10 - 1; k > 0; k--) {
                                    if (result[k] > 0) {
                                        int isContaintQ1 = 0;
                                        for (int j = 0; j < b; j++) {
                                            int zhujian = zhujianResult[k / 10 * b+ j];
                                            if (zhujian == q) {
                                                isContaintQ1 = 1;
                                                break;
                                            }
                                        }
                                        if (isContaintQ1 == 1) {
                                            int temMax = result[tem / 10] + v * p;
                                            if (temMax > maxResult) {
                                                maxResult = temMax;
                                                maxMoney = a;
                                                result[a / 10] = maxResult;
                                            }else {
                                                
                                            }
                                        }else {
                                            
                                        }
                                        
                                    }
                                }
                                int temMax = v * p;
                                if (result[v / 10] < temMax) {
                                    result[v / 10] = temMax;
                                }
                            }
                        }
                        
                        
                        
                    }else{
                        
                    }

                    
                    

                }
                
                
                
            }
        }
        
        return maxResult;
        
        
        
        break;
    }
    return 0;
}



