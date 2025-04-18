#include<bits/stdc++.h>
using namespace std;

class Student{
	public:
		string name;
		Student(){
			name = "Unknown name";
			cout<<"Default constructor";
		}
		void show(){
			cout<<"Students";
		}
};
int main(){
	Student s1;
	s1.show();
	return 0;
}
