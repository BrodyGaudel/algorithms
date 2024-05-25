#include <stdio.h>
//Écrire un programme en C qui convertit une température de Fahrenheit à Celsius sachant que la température en Fahrenheit est égale à 41.
int main(void) {
    float tempF = 41, tempC;
    tempC = 5.0 / 9.0 * (tempF - 32);

    printf("La temperature en degres Celsius est: %.2f\n", tempC);
    return 0;
}
