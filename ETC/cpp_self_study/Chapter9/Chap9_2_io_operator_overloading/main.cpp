//
//  main.cpp
//  Chap9_2_io_operator_overloading
//
//  Created by 윤형찬 on 2020/11/03.
//

#include <iostream>
#include <fstream>
using namespace std;

class Point
{
private:
    double m_x, m_y, m_z;
    
public:
    Point(double x = 0.0, double y = 0.0, double z = 0.0)
    : m_x(x), m_y(y), m_z(z)
    {}
    
    double getX() { return m_x; }
    double getY() { return m_y; }
    double getz() { return m_z; }
    
    friend std::ostream& operator << (std::ostream &out, const Point &point)
    {
        out << "( " << point.m_x << " " << point.m_y << " " << point.m_z << " )";
        return out;
    }
    
    friend std::istream& operator >> (std::istream &in, Point &point)
    {
        in >> point.m_x >> point.m_y >> point.m_z;
        
        return in;
    }
};
int main()
{
    ofstream of("/Users/hyengchan/Documents/dev/cpp_self_study/Chapter9/Chap9_2_io_operator_overloading/out.txt");
    
    Point p1(0.0, 1.2, 6.2), p2(3.5, 12.2, 6.9);
    
    cout << p1 << " " << p2;
    of << p1 << " " << p2 << endl;
    
    of.close();
    
    Point p3, p4;
    
    cin >> p3 >> p4;
    cout << p3 << " " << p4;
    
    
    return 0;
}
