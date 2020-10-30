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

    printf("\n\nMaior numero digitado: ");
    if (a > b && a > c)
        printf("%d\n", a);
    else if (b > a && b > c)
        printf("%d\n", b);

    else if (c > a && c > b)
        printf("%d\n", c);


}
