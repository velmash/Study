//
//  main.cpp
//  Chap7_10_stack_and_heap
//
//  Created by 윤형찬 on 2020/10/28.
//

#include <iostream>
#include <vector>

using namespace std;

void printStack(const std::vector<int> &stack)
{
    for (auto &e : stack)
        cout << e << " ";
    cout << endl;
}

int main()
{
    std::vector<int> stack;
    // stack.reserve(1024); // 메모리의 용량을 미리 확보한다, size에는 포함 안된다.
    
    stack.push_back(3);
    printStack(stack);
    stack.push_back(5);
    printStack(stack);
    stack.push_back(7);
    printStack(stack);
    stack.pop_back();
    printStack(stack);
    stack.pop_back();
    printStack(stack);
    stack.pop_back();
    printStack(stack);
    
    return 0;
}
