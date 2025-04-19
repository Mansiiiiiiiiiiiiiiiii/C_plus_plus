#include<bits/stdc++.h>
using namespace std;

class Test{
	private:
		int a;
		friend void print();
};

void print(){
	Test ob;
	cout<<ob.a<<endl;
}

int main(){
	print();
	return 0;
}
