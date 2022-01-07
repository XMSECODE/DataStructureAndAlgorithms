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
    int *resultArray = malloc(sizeof(int) * (valuesSize * valuesSize));
    
    for (int i = 0; i < valuesSize; i++) {
        for (int j = 0; j < valuesSize; j++) {
            resultArray[i * valuesSize + j] = 0;
        }
    }

    for (int j = 0; j < valuesSize; j++) {
        for (int i = j-1; i >= 0; i--) {
            if (j - i <= 1) {
//                printf("%d %d t\n",i,j);
                resultArray[i * valuesSize + j] = 0;
            }else{
                for (int k = i + 1; k < j; k++) {
                    int temResult = resultArray[i*valuesSize + k] + resultArray[k * valuesSize + j] + values[i] * values[j] * values[k];
//                    printf("%d  %d  %d  %d\n",i,j,k,temResult);
                    if (resultArray[i * valuesSize + j] > temResult ||
                        resultArray[i * valuesSize + j] == 0) {
                        resultArray[i * valuesSize + j] = temResult;
                    }
                }
            }
        }
    }
  
    return resultArray[valuesSize - 1];
   
}

