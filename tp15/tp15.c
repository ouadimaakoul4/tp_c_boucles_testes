/*Énoncé: Écrire un programme qui demande
 deux nombres à l'utilisateur et calcule leur PGCD.

*/
#include <stdio.h>

int main() {
    int a, b, temp;
    printf("Entrez deux nombres: ");
    scanf("%d %d", &a, &b);
    while (b != 0) {
        temp = b;
        b = a % b;
        a = temp;
    }
    printf("Le PGCD est: %d\n", a);
    return 0;
}