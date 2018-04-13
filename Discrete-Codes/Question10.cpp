
/*
  Name: All permutations of a number
  Copyright: 
  Author: Anshuman Bhardwaj & Gaurav Sharma
  Date: 09/02/18 09:45
  Description: TO find all combinations of digits in a number
*/

#include <iostream>
#include <string>
#include<conio.h>

using namespace std;
int Count=1;


string swap(string number, int index, int with)
{
    int temp = (int)number[index];
    number[index] = number[with];
    number[with] = temp;
    return number;
}

string permute(string number, int size, int index, int sizenow)
{
    string a = number;
    if (size == 1)
        cout << number << endl;
    else if (size - index == 2)
    {
        for (int k = 0; k < 2; k++)
        {
            number = swap(number, index, size - 1);
            cout<<Count++ << ")  " << number << "\n";
        }
        return a;
    }
    else
    {
        for (int time = index; time < size; time++)
        {
            if (time == size - 1)
                number = swap(number, size - 1, 0);
            else if (time > 0)
                number = swap(number, time, 0);
            permute(number, size, index + 1, sizenow - 1);
        }
    }
}

int main()
{
    int size;
    string number, temps;
    cout << "Enter the numbers : ";
    getline(cin, number);
    size = number.length();
    permute(number, size, 0, size);
    getch();
}
