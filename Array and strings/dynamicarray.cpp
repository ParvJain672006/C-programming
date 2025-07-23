// dynaic array 
#include <stdio.h>
#include <stdlib.h>


int main() {
    int *arr;
    int n = 5; 

    arr = (int *)malloc(n * sizeof(int));// allocateing 5 integers memory 

    for (int i = 0; i < n; i++) {
        arr[i] = i + 1;//assigining values 
    }

    for (int j = 0; j < n; j++) { 
        printf("%d \n", arr[j]);  // printing value 
    }

    free(arr);  // freeing allocated memory 
    return 0;
}

