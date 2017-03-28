//
//  main.cpp
//  _2.1.7_RefAndValue
//
//  Created by Hans on 17/3/23.
//  Copyright © 2017年 Hans. All rights reserved.
//

#include <iostream>

int main() {
    int i,&rl = i;
    i = 5; rl = 10;
    std::cout << i << " " << rl << std::endl;
    
    int *p = nullptr;
    int *p2 = NULL;
    return 0;
}
