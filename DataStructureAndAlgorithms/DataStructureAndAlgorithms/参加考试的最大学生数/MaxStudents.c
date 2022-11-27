//
//  MaxStudents.c
//  DataStructureAndAlgorithms
//
//  Created by xiatian on 2022/1/11.
//

#include "MaxStudents.h"
#include <mm_malloc.h>
#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <math.h>
#include <limits.h>

int change(char** seats, int seatsSize, int* seatsColSize,int count);

//[["#","#","#",".","#"],[".",".","#",".","."],["#",".","#",".","#"],[".",".",".",".","."],[".",".",".","#","."]]



#define MMAX(a, b)        ((a) > (b)? (a) : (b))
#define MAX_LEN 8


int flag[MAX_LEN][MAX_LEN];
int row, col;

//后面的个数取决于当前进入时前面的pattern
// |      p p p p p |
// |p p p p x       |
int memo[MAX_LEN][MAX_LEN][512];

bool check(char **seats, int y, int x) {
/*
    for(int i = 0; i < row; i++) {
        for(int j = 0; j < col; j++) {
            printf("%d  ", flag[i][j]);
        }
        printf("\n");
    }
*/
    if( flag[y][x] == 2 ||
        (x > 0 && flag[y][x - 1] == 1) ||
        (x > 0 && y > 0 && flag[y - 1][x - 1] == 1) ||
        (x < col - 1 && y > 0 && flag[y - 1][x + 1] == 1)
        ) {
        //printf("[%d, %d], false\n", y, x);
        return false;
    } else {
        //printf("[%d, %d], true\n", y, x);
        return true;
    }
}

int get_pattern(char **seats, int y, int x) {
    int pattern = 0;
    for(int i = 0; i < x; i++) {
        if(flag[y][i] == 1) {
            pattern |= 1 << i;
        }
    }

    if(y == 0) {
        goto DONE;
    }

    for(int i = x; i < col; i++) {
        if(flag[y - 1][i] == 1) {
            pattern |= 1 << i;
        }
    }
    
    if(x > 0 && flag[y - 1][x - 1] == 1) {
        pattern |= 1 << col;
    }

DONE:

    for(int i = 0; i < row; i++) {
        for(int j = 0; j < col; j++) {
            printf("%d  ", flag[i][j]);
        }
        printf("\n");
    }
    printf("\n");

    //printf("pattern[%d, %d] = %d\n", y, x, pattern);

    return pattern;
}

int helper(char **seats, int y, int x) {
    if(y == row - 1 && x == col - 1) {
        int ret = check(seats, y, x) == true? 1 : 0;
        //printf("----max = %d\n", max);
        return ret;
    }

    //加速
    int p = get_pattern(seats, y, x);
    if(memo[y][x][p] != 0) {
        //printf("[%d, %d](%d)\n", y, x, memo[y][x][p] - 1);
        return memo[y][x][p] - 1;
    }

    int ret = 0;
    int ny = x + 1 == col? y + 1 : y;
    int nx = x + 1 == col? 0 : x + 1;

    if(check(seats, y, x) == true) {
        //占用
        flag[y][x] = 1;
        ret = helper(seats, ny, nx) + 1;
        flag[y][x] = 0;
    }

    //不占用
    ret = MMAX(ret, helper(seats, ny, nx));

    memo[y][x][p] = ret + 1;
    
    return ret;
}



int maxStudents(char** seats, int seatsSize, int* seatsColSize) {
    row = seatsSize;
    col = seatsColSize[0];

    for(int i = 0; i < row; i++) {
        for(int j = 0; j < col; j++) {
            flag[i][j] = seats[i][j] == '#'? 2 : 0;

            for(int k = 0; k < 512; k++) {
                memo[i][j][k] = 0;
            }
        }
    }

    int ret = helper(seats, 0, 0);

    return ret;
}

