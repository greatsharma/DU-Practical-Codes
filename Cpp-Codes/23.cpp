//23. Create a class Triangle. Include overloaded functions for calculating area. Overload assignment operator and equality operator.

//Gaurav Sharma

#include<iostream>
#include<math.h>
using namespace std;
class Triangle
{
    int s1, s2, s3;

  public:
    Triangle();
    Triangle(int);
    Triangle(int, int);
    Triangle(int, int, int);
    ~Triangle() {}
    void store(int, int, int);
    void area();
    void area(int a);
    void area(int, int);
    void operator=(Triangle);
    void operator==(Triangle);
};

Triangle::Triangle()
{
    s1 = 0;
    s2 = 0;
    s3 = 0;
}

Triangle::Triangle(int a)
{
    s1 = a;
    s2 = 0;
    s3 = 0;
}
Triangle::Triangle(int a, int b)
{
    s1 = a;
    s2 = b;
    s3 = 0;
}
Triangle::Triangle(int a, int b, int c)
{
    s1 = a;
    s2 = b;
    s3 = c;
}
void Triangle::area()
{
    float s;
    s = s1 + s2 + s3;
    s = s / 2;
    float k;
    k = s * (s - s1) * (s - s2) * (s - s3);
    if (k < 0)
        k = k * -1;
    cout << "\nArea is " << sqrt(k) << endl;
}
void Triangle::area(int a, int b)
{
    float area;
    area = 0.5 * a * b;
    cout << "\nArea is " << area;
}

void Triangle::store(int a, int b, int c)
{
    s1 = a;
    s2 = b;
    s3 = c;
}
void Triangle::operator=(Triangle t)
{
    s1 = t.s1;
    s2 = t.s2;
    s3 = t.s3;
}
void Triangle::operator==(Triangle t)
{
    if (s1 == t.s1 && s2 == t.s2 && s3 == t.s3)
        cout << "\nTriangles are equal ";
    else
        cout << "\nTriangles are not equal";
}
void area(int a)
{
    cout << "Area is :" << (1.732) * a * a / 4;
}

int main()
{
    Triangle t1(2, 8, 3);
    t1.store(2, 5, 4);
    t1.area(2, 4);
    t1.area();
    Triangle t3;
    t3 = t1;
    t3 == t1;
    return 0;
}
