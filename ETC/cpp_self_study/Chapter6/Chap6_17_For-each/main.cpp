//
//  main.cpp
//  Chap6_17_For-each
//
//  Created by 윤형찬 on 2020/10/28.
//

#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int fibonacci[] = { 0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89 };
    
    //change array values =
    for(int number : fibonacci)
        number = 10;
    
    // output
    for(int number : fibonacci)
        cout << number << " ";
    cout << endl;
    
    
    //change array values
    for(auto &number : fibonacci)
        number *= 10;
    
    // output
    for(const auto &number : fibonacci)
        cout << number << " ";
    cout << endl;
    
    int max_number = 0;
    for(const auto &n : fibonacci)
        max_number = std::max(max_number, n);
    cout << max_number << endl;
    
    return 0;
}
