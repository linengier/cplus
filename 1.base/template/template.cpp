#include <iostream>
using namespace std;

/* --------------------------------------------------------------------------*/
/**
 * @Synopsis  模板类
 *
 * @tparam T
 */
/* ----------------------------------------------------------------------------*/
template<class T> class Test{
    public:
        T print(T a, T b);
        Test();
};
template<class T> Test<T>::Test()
{

}

template<class T> T Test<T>::print(T a, T b)
{
    cout<<"a = "<<a << " b = "<<b<<endl;
    return a+b;
}


/* --------------------------------------------------------------------------*/
/**
 * @Synopsis  模板函数
 *
 * @tparam T
 * @Param a
 * @Param b
 *
 * @Returns   
 */
/* ----------------------------------------------------------------------------*/
template<class T> T  add(T a, T b){
    return a+b;
}


int main()
{
    Test<int> a;
    int c = a.print(1, 2);
    cout<<"c ="<<c<<endl;
    cout<<"d ="<<add(2, 3)<<endl;
    cout<<"e ="<<add(2.5, 3.1)<<endl;
    return 0;
}
