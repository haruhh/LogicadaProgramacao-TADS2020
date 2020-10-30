#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a;
    int b;
    int c;

    printf("Primeiro numero: ");
    scanf("%d", &a);
    printf("\n\nSegundo numero: ");
    scanf("%d", &b);
    printf("\n\nTerceiro numero: ");
    scanf("%d", &c);

    printf("\n\nOrdem crescente dos numeros: ");

    if (a < b && a < c && b < c)
        printf("%d, %d, %d\n", a, b, c);

    else if (a < b && a < c && b > c)
        printf("%d, %d, %d\n", a, c, b);

    else if (b < a && b < c && a < c)
        printf("%d, %d, %d\n", b, a, c);

    else if (b < a && b < c && a > c)
        printf("%d, %d, %d\n", b, c, a);

    else if (c < a && c < b && a < b)
        printf("%d, %d, %d\n", c, a, b);

    else if (c < a && c < b && a > b)
        printf("%d, %d, %d\n", c, b, a);



}
