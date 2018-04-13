#include<iostream>
#include<conio.h>

using namespace std;

class BubbleSorting
{
	private:
		int i,j,size,*array;
	public:
		int counter=0;
		BubbleSorting(int size)
		{
			this->size=size;
			array=new int[size];
		}
	
	void input();	
	void display();
	void algorithm();
};

void BubbleSorting::input()
{
	for(i=0;i<size;i++) cin>>array[i];
}

void BubbleSorting::display()
{ cout<<endl<<"Final result:";
	for(i=0;i<size;i++) cout<<"  "<<array[i];
}

void BubbleSorting::algorithm()
{
	for(j=size;j>0;j--)
	{
	for(i=0;i<j-1;i++)
	{
		counter++;
		if(array[i]>array[i+1])
		{
			int temp=array[i];
			array[i]=array[i+1];
			array[i+1]=temp;
		}
	}
	
	cout<<"\nintermediate result:";
	for(i=0;i<size;i++) cout<<"  "<<array[i];
	cout<<endl;
}
}

int main()
{
    int size;
	cout<<"enter the size:";
	cin>>size;
	
	BubbleSorting object(size);
	
object.input();
object.algorithm();
object.display();

cout<<"\nTotal comparisons:"<<object.counter;

getch();
return 0;
}
