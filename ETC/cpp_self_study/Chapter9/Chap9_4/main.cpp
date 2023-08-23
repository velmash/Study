//
//  main.cpp
//  Chap9_4
//
//  Created by 윤형찬 on 2020/11/03.
//

#include <iostream>
#include <vector>
#include <algorithm>
#include <random>
using namespace std;

class Cents
{
private:
    int m_cents;
    
public:
    Cents(int cents = 0) { m_cents = cents; }
    int getCents() const { return m_cents; }
    int& getCents() { return m_cents; }
    
    // sort 할때는 > 말고 < 로 만들어 줘야함.
    // return 부등호를 >로 바꾸면 역순 정렬한다.
    friend bool operator < (const Cents &c1, const Cents &c2)
    {
        return c1.m_cents < c2.m_cents;
    }
    
    friend std::ostream& operator << (std::ostream &out, const Cents &cents)
    {
        out << cents.m_cents;
        return out;
    }
};

int main()
{
    vector<Cents> arr(20);
    for(unsigned int i = 0; i < 20; ++i)
        arr[i].getCents() = i;
    
    std::random_device rd;
    std::mt19937 g(rd());
    std::shuffle(arr.begin(), arr.end(),g);
    
    for(auto &e : arr)
        cout << e << " ";
    cout << endl;
    
    // 크기 비교를 위해 비교 연산자를 만들어줘야함
    std::sort(begin(arr), end(arr));
    
    for (auto &e : arr)
        cout << e << " ";
    cout << endl;
    
    return 0;
}
