//
//  main.cpp
//  Chap6_5_multi-dimensional_array
//
//  Created by 윤형찬 on 2020/10/27.
//

#include <iostream>

using namespace std;

int main()
{
    const int num_rows = 3;
    const int num_columns = 5;
    
    int array[][num_columns] // =
    {
        {1, 2, },
        {2, 3, 4, 5, 6},
        {7, 8, 9, 10, 11}
    };
    
    for(int row = 0; row < num_rows; ++row)
    {
        for(int col = 0; col < num_columns; ++col)
        {
            //cout << '[' << row << ']' << '[' << col << ']' << '\t';
            cout << array[row][col] << '\t';
        }
        cout << endl;
    }
    cout << endl;

    return 0;
}
