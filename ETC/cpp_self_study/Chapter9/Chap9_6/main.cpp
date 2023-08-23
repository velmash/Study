//
//  main.cpp
//  Chap9_6
//
//  Created by 윤형찬 on 2020/11/03.
//

#include <iostream>
#include <cassert>
using namespace std;

class IntList
{
private:
    int m_list[10];
    
public:    
    int & operator [] (const int index)
    {
        assert(index >= 0);
        assert(index < 10);
        return m_list[index];
    }
//    void setItem(int index, int value)
//    {
//        m_list[index] = value;
//    }
//
//    int getItem(int index)
//    {
//        return m_list[index];
//    }
//
//    int * getList()
//    {
//        return m_list;
//    }
};

int main()
{
    IntList my_list;
//  my_list.getList()[3] = 10;
//  cout << my_list.getList()[3] << endl;
      
    my_list[3] = 10;
    cout << my_list[3] << endl;
    
    return 0;
}
