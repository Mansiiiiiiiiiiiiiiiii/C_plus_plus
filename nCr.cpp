#include <iostream>
using namespace std;

// Function to calculate factorial of a number
int factorial(int n) {
    int result = 1;
    for (int i = 2; i <= n; ++i) {
        result *= i;
    }
    return result;
}

// Function to calculate nCr
int nCr(int n, int r) {
    if (r > n) return 0;
    return factorial(n) / (factorial(r) * factorial(n - r));
}

int main() {
    int n, r;
    cout << "Enter n and r: ";
    cin >> n >> r;

    cout << "nCr = " << nCr(n, r) << endl;

    return 0;
}

