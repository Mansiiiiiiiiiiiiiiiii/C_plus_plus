#include<bits/stdc++.h>
using namespace std;

class Grandfather{
	public:
		void house(){
			cout<<"Grandfather"<<endl;
		}
};
class Father: public Grandfather{
	public:
		void car(){
			cout<<"Father's car"<<endl;
		}
};
class Child:public Father{
	public:
		void bike(){
			cout<<"Child's bike"<<endl;
		}
};
int main(){
	Child c;
	c.house();
	c.car();
	c.bike();
	return 0;
}
