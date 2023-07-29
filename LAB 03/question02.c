#include <stdio.h>

int main() {
    int num1, num2, num3;
    int largest, smallest;

    printf("Enter the first number: ");
    scanf("%d", &num1);

    printf("Enter the second number: ");
    scanf("%d", &num2);

    printf("Enter the third number: ");
    scanf("%d", &num3);

    largest = smallest = num1;

    if (num2 > largest)
        largest = num2;
    else if (num2 < smallest)
        smallest = num2;

    if (num3 > largest)
        largest = num3;
    else if (num3 < smallest)
        smallest = num3;

    printf("The largest number is: %d\n", largest);
    printf("The smallest number is: %d\n", smallest);

    return 0;
}
