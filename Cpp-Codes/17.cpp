//17. Given two ordered arrays of integers, write a program to merge the two-arrays to get an ordered array.

//Gaurav Sharma
#include<iostream>
#include<conio.h>
using namespace std;
int main()
{int i,j,n,m;
cout<<"enter no of elements in array 1:";
cin>>n;
int a[n];
cout<<endl<<"enter array 1:";
for(i=0;i<n;i++)
cin>>a[i];
cout<<endl<<"enter no of elements in array 2:";
cin>>m;
int b[m];
cout<<endl<<"enter array 2:";
for(i=0;i<m;i++)
cin>>b[i];
int k=n+m;
int c[k];
int s=n;
for(i=0;i<k;i++)
{if(i<n)
{c[i]=a[i];
--s;
}
else 
{c[i]=b[s];
s++;
}
}
for(i=0;i<k;i++)
{for(j=i+1;j<k;j++)
{if(c[j]<=c[i])
{int m;
m=c[i];
c[i]=c[j];
c[j]=m;}
}
}
cout<<endl<<"array in  order:";
for(i=0;i<k;i++)
cout<<c[i]<<"  ";
}
