//
//  main.cpp
//  Chap8_9_class_const
//
//  Created by 윤형찬 on 2020/11/02.
//

#include <iostream>
#include <string>
using namespace std;

class Something
{
public:
    string m_value = "default";
    
    const string& getValue() const
    {
        cout << "const version " << endl;
        return m_value;
    }
    
    string& getValue()
    {
        cout << "non_const version" << endl;
        return m_value;
    }
};

int main()
{
    Something something;
    something.getValue();
    // non-const는 리턴값이 const가 아니라서 새로운 값을 넣어 줄 수 있음
    something.getValue() = 10;
    
    const Something something2;
    something2.getValue();
    
    return 0;
}
