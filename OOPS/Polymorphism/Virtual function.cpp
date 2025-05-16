#include<iostream>
using namespace std;

class Base{
	public:
		virtual void display(){
			cout<<"Display method of base class"<<endl;
		}
		virtual ~Base() {
			
		}
};

class Derived : public Base{
	public:
		void display() override{
		cout<<"Display method of Derived class"<<endl;
		}
};
int main(){
	Base* basePtr;
	Derived derivedObj;
	
	basePtr = &derivedObj;
	basePtr -> display();
	return 0;
}
