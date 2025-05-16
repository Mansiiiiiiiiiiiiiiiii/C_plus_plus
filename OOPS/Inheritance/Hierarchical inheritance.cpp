#include<iostream>
using namespace std;

class Animals{
	public:
		Animals(){
			cout<<"There are 2 types of animals land and water"<<endl;
		}
};

class Land : public Animals{
	public:
		Land(){
			cout<<"Land Animals:"<<endl;
			cout<<"Mosquito\nSaltwater Crocodile\nAfrican Elephant\nCape Buffaloo"<<endl;
		}
};

class Water : public Animals{
	public:
		Water(){
			cout<<"Water animals"<<endl;
			cout<<"Sharks\nCrocodile\nJelly Fish\nPufferfish\nLion Fish"<<endl;
		}
};

int main(){
	Land ll;
	Water ww;
	return 0;
}
