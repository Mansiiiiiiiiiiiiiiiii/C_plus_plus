#include <bits/stdc++.h>
using namespace std;

// Base class
class Employee {
protected:
    int empID;
    string name;

public:
    Employee(int id, string n) : empID(id), name(n) {}

    virtual void displayDetails() {
        cout << "ID: " << empID << ", Name: " << name << endl;
    }

    virtual ~Employee() {}
};

// Derived class for Full-Time employees
class FullTimeEmployee : public Employee {
private:
    double salary;

public:
    FullTimeEmployee(int id, string n, double s)
        : Employee(id, n), salary(s) {}

    void displayDetails() override {
        cout << "[Full-Time] ID: " << empID
             << ", Name: " << name
             << ", Salary: " << salary << endl;
    }
};

// Derived class for Part-Time employees
class PartTimeEmployee : public Employee {
private:
    double hourlyRate;
    int hoursWorked;

public:
    PartTimeEmployee(int id, string n, double rate, int hours)
        : Employee(id, n), hourlyRate(rate), hoursWorked(hours) {}

    void displayDetails() override {
        cout << "[Part-Time] ID: " << empID
             << ", Name: " << name
             << ", Hourly Rate: " << hourlyRate
             << ", Hours Worked: " << hoursWorked
             << ", Total Pay: " << hourlyRate * hoursWorked << endl;
    }
};

int main() {
    vector<Employee*> employees;

    // Adding employees
    employees.push_back(new FullTimeEmployee(1, "Alice", 50000));
    employees.push_back(new PartTimeEmployee(2, "Bob", 250, 30));

    // Displaying employee details
    cout << "--- Employee Details ---" << endl;
    for (auto emp : employees) {
        emp->displayDetails();
    }

    // Cleaning up
    for (auto emp : employees) {
        delete emp;
    }

    return 0;
}
