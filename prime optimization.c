#include <stdio.h>
#include <stdbool.h>
#include <math.h>

void sieve(bool arr[]) {
    int n = 500; // Define limit

    for (int i = 0; i <= n; i++)
        arr[i] = true; // Mark all numbers as prime initially

    arr[0] = arr[1] = false; // 0 and 1 are not prime

    for (int i = 2; i <= sqrt(n); i++) {
        if (arr[i]) {
            for (int j = i * i; j <= n; j += i) {
                arr[j] = false; // Mark multiples of i as non-prime
            }
        }
    }
}

int main() {
    int a;
    printf("Enter a number to check if it's prime:\n");
    scanf("%d", &a);

    bool arr[501]; // 500 + 1 to avoid out-of-bounds errors
    sieve(arr);

    if (arr[a])
        printf("%d is a prime number.\n", a);
    else
        printf("%d is not a prime number.\n", a);

    return 0;
}
