//
//  main.cpp
//  _2.4.1_Const
//
//  Created by Hans on 17/3/23.
//  Copyright © 2017年 Hans. All rights reserved.
//

#include <iostream>

int main(int argc, const char * argv[]) {
    /*int i = 42;
    const int &r = i;
    i = 38;
    std::cout << i << " "<< r << std::endl;*/
    
    /*const double pi = 3.14;
    const double *p = &pi;
    
    double pi2 = 3.14;
    const double *pp = &pi2;*/
    
    int num = 1024;
    int *const p = &num;//常量指针
    
    const double pi = 3.14159;
    const double *const pip = &pi;//指向常量的常量指针
    
    double const *const pip2 = &pi;//与上面写法不同，但是意义一样
    return 0;
}
