#include <stdio.h>
#include <stdlib.h>

int main()
{
    int vet[5];

    //realizar insercao de dados
    for(int i=0;i<5;i++) {
        printf("Entre com o dado da posicao vet[%d]: ",i);
        scanf("%d", &vet[i]);
    }

    //imprimir vetor no sentido ->
    printf("\nVET[->] ");
    for(int i=0;i<5;i++) {
        printf("%d ", vet[i]);
    }
    //imprimir vetor no sentido <-
    printf("\nVET[<-] ");
    for(int i=4;i>=0;i--) {
        printf("%d ", vet[i]);
    }


    return 0;

}
