#include<iostream>
using namespace std;
#include<string>

class Teacher{
	private:
		double salary;
	public:
		string name;
		string dept;
		string subject;
		
		void changeDept(string newDept){
			dept = newDept;
		}
		
		//setter
		void setSalary(double s){
			salary = s;
		}
		
		//getter
		double getSalary(){
			return salary;
		}
};
int main(){
	Teacher t1;
	t1.name="Prince Jain";
	t1.subject="Big Data";
	t1.dept="Computer Science";
	t1.setSalary(25000);
	
	cout<<t1.name<<endl;
	cout<<t1.subject<<endl;
	cout<<t1.getSalary()<<endl;
	cout<<t1.dept<<endl;
}
