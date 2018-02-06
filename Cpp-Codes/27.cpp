//27. Copy the contents of one text file to another file, after removing all whitespaces.
//Gaurav Sharma

#include<iostream>
#include<fstream>
using namespace std;
int main()
{   
	string s;
	ofstream fo;
	fo.open("fileinp.txt");
	cout<<"\nenter data into file:";
	getline(cin,s);
	fo<<s;       
    fo.close();

ifstream fi("fileinp.txt");
fo.open("fileout.txt");
char chr[100];
while(!fi.eof())
 {  
    fi>>chr;
	fo<<chr;
	}
fi.close();
fo.close();
return 0;
}


