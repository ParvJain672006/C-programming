#include<stdio.h>

int main() {
    char assignment;
    int num, num2;
    printf("enter any one assignment operator + , - , / , *  \n");
    scanf(" %c", &assignment); // Added a space before %c to handle newline character
    printf("enter values :");
    scanf("%d %d", &num, &num2);

    switch (assignment) {
        case '+':
            printf("sum is %d \n", num + num2);
            break;

        case '-':
            printf("subtract is %d \n", num - num2);
            break;

        case '*':
            printf("multiply is %d \n", num * num2);
            break;

        case '/':
            if (num2 == 0) {
                printf("invalid input enter number greater than 0 \n");
            } else {
                printf("division is %d \n", num / num2);
            }
            break;

        default:
            printf("invalid input \n");
    }
    return 0;
}
