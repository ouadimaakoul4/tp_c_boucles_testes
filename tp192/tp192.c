/*Énoncé: Écrire un programme qui demande 
la base et la hauteur d'un triangle et calcule son aire.

*/

#include <stdio.h>

int main() {
    float base, hauteur, aire;
    printf("Entrez la base et la hauteur du triangle en m: ");
    scanf("%f %f", &base, &hauteur);
    aire = (base * hauteur) / 2;
    printf("L'aire du triangle est: %.2f m \n", aire);
    return 0;
}