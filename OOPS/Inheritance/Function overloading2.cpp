#include<bits/stdc++.h>
using namespace std;

void add(int a, double b){
	cout<<"sum = "<<a+b<<endl;
}

void add(double a, int b){
	cout<<"sum ="<<a+b<<endl;
}
int main(){
	add(10,20.78);
	add(20.78,10);
}
