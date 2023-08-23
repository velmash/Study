//
//  main.cpp
//  Chap9)8
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
    void settCents(int cents) { m_cents = cents; }
    
    // 형변환 오버로딩
    operator int()
    {
        return m_cents;
    }
};

class Dollar
{
private:
    int m_dollars = 0;
    
public:
    Dollar(const int& input) : m_dollars(input) {}
    
    operator Cents()
    {
        return Cents(m_dollars * 100);
    }
};

void printInt(const int &value)
{
    cout << value << endl;
}

int main() {
    Cents cents(7);
    printInt(cents);
    
    Dollar dol(2);
    Cents cents2 = dol;
    printInt(cents2);
    
    return 0;
}
