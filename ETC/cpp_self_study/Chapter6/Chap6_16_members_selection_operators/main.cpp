//
//  main.cpp
//  Chap6_16_members_selection_operators
//
//  Created by 윤형찬 on 2020/10/28.
//

#include <iostream>

struct  Person
{
    int age;
    double weight;
};

int main()
{
    Person person;
    
    person.age = 5;
    person.weight = 30;
    
    Person &ref = person;
    ref.age = 15;
    ref.weight = 35;
    
    Person *ptr = &person;
    ptr->age = 30;
    (*ptr).weight = 50;
    
    Person &ref2 = *ptr;
    ref.age = 45;
    
    std::cout << &person << std::endl;
    std::cout << &ref2 << std::endl;
    
    return 0;
}
