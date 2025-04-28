#include<bits/stdc++.h>
using namespace std;

void print(int i){
	cout<<"Value is"<<i<<endl;
}
void print(double i){
	cout<<"value is"<<i<<endl;
}
void print(char const *c) {
  cout << "Here is char* " << c << endl;
}
int main(){
	print(10);
	print(20.9080);
	print("ten");
	return 0;
}
