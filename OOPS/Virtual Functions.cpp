#include<iostream>
#include<string>
using namespace std;

class Parent{
	public:
		void getInfo(){
			cout<<"Parent class";
		}
		virtual void hello(){
			cout<<"Hello from Virtual function";
		}
		
};

class Child: public Parent{
	public:
		void getInfo(){
			cout<<"child class";
		}
		void hello(){
			cout<<"Hello from child";
		}
};

int main(){
	Child c1;
	c1.hello();
	return 0;
	
}
