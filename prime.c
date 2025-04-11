#include <stdio.h>
#include <stdbool.h>

bool is_prime(int a) {
    if (a < 2) return false; // 0 and 1 are not prime
    int c = 0; // Counter for divisors

    for (int i = 1; i <= a; i++) {
        if (a % i == 0)
            c++;
    }

    return (c == 2); // Prime numbers have exactly 2 divisors (1 and itself)
}

int main() {
    int a;
    printf("Enter a number to check if it's prime:\n");
    scanf("%d", &a);

    if (is_prime(a))
        printf("%d is a prime number.\n", a);
    else
        printf("%d is not a prime number.\n", a);

    return 0;
}
