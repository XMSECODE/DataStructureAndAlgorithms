//
//  CharIsUnique.c
//  DataStructureAndAlgorithms
//
//  Created by xiatian on 2021/12/4.
//

#include "CharIsUnique.h"
#include <String.h>

int isUnique(char *astr) {
    int l = (int)strlen(astr);
    unsigned int flag = 0;
    for (int i = 0; i < l; i++) {
        char c = astr[i];
        int index = c - 'a';
        unsigned int a = 1 << index;
        if ((a & flag) == 0) {
            flag = flag | a;
        }else {
            return 0;
        }
    }
    return 1;
}

//多出百分之10的时间
int isUnique2(char *astr) {
    int l = (int)strlen(astr);
    char flags[26] = {0};
    for (int i = 0; i < l; i++) {
        char c = astr[i];
        int index = c - 'a';
        char result = flags[index];
        if (result == 0) {
            flags[index] = 1;
        }else {
            return 0;
        }
    }
    return 1;
}
