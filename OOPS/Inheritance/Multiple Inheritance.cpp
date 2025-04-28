#include<iostream>
#include<string>
using namespace std;

class student{
	public:
		string name;
		int rollno;
		
};
class Teacher{
	public:
		string subject;
		double salary;
};

class TA:public student, public Teacher{
	
};
int main(){
	TA t1;
	t1.name="Amulya";
	t1.subject="engineering";
	
	cout<<t1.name<<endl;
	cout<<t1.subject<<endl;
	
}
