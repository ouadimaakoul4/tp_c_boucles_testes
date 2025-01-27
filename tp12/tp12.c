/*Énoncé: Écrire un programme qui demande un nombre 
à l'utilisateur et calcule la somme de ses chiffres.

*/
#include <stdio.h>

int main() {
    int n, somme = 0, reste;
    printf("Entrez un nombre: ");
    scanf("%d", &n);
    while (n != 0) {
        reste = n % 10;
        somme += reste;
        n = n / 10;
    }
    printf("La somme des chiffres est: %d\n", somme);
    return 0;
}