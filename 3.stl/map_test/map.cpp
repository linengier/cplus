#include <map>
#include <iostream>

using namespace std;

int map_swap()
{
    map<int, int> m1, m2, m3;
    map<int, int>::iterator m_it;

    m1.insert(pair<int, int>(1,10));
    m1.insert(pair<int, int>(2,20));
    m1.insert(pair<int, int>(3,30));
    
    m2.insert(pair<int, int>(10,100));
    m2.insert(pair<int, int>(20,200));
    m2.insert(pair<int, int>(30,300));

    cout<<"printf map1"<<endl;
    for(m_it = m1.begin(); m_it != m1.end(); m_it++)
        cout<<"key"<<m_it->first<<"value"<<m_it->second<<endl;
    cout<<"."<<endl;
    m1.swap(m2);

    cout<<"after swap map1"<<endl;
    for(m_it = m1.begin(); m_it != m1.end(); m_it++)
        cout<<" "<<m_it->second;
    cout<<"."<<endl;
    cout<<"after swap map1"<<endl;
    for(m_it = m2.begin(); m_it != m2.end(); m_it++)
        cout<<" "<<m_it->second;
    cout<<"."<<endl;
    return 0;
}
int main()
{
    map<int , string> maplive;
    //insert elem to map
    maplive[0] = "hllo";
    maplive[1] = "world";
    
    maplive.insert(pair<int, string>(3, "insert3"));
    maplive.insert(map<int, string>::value_type(4, "insert4"));
    //print elem in map
    cout<<maplive[0]<<endl;
    cout<<maplive[1]<<endl;
    cout<<maplive[3]<<endl;
    cout<<maplive[4]<<endl;

    //find elem in map
    map<int, string>::iterator it;
    it = maplive.find(3);
    if(it == maplive.end())
        cout<<"can't find key value 3"<<endl;
    else
        cout<<"key 3 value is "<<maplive[3]<<endl;
   
    map<int, string>::reverse_iterator j, end;
    end = maplive.rend();
    cout<<"re print maplive"<<endl;
    for(j = maplive.rbegin(); j!= end; j++)
        cout<<"key "<<(*j).first<<" value "<<(*j).second<<endl;
    map_swap(); 
    return 0;
}

