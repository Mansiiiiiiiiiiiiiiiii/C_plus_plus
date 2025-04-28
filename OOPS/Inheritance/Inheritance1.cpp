#include<bits/stdc++.h>
using namespace std;

class Human{
	private:
		int height;
		int weight;
		int age=21;
	public:
		int getAge(){
			return this->age;
		}
		void setWeight(int w){
			this->weight=w;
		}
};

class Female: public Human{
	public:
		string color;
		void sleep(){
			cout<<"She is sleeping"<<endl;
		}
};

int main(){
	Female m;
	
	m.setWeight(54);
	m.color="Brown";
	
	cout << m.getAge() << endl;
	cout << m.color << endl;
	 
	m.sleep();  
}
