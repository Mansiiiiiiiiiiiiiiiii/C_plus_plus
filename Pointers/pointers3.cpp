#include <iostream>
using namespace std;

int main(){
	int num =5;
	int a=num;
	a++;
	
	cout<<num<<endl;
	
	int *p = &num;
	cout<<"before "<<num<<endl;
	(*p)++;
	cout<<"after"<<num<<endl;
	
	//Coping a pointer
	int *q = p;
	cout<<"p"<<"->"<<p<<endl<<"q -> "<<q<<endl;
	cout<<"*p"<<"->"<<*p<<endl<<"*q ->"<<*q<<endl;
	
	//important concept
	int i=3;
	int *t = &i;
	
	*t=*t+1;
	cout<<*t<<endl;
	
	cout<<"before t"<<t<<endl;
	t = t+1;
	cout<<"after t"<<t<<endl;
	
	return 0;
}
