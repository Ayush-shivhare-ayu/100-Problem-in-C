#include <stdio.h>

int main() {
    int fac;
    int sum = 1; // Initialize sum to 1
    int i;

    printf("ENTER THE NUMBER YOU WANT TO KNOW ABOUT FACTORIAL: ");
    scanf("%d", &fac);

    // Check for negative input
    if (fac < 0) {
        printf("Factorial is not defined for negative numbers.\n");
        return 1; // Exit with an error code
    }

    // Calculate factorial
    for (i = fac; i >= 1; i--) {
        sum *= i; // Multiply sum by i
    }

    printf("THE FACTORIAL OF %d IS %d\n", fac, sum);
    return 0;
}
