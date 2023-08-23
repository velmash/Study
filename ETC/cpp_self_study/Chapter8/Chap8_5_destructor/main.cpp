//
//  main.cpp
//  Chap8_5_destructor
//
//  Created by 윤형찬 on 2020/10/30.
//

#include <iostream>
using namespace std;

class IntArray
{
private:
    int *m_arr = nullptr;
    int m_length = 0;
   
public:
    IntArray(const int length_in)
    {
        m_length = length_in;
        m_arr = new int[m_length];
        
        cout << "Constructor " << endl;
    }
    
    int size() { return m_length; }
    
    ~IntArray()
    {
        if(m_arr != nullptr) delete [] m_arr;
    }
};

int main()
{
    while (true)
    {
        IntArray my_int_array(10000);
    }
    
    return 0;
}
