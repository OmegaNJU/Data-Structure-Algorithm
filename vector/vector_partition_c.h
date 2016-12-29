//
//  vector_partition_c.h
//  Data Structure Algorithm
//
//  Created by BB8 on 16/12/23.
//  Copyright © 2016年 BB8. All rights reserved.
//

#pragma once

template <typename T> //轴点构造算法：通过调整元素位置构造区间[lo, hi]的轴点，并返回其秩
Rank Vector<T>::partition(Rank lo, Rank hi) { //版本C
    std::swap(_elem[lo], _elem[lo + rand() % (hi - lo + 1)]); //任选一个元素与首元素交换
    T pivot = _elem[lo]; //以首元素为候选轴点――经以上交换，等效于随机选取
    int mi = lo;
    //++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
    //   [ ---- < [lo] ----- ] [ ----- [lo] <= --- ] [ ----- unknown ----- ]
    // X x . . . . . . . . . x . . . . . . . . . . . x . . . . . . . . . . x
    // |                     |                       |                     |
    // lo (pivot)            mi                      k                     hi
    //++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
    for (int k = lo + 1; k <= hi; k++) //自左向右扫描
        if (_elem[k] < pivot) //若当前元素_elem[k]小于pivot，则
            std::swap(_elem[++mi], _elem[k]); //将_elem[k]交换至原mi之后，使L子序列向右扩展
    //++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
    //   [ --------- < [lo] ---------- ] [ ----------- [lo] <= ----------- ]
    // X x . . . . . . . . . . . . . . x . . . . . . . . . . . . . . . . . x
    // |                               |                                   |
    // lo                              mi                                  hi
    //++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
    std::swap(_elem[lo], _elem[mi]); //候选轴点归位
    return mi; //返回轴点的秩
}
