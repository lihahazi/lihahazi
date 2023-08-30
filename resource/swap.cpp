//
// Created by 李哈哈 on 2023/8/30.
//
#include "../header/swap.h"
void swap(int a,int b){
    int temp=a;
    a=b;
    b=temp;
    std::cout<<"a= "<<a<<"; b= "<<b<<std::endl;
}
