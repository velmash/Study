//
//  main.cpp
//  Chap6_13_pointer_and_const
//
//  Created by 윤형찬 on 2020/10/27.
//

#include <iostream>

using namespace std;

int main() {
    int value = 5;
    const int *ptr1 = &value;
    int *const ptr2 = &value;
    const int *const ptr3 = &value;
    
    return 0;
}
