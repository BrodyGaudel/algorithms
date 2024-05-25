#include <stdio.h>
/*
*Write an algorithm that allows you to enter a positive integer less than 999 and display the
units, tens and hundreds.
 *
 */
int main(void)
{
    int nombre;

    // Demande à l'utilisateur de saisir un nombre
    printf("Entrez un nombre entier positif inferieur a 999: ");
    scanf("%d", &nombre);

    // Vérifie que le nombre est dans la plage valide
    if (nombre < 0 || nombre >= 999) {
        printf("Le nombre doit etre positif et inferieur a 999.\n");
    } else {
        int unités = nombre % 10;
        int dizaines = (nombre / 10) % 10;
        int centaines = (nombre / 100) % 10;

        // Affiche les chiffres des unités, dizaines et centaines
        printf("Chiffre des unites: %d\n", unités);
        printf("Chiffre des dizaines: %d\n", dizaines);
        printf("Chiffre des centaines: %d\n", centaines);
    }
    return 0;
}
