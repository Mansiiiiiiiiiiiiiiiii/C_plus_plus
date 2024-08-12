#include <iostream>
using namespace std;

class student {
private:
    int roll;
    char grade;
    float marks; // corrected from 'per' to 'marks'

public:
    void get();
    void show();
};

void student::get() {
    cout << "Please enter roll, grade, and percentage: ";
    cin >> roll >> grade >> marks; // corrected from 'per' to 'marks'
}

void student::show() {
    cout << "Roll no is " << roll << endl;
    cout << "Grade is " << grade << endl;
    cout << "Percentage is " << marks << endl;
}

int main() {
    student q;
    student r;

    q.get(); // Calling member function to set values
    q.show(); // Calling member function to display values

    r.get(); // Calling member function to set values
    r.show(); // Calling member function to display values

    getchar(); // To keep console window open in some environments
    return 0;
}

