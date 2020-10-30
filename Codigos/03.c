//RAFAEL PINHEIRO HUBIE

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>
#include <locale.h>

int main()
{
    int atual, entre10e20 = 0; //variaveis necessarias para o programa

    printf("Digite quantos numeros inteiros quiser, digite '0' para encerrar:\n"); //pede ao usuario que digite os numeros e o instrui a encerrar o programa digitando 0
    scanf("%d", &atual); //le o primeiro numero digitado e adiciona a variavel "atual"

    if (atual >= 10 && atual <= 20) { //condiçao para que seja usada a variavel acumuladora a qual indicara quantas vezes um numero entre 10 e 20 foi digitado
            entre10e20++; //adiciona 1 a variavel "entre10e20"
    }

    while (atual != 0) { //parte do programa que se repetirá enquanto o usuario digitar numeros diferentes de 0
        scanf("%d", &atual); //le o numero digitado e adiciona a variavel "atual"

        if (atual >= 10 && atual <= 20) { //condiçao para que seja usada a variavel acumuladora a qual indicara quantas vezes um numero entre 10 e 20 foi digitado
            entre10e20++; //adiciona 1 a variavel "entre10e20"
        }
    }
    printf("\nQuantidade de vezes em que um numero de 10 a 20 foi digitado: %d\n\n\n", entre10e20); //imprime quantas vezes um numero entre 10 e 20 foi digitado

 return 0;
}
