#include <stdio.h>

#define PI 3.14159

int main() {
    float radius=5, area;

    printf("Enter radius of circle: ");
    scanf("%f", &radius);

    area = PI * radius * radius;

    printf("Area of Circle = %.2f\n", area);

    return 0;
}