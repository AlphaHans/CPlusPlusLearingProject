//
//  main.cpp
//  _1.4.3_main
//
//  Created by Hans on 17/3/23.
//  Copyright © 2017年 Hans. All rights reserved.
//

#include <iostream>

int main(int argc, const char * argv[]) {
    int sum = 0;
    int value = 0;
    std::cout << "enter numbers" << std::endl;
    while(std::cin >> value)
        sum += value;
    std::cout << "sum is = " << sum << std::endl;
    return 0;
}
