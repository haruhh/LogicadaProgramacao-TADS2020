#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numero;

    printf("digite um numero inteiro: ");
    scanf("%d", &numero);

    if (numero % 2 == 0)
    {
        if(numero > 10)
            printf("\nSIM\n");
    }
    else
    {
        if(numero % 2 > 0)
        {
            if (numero < 50)
                printf("\nNAO\n");
        }
    }



    return 0;
}
