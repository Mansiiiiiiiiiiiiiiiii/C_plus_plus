#include<bits/stdc++.h>
using namespace std;

class DataMember{
	public:
	static int i;
	DataMember(){
		
	}
};
int DataMember::i =1;
int main(){
	cout<<DataMember::i;
}
