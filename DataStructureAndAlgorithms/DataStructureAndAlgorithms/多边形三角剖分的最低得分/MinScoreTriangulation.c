//
//  MinScoreTriangulation.c
//  DataStructureAndAlgorithms
//
//  Created by xiatian on 2021/12/9.
//

#include "MinScoreTriangulation.h"
#include <mm_malloc.h>


int minScoreTriangulation(int* values, int valuesSize){
    if (valuesSize < 3) {
        return 0;
    }
    int sum = 0;
    int result = 0;
    for (int i = 0; i < valuesSize; i++) {
        int value1 = values[i];
        
        int value2 = 0;
        int value3 = 0;
        
        if (i + 1 >= valuesSize) {
            value2 = values[i + 1 - valuesSize];
        }else {
            value2 = values[i + 1];
        }
        if (i + 2 >= valuesSize) {
            value3 = values[i + 2 - valuesSize];
        }else {
            value3 = values[i + 2];
        }
        
        sum += value1 * value2 * value3;
        int *subValues = malloc(sizeof(int) * (valuesSize - 1));
        if (valuesSize > 3) {
            for (int j = 0; j < valuesSize - 1; j++) {
                if (i + 1 == valuesSize) {
                    subValues[j] = values[1 + j];
                }else {
                    if (j >= i + 1) {
                        if (1 + j >= valuesSize) {
                            subValues[j] = values[1 + j - valuesSize];
                        }else {
                            subValues[j] = values[1 + j];
                        }
                    }else {
                        subValues[j] = values[j];
                    }
                }
                
                
            }
            sum += minScoreTriangulation(subValues, valuesSize - 1);
        }
        
        free(subValues);

        if (result > sum || result == 0) {
            result = sum;
        }
        sum = 0;
    }
    return result;
}
