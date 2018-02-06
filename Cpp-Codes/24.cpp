/*24. Create a class Box containing length, breath and height. Include following methods in it:
a)
 Calculate surface Area
b) Calculate Volume
c) Increment, Overload ++ operator (both prefix & postfix)
d) Decrement, Overload -- operator (both prefix & postfix)
e) Overload operator == (to check equality of two boxes), as a friend function
f) Overload Assignment operator
g) Check if it is a Cube or cuboid
Write a program which takes input from the user for length, breath and height to test the above
class.*/

//Gaurav Sharma

#include <iostream>
#include <math.h>
using namespace std;
class Box
{
    int h, l, b;

  public:
    Box();
    Box(int, int, int);
    ~Box() {}
    void sa();
    void vo();
    void in();
    Box operator++();
    Box operator++(int);
    Box operator--();
    Box operator--(int);
    void operator=(Box);
    friend void operator==(Box, Box);
    void check();
    void print();
};
Box::Box()
{
    h = 0;
    l = 0;
    b = 0;
}
Box::Box(int a, int m, int c)
{
    h = c;
    b = m;
    l = a;
}
void Box::sa()
{
    cout << "Surface area is :" << 2 * ((l * b) + (l * h) + (h * b)) << endl;
}
void Box::vo()
{
    cout << "Volume is :" << l * b * h << endl;
}

Box Box::operator++()
{
    l += 1;
    b += 1;
    h += 1;
    return *this;
}
Box Box::operator++(int)
{
    Box p(*this);
    l += 1;
    b += 1;
    h += 1;
    return p;
}
Box Box::operator--()
{
    l -= 1;
    b -= 1;
    h -= 1;
    return *this;
}
Box Box::operator--(int)
{
    Box k(*this);
    l -= 1;
    b -= 1;
    h -= 1;
    return k;
}
void operator==(Box A, Box B)
{
    if (A.h == B.h && A.l == B.l && A.b == B.b)
        cout << "Equal cuboids" << endl;
}
void Box::operator=(Box B)
{
    h = B.h;
    l = B.l;
    b = B.b;
}
void Box::check()
{
    if (h == b && b == l)
        cout << "Its a cube" << endl;
    else
        cout << "Its a cuboid" << endl;
}
void Box::in()
{
    cout << "\nEnter height ";
    cin >> h;
    cout << "\nEnter lenght";
    cin >> l;
    cout << "\nEnter breadth";
    cin >> b;
}
void Box::print()
{
    cout << l << " " << b << " " << h << endl;
}
int main()
{
   /* Box j(5,8,9);
    j.sa();
    j.vo();
    j.in();
    Box k;
    k = j;
    k.print();
    k == j;
*/
Box ob1(1,2,3);
Box ob2;
ob2=ob1++;
ob2.print();
ob2.print();
}
