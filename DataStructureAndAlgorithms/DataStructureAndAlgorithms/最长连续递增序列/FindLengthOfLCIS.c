//
//  FindLengthOfLCIS.c
//  DataStructureAndAlgorithms
//
//  Created by xiatian on 2022/1/4.
//

#include "FindLengthOfLCIS.h"

int findLengthOfLCIS(int* nums, int numsSize){
    if (numsSize == 1) {
        return numsSize;
    }
    int max = 0;
    int temL = 1;
    for (int i = 1; i < numsSize; i++) {
        int numpre = nums[i - 1];
        int num = nums[i];
        if (numpre >= num) {
            if (max < temL) {
                max = temL;
            }
            temL = 1;
        }else{
            temL++;
        }
    }
    if (max < temL) {
        max = temL;
    }
    return max;
}
