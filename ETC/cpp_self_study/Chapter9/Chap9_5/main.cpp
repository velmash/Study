//
//  main.cpp
//  Chap9_5
//
//  Created by 윤형찬 on 2020/11/03.
//

#include <iostream>
using namespace std;

class Digit
{
private:
    int m_digit;
public:
    Digit(int digit = 0) : m_digit(digit) {}
    
    // 전위형
    Digit & operator ++ ()
    {
        ++m_digit;
        // 자기 자신을 리턴한다.
        return *this;
    }
    
    // 후위형은 parameter에 dummy형이 아무거나 들어가야함
    Digit operator ++ (int)
    {
        Digit temp(m_digit);
        ++(*this);
        return temp;
    }
    
    friend std::ostream& operator << (std::ostream &out, const Digit &d)
    {
        out << d.m_digit;
        return out;
    }
};

int main()
{
    Digit d(5);
    
    cout << ++d << endl;
    cout << d << endl;
    
    cout << d++ << endl;
    cout << d << endl;
    
    return 0;
}
