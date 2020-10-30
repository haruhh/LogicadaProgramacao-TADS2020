#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>
#include <locale.h>


/*
1. Qual é o tipo de variável correta para armazenar as seguintes informações:
a. A idade:
unsigned int idade;
b. O número de estrelas na galáxia.
unsigned long int estrelas;
c. A quantidade de chuva média no mês de fevereiro.
float
d. A área do seu quintal.
float

2. Indique a diferença entre as seguintes atribuições:
char a; -> armazena a letra "a"
a = ’6’; -> atribui uma constante de valor 6 à variavel a
a = 6; -> atribui o 6 pra variavel a
*/


/*
3. Faça um programa que leia um número real x e calcule o valor de f(x) = √x+ (x/2) +xx. (pesquise sobre as funções sqrt e pow).

int main()
{
    setlocale (LC_ALL, "");


    float x, fx;

    printf("Digite o valor de x: ");
    scanf("%f", &x);

    fx = sqrt(x) + (x / 2) + pow(x, x);

    printf("\nf(%.0f) = raiz(%.0f) + (%.0f / 2) + %.0f^%.0f = %.2f\n", x, x, x, x, x, fx);

    return 0;
}
*/

/*
4. Faça um programa que leia dois valores inteiros nas variáveis x e y e troque o conteúdo das variáveis. Refaça este problema sem o uso de outras variáveis que não x e y.

int main()
{
    setlocale (LC_ALL, "");

    int x, y;

    printf("digite o valor de X: ");
    scanf("%d", &x);

    printf("\ndigite o valor de Y: ");
    scanf("%d", &y);

    printf("\n\nO valor digitado para X foi %d e o valor digitado para Y foi %d:", x, y);

    x = x + y;
    y = x - y;
    x = x - y;

    printf("\n\nApos inverter os valores das variaveis X e Y, X = %d e Y = %d\n\n\n", x, y);

    return 0;
}
*/

/*
5. Faça um programa que leia o valor da base e altura de um triângulo e calcule o valor da sua área.

int main()
{

    float base, altura, area;

    printf("digite o valor da base do triangulo: ");
    scanf("%f", &base);

    printf("\nagora digite o valor da altura do triangulo: " );
    scanf("%f", &altura);

    area = (base * altura) / 2;

    printf("\n\nA area do triangulo eh: %.2f\n", area);

    return 0;
}
*/

/*
6. Faça um programa que leia os valores correspondentes aos três lados a, b e c de um triângulo. O programa deve então calcular a área A do triângulo utilizando a fórmula de

Heron: onde
A = √s(s − a)(s − b))(s − c)
s = a + b + c / 2

Ao calcular a área pela fórmula de Heron e a fórmula da questão anterior, em alguns casos obtemos valores ligeiramente diferentes. Qual o motivo disto?
O motivo de dar valores diferentes é que o float é um ponto flutuante e não é muito preciso.

int main()
{
    float a, b, c, s, area;

    printf("digite o valor do primeiro lado do triangulo em centimetros: ");
    scanf("%f", &a);

    printf("\ndigite o valor do segundo lado do triangulo em centimetros: ");
    scanf("%f", &b);

    printf("\ndigite o valor do terceiro lado do triangulo em centimetros: ");
    scanf("%f", &c);

    s = (a + b + c) / 2;
    area = sqrt(s*((s - a)*(s - b)*(s - c)));

    printf("\n\nA area aproximada do triangulo eh: %.2fcm^2\n\n", area);

    return 0;

}
*/

/*
7. Faça um programa que lê o raio de um disco e imprime sua área e seu perímetro.

int main()
{
    float PI = 3.14, raio, area, perimetro;

    printf("Digite o raio do disco: ");
    scanf("%f", &raio);

    perimetro = 2 * PI * raio;
    area = PI * (raio * raio);

    printf("\nA area do disco eh: %.2f e o perimetro eh: %.2f", area, perimetro);

    return 0;

}
*/

/*
8. A solução abaixo está correta para classificar um número como par e menor que 100, ou par e maior ou igual a 100, etc, como no exemplo visto em aula?
#include <stdio.h>
int main(){
int a;
printf("Digite um número inteiro:");
scanf("%d", &a);
if( ( a % 2 == 0) && (a<100) )
printf("O número é par e menor que 100\n");
else if( a>=100 )
printf("O número é par e maior ou igual a 100\n");
if( ( a % 2 != 0) && (a<100) )
printf("O número é ímpar e menor que 100\n");
else if (a>=100)
printf("O número é ímpar e maior que 100\n");
}

Não, faltou especificar em ambos os elseif os "a%2=0" e "a%2!=0" respectivamente
*/

