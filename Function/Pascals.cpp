#include<iostream>
using namespace std;
int fact(int n){
	int factorial =1;
	for(int i=1; i<=n; i++){
		factorial *= i;
		
	}
	return factorial;
}
int nCr(int n, int r){
	return fact(n)/(fact(r)*fact(n-r));
}
int Pascals(int row){
	for(int i=0; i<row; i++){
		for(int j=0; j<=i; j++){
			cout<<nCr(i,j)<<" ";
		}
		cout<<endl;
	}
}
int main(){
	int rows;
	cin>>rows;
	Pascals(rows);
	return 0;
}
