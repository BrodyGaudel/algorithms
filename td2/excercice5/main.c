#include <stdio.h>

// Fonction pour incrémenter l'heure d'une seconde
void incrementer_heure(int *h, int *m, int *s) {
    // Incrémenter les secondes
    (*s)++;
    // Vérifier si les secondes dépassent 59
    if (*s == 60) {
        *s = 0;
        (*m)++;
        // Vérifier si les minutes dépassent 59
        if (*m == 60) {
            *m = 0;
            (*h)++;
            // Vérifier si les heures dépassent 23
            if (*h == 24) {
                *h = 0;
            }
        }
    }
}

int main(void) {
    int h, m, s;

    // Saisir l'heure courante
    printf("Entrez l'heure actuelle (hh mm ss): ");
    scanf("%d\n %d\n %d", &h, &m, &s);

    // Afficher l'heure saisie
    printf("Heure actuelle: %02d:%02d:%02d\n", h, m, s);

    // Incrémenter l'heure d'une seconde
    incrementer_heure(&h, &m, &s);

    // Afficher l'heure après incrémentation
    printf("Heure apres incrementation: %02d:%02d:%02d\n", h, m, s);
    return 0;
}
