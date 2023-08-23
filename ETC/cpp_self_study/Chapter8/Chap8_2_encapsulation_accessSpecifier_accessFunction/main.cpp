//
//  main.cpp
//  Chap8_2_encapsulation_accessSpecifier_accessFunction
//
//  Created by 윤형찬 on 2020/10/30.
//

#include <iostream>

using namespace std;

class Date
{
    int m_month;
    int m_day;
    int m_year;
    
public:
    void setDate(const int& month_input, const int& day_input, const int& year_input)
    {
        m_month = month_input;
        m_day = day_input;
        m_year = year_input;
    }
    
    void copyFrom(const Date &original)
    {
        m_month = original.m_month;
        m_day = original.m_day;
        m_year = original.m_year;
    }
    
    void setMonth(const int& month_input)
    {
        m_month = month_input;
    }
    
    //setDay, setYear ... // setters
    
    const int& getDay() // getters
    {
        return m_day;
    }
};

int main()
{
    Date today; // { 8, 4, 2025 ];
    today.setDate(8, 4, 2025);
    today.setMonth(10);
    
    cout << today.getDay() << endl;
    
    Date copy;
    copy.copyFrom(today);
    
    return 0;
}
