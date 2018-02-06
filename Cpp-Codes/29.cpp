//29. Write a program that will read 10 integers from user and store them in an array. Implement array using pointers.
//The program will print the array elements in ascending and descending order.

//Gaurav Sharma

#include<iostream>
#include<conio.h>
using namespace std;
int main()
{int i,j,x;
int a[10];
cout<<"enter the elements of the array:";
for(i=0;i<10;i++)
cin>>a[i];
int *p=a;
for(i=0;i<10;i++)
for(j=(i+1);j<10;j++)
{if(a[j]<*(p+i))
{x=*(p+i);
*(p+i)=a[j];
a[j]=x;
}
}
cout<<"acsending order:";
for(i=0;i<10;i++)
cout<<a[i]<<endl;

for(i=0;i<10;i++)
for(j=(i+1);j<10;j++)
{if(a[j]>*(p+i))
{x=*(p+i);
*(p+i)=a[j];
a[j]=x;
}
}
cout<<"decsending order:";
for(i=0;i<10;i++)
cout<<a[i]<<endl;
return 0;

}

