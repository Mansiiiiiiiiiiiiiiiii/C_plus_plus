#include <stdio.h>

int fib(int a, int memo[]) {
    if (a == 0 || a == 1)
        return a;

    if (memo[a] != -1)  // Return memoized result if available
        return memo[a];

    // Store the computed result in memo array
    memo[a] = fib(a - 1, memo) + fib(a - 2, memo);
    return memo[a];
}

int main() {
    int a;
    printf("Enter a number: ");
    scanf("%d", &a);

    int memo[a + 1];  // Memoization array

    // Initialize memo array with -1
    for (int i = 0; i <= a; i++)
        memo[i] = -1;

    // Store base cases explicitly
    memo[0] = 0;
    memo[1] = 1;

    printf("The answer is %d\n", fib(a, memo));
    return 0;
}
