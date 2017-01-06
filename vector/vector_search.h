//
//  vector_search.h
//  Data Structure Algorithm
//
//  Created by BB8 on 16/12/23.
//  Copyright © 2016年 BB8. All rights reserved.
//

#ifndef vector_search_h
#define vector_search_h

template <typename T> //在有序向量的区间[lo, hi)内，确定不大于e的最后一个节点的秩
Rank Vector<T>::search(T const & e, Rank lo, Rank hi) const { //assert: 0 <= lo < hi <= _size
    return (rand() % 2) ? //按各50%的概率随机使用二分查找或Fibonacci查找
    binSearch(_elem, e, lo, hi) : fibSearch(_elem, e, lo, hi);
}

#endif /* vector_search_h */
