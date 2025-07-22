#include <stdio.h>

int main()
{
    int factoriel, i, n;
    factoriel = 1;
    scanf("%d",&n);
    for (i = 1; i <= n; i++) {
        factoriel = factoriel * i;
    }
    printf("Le factorial de %d est: %d\n", n, factoriel);
    return 0;
}
