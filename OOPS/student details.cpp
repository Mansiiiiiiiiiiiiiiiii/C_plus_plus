#include<bits/stdc++.h>
using namespace std;

class Student{
	string name;
	int rollno;
	public:
		//Constructor
		Student(string n, int r){
			name = n;
			rollno = r;
		}
		//Function to print student Details
		void printDetails(){
			cout<<"name "<<name<<endl;
			cout<<"Roll no "<<rollno<<endl;
		}
};

int main(){
	//Create a student object
	Student s1("Ujjwal kumar sing",101);
	
	//Print student details
	s1.printDetails();
	
	return 0;
}
