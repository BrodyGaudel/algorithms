#include <stdio.h>
//Write a program in C to exchange the values of three integers entered on the keyboard.
int main(void) {
    int A, B, C, temp;

    printf("Entrez trois valeurs entieres: \n");
    scanf("%d\n %d\n %d", &A, &B, &C);
    printf("\n");
    printf("Avant echange : A = %d , B = %d et C = %d",A,B,C);
    temp = A;
    A = B;
    B = C;
    C = temp;
    printf("\n");
    printf("Apres echange: A = %d, B = %d, C = %d\n", A, B, C);

    return 0;
}
