#include<bits/stdc++.h>
using namespace std;
class A{
	public:
		
		virtual void show(){
			cout<<"Class A";
		}
};
class B: public A{
	public:
		void show(){
			cout<<"Class B";
		}
};
int main(){
	A *bptr;
	B aa;
	bptr = &aa;
	bptr -> show();
	return 0;
}
