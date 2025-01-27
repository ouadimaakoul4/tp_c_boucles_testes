/*Énoncé: Écrire un programme qui demande
 un nombre à l'utilisateur et vérifie s'il est premier.

*/

int main() {
    int n, i, estPremier = 1;
    printf("Entrez un nombre: ");
    scanf("%d", &n);
    for (i = 2; i <= n / 2; ++i) {
        if (n % i == 0) {
            estPremier = 0;
            break;
        }
    }
    if (estPremier) {
        printf("%d est un nombre premier.\n", n);
    } else {
        printf("%d n'est pas un nombre premier.\n", n);
    }
    return 0;
}