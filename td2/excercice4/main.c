#include <stdio.h>

int main(void) {
    printf("calcule du min (le max) de deux entiers saisis au clavier.!\n");
    int a, b;

    // Saisie des deux entiers
    printf("Entrez deux nombres entiers: ");
    scanf("%d %d", &a, &b);

    // Calcul du minimum et du maximum
    int min = (a < b) ? a : b;
    int max = (a > b) ? a : b;

    // Affichage du minimum et du maximum
    printf("Min: %d\n", min);
    printf("Max: %d\n", max);

    printf("calcule du min (le max) de trois entiers saisis au clavier.!\n");

    int aa, bb, cc;

    // Saisie des trois entiers
    printf("Entrez trois nombres entiers: ");
    scanf("%d %d %d", &aa, &bb, &cc);

    // Calcul du minimum
    int min1 = aa;
    if (bb < min1) min1 = bb;
    if (cc < min1) min1 = cc;

    // Calcul du maximum
    int max1 = aa;
    if (bb > max1) max1 = bb;
    if (cc > max1) max1 = cc;

    // Affichage du minimum et du maximum
    printf("Min: %d\n", min1);
    printf("Max: %d\n", max1);

    return 0;
}
