//28. Write a function that reverses the elements of an array in place. The function must accept only one pointer value 
//and return void.
//Gaurav Sharma

#include<iostream>
#include<conio.h>
using namespace std;
int i,n;
void reverse(int *);
int main()
{cout<<"enter no of elements:";
cin>>n;
int a[n];
cout<<"enter the elements of the array:";
for(i=0;i<n;i++)
cin>>a[i];
reverse(a);
cout<<"reversed order:\n";
for(i=0;i<n;i++)
cout<<a[i]<<"  ";
getch();
return 0;
}
void reverse(int *p)
{ int *m=p+n-1;
int y=n/2;
while(y>0)
{int x=*p;
*p=*m;
*m=x;
y--;
p++;
m--;
}

}

