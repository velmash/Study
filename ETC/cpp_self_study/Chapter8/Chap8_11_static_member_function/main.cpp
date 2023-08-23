//
//  main.cpp
//  Chap8_11_static_member_function
//
//  Created by 윤형찬 on 2020/11/02.
//

#include <iostream>
using namespace std;

class Something
{
private:
    static int s_value;
    
public:
    static int getValue()
    {
        return s_value;
    }
    
    int temp()
    {
        return this->s_value;
    }
};

int Something::s_value = 1024;

int main()
{
    cout << Something::getValue() << endl;
    
    Something s1, s2;
    cout << s1.getValue() << endl;
    
    int (Something::*fptr1)() = &Something::temp;
    
    cout << (s2.*fptr1)() << endl;
    
    int (*fptr2)() = &Something::getValue;
    
    cout << fptr2 << endl;
    
    return 0;
}
