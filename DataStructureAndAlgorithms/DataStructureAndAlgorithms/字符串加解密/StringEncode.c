//
//  StringEncode.c
//  DataStructureAndAlgorithms
//
//  Created by xiatian on 2022/11/26.
//

#include "StringEncode.h"
#include <string.h>


int Stringcode(void) {
    int a, b;
    char str1[1000] = {0};
    char str2[1000] = {0};
    for (int i = 0; i < 1000; i++) {
        str1[i] = 0;
        str2[i] = 0;
    }
    while (scanf("%s\n%s", &str1, &str2) != EOF) { // 注意 while 处理多个 case
        // 64 位输出请用 printf("%lld") to
        int l1 = strlen(str1);
        int l2 = strlen(str2);
        for (int i = 0; i < l1; i++) {
            char c = str1[i];
            if(c < 'z' && c >= 'a'){
                c = c + 1;
                c = 'Z' - 'z' + c;
            }else if (c < 'Z' && c >= 'A') {
                c = c + 1;
                c = 'z' - 'Z' + c;
            }else if(c == 'z'){
                c = 'A';
            }else if (c == 'Z') {
                c = 'a';
            }else if (c < '9' && c >= '0') {
                c = c + 1;
            }else if (c == '9') {
                c = '0';
            }
            str1[i] = c;
        }
        for (int i = 0; i < l2; i++) {
            char c = str2[i];
            if(c <= 'z' && c > 'a'){
                c = c - 1;
                c = c - ('z' - 'Z');
            }else if (c <= 'Z' && c > 'A') {
                c = c - 1;
                c = c + ('z' - 'Z');
            }else if(c == 'A'){
                c = 'z';
            }else if (c == 'a') {
                c = 'Z';
            }else if (c <= '9' && c > '0') {
                c = c - 1;
            }else if (c == '0') {
                c = '9';
            }
            str2[i] = c;
        }
        printf("%s\n",str1);
        printf("%s\n",str2);
        return 0;
    }
    return 0;
}
