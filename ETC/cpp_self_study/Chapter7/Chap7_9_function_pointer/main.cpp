//
//  main.cpp
//  Chap7_9_function_pointer
//
//  Created by 윤형찬 on 2020/10/28.
//

#include <iostream>
#include <array>

using namespace std;

bool isEven(const int& number)
{
    if(number % 2 == 0) return true;
    else return false;
}

bool isOdd(const int& number)
{
    if(number % 2 != 0) return true;
    else return false;
}

void printNum(const array<int, 10>& my_array, bool (*check_fcn)(const int&) = isEven) // 함수 포인터 기본값 선언
{
    for(auto element : my_array)
    {
        if(check_fcn(element) == true) cout << element;
    }
    cout << endl;
}

int main()
{
    std::array<int, 10> my_arr = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };
    
    printNum(my_arr);
    printNum(my_arr, isOdd);
    
    return 0;
}
