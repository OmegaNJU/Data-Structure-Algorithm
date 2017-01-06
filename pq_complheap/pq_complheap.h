//
//  pq_complheap.h
//  Data Structure Algorithm
//
//  Created by BB8 on 16/12/24.
//  Copyright © 2016年 BB8. All rights reserved.
//

#ifndef pq_complheap_h
#define pq_complheap_h

#include "../vector/vector.h" //借助多重继承机制，基于向量
#include "../pq/pq.h" //按照优先级队列ADT实现的

template <typename T> class PQ_ComplHeap : public PQ<T>, public Vector<T> { //完全二叉堆
/*DSA*/friend class UniPrint; //演示输出使用，否则不必设置友类
protected:
Rank percolateDown(Rank n, Rank i); //下滤
Rank percolateUp(Rank i); //上滤
void heapify(Rank n); //Floyd建堆算法
public:
PQ_ComplHeap() { } //默认构造
PQ_ComplHeap(T* A, Rank n) { copyFrom(A, 0, n); heapify(n); } //批量构造
void insert(T); //按照比较器确定的优先级次序，插入词条
T getMax(); //读取优先级最高的词条
T delMax(); //删除优先级最高的词条
}; //PQ_ComplHeap

/*DSA*/#include "pq_complheap_macro.h"

#include "pq_complheap_implementation.h"

#endif /* pq_complheap_h */
