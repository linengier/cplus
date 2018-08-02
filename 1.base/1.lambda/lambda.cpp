/*************************************************************************
    > File Name: lambda.cpp
    > Author: ma6174
    > Mail: ma6174@163.com 
    > Created Time: 2016年11月05日 星期六 22时36分59秒
 ************************************************************************/
/*lambda方式定义了一个匿名函数，可赋值给一个function变量
 * 在其他的地方使用这个函数*/
#include <iostream>
#include <functional>
#include <string.h>

using namespace std;

void lambda_test1()
{
    int a = 10;
    auto lambda = [](int a)->void{
        cout<<"in lambda a is "<<a<<endl;
    };
    lambda(a);
}
void lambda_test2()
{
    char str[100];  
    cin >> str;  
  
    auto fun = [](char *str)->int{  
        int length = strlen(str);  
        int res = 0;  
        for (int i = 0; i < length; i++)  
        {  
            res *= 2;  
            res += str[i] - '0';  
        }  
        return res;  
    };  
    cout<<fun(str);  
}
/*捕获方式:引用环境中的变量到函数中
 *|设置方式|结果| |-|-| 
 |[]|不捕获|
 |[=]|全部按值捕获|
 |[&]|全部按引用捕获| 
 |[a, b]|按值捕获变量a和b| 
 |[&a, b]|按引用捕获a，按值捕获b| 
 |[&, a]|按值捕获a，其它变量全部按引用捕获| 
 |[=, &a]|按引用捕获a，其它全部按值捕获|
注意： 捕获列表没有先后顺序；捕获列表中的变量不能出现重复申明，
比如[&, &a]在&中已经包含了&a的申明了，因此不能再出现&a。 */
int  lambda_test3()
{
    int a = 123;
    /*按值捕获全部变量*/
    auto lambda = [=]()->void{
        std::cout << "In lambda: " << a << std::endl;
    };
    lambda();
    return 0;
}
/*lambda 可变类型
 * 按值传递到lambda中的变量，默认是不可变的
 * 如果在lambda中需要修改变量的值，需要在型参中添加
 * mutable关键字*/
/*mutable 作为一个关键字，修饰所有的捕获的变量*/
int  lambda_mutable_test1()
{
    int a = 123;
    cout<<"-------lambda mutable------------"<<endl;
    auto lambda = [=]()mutable->void{
        /*按值引用不能修改变量的值*/
        a = 234;
        cout<<"in lambad a= "<<a<<endl;
    };
    lambda();
    cout<<"cout of lambda a = "<<a<<endl;
    return 0;
}
int  lambda_mutable_test2()
{
    int a = 123;
    cout<<"-------lambda mutable------------"<<endl;
    /*按引用捕获可以修改变量的值*/
    auto lambda = [&a]()mutable->void{
        a = 234;
        cout<<"in lambad a= "<<a<<endl;
    };
    lambda();
    cout<<"cout of lambda a = "<<a<<endl;
    return 0;
}
/*lambda表达式中的返回类型可以省略，
 * 编译器会根据实际返回的值的类型自动推导*/
int lambda_return()
{
    int a = 123;
    cout<<"--------lambda return-------"<<endl;
    auto lambda = [=]()mutable{
        a = 234;
        cout<<"in lambda a = "<<a<<endl;
        return a;
    };
    int b = lambda();
    cout<<"out of lambda a = "<<a<<" b = "<<b<<endl;
    return 0;
}
int main()
{
    lambda_test1();
    lambda_test2();
    lambda_test3();
    lambda_mutable_test1();
    lambda_mutable_test2();
    lambda_return();
    bool sig = false;
    {
        cout<<"sig is true"<<sig<<endl;
    }
}
