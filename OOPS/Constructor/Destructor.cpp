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
		~Test(){
			cout<<a<<endl;
			cout<<"Bye";
		}
		
};

int main(){
	Test ob;
	ob.a =10;
	
	if(true){
		Test ob2;
		ob2.a = 20;
	}
	
}
