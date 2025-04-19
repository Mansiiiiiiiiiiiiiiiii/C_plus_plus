#include <bits/stdc++.h>
using namespace std;

class Test2; // Forward declaration

class Test1 {
private:
    int a = 100;
    friend class Test2; // Instead of friend function, just make the whole class a friend
};

class Test2 {
public:
    Test1 ob;
    void print();
};

void Test2::print() {
    cout << ob.a << endl; // Directly access since Test2 is a friend class
}

int main() {
    Test2 t;
    t.print(); // Output: 100
    return 0;
}
