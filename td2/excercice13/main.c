#include <stdio.h>

int main(void) {
    int heures_travaillees;
    double prix_unitaire, montant_total = 0.0;

    // Saisie du nombre d'heures travaillées et du prix unitaire d'une heure normale
    printf("Entrez le nombre d'heures travaillees : ");
    scanf("%d", &heures_travaillees);

    printf("Entrez le prix unitaire d'une heure normale : ");
    scanf("%lf", &prix_unitaire);

    // Calcul du montant total
    if (heures_travaillees <= 39) {
        montant_total = heures_travaillees * prix_unitaire;
    } else if (heures_travaillees <= 44) {
        montant_total = 39 * prix_unitaire + (heures_travaillees - 39) * prix_unitaire * 1.5;
    } else if (heures_travaillees <= 49) {
        montant_total = 39 * prix_unitaire + 5 * prix_unitaire * 1.5 + (heures_travaillees - 44) * prix_unitaire * 1.75;
    } else {
        montant_total = 39 * prix_unitaire + 5 * prix_unitaire * 1.5 + 5 * prix_unitaire * 1.75 + (heures_travaillees - 49) * prix_unitaire * 2.0;
    }

    // Affichage du montant total
    printf("Le montant total des heures travaillees est : %.2lf\n", montant_total);
    return 0;
}
