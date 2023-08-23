//
//  main.cpp
//  Chap6_7_pointer
//
//  Created by 윤형찬 on 2020/10/27.
//

#include <iostream>

using namespace std;

int main()
{
    int x = 5;
    double d = 1.0;

    int *ptr_x = &x;
    double *ptr_d = &d;
    
    cout << "x : " << x << "\tptr_x : " << *ptr_x << endl;
    cout << "d : " << d << "\tptr_d : " << *ptr_d << endl;
    cout << "x의 주소 : " << &x << "\t*ptr_x : " << ptr_x <<  endl;
    cout << "d의 주소 : " << &d << "\t*ptr_d : " << ptr_d <<  endl;
    
    cout << "int 자료형의 크기 : " << sizeof(x) << endl;
    cout << "double 자료형의 크기 : " << sizeof(d) << endl;
    cout << "int 자료형의 포인터 변수 크기 : " << sizeof(ptr_x) << endl;
    cout << "double 자료형의 포인터 변수 크기 : " << sizeof(ptr_d) << endl;

    return 0;
}
