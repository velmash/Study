//
//  main.cpp
//  date_class
//
//  Created by 윤형찬 on 2020/11/06.
//

#include <iostream>

class Date
{
private:
    int year_, month_, day_;
    
    int getMonthsMaxDay(int year, int month)
    {
        int months[12] = { 31, 0, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
        
        if (month == 2)
        {
            if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
            {
                months[1] = 29;
            }
            else months[1] = 28;
        }
        
        return months[month - 1];
    }
    
public:
    void setDate(int year, int month, int day)
    {
        if (getMonthsMaxDay(year, month) < day || month > 12)
        {
            std::cout << "Error! Invalid Date Set." << std::endl;
            return;
        }
        
        year_ = year;
        month_ = month;
        day_ = day;
        
        std::cout << "All Set!" << std::endl;
    }
    void addDay(int inc)
    {
        day_ += inc;
        
        for (; day_ > getMonthsMaxDay(year_, month_);)
        {
            day_ -= getMonthsMaxDay(year_, month_);
            addMonth(1);
        }
    }
    void addMonth(int inc)
    {
        month_ += inc;
        
        for (; month_ > 12;)
        {
            month_ -= 12;
            addYear(1);
        }
    }
    void addYear(int inc)
    {
        year_ += inc;
    }
    
    void showDate()
    {
        std::cout << "Now Date() : " << year_ << "Y " << month_ << "M " << day_ << "D." << std::endl;
    }
};

int main()
{
    Date date;
    date.setDate(2020, 02, 01);
    date.addDay(366 + 30);
    date.showDate();
    
    date.setDate(2021, 02, 01);
    date.addDay(30);
    date.showDate();
}
