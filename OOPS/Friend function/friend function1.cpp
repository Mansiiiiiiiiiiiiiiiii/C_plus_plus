#include<bits/stdc++.h>
using namespace std;

class Box {
private:
    double width;
public:
    Box(double w) {
    width = w;
}

    // Friend function declaration
    friend void printWidth(const Box &b);
};

// Friend function definition
void printWidth(const Box &b) {
    cout << "Width of box: " << b.width << endl;
}

int main() {
    Box box(10.5);
    printWidth(box); 
    return 0;
}

