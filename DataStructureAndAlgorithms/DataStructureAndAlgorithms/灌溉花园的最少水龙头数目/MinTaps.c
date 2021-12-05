//
//  MinTaps.c
//  DataStructureAndAlgorithms
//
//  Created by xiatian on 2021/12/5.
//

#include "MinTaps.h"
#include <mm_malloc.h>

int minTaps(int n, int* ranges, int rangesSize) {
    
    int minR = 0 - ranges[0];
    int MaxR = ranges[0];
    for (int i = 1; i < n+1; i++) {
        int iRange = ranges[i];
        int iRangeMin = i - iRange;
        int iRangeMax = i + iRange;
        if (iRangeMin <= minR) {
            minR = iRangeMin;
            MaxR = iRangeMax;
        }else if(iRangeMin <= MaxR && iRangeMax >= MaxR) {
            MaxR = iRangeMax;
        }
        
    }
    if (minR > 0 || MaxR < n) {
        return -1;
    }
    
    int count = n + 1;
    
    for (int i = 0; i < n + 1; i++) {
        int iRange = ranges[i];
        if (iRange == 0) {
            count--;
            ranges[i] = -1;
        }
    }
    
    for (int i = 0; i < n + 1; i++) {
        int iRange = ranges[i];
        if (iRange == -1) {
            continue;
        }
       
        int iRangeMin = i - iRange;
        int iRangeMax = i + iRange;
        for (int j = i + 1; j < n + 1; j++) {
            int jRange = ranges[j];
            if (jRange == -1) {
                continue;
            }
            
            int jRangeMin = j - jRange;
            int jRangeMax = j + jRange;
            if ((iRangeMin <= jRangeMin && iRangeMax >= jRangeMax) ||
                (iRangeMin <= jRangeMin && iRangeMax >= n)
                ) {
                count--;
                ranges[j] = -1;
                continue;
            }else if((jRangeMin <= iRangeMin && jRangeMax>= iRangeMax) ||
                     (jRangeMax >= iRangeMax && jRangeMin <= 0)
                     ) {
                count--;
                ranges[i] = -1;
                for (int l = i; l < j; l++) {
                    if (ranges[l] != -1) {
                        ranges[l] = -1;
                        count--;
                    }
                }
                break;
            }
            
        }
        
        
    }
    
    for (int i = 0; i < n + 1; i++) {
        int iRange = ranges[i];
        if (iRange == -1) {
            continue;
        }
        
        int iRangeMin = i - iRange;
        int iRangeMax = i + iRange;
        for (int j = i + 1; j < n + 1; j++) {
            int jRange = ranges[j];
            if (jRange == -1) {
                continue;
            }
            
            int jRangeMin = j - jRange;
            int jRangeMax = j + jRange;
            
            for (int k = j + 1; k < n + 1; k++) {
                int kRange = ranges[k];
                if (kRange == -1) {
                    continue;
                }
               
                int kRangeMin = k - kRange;
                int kRangeMax = k + kRange;
                
                if (kRangeMin <= iRangeMax &&
                    kRangeMax >= iRangeMax &&
                    kRangeMax >= jRangeMax &&
                    jRangeMin >= iRangeMin &&
                    jRangeMax <= kRangeMax
                    ) {
                    for (int l = j; l < k; l++) {
                        if (ranges[l] != -1) {
                            ranges[l] = -1;
                            count--;
                        }
                    }
                    
                    break;;
                }
                break;;

            }
        }
    }
    
    
    return count;
}


int minTaps2(int n, int* ranges, int rangesSize) {
    int *p = (int *)malloc(sizeof(int)*(n + 1) * 2);
    
    int count = 0;
    for (int i = 0; i < n + 1; i++) {
        int iRange = ranges[i];
        if (iRange != 0) {
            p[count] = i - iRange;
            if (p[count] < 0) {
                p[count] = 0;
            }
            p[count + 1] = i + iRange;
            if (p[count  + 1] > n) {
                p[count + 1] = n;
            }
            count += 2;
        }
    }
//    int s = 0;
//    for (int i = 0; i < count; i += 2) {
//        int irangMin = p[i];
//        int irangMax = p[i + 1];
//        for (int j = i + 1; j < count; j += 2) {
//            int jrangMin = p[j];
//            int jrangMax = p[j + 1];
//            if (jrangMin < irangMin) {
//                p[i] = jrangMin;
//                p[i + 1] = jrangMax;
//                p[j] = irangMin;
//                p[j + 1] = irangMax;
//            }
//            else if(jrangMin == irangMin &&
//                     jrangMax > irangMax) {
//                p[i] = jrangMin;
//                p[i + 1] = jrangMax;
//                p[j] = irangMin;
//                p[j + 1] = irangMax;
//            }
//        }
//    }
    int m = 0;
    int start = 0;
    int cStart = 0;
    int end = 0;
    int counts = 0;
    while (m < n) {
        for (int i = 0; i < count; i += 2) {
            int irangMin = p[i];
            int irangMax = p[i + 1];
//            s++;
            if (irangMin <= start) {
                if (irangMax > end) {
                    end = irangMax;
                    cStart = irangMin;
                    
                }
            }
        }
        if (end == cStart) {
            return -1;
        }
        if (m == end) {
            return -1;
        }
        m = end;
        start = end;
        counts++;
    }
    
    free(p);
    
    return  counts;
}
