/*Énoncé: Écrire un programme qui demande un nombre N à 
l'utilisateur et calcule 
la somme des nombres pairs jusqu'à N.*/

#include <stdio.h>

int main() {
    int n, somme = 0;
    printf("Entrez un nombre: ");
    scanf("%d", &n);
    for (int i = 2; i <= n; i += 2) {
        somme += i;
    }
    printf("La somme des nombres pairs jusqu'a %d est: %d\n", n, somme);
    return 0;
}