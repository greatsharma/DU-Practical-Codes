//26. Write a program to retrieve the student information from file created in previous question and print it in
//following format: Roll No. Name Marks

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
    int i, k;
    Student St[10];
    ifstream s("student_record.txt");
    for (i = 0; i < 10;i++)
    {
        cout << "\n Name is: ";
        s >> St[i].Name;
        cout << St[i].Name;
        s >> St[i].Class;
        s >> St[i].Year;
        cout << "\n Roll No. is : ";
        s >> St[i].Roll;
        cout << St[i].Roll;
        cout << "\n Marks are : ";
        s >> St[i].Marks;
        cout << St[i].Marks << endl;
    }
s.close();
}

