//. WAP to compute the sum of the first n terms of the following series S =1-2+3-4+5......
//Gaurav Sharma

#include <iostream>
#include<math.h>
using namespace std;
int main()
{
    int n, i;
    float sum=0;
    cout << "Given series : 1-2+3-4.....\n";
    cout << "Enter number of digits You want sum of : ";
    cin >> n;
    for(i=1;i<=n;i++)
    {
    	sum+=pow(-1,(i+1))*i;
	}
    cout << "Sum upto " << n << " is: " << sum << endl;
}
