#include<iostream>
#include<conio.h>
using namespace std;

int method_one(int n)
{
	if(n==0) return 1;
	else
	return (method_one(n-1)+n);
}

int method_two(int n)
{
	if(n==0) return 1;
	else return(method_two(n-1)+(n*n));
}

int method_three(int n)
{
	if(n==1) return 1;
	else
	return (2*(method_three(n/2))+n);
}

int main()
{
	int choice;
	int n,answer;
	char ch;
	
	do
	{
	
	cout<<"\nMENU";
	cout<<"\n1.T(n)=T(n-1)+n";
	cout<<"\n2.T(n)=T(n-1)+(n*n)";
	cout<<"\n3.T(n)=2*T(n)/2 +n";
	cout<<"\n4.Exit the code";
	cout<<"\nEnter your choice:";
	cin>>choice;
	
	switch(choice)
	{
	case 1:
{
	cout<<"Enter the value of n: ";
	cin>>n;

	    answer=method_one(n);
	cout<<endl<<answer;
}
	    break;
	    
	    case 2:
 
{
	cout<<"Enter the value of n: ";
	cin>>n;

	    answer=method_two(n);
	cout<<endl<<answer;
}
	    break;
case 3:
	{
	cout<<"Enter the value of n: ";
	cin>>n;

	    answer=method_three(n);
	cout<<endl<<answer;
}
	    break;

	default: cout<<"\nInvalid entry";
}
cout<<"\nWant more entries:";
cin>>ch;
}while(ch=='Y'||ch=='y');

return 0;
}
