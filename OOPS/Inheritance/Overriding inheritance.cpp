#include<bits/stdc++.h>
using namespace std;

class Parent{
	public:
		void show(){
			cout<<"Parent class function"<<endl;
		}
};
class Child: public Parent{
	public:
		void show(){
			cout<<"Child class function"<<endl;
		}
};
int main(){
	Child c;
	c.show();
	return 0;
}
