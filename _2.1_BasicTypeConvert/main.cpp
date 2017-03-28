//
//  main.cpp
//  _2.1_BasicTypeConvert
//
//  Created by Hans on 17/3/23.
//  Copyright © 2017年 Hans. All rights reserved.
//

#include <iostream>

int main(int argc, const char * argv[]) {    
    // insert code here...
    bool b = 41;
    std::cout << b << "\n";
    
    int i =  b;
    std::cout << i << "\n";

    i = 3.14;
    std::cout << i << "\n";

    double pi = i;
    std::cout << pi << "\n";

    unsigned char c = -1;
    std::cout << c << "\n";

    signed char c2 = 255;//C++ primer指定的是256 但是编译直接出错，要求指定为255
    std::cout << c2 << "\n";
    
    return 0;
}
