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

#include "MinTaps.h"

#include "SumNumbers.h"

#include "MinScoreTriangulation.h"

#include "FindLengthOfLCIS.h"
#include "CanBeValid.h"

#include "MaxStudents.h"

#include "shootingmatch.h"
#include "shoppinglist.h"
#include "Get1NumberCount.h"
#include "IntAndIP.h"

#include "StringEncode.h"
#import "eightQuee.h"
#include "StringMerge.h"
#include "ReverseKGroup.h"


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
//    {
////        int range[6668] = {14,3,11,16,7,15,16,13,10,4,16,11,16,12,2,11,16,5,3,16,10,8,14,5,6,13,10,11,11,13,10,2,15,17,5,12,17,7,11,6,10,1,17,6,9,11,14,2,6,1,12,9,6,8,13,3,8,9,12,6,1,6,13,2,5,5,16,3,17,8,16,15,11,6,16,0,4,15,4,6,6,15,9,3,8,12,9,13,1,5,12,8,10,8,0,8,6,0,15,13,17,11,0,8,16,2,10,3,8,13,5,1,14,11,17,0,14,5,16,11,2,6,16,3,7,0,14,16,17,10,14,4,13,17,15,15,3,6,12,1,16,9,10,0,9,10,3,14,9,14,14,15,17,14,12,14,9,16,11,5,17,16,9,16,8,15,15,7,7,15,17,10,7,2,1,16,7,5,14,3,3,8,17,3,3,14,0,8,4,5,5,7,10,7,13,8,5,5,13,5,13,3,0,8,0,2,6,5,8,1,11,8,16,15,17,3,2,4,3,16,4,6,6,15,0,11,12,10,6,17,4,10,12,2,2,13,1,0,11,5,14,1,5,2,15,17,8,2,15,5,1,5,7,12,0,4,16,8,12,11,0,3,5,12,3,6,8,11,13,15,12,17,12,2,4,4,11,15,6,13,7,2,9,2,9,6,4,0,12,7,8,7,3,8,6,7,11,17,12,11,7,16,3,9,7,1,0,13,17,2,5,16,15,15,12,5,7,0,4,7,13,1,4,10,10,10,13,15,7,14,4,1,12,17,12,15,16,12,2,0,16,12,10,10,6,4,11,4,3,7,2,16,1,3,13,12,15,7,4,6,12,4,10,6,8,2,17,14,14,17,5,5,11,11,17,2,5,0,8,13,2,3,2,12,14,14,14,4,11,0,2,7,5,17,13,2,4,5,12,12,3,0,10,1,2,13,15,17,14,15,5,15,16,7,7,4,1,3,7,9,14,9,8,8,4,1,8,11,6,17,6,0,16,3,16,5,6,14,5,16,12,1,6,9,0,12,15,8,7,10,14,5,17,14,6,13,15,5,14,13,12,3,12,15,11,4,12,4,14,15,16,11,17,17,16,4,3,15,5,6,17,3,3,4,10,10,5,12,15,11,11,12,13,14,6,4,15,5,14,2,0,13,8,9,7,7,0,15,6,8,10,3,9,7,11,11,12,5,17,12,3,13,8,13,8,7,3,5,16,4,9,5,17,1,15,4,17,11,9,0,8,10,15,12,3,2,10,1,12,3,14,0,2,11,7,7,1,7,15,5,10,12,13,17,3,16,14,12,9,15,11,5,4,2,11,16,4,4,2,14,12,5,0,7,15,6,12,3,15,8,10,9,14,0,0,14,6,16,11,2,5,12,8,0,7,16,2,9,3,13,13,9,2,0,15,16,7,11,9,16,6,11,5,0,0,2,8,15,7,12,10,6,15,11,7,0,5,9,11,16,6,13,0,12,9,15,15,14,17,5,3,5,4,6,3,10,12,14,4,5,5,11,8,17,12,17,15,3,5,0,14,0,16,15,11,3,5,7,8,4,12,4,16,12,8,3,6,17,12,8,16,0,6,7,3,4,1,17,12,17,14,16,4,9,13,13,5,14,16,7,6,6,13,17,13,13,4,12,1,11,11,3,3,7,6,2,7,2,9,4,11,4,17,8,15,3,7,1,1,12,16,12,6,13,0,11,8,7,2,4,7,4,13,16,8,4,2,13,7,3,5,12,14,0,2,11,11,12,2,13,11,15,11,8,17,6,5,14,1,17,17,16,2,13,9,7,3,2,6,3,1,10,11,4,6,0,1,6,5,11,0,12,17,13,7,17,11,12,15,12,6,12,2,17,13,9,5,16,11,6,11,3,10,17,17,5,16,16,3,6,0,9,12,2,16,6,17,11,9,9,0,12,17,1,0,6,3,10,13,1,3,7,2,7,14,0,8,15,1,0,16,16,15,17,6,4,12,0,8,10,3,15,17,5,11,17,7,6,4,0,14,6,6,0,4,6,12,14,13,8,13,1,11,2,14,2,16,6,1,10,9,2,11,4,7,16,10,3,15,14,17,7,3,1,2,5,2,5,4,10,5,9,16,15,3,6,4,6,8,6,17,3,8,7,16,5,11,17,5,8,7,16,0,0,11,12,11,8,8,0,17,17,15,0,7,14,0,2,2,0,16,4,11,8,9,9,14,13,5,13,10,8,11,4,7,12,0,16,7,0,17,16,14,6,9,15,4,14,16,8,16,9,4,14,12,11,1,1,9,1,5,15,3,10,6,14,17,5,0,4,0,5,0,16,14,10,1,0,0,1,16,9,6,12,3,14,6,13,4,8,8,3,3,2,5,9,12,8,1,6,9,1,4,7,11,5,6,9,14,14,0,4,12,10,5,14,16,3,8,7,4,5,6,6,13,16,8,2,7,12,10,5,3,9,12,11,2,0,16,8,1,14,10,11,10,15,16,7,17,16,8,15,12,15,14,11,14,16,11,6,3,14,9,0,6,17,7,12,8,1,12,6,3,17,3,17,13,6,3,7,0,1,10,5,7,16,14,6,14,9,13,7,3,2,13,7,5,6,3,6,7,8,15,6,9,7,10,0,5,9,3,17,7,3,4,15,3,12,0,15,6,13,13,13,5,5,2,10,11,1,3,3,9,5,2,13,17,8,12,2,10,11,3,8,8,1,0,9,3,1,4,13,5,3,4,3,15,8,0,4,8,17,8,7,6,15,4,12,13,15,4,16,3,17,16,7,16,4,0,2,0,2,4,5,11,9,11,0,2,17,12,10,16,13,17,8,5,14,2,16,1,10,6,7,11,12,6,1,12,8,10,1,5,11,12,8,12,0,15,16,2,5,11,7,15,14,6,12,15,5,15,6,15,8,9,14,16,0,10,11,7,17,5,2,15,0,1,11,12,5,11,7,9,1,7,3,6,5,16,16,4,12,8,15,1,8,8,13,11,3,15,12,0,1,9,0,2,17,7,13,14,14,9,6,4,9,1,5,10,14,1,1,11,10,4,17,8,8,12,7,0,15,6,15,16,10,17,4,1,8,0,9,7,8,9,0,15,14,10,2,13,1,16,2,2,11,0,10,16,8,8,10,17,16,0,13,11,9,12,17,3,5,17,13,0,14,0,13,8,14,5,1,10,6,13,13,14,7,6,6,9,6,13,8,12,12,7,14,11,6,7,12,10,14,15,7,0,1,14,16,15,1,3,3,10,11,16,5,14,5,14,2,10,14,2,7,17,4,7,5,1,15,6,0,3,13,15,14,6,5,17,0,11,15,9,9,16,12,9,16,10,1,4,9,8,7,6,13,1,11,5,0,14,16,16,17,0,6,0,0,7,14,10,10,4,0,2,5,14,16,11,13,7,7,0,8,1,11,7,14,3,6,8,17,17,16,11,10,16,7,8,10,0,10,3,1,8,6,2,12,2,10,10,14,9,13,17,2,0,4,17,16,2,16,3,7,8,14,3,14,13,16,16,8,8,16,13,10,13,7,4,15,13,10,1,1,3,10,15,15,4,0,17,10,10,17,4,9,11,0,2,1,16,15,6,1,13,5,2,9,0,7,4,7,10,16,7,16,7,10,13,17,0,4,5,16,16,17,9,10,2,2,3,16,0,15,0,14,12,15,2,17,12,3,8,4,16,10,6,11,0,13,8,5,5,8,17,17,14,13,13,17,1,7,5,15,17,3,2,14,9,8,6,0,13,5,9,17,8,3,14,0,3,12,6,8,5,6,17,10,7,6,11,12,9,5,15,0,5,7,7,3,6,5,4,12,17,4,13,1,7,12,3,14,13,17,16,16,10,15,9,2,5,15,7,3,4,7,14,15,11,16,11,17,4,12,5,12,4,2,9,7,2,17,5,0,9,15,10,0,16,6,8,17,10,10,1,2,16,3,12,2,10,13,2,0,16,7,9,1,8,9,17,3,16,10,15,9,13,5,5,2,11,10,4,14,15,14,9,14,15,6,11,1,2,11,2,4,3,17,9,12,5,4,7,4,16,2,9,5,12,14,12,6,7,6,15,13,0,13,1,13,3,7,15,16,5,15,6,4,17,15,10,15,4,2,4,14,8,8,10,5,2,6,6,14,4,8,2,4,4,7,4,12,8,0,7,11,1,8,14,7,4,11,4,10,7,9,1,2,11,6,11,1,15,8,6,8,3,11,16,11,0,1,14,9,4,0,9,3,10,17,8,12,16,9,15,9,17,12,2,4,5,17,15,8,14,5,7,9,13,7,7,16,14,3,14,1,3,6,6,10,8,8,12,8,7,9,11,15,10,11,16,12,15,12,17,12,16,0,2,2,10,5,8,12,2,1,2,2,9,5,7,10,8,2,16,3,13,6,2,13,5,16,6,10,0,7,7,13,1,10,8,5,0,13,13,4,0,5,3,14,5,4,3,0,9,12,2,12,10,3,9,15,10,11,1,6,12,5,13,4,9,9,11,7,11,8,13,13,6,5,17,4,4,17,6,15,16,6,4,7,14,8,15,4,6,13,8,3,1,16,15,0,17,1,13,11,14,17,4,13,4,12,15,2,16,10,9,9,13,9,2,8,14,0,12,4,13,7,5,15,1,14,14,11,1,3,12,3,9,14,5,5,11,11,12,13,9,7,10,10,6,11,16,11,4,3,14,4,17,3,14,3,5,11,4,0,10,11,13,2,0,7,8,10,12,4,3,5,12,12,5,16,5,3,14,3,8,14,11,6,5,10,16,16,0,11,5,13,7,17,9,5,2,16,7,12,2,9,7,7,8,7,2,5,9,7,15,12,0,17,14,10,0,1,16,9,12,6,7,17,5,1,17,11,2,17,6,3,17,16,1,3,1,8,2,9,6,17,11,8,5,15,6,13,17,4,10,17,6,3,15,0,1,4,6,1,1,6,3,13,14,13,9,8,7,9,17,3,2,5,15,17,15,6,6,16,3,13,10,5,14,10,11,0,14,16,7,11,17,13,6,8,10,14,9,4,3,14,3,3,5,15,16,17,10,12,8,9,14,3,16,6,16,8,16,4,0,14,8,2,14,16,6,16,7,15,16,3,13,14,0,15,15,8,10,0,1,4,0,0,12,15,6,8,11,6,1,15,13,8,12,3,12,15,6,16,9,0,0,5,12,16,16,17,17,15,10,2,9,5,1,11,14,9,12,10,15,3,16,6,17,5,15,13,7,3,13,4,17,10,6,5,6,4,3,8,0,14,3,13,14,13,2,15,6,17,11,15,2,16,8,8,9,17,13,4,17,9,0,8,7,9,0,7,8,3,5,17,13,15,12,14,0,13,16,14,14,3,1,16,10,6,9,11,0,12,14,1,8,4,13,13,9,12,6,8,0,3,9,7,0,15,6,13,0,4,1,8,8,6,10,8,0,9,9,17,12,9,4,14,1,11,8,5,4,4,14,6,10,16,5,8,7,7,15,7,12,1,16,9,7,16,9,12,13,13,14,17,13,8,12,2,3,6,2,9,7,8,0,6,8,0,15,4,4,2,8,16,16,2,5,12,3,2,8,12,12,3,15,6,0,6,7,11,2,5,13,5,8,1,3,10,10,4,13,13,15,8,4,10,3,12,4,0,15,14,15,13,5,5,6,5,5,7,12,11,15,3,10,5,2,15,7,0,8,14,11,9,7,8,11,15,15,14,1,16,14,16,3,0,14,17,12,2,16,0,9,6,2,11,8,4,8,6,7,10,11,0,5,2,11,4,13,5,3,10,2,1,5,7,6,6,17,5,11,3,8,0,9,2,10,13,5,8,9,3,9,5,3,13,1,2,3,6,12,17,9,17,1,15,10,11,9,4,10,12,15,15,14,1,3,15,2,2,8,13,11,0,2,6,4,11,15,0,7,15,3,16,2,6,9,7,9,9,11,0,9,17,10,3,12,8,1,15,11,0,17,1,13,10,3,9,2,4,12,3,17,3,12,7,2,3,3,10,0,8,7,2,7,1,14,7,14,10,4,14,17,13,17,9,1,1,11,13,14,14,16,12,14,13,13,11,13,8,6,6,16,15,17,8,7,1,8,17,8,11,5,17,16,17,10,1,16,8,8,6,13,10,17,11,14,16,4,4,14,14,6,1,0,3,17,3,16,9,1,1,1,12,15,17,16,10,12,13,10,6,2,11,14,4,8,12,11,2,0,7,8,12,7,14,14,3,1,14,5,2,14,2,16,14,13,12,2,16,6,15,7,9,15,4,9,0,4,17,10,14,4,10,13,12,1,7,6,5,17,2,3,7,3,16,17,11,5,4,8,5,15,11,2,13,0,4,1,3,4,10,4,9,7,3,1,13,0,17,8,14,6,3,15,9,6,3,10,6,10,10,14,12,12,12,3,12,9,3,4,2,16,16,11,5,12,17,0,15,10,1,17,3,3,10,6,7,4,15,9,16,9,5,17,13,7,7,10,10,13,4,4,6,7,17,1,14,5,9,7,11,2,6,17,13,10,1,13,17,3,11,1,7,11,4,15,0,16,6,10,10,8,16,9,9,7,17,11,5,1,9,16,8,2,8,12,11,3,13,0,14,3,16,14,0,17,1,14,2,10,16,13,9,7,12,13,14,6,17,17,8,14,1,15,17,4,5,7,10,2,8,8,9,13,6,16,0,12,14,5,1,6,2,3,13,11,0,2,4,8,15,15,0,10,0,9,14,16,16,10,2,13,7,15,16,17,16,5,0,6,14,2,9,8,11,4,11,6,6,0,16,17,17,17,7,4,14,14,14,5,9,3,3,12,14,10,7,4,4,7,9,9,15,7,1,0,10,0,16,15,1,3,6,0,15,10,14,13,2,9,11,0,11,1,14,11,3,6,2,11,12,1,6,7,4,11,0,1,9,9,5,1,1,14,6,7,17,14,5,4,17,2,12,5,9,5,9,5,16,7,0,0,8,13,0,11,8,10,5,5,15,3,1,16,13,5,10,2,4,4,13,11,17,1,5,16,9,1,17,12,13,3,16,0,3,17,12,6,4,15,8,9,14,4,13,9,3,10,10,8,1,2,0,9,9,14,12,1,7,9,1,15,17,8,5,16,9,17,10,15,14,5,1,5,15,14,1,16,0,7,16,16,3,12,13,5,8,10,9,14,5,0,4,11,16,7,14,12,16,5,15,17,17,0,2,8,7,8,4,3,0,9,6,9,1,1,9,13,8,12,0,3,16,1,14,6,4,13,2,6,14,17,2,3,6,6,1,3,15,15,8,0,4,17,10,16,6,17,10,0,15,13,16,9,12,16,10,12,1,14,10,7,2,1,1,1,3,14,10,14,1,7,6,14,14,14,5,8,5,6,8,2,11,4,13,14,2,4,8,11,16,15,7,1,4,6,15,9,6,8,15,6,6,14,6,5,3,3,13,0,8,2,11,2,8,13,2,2,6,9,17,8,12,6,1,8,3,7,14,6,0,11,16,6,15,6,17,13,3,14,15,10,12,14,11,7,9,17,1,3,16,8,6,15,11,4,4,15,12,6,1,0,7,2,14,11,8,5,4,12,12,12,7,11,4,0,7,14,3,8,12,16,13,12,2,11,5,5,9,16,1,8,10,8,4,17,4,3,17,17,7,10,14,11,2,9,9,9,15,4,10,7,8,8,2,5,10,16,2,16,13,12,11,3,15,0,4,0,6,3,8,15,5,16,1,17,11,2,0,9,5,10,4,13,15,16,10,1,1,11,6,13,2,3,17,5,15,11,2,11,14,0,10,12,11,11,14,13,15,9,14,17,5,7,6,4,0,1,4,10,4,3,10,11,9,6,14,17,0,11,8,1,6,14,8,9,2,4,12,16,8,11,14,14,6,3,15,15,3,16,14,12,2,5,12,7,11,1,1,6,8,16,12,10,17,15,14,0,2,15,8,5,16,0,4,1,4,10,8,11,13,7,5,12,7,16,17,6,13,10,15,12,16,15,8,11,10,6,10,6,5,9,8,12,8,7,12,5,8,9,10,17,5,2,9,1,3,9,11,3,10,8,12,2,14,5,17,14,15,15,9,12,12,7,14,17,15,16,14,8,12,0,11,13,13,10,6,15,1,5,14,15,3,12,7,1,7,12,4,7,14,10,1,11,14,7,4,14,3,7,1,3,0,17,3,1,10,17,9,13,5,5,13,2,9,17,13,4,2,12,1,7,1,7,10,13,17,3,9,2,15,6,7,8,9,9,16,13,13,8,9,4,8,16,14,11,11,3,14,4,10,2,16,0,12,10,2,4,2,15,4,14,0,11,0,14,17,6,0,15,15,9,8,10,10,13,0,12,5,16,13,8,5,5,0,17,10,0,15,14,16,1,13,10,8,13,4,8,14,7,13,7,4,5,9,0,13,4,0,15,7,14,12,12,14,13,2,6,0,17,0,3,7,1,14,15,14,1,7,8,16,11,15,2,1,3,4,7,1,2,2,7,9,15,2,13,6,8,16,12,15,12,6,3,7,15,8,4,3,12,0,2,7,4,0,4,9,17,2,3,11,1,2,12,3,3,14,6,11,16,11,10,7,2,14,4,3,2,7,0,5,3,12,14,7,10,14,17,0,3,4,8,11,2,6,7,9,14,10,8,4,6,3,10,10,4,3,9,10,4,0,7,9,7,0,14,14,8,14,5,17,7,1,11,10,8,5,5,17,7,6,17,7,3,17,15,7,13,1,6,4,12,15,15,1,15,1,1,1,7,11,11,3,7,5,6,1,14,13,6,5,10,14,17,10,0,5,2,9,0,8,7,8,17,16,15,8,0,15,1,2,5,15,2,10,10,13,4,14,11,5,9,2,13,14,13,17,11,3,8,10,12,16,6,0,1,17,10,9,12,0,1,13,14,12,2,11,7,4,16,5,11,8,2,7,10,9,12,0,2,17,12,11,8,10,7,10,0,2,4,14,15,4,4,2,7,17,14,5,5,15,4,6,13,13,2,5,9,17,14,6,4,6,13,11,10,16,2,15,10,7,15,8,15,15,4,7,8,14,7,17,1,13,11,15,3,3,7,0,15,10,5,2,8,14,15,14,9,13,7,15,2,10,14,8,12,16,11,11,3,14,10,2,8,13,4,12,3,14,6,17,10,8,1,13,7,1,5,10,2,4,13,11,2,0,11,7,9,13,3,10,7,10,8,7,2,4,15,8,8,11,12,8,6,1,14,10,10,14,8,7,3,7,13,5,15,16,12,13,9,14,17,9,9,7,1,12,7,0,6,11,8,13,17,16,10,11,1,11,0,5,15,9,7,5,16,6,0,4,3,14,14,6,2,10,11,10,11,3,16,17,9,14,13,17,9,13,7,2,15,4,7,13,12,5,12,7,6,10,8,13,12,12,8,6,16,11,8,11,15,9,1,7,16,12,9,11,14,17,4,16,0,1,10,0,4,9,5,6,8,8,0,12,11,0,6,17,8,6,9,9,5,2,12,10,16,5,15,17,16,14,17,11,8,15,8,11,12,3,15,7,13,17,7,7,7,3,1,1,2,14,7,9,0,0,2,16,16,10,0,9,10,7,0,17,16,0,13,8,0,2,2,2,11,11,2,13,0,11,5,9,14,6,8,0,3,13,15,8,3,9,12,9,2,8,2,13,13,0,6,15,1,14,2,3,16,16,7,11,10,7,3,7,8,3,12,16,5,3,15,10,3,11,0,17,9,2,5,14,16,17,2,14,11,5,17,7,16,3,16,6,17,6,9,16,17,11,10,9,10,16,5,4,5,16,3,3,0,9,15,6,13,7,12,5,9,0,11,3,7,3,8,9,12,2,3,10,4,14,16,12,10,7,9,5,1,13,1,14,16,5,15,3,13,15,4,11,2,15,11,1,2,0,12,11,13,6,6,3,10,6,17,0,17,14,2,13,10,2,15,15,4,11,12,12,3,9,6,17,15,2,7,11,16,11,13,9,2,4,3,16,8,3,8,1,14,16,12,1,8,13,3,0,3,5,1,7,0,14,0,4,12,17,4,16,16,15,9,12,7,0,10,8,8,12,12,9,9,6,10,6,6,17,13,7,7,16,16,4,15,11,6,11,0,0,14,8,14,16,10,15,8,5,10,1,4,9,1,17,13,11,17,14,11,16,16,7,14,10,10,12,11,16,15,2,15,0,9,2,10,10,12,4,12,14,11,1,2,3,11,14,0,2,10,11,10,8,9,12,3,5,0,6,2,10,5,3,2,11,10,15,5,5,1,12,14,9,7,14,8,14,3,14,11,13,5,2,13,11,4,4,3,16,12,15,12,4,12,13,5,14,2,14,10,17,5,6,10,1,2,3,10,0,9,11,7,12,9,1,16,12,13,0,13,16,15,6,1,15,2,9,12,5,1,14,11,8,3,7,8,16,7,11,15,2,3,9,5,3,13,0,4,14,4,2,16,4,14,7,1,5,11,3,14,12,0,13,10,4,16,17,5,6,13,14,6,11,7,11,2,13,6,10,8,6,6,4,13,10,1,13,14,12,11,9,5,5,14,13,16,16,12,9,3,4,0,3,3,16,4,13,10,1,7,15,13,15,2,4,15,3,14,16,16,12,9,6,14,4,0,13,12,12,6,1,6,9,12,6,10,0,7,14,17,1,14,1,9,14,11,13,12,11,5,6,15,10,4,15,12,2,11,8,7,5,3,3,1,15,2,2,1,12,3,12,8,6,0,6,4,0,7,0,1,2,9,10,8,17,17,17,2,7,12,16,14,17,2,17,2,7,6,2,7,5,8,7,12,12,6,10,8,3,14,8,4,15,0,8,13,12,14,13,15,4,15,6,3,4,1,9,7,6,11,13,12,12,14,15,13,2,4,2,3,14,13,4,3,6,15,0,2,12,6,12,4,17,17,1,13,14,6,15,15,14,14,5,6,3,6,4,17,15,12,11,4,4,5,1,7,12,6,16,6,6,8,8,1,8,6,9,3,12,4,10,7,10,12,6,6,2,0,13,1,1,2,13,3,11,17,14,17,5,3,15,17,10,5,10,5,9,6,17,14,13,4,17,8,3,17,4,8,16,15,10,16,1,17,15,9,16,11,2,7,6,17,16,11,15,6,12,16,13,6,13,1,2,7,8,13,16,12,14,17,10,3,15,9,9,4,8,10,3,12,13,0,8,15,1,3,5,6,4,8,16,15,14,5,9,7,7,4,4,1,11,2,0,9,9,16,16,1,16,0,3,4,7,8,5,14,9,15,16,2,11,7,13,5,1,0,3,13,15,4,7,7,16,9,13,11,12,3,6,6,13,9,16,8,2,3,2,2,4,15,8,3,1,1,15,4,12,4,3,14,11,4,9,8,8,2,16,4,17,2,7,15,13,9,16,10,0,7,16,11,12,3,4,8,16,4,15,16,16,1,3,16,12,5,17,11,14,3,6,12,7,3,8,0,5,17,8,17,12,16,15,15,7,7,2,0,10,5,2,16,4,4,16,1,6,0,13,17,13,6,10,16,4,13,12,6,8,7,3,16,10,1,12,5,17,17,5,12,17,0,8,3,10,14,1,13,1,16,0,8,7,7,13,12,10,14,10,6,17,5,4,2,6,5,17,3,12,11,17,1,2,8,3,8,16,5,2,3,15,15,0,13,17,17,9,6,2,13,6,15,4,12,9,13,8,1,4,17,3,0,0,8,10,7,1,9,15,0,15,2,2,3,8,15,5,7,6,9,11,8,0,8,8,1,12,12,15,5,16,6,11,0,10,1,15,5,7,17,6,16,9,2,9,12,17,14,9,0,12,5,0,10,9,9,13,1,17,17,2,15,13,17,6,13,2,15,8,13,10,2,9,10,11,0,4,15,14,9,5,14,11,13,0,16,2,15,7,12,6,6,16,5,6,17,7,15,13,4,6,17,8,15,6,5,0,12,17,3,5,1,13,16,3,13,0,7,11,7,2,6,0,11,11,1,2,0,1,3,5,6,4,9,3,0,9,9,11,13,8,17,10,15,11,2,3,12,4,6,0,0,15,10,12,13,11,11,1,9,17,15,17,13,6,10,0,7,2,2,3,8,17,5,16,2,3,14,3,7,4,15,5,5,11,15,14,6,15,11,5,13,13,16,3,5,11,12,16,15,9,6,4,12,12,3,10,7,1,17,10,2,12,16,13,3,13,17,14,7,9,0,17,9,13,16,3,4,9,3,11,11,9,0,6,5,16,7,14,11,11,13,16,3,5,17,6,8,3,9,10,0,5,8,10,6,5,12,9,13,2,17,7,7,1,3,2,15,15,11,11,0,13,7,10,16,1,1,9,12,7,12,3,9,16,13,9,4,13,10,13,4,13,16,17,4,6,8,0,8,0,13,3,0,0,16,13,15,16,2,6,4,2,7,5,9,17,12,1,10,3,6,14,8,10,7,11,10,9,14,11,5,4,11,0,10,7,7,9,9,16,16,0,5,10,12,7,15,0,6,17,17,11,14,14,14,10,4,2,14,7,3,0,6,14,7,11,9,17,5,9,14,14,8,14,8,1,6,15,12,3,7,2,1,9,3,17,10,13,16,11,13,11,1,3,6,4,8,2,6,15,13,4,16,3,4,7,10,16,5,2,1,15,14,1,6,17,1,3,11,17,8,12,6,1,1,3,8,1,15,10,3,13,0,0,10,11,9,1,8,8,3,13,0,14,0,3,14,5,4,5,8,13,9,16,2,4,14,12,15,3,2,8,16,0,9,17,8,16,6,13,8,9,3,13,1,17,17,8,7,0,3,6,3,15,16,16,6,8,10,15,7,1,16,13,1,12,0,9,14,6,1,8,15,17,16,10,14,0,12,12,2,7,15,1,7,4,0,6,0,12,12,10,13,3,3,7,16,0,7,7,8,13,2,10,2,12,8,10,17,0,6,2,1,6,4,8,3,17,5,5,4,8,13,3,3,1,17,6,13,5,8,14,0,5,13,11,12,11,5,4,17,0,4,1,15,11,11,1,1,9,9,10,12,7,7,3,0,1,9,15,16,4,2,7,3,14,17,8,4,16,15,0,6,6,4,8,1,11,17,7,12,15,13,16,4,1,13,0,5,4,2,16,13,8,10,14,2,4,6,5,5,14,0,6,11,2,15,14,8,0,11,1,6,13,4,14,16,1,1,14,16,10,11,14,12,6,13,6,17,5,1,6,15,11,7,9,13,14,6,6,11,13,7,5,4,1,6,1,3,3,13,8,12,8,0,12,0,1,3,8,3,9,1,15,5,2,12,14,9,2,6,5,11,16,3,5,5,0,8,2,9,2,15,9,15,13,13,0,8,11,0,16,4,0,10,7,10,14,15,4,3,17,3,17,11,4,13,7,7,17,17,0,9,14,2,2,10,0,6,1,7,13,15,8,13,1,7,3,14,12,14,15,0,7,17,1,16,8,0,3,0,5,9,11,16,0,0,5,12,2,14,16,11,17,15,4,17,5,15,6,10,8,12,16,6,11,7,3,13,1,5,1,4,5,9,2,6,2,7,14,8,5,16,6,8,9,9,0,3,15,15,8,3,1,3,13,17,6,3,12,5,1,10,13,3,3,17,5,16,9,2,9,4,17,10,17,13,7,7,2,12,8,14,15,16,4,16,1,7,0,15,6,16,16,14,0,7,11,6,7,13,10,9,17,3,16,3,12,3,0,17,10,10,13,4,15,10,0,12,9,6,0,1,3,13,11,10,17,15,13,4,3,13,3,6,11,12,16,9,3,15,6,4,6,17,11,15,16,13,16,5,6,15,16,9,17,15,9,8,6,17,10,15,11,6,10,4,16,11,5,4,10,6,6,9,12,3,8,3,7,15,14,12,17,4,3,13,16,16,0,2,15,7,16,4,16,0,11,4,11,15,3,8,7,6,10,11,16,11,11,3,8,1,13,14,2,12,13,9,17,16,15,8,2,7,5,13,4,7,5,13,13,5,8,15,9,8,8,1,17,2,11,17,7,0,11,16,10,10,2,4,14,11,9,17,9,14,12,16,15,11,3,5,9,4,10,0,14,3,9,0,13,7,12,7,5,12,12,10,7,3,3,15,11,4,17,12,3,11,14,10,1,17,8,14,7,1,1,2,1,11,13,9,17,10,14,7,7,13,11,0,10,9,5,12,15,0,9,9,3,7,14,0,3,16,5,7,10,10,5,11,3,2,13,14,17,12,1,12,5,14,9,4,17,12,0,1,1,4,15,3,0,11,15,16,12,15,11,2,4,2,9,11,8,16,17,5,6,6,5,3,6,16,12,14,15,10,2,8,1,6,0,14,12,11,12,10,0,17,1,6,11,7,11,11,7,17,9,5,3,15,7,0,8,12,13,10,9,14,9,2,5,8,16,14,1,5,17,8,4,9,4,7,6,13,13,12,3,11,17,7,14,12,12,10,9,6,11,5,2,3,13,1,0,0,8,0,6,15,8,2,0,6,6,2,8,1,17,6,8,9,9,8,17,17,12,17,17,4,0,11,0,12,2,15,11,9,5,8,14,8,13,11,0,9,14,4,2,8,7,7,17,16,0,12,6,0,5,12,13,7,14,7,9,7,3,6,4,4,7,13,13,8,14,12,7,15,9,10,0,0,17,0,16,2,5,9,3,3,2,5,7,4,10,16,17,1,12,8,0,4,4,15,1,15,5,4,7,11,1,2,13,10,0,2,0,6,7,0,17,14,7,0,9,11,10,1,0,15,5,0,17,12,2,17,16,1,9,4,14,2,14,5,11,4,13,4,6,16,8,4,11,15,2,11,6,5,15,13,9,7,15,2,5,6,9,4,3,3,10,2,12,5,15,13,4,17,0,14,17,2,4,11,5,1,2,1,12,7,4,2,17,7,1,4,12,7,0,6,1,17,8,15,14,2,14,9,10,14,13,15,7,16,1,15,0,15,3,13,8,16,5,6,0,9,13,9,0,3,5,6,4,15,9,7,15,11,5,14,0,9,15,13,7,3,8,5,3,11,12,16,7,13,17,14,14,8,8,6,9,10,0,9,6,13,17,6,16,8,7,4,8,12,4,2,9,4,16,8,15,3,5,14,3,4,0,5,9,6,7,14,15,11,13,1,9,11,0,3,6,5,3,7,3,8,16,8,4,12,13,13,6,14,5,0,13,11,0};
//        int range[7] ={1,1,2,3,2,1,1};
//        double startTime = CFAbsoluteTimeGetCurrent();
//        int result = minTaps2(6, range, 0);
//
//        double endTime = CFAbsoluteTimeGetCurrent();
//        double time = endTime - startTime;
//        NSLog(@"%f",time);
//        printf("%d\n",result);
//
//    }
    
