//
//  main.cpp
//  Chap7_3_passing_arguments_by_reference
//
//  Created by 윤형찬 on 2020/10/28.
//

#include <iostream>
#include <vector>

using namespace std;

void printElement(vector<int> &arr)
//void printElement(int &arr[4])
{
    
}

int main()
{
    // int arr[] {1, 2, 3, 4 };
    vector<int> arr {1, 2, 3, 4};
    
    printElement(arr);
    
    return 0 ;
}
