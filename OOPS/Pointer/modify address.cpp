#include<iostream>
using namespace std;

int main(){
	int a=10;
	int b=99;
	
	int *ptr =&a;
	cout<<*ptr<<endl;
	//changing address
	ptr = &b;
	cout<<*ptr;
	return 0;
}
