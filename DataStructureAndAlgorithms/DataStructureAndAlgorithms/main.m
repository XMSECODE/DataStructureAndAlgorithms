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

#import "CharIsUnique.h"

#import "IsPalindrome.h"


int main(int argc, const char * argv[]) {
    
    //    {
    //        int result = maxLenthInTheString("abcdabccc");
    //        printf("求得最长不包含重复字符的子字符串的长度：%d\n",result);
    //
    //    }
    
    ////反转单向链表
    //    {
    //        Data *firstData;
    //        Data *olddata = NULL;
    //        for (int i = 0; i < 1000; i++) {
    //            Data *newData = malloc(sizeof(Data));
    //            newData->data = i;
    //            newData->nextData = NULL;
    //            if (i == 0) {
    //                firstData = newData;
    //                olddata = &(*newData);
    //            }else {
    //                olddata->nextData = newData;
    //                olddata = newData;
    //            }
    //        }
    //        olddata = firstData;
    //        while (olddata != NULL) {
    //            printf("%d\n",olddata->data);
    //            olddata = olddata->nextData;
    //        }
    //
    //        olddata = reverseDataTalbe(firstData);
    //        while (olddata != NULL) {
    //            printf("%d\n",olddata->data);
    //            olddata = olddata->nextData;
    //        }
    //
    //
    //    }
    
    
    //判定字符是否唯一
    
//    {
//        {
//            double startTime = CFAbsoluteTimeGetCurrent();
//            for (int i = 0; i < 10000000; i++) {
//                {
//
//                    int result = isUnique2("leetcode");
//                    result = isUnique2("abc");
//                }
//            }
//
//
//            double endTime = CFAbsoluteTimeGetCurrent();
//            double time = endTime - startTime;
//            NSLog(@"方法1:%f",time);
//        }
//        {
//            double startTime = CFAbsoluteTimeGetCurrent();
//            for (int i = 0; i < 10000000; i++) {
//                //判定字符是否唯一
//                {
//
//                    int result = isUnique("leetcode");
//                    result = isUnique("abc");
//                }
//            }
//
//
//            double endTime = CFAbsoluteTimeGetCurrent();
//            double time = endTime - startTime;
//            NSLog(@"方法2:%f",time);
//        }
//    }
    
//    {
//        double startTime = CFAbsoluteTimeGetCurrent();
//        for (int i = 0; i < 600000; i++) {
//            int result = isPalindrome("A man, a plan, a canal: Panama");
////            printf("%d\n",result);
//        }
//        double endTime = CFAbsoluteTimeGetCurrent();
//        double time = endTime - startTime;
//        NSLog(@"%f",time);
//
//    }
    
    return 0;
}