int maxStudents2(char** seats, int seatsSize, int* seatsColSize) {
    int col = seatsColSize[0];
    
    int maxResult = 0;
    int temResult = 0;
    int memo[8][8][2];
    for (int i = 0; i < 8; i++) {
        for (int j = 0; j < 8; j++) {
            for (int k = 0; k < 2; k++) {
                memo[i][j][k] = 0;
            }
        }
    }
    
    
    for (int x = 0; x < col; x++) {
        for (int y = seatsSize - 1;y > 0; y--) {
            char cxy = seats[y][x];
            if(cxy == '#'){
                continue;
            }
            memo[y][x][0] = temResult;
            if(temResult > maxResult) {
                maxResult = temResult;
            }
            if(x > 0){
                if(y > 0) {
                    if(x < col - 1){
                        //不是最后一行
                        char cxy1 = seats[y][x - 1];
                        char cxy2 = seats[y - 1][x - 1];
                        char cxy3 = seats[y - 1][x + 1];
                        if((cxy1 == '1' && cxy2 == '1') ||
                           (cxy3 == '1' && cxy2 == '1') ||
                           (cxy1 == '1' && cxy3 == '1')){
                            //存在两个就是这个设置为0
                            seats[y][x] = '0';
                        }else if(cxy1 != '1' && cxy2 != '1' && cxy3 != '1'){
                            seats[y][x] = '1';
                            temResult++;
                            if(maxResult < temResult){
                                maxResult = temResult;
                            }
                        }else {
                            seats[y][x] = '0';
                        }
                    }else{
                        char cxy1 = seats[y][x - 1];
                        char cxy2 = seats[y - 1][x - 1];
                        if((cxy1 == '1' && cxy2 == '1')){
                            //存在两个就是这个设置为0
                            seats[y][x] = '0';
                        }else if(cxy1 != '1' && cxy2 != '1'){
                            seats[y][x] = '1';
                            temResult++;
                            if(maxResult < temResult){
                                maxResult = temResult;
                            }
                        }else {
                            seats[y][x] = '0';
                        }
                    }
                }else{
                    
                }

                
                
            }
            
            
            
        }
    }
    
    
    return 0;
}


int isOk(int *array1,int *array2,int size){
    if(array2 == NULL) {
        //判断array1是否合法
        for (int i = 0; i < size - 1; i++) {
            char ci = array2[i];
            char ci1 = array2[i + 1];
            if(ci == '.' && ci1 == '.') {
                return -1;
            }
        }
    }else {
        
    }
    return 1;
}


int maxstudents3(char** seats, int seatsSize, int* seatsColSize) {
    
    int size = seatsColSize[0];

    int maxStudentsCount = 0;
    for (int i = 0; i < seatsSize ; i++) {
        char *cs = seats[i];
        for (int j = 0; j < size; j++) {
            char currentC = cs[j];
            if (currentC == '#') {
                continue;
            }else{
                maxStudentsCount++;
            }
            int preIndex = j - 1;
            int nextIndex = j + 1;
            if (preIndex >= 0) {
                char prec = cs[preIndex];
                if (prec == '.') {
                    return -1;
                }
            }
            if (nextIndex < size) {
                char nexc = cs[nextIndex];
                if (nexc == '.') {
                    return -1;
                }
            }
            
            if (i > 0) {
                int nextIndex = j + 1;
                char *precs = seats[i - 1];
                if (preIndex >= 0) {
                    char prec = precs[preIndex];
                    if (prec == '.') {
                        return -1;
                    }
                }
                if (nextIndex < size) {
                    char nexc = precs[nextIndex];
                    if (nexc == '.') {
                        return -1;
                    }
                }
            }
            if (i < seatsSize - 1) {
                int nextIndex = j + 1;
                char *precs = seats[i + 1];
                if (preIndex >= 0) {
                    char prec = precs[preIndex];
                    if (prec == '.') {
                        return -1;
                    }
                }
                if (nextIndex < size) {
                    char nexc = precs[nextIndex];
                    if (nexc == '.') {
                        return -1;
                    }
                }
            }
        }
//        printf("\n");
    }

    
//    for (int i = 0; i < seatsSize; i++) {
//        char *cs = seats[i];
//        for (int j = 0; j < size; j++) {
//            printf("%c ",cs[j]);
//        }
//        printf("\n");
//    }
//    printf("=======\n");
    return maxStudentsCount;;
    
    
    
}


//int maxStudents2(char** seats, int seatsSize, int* seatsColSize) {
//    
//    for (int i = 0; i < 100; i++) {
//        printf("%d =\n",i);
//        int r = change(seats, seatsSize, seatsColSize, i);
//        if (r > 0) {
//            return r;
//        }
//    }
//    
//    return 0;
//}

int change(char** seats, int seatsSize, int* seatsColSize,int count){
    if (count == 0) {
        int max1 = maxstudents3(seats, seatsSize, seatsColSize);
        return max1;
    }
    int max = -1;
    for (int i = 0; i < seatsSize; i++) {
        char *cs = seats[i];
        int size = seatsColSize[i];
        for (int j = 0; j < size; j++) {
//            printf("%d %d\n",i,j);
            if (cs[j] == '.') {
                if (count > 0) {
                    cs[j] = '#';
                    int max1 = change(seats, seatsSize, seatsColSize,count - 1);
                    cs[j] = '.';
                    if (max1 > max && max1 > -1) {
                        max = max1;
                        return max;
                    }
                }else{
                    int max1 = maxstudents3(seats, seatsSize, seatsColSize);
                    if (max1 > max && max1 > -1) {
                        max = max1;
                        return max;
                    }
                }
            }
        }
    }
    return max;
}
