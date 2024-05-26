#include <stdio.h>

int main(void) {
    int annee;

    // Saisie de l'année
    printf("Entrez une annee : ");
    scanf("%d", &annee);

    // Vérification si l'année est bissextile
    if ((annee % 4 == 0 && annee % 100 != 0) || (annee % 400 == 0)) {
        printf("L'annee %d est bissextile.\n", annee);
    } else {
        printf("L'annee %d n'est pas bissextile.\n", annee);
    }
    return 0;
}
