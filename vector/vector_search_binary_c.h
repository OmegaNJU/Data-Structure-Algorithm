//
//  vector_search_binary_c.h
//  Data Structure Algorithm
//
//  Created by BB8 on 16/12/23.
//  Copyright © 2016年 BB8. All rights reserved.
//

#pragma once

// 二分查找算法（版本C）：在有序向量的区间[lo, hi)内查找元素e，0 <= lo <= hi <= _size
template <typename T> static Rank binSearch(T * A, T const & e, Rank lo, Rank hi) {
    printf("BIN search(version C)\n");
    while (lo < hi) { //每步迭代仅需做一次比较判断，有两个分支
        for (int i = 0; i < lo; i++) printf("     ");
        if (lo >= 0) for (int i = lo; i < hi; i++) printf("....^"); printf("\n");
        Rank mi = (lo + hi) >> 1; //以中点为轴点
        (e < A[mi]) ? hi = mi : lo = mi + 1; //经比较后确定深入[lo, mi)或(mi, hi)
    } //成功查找不能提前终止
    for (int i = 0; i < lo - 1; i++) printf("     ");
    if (lo > 0) printf("....|\n"); else printf("<<<<|\n");
    return --lo; //循环结束时，lo为大于e的元素的最小秩，故lo - 1即不大于e的元素的最大秩
} //有多个命中元素时，总能保证返回秩最大者；查找失败时，能够返回失败的位置
