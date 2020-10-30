#include <stdio.h>
#include <stdlib.h>

    char letra;
    int inteiro;
    float flutuante;

int main()
{
    printf("Digite uma letra: ");
    scanf("%c", &letra);
    printf("Digite um numero inteiro: ");
    scanf("%i", &inteiro);
    printf("Digite um numero flutuante: ");
    scanf("%f", &flutuante);

    printf("\nLetra digitada: %c\nNumero inteiro digitado: %i\nNumero flutuante digitado: %f\n", letra, inteiro, flutuante);

    return 0;
    }
