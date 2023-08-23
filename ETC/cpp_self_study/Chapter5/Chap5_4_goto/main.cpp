//
//  main.cpp
//  Chap5_4
//
//  Created by 윤형찬 on 2020/10/26.
//

#include <iostream>
#include <cmath> // sqrt()

int main() {
    using namespace std;
    
    double x;
    tryAgain : // label
    
    cout << "Enter a non-negative number" << endl;
    cin >> x;
    
    if (x < 0.0)
        goto tryAgain;
    
    cout << sqrt(x) << endl;
    
    return 0;
}
