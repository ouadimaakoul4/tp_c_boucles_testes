/*Énoncé: Écrire un programme qui demande la longueur 
et la largeur d'un rectangle et calcule son aire.

*/
#include <stdio.h>

int main() {
    float longueur, largeur, aire;
    printf("Entrez la longueur et la largeur du rectangle en m: ");
    scanf("%f %f", &longueur, &largeur);
    aire = longueur * largeur;
    printf("L'aire du rectangle est: %.2f  m \n", aire);
    return 0;
}