#include <stdio.h>
/*
*Écrire un algorithme qui permet de saisir deux entiers x et y et de vérifier ensuite si x est
divisible par y.
 */
int main(void) {
    int x, y;

    // Demande à l'utilisateur de saisir deux nombres entiers
    printf("Entrez deux nombres entiers (x et y): ");
    scanf("%d %d", &x, &y);

    // Vérifie que y n'est pas zéro pour éviter la division par zéro
    if (y == 0) {
        printf("Division par zéro n'est pas possible.\n");
    } else {
        // Vérifie si x est divisible par y
        if (x % y == 0) {
            printf("%d est divisible par %d.\n", x, y);
        } else {
            printf("%d n'est pas divisible par %d.\n", x, y);
        }
    }
    return 0;
}