/*
9. Escreva um programa lê três números e os imprime em ordem (ordem crescente).

int main()
{
    int a, b, c;

    printf("digite o primeiro numero: ");
    scanf("%d", &a);

    printf("\ndigite o segundo numero: ");
    scanf("%d", &b);

    printf("\ndigite o terceiro numero: ");
    scanf("%d", &c);

    if (a < b && b < c) {
        printf("A ordem crescente dos numeros eh: %d, %d, %d", a, b, c);
    }
    else if (a < b && a < c && b > c) {
        printf("A ordem crescente dos numeros eh: %d, %d, %d", a, c, b);
    }
    else if (b < a && a < c) {
        printf("A ordem crescente dos numeros eh: %d, %d, %d", b, a, c);
    }
    else if (b < c && a > c) {
        printf("A ordem crescente dos numeros eh: %d, %d, %d", b, c, a);
    }
    else if (c < a && b > a) {
        printf("A ordem crescente dos numeros eh: %d, %d, %d", c, a, b);
    }
    else if (c < b && a > b) {
        printf("A ordem crescente dos numeros eh: %d, %d, %d", c, b, a);
    }

}
*/

/*
10. Faça um programa que lê um caracter ’F’ ou ’C’, que indica se o próximo número a ser digitado corresponde a temperatura em Fahrenheit ou Celsius.
Em seguida o programa deve ler o valor da temperatura e então imprimir o valor correspondente da temperatura na outra unidade de medida.

int main()
{
    char unidade;
    float temperatura, convertido;

    printf("Digite a unidade de medida C para Celsius ou F para Farenheit: ");
    scanf("%c", &unidade);

    printf("Digite a temperatura: ");
    scanf("%f", &temperatura);

    if (unidade == 'C') {
        convertido = (temperatura * 1.8) + 32;
        printf("A temperatura de %.1f graus Celsius eh equivalente a %.1f graus Farenheit.", temperatura, convertido);
    }   else if (unidade == 'F') {
          convertido = (temperatura - 32) / 1.8;
          printf("A temperatura de %.1f graus Farenheit eh equivalente a %.1f graus Celsius.", temperatura, convertido);
    }   else { printf("\nCertifique-se de digitar C ou F maiusculo no campo 'unidade de medida'.\n");
    }
}
*/

/*
11. Faça um programa que leia um ano (valor inteiro) e imprima se ele é bissexto ou não. OBS: São bissexto todos os anos múltiplos de 400.
Não sendo múltiplo de 400, são bissextos todos os anos múltiplos de 4 mas que não são múltiplos de 100.

int main()
{
    int ano;

    printf("digite o ano: ");
    scanf("%d", &ano);

    if (ano % 400 == 0) {
        printf("Ano bissexto");
    } else if ((ano %4 == 0) && (ano %100 !=0)) {
        printf("Ano bissexto");
    } else {
    printf("Ano nao eh bissexto");
    }
}
*/

/*
12. Faça um programa que leia os três lados de um triângulo e informe se ele é isósceles, escaleno ou equilátero.
OBS: equilátero: possui os três lados iguais; isósceles: possui pelo menos dois lados iguais; escaleno: três lados distintos.

int main()
{
    int a, b, c;

    printf("digite o primeiro lado do triangulo: ");
    scanf("%d", &a);
    printf("digite o segundo lado do triangulo: ");
    scanf("%d", &b);
    printf("digite o terceiro lado do triangulo: ");
    scanf("%d", &c);

    if ((a == b) && (a == c) && (b == c)) {
        printf("\nTriangulo equilatero\n");
    } else if (a == b && a != c) {
        printf("\nTriangulo isoceles\n");
        } else if (a == c && a != b) {
        printf("\nTriangulo isoceles\n");
        } else if ((b == c) && (b != a)) {
        printf("\nTriangulo isoceles\n");
        } else if ((a != b) && (a != c) && (b != c)) {
        printf("\nTriangulo escaleno\n");
        }
}
*/

