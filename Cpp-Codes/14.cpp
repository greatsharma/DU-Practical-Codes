//14. Write a program which takes the radius of a circle as input from the user, passes it to another function that computes 
//the area and the circumference of the circle and displays the value of area and circumference from the main() function.

//Gaurav Sharma
#include<iostream>
using namespace std;
void arcm(float r,float&c,float&a)
{
    c=2*3.14*r;
    a=3.14*r*r;
}
int main()
{
    float r,c,a;
    cout<<"Enter the radius :";
    cin>>r;
    arcm(r,c,a);
    cout<<"Area is "<<a<<" & Circumfrence is "<<c<<endl;
}
