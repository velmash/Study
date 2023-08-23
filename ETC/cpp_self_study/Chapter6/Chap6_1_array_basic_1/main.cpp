//
//  main.cpp
//  Chapter6
//
//  Created by 윤형찬 on 2020/10/26.
//

#include <iostream>

using namespace std;

struct Rectangle
{
    int length;
    int width;
};

enum StudentName
{
    JACKJACK,     // = 0
    DASH,         // = 1
    VIOLET,       // = 2
    NUM_STUDENTS, // = 3
};

int main()
{
    int my_array[] { 1, 2, 0, 0, 0 };
    cout << my_array[2] << endl;
    cout << my_array[VIOLET] <<endl;
    
    int students_scores[NUM_STUDENTS];
    
    students_scores[JACKJACK] = 0;
    students_scores[DASH] =100;
    
    cout << sizeof(Rectangle) << endl;
    
    Rectangle rect_arr[10];
    
    cout << sizeof(rect_arr) << endl;
    
    rect_arr[0].length = 1;
    rect_arr[0].width = 2;
    
    return 0;
}
