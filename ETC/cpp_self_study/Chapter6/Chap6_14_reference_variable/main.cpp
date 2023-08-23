//
//  main.cpp
//  Chap6_14_reference_variable
//
//  Created by 윤형찬 on 2020/10/28.
//

#include <iostream>

using namespace std;

void doSomething(int &n)
{
    cout << &n << endl;
    n = 10;
    cout << "In doSomething " << n << endl;
}

int main()
{
    int n = 5;
    
    cout << n << endl;
    
    cout << &n << endl;
    
    doSomething(n);
    
    cout << n << endl;
    
    return 0;
}
