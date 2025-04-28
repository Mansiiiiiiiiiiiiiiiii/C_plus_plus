#include <iostream>
using namespace std;

class Cuboid {
    int l, b, h;

public:
    Cuboid(int length = 0, int breadth = 0, int height = 0)
        : l(length), b(breadth), h(height) {
        cout << "Parametrized constructor" << endl;
    }

    void show() {
        cout << "Dimensions: l=" << l << ", b=" << b << ", h=" << h << " and volume=" << (l * b * h) << endl;
    }
};

int main() {
    Cuboid a; // User input for dimensions
    Cuboid b(10); // Sets all dimensions to 10
    Cuboid c(10, 20, 30); // Sets dimensions to 10, 20, 30

    cout << endl << "Cuboid a:" << endl;
    a.show();
    cout << endl << "Cuboid b:" << endl;
    b.show();
    cout << endl << "Cuboid c:" << endl;
    c.show();

    return 0;
}

