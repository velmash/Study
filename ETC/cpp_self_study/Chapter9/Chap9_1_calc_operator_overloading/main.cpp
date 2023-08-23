//
//  main.cpp
//  Chapter9
//
//  Created by 윤형찬 on 2020/11/03.
//

#include <iostream>
using namespace std;

class Cents
{
private:
    int m_cents;
    
public:
    Cents(int cents = 0) { m_cents = cents; }
    int getCents() const { return m_cents; }
    int& getCents() { return m_cents; }
    
    // friend로 사용해도 되고, 멤버 직접받기도 가능하다
    // 멤버 직접 사용을 위해 파라미터를 하나 줄이고 this를 사용한다.
    Cents operator + (const Cents& c2)
    {
        return Cents(this->m_cents + c2.getCents());
    }
};

int main()
{
    Cents cents1(6);
    Cents cents2(8);
    
    cout << (cents1 + cents2 + Cents(6) + Cents(10)).getCents() << endl;
    
    return 0;
}
