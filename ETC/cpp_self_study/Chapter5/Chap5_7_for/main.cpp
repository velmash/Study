//
//  main.cpp
//  Chap5_7_for
//
//  Created by 윤형찬 on 2020/10/26.
//

#include <iostream>

int pow(int base, int exponent)
{
    int result = 1;
    
    for (int count = 0; count < exponent; ++count)
    {
        result *= base;
    }
    
    return result;
}
int main()
{
    std::cout << pow(2, 4) << std::endl;
    
    // 구구단
    for(int j = 1; j < 10; ++j)
    {
        std::cout << j <<"단 " << std::endl;
        for(int i = 1; i < 10; ++i)
        {
            std::cout << j << " * " <<  i << " = " << (i*j) << "\t";
        }
        std::cout << std::endl;
    }
    
    return 0;
}
