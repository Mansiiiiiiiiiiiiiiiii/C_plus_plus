#include<iostream>
using namespace std;

class Vehicles{
	public:
		Vehicles(){
			cout<<"There are many types of vehicles"<<endl;
		}
};
class Fare{
	public:
		Fare(){
			cout<<"Car fare is costlier than Bus"<<endl;
		}
};
class Car: public Vehicles{
	public:
		Car(){
			cout<<"108 Crores"<<endl;
		}
};
class Bus: public Vehicles, public Fare{
	public:
		Bus(){
			cout<<"Bus price is"<<endl;
			cout<<"2.20 Cr"<<endl;
		}
};

int main(){
	Bus b;
	return 0;
}
