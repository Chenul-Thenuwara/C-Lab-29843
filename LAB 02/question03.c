#include <stdio.h>
int main() {
    float d, t, s;
    printf("Enter the distance traveled  ");
    scanf("%f", &d);
    printf("Enter the time taken  ");
    scanf("%f", &t);
    s = d / t;
    printf("Average speed: %.2f \n", s);
}
