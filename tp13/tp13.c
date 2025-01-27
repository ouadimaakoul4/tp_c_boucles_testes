/*Énoncé: Écrire un programme qui demande
 un nombre à l'utilisateur et affiche son inverse.

*/
#include <stdio.h>

int main() {
    int n, inverse = 0, reste;
    printf("Entrez un nombre: ");
    scanf("%d", &n);
    while (n != 0) {
        reste = n % 10;
        inverse = inverse * 10 + reste;
        n = n / 10;
    }
    printf("L'inverse du nombre est: %d\n", inverse);
    return 0;
}