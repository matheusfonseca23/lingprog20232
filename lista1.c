#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*  
Exercícios sobre os comandos básicos em C
*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

//1. Faça um programa que imprima o seu nome.



void questao01() 
{
    printf("Eu me chamo Valdomiro Paes de Barro");

}

//2. Faça um programa que imprima o produto dos valores 30 e 27.



void questao02()
 {
    float resultado;
    resultado = 30*2;
    printf("O resultado é %.2f",resultado);
}

//3. Faça um programa que imprima a média aritmética entre os números 5, 8, 12.


void questao03()
{
    float media;

    media = (5+8+12)/3;
    printf("A média é %.2f",media);

}

//4. Faça um programa que leia e imprima um número inteiro.


void questao04()
{
    int numero;
    printf("Digite um número: ");
    scanf("%d",&numero);
    printf("O número apresentado é: %d",numero);

}
//5. Faça um programa que leia dois números reais e os imprima.
void questao05()
{
    int numero,numero1;
    printf("Digite o primeiro número: ");
    scanf("%d",&numero);
     printf("Digite o segundo número: ");
    scanf("%d",&numero1);
    printf("Os números apresentados são: %d e %d",numero,numero1);
}
//6. Faça um programa que leia um número inteiro e imprima o seu
//   antecessor e o seu sucessor.
void questao06()
{
    int numero,antecessor,sucessor;
    printf("Digite o primeiro número: ");
    scanf("%d",&numero);
  antecessor= numero-1;
  sucessor= numero+1;
    printf("O número apresentado foi: %d, o eu antecessor é: %d, e o seu sucessor é: %d",numero,antecessor,sucessor);

    
}


//7. Faça um programa que leia o nome o endereço e o telefone de
//   um cliente e ao final, imprima esses dados.
void questao07()
{
    char nome[50], end[50],tel[50];
    printf("Digite seu nome: ");
    scanf(" %50[^\n]",&nome);
    printf("Digite seu endereço: ");
     scanf(" %50[^\n]",&end);
     printf("Digite seu telefone: ");
     scanf(" %50[^\n]",&tel);
    
    printf("nome: %s",nome);
    printf("\nEndereço: %s",end);
     printf("\nTelefone: %s",tel);

}

//8. Faça um programa que leia dois números inteiros e imprima a
//   subtração deles.
void questao08()
{ 
    float numero,numero1,resultado;
    printf("Digite o primeiro número: ");
    scanf("%f",&numero);
     printf("Digite o segundo número: ");
    scanf("%f",&numero1);
    resultado = numero - numero1;
    printf("A  subtração dos números é: %.2f ",resultado);
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
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float numero,quadrado;

int main()
{
    printf("Digite o um número: ");
    scanf("%f",&numero);
     
    quadrado = numero*numero;
 
    printf("O quadrado é: %.2f ",quadrado);
     
    return 0;
}
//13. Faça um programa que leia o saldo de uma conta poupança e
//    imprima o novo saldo, considerando um reajuste de 2%.
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float numero,resultado;

int main()
{
    printf("Digite o saldo da sua conta poupança: ");
    scanf("%f",&numero);
     
    resultado = numero*1.02;
 
    printf("O novo saldo  é: %.2f ",resultado);
     
    return 0;
}
//14. Faça um programa que leia a base e a altura de um retângulo
//    e imprima o perímetro (base + altura) e a área (base * altura).
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float perimetro,altura,base,area;

int main()
{
    printf("Digite o tamanho da base do retângulo: ");
    scanf("%f",&base);
    printf("Digite a altura do retângulo: ");
    scanf("%f",&altura);
    perimetro = (base + altura) * 2;
    area = base * altura;

    printf("O perímetro do retângulo é: %.2f ",perimetro);
    printf("\n A área do retângulo é: %.2f ",area);
    return 0;
}
//15. Faça um programa que leia o valor de um produto, o percentual
//    do desconto desejado e imprima o valor do desconto e o valor
//    do produto subtraindo o desconto.
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float produto,desconto,percentual,valordesconto,valorfinal;

int main()
{
    printf("Qual é o valor do produto: ");
    scanf("%f",&produto);
    printf("Qual é percentual de desconto desejado: ");
    scanf("%f",&desconto);
    
    percentual = desconto/100;
    valordesconto = percentual * produto;
    valorfinal = produto - valordesconto;

    printf("O valor  do desconto é: %.2f ",valordesconto);
    printf("\n O valor final do produto será: %.2f ",valorfinal);
    return 0;
}
//16. Faça um programa que calcule o reajuste do salário de um
//    funcionário. Para isso, o programa deverá ler o salário atual
//    do funcionário e ler o percentual de reajuste. Ao final imprimir
//    o valor do novo salário.
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float salario,reajuste,percentual,valorfinal;

int main()
{
    printf("Qual é o valor do seu salário? ");
    scanf("%f",&salario);
    printf("Qual é percentual de reajuste? ");
    scanf("%f",&reajuste);
    
    percentual = (reajuste/100)+1;
    valorfinal= percentual * salario;


    printf("O valor  do salário será : %.2f ",valorfinal);
    return 0;
}
//17. Faça um programa que calcule a conversão entre graus centígrados
//    e Fahrenheit. Para isso, leia o valor em centígrados e calcule
//    com base na fórmula a seguir. Após calcular o programa deve
//    imprimir o resultado da conversão.
//    F = (9 x C +160) / 5
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float celsius,fahrenheit;

int main()
{
    printf("Qual é a temperatura em graus celsius? ");
    scanf("%f",&celsius);
   
    fahrenheit  = (9*celsius +160) / 5;

    printf("A temperatura em celsius é : %.1fºC e em fahrenheit é: %.1fºF ",celsius,fahrenheit);
    return 0;
}
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
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float litro,distancia;

int main()
{
    printf("Quantos KMs teve a viagem? ");
    scanf("%f",&distancia);
   
    litro  = distancia/12;

    printf("Foram gastos %.f litros na viagem",litro);
    return 0;
}
//19. Faça um programa que calcule o valor de uma prestação em atraso.
//    Para isso, o programa deve ler o valor da prestação vencida, a
//    taxa periódica de juros e o período de atraso. Ao final, o
//    programa deve imprimir o valor da prestação atrasada, o período
//    de atraso, os juros que serão cobrados pelo período de atraso, o
//    valor da prestação acrescido dos juros. Considere juros simples.
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
float 
int main{ 

    printf("Qual é o valor da prestação vencida?");
    return 0;
}
//20. Faça um programa que efetue a apresentação do valor da conversão
//    em real (R$) de um valor lido em dólar (US$). Para isso, será
//    necessário também ler o valor da cotação do dólar.

#include <stdio.h>
#include <stdlib.h>
#include <math.h>



int main()
{float dolar,real;
    printf("Quantos dolares vc tem? ");
    scanf("%f",&dolar);
   
    real  = dolar*4.86;

    printf("Você tem R$: %.2f dólares que equivalem a R$: %.2f reais ",dolar,real);
    return 0;
}
