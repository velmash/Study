//
//  main.cpp
//  Chapter8
//
//  Created by 윤형찬 on 2020/10/30.
//

#include <iostream>
#include <string>
#include <vector>

using namespace std;

// Friend : name, address, age, height, weight, ...

class Friend
{
public: // 접근 제어자access specifier (public, private, protected)
    string name;
    string address;
    int age;
    double height;
    double weight;
    
    void print()
    {
        cout << name << " " << address << " " << age << " " << height << " " << height << endl;
    }
};

int main()
{
    Friend jj { "Jack", "seoul", 2, 30, 10 }; // instanciation, instance
    jj.print();
    
    vector<Friend> my_friends;
    my_friends.resize(2);
    
    for(auto &ele : my_friends)
        ele.print();
    
    return 0;
}
