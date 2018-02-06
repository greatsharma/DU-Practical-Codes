/*10. WAP to perform following actions on an array entered by the user:
i) Print the even-valued elements
ii) Print the odd-valued elements
iii) Calculate and print the sum and average of the elements of array
iv) Print the maximum and minimum element of array
v) Remove the duplicates from the array
vi) Print the array in reverse order
The program should present a menu to the user and ask for one of the options. The menu should
also include options to re-enter array and to quit the program.*/
//Gaurav Sharma
#include<iostream>
using namespace std;
int i, j, k;

void even(int s[], int n)
{
    for (i = 0; i < n; i++)
    {
        if (s[i] % 2 == 0)
            cout << s[i] << " ";
    }
    cout << endl;
}
void odd(int s[], int n)
{
    for (i = 0; i < n; i++)
    {
        if (s[i] % 2 != 0)
            cout << s[i] << " ";
    }
    cout << endl;
}
void sumav(int s[], int n)
{
    float sum = 0;
    for (i = 0; i < n; i++)
    {
        sum += s[i];
    }
    cout << "Sum is " << sum << " & average is " << sum / n << endl;
}
void maxmin(int s[], int n)
{
    int max, min;
    max = s[0];
    min = s[0];
    for (i = 1; i < n; i++)
    {
        if (s[i] < min)
            min = s[i];
        if (s[i] > max)
            max = s[i];
        cout << "Maximum element is " << max << " Minimum element is " << min;
    }
}
void dupl(int s[], int n)
{
    for (i = 0; i < n; i++)
        for (j = i + 1; j < n; j++)
        {
            if (s[i] == s[j])
                s[i] = 0;
        }
    for (i = 0; i < n; i++)
        cout << s[i];
}
void rev(int s[], int n)
{
    for (i = n - 1; i >= 0; i--)
    {
        cout << s[i] << " ";
    }
    cout << endl;
}
int main()
{
    int n, t, d1;
    do
    {
        cout << "Enter size of array ";
        cin >> n;
        int s[n];
        cout << "Enter the array ";
        for (i = 0; i < n; i++)
            cin >> s[i];
        do
        {
            cout << "Enter 1 to print even-valued elements ";
			cout<<"\nEnter 2 to print odd valued elements ";
			cout<<"\nEnter 3 to get  sum and product of elements ";
			cout<<" \nEnter 4 to print minimun &maximum element ";
			cout<<"\nEnter 5 to remove duplicates ";
			cout<<"\nEnter 6 print array in reverse to ";
            cin >> t;
            switch (t)
            {
            case 1:
            {
                even(s, n);
                break;
            }
            case 2:
            {
                odd(s, n);
                break;
            }
            case 3:
            {
                sumav(s, n);
                break;
            }

            case 4:
            {
                maxmin(s, n);
                break;
            }

            case 5:
            {
                dupl(s, n);
                break;
            }

            case 6:
            {
                rev(s, n);
                break;
            }
            default:
            {
            }
            }
            cout << "Enter 1 to try another option \n2 for retry with new array\n E to exit ";
            cin >> d1;
        } while (d1 == 1);
    } while (d1 == 2);
    return 0;
}
