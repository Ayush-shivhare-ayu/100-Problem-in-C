#include <stdio.h>

int main() {
    float a, b, c;

    printf("ENTER THE FIRST NUMBER: ");
    scanf("%f", &a);  // Use %d for integers

    printf("ENTER THE SECOND NUMBER: ");
    scanf("%f", &b);  // Use %d for integers

    printf("ENTER THE THIRD NUMBER: ");
    scanf("%f", &c);  // Use %d for integers

    // Logic to find the greatest number
    if (a >= b && b >= c) {
        printf("%f IS THE GREATEST NUMBER\n", a);
    } else if (b >= a && a >= c) {
        printf("%f IS THE GREATEST NUMBER\n", b);
    } else {
        printf("%f IS THE GREATEST NUMBER\n", c);
    }

    return 0;
}
