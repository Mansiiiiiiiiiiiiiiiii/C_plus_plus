#include <iostream>
using namespace std;

void reverseArray(int arr[], int size) {
    int rev[size];  // Create a new array to store reversed elements

    for (int i = 0; i < size; i++) {
        rev[i] = arr[size - 1 - i];  //i ek index value hai jo zero se start hoga 
		//aur badhta jaega
		//size -1 last element of array
		//size -1 -i  
    }

    // Print the reversed array
    cout << "Reversed Array: ";
    for (int i = 0; i < size; i++) {
        cout << rev[i] << " ";  // Print each element
    }
    cout << endl;
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};  // Original array
    int size = sizeof(arr) / sizeof(arr[0]);  // Calculate number of elements

    reverseArray(arr, size);  // Reverse and print the array

    return 0;
}

