//
//  main.cpp
//  Chapter5_3
//
//  Created by 윤형찬 on 2020/10/26.
//

#include <iostream>

using namespace std;

enum class Colors
{
    BLACK,
    WHITE,
    RED,
    GREEN,
    BLUE,
};

void printColorName(Colors color)
{
    switch (static_cast<int>(color))
    {
        case 0 :
            cout << "Black";
            break;
        case 1 :
            cout << "White";
            break;
        case 2 :
            cout << "Red";
            break;
        case 3 :
            cout << "Green";
            break;
        case 4 :
            cout << "Blue";
            break;
        default :
            cout << "Undefined input ";
    }
    cout << endl;
}

int main() {
    printColorName(Colors::BLACK);
    
    return 0;
}
