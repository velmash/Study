//
//  main.cpp
//  Chap8_14_nested_types
//
//  Created by 윤형찬 on 2020/11/02.
//

#include <iostream>
using namespace std;



class Fruit
{
public:
    enum FruitType
    {
        APPLE, BANANA, CHERRY,
    };
private:
    FruitType m_type;
    
public:
    Fruit(FruitType type) : m_type(type)
    {}
    
    FruitType getType() { return m_type; }
};

int main()
{
    Fruit apple(Fruit::APPLE);
    
    if(apple.getType() == Fruit::APPLE)
        std::cout << "Apple" << std::endl;
    
    return 0;
}
