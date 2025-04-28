#include<bits/stdc++.h>
using namespace std;

class Hero{
	private:
		int health;
	public:
		
		char level;
		
		void print(){
			cout<<level<<endl;
		}
		int getHealth(){
			return health;
		}
		char setHealth(int h){
			health =h;
		}
};

int main(){
	Hero h;
	h.setHealth(70);
	cout<<"My health is "<<h.getHealth();
	
}
