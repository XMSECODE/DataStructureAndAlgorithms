//
//  MaxStudents.c
//  DataStructureAndAlgorithms
//
//  Created by xiatian on 2022/1/11.
//

#include "MaxStudents.h"
#include <mm_malloc.h>

int change(char** seats, int seatsSize, int* seatsColSize,int count);

//[["#","#","#",".","#"],[".",".","#",".","."],["#",".","#",".","#"],[".",".",".",".","."],[".",".",".","#","."]]

int maxStudents(char** seats, int seatsSize, int* seatsColSize) {
    
//    int currentSize = 0;
//    int currentResultArray = malloc(256);
//    int currentStateArray = malloc(256 * seatsColSize[0]);
//    
//    
//    int colsize = seatsColSize[0];
//    
//    for (int i = seatsSize - 1; i >= 0; i++) {
//        if(i == seatsSize - 1) {
//            //第一排计算多少种可能
//            char *cs = seats[i * colsize];
//            int restlucount = 1;
//            for (int j = 0; j < seatsColSize[i]; j++) {
//                char c = cs[j];
//                if(c == '.'){
//                    restlucount = restlucount * 2;
//                }
//            }
//            for(int i = 0;i < restlucount;i++) {
//                
//                for(int j = 0;j < colsize; j++) {
//                    
//                }
//            }
//        }
//    }
    
    
    
   
    
    
    return 0;
}


int isOk(int *array1,int *array2,int size){
    if(array2 == NULL) {
        //判断array1是否合法
        for (int i = 0; i < size - 1; i++) {
            char ci = array2[i];
            char ci1 = array2[i + 1];
            if(ci == '.' && ci1 == '.') {
                return 0;
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


int maxStudents2(char** seats, int seatsSize, int* seatsColSize) {
    
    for (int i = 0; i < 100; i++) {
        printf("%d =\n",i);
        int r = change(seats, seatsSize, seatsColSize, i);
        if (r > 0) {
            return r;
        }
    }
    
    return 0;
}

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
