//
//  main.cpp
//  Chap7_12_recursive_function_call
//
//  Created by 윤형찬 on 2020/10/28.
//

#include <iostream>
using namespace std;

int fibonacci(int num)
{
    if (num <= 1)
        return num;
    else
    {
        return fibonacci(num - 1) + fibonacci(num - 2);
    }
}

int main() {
    cout << fibonacci(15) << endl; 
    return 0;
}
