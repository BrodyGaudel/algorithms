#include <stdio.h>

/**
 *
 * Write a program in C that calculates and displays the
 * equivalent resistance of three resistors connected in series and in parallel.
 */
int main(void) {
    float R1, R2, R3, Rserie, Rparallele;

    printf("Entrez les valeurs des trois resistances: \n");
    scanf("%f\n %f\n %f\n", &R1, &R2, &R3);

    Rserie = R1 + R2 + R3;
    Rparallele = (R1 * R2 * R3) / (R1 * R2 + R1 * R3 + R2 * R3);

    printf("Resistance en serie: %.2f\n", Rserie);
    printf("Resistance en parallele: %.2f\n", Rparallele);
    return 0;
}
