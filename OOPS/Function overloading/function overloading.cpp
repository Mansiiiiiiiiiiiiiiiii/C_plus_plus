#include <bits/stdc++.h>
using namespace std;

class test {
public:
    // Function overloading: two functions with same name but different parameters
    void sum(int a, int b) {
        cout << "First" << endl;
        cout << a + b << endl;
    }

    void sum(int a, int b, int c) {
        cout << "Second" << endl;
        cout << a + b + c << endl;
    }
};

int main() {
    test t1;
    t1.sum(10, 20);       // Calls the first version
    t1.sum(10, 20, 30);   // Calls the second version
    return 0;
}

