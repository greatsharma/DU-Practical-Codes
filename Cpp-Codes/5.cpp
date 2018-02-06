//5. Write a function that checks whether a given string is Palindrome or not. Use this function to find whether the string 
//entered by user is Palindrome or not.

//Gaurav Sharma

#include <iostream>
#include <string>
#include <stdlib.h>
using namespace std;
int main()
{
  int f= 0, n;
  string p;
  cout << "Enter string :";
  getline(cin, p);
  n = p.length();
  for (int i = 0; i < n; i++)
  {
    if (p.at(i) != p.at(n - 1 - i))
      f = 1;
  }
  if (f == 0)
    cout << "Its a pallindrome" << endl;
  else
    cout << "Its not a pallindorme" << endl;
  return 0;
}
