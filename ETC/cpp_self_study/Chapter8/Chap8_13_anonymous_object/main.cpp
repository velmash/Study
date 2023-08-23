//
//  main.cpp
//  Chap8_13_anonymous_object
//
//  Created by 윤형찬 on 2020/11/02.
//

#include <iostream>
using namespace std;

class Cents
{
private:
    int m_cents;
 
public:
    Cents(const int& cents)
    : m_cents(cents)
    {}

    int getCents() const
    {
        return m_cents;
    }
};

Cents add(const Cents& c1, const Cents &c2)
{
    return Cents( c1.getCents() + c2.getCents() );
}

int main()
{
    cout << add(Cents(6), Cents(8)).getCents() << endl;
    
    return 0;
}
