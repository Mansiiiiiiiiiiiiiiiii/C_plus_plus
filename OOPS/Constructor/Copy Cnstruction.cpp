//jab ham parameter main object pass karte hai tab call hota hai copy contructor
#include<bits/stdc++.h>
using namespace std;
//new matlab dynamic memory allocation
class Test{
	public:
		int a;
		int *ptr;
		Test(){
			a=10;
			ptr = new int(20);//ptr main address store ho raha hai
		}
};

int main(){
	Test ob1;
	Test ob2(ob1);//copy constructor
	cout<<ob2.a<<endl;
	ob1.a =100;
	
}
