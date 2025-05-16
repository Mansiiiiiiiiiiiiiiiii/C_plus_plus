#include<iostream>
using namespace std;

class Animals{
	public:
		Animals(){
			cout<<"There are many types of animals"<<endl;
			cout<<"Snakes\nScorpions\nStonefish\nReptiles "<<endl;
		}
};

class LandAnimal: public Animals{
	public:
		LandAnimal(){
			cout<<"Hippopotamus is a land animal"<<endl;
		}
};

class FourFootLandAnimal : public LandAnimal{
	public:
		FourFootLandAnimal(){
			cout<<"Elephant is a four foot land animals"<<endl;
		}
};

int main(){
FourFootLandAnimal ff;
return 0;	
}
