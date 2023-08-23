//
//  main.cpp
//  Chap6_19_이중포인터와동적다차원배열
//
//  Created by 윤형찬 on 2020/10/28.
//

#include <iostream>

int main() {
    using namespace std;
    
    const int row = 3;
    const int col = 5;
    
    const int s2da[row][col] =
    {
        {1, 2, 3, 4, 5},
        {6, 7, 8, 9, 10},
        {11, 12, 13, 14, 15}
    };
    
//    이중포인터 사용방법
//    int **matrix = new int*[row];
//
//    for (int r = 0 ; r< row; ++r)
//        matrix[r] = new int[col];
//
//    for (int r = 0; r < row; ++r)
//        for(int c = 0; c < col; ++c)
//            matrix[r][c] = s2da[r][c];
//
//    // print all elements
//    for (int r = 0; r < row; ++r)
//    {
//        for (int c = 0; c < col; c++)
//            cout << matrix[r][c] << " ";
//        cout << endl;
//    }
//
//    //delet
//    for (int r = 0; r < row; ++r)
//        delete[] matrix[r];
//    delete [] matrix;
    
    
    
//  이중포인터 사용 안하는 방법
    int *matrix = new int[row*col];
    
    for (int r = 0; r < row; ++r)
        for(int c = 0; c < col; ++c)
            matrix[c + col * r] = s2da[r][c];
    
    // print all elements
    for (int r = 0; r < row; ++r)
    {
        for (int c = 0; c < col; c++)
            cout << matrix[c + col * r] << " ";
        cout << endl;
    }
    
    delete[] matrix;
    
    return 0;
}
