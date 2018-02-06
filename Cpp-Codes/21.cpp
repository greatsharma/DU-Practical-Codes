/*
21. Create Matrix class using templates. Write a menu-driven program to perform following Matrix
operations (2-D array implementation):
a) Sum
b) Difference 
c) Product
d) Transpose
*/
//Gaurav Sharma
#include <iostream>
using namespace std;
int i, k, j;
template <class gaurav>
class Matrix
{
  private:
    gaurav m, n;
    gaurav c[6][6];

  public:
    Matrix()
{
    cout << "Enter rows " << endl;
    cin >> m;
    cout << "Enter columns " << endl;
    cin >> n;
    cout << "Enter matrix" << endl;
    for (i = 0; i < m; i++)
        for (j = 0; j < n; j++)
            cin >> c[i][j];
}
    gaurav sum(Matrix r);
    gaurav diff(Matrix r);
    gaurav pro(Matrix r);
    gaurav trans();
    ~Matrix() {}
};


template <class gaurav>
gaurav Matrix<gaurav>::sum(Matrix r)
{
    
    if (m == r.m && n == r.n)
    {
        cout << "Sum is \n";
        for (i = 0; i < m; i++)
        {
            for (j = 0; j < r.n; j++)
                cout << c[i][j] + r.c[i][j] << " ";
            cout << endl;
        }
    }
    else
        cout << "\nEnter equivalent matrices!!"<<endl;
}
template <class gaurav>
gaurav Matrix<gaurav>::diff(Matrix r)
{
    
    if (m == r.m && n == r.n)
    {
        cout << "Difference is \n";
        for (i = 0; i < m; i++)
        {
            for (j = 0; j < n; j++)
                cout << c[i][j] - r.c[i][j] << " ";
            cout << endl;
        }
    }
    else
        cout << "Enter equivalent matrices!!"<<endl;
}
template <class gaurav>
gaurav Matrix<gaurav>::pro(Matrix r)
{
    if (n == r.m)
    {
        int f = 0;
        cout << "Multiplication result\n";
        for (i = 0; i < m; i++)
        {
            for (j = 0; j < r.n; j++)
            {
                for (k = 0; k < n; k++)
                    f += c[i][k] * r.c[k][j];
                cout << f << " ";
            }
            cout << endl;
        }
    }
    else
        cout << "\nEnter matrices such that b = x !!"<<endl;
}
template <class gaurav>
gaurav Matrix<gaurav>::trans()
{
    cout << "Transpose is \n";
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
            cout << c[j][i] << " ";
        cout << endl;
    }
}
int main()
{
    Matrix<int> q;
    Matrix<int> r;
    q.diff(r);
    q.trans();
    r.trans();
    q.pro(r);
    q.sum(r);
}
