#include<iostream>
using namespace std;

class Complex{
	public:
		int real, imag;
		Complex(int r, int i): real(r), imag(i){
			
		}
		
		//operator overloading
		Complex operator+(const Complex& obj){
			return Complex(real+obj.real , imag+ obj.imag);
		}
};
int main(){
	Complex c1(10,5), c2(2,5);
	
	//Adding 2 number
	Complex c3 = c1+c2;
	cout<<c3.real<<" + "<<c3.imag<<"i"<<endl;
	return 0;
}
