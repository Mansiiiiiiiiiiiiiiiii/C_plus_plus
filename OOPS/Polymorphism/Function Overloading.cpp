#include<iostream>
using namespace std;

class Add{
	public:
		void add(int x, int y){
			cout<<"Sum of int is "<<x+y<<endl;
		}
		void add(double x, double y){
			cout<<"Sum of double is "<<x+y<<endl;
		}
};
int main(){
	Add a;
	a.add(67.98,90.90);
	a.add(67,90);
}
