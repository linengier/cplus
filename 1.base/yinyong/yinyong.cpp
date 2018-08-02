/*************************************************************************
    > File Name: yinyong.cpp
    > Author:     linhaidong
    > Mail:       linhaidong@alibaba-inc.com 
    > Time:      2017年09月26日 10时30分56秒 CST
    > Abstract: 
 ************************************************************************/
#include<iostream>
using namespace std;
int global[5]={1,2,3,4,5};

int &get_global(int i)
{
    return global[i];
}

/* --------------------------------------------------------------------------*/
/**
 * @Synopsis  引用作为返回值，可以当做左值使用
 * 用引用返回一个函数值的最大好处是，在内存中不产生被返回值的副本
 * 可以返回 类成员的引用，但最好是const常量
 */
/* ----------------------------------------------------------------------------*/
void zuozhi_test()
{
    for(int i = 0; i < 5; i++){
        cout<<"global["<<i<<"]"<<global[i]<<endl;
    }
    for(int i = 0; i < 5; i++){
        get_global(i) = i+10;
    }
    for(int i = 0; i < 5; i++){
        cout<<"global["<<i<<"]"<<global[i]<<endl;
    }

}

//基本引用
void yinyong_base()
{
    int a = 10;
    int c = 100;
    //声明引用时，必须同时对其进行初始化
    int &b =a;
    b = 100;
    cout<<"a"<<a<<"b"<<b<<endl;
    //指向同一地址
    cout<<"addrsss a"<<&a<<endl;
    cout<<"address b"<<&b<<endl;
    b = c;
    cout<<"a "<<a<<"b "<<b<<"c "<<c<<endl;
}

/* --------------------------------------------------------------------------*/
/**
 * @Synopsis  右值引用是C++11新增加的特性，用于引用右值变量
 *            由于单引用只能引用左值变量，当引用为右值时使用&&，引用右值变量
 *            编译需要增加--std=c++11
 */
/* ----------------------------------------------------------------------------*/
//右值引用
class Test {
    public:
        void init(int &a)
        {
            cout<<"test &"<<a<<endl;
        }
        void init(int && a)
        {
            cout<<"test &"<<a<<endl;
        }
};

void test()
{
    int b = 100;
    //Test a;
    //a.init(b);
    //a.init(100);
    Test().init(b);
    Test().init(100);
    //a.init(100);
}

int main()
{
    yinyong_base();
    zuozhi_test();

    test();
    return 0;
}
