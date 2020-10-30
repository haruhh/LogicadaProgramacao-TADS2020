#include <stdio.h>
#include <stdlib.h>

    double primeironumero, segundonumero, soma, diferenca, multiplicacao, divisao;

int main()
{
    printf("Digite o primeiro numero: ");
    scanf("%d", &primeironumero);
    printf("Digite o segundo numero: ");
    scanf("%d", &segundonumero);

    soma = primeironumero + segundonumero;
    diferenca = primeironumero - segundonumero;
    multiplicacao = primeironumero * segundonumero;
    divisao = (double)primeironumero / (double)segundonumero;

    printf("\n%d + %d = %d\n", primeironumero, segundonumero, soma);
    printf("\n%d - %d = %d\n", primeironumero, segundonumero, diferenca);
    printf("\n%d * %d = %d\n", primeironumero, segundonumero, multiplicacao); //tentei de todas as formas e não consegui multiplicar, não sei porque mesmo pesquisando no google, tentei ld, i, float, nada resolveu, sempre fica 0
    printf("\n%d / %d = %f\n", primeironumero, segundonumero, divisao);

    return 0;
    }
