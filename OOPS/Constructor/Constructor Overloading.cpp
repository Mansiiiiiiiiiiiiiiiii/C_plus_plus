#include<iostream>
#include<string>
using namespace std;

class Student{
	public:
		string name;
		
		Student(){
			cout<<"non-parametrized\n";
		}
		
		Student(string name){
			this->name=name;
			cout<<"Paramatrized\n";
		}
};

int main(){
	Student s1("Ujjwal");
	return 0;
}
