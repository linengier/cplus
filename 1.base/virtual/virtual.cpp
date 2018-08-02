/*************************************************************************
    > File Name: virtual.cpp
    > Author:     linhaidong
    > Mail:       linhaidong@alibaba-inc.com 
    > Time:      2017年10月11日 15时09分23秒 CST
    > Abstract: 
 ************************************************************************/
#include <iostream>
#include <string>
using namespace std;
class person{
    public:
        person(string n):name(n){
        
        }
        virtual void eat(string name) = 0;//纯虚函数，虚基类
        virtual void run(string name) = 0;//纯虚函数，虚基类
        string name;
};

class man:public person{
    public:
        man(string n):person(n){

        }
        void run(string name) override;
        
        //void run(int name) override; error, 基类中未定义,编译报错
        void eat(string name) override;
};
class child:public man{
    public:
        child(string n):man(n){

        }
};
/*
 * 在派生类中一定要实现abstract class(虚基类)中的函数
 * */
void man::eat(string name)
{
    cout<<"eat"<<name<<endl;
}
void man::run(string name)
{
    cout<<"i am man "<<this->name<<"  "<<name<<endl;
}
int main()
{
    man m("lin");
    m.run("234");
    child c("zhong");
    c.run("123");
}
