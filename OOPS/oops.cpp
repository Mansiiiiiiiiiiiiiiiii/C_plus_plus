# include<iostream>
#include<cstring>
using namespace std;
class Car{
	public:
		//Properties
		string color;
		string make;
		string model;
		int year;
		
		//Method(behaviors)
		void drive(){
			cout<<"The car is driving"<<endl;
		}
		void stop(){
			cout<<"The car is stopped"<<endl;
		}
		void honk(){
			cout<<"The car is honking"<<endl;
		}
};
//Main function
int main(){
	//Creating car objects(products)
	Car car1;
	car1.color = "red";
	car1.make = "Toyoto";
	car1.model = "Corolla";
	car1.year = 2020;
	
	Car car2;
	car2.color="blue";
	car2.make = "Ford";
	car2.model = "Mustang";
	car2.year = 2021;
	
	//Using methods on car object
	car1.drive(); //Output: The car is driving
	car2.honk(); //Output :The car is honking
	
	return 0;
}

