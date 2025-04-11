#include<bits/stdc++.h>
using namespace std;

class Car{
	public:
		string brand;
		int speed;
		void showDetails(){
			cout<<"Brand:"<<brand<<",Speed"<<speed<<"km/h"<<endl;
		}
};
int main(){
	Car myCar;
	myCar.brand = "Toyota";
	myCar.speed = 120;
	myCar.showDetails();
	return 0;
}
