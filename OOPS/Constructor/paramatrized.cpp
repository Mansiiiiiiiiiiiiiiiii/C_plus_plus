#include <iostream>
#include <cstring> // for strcpy
using namespace std;
class Employee {
private:
    int age;
    char name[20];
    float salary;
public:
    void set();
    void show();
};
void Employee::set() {
    age = 25;
    strcpy(name, "Gangadhar"); // Copy string "Gangadhar" into name array
    salary = 25000;
}
void Employee::show() {
    cout << age << "," << name << "," << salary << endl;
}
int main() {
    Employee M; // Corrected from Emp to Employee
    M.set();
    M.show();
    return 0;
}

