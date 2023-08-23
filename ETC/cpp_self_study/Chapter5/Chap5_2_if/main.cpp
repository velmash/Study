//
//  main.cpp
//  Chap5_2
//
//  Created by 윤형찬 on 2020/10/26.
//

#include <iostream>

int main() {
    using namespace std;
    
    int x, y;
    cin >> x >> y;
    
    if (x > 0 && y > 0)
        cout << "both numbers are positive" << endl;
    else if (x > 0 || y > 0)
        cout << "one of the numbers is positive" << endl;
    else
        cout << "Neither number is positive" << endl;
    
    return 0;
}
