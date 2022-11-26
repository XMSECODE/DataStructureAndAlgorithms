//
//  SortString.c
//  DataStructureAndAlgorithms
//
//  Created by feifan5号 on 2022/10/28.
//

#include "SortString.h"
#include "string.h"

void sortString(void){
    char str[1003];
    char str1[1003];
    char str2[1003];
    for(int i = 0;i < 1003;i++){
        str[i] = 0;
        str1[i] = 0;
        str2[i] = 0;
    }
    while (scanf("%s", str) != EOF) { // 注意 while 处理多个 case
        // 64 位输出请用 printf("%lld")
        int l = (int)strlen(str);
        int index = 0;
        for(int i = 0;i < 26;i++){
            char ac = 'a'+i;
            char Ac = 'A'+i;
            for(int j = 0; j < l;j++){
                char jc = str[j];
                if(jc != 0){
                    if(jc == ac || jc == Ac){
                        str1[index] = jc;
                        index++;
                        str[j] = 0;
                    }
                }
            }

        }

        index = 0;
        for(int i = 0; i < l;i++){
            char ic = str[i];
            if(ic != 0){
                str2[i] = ic;
            }else{
                str2[i] =  str1[index];
                index++;
            }
        }
        printf("%s",str2);


    }
    
}
