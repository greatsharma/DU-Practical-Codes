//8. Write a macro that swaps two numbers. WAP to use it.
//Gaurav Sharma

#include<iostream>
#define SWAP(a, b) \
    {              \
        int t;     \
        t = a;     \
        a = b;     \
        b = t;     \
    }
using namespace std;
int main()
{ 
    int a, b;
    cout<<"enter no two be swaped:";
    cin >> a >> b;
    SWAP(a, b);
    cout<<"\n";
    cout << a << " " << b;
}
