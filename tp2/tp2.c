/*Écrire un programme qui demande deux nombres à l'utilisateur et affiche leur somme. */

#include <stdio.h>

int main() {
    int a, b;
    printf("Entrez deux nombres: ");
    scanf("%d %d", &a, &b);
    printf("La somme est: %d\n", a + b);
    return 0;
}