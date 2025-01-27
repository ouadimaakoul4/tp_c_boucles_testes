/*Écrire un programme qui demande trois 
nombres à l'utilisateur et affiche leur moyenne.*/

#include <stdio.h>

int main() {
    float a, b, c;
    printf("Entrez trois nombres: ");
    scanf("%f %f %f", &a, &b, &c);
    printf("La moyenne est: %.2f\n", (a + b + c) / 3);
    return 0;
}