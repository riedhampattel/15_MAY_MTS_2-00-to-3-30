#include<iostream>
using namespace std;
//Deep copy
class Student
{
	public :
		string name;
		double *cgpaptr;	
		Student(string name,double cgpa)
		{
			this->name = name;
			cgpaptr = new double;
			*cgpaptr = cgpa;
		}
		void display()
		{
			cout<<"\nStudent name = "<<name;
			cout<<"\nStudent cgpa = "<<*cgpaptr;
		}
		Student(Student &obj)
		{
			this->name = obj.name;
			cgpaptr = new double;
			*cgpaptr = *obj.cgpaptr;
		}
};
int main()
{
	Student s1("Rahul",9.2);
	cout<<"\nDetails of s1 before value change in s2"<<endl;
	s1.display();
	Student s2(s1);
	Student s3(s1);
	*(s3.cgpaptr) = 8.2;
	cout<<"\nDetails of s1,s2,s3 after value change in s2"<<endl;
	s1.display();
	s2.display();
	s3.display();
	return 0;
}
