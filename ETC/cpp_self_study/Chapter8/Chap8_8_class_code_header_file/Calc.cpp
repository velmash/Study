//
//  Calc.cpp
//  Chap8_8_class_code_header_file
//
//  Created by 윤형찬 on 2020/11/02.
//

#include "Calc.h"

Calc::Calc(int init_value)
: m_value(init_value)
{}

Calc& Calc::add(int value)
{
    m_value += value;
    return *this;
}

Calc& Calc::sub(int value)
{
    m_value -= value;
    return *this;
}

Calc& Calc::mult(int value)
{
    m_value *= value;
    return *this;
}

void Calc::print()
{
    std::cout << m_value << std::endl;
}
