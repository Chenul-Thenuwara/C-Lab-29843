#include <stdio.h>
int main() {
    float f, c;
    printf("Enter temperature in degrees Fahrenheit: ");
    scanf("%f", &f);
    c =(f- 32)*5/9;
    printf("Temperature in degrees Celsius: %.2f\n", c);
}