/*
13. Escreva um programa que determina a data cronologicamente maior de duas datas forne cidas pelo usuário.
Cada data deve ser fornecida por três valores inteiros onde o primeiro representa um dia, o segundo um mês e o terceiro um ano.

int main()
{
    int dia1, mes1, ano1, dia2, mes2, ano2;

    printf("Digite a primeira data em DIA/MES/ANO:\n");
    scanf("%d%d%d", &dia1, &mes1, &ano1);

    printf("Digite a segunda data em DIA/MES/ANO:\n");
    scanf("%d%d%d", &dia2, &mes2, &ano2);

    if (ano1 > ano2) {
        printf("\nA data %d/%d/%d eh mais recente que %d/%d/%d.\n", dia1, mes1, ano1, dia2, mes2, ano2);
    } else if (ano1 < ano2) {
        printf("\nA data %d/%d/%d eh mais recente que %d/%d/%d.\n", dia2, mes2, ano2, dia1, mes1, ano1);
    } else if (ano1 == ano2 && mes1 > mes2) {
        printf("\nA data %d/%d/%d eh mais recente que %d/%d/%d.\n", dia1, mes1, ano1, dia2, mes2, ano2);
    } else if (ano1 == ano2 && mes1 < mes2) {
        printf("\nA data %d/%d/%d eh mais recente que %d/%d/%d.\n", dia2, mes2, ano2, dia1, mes1, ano1);
    } else if (ano1 == ano2 && mes1 == mes2 && dia1 > dia2) {
        printf("\nA data %d/%d/%d eh mais recente que %d/%d/%d.\n", dia1, mes1, ano1, dia2, mes2, ano2);
    } else if (ano1 == ano2 && mes1 == mes2 && dia1 < dia2) {
        printf("\nA data %d/%d/%d eh mais recente que %d/%d/%d.\n", dia2, mes2, ano2, dia1, mes1, ano1);
    } else if (ano1 == ano2 && mes1 == mes2 && dia1 == dia2) {
        printf("\nA data %d/%d/%d eh a mesma que %d/%d/%d.\n", dia2, mes2, ano2, dia1, mes1, ano1);
    }
}
*/

/*
14. Escreva um programa que lê uma coordenada (x, y) do teclado e imprima como resposta o quadrante em que a coordenada está.

int main()
{
    int x, y;

    printf("Digite a coordenada de X: ");
    scanf("%d", &x);
    printf("Digite a coordenada de Y: ");
    scanf("%d", &y);

    if (x > 0 && y > 0) {
        printf("\nA coordenada [%d,%d] encontra-se no primeiro quadrante.\n", x, y);
        } else if (x < 0 && y > 0) {
            printf("\nA coordenada [%d,%d] encontra-se no segundo quadrante.\n", x, y);
        } else if (x < 0 && y < 0) {
            printf("\nA coordenada [%d,%d] encontra-se no terceiro quadrante.\n", x, y);
        } else if (x > 0 && y < 0) {
            printf("\nA coordenada [%d,%d] encontra-se no quarto quadrante.\n", x, y);
        } else if (x == 0 && y < 0) {
            printf("\nA coordenada [%d,%d] encontra-se entre os quadrantes 3 e 4.\n", x, y);
        } else if (x == 0 && y > 0) {
            printf("\nA coordenada [%d,%d] encontra-se entre os quadrantes 1 e 2.\n", x, y);
        } else if (x > 0 && y == 0) {
            printf("\nA coordenada [%d,%d] encontra-se entre os quadrantes 1 e 4.\n", x, y);
        } else if (x < 0 && y == 0) {
            printf("\nA coordenada [%d,%d] encontra-se entre os quadrantes 2 e 3.\n", x, y);
        } else if (x == 0 && y == 0) {
            printf("\nA coordenada [%d,%d] encontra-se no centro do plano cartesiano.\n", x, y);
        }

}
*/

/*
15. Uma pessoa pode se aposentar pelo INSS caso esteja em alguma das situações abaixo:
• É do sexo masculino, possui pelo menos 65 anos, e pelo menos 10 anos de contribuição.
• É do sexo masculino, possui pelo menos 63 anos, e pelo menos 15 anos de contribuição.
• É do sexo feminino, possui pelo menos 63 anos, e pelo menos 10 anos de contribuição.
• É do sexo feminino, possui pelo menos 61 anos, e pelo menos 15 anos de contribuição.
Crie um programa para ler um caracter ’M’ ou ’F’ que representa o sexo de um indivíduo, ler a sua idade, e seu tempo de contribuição.
O programa deverá então imprimir “Aposentável” caso o indivíduo se enquadrar em uma das situações acima.
Caso contrário o programa deverá imprimir “Não Aposentável”.
*/

/*
int main()
{
    char sexo;
    int idade, contri;

    printf("Digite 'M' para masculino e 'F' para feminino: ");
    scanf("%c", &sexo);

    printf("\nDigite a idade: ");
    scanf("%d", &idade);

    printf("\nDigite o tempo de contribuicao: ");
    scanf("%d", &contri);

    if (sexo == 'M' && idade >= 65 && contri >= 10) {
        printf("\nAposentavel");
    } else if (sexo == 'M' && idade >= 63 && contri >= 15) {
        printf("\nAposentavel");
    } else if (sexo == 'F' && idade >= 63 && contri >= 10) {
        printf("\nAposentavel");
    } else if (sexo == 'F' && idade >= 61 && contri >= 15) {
        printf("\nAposentavel");
    } else {
        printf("\nNao Aposentavel\n");
    }

    return 0;

}
*/
