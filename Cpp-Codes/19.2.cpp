//19. WAP to calculate Factorial of a number using recursion
//Gaurav Sharma
#include<iostream>
#include<conio.h>
using namespace std;
int fact(int );
int main()
{int n;
cout<<"enter the number:";
cin>>n;
cout<<endl<<"factorial is:"<<fact(n);
getch();
return 0;
}
int fact(int x)
{if(x==1)
return 1;
else return (fact(x-1)*x);
}

