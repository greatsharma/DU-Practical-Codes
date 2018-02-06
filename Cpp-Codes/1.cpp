//1. WAP to print the sum and product of digits of an integer.
//Gaurav Sharma

#include<iostream>
#include<conio.h>
using namespace std;
int main()
{int a,s=0,p=1;
cout<<"enter the integer:";
cin>>a;
do
{int x;
x=a%10;
s=s+x;
p=p*x;
a=a/10;
}while(a!=0);
cout<<endl<<"sum of the digits :"<<s;
cout<<endl<<"product of the digits:"<<p;
getch();
return 0;
}
