#include <stdio.h>

int main() {
    int num1, num2;
    char op;
    if (scanf("%d %d %c", &num1, &num2, &op) != 3) {
        printf("Invalid input format\n");
        return 1;
    }

    switch (op) {
        case '+':
            printf("%d\n", num1 + num2);
            break;

        case '-':
            printf("%d\n", num1 - num2);
            break;

        case '*':
            printf("%d\n", num1 * num2);
            break;

        case '/':
            if (num2 != 0)
                printf("%d\n", num1 / num2);
            else
                printf("Error: Division by zero\n");
            break;

        case '%':
            if (num2 != 0)
                printf("%d\n", num1 % num2);
            else
                printf("Error: Modulo by zero\n");
            break;

        default:
            printf("Error: Invalid operator\n");
    }

    return 0;
}
