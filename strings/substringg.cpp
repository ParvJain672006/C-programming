//  finnding sub string 
// find the first ooccurance of sub string 
#include <stdio.h>
#include <string.h>

int main() {
    char str[] = "program in c";
    char *sub = strstr(str, "in");
    if (sub) {
        printf("substring found at point %s\n", sub);
    } else {
        printf("substring not found\n");
    }
    return 0;
}

