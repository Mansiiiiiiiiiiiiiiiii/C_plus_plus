#include<iostream>
using namespace std;
void dec(int n){
	int octalNum[38];
	int i=0;
	while(n>0){
		octalNum[i]=n%8;
		n=n/8;
		i++;
	}
	for(int j=i-1; j>=0; j--)
	cout<<octalNum[j];
}
int main(){
	int n;
	cin>>n;
	dec(n);
	return 0;
}
