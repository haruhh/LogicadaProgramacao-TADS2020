#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

/*Utilizando uma ou mais das técnicas de variáveis apresentadas em sala (Acumuladora, Contadora e Indicadora) de aula resolva o seguinte problema:

Faça um programa que leia uma sequência numérica até que o usuário digite um número menor que zero (negativo).

Após inserir um número negativo, mostre quantos dos números digitados são maiores que o primeiro número da sequência.*/

int main()
{
    setlocale (LC_ALL, "");

    int atual, primeironumero, maioresqprimeiro = 0;

    printf("\nDigite numeros aleatórios: \n");
    scanf("%d", &primeironumero);

    while (atual >= 0)
    {
        scanf("%d", &atual);

        if (atual > primeironumero)
        {
            maioresqprimeiro++;
        }
    }

    printf("\nQuantidade de numeros maiores do que o primeiro numero digitado: %d\n", maioresqprimeiro);

    return 0;
}
