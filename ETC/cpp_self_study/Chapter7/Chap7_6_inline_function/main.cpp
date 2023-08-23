//
//  main.cpp
//  Chap7_6_inline_function
//
//  Created by 윤형찬 on 2020/10/28.
//

#include <iostream>

using namespace std;

inline int min (int x, int y)
{
    return x > y ? y : x;
}

int main()
{
    cout << min(5, 6) << endl;
    cout << min(3, 2) << endl;
    
    return 0;
}
