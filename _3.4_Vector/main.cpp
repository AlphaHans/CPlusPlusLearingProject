//
//  main.cpp
//  _3.4_Vector
//
//  Created by Hans on 17/3/24.
//  Copyright © 2017年 Hans. All rights reserved.
//

#include <iostream>
#include <vector>
using std::vector;
using std::string;

int main(int argc, const char * argv[]) {
    // insert code here...
    vector<string> v;
    v.push_back("1");
    v.push_back("2");
    
    for(auto begin = v.begin(); begin!=v.end(); begin++) {//迭代器模式
        if(!begin->empty())
            std::cout << *begin << std::endl;
    }
    
    for(auto str : v) {//for循环模式
        std::cout << str << std::endl;
    }
    return 0;
}
