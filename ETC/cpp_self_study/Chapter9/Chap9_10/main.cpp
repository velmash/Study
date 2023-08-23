//
//  main.cpp
//  Chap9_10
//
//  Created by 윤형찬 on 2020/11/04.
//

#include <iostream>
#include <cassert>
using namespace std;

class Fraction
{
private:
    int m_numerator;
    int m_denominator;
    
public:
    // 해당 생성자 막기
    Fraction(char) = delete;
    
    // 변환 생성자 막기
    explicit Fraction(int num = 0, int den = 1)
    : m_numerator(num), m_denominator(den)
    {
        assert( den != 0 );
    }
    
    Fraction(const Fraction& fraction) // copy constructor
    : m_numerator(fraction.m_numerator), m_denominator(fraction.m_denominator)
    {
        cout << "Copy constructor called " <<endl;
    }
          
    friend std::ostream &operator << (std::ostream &out, const Fraction &f)
    {
        out << f.m_numerator << " / " << f.m_denominator << endl;
        return out;
    }
};

void doSomething(Fraction frac)
{
    cout << frac << endl;
}

int main() {
    Fraction frac(7);
    
    // explicit 키워드로 변환 생성자 막기
    // doSomething(7);
    
    // delete 키워드로 강제로 막기
    // Fraction frac2('c');
    
    return 0;
}
