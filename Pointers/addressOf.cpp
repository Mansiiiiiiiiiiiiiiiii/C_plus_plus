#include<iostream>
using namespace std;

int main(){
	int num=5;
	cout<<num<<endl;
	cout<<"Address of num"<<&num<<endl;
	int *ptr = &num;
	cout<<"Value is "<<*ptr<<endl;
	
	double d=4.3;
	double *p2 = &d;
	
	cout<<"Address of num"<<&p2<<endl;
	cout<<"Value is "<<*p2<<endl;
	
	cout<<"size of integer is"<<sizeof(num)<<endl;
	cout<<"size of pointer is"<<sizeof(ptr)<<endl;
	cout<<"size of double pointer is"<<sizeof(p2)<<endl;
	
	return 0;
}
