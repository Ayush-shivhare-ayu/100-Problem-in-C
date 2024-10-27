//9. Swap two numbers without using a third variable.
// date--> 27/10/24

#include <stdio.h>

int main() {
    int a, b;

    printf("Enter two numbers:\n");
    scanf("%d %d", &a, &b);

    printf("Before swapping: a = %d, b = %d\n", a, b);

    // Swap using arithmetic operations
    a = a + b; // Step 1: a becomes the sum of a and b
    b = a - b; // Step 2: b becomes the original a
    a = a - b; // Step 3: a becomes the original b

    printf("After swapping: a = %d, b = %d\n", a, b);

    return 0;
}
