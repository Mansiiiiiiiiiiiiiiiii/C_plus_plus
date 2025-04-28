#include<bits/stdc++.h>
using namespace std;

class A{
	public:
		void show(){
			cout<<"Class A"<<endl;
		}
};
class B: public A{
	public:
		void showB(){
			cout<<"Class B"<<endl;
		}
};
class C{
	public:
		void showC(){
			cout<<"Class C"<<endl;
		}
};
//Hybrid Inheritance
class D:public B, public C{
	public:
		void showD(){
			cout<<"class D"<<endl;
		}
};
int main(){
	D obj;
	obj.show();
	obj.showB();
	obj.showC();
	obj.showD();
	return 0;
}
