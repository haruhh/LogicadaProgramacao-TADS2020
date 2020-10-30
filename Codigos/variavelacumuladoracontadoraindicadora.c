#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

/*Utilizando uma ou mais das t�cnicas de vari�veis apresentadas em sala (Acumuladora, Contadora e Indicadora) de aula resolva o seguinte problema:

Fa�a um programa que leia uma sequ�ncia num�rica at� que o usu�rio digite um n�mero menor que zero (negativo).

Ap�s inserir um n�mero negativo, mostre quantos dos n�meros digitados s�o maiores que o primeiro n�mero da sequ�ncia.*/

int main()
{
    setlocale (LC_ALL, "");

    int atual, primeironumero, maioresqprimeiro = 0;

    printf("\nDigite numeros aleat�rios: \n");
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
