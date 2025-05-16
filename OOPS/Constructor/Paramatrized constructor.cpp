#include<iostream>
using namespace std;

class Car{
	public:
		string brand;
		string model;
		int year;
		Car(string x, string y, int z){
			brand = x;
			model = y;
			year = z;
		}
};
int main(){
	Car carObj1("Rolls-Royce","Rose Noire Droptail",2025);
	Car carObj2("Lamborghini Temerario"," Huracan",2025);
	//Print value
	cout<<carObj1.brand<<" "<<carObj1.model<<" "<<carObj1.year<<endl;
	cout<<carObj2.brand<<" "<<carObj2.model<<" "<<carObj2.year<<endl;
	return 0;
}
