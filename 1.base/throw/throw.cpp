/*************************************************************************
    > File Name: throw.cpp
    > Author:     linhaidong
    > Mail:       linhaidong@alibaba-inc.com 
    > Time:      2018年04月19日 20时19分57秒 CST
    > Abstract: 
 ************************************************************************/
#include <iostream>
#include <string>
#include <exception>
#include <stdexcept>
using namespace std; 
void handle_eptr(std::exception_ptr eptr) // 按值传递 ok
{
    try {
        if (eptr) {
            std::rethrow_exception(eptr);
        }
    } catch(const std::exception& e) {
        std::cout << "Caught exception \"" << e.what() << "\"\n";
    }
}
 
int throw_std()
{
    std::exception_ptr eptr;
    try {
        std::string().at(1); // 这生成一个 std::out_of_range
    } catch(...) {
        eptr = std::current_exception(); // 捕获
    }
    handle_eptr(eptr);
} // std::out_of_range 的析构函数调用于此，在 ept 析构时

int a =1;
int throw_base() {  
    try  
    {  
        //throw 之后直接退出
        throw "error";  
        throw 2.3;
        cout<<"throw end"<<endl;
        throw 1;  
    } //catch 的数据类型需要与throw出来的数据类型相匹配
    catch(char const *str)  
    {  
        cout << str << endl; 
        //传递出现段错误
        //throw 1;  
        //throw a;  
    }  
    catch(int i)  
    {  
        cout << i << endl;  
    } //catch(…)能够捕获多种数据类型的异常对象 
    catch(...)
    {
        cout<<"undefine throw"<<endl;
    }
} 

//可以自己定义Exception  
class myexception: public exception  
{  
    virtual const char* what() const throw()  
    {  
        return "My exception happened";  
    }  
}myex;  
  
int throw_use_define () {  
    try  
    {      
        if(true)    //如果，则抛出异常；  
            throw myex;  
    }  
    catch (exception& e)  
    {  
        cout << e.what() << endl;  
    }  
    return 0;  
} 

int main()
{
    throw_base();
    throw_std();
    throw_use_define();
}
