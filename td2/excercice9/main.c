#include <stdio.h>

int main(void) {
    double a, b;
    double solution;

    // Saisie des coefficients a et b
    printf("Entrez les coefficients a et b (pour l'equation ax + b = 0) : ");
    scanf("%lf %lf", &a, &b);

    // Vérification des cas spéciaux
    if (a == 0) {
        if (b == 0) {
            printf("L'equation a une infinite de solutions.\n");
        } else {
            printf("L'equation n'a pas de solution.\n");
        }
    } else {
        // Calcul de la solution
        solution = -b / a;
        printf("La solution de l'equation est : x = %.2lf\n", solution);
    }

    return 0;
}
