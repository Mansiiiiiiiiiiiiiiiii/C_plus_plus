#include <iostream>
using namespace std;

void fibonacci(int n) {
    int a = 0, b = 1, nextTerm;

    cout << "Fibonacci series: ";
    for (int i = 1; i <= n; ++i) {
        cout << a << " ";
        nextTerm = a + b;
        a = b;
        b = nextTerm;
    }
    cout << endl;
}

int main() {
    int n;

    cout << "Enter the number of terms: ";
    cin >> n;

    fibonacci(n);

    return 0;
}

