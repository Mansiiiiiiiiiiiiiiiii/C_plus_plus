#include<bits/stdc++.h>
using namespace std;

class Animal{
	public:
		void eat(){
			cout<<"This animal eats food"<<endl;
		}
};
//Derived class 
class Dog: public Animal{
	public:
		void bark()
		{
			cout<<"Dog barks"<<endl;
		}
};
int main(){
	Dog d;
	d.eat();
	d.bark();
	return 0;
}
