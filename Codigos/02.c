//RAFAEL PINHEIRO HUBIE

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>
#include <locale.h>

int main()
{
    int n = 0, total, atual, zeros = 0, negativos = 0, positivos = 0; //variaveis necessarias, as que recebem 0 sao as acumuladoras

    printf("Digite a quantidade de numeros: "); //pede ao usuario a quantidade de numeros que ele pretende digitar
    scanf("%d", &total); //le o numero e adiciona a variavel de controle
    n++; //acrescenta 1 a variavel acumuladora "n" pois o usuario ja digitou 1 numero

    while (n <= total) { //enquanto a variavel acumuladora "n" for menor ou igual a variavel controladora total a sequencia de codigos se repetirá
        scanf("%d", &atual);
        n++;
        if (atual == 0) { //se o numero digitado for zero, vai adicionar 1 a variavel "zeros"
            zeros++;
        } else if (atual < 0) { //se o numero digitado for menor que zero, vai adicionar 1 a variavel "negativos"
            negativos++;
        } else if (atual > 0) { //se o numero digitado for maior que zero, vai adicionar 1 a variavel "positivos"
            positivos++;
        }
    }
    //a linha abaixo imprime no final quantas quantos numeros foram digitados, e quantos desses numeros foram positivos, negativos ou zeros
    printf("\nQuantidade de numeros digitados: %d\nNumeros Positivos digitados: %d\nNumeros Negativos digitados: %d\nZeros digitados: %d\n\n\n", total, positivos, negativos, zeros);

 return 0;
}
