//
//  main.cpp
//  Chap5_9_random_number
//
//  Created by 윤형찬 on 2020/10/26.
//

#include <iostream>
#include <random>

int main()
{
    std::random_device rd;
    
    //create a mesenne twister,
    std::mt19937_64 mersenne(rd()); // 64bit 짜리 난수
    std::uniform_int_distribution<> dice(1, 6); // 1부터 6까지 동일한 확률로 나올수 있게 해준다.
    
    for(int count = 1; count <= 20; ++count)
    {
        std::cout << dice(mersenne) << std::endl;
    }
    
    return 0;
}
