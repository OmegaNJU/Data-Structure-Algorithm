//
//  vector_expand.h
//  Data Structure Algorithm
//
//  Created by BB8 on 16/12/23.
//  Copyright © 2016年 BB8. All rights reserved.
//

#ifndef vector_expand_h
#define vector_expand_h

template <typename T> void Vector<T>::expand() { //向量空间不足时扩容
    if (_size < _capacity) return; //尚未满员时，不必扩容
    if (_capacity < DEFAULT_CAPACITY) _capacity = DEFAULT_CAPACITY; //不低于最小容量
    T* oldElem = _elem;  _elem = new T[_capacity <<= 1]; //容量加倍
    for (int i = 0; i < _size; i++)
        _elem[i] = oldElem[i]; //复制原向量内容（T为基本类型，或已重载赋值操作符'='）
    delete [] oldElem; //释放原空间
}

#endif /* vector_expand_h */
