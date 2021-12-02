//
//  ReverseDataTable.h
//  DataStructureAndAlgorithms
//
//  Created by xiatian on 2021/12/2.
//

#ifndef ReverseDataTable_h
#define ReverseDataTable_h

#include <stdio.h>

struct Data{
    int data;
    struct Data* nextData;
};

typedef struct Data Data;

//反转单向链表
Data *reverseDataTalbe(Data *data);


#endif /* ReverseDataTable_h */
