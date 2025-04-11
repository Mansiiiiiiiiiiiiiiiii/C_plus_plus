#include<iostream>
using namespace std;
//classes are user defined data type
class Test{
	public:
		int a;
		int b;
		
		void sum(){
			cout<<a+b<<endl;
		}
};
int main(){
	Test ob;
	ob.a = 10;
	ob.b =20;
	ob.sum();
}
