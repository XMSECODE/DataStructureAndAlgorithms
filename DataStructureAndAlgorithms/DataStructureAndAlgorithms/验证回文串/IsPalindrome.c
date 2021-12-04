//
//  IsPalindrome.c
//  DataStructureAndAlgorithms
//
//  Created by xiatian on 2021/12/4.
//

#include "IsPalindrome.h"
#include <String.h>

int isPalindrome(char * s) {
    if (s == NULL) {
        return 0;
    }
    int l = (int)strlen(s);
    if (l <= 1) {
        return 1;
    }
    int j = l - 1;
    int i = 0;
    int off = 'a' - 'A';
    while (i < j) {
        char iChar = s[i];
        while (iChar > 'z' ||
               iChar < '0' ||
               (iChar > '9' && iChar < 'A') ||
               (iChar > 'Z' && iChar < 'a')) {
            i++;
            if(i >= l)
            {
                return 1;
            }
            iChar = s[i];
        }
        char jChar = s[j];
        while (jChar > 'z' ||
               jChar < '0' ||
               (jChar > '9' && jChar < 'A') ||
               (jChar > 'Z' && jChar < 'a')) {
            j--;
            jChar = s[j];
        }
        
        if (iChar != jChar) {
            if (iChar != jChar - off) {
                if (iChar != jChar + off) {
                    return 0;
                }else {
                    if (jChar < 'A') {
                        return 0;
                    }
                }
            }else {
                if (iChar < 'A') {
                    return 0;
                }
            }
        }
        i++;
        j--;
    }
    return 1;
}

