/*
16. Write a menu driven program to perform following operations on strings:
a) Show address of each character in string
b) Concatenate two strings without using strcat function.
c) Concatenate two strings using strcat function.
d) Compare two strings
e) Calculate length of the string (use pointers)
f) Convert all lowercase characters to uppercase
g) Convert all uppercase characters to lowercase
h) Calculate number of vowels
i) Reverse the string
*/
//Gaurav Sharma
#include <iostream>
#include <string>
#include "stdlib.h"
#include <cstring>
using namespace std;
int main()
{
    char c;
    string s, s1, g;
    int n, l, t, l1, flag;
    cout << "Enter string" << endl;
    getline(cin, s);
    n = s.length();
    cout << "Enter next string ";
    getline(cin, s1);
    l1 = s1.length();
    g = s;
    cout << s1.at(l1 - 1);
    char w[n], e[l1];
    int i = 0;
    for (i = 0; i < n; i++)
    {
        w[i] = s.at(i);
    }
    for (i = 0; i < l1; i++)
    {
        e[i] = s1.at(i);
    }
    do
    {
        cout << "\n1) Show address of each character in string"
             << "\n2) Concatenate two strings without using strcat function"
             << " \n3) Concatenate two strings using strcat function"
             << "\n4) Compare two strings"
             << " \n5) Calculate length of the string (use pointers)"
             << "\n6) Convert all lowercase characters to uppercase"
             << " \n7) Convert all uppercase characters to lowercase"
             << "\n8) Calculate number of vowels"
             << " \n9) Reverse the string \n";
        cin >> t;
        switch (t)
        {
        case (1):
        {
            for (int i = 0; i < n; i++)
            {
                cout << (&s + i) << endl;
            }
            break;
        }
        case 2:
        {
            s = s + s1; //withou
            cout << s;
            s = g;
            break;
        }
        case 5:
        {
            int j = 0, *q, length = 0;
            q = &j;
            while (s[*q] != '\0')
            {
                length++;
                (*q)++;
            }
            cout << "lenngth is  " << length;
            break;
        }
        case 3:
        {
            strcat(w, e);
            cout << w;
            break;
        }
        case 6: //small
        {
            int y;
            for (int i = 0; i < n; i++)
            {
                y = s.at(i);
                if (y >= 97 && y <= 122)
                    s.at(i) = y - 32;
            }
            cout << s;
            break;
        }
        case 4:
        {
            int q = strcmp(w, e);
            if (q == 0)
                cout << "\nStrings are equal";
            else
                cout << "\nStrings are not equal";
            break;
        }
        case 7:
        {
            int y;
            for (int i = 0; i < n; i++)
            {
                y = s.at(i);
                if (y >= 65 && y <= 90)
                    s.at(i) = y + 32;
            }
            cout << s;
            break;
        }
        case 8:
        {
            l = 0;
            for (int i = 0; i < n; i++) //vowels
            {
                if (s.at(i) == 'a' || s.at(i) == 'e' || s.at(i) == 'i' || s.at(i) == 'o' || s.at(i) == 'u' || s.at(i) == 'A' || s.at(i) == 'E' || s.at(i) == 'I' || s.at(i) == 'O' || s.at(i) == 'U')
                    l++;
            }
            cout << "Number of vowels " << l;
            break;
        }
        case 9: //reverse
        {
            for (int i = 0; i < n / 2; i++)
            {
                c = s.at(i);
                s.at(i) = s.at(n - i - 1);
                s.at(n - i - 1) = c;
            }
            cout << "Reversed string : " << s << endl;
        }
        default:
        {
        }
        }
        cout << "\nEnter 1 try again with correct input\n";
        cin >> flag;
    } while (flag == 1);
}
