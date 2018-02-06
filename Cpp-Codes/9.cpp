/*9. WAP to print a triangle of stars as follows (take number of lines from user):
    *
   ***
  *****
 *******
*********
Gaurav Sharma*/

#include <iostream>
using namespace std;
int main()
{
    int i, k, j, n;
    cout << "Enter number of lines :";
    cin >> n;
    for (i = 1; i <= n; i++)
    {
        {
            for (j = 1; j <= (n - i); j++)
                cout << " ";
            for (k = 1; k <= ((2 * i) - 1); k++)
                cout << "*";
        }
        cout << endl;
    }
}
