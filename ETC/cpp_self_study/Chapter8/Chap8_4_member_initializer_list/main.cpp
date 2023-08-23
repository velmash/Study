//
//  main.cpp
//  Chap8_4_member_initializer_list
//
//  Created by 윤형찬 on 2020/10/30.
//

#include <iostream>
#include <string>
using namespace std;

class Student
{
private:
    int m_id;
    string m_name;
    
public:
    // 위임 생성자 사용
    Student(const string& name_in)
    : Student(0, name_in) {}
    
    Student(const int& id_in, const string& name_in)
    : m_id(id_in), m_name(name_in) {}
    
    void print()
    {
        cout << m_id << " " << m_name << endl;
    }
};

int main()
{
    Student st1(0, "Jack Jack");
    st1.print();
    
    Student st2("Smith");
    st2.print();
    
    return 0;
}
