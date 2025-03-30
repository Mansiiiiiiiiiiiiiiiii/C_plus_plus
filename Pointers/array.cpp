#include<iostream>
using namespace std;
int main(){
	int arr[10] ={2,5,6,67};
	cout<<"Address of first memory location "<<arr<<endl;
	cout<<arr[0]<<endl;
	cout<<"Address of first memory location using address of operator "<<&arr<<endl;
	
	cout<<"4th "<<*arr<<endl;
	cout<<"5th "<<*arr+1<<endl;
	cout<<"6th "<<*(arr+1)<<endl;
	cout<<"7th "<<(*arr)+1<<endl;
	cout<<"8th "<<arr[2]<<endl;
	cout<<"9th "<<*(arr+2)<<endl;
	
	int i=3;
	cout<<i[arr]<<endl;
	
	return 0;
} 
