//15. Write a program to find sum of n elements entered by the user. To write this program, allocate memory dynamically using 
//malloc() / calloc() functions or new operator.

//Gaurav Sharma
#include<iostream>
#include<stdlib.h>
using namespace std;
int main()
{
int a,*b,c=0;
cout<<"enter no of elements:";
cin>>a;
//b=(int*)calloc(a,sizeof(int));
b=(int*)malloc(a*sizeof(int));
//b=new int[a];
cout<<"\nenter elements:";
for(int i=0;i<a;i++)
{ cin>>b[i];
c=c+b[i];
}
cout<<"\nsum is:"<<c;
}
