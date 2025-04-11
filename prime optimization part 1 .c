#include <stdio.h>
#include <stdbool.h>

bool is_prime(int a) {
    for(int i=2; i<a/2; i++){
    	if(a%i == 0)
    	return false;
	}
	return true;
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
