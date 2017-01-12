//
//  main.cpp
//  simu
//
//  Created by BB8 on 17/1/9.
//  Copyright © 2017年 BB8. All rights reserved.
//

#include "simu.h"

int delay;

/******************************************************************************************
 * 输出顾客c的状态
 ******************************************************************************************/
void printCustomer(Customer c) { printf("%3d", c.time); }

/******************************************************************************************
 * 事件模拟
 ******************************************************************************************/
int main(int argc, char * argv[]) {
    if (argc < 4) { printf("Usage: %s <nWin> <servTime> <delay(ms)>\n", argv[0]); return -1; }
    srand((unsigned int) time(NULL)); //设置随机种子
    delay = atoi(argv[3]);
    simulate(atoi(argv[1]), atoi(argv[2])); //启动模拟
    return 0;
}