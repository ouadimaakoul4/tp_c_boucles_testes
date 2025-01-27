/*Énoncé: Écrire un programme qui demande la longueur et la largeur 
d'un rectangle et calcule son périmètre.*/
#include <stdio.h>

int main() {
    float longueur, largeur, perimetre;
    printf("Entrez la longueur et la largeur du rectangle: ");
    scanf("%f %f", &longueur, &largeur);
    perimetre = 2 * (longueur + largeur);
    printf("Le périmètre du rectangle est: %.2f\n", perimetre);
    return 0;
}