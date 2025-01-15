#include <iostream>
#include <limits> // Include this for numeric_limits
using namespace std;
class Num {
    int a;
    int b;
    int c;
public:
    // Constructor to initialize members
    Num() : a(0), b(0), c(0) {}
	// Method to get input from user
    void get() {
        cout << "Enter 2 integers: ";
        while (!(cin >> a >> b)) {
            cin.clear(); // Clear the error flag
            cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Discard invalid input
            cout << "Invalid input. Please enter two integers: ";
        }
    }
	// Method to compute the sum
    void add() {
        c = a + b;
    }
	// Method to display the result
    void show() const {
        cout << "Numbers are " << a << " and " << b << endl;
        cout << "Their sum is " << c << endl;
    }
};
int main() {
    Num obj;
    obj.get();
    obj.add();
    obj.show();
    return 0;
}

