//
//  util.h
//  Data Structure Algorithm
//
//  Created by BB8 on 16/12/23.
//  Copyright © 2016年 BB8. All rights reserved.
//

#pragma once
#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <typeinfo>

/******************************************************************************************
 * 测试、演示用小工具
 ******************************************************************************************/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

#include "comparator.h"

#include "checkorder_elem.h"
#include "checkorder_list.h"
#include "checkorder_vector.h"

#include "double_elem.h"
#include "increase_elem.h"
#include "hailstone_elem.h"
#include "increase_list.h"
#include "increase_vector.h"

#include "crc_elem.h"
#include "crc_list.h"
#include "crc_vector.h"

#include "rand.h" // 随机数

#if defined(DSA_DEBUG) //编译开关，控制调试输出
#define DSA(x) { x } //输出
#else
#define DSA(x) // 不输出
#endif
