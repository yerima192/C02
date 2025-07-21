#include <stdio.h> // c'est une fonction qui contient des instructions d'entrée et de sortie

int main()

{
    int a, b, c;

    scanf("%d %d", &a, &b);

    c = a + b;

    printf("La somme est : %d\n", c);

    return 0;
}
