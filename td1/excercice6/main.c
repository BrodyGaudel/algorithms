#include <stdio.h>
//Dire si le nom de ces variables est valide ou non valide.
int main(void) {
    printf("Voici l'analyse des noms de variables:\n");
    printf("prod_a  -> valide\n");
    printf("$total  -> non valide (le caractere $ n'est pas autorise)\n");
    printf("Newbal  -> valide\n");
    printf("moyenne -> valide\n");
    printf("9ab6    -> non valide (ne doit pas commencer par un chiffre)\n");
    printf("_c3     -> valide\n");
    printf("c123    -> valide\n");
    printf("new bal -> non valide (espace non autorise)\n");
    printf("sum.of  -> non valide (le caractere . n'est pas autorise)\n");
    printf("grade1  -> valide\n");
    printf("Abcd    -> valide\n");
    printf("1234    -> non valide (ne doit pas etre un chiffre seul)\n");
    return 0;
}
