#include <stdio.h>

int main(void) {
    double salaire_base, note_rendement, prime_rendement;
    double salaire_brut, salaire_imposable, salaire_net;
    double charges_fixes;

    // Saisie des données
    printf("Entrez le salaire de base : ");
    scanf("%lf", &salaire_base);

    printf("Entrez la note de rendement : ");
    scanf("%lf", &note_rendement);

    printf("Entrez les charges fixes : ");
    scanf("%lf", &charges_fixes);

    // Calcul de la prime de rendement
    prime_rendement = note_rendement * 0.5;

    // Calcul du salaire brut
    salaire_brut = salaire_base + prime_rendement;

    // Calcul du salaire imposable (déduction de 6.25%)
    salaire_imposable = salaire_brut * (1 - 0.0625);

    // Calcul du salaire net
    salaire_net = salaire_imposable - charges_fixes;

    // Affichage des résultats
    printf("Salaire de base : %.2lf\n", salaire_base);
    printf("Prime de rendement : %.2lf\n", prime_rendement);
    printf("Salaire brut : %.2lf\n", salaire_brut);
    printf("Salaire imposable : %.2lf\n", salaire_imposable);
    printf("Charges fixes : %.2lf\n", charges_fixes);
    printf("Salaire net : %.2lf\n", salaire_net);
    return 0;
}
