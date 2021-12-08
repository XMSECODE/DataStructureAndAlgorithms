//
//  TestUnit.m
//  TestUnit
//
//  Created by feifan5号 on 2021/12/1.
//

#import <XCTest/XCTest.h>
#import "GetMaxLenthNotTheSameCharSubString.h"
#import "ReverseDataTable.h"
#import "CharIsUnique.h"
#import "IsPalindrome.h"
#include "MinTaps.h"
#include "SumNumbers.h"


@interface TestUnit : XCTestCase

@end

@implementation TestUnit

- (void)setUp {
    // Put setup code here. This method is called before the invocation of each test method in the class.
    NSLog(@"setUp");
}

- (void)tearDown {
    // Put teardown code here. This method is called after the invocation of each test method in the class.

}

///求字符串中不包含重复字符的最大子字符串长度
- (void)testDemo1 {
    // This is an example of a functional test case.
    // Use XCTAssert and related functions to verify your tests produce the correct results.
    
    char chars[5][100] = {"","aaa","abcabc","abba","abcabcabcabcabcabcabcabc"};
    int resultLArray[] = {0,1,3,2,3};
    for (int i = 0; i < 5; i++) {
        char *testChars = chars[i];
        int resultL = resultLArray[i];
        XCTAssertEqual(maxLenthInTheString(testChars), resultL);
    }
    

}
///反转单向链表
- (void)testDemo2 {
    Data testData;
    int a = random() % 100;
    testData.data = a;
    testData.nextData = NULL;
    
    Data *resultData = reverseDataTalbe(&testData);
    
    XCTAssertEqual(resultData->data, a);
    
    XCTAssertEqual(reverseDataTalbe(NULL), NULL);

    
    Data *firstData;
    Data *olddata = NULL;
    int datas[10];
    for (int i = 0; i < 10; i++) {
        Data *newData = malloc(sizeof(Data));
        datas[i] = random() % 100;
        newData->data = datas[i];
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
    int i = 0;
    while (olddata != NULL) {
        XCTAssertEqual(olddata->data, datas[i]);
        olddata = olddata->nextData;
        i++;
    }
    
    olddata = reverseDataTalbe(firstData);
    i = 0;
    while (olddata != NULL) {
        XCTAssertEqual(olddata->data, datas[9 - i]);
        olddata = olddata->nextData;
        i++;
    }
}

///字符是否唯一
- (void)testDemo3 {
    int result = isUnique("leetcode");
    XCTAssertEqual(result, 0);
    result = isUnique("abc");
    XCTAssertEqual(result, 1);
    result = isUnique("abcefghijklmnopqrstuvwxyz");
    XCTAssertEqual(result, 1);
    result = isUnique("abcefghijklmnopqrstuvwxyzz");
    XCTAssertEqual(result, 0);
}

///验证回文串
- (void)testDemo4 {
    int result = isPalindrome("A man, a plan, a canal: Panama");
    XCTAssertEqual(result, 1);
    result = isPalindrome("race a car");
    XCTAssertEqual(result, 0);
    result = isPalindrome("0P");
    XCTAssertEqual(result, 0);

}

- (void)testDemo5 {
    {
        int range[6] = {3,4,1,1,0,0};
        int result1 = minTaps(5, range, 0);
        int result2 = minTaps2(5, range, 0);
        XCTAssertEqual(result1, 1);
        XCTAssertEqual(result2, 1);
    }
    {
        int range[4] = {0,0,0,0};
        int result1 = minTaps(3, range, 0);
        int result2 = minTaps2(3, range, 0);
        XCTAssertEqual(result1, -1);
        XCTAssertEqual(result2, -1);
    }
    {
        int range[8] = {1,2,1,0,2,1,0,1};
        int result1 = minTaps(7, range, 0);
        int result2 = minTaps2(7, range, 0);
        XCTAssertEqual(result1, 3);
        XCTAssertEqual(result2, 3);
    }
    {
        int range[9] = {4,0,0,0,0,0,0,0,4};
        int result1 = minTaps(8, range, 0);
        int result2 = minTaps2(8, range, 0);
        XCTAssertEqual(result1, 2);
        XCTAssertEqual(result2, 2);
    }
    {
        int range[9] = {4,0,0,0,4,0,0,0,4};
        int result1 = minTaps(8, range, 0);
        int result2 = minTaps2(8, range, 0);
        XCTAssertEqual(result1, 1);
        XCTAssertEqual(result2, 1);
    }
    
}

///求根节点到叶节点数字之和
- (void)testDemo6 {
    
    struct TreeNode *rootNode = createTreeNode(1);
    rootNode->left = createTreeNode(2);
    rootNode->right = createTreeNode(3);
    int result = sumNumbers(rootNode);
    freeNode(rootNode);
    XCTAssertEqual(result, 25);
    
    rootNode = createTreeNode(4);
    rootNode->right = createTreeNode(0);
    struct TreeNode *rootLeftNode = createTreeNode(9);
    rootNode->left = rootLeftNode;
    rootLeftNode->left = createTreeNode(5);
    rootLeftNode->right = createTreeNode(1);
    result = sumNumbers(rootNode);
    freeNode(rootNode);
    XCTAssertEqual(result, 1026);
}


@end
