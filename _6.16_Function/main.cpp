//
//  main.cpp
//  _6.16_Function
//
//  Created by Hans on 17/3/26.
//  Copyright © 2017年 Hans. All rights reserved.
//

#include <iostream>

bool isEmpty(const std::string &str) {
    return str.empty();
}

int main(int argc, const char * argv[]) {
    std::cout << isEmpty("Hello World!") << std::endl;
    
    const std::string constStr = "hello";


    return 0;
}

