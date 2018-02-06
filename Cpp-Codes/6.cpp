//6. Write a function to find whether a given no. is prime or not. Use the same to generate the prime numbers less than 100.
//Gaurav Sharma

#include <iostream>
using namespace std;
int main()
{  int i,j,x,n,s=0;
cout<<"enter the no:";
cin>>n;
for(i=2;i<=n/2;i++)
{ x=n%i;
if(x==0)
 ++s;
}
if(n<=1) cout<<"not prime";
else
if(s==0)
 cout<<"prime";
else
 cout<<"not prime";

  for(i=2;i<=100;i++)
{int s=0;
for(j=2;j<=i/2;j++)
{
x=i%j;
if(x==0)
++s;}
if(s==0)
cout<<endl<<i;
}
return 0;
}
