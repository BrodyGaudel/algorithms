#include <stdio.h>
//Écrire un programme en C qui calcule la somme de 4 valeurs saisies au clavier.
int main(void) {
    printf("VERSION AVEC 4 VARIABLES\n");
    int a, b, c, d, sum;
    printf("Entrez quatre valeurs entieres: ");
    scanf("%d\n %d\n %d\n %d", &a, &b, &c, &d);

    sum = a + b + c + d;
    printf("\n");
    printf("La somme est: %d\n", sum);
    printf("\n");
    printf("VERSION AVEC 2 VARIABLES\n");
    int n, sum2 = 0;

    for (int i = 0; i < 4; i++) {
        printf("\n");
        printf("Entrez une valeur entiere: ");
        scanf("%d", &n);
        sum2 += n;
    }

    printf("La somme est: %d\n", sum2);
    return 0;
}
