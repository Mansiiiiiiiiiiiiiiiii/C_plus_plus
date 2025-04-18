#include <bits/stdc++.h>
using namespace std;

class Test {
public:
    int a;

    // Default constructor
    Test() {
        a = 0;
        cout << "Hello (Default constructor)" << endl;
    }

    // Parameterized constructor
    Test(int a) {
        this->a = a;
        cout << "Hay!! (Parameterized constructor)" << endl;
    }
};

int main() {
    Test ob1;        // Calls default constructor -> a = 0
    Test ob2(100);   // Calls parameterized constructor -> a = 100

    cout << "ob1.a: " << ob1.a << endl;
    cout << "ob2.a: " << ob2.a << endl;

    return 0;
}

