#include<iostream>
using namespace std;
class A{
	public:
		int val;
		
		//Paramatrized constructor
		A(int x){
			val=x;
		}
		
		//Copy constructor
		A(A& a){
			val = a.val;
		}
};
int main(){
	A a1(20);
	
	//Creating other object from a1
	A a2(a1);
	cout<<a2.val<<endl;
	return 0;
}
