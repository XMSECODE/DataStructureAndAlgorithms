//
//  TestUnit.m
//  TestUnit
//
//  Created by feifan5号 on 2021/12/1.
//

#import <XCTest/XCTest.h>
#import "GetMaxLenthNotTheSameCharSubString.h"

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
- (void)testExample1 {
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



@end
