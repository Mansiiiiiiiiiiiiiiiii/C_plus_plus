#include <iostream>
#include <iomanip> // For std::hex and std::setw(width)
using namespace std;

void decToHex(int n) {
    cout << "Hexadecimal number: " << hex << n << endl;
}

int main() {
    int n;
    cout << "Enter a decimal number: ";
    cin >> n;

    decToHex(n);

    return 0;
}

