// write a c programme to find withdrawl amount from using nested if else . intitial balance =10000;
#include <stdio.h>

int main() {
    int balance = 10000, amount;

    printf("Your deposit amount is: 10000\nEnter amount to withdraw: ");
    scanf("%d", &amount);

    if (amount > 0) {  
        if (balance >= amount) {  
            balance = balance - amount;
            printf("Remaining balance is: %d\n", balance);
            
            if (balance == 0) {
                printf("Your account balance is now zero.\n");
            }
        } else {
            printf("You have insufficient balance.\n");
        }
    } else {
        printf("Invalid amount entered.\n");
    }

    return 0;
}

