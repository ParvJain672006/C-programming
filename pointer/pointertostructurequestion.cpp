#include <stdio.h>

struct point {
    float f;
};

int main() {
    struct point f = {3.14}; 
    struct point *ptr = &f;  

    printf("f : %f\n", f.f); 
    printf("f : %f\n", ptr->f); 

    ptr->f = 10.1; 

    printf("new f: %f\n", f.f); 
    return 0;
}

