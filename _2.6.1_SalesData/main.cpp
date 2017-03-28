//
//  main.cpp
//  _2.6.1_SalesData
//
//  Created by Hans on 17/3/24.
//  Copyright © 2017年 Hans. All rights reserved.
//

#include <iostream>

//C++新标准规定，可以为数据成员提供一个类内初始值。（若不指定规则默认）
struct Sales_data {
    std::string bookNo;
    unsigned unites_sold = 0;// unsigned int
    double revenue = 0.0;
};//<-注意这里有一个分号";"

int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    return 0;
}
