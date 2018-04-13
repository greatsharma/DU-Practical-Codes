/*
  Name:question 5
  Copyright: 
  Author:Gaurav Sharma AND Anshuman Bhardwaj  
  Date: 09/03/18 09:28
  Description: fibonacii series
*/

#include<iostream>
#include<conio.h>
using namespace std;
int fib(int n)
{
    if(n==1)
    return 1;
    if(n==0) return 0;
    else
    return (fib(n-1)+fib(n-2));
}
int main()
{ int upto,sum=0;

    cout<<"\nEnter the element upto which you want to print fibonacii series:\n";
    cin>>upto;
    upto--;
    int x;
    cout<<"Series is ";
    cout<<0;
    for(int i=1;i<=upto;i++)
    {
          x= fib(i);
          sum+=x;
            cout<<" "<<x;
    }
    cout<<"\nAnd the sum is "<<sum;
     getch();
            return 0;
}

