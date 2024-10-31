// 13. Find /the GCD of two numbers.
// date --> 28/10/24

#include <stdio.h>

int main() {
    int a, b, gcd;

    // Input numbers
    printf("ENTER THE FIRST NUMBER: ");
    scanf("%d", &a);

    printf("ENTER THE SECOND NUMBER: ");
    scanf("%d", &b);

    // Using Euclidean algorithm to find GCD
    while (b != 0) {
        int temp = b;
        b = a % b; // Update b to be the remainder of a divided by b
        a = temp;  // Update a to be the previous value of b
    }

    gcd = a; // After the loop ends, a contains the GCD

    printf("The GCD is %d\n", gcd);
    return 0;
}
