#include <stdio.h>

int main(void) {
    double temperature;

    // Saisie de la température
    printf("Entrez la temperature de l'eau : ");
    scanf("%lf", &temperature);

    // Détermination et affichage de l'état de l'eau
    if (temperature <= 0) {
        printf("Etat de l'eau : Glace\n");
    } else if (temperature > 0 && temperature <= 100) {
        printf("Etat de l'eau : Eau\n");
    } else {
        printf("Etat de l'eau : Vapeur\n");
    }
    return 0;
}
