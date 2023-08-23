//
//  main.cpp
//  Chap6_9_pointer_operation_array_indexing
//
//  Created by 윤형찬 on 2020/10/27.
//

#include <iostream>

using namespace std;

int main()
{
    int array[] = { 9, 7, 5, 3, 1};
    int *ptr = array;
    
    for(int i = 0; i < 5; ++i)
    {
        //cout << array[i] << " " << (uintptr_t)&array[i] << endl;
        cout << *(ptr+i) << " " <<(uintptr_t)(ptr + i) << endl;
    }
    
    
    char name[] = "Jack Jack";
    
    const int n_name = sizeof(name) / sizeof(name[0]);
    
    for(int i = 0; i < n_name ; ++i)
    {
        cout << *(name + i) ;
    }
    
    return 0;
}
