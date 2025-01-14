//Diamond shape star pattern
#include<iostream>
using namespace std;
int main(){
	int n;
	cout<<"Number of rows";
	cin>>n;
	//upper half of diamond
	for(int i=1; i<=n ; i++){
		//space print
		for(int j=1; j<= n-i; j++){
			//n-i space jahan pe n hai (total) number of rows aur i (current 
			//row) 
			cout<<" ";
		}
		for(int j=1; j<=2*i-1; j++){
			//2*i-1 bcz odd number of stars hai row main
			cout<<"*";
		}
		cout<<endl;
	}
	//Lower half 
	for(int i=n; i>=1; i--){
		for(int j=1; j<=n-i; j++){
			cout<<" ";
		}
		for(int j=1; j<=2*i-1; j++){
			cout<<"*";
		}
		cout<<endl;
	}
}
