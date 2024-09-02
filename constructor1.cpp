#include<iostream>
using namespace std;
class Car
{
	public:
		Car()
		{
			cout<<"\nObject created";
		}
		Car(int id,string cmp)
		{
			cout<<"\nCar id = "<<id;
			cout<<"\nCar company = "<<cmp;
		}
		Car(string cmp,int id)
		{
			cout<<"\nCar id = "<<id;
			cout<<"\nCar company = "<<cmp;
		}
		Car(int id,string cmp,double price)
		{
			cout<<"\nCar id = "<<id;
			cout<<"\nCar company = "<<cmp;
			cout<<"\nCar price = "<<price;
		}
};
int main()
{
	Car c1;
	Car c2(101,"Hyundai");
	Car c3("Suzuki",102);
	Car c4(103,"Mahindra",150000);
	return 0;
}
