#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int degree, i, variable, result = 0;

    cout << "Enter the degree:";
    cin >> degree;

    int *array = new int[degree];
    for (i = 0; i <= degree; i++)
    {
        cout << "Enter coefficient of " << degree - i << " degree along with sign: ";
        cin >> array[i];
    }

    cout << "Enter the value of variable in integer: ";
    cin >> variable;

    for (i = 0; i <= degree; i++)
    {
        result += (array[i] * (pow(variable, degree - i)));
    }

    cout << "f(" << variable << ")=" << result;

    return 0;
}