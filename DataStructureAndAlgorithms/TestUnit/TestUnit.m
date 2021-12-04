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


@end
