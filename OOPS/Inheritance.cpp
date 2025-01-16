#include<iostream>
#include<string>
using namespace std;

class Person{
	public:
		string name;
		int age;
};
class Student : public Person{
	public:
		int rollno;
};

class GradStudent: public Student{
	public:
		string researchArea;
};
int main(){
	GradStudent g1;
	g1.name = "Priyanshi";
	g1.researchArea = "Software";
	cout<<g1.name<<endl;
	cout<<g1.researchArea<<endl;
	return 0;
}
