//
//  main.cpp
//  Chap8_8_class_code_header_file
//
//  Created by 윤형찬 on 2020/11/02.
//

#include "Calc.h"

int main()
{
    Calc cal(10);
    cal.add(10).sub(1).mult(2).print();
    // cal.add(10); cal.sub(1); cal.mult(2);
    // cal.print();
    
    return 0;
}
