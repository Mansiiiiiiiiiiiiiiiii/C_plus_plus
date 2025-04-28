#include<bits/stdc++.h>
using namespace std;

class B{
	public:
		int a,b;
		int add(){
			return a+b;
		}
		void operator+(B &obj){
		cout<<"Hello";}
		void operator()(){
			cout<<"Main bracket hun";
		}
};
int main(){
	B obj1,obj2;
	
	obj1();
}
