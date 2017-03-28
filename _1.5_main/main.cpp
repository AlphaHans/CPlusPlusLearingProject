//
//  main.cpp
//  _1.5_main
//
//  Created by Hans on 17/3/23.
//  Copyright © 2017年 Hans. All rights reserved.
//

#include <iostream>
//标准库使用<> 自定义头文件用"" 通常使用.h结尾，也有使用.H .hpp或.hxx的，但是一般都不关心，只有一些特殊编译器会有要求
#include "Sales_item.h"

int main(int argc, const char * argv[]) {
    // insert code here...
    Sales_item book;
    std::cin >> book;
    std::cout << book << std::endl;
    return 0;
}
