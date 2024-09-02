#include<iostream>
using namespace std;
class Parent//absract class
{
	public :
		virtual void display()
		{
			cout<<"\nParent virtual class";
		}
};
class Child : public Parent
{
	public :
		void display()
		{
			cout<<"\nChild class property used";
		}
};
int main()
{
	Child c1;
	c1.display();
	Parent p1;
	p1.display();
	return 0;
}
