//RAFAEL PINHEIRO HUBIE

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>
#include <locale.h>

int main()
{
    int numero; //variavel que vai receber o numero digitado

    printf("Digite um numero inteiro entre 0 e 10: "); //pede ao usuario que digite de 0 a 10
    scanf("%d", &numero); //le o numero digitado e adiciona a variavel numero

    if (numero == 0) { //checa se a variavel numero recebeu o valor 0, se nao recebeu, vai para o primeiro else, e dai por diante até o else correspondente ao valor atribuido a variavel.
        printf("\nZero\n"); //imprime que numero 0 por extenso
    } else if (numero == 1) {
        printf("\nUm\n");
    } else if (numero == 2) {
        printf("\nDois\n");
    } else if (numero == 3) {
        printf("\nTres\n");
    } else if (numero == 4) {
        printf("\nQuatro\n");
    } else if (numero == 5) {
        printf("\nCinco\n");
    } else if (numero == 6) {
        printf("\nSeis\n");
    } else if (numero == 7) {
        printf("\nSete\n");
    } else if (numero == 8) {
        printf("\nOito\n");
    } else if (numero == 9) {
        printf("\nNove\n");
    } else if (numero == 10) {
        printf("\nDez\n");
    } else {
        printf("\nCertifique-se de digitar um numero de 0 a 10.\n"); //Lembra o usuario que o programa so funcionará se ele digitar o numero de 0 a 10.
    }

 return 0;
}
