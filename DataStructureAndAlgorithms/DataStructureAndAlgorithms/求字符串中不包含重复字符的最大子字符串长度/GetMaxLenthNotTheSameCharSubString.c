//
//  GetMaxLenthNotTheSameCharSubString.c
//  DataStructureAndAlgorithms
//
//  Created by xiatian on 2021/11/30.
//

#include "GetMaxLenthNotTheSameCharSubString.h"
#include <String.h>

int maxLenthInTheString(char *chars) {
    
    
    int charCountsList[26] = {0};
    for (int i = 0; i < 26; i++) {
//        printf("%d\n",charCountsList[i]);
    }
    
    int maxL = 1;
    int i = 0;
    int j = 1;
    int charsL = (int)strlen(chars);
    if (charsL == 0) {
        return 0;
    }
    
    int index = chars[0] - 'a';
    charCountsList[index] = 1;
    
    
    while (j < charsL && maxL < charsL - i) {
        char c = chars[j];
        index = c - 'a';
        if (charCountsList[index] == 1) {
            index = chars[i] - 'a';
            charCountsList[index] = 0;
            i++;
        }else {
            charCountsList[index] = charCountsList[index] + 1;
            if (maxL < j - i + 1) {
                maxL = j - i + 1;
            }
            j++;
        }
        
        
    }
    
    
    return maxL;
    
    
}
