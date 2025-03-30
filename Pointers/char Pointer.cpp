#include<iostream>
using namespace std;

int main(){
	int arr[5]={1,3,2,56};
	char ch[6] ="mansi";
	
	cout<<arr<<endl;
	
	cout<<ch<<endl;
	
	char *c = &ch[0];
	//prints entire string
	cout<<c<<endl;
	
	char temp = 'z';
	char *p = &temp;
	
	cout<<p<<endl;
	
}
