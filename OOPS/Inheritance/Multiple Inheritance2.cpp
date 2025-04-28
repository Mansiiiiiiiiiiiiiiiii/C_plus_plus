#include<bits/stdc++.h>
using namespace std;

class Father{
	public:
		void brain(){
			cout<<"Father's knowledge"<<endl;
		}
};
class Mother{
	public:
	void skinColor(){
		cout<<"Mother's skin color"<<endl;
	}
};

//Derived class inherited from both classes
class Child: public Father, public Mother{
	public:
		void speak(){
			cout<<"Child speak"<<endl;
		}
};

int main(){
	Child c;
	c.brain();
	c.speak();
	c.skinColor();
	return 0;
}
