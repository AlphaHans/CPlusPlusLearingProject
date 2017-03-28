//
//  main.cpp
//  _3.2.3_String_For
//
//  Created by Hans on 17/3/25.
//  Copyright © 2017年 Hans. All rights reserved.
//

#include <iostream>
using std::string;
using std::cout;
using std::endl;
int main(int argc, const char * argv[]) {
    //1.测试循环输出
    /*string str("some thing");
    for(auto c : str) {//auto类型可以自动进行类型推断，实际上就是char类型
        cout << c << endl;
    }*/
    
    //2.统计字符串中标点符号的数量
    /*string str2("Hello!World!!!");
    decltype(str2.size()) counter = 0;//等价于 int counter = 0;
    for (auto c : str2) {//等价于 char c : str2;
        if(ispunct(c)) counter++;
    }
    cout << counter << endl;*/
    
    
    //3.对字符串的内容进行操作
    /*string s = "hello world";
    for(auto &c : s) {//注意这里是 &c 才可以对c直接进行操作，而不是c的副本
        c = toupper(c);
    }
    cout << s << endl;*/
    
    //4.对字符串的内容进行随机访问
    string s = "hello";
    char c = s[10];//当发生越界的时候，运行的时候并没有字符输出
    char c2 = s[0];//正常输出
    cout << c << " " << c2 << endl;
    return 0;
}
