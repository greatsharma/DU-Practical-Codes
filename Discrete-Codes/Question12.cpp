#include<iostream>
#include<conio.h>

using namespace std;

void display(int b[],int n)
{
	for(int i=0;i<n;i++)
	cout<<b[i]<<" ";
}

int combos(int b[],int k,int n,int s)
{
	if(	k== 0 )
	{
		b[k]=s;
		display(b,n);
		cout<<"\n";
		return 0;
	}
	for(int i=0;i<=s;i++)
	{
		b[k]=i;
		combos(b,k-1,n,s-i);
	}
}

int main()
{
	int s,n;
	cout<<"Enter the no. of groups ";
	cin>>n;
	cout<<"Enter the sum to be obtained ";
	cin>>s;
	int b[n];
	combos(b,n-1,n,s);
	return 0;
	
}
