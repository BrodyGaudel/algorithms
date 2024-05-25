#include <stdio.h>
//Écrire un programme en C qui calcule le volume d'un cylindre avec un rayon de 5.2 et une profondeur de 2.8.
int main(void) {
    float rayon = 5.2, profondeur = 2.8, volume;
    volume = rayon * rayon * 3.14 * profondeur;

    printf("Le volume du cylindre est: %.2f\n", volume);
    return 0;
}
