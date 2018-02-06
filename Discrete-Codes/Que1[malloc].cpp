//Gaurav Sharma

#include "SET.h"
int main()
{
    char ch;
    int choice, n;
    SET s;
    s.input();
    do
    {
        cout << "\n=====MENU=====";
        cout << "\n   1.Show the set";
        cout << "\n   2.To print cardinality";
        cout << "\n   3.To find a member of the set";
        cout << "\n   4.To print the power set";
        cout << "\n   5.Exit the program";
        cout << "\n\n Enter your choice:";

        cin >> choice;
        switch (choice)
        {
        case 1:
            s.display();
            break;
        case 2:
            n = s.card();
            cout << "\ncardinality is " << n;
            break;
        case 3:
            cout << "\nEnter number to search : ";
            cin >> n;
            if (s.ismember(n))
                cout << "\n"
                     << n << " is a member";
            else
                cout << "\n"
                     << n << " is not a member";
            break;
        case 4:
            s.powershow();
            break;
        case 5:
            return 0;
            break;
        default:
            cout << "Invalid choice!!" << endl;
        }
        cout << "\nwant to enter more options(y/n):";
        cin >> ch;
    } while (ch == 'y' || ch == 'Y');

    return 0;
}
