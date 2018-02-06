//20. WAP to calculate GCD of two numbers without recursion
//Gaurav Sharma
#include<iostream>
using namespace std;
int main()
{   
    int i,n,m,c,gcd;
    cout<<"Enter the ist number :";
    cin>>n;
    cout<<"Enter the 2nd number :";
    cin>>m;
    if(m<=n)
    c=m;
    else
    c=n;
    for(i=1;i<=c;i++)
    { if(m%i==0&&n%i==0)
      gcd=i;
    }

    cout<<"Gcd is :"<<gcd<<endl;
    
    return 0;
}
