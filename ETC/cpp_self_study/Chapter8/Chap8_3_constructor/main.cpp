//
//  main.cpp
//  Chap8_3_constructor
//
//  Created by 윤형찬 on 2020/10/30.
//

#include <iostream>

using namespace std;

class Fraction
{
private:
    int m_numerator;
    int m_denominator;
    
public:
    Fraction(const int& num_in = 1, const int& den_in = 1)
    {
        m_numerator = num_in;
        m_denominator = den_in;
    }
    void print()
    {
        cout << m_numerator << " / " << m_denominator << endl;
    }
};

int main()
{
    Fraction one_thirds(1, 3);
    one_thirds.print();
    
    Fraction no_constructor;
    no_constructor.print();
    
    return 0;
}
