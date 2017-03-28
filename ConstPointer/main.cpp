//
//  main.cpp
//  ConstPointer
//
//  Created by Hans on 17/3/26.
//  Copyright © 2017年 Hans. All rights reserved.
//

#include <iostream>

int main(int argc, const char * argv[]) {
    int i = 0;
    const int *p1 = &i;//指针常量
    i = 1;
   // *p1 = 2;//不允许修改
    std::cout << *p1 << std::endl;
    
    int *const p2 = &i;//常量指针
    *p2 = 1;
    int i2 = 2;
    //*p2 = &i2;
    std::cout << *p2 << std::endl;
    return 0;
}
