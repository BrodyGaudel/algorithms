#include <stdio.h>

/**
 * Write a program in C that calculates and displays the quotient and remainder of
 * the integer division of two whole numbers entered using the keyboard.
 */
int main(void) {
    int a, b, quotient, reste;

    printf("Entrez deux nombres entiers: ");
    scanf("%d %d", &a, &b);

    quotient = a / b;
    reste = a % b;

    printf("Quotient: %d\n", quotient);
    printf("Reste: %d\n", reste);

    return 0;
}
