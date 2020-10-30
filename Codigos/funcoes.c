#include <stdio.h>
#include <stdlib.h>

int soma()
{
    int a, b, i, par = 0;

    printf ("Digite dois numeros positivos:\n");
    scanf("%d", &a);
    scanf("%d", &b);

    if (a < b && a > -1 && b > -1)
    {
        for (i=a+1; i<b; i++)
        {
            if(i%2==0)
            {
                par = par + i;
            }
        }
    }
    else if (a > b && a > -1 && b > -1)
    {
        for (i=b+1; i<a; i++)
        {
            if(i%2==0)
            {
                par = par + i;
            }
        }
    } else {
    printf("certifique-se de digitar numeros positivos (acima de zero)");

    }
continue;

    return par;
}




int main()
{
    int resultado;
    resultado = soma();
    printf("Soma dos numeros pares no intervalo: %d", resultado);
    return 0;
}

