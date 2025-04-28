#include <iostream>
#include <string>
using namespace std;

class Student {
private:
    string name;
    double* cgpaPtr;

public:
    // Parameterized constructor
    Student(string name, double cgpa) {
        this->name = name;
        cgpaPtr = new double;
        *cgpaPtr = cgpa;
    }

    // Copy constructor (Shallow Copy)
    Student(const Student& obj) {
        this->name = obj.name;
        this->cgpaPtr = obj.cgpaPtr; // Shallow copy: only copying the pointer
    }

    // Method to modify CGPA (since cgpaPtr is private)
    void setCGPA(double newCGPA) {
        *cgpaPtr = newCGPA;
    }

    // Method to get information
    void getInfo() const {
        cout << "Name: " << name << endl;
        cout << "CGPA: " << *cgpaPtr << endl;
    }

    // Destructor
    ~Student() {
        delete cgpaPtr;
    }
};

int main() {
    Student s1("Anshul", 8.9); // Create an object
    Student s2(s1); // Use the shallow copy constructor to create a copy

    cout << "Original info from s1:\n";
    s1.getInfo();

    cout << "\nCopied info from s2:\n";
    s2.getInfo();

    // Modify the CGPA through the copied object
    s2.setCGPA(9.2);

    cout << "\nAfter modifying CGPA through s2:\n";
    s1.getInfo(); // Note: s1's CGPA will also reflect the change
    s2.getInfo();

    return 0;
}

