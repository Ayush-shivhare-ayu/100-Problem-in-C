//11. Print the Fibonacci series up to n terms
// date --> 28/10/24

#include <stdio.h>

int main() {
    int i, n, a = 0, b = 1, next;

    printf("ENTER THE NUMBER OF TERMS YOU WANT TO PRINT IN FIBONACCI SERIES: ");
    scanf("%d", &n);

    printf("THE FIBONACCI SERIES IS: ");

    for (i = 0; i < n; i++) {
        if (i == 0) {
            printf("%d ", a);
        } else if (i == 1) {
            printf("%d ", b);
        } else {
            next = a + b;
            a = b;
            b = next;
            printf("%d ", next);
        }
    }

    printf("\n");
    return 0;
}