//    {
//        //求根节点到叶节点数字之和
//
//        struct TreeNode *rootNode = createTreeNode(1);
//        rootNode->left = createTreeNode(2);
//        rootNode->right = createTreeNode(3);
//        int result = sumNumbers(rootNode);
//        printf("%d\n",result);
//        freeNode(rootNode);
//
//        rootNode = createTreeNode(4);
//        rootNode->right = createTreeNode(0);
//        struct TreeNode *rootLeftNode = createTreeNode(9);
//        rootNode->left = rootLeftNode;
//        rootLeftNode->left = createTreeNode(5);
//        rootLeftNode->right = createTreeNode(1);
//        result = sumNumbers(rootNode);
//        printf("%d\n",result);
//        freeNode(rootNode);
//
//    }
//    {
//        int arr[] = {3,7,4,5,26,62,69,81,55,85,95,40,91,33,72,88,86};
//        double startTime = CFAbsoluteTimeGetCurrent();
//        int result = minScoreTriangulation(arr, 4);
//
//        double endTime = CFAbsoluteTimeGetCurrent();
//        double time = endTime - startTime;
//        NSLog(@"%f",time);
//        printf("%d\n",result);
//    }
//    {
//    int arr[] = {61,16,46,22,94,50,29,46,7,33};
//        findLengthOfLCIS(arr, 5);
//    }
    
