//
//  main.cpp
//  Chap6_20_std::array
//
//  Created by 윤형찬 on 2020/10/28.
//

#include <iostream>
#include <array>
#include <algorithm>

using namespace std;

void printLength(const std::array<int, 5>& my_arr)
{
    for (auto &element : my_arr)
        cout << element << " ";
    cout << endl;
}

int main()
{
    //int array[] = { 1, 2, 3, 4, 5 };
    std::array<int, 5> my_arr = { 21, 2, 312, 40, 5 };
    
    printLength(my_arr);
    
    std::sort(my_arr.begin(), my_arr.end());
    
    printLength(my_arr);
    
    std::sort(my_arr.rbegin(), my_arr.rend());
    
    printLength(my_arr);
    
    return 0;
}
