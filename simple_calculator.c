#include <stdio.h>

int main() {
    char operator;
    double num1, num2;

    // Ask the user to input the operator and numbers
    printf("Enter operator (+, -, *, /): ");
    scanf(" %c", &operator);  // The space before %c helps to consume any leftover newline character

    printf("Enter two numbers: ");
    scanf("%lf %lf", &num1, &num2);  // Use %lf for reading doubles

    // Perform the calculation based on the operator
    switch(operator) {
        case '+':
            printf("%.2lf + %.2lf = %.2lf\n", num1, num2, num1 + num2);
            break;
        case '-':
            printf("%.2lf - %.2lf = %.2lf\n", num1, num2, num1 - num2);
            break;
        case '*':
            printf("%.2lf * %.2lf = %.2lf\n", num1, num2, num1 * num2);
            break;
        case '/':
            if (num2 != 0) {
                printf("%.2lf / %.2lf = %.2lf\n", num1, num2, num1 / num2);
            } else {
                printf("Error! Division by zero is not allowed.\n");
            }
            break;
        default:
            printf("Error! Invalid operator.\n");
    }

    return 0;
}
