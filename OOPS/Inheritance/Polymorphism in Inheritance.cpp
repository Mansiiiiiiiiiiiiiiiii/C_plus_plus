#include<iostream>
using namespace std;

class Parent{
	public:
		void Print(){
			cout<<"Base function"<<endl;
		}
};

class Child: public Parent{
	public:
		void Print(){
			cout<<"Derived function"<<endl;
		}
};

int main(){
	Child ch;
	ch.Print();
	return 0;
}
