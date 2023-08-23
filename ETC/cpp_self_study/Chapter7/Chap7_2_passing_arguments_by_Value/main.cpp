//
//  main.cpp
//  Chap7_2_passing_arguments_by_Value
//
//  Created by 윤형찬 on 2020/10/28.
//

#include <iostream>

using namespace std;

void doSomething(int y)
{
    cout << "In func " << y << " " << &y << endl;
}

int main() {
    doSomething(5);
    
    int x = 6;
    
    cout << "In main " << x << " " << &x << endl;
    
    doSomething(x);
    doSomething(x + 1);
    
    return 0;
}
