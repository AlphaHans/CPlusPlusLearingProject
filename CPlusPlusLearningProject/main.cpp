//
//  main.cpp
//  CPlusPlusLearningProject
//
//  Created by Hans on 17/3/22.
//  Copyright © 2017年 Hans. All rights reserved.
//


#include <iostream> 
//#include 指定头文件。#include <iostream>必须写在同一行
//iosstream是一个标准库(standard library) 由istream和ostream组成输入输出流
//定义了四个IO对象
//1.cin(see-in)的istream类型对象，标准输入
//2.cout(see-out)的ostream类型对象，标准输出
//3.其他两个ostream对象：cerr（see-err）和clog（see-log） 前者用于输出警告和错误信息，后者用于打印运行时的一般消息

int main() {
    // insert code here...
    //输出运算符（<<）在标准输出上打印消息
    //接受两个运算对象：左侧必须是一个ostream对象，右侧的运算符对象是要打印的值
    //此运算符将给定的值写到给定的ostream对象中。
    //这条语句使用了两个<<。运算符返回其左侧运算对象，因此第一个运算符的结果成为了第二个运算符左侧运算你的对象。
    
    //通过上述，将整个输出请求连接起来。
    //表达式可以写为：(std::count << "Enter two numbers") << std::endl;
    
    //链中每个左侧运算对象都相同（都为std::cout）所以也可以用两条语句写：
    //std::cout << "Enter two numbers";//字符串字面值常量
    //std::cout << std::endl; endl是一个操纵符的特殊值。写入endl的效果是结束当前行，并将设备关联的缓冲区内容刷到设备中。可以保证目前为止程序所产生的输出都写到真正的输入流中。
    
    //使用标准库的名字 std。 std是标准库的命名空间，帮助我们避免不经意的名字冲突。
    std::cout << "Enter two numbers:" << std::endl;
    int var1 = 0, var2 = 0;
    
    //输入运算符（>>）它接受一个istream作为其左侧运算对象，接受一个对象为右侧运算对象
    //从给定的istream读入数据，并存到给定的对象中。
    //与std::cout类似，该语句可以写成
    //std::cin >> var1;
    //std::cin >> var2;

    std::cin >> var1 >> var2;
    std::cout << "The sum of " << var1 << " and " << var2
    << " is " << var1 + var2 << std::endl;
    
    return 0;//0表示返回成功，非0表示错误；通常由系统指定
}
