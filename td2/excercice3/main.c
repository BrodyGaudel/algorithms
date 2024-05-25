#include <stdio.h>

/**
 *
* Écrire un algorithme qui permet de saisir deux entiers et un caractère et d’effectuer
l’opération arithmétique qui correspond à la valeur de l’opérande (‘+’, ‘*’, ‘-‘, ‘/’, ‘%’).
L’algorithme devra afficher le résultat de l’opération ou un message d’erreur en cas de saisie
d'un opérande invalide.
 */
int main(void) {
    int x, y, resultat;
    char operateur;

    // Demande à l'utilisateur de saisir deux nombres entiers
    printf("Entrez deux nombres entiers: ");
    scanf("%d %d", &x, &y);

    // Demande à l'utilisateur de saisir un opérateur arithmétique
    printf("Entrez un operateur arithmetique (+, -, *, /, %): ");
    scanf(" %c", &operateur);  // Notez l'espace avant %c pour ignorer les espaces blancs précédents

    // Effectue l'opération arithmétique en fonction de l'opérateur
    switch (operateur) {
        case '+':
            resultat = x + y;
        printf("Resultat: %d\n", resultat);
        break;
        case '-':
            resultat = x - y;
        printf("Resultat: %d\n", resultat);
        break;
        case '*':
            resultat = x * y;
        printf("Resultat: %d\n", resultat);
        break;
        case '/':
            if (y != 0) {
                resultat = x / y;
                printf("Resultat: %d\n", resultat);
            } else {
                printf("Erreur: Division par zéro n'est pas permise.\n");
            }
        break;
        case '%':
            if (y != 0) {
                resultat = x % y;
                printf("Resultat: %d\n", resultat);
            } else {
                printf("Erreur: Division par zero n'est pas permise.\n");
            }
        break;
        default:
            printf("Erreur: Operateur invalide.\n");
    }
    return 0;
}
