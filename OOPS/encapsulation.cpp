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

class Account{
	private:
		double balance;
		string passwords; //data hiding
		
	public:
		string accountId;
		string username;
};
int main(){
	Teacher t1;
	t1.name="Anupriya Gupta";
	t1.subject="Java";
	t1.dept="Computer Science";
	t1.setSalary(25000);
	
	cout<<t1.name<<endl;
	cout<<t1.subject<<endl;
	cout<<t1.getSalary()<<endl;
	cout<<t1.dept<<endl;
}
