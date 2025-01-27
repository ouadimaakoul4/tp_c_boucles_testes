/*Énoncé: Écrire un programme qui demande 
une température en Celsius et la convertit en Fahrenheit.
avec : fahrenheit = (celsius * 9 / 5) + 32
*/
#include <stdio.h>

int main() {
    float celsius, fahrenheit;
    printf("Entrez la temperature en Celsius: ");
    scanf("%f", &celsius);
    fahrenheit = (celsius * 9 / 5) + 32;
    printf("La temperature en Fahrenheit est: %.2f\n", fahrenheit);
    return 0;
}