/*Énoncé: Écrire un programme qui demande un 
nombre à l'utilisateur et vérifie s'il est un palindrome.

*/

#include <stdio.h>

int main() {
    int n, original, inverse = 0, reste;
    printf("Entrez un nombre: ");
    scanf("%d", &n);
    original = n;
    while (n != 0) {
        reste = n % 10;
        inverse = inverse * 10 + reste;
        n = n / 10;
    }
    if (original == inverse) {
        printf("%d est un palindrome.\n", original);
    } else {
        printf("%d n'est pas un palindrome.\n", original);
    }
    return 0;
}