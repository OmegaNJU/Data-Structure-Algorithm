//
//  list_copynodes.h
//  Data Structure Algorithm
//
//  Created by BB8 on 17/1/4.
//  Copyright © 2017年 BB8. All rights reserved.
//

#ifndef list_copynodes_h
#define list_copynodes_h

template <typename T> //列表内部方法：复制列表中自位置p起的n项
void List<T>::copyNodes(ListNodePosi(T) p, int n) { //p合法，且至少有n-1个真后继节点
    init(); //创建头、尾哨兵节点并做初始化
    while (n--) { insertAsLast(p->data); p = p->succ; } //将起自p的n项依次作为末节点插入
}

#endif /* list_copynodes_h */
