/*Énoncé: Écrire un programme qui demande deux nombres 
à l'utilisateur et affiche le plus grand des deux.*/

#include <stdio.h>

int main() {
    int a, b;
    printf("Entrez deux nombres: ");
    scanf("%d %d", &a, &b);
    if (a > b) {
        printf("%d est plus grand.\n", a);
    } else {
        printf("%d est plus grand.\n", b);
    }
    return 0;
}