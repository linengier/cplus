/*************************************************************************
    > File Name: namespace.cpp
    > Author: ma6174
    > Mail: ma6174@163.com 
    > Created Time: 2016年11月11日 星期五 22时39分06秒
 ************************************************************************/

#include <iostream>
#include "namespace.h"
using namespace std;
using namespace my_test;
int person::num = 10;
person::person(int a):age(a)
{
    cout<<"init person"<<endl;
}
int person::move()
{
    cout<<"person move"<<endl;
    return 0;
}

int person::run()
{
    cout<<"person run"<<endl;
    return 0;
}
int main()
{
    //调用命名空间的函数
    my_test::person::move();
    person man(10);
    cout<<"num of man is "<<man.num<<endl;
    person woman(10);
    woman.num = 20;
    cout<<"num of man is "<<woman.num<<endl;
    cout<<"num of man is "<<man.num<<endl;
    return 0;
}
