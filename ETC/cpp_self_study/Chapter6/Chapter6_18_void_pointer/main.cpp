//
//  main.cpp
//  Chapter6_18_void_pointer
//
//  Created by 윤형찬 on 2020/10/28.
//

#include <iostream>

using namespace std;

//void pointer, generic pointer

enum Type
{
    INT,
    FLOAT,
    CHAR,
};

int main()
{
    int     i = 5;
    float   f = 3.0;
    char    c = 'a';
    
    void *ptr = nullptr;
    
    ptr = &c;
    ptr = &i;
    ptr = &f;
    
    Type type = FLOAT;
    
    cout << &f << " " << ptr << endl;
    
    if(type == FLOAT)
        cout << *static_cast<float*>(ptr) << endl;
    else if(type == INT)
        cout << *static_cast<int*>(ptr) << endl;
    
    return 0;
}
