 /*
  Name: Binary Search
  Copyright: n
  Author: Anshuman Bhardwaj && Gaurav Sharma
  Date: 09/02/18 09:51
  Description: Binary Search using Recursion
*/
#include<iostream>
#include<conio.h>
using namespace std;

class BinarySearch
{
    
      
   public: 
             int start, end , mid;
           
             BinarySearch()
      {
       start=0;
      }
      
      void sort(int array[],int size)
      {
       for(int i = 0 ;i<size;i++)
       {
        for(int j=i+1;j<size;j++)
        {
                if(array[i]>array[j])
                {
                       int temp=array[i];
                       array[i]=array[j];
                       array[j]=temp;
                           }
                }
       }
      }

bool search(int array[],int key)
{
     if(end!= mid )
     {
              mid = (end+start)/2;
         if(array[mid]>key)
         {
          end=mid-1;
          return search(array,key);
         }
         else if(array[mid]<key)
         {
              start=mid+1;
              return search(array,key);
         }
         else
         return true;
     }
     else
     return false;       
}
};
int main()
{
    BinarySearch object;
    int size,key;
    cout<<"Enter the size of array ";
    cin>>size;
    int array[size];
    cout<<"Enter the array: \n";
    for(int i=0;i<size;i++)
            cin>>array[i];
            object.sort(array,size);
            for(int i=0;i<size;i++) cout<<endl<<array[i]<<"  ";
    cout<<"\nEnter the key to be searched : ";
    cin>>key;
    object.end=size-1;
    if(object.search(array,key))
    cout<<":) Found at index "<<object.mid;
    else
    cout<<":( Not found!!!\n";
    getch();
}
