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
    
    Cents operator - () const
    {
        return Cents(-m_cents);
    }
    
    bool operator ! () const
    {
        // 돈이 없을때만 true 출력하게 한다
        return (m_cents == 0 ) ? true : false;
    }
    
    friend std::ostream& operator << (std::ostream &out, const Cents &cents)
    {
        out << cents.m_cents;
        return out;
    }
};

int main()
{
    Cents cents1(6);
    Cents cents2(0);
    
    cout << cents1 << endl;
    cout << -cents1 << endl;
    cout << -Cents(-10) << endl;
    
    cout << !cents1 << " " << !cents2 << endl;
    
    return 0;
}
