#include<iostream>
using namespace std;

int sumOfNaturalNumber() {
    int n, sum = 0;
    cout << "Enter the last number of the natural numbers: ";
    cin >> n;
    for (int i = 1; i <= n; i++) {
        sum += i;  // Accumulating sum of natural numbers
    }
    return sum;  // Return the sum
}

int main() {
    int n1 = sumOfNaturalNumber();  // Call the function and store the result
    cout << "Sum of natural numbers is: " << n1;  // Output the result
    return 0;
}

