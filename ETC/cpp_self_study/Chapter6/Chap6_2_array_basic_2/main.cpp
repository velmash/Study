//
//  main.cpp
//  Chap6_2_array_basic_2
//
//  Created by 윤형찬 on 2020/10/27.
//

#include <iostream>

using namespace std;

void doSomething(int students_scores[])
{
    cout << students_scores[1] << endl;
    cout << students_scores[2] << endl;
}

int main() {
    const int num_students = 20;
    int students_scores[num_students] { 1, 2, 3, 4, 5, };
    
    doSomething(students_scores);
    
    return 0;
}
