#include <stdio.h>
//Écrire un programme en C qui calcule la surface d'un cercle avec un rayon de 2.59.
int main(void) {
    float rayon = 2.59, surface;
    surface = rayon * rayon * 3.14;

    printf("La surface du cercle est: %.2f\n", surface);
    return 0;
}
