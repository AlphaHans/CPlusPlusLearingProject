//
//  main.cpp
//  _3.21_Iterator
//
//  Created by Hans on 17/3/26.
//  Copyright © 2017年 Hans. All rights reserved.
//

#include <iostream>
#include <vector>
using std::vector;
int main(int argc, const char * argv[]) {
    vector<int> v;
    for(int i = 0; i < 10; i++) {
        v.push_back(i);
    }
    //1.从begin开始，正常遍历出 0123456789
    /*for(auto begin = v.begin(); begin!= v.end(); begin++) {//可以看出 begin和end指向的是元素的地址
        std::cout << *begin << std::endl;//使用解引符号获取真正的值
    }*/
    
    //2.无法正常迭代 结果为：5 9 8 7 6 5 4 3 2 1
    //P96页 Note：end返回的迭代器并不实际指示某个具体元素，所以不能对其进行递增或者解引操作
    //从结果来看，上述的5不是固定的，多次运行情况下。该值不断变化，所以可以确定end指向的是某一个特殊区域，来表示链表的末尾。
    //而不输出0的原因是，end!=v.begin()条件判断不充分，但是又不是很好改；这个是造成不输出0的原因
    /*for(auto end = v.end(); end!=v.begin(); end--) {
        std::cout << *end << std::endl;
    }*/
    
    //3.普通迭代器和常量迭代器
    //普通迭代器
    for(auto begin = v.begin(); begin!=v.end(); begin++) {
        *begin = (*begin) * 2;
    }
    //常量迭代器
    /*for(auto begin = v.cbegin(); begin!= v.cend(); begin++) {
        *begin = (*begin) * 2;//使用cbegin和cend常量迭代器迭代器。编译器报错 Read-only variable is not assignable 不允许被重新赋值
    }*/
    
    for(auto begin = v.begin(); begin!= v.end(); begin++) {
        std::cout << *begin << std::endl;
    }
    return 0;
}
