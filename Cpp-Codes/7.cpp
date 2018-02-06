//7.WAP to compute the factors of a given number.
//Gaurav Sharma

#include <iostream>
using namespace std;
int main()
{  int a,x;
cout<<"enter the no:";
cin>>a;
cout<<endl<<"factors of the given no are:";
for(int i=1;i<=a;i++)
{x=a%i;
if(x==0)
cout<<i<<endl;
}
return 0;
}
