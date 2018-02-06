// WAP to reverse a number.
//Gaurav Sharma

#include<iostream>
#include<conio.h>
using namespace std;
int main()
{int a;
cout<<"enter the integer:";
cin>>a;
cout<<endl<<"no in reverse order:";
do
{int x;
x=a%10;
cout<<x;
a=a/10;
}while(a!=0);
getch();
return 0;
}
