//
//  vector_deduplicate.h
//  Data Structure Algorithm
//
//  Created by BB8 on 16/12/23.
//  Copyright © 2016年 BB8. All rights reserved.
//

#ifndef vector_deduplicate_h
#define vector_deduplicate_h

template <typename T> int Vector<T>::deduplicate() { //删除无序向量中重复元素（高效版）
    int oldSize = _size; //记录原规模
    Rank i = 1; //从_elem[1]开始
    while (i < _size) //自前向后逐一考查各元素_elem[i]
        (find(_elem[i], 0, i) < 0) ? i++ : remove(i);
        //在其前缀中寻找与之雷同者（至多一个），若无雷同则继续考查其后继，否则删除雷同者
    return oldSize - _size; //向量规模变化量，即被删除元素总数
}

#endif /* vector_deduplicate_h */
