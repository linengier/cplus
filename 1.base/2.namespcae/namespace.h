/*************************************************************************
    > File Name: namespace.h
    > Author: ma6174
    > Mail: ma6174@163.com 
    > Created Time: 2016年11月11日 星期五 22时47分24秒
 ************************************************************************/
#ifndef MY_NAMESPACE_TEST_H
#define MY_NAMESPACE_TEST_H
namespace my_test{
    class person{
        public:
            person(int a);
            static int  move();
            static int  run();
            static int  num;
            /*静态成员的类型可以是其所属的类，非静态成员的类型只能使其所属类的指针或引用*/
            static person  man;
        private:
          int age;
    };

}
#endif

