#include <stdio.h>

int main() {
    float basicSalary;
    int yearsOfService;
    char city;
    float additionalAllowance = 0,bonus = 0,grossRemuneration;

    printf("Enter the basic salary: ");
    scanf("%f", &basicSalary);

    printf("Enter the number of years of service: ");
    scanf("%d", &yearsOfService);

    printf("Enter the city: ");
    scanf(" %c", &city);

    if (yearsOfService > 5)
        additionalAllowance += 0.10 * basicSalary;
    if (city == 'C')

        additionalAllowance += 2500;
    if (basicSalary >= 50000)

        bonus += 0.15 * basicSalary;
     else if (basicSalary >= 25000)
        bonus += 0.12 * basicSalary;
     else
        bonus += 0.10 * basicSalary;

    grossRemuneration = basicSalary + additionalAllowance + bonus;

printf("Gross Monthly Remuneration: %.2f\n", grossRemuneration);
}
