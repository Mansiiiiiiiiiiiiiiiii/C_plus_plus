#include<bits/stdc++.h>
using namespace std;

class Shape{
	public:
		//use of virtual constructor
		virtual void calculate(){
			cout<<"Area of shape"<<endl;
		}
		//use virtual distructor to avoid memory leak
		virtual ~Shape(){
			cout<<"Shape Distructor called\n"<<endl;
		}
};

//Derived Class
class Rectangle: public Shape{
	public:
		int width, height, area;
		
		void calculate(){
			cout<<"Enter Width of Rectangle"<<endl;
			cin>>width;
			
			cout<<"Enter Height of Rectangle"<<endl;
			cin>>height;
			
			area = height*width;
			cout<<"Area of rectangle "<<area<<endl;
		}
		//destructor
		virtual ~Rectangle(){
			cout<<"Rectangle destructor Call\n";
		}
};
class Square : public Shape{
	public:
		int side, area;
		void calculate(){
			cout<<"Enter one side of square"<<endl;
			cin>>side;
			
			area = side*side;
			cout<<"Area of square:"<<area<<endl;
		}
		//virtual destructor called
		virtual ~Square(){
			cout<<"Square Destructor Called\n"<<endl;
		}
};
int main(){
	//base class pointer
	Shape* S;
	Rectangle r;
	
	//initilazation of referance variable
	S = &r;
	
	//Calling rectangle function
	S->calculate();
	Square sq;
	
	S = &sq;
	S->calculate();
	
	return 0;
}
