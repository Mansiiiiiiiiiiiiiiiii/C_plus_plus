#include<iostream>
using namespace std;

int main(){
	char ch;
	cin>>ch;
	if(ch>='a' && ch<='z'){
		cout<<"This is Lower Case"<<endl;
	}
	else if(ch>='A' && ch<='Z'){
		cout<<"This is upper case"<<endl;
	}
	else{
		cout<<"This is numeric";
	}
}
