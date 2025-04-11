#include <stdio.h>

int findDuplicate(int arr[], int n) {
    int xor1 = 0, xor2 = 0;

    // XOR all elements in the array
    for (int i = 0; i < n; i++) {
        xor1 ^= arr[i];
    }

    // XOR numbers from 1 to (n-1)
    for (int i = 1; i < n; i++) {
        xor2 ^= i;
    }

    return xor1 ^ xor2; // The duplicate element
}

int main() {
    int arr[] = {1, 3, 4, 2, 2};
    int n = sizeof(arr) / sizeof(arr[0]);
    printf("Duplicate element: %d\n", findDuplicate(arr, n));
    return 0;
}

