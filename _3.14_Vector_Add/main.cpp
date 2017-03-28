//
//  main.cpp
//  _3.14_Vector_Add
//
//  Created by Hans on 17/3/26.
//  Copyright © 2017年 Hans. All rights reserved.
//

#include <iostream>
#include <vector>
using std::string;
using std::vector;
int main(int argc, const char * argv[]) {
    vector<int> v ;

    //1.普通的添加操作
    for(int i = 0; i < 10 ; i++){
        v.push_back(i);
    }

    
    //2.范围for
    /*for(auto i : v) {
        v.push_back(i);
    }*/
    
    //3.范围for2
    int i = 0;
    for(auto begin = v.begin(); begin!=v.end();begin++) {
        v.push_back(i);
        i++;//迭代过程中 添加元素，会导致死循环
    }
    
    for(decltype(v.size()) i = 0; i< v.size();i++) {
        std::cout << v[i] << std::endl;
    }
    std::cout << "输出完毕" << std::endl;
    return 0;
}
