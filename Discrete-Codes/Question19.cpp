#include <iostream>

using namespace std;

int main()
{
  int n, **arr, sum, check,count=0;
  bool dCkt=false,uCkt=false,path=false;

  cout << "Enter number of vertex ";
  cin >> n;

  char *vertex = new char[n];
  cout << "Enter the vertex name :";
  for (int i = 0; i < n; i++)
  {
    cin >> vertex[i];
  }

  arr = new int *[n];
  for (int i = 0; i < n; i++)
  {
    arr[i] = new int[n];
  }

  cout << "Enter adjacency matrix ";
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < n; j++)
      cin >> arr[i][j];
  }

  cout << " ";
  for (int i = 0; i < n; i++)
    cout << " " << vertex[i];
  cout << endl
       << endl;

  for (int i = 0; i < n; i++)
  {
    cout << vertex[i] << " ";
    for (int j = 0; j < n; j++)
    {
      cout << arr[i][j] << " ";
    }
    cout << "\n";
  }
  cout<<" 1 for Euler ckt for directed 2 for Euler ckt for undirected 3 for Euler path";
  
  cin>>count;
  
  if(count==1)
  dCkt=true;

  if(count==2)
  uCkt=true;

  if(count==3)
  path=true;
  
  count=0;

  for (int i = 0; i < n; i++)
  {
    sum = 0;
    check = 0;
    for (int j = 0; j < n; j++)
    {
      sum += arr[i][j];
      check += arr[j][i];
    }
    if (dCkt&&(sum != check))
    {
      cout << "Not a Euler Circuit \n";
      return -1;
    }
    if (uCkt&&(sum % 2 == 1))
    {
      cout << "Not a Euler Circuit \n";
      return -1;
    }
    if (path&&(sum % 2 == 1))
    {
      count++;
      if (count > 2)
      {
        cout << "Not a Euler path \n";
        return -1;
      }

    }

  }
  if(uCkt)
  cout<<"A Euler ckt ";
  if(dCkt)
  cout<<"A Euler ckt ";
  if(path)
  cout<<"A Euler path ";

}
