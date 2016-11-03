/*************************************************************************
  > File Name: boost.cpp
  > Author: ma6174
  > Mail: ma6174@163.com 
  > Created Time: 2016年11月02日 星期三 16时16分40秒
 ************************************************************************/
#include<iostream>  
#include<fstream>  
#include<boost/filesystem.hpp>  

int main()  
{  
    namespace bf=boost::filesystem;//简单别名  

    bf::path path("/tmp/test");  
    bf::path old_cpath = bf::current_path(); //取得当前目录  
    bf::path file_path = path / "file"; //path重载了 / 运算符  

    //判断文件存在性  
    if(bf::exists(path))  
    { 
        std::cout<<"file exists"<<std::endl;
        std::cout<<path.string().c_str()<<std::endl;
        //创建临时文件
        std::ofstream out(file_path.string().c_str());  
        if(!out)
        {
            std::cout<<"create ofstream failed"<<std::endl;
            return 1;  
        }
        out << "一个测试文件\n";  
    } else {  
        std::cout<<"file not  exists"<<std::endl;
        std::cout << path << "不存在\n";  
        //目录不存在，创建  
        bf::create_directory(path);  
        std::ofstream out(file_path.string().c_str());  
        if(!out) return 1;  
        out << "一个测试文件\n";  
    }  

    bf::current_path(path); //设置当前为/home  

    if(bf::is_regular_file(file_path))  
    {  
        std::cout << path << "是普通文件\n";  
        std::cout << path << ": 大小为" << bf::file_size(file_path) <<'\n';  
       // bf::create_symlink(file_path, "/tmp/test/file-symlink");  
    }   

    bf::current_path(old_cpath);  

   // bf::remove(file_path);//删除文件file_path  
   // bf::remove_all(path);//递归地删除  

    return 0;  
}  
