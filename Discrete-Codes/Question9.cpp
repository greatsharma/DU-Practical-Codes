#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
int i,size,temp,counter=0;

cout<<"enter the size of array:";
cin>>size;

int *array=new int[size];
cout<<"\nEnter the array:";

for(i=0;i<size;i++)
cin>>array[i];

for(int t=0;t<size;t++)
{
	for(int j=0;j<t;j++)
	{
		if(array[t]<array[j])
		{
			temp=array[j];
			array[j]=array[t];
			array[t]=temp;
		}
			++counter;
	}
	
		cout<<"\nintermediate result:";
	for(i=0;i<size;i++) cout<<"  "<<array[i];
	cout<<endl;

}

cout<<endl<<"Final result:";
for(i=0;i<size;i++)
cout<<endl<<array[i];

cout<<"\nTotal comparisons:"<<counter;

getch();
return 0;
}








/*do
{ cout<<"\ngold";
	++i;
for(int j=0;j<=i;j++)
	{
		cout<<"\nsilver";
		for(int t=j+1;t<=i;t++)
		{
			cout<<"\nbronze";
			if(array[t]<array[j])
			{
				cout<<"\nplatinum";
				temp=array[j];
				array[j]=array[t];
				array[t]=temp;
			}
		}
	}
	
	
}while(i<size);
*/
