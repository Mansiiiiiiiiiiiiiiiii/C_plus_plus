#include<iostream>
using namespace std;

class Test {
public:
    int a;
    int* ptr;

    // Default constructor
    Test() {
        a = 0;
        ptr = new int(0);  // ? Correct allocation
    }

    // Deep Copy Constructor
    Test(const Test& ob) {
        a = ob.a;
        ptr = new int(*(ob.ptr));  // ? Create new memory and copy value
    }

    // Destructor to prevent memory leak
    ~Test() {
        delete ptr;
    }
};

int main() {
    Test ob;
    *(ob.ptr) = 100;

    Test ob2(ob); // Deep copy

    *(ob.ptr) = 200; // Change original

    // Outputs to show deep copy worked
    cout << "Original ptr value: " << *(ob.ptr) << endl;
    cout << "Copied ptr value: " << *(ob2.ptr) << endl;

    return 0;
}

