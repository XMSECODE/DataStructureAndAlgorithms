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
    
    XCTAssertEqual(maxLenthInTheString(""), 0);
    XCTAssertEqual(maxLenthInTheString("aaa"), 1);
    XCTAssertEqual(maxLenthInTheString("abcabc"), 3);
    XCTAssertEqual(maxLenthInTheString("abba"), 2);
    XCTAssertEqual(maxLenthInTheString("abcabcabcabcabcabcabcabc"), 3);

}



@end
