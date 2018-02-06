//18. WAP to display Fibonacci series using iteration
//Gaurav Sharma
#include<iostream>
using namespace std;
int main()
{
    int a=1,b=1,c,n;
    cout<<"Enter number of fibonacci terms :";
    cin>>n;
    cout<<"Series is "<<a<<" "<<b;
    for(int i=1;i<=n-2;i++)
    {
        c=a+b;
        a=b;
        cout<<" "<<c;
        b=c;
        
    }
    cout<<endl;
}
