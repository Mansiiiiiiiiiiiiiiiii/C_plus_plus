#include<iostream>
#include<cmath>
using namespace std;
int binaryToDec(int binary){
	int decimal=0,power=0;
	while(binary>0){
		int last_digit = binary%10; //last digit
		decimal += last_digit*pow(2,power);
		binary /=10;
		power++;
	}
	return decimal;
}
int main(){
	int binary_num;
	cout<<"binary number enter karo";
	cin>>binary_num;
	//decimal value main convert kar do guys!!
	int decimal_value=binaryToDec(binary_num);
	cout<<"Decimal value"<<decimal_value<<endl;
	return 0;
}
