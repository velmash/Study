//
//  main.cpp
//  Chap5_6_do-while
//
//  Created by 윤형찬 on 2020/10/26.
//

#include <iostream>

int main()
{
    using namespace std;
    
    int selection; // must be declared outsied do/while loop
    
    do
    {
        cout << "1. add" << endl;
        cout << "2. sub" << endl;
        cout << "3. mult" << endl;
        cout << "4. div" << endl;
        cin >> selection;
    } while (selection <= 0 || selection >= 5);
    
    cout << "You Selected " << selection << endl;
    
    return 0;
}
