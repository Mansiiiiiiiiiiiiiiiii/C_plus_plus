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
    Teacher(string name, string dept, string subject, double salary) {
        this->name = name;
        this->dept = dept;
        this->subject = subject;
        this->salary = salary;
    }

    // Copy constructor
    Teacher(const Teacher &t) {
        name = t.name;
        dept = t.dept;
        subject = t.subject;
        salary = t.salary;
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
    Teacher t1("Lavina", "Computer Science", "Java", 25000);
    
    // Using the default copy constructor
    Teacher t2(t1); // Copying t1 into t2

    // Displaying the information of t2
    t2.getInfo();

    return 0;
}

