//
//  ReverseDataTable.c
//  DataStructureAndAlgorithms
//
//  Created by xiatian on 2021/12/2.
//

#include "ReverseDataTable.h"

Data *reverseDataTalbe(Data *data) {
   
    if (data == NULL) {
        return NULL;
    }
    if (data->nextData == NULL) {
        return data;
    }
    Data *cData = data;
    Data *preData = NULL;
    Data *nextData = data->nextData;
    
    while (cData != NULL) {
        cData->nextData = preData;
        preData = cData;
        cData = nextData;
        if (cData != NULL) {        
            nextData = cData->nextData;
        }
    }
    
    return preData;
}
