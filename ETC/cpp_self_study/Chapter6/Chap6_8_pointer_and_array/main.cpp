//
//  main.cpp
//  Chap6_8_pointer_and_array
//
//  Created by 윤형찬 on 2020/10/27.
//

#include <iostream>

int main()
{
    using namespace std;
    
    int array[5] = { 9, 7, 5, 3, 1 };
    
    cout << array[0] << " " << array[1] << endl;
    cout << array << endl;
    cout << &array[0] << endl;
    cout << &array[1] << endl;
    
    cout << *array << endl;
    
    int *ptr = array;
    cout << ptr << endl;
    cout << *ptr << " " << *(ptr + 1) << endl;
    
    cout << sizeof(array) << endl;
    cout << sizeof(ptr) << endl;
    
    return 0;
}
