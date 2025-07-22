#include <stdio.h>

int main()

{
    int modulo;

    scanf("%d", &modulo);

    if (modulo % 2) 
        printf("%d est impair.\n", modulo);

    else
        printf("%d est pair.\n", modulo);

    return 0;
}