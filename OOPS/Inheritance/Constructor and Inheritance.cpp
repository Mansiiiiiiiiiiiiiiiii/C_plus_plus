#include<bits/stdc++.h>
using namespace std;

class Base{
	public:
		Base(){
			cout<<"Base class constructor"<<endl;
		}
};
class Derived: public Base{
	public:
		Derived(){
			cout<<"Derived class constructor"<<endl;
		}
};
int main(){
	Derived d;
	return 0;
}
