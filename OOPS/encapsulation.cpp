#include<iostream>
using namespace std;
class Test{
	private:
		int a;
		int b;
	public:
		void setA(int aa){
			a=aa;
		}
		void setB(int bb){
			b=bb;
		}
		int getA(){
			return a;
		}
		int getB(){
			return b;
		}
};

int main(){
	Test ob;
	ob.setA(10);
	ob.setB(20);
	cout<<ob.getA()<<endl;
	cout<<ob.getB()<<endl;
}
