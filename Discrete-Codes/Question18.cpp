#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
	int n,**arr,inDegree,outDegree,**res,sum=0;
	char *vertex;
	bool isIt=false;
	cout<<"Enter number of vertex ";
	cin>>n;
   arr =new int *[n];
   res =new int *[n];
   
   vertex=new char[n];
   cout<<"Enter the vertex name :";
	for(int i=0;i<n;i++)
	{
		arr[i]=new int[n];
	}
	for(int i=0;i<n;i++)
	{
		res[i]=new int[n];
	}
	for(int i=0;i<n;i++)
	{
		cin>>vertex[i];
	}
	cout<<"Enter adjacency matrix ";
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		cin>>arr[i][j];
	}
	cout<<" ";
	for(int i=0;i<n;i++)
	cout<<" "<<vertex[i];
	cout<<endl<<endl;
//	print
	for(int i=0;i<n;i++)
	{
		cout<<vertex[i]<<" ";
		for(int j=0;j<n;j++)
		cout<<arr[i][j]<<" ";
		cout<<"\n";
	}
	int times;
	cout<<"ENter the length of path \n";
	cin>>times;
//	multiply
for(int time=0;time<times;time++)
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			sum=0;
			for(int k=0;k<n;k++)
			{
				sum+=arr[i][k]*arr[k][j];
				res[i][j]=sum;
			}
		}
	}
//	print
	cout<<" ";
	for(int i=0;i<n;i++)
	cout<<" "<<vertex[i];
	cout<<endl<<endl;
//	print
	for(int i=0;i<n;i++)
	{
		cout<<vertex[i]<<" ";
		for(int j=0;j<n;j++)
		cout<<res[i][j]<<" ";
		cout<<"\n";
	}
//	paths
int from,to;
char m,s;
cout<<"ENter the vetex you want to ";
cin>>m;
cin>>s;
for(int i=0;i<n;i++)
{
	if(vertex[i]==m)
		from=i;
	if(vertex[i]==s)
		to=i;
}
cout<<"Number of paths from "<<m<<" to "<<s<<" of length "<<times<<" is "<<from<<" "<<to<<" "<<res[from][to];
}
