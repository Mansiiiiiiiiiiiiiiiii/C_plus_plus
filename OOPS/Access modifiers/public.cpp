#include<bits/stdc++.h>
using namespace std;

class Hero{
	public:
		int health;
		char level;
		
		void print(){
			cout<<level<<endl;
		}
};

int main(){
	Hero h;
	h.health =70;
	h.level = 'A';
	cout<<"health is "<<h.health<<endl;
	cout<<"level is "<<h.level<<endl;
}
