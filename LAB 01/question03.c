#include <stdio.h>

int main() {
    int i;
    float f;
    double d;
    char c;

    printf("Enter an integer value: ");
    scanf("%d", &i);

    printf("Enter a float value: ");
    scanf("%f", &f);

    printf("Enter a double value: ");
    scanf("%lf", &d);

    printf("Enter a character: ");
    scanf(" %c", &c);

    printf("Values entered:\n");
    printf("Integer: %d\n", i);
    printf("Float: %f\n", f);
    printf("Double: %lf\n", d);
    printf("Character: %c\n", c);

    return 0;
}
