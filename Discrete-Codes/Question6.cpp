#include<iostream>
#include<conio.h>

using namespace std;

int tower(int h){
	if(h==1)
	return 1;
	else
	return (2*(tower(h-1))+1);
}

int main()
{
	int height;
	cout<<"Enter the number of disks \n";
	cin>>height;
	cout<<"No. of steps is "<<tower(height);
}
