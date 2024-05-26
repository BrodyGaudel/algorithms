#include <stdio.h>

int main() {
    double salaire_brut, salaire_net;
    char a_freres_soeurs, est_boursier;

    // Saisie du salaire brut et des informations sur la situation de l'utilisateur
    printf("Entrez votre salaire brut : ");
    scanf("%lf", &salaire_brut);

    printf("Avez-vous des freres et/ou des soeurs ? (O/N) : ");
    scanf(" %c", &a_freres_soeurs);

    printf("Etes-vous boursier ? (O/N) : ");
    scanf(" %c", &est_boursier);

    // Calcul du taux d'imposition de base (10%)
    double taux_imposition = 0.1;

    // Ajustement du taux d'imposition en fonction des critères sociaux et familiaux
    if (a_freres_soeurs == 'N') {
        taux_imposition += 0.05; // Ajout de 5% d'imposition
    }
    if (est_boursier == 'O') {
        taux_imposition -= 0.05; // Soustraction de 5% d'imposition
    }

    // Calcul du salaire net
    salaire_net = (1 - taux_imposition) * salaire_brut;

    // Affichage du salaire net
    printf("Votre salaire net est : %.2lf\n", salaire_net);

    return 0;
}
