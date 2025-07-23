//q1 write a  c programme to print input taken from users . inputs are name , age , phone 
#include <stdio.h>

int main() {
    int age;
    long long int phone;
    char name[50];

    printf("Enter Name, Age, Phone: ");
    scanf("%s %d %lld", name, &age, &phone);

    printf("\nEntered details:\n");
    printf("Name: %s\n", name);
    printf("Age: %d\n", age);
    printf("Phone: %lld\n", phone);

    return 0;
}

