#include<iostream>
using namespace std;

int main(){
	int i=5;
	
	int *p= 0;
	p=&i;
	
	cout<<p<<endl;
	cout<<*p<<endl;
	
	return 0;
}
