/*Énoncé: Écrire un programme qui demande un nombre 
à l'utilisateur et calcule sa factorielle.*/

#include <stdio.h>

int main() {
    int n, i;
    unsigned long long fact = 1;
    printf("Entrez un nombre: ");
    scanf("%d", &n);
    for (i = 1; i <= n; ++i) {
        fact *= i;
    }
    printf("La factorielle de %d est: %llu\n", n, fact);
    return 0;
}