#include<iostream>
using namespace std;

class LandAnimal{
	public:
		LandAnimal(){
			cout<<"hippopotamus is a land animal"<<endl;
		}
};
class WaterAnimal{
	public:
		WaterAnimal(){
			cout<<"box jellyfish is water animal"<<endl;
		}
};
class AmphibiousAnimal: public LandAnimal, public WaterAnimal{
	public:
		AmphibiousAnimal(){
			cout<<"Golden Poison Frog are ambhibious animals"<<endl;
		}
};

int main(){
	AmphibiousAnimal obj1;
	return 0;
}
