//
//  vector_search_binary_a.h
//  Data Structure Algorithm
//
//  Created by BB8 on 16/12/23.
//  Copyright © 2016年 BB8. All rights reserved.
//

#ifndef vector_search_binary_a_h
#define vector_search_binary_a_h

// 二分查找算法（版本A）：在有序向量的区间[lo, hi)内查找元素e，0 <= lo <= hi <= _size
template <typename T> static Rank binSearch(T * A, T const & e, Rank lo, Rank hi) {
    printf("BIN search(version A)\n");
    while (lo < hi) { //每步迭代可能要做两次比较判断，有三个分支
        for (int i = 0; i < lo; i++) printf("     ");
        if (lo >= 0) for(int i = lo; i < hi; i++) printf("....^"); printf("\n");
        Rank mi = (lo + hi) >> 1; //以中点为轴点
        if (e < A[mi]) hi = mi; //深入前半段[lo, mi)继续查找
        else if (A[mi] < e) lo = mi + 1; //深入后半段(mi, hi)继续查找
        else return mi; //在mi处命中
        if (lo >= hi) {
            for (int i = 0; i < mi; i++) printf("     ");
            if (mi >= 0) printf("....|\n");
            else printf("<<<<|\n");
        }
    } //成功查找可以提前终止
    return -1; //查找失败
} //有多个命中元素时，不能保证返回秩最大者；查找失败时，简单地返回-1，而不能指示失败的位置

#endif /* vector_search_binary_a_h */
