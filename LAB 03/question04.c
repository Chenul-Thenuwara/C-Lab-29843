#include <stdio.h>

int main() {
    float radius;
    const float PI = 3.14159;

    printf("Enter the radius of the circle: ");
    scanf("%f", &radius);

    printf("Diameter: %f\n", 2 * radius);
    printf("Circumference: %f\n", 2 * PI * radius);
    printf("Area: %f\n", PI * radius * radius);

    return 0;
}
