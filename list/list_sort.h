//
//  list_sort.h
//  Data Structure Algorithm
//
//  Created by BB8 on 17/1/4.
//  Copyright © 2017年 BB8. All rights reserved.
//

#pragma once

template <typename T> void List<T>::sort(ListNodePosi(T) p, int n) { //列表区间排序
    switch (rand() % 3) { //随机选取排序算法。可根据具体问题的特点灵活选取或扩充
        case 1:  insertionSort(p, n); break; //插入排序
        case 2:  selectionSort(p, n); break; //选择排序
        default: mergeSort(p, n); break; //归并排序
    }
}
