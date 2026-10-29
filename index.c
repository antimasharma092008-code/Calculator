
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main(void) {
    double a, b, result;
    char op;
    char again;

    printf("=================================\n");
    printf("       C CALCULATOR\n");
    printf("=================================\n");

    do {
        printf("\nEnter first number: ");
        if (scanf("%lf", &a) != 1) {
            printf("Invalid input!\n");
            return 1;
        }

        printf("Enter operator (+, -, *, /, %%): ");
        scanf(" %c", &op);

        printf("Enter second number: ");
        if (scanf("%lf", &b) != 1) {
            printf("Invalid input!\n");
            return 1;
        }

        switch (op) {
            case '+':
                result = a + b;
                printf("Result = %.10g\n", result);
                break;

            case '-':
                result = a - b;
                printf("Result = %.10g\n", result);
                break;

            case '*':
                result = a * b;
                printf("Result = %.10g\n", result);
                break;

            case '/':
                if (b == 0) {
                    printf("Error: Cannot divide by zero!\n");
                } else {
                    result = a / b;
                    printf("Result = %.10g\n", result);
                }
                break;

            case '%':
                if (b == 0) {
                    printf("Error: Cannot calculate remainder with zero!\n");
                } else {
                    printf("Remainder = %d\n",
                           (int)a % (int)b);
                }
                break;

            default:
                printf("Invalid operator!\n");
        }

        printf("\nCalculate again? (y/n): ");
        scanf(" %c", &again);

    } while (again == 'y' || again == 'Y');

    printf("\nThank you for using C Calculator!\n");

    return 0;
}
