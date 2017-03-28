//
//  main.cpp
//  _2.3.3_DoublePointer
//
//  Created by Hans on 17/3/23.
//  Copyright © 2017年 Hans. All rights reserved.
//

#include <iostream>

int main(int argc, const char * argv[]) {
    int ival = 10;
    int *pi;
    pi = &ival;
    int **ppi = &pi;
    std::cout<< ival << " " << *pi << " " << **ppi << std::endl;
    return 0;
}
