/*Énoncé: Écrire un programme qui demande 
le rayon d'un cercle et calcule son aire.

*/
#include <stdio.h>
#define PI 3.14159

int main() {
    float rayon, aire;
    printf("Entrez le rayon du cercle: ");
    scanf("%f", &rayon);
    aire = PI * rayon * rayon;
    printf("L'aire du cercle est: %.2f\n", aire);
    return 0;
}