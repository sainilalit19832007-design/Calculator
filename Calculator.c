
#include <stdio.h>

int main()
{
    float a, b, result;
    char operator;

    printf("Enter first number: ");
    scanf("%f", &a);

    printf("Enter an operator (+, -, *, /): ");
    scanf(" %c", &operator);

    printf("Enter second number: ");
    scanf("%f", &b);

    switch (operator)
    {
        case '+':
            result = a + b;
            printf("Result = %.2f\n", result);
            break;

        case '-':
            result = a - b;
            printf("Result = %.2f\n", result);
            break;

        case '*':
            result = a * b;
            printf("Result = %.2f\n", result);
            break;

        case '/':
            if (b != 0)
            {
                result = a / b;
                printf("Result = %.2f\n", result);
            }
            else
            {
                printf("Division by zero is not allowed\n");
            }
            break;

        default:
            printf("Invalid operator\n");
    }

    return 0;
}
