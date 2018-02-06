//18. WAP to display Fibonacci series using recursion
//Gaurav Sharma
#include<iostream>
using namespace std;
int fib(int n)
{
    if(n==1||n==0)
    return 1;
    else 
    return(fib(n-1)+fib(n-2));
}
int main()
{
    int n,i;
    cout<<"Enter number of fibonacci terms :";
    cin>>n;
    for(i=0;i<n;i++)
    { 
    int p=fib(i);
    cout<<p<<" ";
    }

}
