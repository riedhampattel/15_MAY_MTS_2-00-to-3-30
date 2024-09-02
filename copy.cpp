#include<iostream>
using namespace std;
class Student
{
	public :
		string name;
		float *cgpaptr = new float;
	Student(string name,float cgpa)
	{
		this->name = name;
		*cgpaptr = cgpa;		
		cout<<"\nParameterized constructor called";
	}
	void display()
	{
		cout<<"\nName = "<<name;
		cout<<"\ncgpa = "<<*cgpaptr;
	}
//	Student(Student &obj)//copy constructor
//	{
//		this->name = obj.name;
//		*cgpaptr = obj.cgpa;
//		cout<<"\nCopy constructor called";
//	}
		
};
int main()
{
	Student s1("Rahul",8.5);
	s1.display();
	Student s2(s1);
	s2.display();
	return 0;
}
//program executed successfully