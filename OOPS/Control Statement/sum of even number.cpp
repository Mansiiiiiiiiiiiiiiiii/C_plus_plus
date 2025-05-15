#include<iostream>
using namespace std;
int main(){
//find sum of all even number
int n;
cin>>n;
int sum=0;
int i=2;
while(i<=n){
	sum=sum+i;
	i = i+2;
}
cout<<"Sum of all even number"<<sum<<endl;
return 0;
}
