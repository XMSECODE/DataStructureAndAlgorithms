//
//  Password.h
//  DataStructureAndAlgorithms
//
//  Created by feifan5号 on 2022/10/20.
//

#ifndef Password_h
#define Password_h

#include <stdio.h>

/*
 密码要求:

 1.长度超过8位

 2.包括大小写字母.数字.其它符号,以上四种至少三种

 3.不能有长度大于2的包含公共元素的子串重复 （注：其他符号不含空格或换行）

 数据范围：输入的字符串长度满足 1 \le n \le 100 \1≤n≤100
 输入描述：
 一组字符串。

 输出描述：
 如果符合要求输出：OK，否则输出NG
 */

void isPassword(void);

#endif /* Password_h */
