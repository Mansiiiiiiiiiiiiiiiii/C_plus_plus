#include<iostream>
using namespace std;

class Test{
	private:
		Test(){
			cout<<"Private const"<<endl;
		}
		friend class Test2;
};
class Test2{
	public:
		Test ob;
};
int main(){
	Test2 t;
}
