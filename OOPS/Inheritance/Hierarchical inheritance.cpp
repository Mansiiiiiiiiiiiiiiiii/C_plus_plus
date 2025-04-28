#include <iostream>
#include <string>
using namespace std;

// Base class
class Person {
public:
    string name;
    int age;

    void displayDetails() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};

// Derived class 1
class Student : public Person {
public:
    int rollno;

    void displayStudentDetails() {
        displayDetails();
        cout << "Roll Number: " << rollno << endl;
    }
};

// Derived class 2
class Teacher : public Person {
public:
    string subject;

    void displayTeacherDetails() {
        displayDetails();
        cout << "Subject: " << subject << endl;
    }
};

int main() {
    // Creating and displaying details of a Student
    Student s1;
    s1.name = "John";
    s1.age = 20;
    s1.rollno = 101;
    cout << "Student Details:" << endl;
    s1.displayStudentDetails();

    // Creating and displaying details of a Teacher
    Teacher t1;
    t1.name = "Mrs. Smith";
    t1.age = 45;
    t1.subject = "Mathematics";
    cout << "\nTeacher Details:" << endl;
    t1.displayTeacherDetails();

    return 0;
}

