// strcmp - compare strings 
#include <stdio.h>
#include <string.h>

int main() {
    char str1[] = "apple";
    char str2[] = "banana";
    
    int result = strcmp(str1, str2);
    
    if (result == 0) {
        printf("Strings are equal\n");
    } else if (result < 0) {
        printf("str1 comes before str2\n");
    } else {
        printf("str1 comes after str2\n");
    }

    return 0;
}

