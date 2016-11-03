/*************************************************************************
    > File Name: ofstream_test.cpp
    > Author: ma6174
    > Mail: ma6174@163.com 
    > Created Time: 2016年11月03日 星期四 17时13分11秒
 ************************************************************************/
#include <fstream>
#include <sstream>
#include <iostream>
#include <cassert>

void Output(const std::string &theFileName)
{
    std::ofstream os(theFileName.c_str());
    if(!os)
        std::cout<<"create ofstream failed"<<std::endl;
    assert(os.good());
    os << "Just for test" << std::endl;
    os.close();
}

int main(int argc, char* argv[])
{
    std::stringstream ss;
    ss << "test" << 1 << ".txt";
    Output(ss.str());
    return 0;
}
