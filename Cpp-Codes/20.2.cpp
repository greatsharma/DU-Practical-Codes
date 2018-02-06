//20. WAP to calculate GCD of two numbers with recursion
//Gaurav Sharma
#include <iostream>
using namespace std;
int Gcd(int m, int n)
{
    if (n != 0)
        return Gcd(n, m % n);
    else
        return m;
}
int main()
{
    int n, m, gcd;
    cout << "Enter the ist number :";
    cin >> m;
    cout << "Enter the 2nd number :";
    cin >> n;
    gcd = Gcd(m, n);
    cout << "Gcd is :" << gcd << endl;
return 0;
}
