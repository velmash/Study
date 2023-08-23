//
//  main.cpp
//  Chap7_8_default_parameter
//
//  Created by 윤형찬 on 2020/10/28.
//

#include <iostream>

using namespace std;

void print(int x = 10, int y = 20, int z = 30); // in header

void print(int x, int y, int z)
{
    cout << x << " " << y << " " << z << endl;
}

int main()
{
    print();
    print(100);
    print(100, 200);
    print(100, 200, 300);
    
    return 0;
}
