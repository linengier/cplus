#include <string>
#include <iostream>
#include <boost/shared_ptr.hpp>
//share_ptr blong to boost_system library
class implementation
{
public:
    ~implementation() { std::cout <<"destroying implementation\n"; }
    void do_something()
    { std::cout << "did something\n"; }
};

void test()
{
    boost::shared_ptr<implementation> sp1(new implementation());
    std::cout<<"The Sample now has "<<sp1.use_count()<<" references\n";
    sp1->do_something(); 
    boost::shared_ptr<implementation> sp2 = sp1;
    std::cout<<"The Sample now has "<<sp2.use_count()<<" references\n";
    sp2->do_something();
    sp1.reset();
    std::cout<<"After Reset sp1. The Sample now has "<<sp2.use_count()<<" references\n";
    //所有的对象引用消失后，才调用构造函数
    sp2.reset();
    std::cout<<"After Reset sp2.\n";
}

int  main()
{
    test();
    return 0;
}
