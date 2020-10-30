#include <stdio.h>
#include <stdlib.h>

    float celso;
    float farehai;

int main()
{
    printf("Digite uma temperatura em graus Celsius: ");
    scanf("%f", &celso);

    farehai = (celso*9/5)+32;

    printf("\n%f graus Celsius  = %f graus Fahrenheit\n", celso, farehai);


    return 0;
    }
