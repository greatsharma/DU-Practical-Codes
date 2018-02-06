//3. WAP to compute the sum of the first n terms of the following series S = 1+1/2+1/3+1/4+......
//Gaurav Sharma

#include <iostream>
using namespace std;
int main()
{
    int n;
    float i, sum = 0.0;
    cout << "Given series : 1+1/2+1/3+1/4.....\n";
    cout << "Enter number of digits You want sum of : ";
    cin >> n;
    for (i = 0; i < n; i++)
    {
        sum += 1 / (1 + i);
    }
    cout << "Sum is : " <<sum << endl;
}
