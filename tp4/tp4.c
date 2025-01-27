/* Écrire un programme qui demande deux nombres à l'utilisateur et affiche
le résultat de la division du premier par le second.*/

#include <stdio.h>

int main() {
    float a, b;
    printf("Entrez deux nombres: ");
    scanf("%f %f", &a, &b);
    if (b != 0) {
        printf("Le resultat de la division est: %.2f\n", a / b);
    } else {
        printf("Division par zero impossible.\n");
    }
    return 0;
}