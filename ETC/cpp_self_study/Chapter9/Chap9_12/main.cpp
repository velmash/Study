//
//  main.cpp
//  Chap9_12
//
//  Created by 윤형찬 on 2020/11/04.
//

#include <iostream>
#include <initializer_list>
using namespace std;

class IntArray
{
private:
    unsigned m_length = 0;
    int *m_data = nullptr;
    
public:
    IntArray(unsigned length)
    : m_length(length)
    {
        m_data = new int[length];
    }
    
    IntArray(const std::initializer_list<int> &list)
    : IntArray(list.size())
    {
        int count = 0;
        for (auto & element : list)
        {
            m_data[count] = element;
            ++count;
        }
    }
    
    ~IntArray()
    {
        delete [] this->m_data;
    }
    
    //TODO: overload operator =
    IntArray& operator = (const std::initializer_list<int> &list)
    {
        delete [] m_data;
        
        m_length = list.size();
        m_data = new int[m_length];
        
        int count = 0;
        for (auto &e : list)
        {
            m_data[count] = e;
            ++count;
        }
        return *this;
    }
    
    friend ostream & operator << (ostream & out, IntArray & arr)
    {
        for(unsigned i = 0; i < arr.m_length; ++i)
            out << arr.m_data[i] << " ";
        cout << endl;
        return out;
    }
};

int main()
{
    int my_arr1[5] { 1, 2, 3, 4, 5 };
    int *my_arr2 = new int[5]{ 1, 2, 3, 4, 5 };
    
    auto il = { 10, 20, 30 };
    
    IntArray int_array { 1, 2, 3, 4, 5 };
    cout << int_array << endl;
    
    IntArray int_array2(2);
    int_array2 = int_array;
    
    cout << int_array2 << endl;
    return 0;
}
