#include <stdio.h>
#include <math.h>

int main(void) {
    double a, b, c;
    double discriminant, root1, root2, realPart, imaginaryPart;

    // Saisir les coefficients de l'équation
    printf("Entrez les coefficients a, b et c :\n");
    scanf("%lf\n %lf\n %lf", &a, &b, &c);

    // Calculer le discriminant
    discriminant = b * b - 4 * a * c;

    // Analyser le discriminant pour déterminer le nombre de solutions
    if (discriminant > 0) {
        // Deux racines réelles et distinctes
        root1 = (-b + sqrt(discriminant)) / (2 * a);
        root2 = (-b - sqrt(discriminant)) / (2 * a);
        printf("Les racines sont reelles et distinctes.\n");
        printf("Racine 1 = %.2lf\n", root1);
        printf("Racine 2 = %.2lf\n", root2);
    }
    else if (discriminant == 0) {
        // Une racine réelle double
        root1 = root2 = -b / (2 * a);
        printf("Les racines sont reelles et doubles.\n");
        printf("Racine = %.2lf\n", root1);
    }
    else {
        // Pas de racine réelle, racines complexes
        realPart = -b / (2 * a);
        imaginaryPart = sqrt(-discriminant) / (2 * a);
        printf("Les racines sont complexes et distinctes.\n");
        printf("Racine 1 = %.2lf + %.2lfi\n", realPart, imaginaryPart);
        printf("Racine 2 = %.2lf - %.2lfi\n", realPart, imaginaryPart);
    }
    return 0;
}
