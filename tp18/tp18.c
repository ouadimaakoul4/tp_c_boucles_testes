/*Énoncé: Écrire un programme qui demande 
le rayon d'un cercle et calcule son périmètre.

*/
#include <stdio.h>
#define PI 3.14159

int main() {
    float rayon, perimetre;
    printf("Entrez le rayon du cercle: ");
    scanf("%f", &rayon);
    perimetre = 2 * PI * rayon;
    printf("Le perimetre du cercle est: %.2f\n", perimetre);
    return 0;
}