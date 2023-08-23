//
//  main.cpp
//  Chap8_10_static_member_variable
//
//  Created by 윤형찬 on 2020/11/02.
//

#include <iostream>
using namespace std;

class Something
{
public:
    static int s_value;
};

int Something::s_value = 1;

int main(int argc, const char * argv[]) {
    Something st1;
    Something st2;
    
    st1.s_value = 2;
    
    cout << &Something::s_value << " " << Something::s_value << endl;
    cout << &st1.s_value << " " << st1.s_value << endl;
    cout << &st2.s_value << " " << st2.s_value << endl;
    
    return 0;
}
