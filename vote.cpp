#include <stdio.h>

int main() {
    char ch;
    int age;
    
    printf("Enter country name first letter: ");
    scanf(" %c", &ch); 

    if (ch == 'i' || ch == 'I') {
        printf("Enter your age: ");
        scanf("%d", &age);

        if (age >= 18) {
            printf("Welcome for voting\n");
        } else {
            printf("Invalid age\n");
        }
    } else {
        printf("Invalid country\n");
    }

    return 0;
}

