//
//  main.cpp
//  Chap6_8_Null_pointer
//
//  Created by 윤형찬 on 2020/10/27.
//

#include <iostream>

void doSomething(double *ptr)
{
    std::cout << "address of pointer varaible in doSomething() " << &ptr << std::endl;
    
    if (ptr != nullptr)
    {
        // do sommethin useful
    std::cout << *ptr << std::endl;
    } else
    {
        // do nothing wit ptr
    std::cout << "Null ptr, do no thing" << std::endl;
    }
}

int main(int argc, const char * argv[]) {
    double *ptr{ nullptr }; //modern c++
    
    doSomething(ptr);
    doSomething(nullptr);
    
    double d = 123.4;
    
    doSomething(&d);
    
    ptr = &d;
    
    doSomething(ptr);
    
    std::cout << "address of pointer varaible in main() " << &ptr << std::endl;
    
    return 0;
}
