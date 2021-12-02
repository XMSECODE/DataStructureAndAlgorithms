//
//  main.m
//  DataStructureAndAlgorithms
//
//  Created by xiatian on 2021/11/30.
//

#import <Foundation/Foundation.h>

//求字符串中不包含重复字符的最大子字符串长度
#include "GetMaxLenthNotTheSameCharSubString.h"

#import "ReverseDataTable.h"


int main(int argc, const char * argv[]) {

//    {
//        int result = maxLenthInTheString("abcdabccc");
//        printf("求得最长不包含重复字符的子字符串的长度：%d\n",result);
//
//    }
    
    ////反转单向链表
    {
        Data *firstData;
        Data *olddata = NULL;
        for (int i = 0; i < 1000; i++) {
            Data *newData = malloc(sizeof(Data));
            newData->data = i;
            newData->nextData = NULL;
            if (i == 0) {
                firstData = newData;
                olddata = &(*newData);
            }else {
                olddata->nextData = newData;
                olddata = newData;
            }
        }
        olddata = firstData;
        while (olddata != NULL) {
            printf("%d\n",olddata->data);
            olddata = olddata->nextData;
        }
        
        olddata = reverseDataTalbe(firstData);
        while (olddata != NULL) {
            printf("%d\n",olddata->data);
            olddata = olddata->nextData;
        }
        
        
    }
    
    
    return 0;
}
