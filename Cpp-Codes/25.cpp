//25. Create a structure Student containing fields for Roll No., Name, Class, Year and Total Marks.
//Create 10 students and store them in a file.

//Gaurav Sharma

#include <iostream>
#include <string>
#include <fstream>
using namespace std;
struct Student
{
    int Roll, Marks, Year, Class;
    string Name;
};

int main()
{
    int i;
    Student St[10];
    ofstream s("student_record.txt");
    for (i = 0; i < 10; i++)
    {
        cout << "Enter the name : ";
        getline(cin, St[i].Name);
        s << St[i].Name << "\n";
        cout << "Enter class :";
        cin >> St[i].Class;
        s << St[i].Class << "\n";
        cout << "Enter year :";
        cin >> St[i].Year;
        s << St[i].Year << "\n";
        cout << "Enter the Roll No. : ";
        cin >> St[i].Roll;
        s << St[i].Roll << "\n";
        cout << "Enter the Marks : ";
        cin >> St[i].Marks;
        s << St[i].Marks << "\n";
        s << "\n";
        cin.ignore();
    }
    s.close();
}
