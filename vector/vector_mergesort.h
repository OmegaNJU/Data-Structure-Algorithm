//
//  vector_mergesort.h
//  Data Structure Algorithm
//
//  Created by BB8 on 16/12/23.
//  Copyright © 2016年 BB8. All rights reserved.
//

#ifndef vector_mergesort_h
#define vector_mergesort_h

template <typename T> //向量归并排序
void Vector<T>::mergeSort(Rank lo, Rank hi) { //0 <= lo < hi <= size
    printf("\tMERGEsort [%d, %d)\n", lo , hi);
    if (hi - lo < 2) return; //单元素区间自然有序，否则...
    int mi = (lo + hi) / 2; //以中点为界
    mergeSort(lo, mi); mergeSort(mi, hi); //分别排序
    merge(lo, mi, hi); //归并
}

#endif /* vector_mergesort_h */
