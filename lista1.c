#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*  
Exercícios sobre os comandos básicos em C
*/

//1. Faça um programa que imprima o seu nome.

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    printf("Eu me chamo Valdomiro Paes de Barro");

    return 0;
}

//2. Faça um programa que imprima o produto dos valores 30 e 27.
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
float resultado;

int main()
{
    resultado = 30*2;
    printf("O resultado é %.2f",resultado);

    return 0;
}

//3. Faça um programa que imprima a média aritmética entre os números 5, 8, 12.

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float media;

int main()
{
    media = (5+8+12)/3;
    printf("A média é %.2f",media);

    return 0;
}

//4. Faça um programa que leia e imprima um número inteiro.

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int numero;

int main()
{
    printf("Digite um número: ");
    scanf("%d",&numero);
    printf("O número apresentado é: %d",numero);

    return 0;
}
//5. Faça um programa que leia dois números reais e os imprima.

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int numero,numero1;

int main()
{
    printf("Digite o primeiro número: ");
    scanf("%d",&numero);
     printf("Digite o segundo número: ");
    scanf("%d",&numero1);
    printf("Os números apresentados são: %d e %d",numero,numero1);

    return 0;
}
//6. Faça um programa que leia um número inteiro e imprima o seu
//   antecessor e o seu sucessor.

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int numero,antecessor,sucessor;


int main()
{
    printf("Digite o primeiro número: ");
    scanf("%d",&numero);
  antecessor= numero-1;
  sucessor= numero+1;
    printf("O número apresentado foi: %d, o eu antecessor é: %d, e o seu sucessor é: %d",numero,antecessor,sucessor);

    return 0;
}


//7. Faça um programa que leia o nome o endereço e o telefone de
//   um cliente e ao final, imprima esses dados.

#include <stdio.h>
char nome[50], end[50],tel[50];
int main()
{
    printf("Digite seu nome: ");
    scanf(" %50[^\n]",&nome);
    printf("Digite seu endereço: ");
     scanf(" %50[^\n]",&end);
     printf("Digite seu telefone: ");
     scanf(" %50[^\n]",&tel);
    
    printf("nome: %s",nome);
    printf("\nEndereço: %s",end);
     printf("\nTelefone: %s",tel);

    return 0;
}

//8. Faça um programa que leia dois números inteiros e imprima a
//   subtração deles.

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float numero,numero1,resultado;

int main()
{
    printf("Digite o primeiro número: ");
    scanf("%f",&numero);
     printf("Digite o segundo número: ");
    scanf("%f",&numero1);
    resultado = numero - numero1;
    printf("A  subtração dos números é: %.2f ",resultado);

    return 0;
}
//9. Faça um programa que leia um número real e imprima ¼ deste número.
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float numero,resultado;

int main()
{
    printf("Digite o um número: ");
    scanf("%f",&numero);
   
    resultado = numero/4;
    printf("1/4 do número apresentado é: %.2f ",resultado);

    return 0;
}
//10. Faça um programa que leia três números reais e calcule a
//    média aritmética destes números. Ao final, o programa deve
//    imprimir o resultado do cálculo.
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float numero,numero1,media,numero2;

int main()
{
    printf("Digite o primeiro número: ");
    scanf("%f",&numero);
     printf("Digite o segundo número: ");
    scanf("%f",&numero1);
     printf("Digite o terceiro número: ");
    scanf("%f",&numero2);
    
    media = (numero+numero1+numero2)/3;
    printf("A média é: %.2f ",media);

    return 0;
}
//11. Faça um programa que leia dois números reais e calcule as
//    quatro operações básicas entre estes dois números, adição,
//    subtração,multiplicação e divisão. Ao final, o programa
//    deve imprimir os resultados dos cálculos.
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float numero,numero1,adicao,subtracão,multiplicacao,divisao;

int main()
{
    printf("Digite o primeiro número: ");
    scanf("%f",&numero);
     printf("Digite o segundo número: ");
    scanf("%f",&numero1);
   
    
    adicao = numero+numero1;
    subtracão = numero-numero1;
    multiplicacao = numero*numero1;
    divisao = numero/numero1;
    
    
    printf("A soma é: %.2f ",adicao);
     printf("\nA subtração é: %.2f ",subtracão);
      printf("\nA multiplicação é: %.2f ",multiplicacao);
       printf("\nA divisão é: %.2f ",divisao);

    return 0;
}
//12. Faça um programa que leia um número real e calcule o
//    quadrado deste número. Ao final, o programa deve
//    imprimir o resultado do cálculo.

//13. Faça um programa que leia o saldo de uma conta poupança e
//    imprima o novo saldo, considerando um reajuste de 2%.

//14. Faça um programa que leia a base e a altura de um retângulo
//    e imprima o perímetro (base + altura) e a área (base * altura).

//15. Faça um programa que leia o valor de um produto, o percentual
//    do desconto desejado e imprima o valor do desconto e o valor
//    do produto subtraindo o desconto.

//16. Faça um programa que calcule o reajuste do salário de um
//    funcionário. Para isso, o programa deverá ler o salário atual
//    do funcionário e ler o percentual de reajuste. Ao final imprimir
//    o valor do novo salário.

//17. Faça um programa que calcule a conversão entre graus centígrados
//    e Fahrenheit. Para isso, leia o valor em centígrados e calcule
//    com base na fórmula a seguir. Após calcular o programa deve
//    imprimir o resultado da conversão.
//    F = (9 x C +160) / 5

//18. Faça um programa que calcule a quantidade de litros de combustível
//    consumidos em uma viagem, sabendo-se que o carro tem autonomia de
//    12 km por litro de combustível. O programa deverá ler o tempo
//    decorrido na viagem e a velocidade média e aplicar as fórmulas:
//    D = T x V       L = D / 12
//    Em que:
//    • D = Distância percorrida em horas
//    • T = Tempo
//    • V = Velocidade média
//    • L = Litros de combustível consumidos
//    Ao final, o programa deverá imprimir a distância percorrida e a
//    quantidade de litros consumidos na viagem.

//19. Faça um programa que calcule o valor de uma prestação em atraso.
//    Para isso, o programa deve ler o valor da prestação vencida, a
//    taxa periódica de juros e o período de atraso. Ao final, o
//    programa deve imprimir o valor da prestação atrasada, o período
//    de atraso, os juros que serão cobrados pelo período de atraso, o
//    valor da prestação acrescido dos juros. Considere juros simples.

//20. Faça um programa que efetue a apresentação do valor da conversão
//    em real (R$) de um valor lido em dólar (US$). Para isso, será
//    necessário também ler o valor da cotação do dólar.

int main() {
	    
    return EXIT_SUCCESS;
}
