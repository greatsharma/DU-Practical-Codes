//Write a program that swaps two numbers using pointers.
//Gaurav Sharma
#include <iostream>
using namespace std;
int main()
{
    int a, b, v, *p, *k, *m;
    cout << "Enter a and b :";
    cin >> a >> b;
    p = &a;
    k = &b;
    m = &v;
    cout << a << " " << b << endl;
    *m = *p;
    *p = *k;
    *k = *m;
    cout << a << " " << b;
}
