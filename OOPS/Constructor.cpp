#include <iostream>
#include <string>
using namespace std;

class Teacher {
private:
    string name;
    string dept;
    string subject;
    double salary;

public:
    // Parameterized constructor
    Teacher(string n, string d, string s, double sal) {
        name = n;
        dept = d;
        subject = s;
        salary = sal;
    }

    void changeDept(string newDept) {
        dept = newDept;
    }

    void getInfo() {
        cout << "Name: " << name << endl;
        cout << "Department: " << dept << endl;
        cout << "Subject: " << subject << endl;
        cout << "Salary: " << salary << endl;
    }
};

int main() {
    // Creating an object of Teacher class with parameterized constructor
    Teacher t1("Lakshay", "Computer Science", "AI ML", 25000);
    
    // Displaying the information of the teacher
    t1.getInfo();

    // Changing the department and displaying updated information
    t1.changeDept("Data Science");
    cout << "\nAfter changing department:\n";
    t1.getInfo();

    return 0;
}

