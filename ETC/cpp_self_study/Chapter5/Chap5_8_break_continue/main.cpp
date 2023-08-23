//
//  main.cpp
//  Chap5_8_break_continue
//
//  Created by 윤형찬 on 2020/10/26.
//

#include <iostream>

int main()
{
    using namespace std;
    int count(0);
    char ch;
    
    while (true)
    {
        cout << "input x to escape" << endl;
        cin >> ch;
        
        cout << ch << " " << count << endl;
        
        if (ch == 'x')
            break;
    }
    return 0;
}
