// circle radius
#include <stdio.h>
float areaOfCircle(float r) {
    return 3.14 * r * r;
}

int main() {
    float r;
    printf("Enter radius: ");
    scanf("%f", &r);
    printf("Area of Circle: %.2f\n", areaOfCircle(r));

    return 0;
}

