//
//  main.cpp
//  Chap6_4_selection_sort
//
//  Created by 윤형찬 on 2020/10/27.
//

#include <iostream>

using namespace std;

void printArray(const int array[], const int length)
{
    for (int index = 0; index < length; ++index)
    {
        cout << array[index] << " ";
    }
    cout << endl;
}

int main()
{
    const int length = 5;
    
    int array[length] = { 3, 5, 2, 1, 4};
    
    printArray(array, length);
    
    // selection sort
    for(int startIndex = 0; startIndex < length -1; ++startIndex)
    {
        int smallest = startIndex;
        for(int currentIndex = startIndex + 1; currentIndex < length; ++currentIndex)
        {
            if(array[smallest] > array[currentIndex])
            {
                smallest = currentIndex;
            }
        }
        
        // swap two values in the array
        // std::swap(array[smallistIndex], array[startIndex]);
        {
            int temp = array[smallest];
            array[smallest] = array[startIndex];
            array[startIndex] = temp;
        }
        
        printArray(array, length);
    }
    
//    // bubble sort
//    for(int i = length - 1 ; i > 0 ; i--)
//    {
//        for(int j = 0; j < i; j++)
//        {
//            int temp;
//            if(array[j] > array[j+1])
//            {
//                temp = array[j];
//                array[j] = array[j+1];
//                array[j+1] = temp;
//            }
//        }
//    }
//    printArray(array, length);
    return 0;
}
