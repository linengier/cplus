/*************************************************************************
    > File Name: youyuan.cpp
    > Author:     linhaidong
    > Mail:       linhaidong@alibaba-inc.com 
    > Time:      2017年09月28日 09时59分44秒 CST
    > Abstract: 
 ************************************************************************/
#include<iostream>
using namespace std;
class Test{
    public:
        Test(){
            a = 0;
            b = 0;
        }
        Test(int m, int n);
        friend void show(Test & t);
    private:
        int a;
        int b;
};
Test::Test(int m, int n):a(m), b(n){

}
void show(Test & t)
{
    cout<<"a="<<t.a<<"  "<<"b="<<t.b<<endl;
}
int main()
{
    Test t(1,2);
    show(t);
    return 0;
}

