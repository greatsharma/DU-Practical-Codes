//19. WAP to calculate Factorial of a number using iteration
//Gaurav Sharma
#include<iostream>
using namespace std;
int main()
{
    int n,f=1;
    cout<<"Enter the number: ";
    cin>>n;
    cout<<"factorial of "<<n<<" is  ";
    for(int i=1;i<=n;i++)
    {
    	f*=i;
	}
	cout<<f;
	return 0;
}
