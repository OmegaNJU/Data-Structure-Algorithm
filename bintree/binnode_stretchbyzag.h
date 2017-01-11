//
//  binnode_stretchbyzag.h
//  Data Structure Algorithm
//
//  Created by BB8 on 17/1/11.
//  Copyright © 2017年 BB8. All rights reserved.
//

#ifndef binnode_stretchbyzag_h
#define binnode_stretchbyzag_h

//通过zag旋转调整，将子树x拉伸成最左侧通路
template <typename T> void stretchByZag ( BinNodePosi(T) & x ) {
    /*DSA*/   int c = 0; //记录旋转次数
    int h = 0;
    BinNodePosi(T) p = x; while ( p->rc ) p = p->rc; //最大节点，必是子树最终的根
    while ( x->lc ) x = x->lc; x->height = h++; //转至初始最左侧通路的末端
    for ( ; x != p; x = x->parent, x->height = h++ ) { //若x右子树已空，则上升一层
        while ( x->rc ) //否则，反复地
        /*DSA*/{
            x->zag(); //以x为轴做zag旋转
            /*DSA*/c++;
            /*DSA*/}
    } //直到抵达子树的根
    /*DSA*/printf ( "\nh = %d, c = %d\n\n", h, c );
}

#endif /* binnode_stretchbyzag_h */
