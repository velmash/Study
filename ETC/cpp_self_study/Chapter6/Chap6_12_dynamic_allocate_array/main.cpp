//
//  main.cpp
//  Chap6_12_dynamic_allocate_array
//
//  Created by 윤형찬 on 2020/10/27.
//

#include <iostream>

using namespace std;

int main()
{
    int length;
    
    cin >> length;
    
    // int array[length]
    int *array = new int[length] { 11, 22, 33, 44, 55, 66};
    
    array[0] = 1;
    array[1] = 2;
    
    for(int i = 0; i < length; i++)
    {
        cout << array[i] << endl;
        cout << (uintptr_t)&array[i] << endl;
    }
    
    delete [] array;
    
    return 0;
}
