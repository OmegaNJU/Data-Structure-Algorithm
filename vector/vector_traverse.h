//
//  vector_traverse.h
//  Data Structure Algorithm
//
//  Created by BB8 on 16/12/23.
//  Copyright © 2016年 BB8. All rights reserved.
//

#ifndef vector_traverse_h
#define vector_traverse_h

template <typename T> void Vector<T>::traverse(void (* visit)(T &)) //借助函数指针机制
{ for (int i = 0; i < _size; i++) visit(_elem[i]); } //遍历向量

template <typename T> template <typename VST> //元素类型、操作器
void Vector<T>::traverse(VST & visit) //借助函数对象机制
{ for (int i = 0; i < _size; i++) visit(_elem[i]); } //遍历向量

#endif /* vector_traverse_h */
