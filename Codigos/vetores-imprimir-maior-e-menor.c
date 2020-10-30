#include <stdio.h>
#include <stdlib.h>

int main() {

    int vet[5], min, max;

    // realizar insercao de dados
    for (int i=0;i<5;i++) {
        printf("entre com o dado da posição VET[%d]: ", i);
        scanf("%d", &vet[i]);
    }

    //buscar o maior e o menor elemento
    max = vet[0];
    min = vet[0];
    for (int i=0;i<5;i++) {
        if(vet[i] > max) {
            max = vet[i];
        }
        if(vet[i] < min) {
            min = vet[i];
        }
    }


printf("\nMaior: %d\n", max);
printf("Menor: %d", min);



}
