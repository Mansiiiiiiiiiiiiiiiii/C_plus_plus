#include<iostream>
using namespace std;

void print(int *p){
	cout<<p<<endl;
	cout<<*p<<endl;
}
void update(int *p){
*p=*p+1;
// cout<<"inside"<<p<<endl;	
}

int getSum(int *arr,int n){
	int sum = 0;
	for(int i=0;i<n; i++){
		sum += i[arr];
	}
	return sum;
}
int main(){
	int value =5;
	int *p = &value;
	cout<<"Before"<<*p<<endl;
	//print(p);
	update(p);
	cout<<"After"<<*p<<endl;
	
	int arr[6]={1,2,3,4,5,6};
	cout<<"Sum of array is"<<getSum(arr+3,3)<<endl;
	
	return 0;
}
