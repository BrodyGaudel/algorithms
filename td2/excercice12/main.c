#include <stdio.h>

// Fonction pour vérifier si une année est bissextile
int est_bissextile(int annee) {
    if ((annee % 4 == 0 && annee % 100 != 0) || (annee % 400 == 0)) {
        return 1;
    } else {
        return 0;
    }
}

// Fonction pour vérifier si une date est correcte
int date_valide(int jour, int mois, int annee) {
    // Vérifier le mois
    if (mois < 1 || mois > 12) {
        return 0;
    }

    // Vérifier le jour en fonction du mois
    if (jour < 1) {
        return 0;
    }

    // Mois avec 31 jours
    if (mois == 1 || mois == 3 || mois == 5 || mois == 7 || mois == 8 || mois == 10 || mois == 12) {
        if (jour > 31) {
            return 0;
        }
    }
    // Mois avec 30 jours
    else if (mois == 4 || mois == 6 || mois == 9 || mois == 11) {
        if (jour > 30) {
            return 0;
        }
    }
    // Février, en tenant compte des années bissextiles
    else if (mois == 2) {
        if (est_bissextile(annee)) {
            if (jour > 29) {
                return 0;
            }
        } else {
            if (jour > 28) {
                return 0;
            }
        }
    }

    return 1;
}

int main(void) {
    int jour, mois, annee;

    // Saisie du jour, mois et année
    printf("Entrez le jour : ");
    scanf("%d", &jour);

    printf("Entrez le mois : ");
    scanf("%d", &mois);

    printf("Entrez l'annee : ");
    scanf("%d", &annee);

    // Vérification de la validité de la date
    if (date_valide(jour, mois, annee) == 1) {
        printf("La date %02d/%02d/%04d est correcte.\n", jour, mois, annee);
    } else {
        printf("La date %02d/%02d/%04d n'est pas correcte.\n", jour, mois, annee);
    }

    return 0;
}
