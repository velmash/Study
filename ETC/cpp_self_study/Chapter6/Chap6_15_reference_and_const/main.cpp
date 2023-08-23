//
//  main.cpp
//  Chap6_15_reference_and_const
//
//  Created by 윤형찬 on 2020/10/28.
//

#include <iostream>

using namespace std;

void doSomething(const int &x)
{
    cout << x << endl;
    cout << &x << endl;
}

int main()
{
    int a = 1;
    
    doSomething(a);
    doSomething(1);
    doSomething(a + 3);
    doSomething(3 * 4);

    return 0;
}
