//
//  StringMerge.c
//  DataStructureAndAlgorithms
//
//  Created by xiatian on 2022/11/27.
//

#include "StringMerge.h"
#include <string.h>


void StringMerge(void) {
    char str1[101];
    char str2[101];
    char str3[201];
    for (int i = 0; i < 101; i++) {
        str1[i] = 0;
        str2[i] = 0;
    }
    for (int i = 0; i < 201; i++) {
        str3[i] = 0;
    }
    scanf("%s %s", str1, str2);
    
    int l1 = strlen(str1);
    int l2 = strlen(str2);
    for (int i = 0; i < l1 + l2; i++) {
        if(i < l1){
            str3[i] = str1[i];
        }else{
            str3[i] = str2[i - l1];
        }
    }
    for (int i = 0; i < l1 + l2; i++) {
        if(i % 2 == 0){
            str1[i / 2] = str3[i];
        }else{
            str2[(i - 1) / 2] = str3[i];
        }
    }
    for (int i = 0; i < (l1 + l2 + 1) / 2; i++) {
        for (int j = i + 1; j < (l1 + l2 + 1) / 2; j++) {
            char c1 = str1[i];
            char c2 = str1[j];
            if(c1 > c2){
                str1[i] = c2;
                str1[j] = c1;
            }
        }
    }
    
    for (int i = 0; i < (l1 + l2) / 2; i++) {
        for (int j = i + 1; j < (l1 + l2) / 2; j++) {
            char c1 = str2[i];
            char c2 = str2[j];
            if(c1 > c2){
                str2[i] = c2;
                str2[j] = c1;
            }
        }
    }
    
    for (int i = 0; i < l1 + l2; i++) {
        if(i % 2 == 0){
            
            str3[i] = str1[i / 2];
        }else{
            
            str3[i] = str2[(i - 1) / 2];
        }
    }
    
    
    for (int i = 0; i < l1 + l2; i++) {
        char c = str3[i];
        int a = 0;
        if(c <= 'Z' && c >= 'A'){
            if(c > 'F'){
                continue;
            }
            a = c - 'A' + 10;
        }
        if(c <= 'z' && c >= 'a') {
            if(c > 'f'){
                continue;
            }
            a = c - 'a' + 10;
        }
        if(c <= '9' && c >= '0') {
            a = c - '0';
        }
        int d = 0;
        for (int j = 0; j < 4; j++) {
            d = d << 1;
            if((a & 1) == 1){
                d = d | 1;
            }
            a = a >> 1;
        }
        if(d <= 9) {
            str3[i] = '0' + d;
        }else{
            str3[i] = 'A' + d - 10;
        }
    }
    printf("\n%s\n",str3);
    
}
