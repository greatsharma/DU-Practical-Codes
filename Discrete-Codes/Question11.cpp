/*
  Name: Question 11
  Copyright: Gaurav Sharma and Anshuman Bhardwaz
  Author:  Gaurav Sharma and Anshuman Bhardwaz
  Date: 02/02/18 09:18
  Description: permutation and combination
*/
#include <iostream>
#include<conio.h>
using namespace std;

class comper
{
  private:
    float objects;
    float times;

  public:
    comper(float, float);
    int permutation();
    int combination();
    ~comper()
    {
    }
};

comper::comper(float objects, float times)
{
    this->objects = objects;
    this->times = times;
}

int comper::permutation()
{    
    if(this->times==0 || this->times==0)
    {
    return 1;
    }
    else
        return (this * permutation((x - 1),(this->times-1)));
}

int comper::combination(float x, float y)
{
    if(x==0 || this->times==0 || x == this->times)
    {
    return 1;
    }
    else
        return (combination((x - 1), (this->times - 1))+combination((x - 1), (this->times)));
}

int main()
{
    char ch;
    int choice;
    bool flag = false;
    float n, r;
  start:
    do
    {
        cout << "\nEnter n and r:";
        cin >> n >> r;
        if (r > n || r<0 || n<0)
        {
            cout << "Invalid input";
            getch();
        goto start;
        //    return 0;
        }
        comper obj(n, r);
        do
        {
            cout << "\n====MENU====";
            cout << "\n 1.Permutation";
            cout << "\n 2.Combination";
            cout << "\n 3.Try with new input";
            cout << "\n 4.Exit the program";
            cout << "\n Enter your choice :";
            cin >> choice;
            switch (choice)
            {
            case 1:
                cout << "\npermutation is " << obj.permutation();
                break;
            case 2:
                cout << "\ncombination is " << obj.combination();
                break;
            case 3:
                flag = true;
                break;
            case 4:
                return 0;
                
                
            default:
                cout << "\nInvalid choice !!";
            }
            if (flag)
                break;
            cout << "\nChoose more options(y/n):";
            cin >> ch;
        } while (ch == 'y' || ch == 'Y');
    } while (flag);
getch();
    return 0;
}
