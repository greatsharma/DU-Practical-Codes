/*Create the Person class. Create some objects of this class (by taking information from the user).
Inherit the class Person to create two classes Teacher and Student class. Maintain the respective
information in the classes and create, display and delete objects of these two classes (Use abstract class).*/

//Gaurav Sharma

#include<iostream>
using namespace std;

class person
{
	protected:
	string name;
		int age;
		public:
			
			virtual void info()=0;
			
};

class teacher : public person
{   string sub;
	public:
		teacher()
		{
			cout<<"\nobject of teacher is created";
		}
		
		~teacher()
		{
			cout<<"\nobject of teacher is destroyed";
		}
		
		void info()
{   
	cout<<"\nenter the name:";
	getline(cin,name);
	cin.ignore();
	   cout<<"enter age:";
   cin>>age;
   cin.ignore();
	cout<<"\nwhich subject teacher:";
	getline(cin,sub);
	cin.ignore();
}

};


class student : public person
{
int std;
public:
	student()
	{
		cout<<"\nobject of student is created";
	}
	
	~student()
	{
		cout<<"\nobject of student is destroyed";
	}
	
	void info()
{ 
	cout<<"\nenter the name:";
	getline(cin,name);
	cin.ignore();	
   cout<<"enter age:";
   cin>>age;
	cout<<"\nwhich class student:";
	cin>>std;

}	
};

int main()
{
	teacher t;
	t.info();
	student s;
	s.info();
}
