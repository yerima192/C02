#include <stdio.h>

int main()
{
    int a, b;

    // Saisie des deux entiers
    scanf("%d %d", &a, &b);

    // Affichage avant l'échange
    printf("Avant échange: a = %d, b = %d\n", a, b);

    // Échange sans variable temporaire
    a = a + b;
    b = a - b;
    a = a - b;

    // Affichage après l'échange
    printf("Après échange: a = %d, b = %d\n", a, b);

    return 0;
}
