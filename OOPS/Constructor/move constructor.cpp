#include<iostream>
#include<vector>
using namespace std;

class MyClass{
	private:
		int b;
	public:
		//Constructor
		MyClass(int &&a) : b(move(a)){
			cout<<"Move Constructor called"<<endl;
		}
		void display(){
			cout<<b<<endl;
		}
};
int main(){
	int a=4;
	MyClass obj1(move(a));
	obj1.display();
	return 0;
}
