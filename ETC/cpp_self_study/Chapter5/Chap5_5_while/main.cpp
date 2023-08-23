//
//  main.cpp
//  Chap5_5_while
//
//  Created by 윤형찬 on 2020/10/26.
//

#include <iostream>

int main() {
    using namespace std;
    
    cout << "While-loop test" << endl;
    
    int outer_count = 1;
    
    while(outer_count <= 5)
    {
        int inner_count = 1;
        while (inner_count <= outer_count)
        {
            cout << inner_count++ << " ";
        }
        cout << endl;
        ++outer_count;
    }
    
    return 0;
}
