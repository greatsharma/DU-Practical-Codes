//Gaurav Sharma

#include <iostream>
//#include<conio.h>
#include <math.h>
using namespace std;
class set
{
    int *arr, size;

  public:
    set()
    {
        size = 0;
        arr = 0;
    }
    void set_size()
    {
        cout << "Enter number of elements : ";
        cin >> size;
        arr = new int[size];
    }
    void enter()
    {
        cout << "Enter elments into set : " << endl;
        for (int i = 0; i < size; ++i)
        {
            cin >> arr[i];
        }
        unique();
        show();
    }
    void show()
    {
        cout << "\n\nSet is : {";
        for (int i = 0; i < size; ++i)
        {
            cout << arr[i] << ",";
        }
        cout << "}" << endl;
    }
    void powershow()
    {
        int bina[size];
        cout << "{ { },";
        for (int i = 1; i < pow(2, size); i++)
        {
            int out = bin(i);
            for (int j = 0; j < size; j++)
            {
                bina[j] = out % 10;
                out /= 10;
            }
            cout << "{";
            for (int j = 0; j < size; j++)
            {
                if (bina[j] == 1)
                {
                    cout << arr[j] << ",";
                }
            }
            cout << "},";
        }
        cout << " }";
    }
    int bin(int n) //Function to find binary equivalent of integer by recursion
    {
        if (n / 2 == 0)
            return 1;
        else
            return (10 * bin(n / 2) + n % 2);
    }
    void unique()
    {
        int t;
        for (int i = 0; i < size; ++i)
        {
            t = arr[i];
            int j = i + 1;

            while (j < size)

            {
                if (t == arr[j])
                {
                    for (int k = j; k < size; ++k)
                    {
                        arr[k] = arr[k + 1];
                    }
                    size--;
                }
                else
                    ++j;
            }
        }
    }
    void ismember(int n)
    {
        int flag = 0;
        for (int i = 0; i < size; ++i)
        {
            if (arr[i] == n)
            {
                flag = 1;
                break;
            }
        }
        if (flag == 0)
            cout << n << " does not belongs to set " << endl;
        else
            cout << n << " belongs to set " << endl;
    }
    void card()
    {
        cout << "Cardinality  : " << size << endl;
    }
};
int main()
{
    char ch;
    int choice, n;
    set s;
    s.set_size();
    s.enter();
    do
    {
        cout << "MENU";
        cout << "\n1.To print cardinality";
        cout << "\n2.To find a member of the set";
        cout << "\n3.To print the power set";
        cout << "\n Enter your choice:";
        cin >> choice;
        switch (choice)
        {
        case 1:
            s.card();
            break;
        case 2:
            cout << "Enter number to search : ";
            cin >> n;
            s.ismember(n);
            break;
        case 3:
            s.powershow();
            break;
        default:
            cout << "Invalid choice!!" << endl;
        }
        cout << "\nwant to enter more options(y/n):";
        cin >> ch;
    } while (ch == 'y' || ch == 'Y');
    // getch();
    return 0;
}
