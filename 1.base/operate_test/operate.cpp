/*************************************************************************
    > File Name: operate.cpp
    > Author: ma6174
    > Mail: ma6174@163.com 
    > Created Time: 2016年11月06日 星期日 22时38分25秒
 ************************************************************************/

#include<iostream>
using namespace std;
class complex
{
    public:
        complex()
        {
            real=imag=0;
        }
        complex(double r, double i)
        {
            real = r;
            imag = i;
        }
        /*重载运算符定义格式
         * 返回值 operator 运算符（参数列表）*/
        complex operator +(const complex &c);
        complex operator -(const complex &c);
        friend void print(const complex &c);
    private:
        double real, imag;
};
inline complex complex::operator+(const complex &c)
{
    return complex(real+c.real, imag+c.imag);
}
inline complex complex::operator-(const complex &c)
{
    return complex(real-c.real, imag-c.imag);
}
void print(const complex &c)
{
    if(c.imag < 0)
        cout<<c.real<<c.imag<<"i"<<endl;
    else
        cout<<c.real<<"+"<<c.imag<<"i"<<endl;
}
/*重载运算符，其实是重载函数的一种，编译器将运算符转换为相应的函数*/
int  main()
{
    complex c1(2.0, 3.0), c2(4.0, -2.0),c3;
    /*如果对象的类有运算符重载，则编译程序将运算符解释为重载函数*/
    c3 = c1 + c2;/*编译程序将解释为c1.operator+(c2)*/
    print(c3);
    return 0;
}
