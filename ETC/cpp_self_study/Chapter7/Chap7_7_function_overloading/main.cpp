//
//  main.cpp
//  Chap7_7_function_overloading
//
//  Created by 윤형찬 on 2020/10/28.
//

#include <iostream>

using namespace std;

int add(int x, int y)
{
    return x + y;
}

double add(double x, double y)
{
    return x + y;
}

int main()
{
    cout << add(1,2) << endl;
    cout << add(3.0, 4.0) << endl;
    
    return 0;
}
