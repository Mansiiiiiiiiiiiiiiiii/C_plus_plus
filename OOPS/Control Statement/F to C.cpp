#include<iostream>
using namespace std;

//convert fahrenheit to celsius
int main(){
	float F;
	cin>>F;
	float C=(32*F - 32) * (5/9 );
	cout<<C;
}
