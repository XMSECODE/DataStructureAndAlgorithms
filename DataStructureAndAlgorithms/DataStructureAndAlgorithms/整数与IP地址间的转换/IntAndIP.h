//
//  IntAndIP.h
//  DataStructureAndAlgorithms
//
//  Created by feifan5号 on 2022/11/11.
//

#ifndef IntAndIP_h
#define IntAndIP_h


/*
 
 原理：ip地址的每段可以看成是一个0-255的整数，把每段拆分成一个二进制形式组合起来，然后把这个二进制数转变成
 一个长整数。
 举例：一个ip地址为10.0.3.193
 每段数字             相对应的二进制数
 10                   00001010
 0                    00000000
 3                    00000011
 193                  11000001

 组合起来即为：00001010 00000000 00000011 11000001,转换为10进制数就是：167773121，即该IP地址转换后的数字就是它了。

 数据范围：保证输入的是合法的 IP 序列
 
 */

#include <stdio.h>

void ipToInt(void);

#endif /* IntAndIP_h */
