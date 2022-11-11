//
//  IntAndIP.c
//  DataStructureAndAlgorithms
//
//  Created by feifan5号 on 2022/11/11.
//

#include "IntAndIP.h"

void ipToInt(void) {
    unsigned int a, b,c,d,e;
    scanf("%d.%d.%d.%d\n%d", &a, &b,&c,&d,&e);
    a = a << 8;
    a = a | b;
    a = a << 8;
    a = a | c;
    a = a << 8;
    a = a | d;
    printf("%u\n",a);
    
    d = (e << 24) >> 24;
    c = (e << 16) >> 24;
    b = (e << 8) >> 24;
    a = e >> 24;
  
    printf("%u.%u.%u.%u\n",a,b,c,d);
    
    
    
        
        
}