//    {
//        int count = 13;
//        int idArray[] = {3,3,7,4,4,4,4,7,7,3,5,5,5};
//        int scoreArray[] = {53,80,68,24,39,76,66,16,100,55,53,80,55};
//        int resultCount = 0;
//        int *result = getResultArray(count, idArray, scoreArray, &resultCount);
//        for (int i = 0; i < resultCount; i++) {
//            printf("%d",result[i]);
//            if (i == resultCount - 1) {
//                break;
//            }
//            printf(",");
//        }
//        printf("\n");
//    }
    
//    {
//        int result = getMaxShoppingList();
//        printf("%d\n",result);
//    }
//    {
//        get1NumberCount();
//    }
    {
//        ipToInt();
    }
    
    
//    char* s = "))()))";
//    char*locked = "010100";
//    int result = canBeValid(s, locked);
//    NSLog(@"%d",result);
    /*
     
     '#'    ,'.'    ,'#'    ,'#'    ,'.'    ,'#',
     '.'    ,'#'    ,'#'    ,'#'    ,'#'    ,'.',
     '#'    ,'.'    ,'#'    ,'#'    ,'.'    ,'#'
     */
//    {
//        {
//            
//            char sears[] = {'#','.','#','#','.','#','.','#','#','#','#','.','#','.','#','#','.','#'};
//            int seatsColSize[] = {6,6,6};
//            char **s = malloc(sizeof(char *) * 3);
//            for (int i = 0; i < 3; i++) {
//                int count = seatsColSize[i];
//                char *subs = malloc(sizeof(char) * count);
//                s[i] = subs;
//                for (int j = 0; j < count; j++) {
//                    char c = sears[i * count + j];
//                    subs[j] = c;
//                }
//            }
//            int l = maxStudents(s, 3, seatsColSize);
//            NSLog(@"%d",l);
//        }
//        
//        {
//          //[["#","#","#",".","#"],[".",".","#",".","."],["#",".","#",".","#"],[".",".",".",".","."],[".",".",".","#","."]]
//            char sears[] = {'#','#','#','.','#','.','.','#','.','.','#','.','#','.','#','.','.','.','.','.','.','.','.','#','.'};
//            int seatsColSize[] = {5,5,5,5,5};
//            char **s = malloc(sizeof(char *) * 5);
//            for (int i = 0; i < 5; i++) {
//                int count = seatsColSize[i];
//                char *subs = malloc(sizeof(char) * count);
//                s[i] = subs;
//                for (int j = 0; j < count; j++) {
//                    char c = sears[i * count + j];
//                    subs[j] = c;
//                }
//            }
//            {
//                double startTime = CFAbsoluteTimeGetCurrent();
//                int l = maxStudents2(s, 5, seatsColSize);
//                printf("\n");
//                NSLog(@"%d",l);
//                double endTime = CFAbsoluteTimeGetCurrent();
//                double time = endTime - startTime;
//                NSLog(@"2==%f",time);
//            }
//
//            {
//                double startTime = CFAbsoluteTimeGetCurrent();
//                int l = maxStudents(s, 5, seatsColSize);
//                NSLog(@"%d",l);
//                double endTime = CFAbsoluteTimeGetCurrent();
//                double time = endTime - startTime;
//                NSLog(@"1==%f",time);
//            }
//        }
//        
//        {
//    //        [[".","#","#",".","#","#","#"],[".","#","#",".",".",".","."],["#","#",".",".","#","#","#"],[".",".",".","#","#",".","."],[".","#","#",".",".",".","#"],[".",".",".",".",".","#","."]]
//
//            char sears[] = {'.','#','#','.','#','#','#','.','#','#','.','.','.','.','#','#','.','.','#','#','#','.','.','.','#','#','.','.','.','#','#','.','.','.','#','.','.','.','.','.','#','.'};
//            int seatsColSize[] = {7,7,7,7,7,7};
//            char **s = malloc(sizeof(char *) * 6);
//            for (int i = 0; i < 6; i++) {
//                int count = seatsColSize[i];
//                char *subs = malloc(sizeof(char) * count);
//                s[i] = subs;
//                for (int j = 0; j < count; j++) {
//                    char c = sears[i * count + j];
//                    subs[j] = c;
//                }
//            }
//            {
//                double startTime = CFAbsoluteTimeGetCurrent();
//                int l = maxStudents(s, 6, seatsColSize);
//                NSLog(@"%d",l);
//                double endTime = CFAbsoluteTimeGetCurrent();
//                double time = endTime - startTime;
//                NSLog(@"1==%f",time);
//            }
//
//            double startTime = CFAbsoluteTimeGetCurrent();
//            int l = maxStudents2(s, 6, seatsColSize);
//            NSLog(@"%d",l);
//            double endTime = CFAbsoluteTimeGetCurrent();
//            double time = endTime - startTime;
//            NSLog(@"2==%f",time);
//
//
//
//        }
//        
//    }
//    Stringcode();
   
//    eightQuee();
//    StringMerge();
    struct ListNode *lp = NULL;
    struct ListNode *fp = NULL;
    for (int i = 0; i < 2; i++) {
        if(i == 0){
            struct ListNode *l = malloc(sizeof(struct ListNode));
            l->val = i + 1;
            l->next = NULL;
            lp = l;
            fp = lp;
        }else{
            struct ListNode *l = malloc(sizeof(struct ListNode));
            l->val = i + 1;
            l->next = NULL;
            lp->next = l;
            lp = lp->next;
        }
    }
    struct ListNode *ls = fp;
    lp = reverseKGroup(fp,2);
    while (1) {
        printf("%d",lp->val);
        lp = lp->next;
        if(lp == NULL){
            break;
        }
    }
    
    return 0;
}
