#include<iostream>
#include<string>
using namespace std;

class Parent{
	public:
		void getInfo(){
			cout<<"Parent class";
		}
		
};

class Child: public Parent{
	public:
		void getInfo(){
			cout<<"child class";
		}
};

int main(){
	Child c1;
	c1.getInfo();
	return 0;
	
}
