#include<bits/stdc++.h>
using namespace std;

class Animal{
	public:
		void speak(){
			cout<<"Animal speaks";
		}
};

class Dog:public Animal{
	public:
		void speak(){
			cout<<"Dog barks";
		}
};

int main(){
	Dog obj;
	obj.speak();
}
