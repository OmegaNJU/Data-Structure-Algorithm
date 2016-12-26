//
//  vector_bubble.h
//  Data Structure Algorithm
//
//  Created by BB8 on 16/12/23.
//  Copyright © 2016年 BB8. All rights reserved.
//

#pragma once

template <typename T> bool Vector<T>::bubble(Rank lo, Rank hi) { //一趟扫描交换
    bool sorted = true; //整体有序标志
    while (++lo < hi) //自左向右，逐一检查各对相邻元素
        if (_elem[lo - 1] > _elem[lo]) { //若逆序，则
            sorted = false; //意味着尚未整体有序，并需要
            std::swap(_elem[lo - 1], _elem[lo]); //通过交换使局部有序
        }
    return sorted; //返回有序标志
}
