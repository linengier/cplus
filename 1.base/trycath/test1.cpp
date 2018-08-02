/*************************************************************************
    > File Name: test1.cpp
    > Author:     linhaidong
    > Mail:       linhaidong@alibaba-inc.com 
    > Time:      2017年12月20日 15时38分14秒 CST
    > Abstract: 
 ************************************************************************/
#include <iostream>
#include <exception>
#include <string>
using namespace std;

class myexception: public exception  
{  
    virtual const char* what() const throw()  
    {  
        return "My exception happened";  
    }  
}myex;  

void self_class_test()
{
    try  
    {      
        if(true)    //如果，则抛出异常；  
            throw myex;  
    }  
    catch (exception& e)  
    {  
        cout << e.what() << endl;  
    }  
}


class ExceptionClass
{
    const char* name;
public:
    ExceptionClass(const char* name="default name") 
    {
             cout<<"Construct "<<name<<endl;
             this->name=name;
    }
   ~ExceptionClass()
    {
             cout<<"Destruct "<<name<<endl;
    }
    void mythrow()
   {
            throw ExceptionClass("my throw");
   }
};


void test2()
{
    ExceptionClass e("Test");
    try
    {
        e.mythrow();
    }  
    catch(...)
    {
        cout<<"*********"<<endl;
    }
}

void base_test()
{
    try 
    {
        //throw 1;
        //throw 2;
        //throw "error";
        throw 3.14;
    }
    catch (const char * str)
    {
        cout<<str<<endl;
    }
    catch(int i)
    {
        cout << i <<endl;
    }
    catch(...)
    {
        cout<<"unkonw error"<<endl;
    }
}


int main()
{
    base_test();
    self_class_test();
    test2();
}


