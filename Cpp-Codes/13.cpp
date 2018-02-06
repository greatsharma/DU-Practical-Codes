//13. Write a program in which a function is passed address of two variables and then alter its contents
//Gaurav Sharma
#include <iostream>
using namespace std;
void swap(int &, int &);
int main()
{
    int a, b;
    cout << "Enter a and b:";
    cin >> a >> b;
    cout << a << " " << b << endl;
    swap(a, b);
    cout << a << " " << b;
}

void swap(int &a, int &b)
{
    int c;
    c = a;
    a = b;
    b = c;
}

