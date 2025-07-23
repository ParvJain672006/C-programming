//even numbers , sum to n , 
#include <stdio.h>
int main() {
    int num;
    printf("Enter any number: ");
    scanf("%d", &num);

    if (num <= 0) {
        printf("Invalid input %d", num);
    } else {
        printf("You can continue %d\n", num);

        for (int i = 0; i < num; i++) {
            if (i % 2 == 0) {
                printf("Number is even: %d\n", i);
            } else {
                printf("Number is odd: %d\n", i);
            }
        }
    }

    return 0;
}

