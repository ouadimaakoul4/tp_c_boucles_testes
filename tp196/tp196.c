/*Énoncé: Écrire un programme qui demande 
un nombre N à l'utilisateur et calcule
 la somme des cubes des nombres jusqu'à N.*/

 #include <stdio.h>

int main() {
    int n, somme = 0;
    printf("Entrez un nombre: ");
    scanf("%d", &n);
    for (int i = 1; i <= n; ++i) {
        somme += i * i * i;
    }
    printf("La somme des cubes jusqu'à %d est: %d\n", n, somme);
    return 0;
}