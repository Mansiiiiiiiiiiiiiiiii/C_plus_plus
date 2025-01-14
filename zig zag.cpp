#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the number of rows (height of zigzag): ";
    cin >> n;

    int width = n * 3; // Width of the pattern for better visibility
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= width; j++) {
            if ((i + j) % 4 == 0 || (i == 2 && j % 4 == 0)) {
                cout << "*";
            } else {
                cout << " ";
            }
        }
        cout << endl;
    }

    return 0;
}

