//
//  Password.c
//  DataStructureAndAlgorithms
//
//  Created by feifan5号 on 2022/10/20.
//

#include "Password.h"
#include "string.h"

void isPassword(void){
    char pas[100];
       for (int i = 0; i < 100; i++) {
           pas[i] = 0;
       }
       while (scanf("%s", pas) != EOF) {


           int l = (int)strlen(pas);
           if (l <= 8) {
               printf("NG");
           } else {
               int style1 = 0;
               int style2 = 0;
               int style3 = 0;
               int style4 = 0;
               for (int i = 0; i < l; i++) {
                   char c = pas[i];
                   if (c >= 'a' && c <= 'z') {
                       style1 =  1;
                   } else if (c >= 'A' && c <= 'Z') {
                       style2 = 1;
                   } else if (c >= '0' && c <= '9') {
                       style3 = 1;
                   } else {
                       style4 = 1;
                   }
               }
               if (style1 + style2 + style3 + style4 < 3) {
                   printf("NG");
               } else {
                   char a = pas[0];
                   char b = pas[1];
                   char c = pas[2];
                   int p = 0;
                   for (int i = 0; i < l; i++) {
                       a = pas[i];
                       b = pas[i + 1];
                       c = pas[i + 2];
                       for (int j = i + 3; j < l - 2; j++) {
                           char d = pas[j];
                           char e = pas[j + 1];
                           char f = pas[j + 2];
                           if (a == d && b == e && c == f) {
                               p = 1;
                               break;
                           }
                       }
                       if (p == 1) {
                           break;
                       }
                   }
                   if (p == 0) {
                       printf("OK");
                   } else {
                       printf("NG");
                   }
               }
           }
           for (int i = 0; i < 100; i++) {
               pas[i] = 0;
           }
           printf("\n");
       }


}
