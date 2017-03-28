//
//  main.cpp
//  _3.5.3_Array
//
//  Created by Hans on 17/3/26.
//  Copyright © 2017年 Hans. All rights reserved.
//

#include <iostream>

void changeArr(int (&arr)[10]){
    for(auto elem : arr) {
        std::cout << elem << std::endl;
    }
}
/*
void changeArr(int[] arr){//错误
}*/

void changeArr(int *arr,int size) {
    
}

void changeArr(int *arr[10]) {//含有十个整型指针的数组
    
}

void changeArr(int arr[]){//下降成一个指针

}

int main(int argc, const char * argv[]) {
    int arr[] = {0,1,2,3,4,5,6,7,8,9};
    /*int *begin = std::begin(arr);
    int *end = std::end(arr);
    while(*begin!=*end) {
        std::cout << *begin << std::endl;
        begin++;
    }*/
    
    //2.下标与指针运算
    int *p = arr;
    std::cout << *(p+2) << std::endl;
    
    changeArr(arr);
    
    return 0;
}
