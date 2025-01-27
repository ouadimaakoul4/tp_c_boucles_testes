/*Énoncé: Écrire un programme qui demande un nombre 
à l'utilisateur et affiche sa table de multiplication jusqu'à 10.

*/
#include <stdio.h>

int main() {
    int n, i;
    printf("Entrez un nombre: ");
    scanf("%d", &n);
    for (i = 1; i <= 10; ++i) {
        printf("%d * %d = %d\n", n, i, n * i);
    }
    return 0;
}