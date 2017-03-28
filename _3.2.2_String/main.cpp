//
//  main.cpp
//  _3.2.2_String
//
//  Created by Hans on 17/3/24.
//  Copyright © 2017年 Hans. All rights reserved.
//

#include <iostream>

using std::string;
using std::cout;
using std::cin;
using std::endl;
int main() {
   /* string s;
    cin >> s;//这样只能读取到以空格为结束的字符 比如输入 “  Helle Wrold!   ”
    cout << s << endl; //输出只会是 "Hello"*/
    
    /*string line;
    getline(cin, line);//读取一行 
    cout << line << endl;//能够增长输出 上面无法输出的情况*/
    
    string str = string(10,'c');
    cout << str << endl;
    return 0;
}
