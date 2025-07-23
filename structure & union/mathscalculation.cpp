#include <stdio.h>

// Function Definitions
int add(int a, int b) {
    return a + b;
}

int subtraction(int a, int b) {
    return a - b;
}

int multiplication(int a, int b) {
    return a * b;
}

int divide(int a, int b) {
    return a / b;
}

int main() {
    int a, b, choose, result;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);  // Fixed incorrect format specifier

    printf("Choose an operation:\n");
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");
    scanf("%d", &choose);

    if (choose == 1) {
        printf("Addition result: %d\n", add(a, b));
    } else if (choose == 2) {
        printf("Subtraction result: %d\n", subtraction(a, b));
    } else if (choose == 3) {
        printf("Multiplication result: %d\n", multiplication(a, b));
    } else if (choose == 4) {
        if (b != 0) {  // Check for division by zero
            printf("Division result: %d\n", divide(a, b));
        } else {
            printf("Error: Division by zero is not allowed.\n");
        }
    } else {
        printf("Invalid choice!\n");
    }

    return 0;
}
