//Check if a number is prime
// date--> 27/10/24

#include <stdio.h>

int main() {
    int a, isPrime = 1; // Assume number is prime

    printf("ENTER THE NUMBER TO CHECK: ");
    scanf("%d", &a);

    // Handle special cases
    if (a <= 1) {
        isPrime = 0; // Numbers less than or equal to 1 are not prime
    } else {
        for (int i = 2; i * i <= a; i++) { // Check for factors up to the square root of a
            if (a % i == 0) {
                isPrime = 0; // Found a factor, so it's not prime
                break;
            }
        }
    }

    if (isPrime) {
        printf("THE NUMBER IS PRIME\n");
    } else {
        printf("THE NUMBER IS NOT PRIME\n");
    }

    return 0;
}
