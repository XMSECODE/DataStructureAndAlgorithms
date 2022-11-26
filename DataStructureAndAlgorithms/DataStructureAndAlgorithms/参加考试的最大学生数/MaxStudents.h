//
//  MaxStudents.h
//  DataStructureAndAlgorithms
//
//  Created by xiatian on 2022/1/11.
//

#ifndef MaxStudents_h
#define MaxStudents_h

#include <stdio.h>

/*
 给你一个 m * n 的矩阵 seats 表示教室中的座位分布。如果座位是坏的（不可用），就用 '#' 表示；否则，用 '.' 表示。

 学生可以看到左侧、右侧、左上、右上这四个方向上紧邻他的学生的答卷，但是看不到直接坐在他前面或者后面的学生的答卷。请你计算并返回该考场可以容纳的一起参加考试且无法作弊的最大学生人数。

 学生必须坐在状况良好的座位上。

  

 示例 1：



 输入：seats = [["#",".","#","#",".","#"],
               [".","#","#","#","#","."],
               ["#",".","#","#",".","#"]]
 输出：4
 解释：教师可以让 4 个学生坐在可用的座位上，这样他们就无法在考试中作弊。
 示例 2：

 输入：seats = [[".","#"],
               ["#","#"],
               ["#","."],
               ["#","#"],
               [".","#"]]
 输出：3
 解释：让所有学生坐在可用的座位上。
 示例 3：

 输入：seats = [["#",".",".",".","#"],
               [".","#",".","#","."],
               [".",".","#",".","."],
               [".","#",".","#","."],
               ["#",".",".",".","#"]]
 输出：10
 解释：让学生坐在第 1、3 和 5 列的可用座位上。

 来源：力扣（LeetCode）
 链接：https://leetcode-cn.com/problems/maximum-students-taking-exam
 著作权归领扣网络所有。商业转载请联系官方授权，非商业转载请注明出处。
 */

int maxStudents(char** seats, int seatsSize, int* seatsColSize);

int maxStudents2(char** seats, int seatsSize, int* seatsColSize);
#endif /* MaxStudents_h */
