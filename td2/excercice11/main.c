#include <stdio.h>

// Fonction pour déterminer la période correspondante
void determiner_periode(int mois, int jour) {
    if ((mois == 6 && jour >= 18) || (mois == 7) || (mois == 8) || (mois == 9 && jour <= 2)) {
        printf("Periode: Vacances d'été\n");
    } else if ((mois == 9 && jour >= 4) || (mois == 10) || (mois == 11) || (mois == 12 && jour <= 16)) {
        printf("Periode: 1er semestre\n");
    } else if ((mois == 12 && jour >= 18) || (mois == 1 && jour <= 1)) {
        printf("Periode: Vacances d'hiver\n");
    } else if (mois == 1 && jour >= 2 && jour <= 10) {
        printf("Periode: Examens\n");
    } else if (mois == 1 && jour >= 11 || (mois == 2 && jour <= 7)) {
        printf("Periode: Stage\n");
    } else if ((mois == 2 && jour >= 8) || (mois == 3) || (mois == 4) || (mois == 5) || (mois == 6 && jour <= 6)) {
        printf("Periode: 2e semestre\n");
    } else if (mois == 6 && jour >= 7 && jour <= 16) {
        printf("Periode: Examens\n");
    } else {
        printf("Date invalide ou hors des periodes definies.\n");
    }
}

int main(void) {
    int mois, jour;

    // Saisie du numéro de mois et du jour
    printf("Entrez le numero du mois (1-12) : ");
    scanf("%d", &mois);
    printf("Entrez le jour (1-31) : ");
    scanf("%d", &jour);

    // Appel de la fonction pour déterminer la période
    determiner_periode(mois, jour);
    return 0;
}
