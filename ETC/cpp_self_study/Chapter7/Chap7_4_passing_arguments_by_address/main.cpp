//
//  main.cpp
//  Chap7_4_passing_arguments_by_address
//
//  Created by 윤형찬 on 2020/10/28.
//

#include <iostream>
using namespace std;

typedef  int* pint;

void foo(pint ptr)
{
    cout << *ptr << " " << ptr << " " << &ptr << endl;
}

int main()
{
    int value = 5;
    
    cout << value << " " << &value << endl;
    
    pint ptr = &value;
    
    cout << &ptr << endl;
    
    foo(ptr);
    foo(&value);
    
    return 0;
}
