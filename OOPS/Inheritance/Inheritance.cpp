#include<bits/stdc++.h>
using namespace std;

class A{
	int data;
	public:
		void f(int arg){
			data = arg;
		}
		int g(){
			return data;
		}
};
class B{
	public:
		A x; //B has an object x of type A
		//This is called composition in Object-Oriented Programming
};
int main(){
	B obj;
	obj.x.f(20);//calling function f() of class A via the object x which is inside obj
	cout<<obj.x.g()<<endl;
}
