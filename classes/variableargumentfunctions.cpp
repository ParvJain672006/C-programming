// variable argument function 

//Q , function to calculate average of any no . of integers ?
#include <stdio.h>
#include <stdarg.h>

// Function to calculate average using variable arguments
float calculateAverage(int count, ...) {
    va_list args; // Declare a variable argument list
    va_start(args, count); // Initialize the argument list
    
    int sum = 0;
    for (int i = 0; i < count; i++) {
        sum += va_arg(args, int); // Access the next argument
    }
    
    va_end(args); // Clean up the argument list
    return (float)sum / count; // Return the average
}

int main() {
    printf("Average of 3, 5, 7, 9: %.2f\n", calculateAverage(4, 3, 5, 7, 9));
    printf("Average of 10, 20, 30: %.2f\n", calculateAverage(3, 10, 20, 30));
    return 0;
}

