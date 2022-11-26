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
    
    int size = seatsColSize[0];
    int *result = malloc(sizeof(int) * seatsSize * size);
    for (int i = 0; i < seatsSize * size; i++) {
        result[i] = 0;
    }
//    printf("\n");
    int maxStudentsCount = 0;
    for (int i = 0; i < seatsSize ; i++) {
        char *cs = seats[i];
        for (int j = 0; j < size; j++) {
//            printf("%c ",cs[j]);
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
                    int use = result[i * size + j];
                    result[i * size + j] = use + 1;
                }
            }
            if (nextIndex < size) {
                char nexc = cs[nextIndex];
                if (nexc == '.') {
                    int use = result[i * size + j];
                    result[i * size + j] = use + 1;
                }
            }
            
            if (i > 0) {
                int nextIndex = j + 1;
                char *precs = seats[i - 1];
                if (preIndex >= 0) {
                    char prec = precs[preIndex];
                    if (prec == '.') {
                        int use = result[i * size + j];
                        result[i * size + j] = use + 1;
                    }
                }
                if (nextIndex < size) {
                    char nexc = precs[nextIndex];
                    if (nexc == '.') {
                        int use = result[i * size + j];
                        result[i * size + j] = use + 1;
                    }
                }
            }
            if (i < seatsSize - 1) {
                int nextIndex = j + 1;
                char *precs = seats[i + 1];
                if (preIndex >= 0) {
                    char prec = precs[preIndex];
                    if (prec == '.') {
                        int use = result[i * size + j];
                        result[i * size + j] = use + 1;
                    }
                }
                if (nextIndex < size) {
                    char nexc = precs[nextIndex];
                    if (nexc == '.') {
                        int use = result[i * size + j];
                        result[i * size + j] = use + 1;
                    }
                }
            }
        }
//        printf("\n");
    }

    int maxIndex = -1;
    int max = 0;
    int count = 0;
    for (int i = 0; i < seatsSize * size; i++) {
//        printf("%d ",result[i]);
        
        int t = result[i];
        if (t > 0) {
            count++;
            if (t > max) {
                max = t;
                maxIndex = i;
            }
        }
    }
//    for (int i = 0; i < seatsSize; i++) {
//        char *cs = seats[i];
//        for (int j = 0; j < size; j++) {
//            printf("%c ",cs[j]);
//        }
//        printf("\n");
//    }
//    printf("===========\n");
    if (maxIndex >= 0 && max > 0) {


        int i = maxIndex / size;
        int j = maxIndex % size;
        char *cs = seats[i];
        cs[j] = '#';
        free(result);
        int max = maxStudents(seats, seatsSize, seatsColSize);
        cs[j] = '.';
        
        return max;
    }
    
    
   
    
    
//    printf("\n");
    
//    for (int i = 0; i < seatsSize; i++) {
//        char *cs = seats[i];
//        for (int j = 0; j < size; j++) {
//            printf("%c ",cs[j]);
//        }
//        printf("\n");
//    }
    
    return maxStudentsCount;
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
