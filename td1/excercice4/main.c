#include <stdio.h>
//Write a program in C that calculates a worker's final salary based on basic hours and overtime
int main(void) {
    float base_hours, extra_hours, base_rate = 3.397, extra_rate = 4.322, gross_salary, net_salary, deduction_rate = 0.022;

    printf("Entrez le nombre d'heures de base et d'heures supplementaires: ");
    scanf("%f %f", &base_hours, &extra_hours);

    gross_salary = base_hours * base_rate + extra_hours * extra_rate;
    net_salary = gross_salary * (1 - deduction_rate);

    printf("Salaire final: %.2f DT\n", net_salary);

    return 0;
}
