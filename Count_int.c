//12. Count the number of digits in a number.
// date--->28/10/24

#include <stdio.h>

int main() {
    long long num;
    int count = 0;

    printf("ENTER A NUMBER: ");
    scanf("%lld", &num);

    // Handle the case for zero
    if (num == 0) {
        count = 1;
    } else {
        // If the number is negative, make it positive
        if (num < 0) {
            num = -num;
        }

        while (num != 0) {
            num /= 10;  // Remove the last digit
            count++;    // Increment the digit count
        }
    }

    printf("THE NUMBER OF DIGITS IS: %d\n", count);
    
    return 0;
}



    

    




     return (0);

}