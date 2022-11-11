//
//  CanBeValid.c
//  DataStructureAndAlgorithms
//
//  Created by xiatian on 2022/1/5.
//

#include "CanBeValid.h"
#include "string.h"
#include <mm_malloc.h>

int canBeValid(char * s, char * locked){
//    printf("%s  %s",s,locked);
    int l = (int)strlen(s);
    if (l % 2 == 1) {
        return 0;
    }
    int result = 0;
    for (int i = 0; i < l; i++) {
        char sChar = s[i];
        char lChar = locked[i];
        
        if (sChar == '(' || lChar == '0') {
            result++;
        }else if(result > 0){
            result--;
        }else{
            return 0;
        }
        
    }
    result = 0;
    for (int i = l - 1; i >= 0; i--) {
        char sChar = s[i];
        char lChar = locked[i];
        if (sChar == ')' || lChar == '0') {
            result++;
        }else if(result > 0){
            result--;
        }else{
            return 0;
        }
        
    }
    
    return 1;
}
