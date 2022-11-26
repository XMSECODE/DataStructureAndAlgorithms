//
//  shootingmatch.c
//  DataStructureAndAlgorithms
//
//  Created by feifan5号 on 2022/10/17.
//

#include "shootingmatch.h"
#include <mm_malloc.h>

int *getResultArray(int count,int *idArray,int *scoreArray,int *resultCount) {
    int *array = malloc(sizeof(int)*400);
    int *resultArray = malloc(sizeof(int) * 100);
    for (int i = 0; i < 100; i++) {
        resultArray[i] = -1;
        array[i * 4] = -1;
        array[i * 4 + 1] = -1;
        array[i * 4 + 2] = -1;
        array[i * 4 + 3] = -1;
    }
    
    for (int i = 0; i < count; i++) {
        int ids = idArray[i];
        int score = scoreArray[i];
        
        if (array[ids *4 + 2] != -1) {
            //已经存在三位,需要替换
            if (array[ids*4] < score) {
                array[ids*4] = score;
                array[ids *4 + 3] = array[ids *4] + array[ids *4 + 1] + array[ids *4 + 2];
            }else if (array[ids*4 + 1] < score) {
                array[ids *4 + 1] = score;
                array[ids *4 + 3] = array[ids *4] + array[ids *4 + 1] + array[ids *4 + 2];
            }else if (array[ids*4 + 2] < score) {
                array[ids *4 + 2] = score;
                array[ids *4 + 3] = array[ids *4] + array[ids *4 + 1] + array[ids *4 + 2];
            }
        }else if (array[ids *4 + 1] != -1){
            array[ids *4 + 2] = score;
            array[ids *4 + 3] = array[ids *4] + array[ids *4 + 1] + array[ids *4 + 2];
        }else if (array[ids *4] != -1){
            array[ids *4 + 1] = score;
        }else {
            array[ids *4] = score;
        }
    }
    
    for (int i = 0; i < 100; i++) {
        int score = array[i * 4 + 3];
        if (score < 0) {
            continue;
        }
        for (int j = 0; j < 100; j++) {
            int ids = resultArray[j];
            if (ids == -1) {
                *resultCount = *resultCount + 1;
                resultArray[j] = i;
                break;
            }
            int idsScore = array[ids * 4 + 3];
            if (score >idsScore) {
                *resultCount = *resultCount + 1;
                //新id成绩大则排名向后
                int tem = 0;
                int insert = i;
                for (int k = j; k < 100; k++) {
                    tem = resultArray[k];
                    resultArray[k] = insert;
                    insert = tem;
                    if (tem == -1) {
                        break;
                    }
                }
                break;
            }else if(score == idsScore){
                if (i > ids) {
                    *resultCount = *resultCount + 1;
                    //新id成绩大则排名向后
                    int tem = 0;
                    int insert = i;
                    for (int k = j; k < 100; k++) {
                        tem = resultArray[k];
                        resultArray[k] = insert;
                        insert = tem;
                        if (tem == -1) {
                            break;
                        }
                    }
                    break;
                }
            }
        }
    }
    
    free(array);
    return resultArray;
}


