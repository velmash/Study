//
//  main.cpp
//  Chap9_11
//
//  Created by 윤형찬 on 2020/11/04.
//

#include <iostream>
#include <cassert>
using namespace std;

class MyString
{
//private:
public:
    char *m_data = nullptr;
    int m_length = 0;
    
    // copy constructor
    // copy const 안에서 source가 가지고 있는 내용을 전부 복사했다.
    // 깊은 복사
    MyString(const MyString &source)
    {
        cout << "copy constructor " << endl;
        
        m_length = source.m_length;
        
        if (source.m_data != nullptr)
        {
            m_data = new char[m_length];
            
            for (int i = 0; i < m_length; ++i)
                m_data[i] = source.m_data[i];
        }
        else
            m_data = nullptr;
    }
    
    // 대입 연산자
    MyString& operator = (const MyString &source)
    {
        // 얕은 복사
        // this->m_data = source.m_data;
        // this->m_length = source.m_length;
        cout << "Assignment operator " << endl;
        
        if (this == &source) // prevent self-assignment
            return *this;
        
        delete[] m_data;
        
        m_length = source.m_length;
        
        if(source.m_data != nullptr)
        {
            m_data = new char[m_length];
            
            for (int i = 0; i < m_length; ++i)
                m_data[i] = source.m_data[i];
        }
        else
            m_data = nullptr;
        
        return *this;
    }
public:
    MyString(const char *source = "")
    {
        assert(source);
        
        m_length = std::strlen(source) + 1;
        m_data = new char[m_length];
        
        for(int i = 0; i < m_length; i++)
            m_data[i] = source[i];
        
        m_data[m_length - 1] = '\0';
    }
    ~MyString()
    {
        delete[] m_data;
    }
    
    char* getString() { return m_data; }
    int getLength() { return m_length; }
};

int main()
{
    MyString hello("Hello");
    
    MyString str1 = hello;
    
    MyString str2;
    str2 = hello;
//
//    cout << (int*)hello.m_data << endl;
//    cout << hello.getString() << endl;
//
//    {
//        // 복사 생성자 호출
//        MyString copy = hello;
//        cout << (int*)copy.m_data << endl;
//        cout << copy.getString() << endl;
//        // 복사 생성된 copy가 스코프 밖으로 나가면서, 소멸자를 생성
//        // copy랑 hello는 같은 데이터의 주소를 사용한다.
//        // 그래서 copy가 소멸 되면서 hello가 갖고 있던 데이터와 주소를 삭제한다.
//    }
//
//    cout << hello.getString() << endl;

    return 0;
}
