//
//  list_disordered.h
//  Data Structure Algorithm
//
//  Created by BB8 on 17/1/4.
//  Copyright © 2017年 BB8. All rights reserved.
//

#pragma once

#include "listnode.h"
template <typename T> int List<T>::disordered() const { //统计逆序相邻元素对的总数
    int n = 0; ListNode<T> * p = first();
    for (int i = 0; i < _size - 1; p = p->succ, i++)
        if (p->data > p->succ->data) n++;
    return n;
}
