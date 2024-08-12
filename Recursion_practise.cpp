#include <iostream>
using namespace std;

// Function to calculate the number of divisions by 2 until 1
int fun(int n) {
    if (n == 1)
        return 0; // Base case: if n is 1, return 0
    else
        return 1 + fun(n / 2); // Recursive case: count divisions by 2
}

int main() {
    int num;
    
    cout << "Enter a number: ";
    cin >> num; // Read input number
    
    // Validate input
    if (num <= 0) {
        cout << "Input should be a positive integer." << endl;
        return 1; // Exit with error code
    }
    
    int result = fun(num); // Calculate divisions by 2 until 1
    
    // Output the result
    cout << "Number of divisions by 2 until 1 for " << num << ": " << result << endl;
    
    return 0;
}

