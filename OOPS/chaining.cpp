#include <bits/stdc++.h>
using namespace std;

class Test {
private:
    int a;
    int b;
    int c;

public:
    // All setters return a reference to the current object
    Test& setA(int aa) {
        a = aa;
        return *this;
    }

    Test& setB(int bb) {
        b = bb;
        return *this;
    }

    Test& setC(int cc) {
        c = cc;
        return *this;
    }

    void print() {
        cout << "a = " << a << ", b = " << b << ", c = " << c << endl;
    }
};

int main() {
    Test ob;
    ob.setA(10).setB(20).setC(30); // ? Method chaining
    ob.print();  // Output: a = 10, b = 20, c = 30
    return 0;
}

