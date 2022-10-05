/* Nome: Ana Vitória França da Silva e Lucas Henrique Padilha Frenhan
/* Semestre: Segundo Semestre de ADS - Manhã
/* Componente Curricular: Linguagem de Programação
/* Professor: Rui */

#define ex1

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

#ifdef ex1
/* Exercício 1 - Escreva um programa que receba via teclado um tempo em segundos e converta
   para horas, minutos e segundos. */

 int main ()
 {
     setlocale (LC_ALL,"portuguese");

     int tempoSegundos, h, m, s;

     printf("Esse programa tem como objetivo converter os segundos em horas, minutos e segundos.\n");
     printf("\nDigite quantos segundos deseja converter: ");
     scanf("%d", &tempoSegundos);

     h = (tempoSegundos / 3600);
     m = (tempoSegundos % 3600) / 60;
     s = (tempoSegundos % 3600) % 60;

     printf("\nHoras: %d\nMinutos: %d\nSegundos: %d\n", h , m, s);
 }

 #endif // ex1

 #ifdef ex2
 /* Exercício 2 - Escreva um programa que receba dados via teclado para variaveis do tipo short,
    long, int, float, double e um char e imprima-os no video no seguinte formato:

             10        20        30        40        50        60
     12345678901234567890123456789012345678901234567890123456789012345
         short               long                int
                   float               double              char */
int main()
{
    setlocale (LC_ALL,"portuguese");

    short s;
    float f;
    long l;
    double d;
    int i;
    char c;

    printf("Esse programa tem como objetivo imprimir as variáveis no vídeo em um determinado formato.\n");

    printf("\nDigite um número para o short: ");
    scanf("%d",&s);
    printf("\nDigite um número para o float: ");
    scanf("%f",&f);
    printf("\nDigite um número para o long: ");
    scanf("%ld",&l);
    printf("\nDigite um número para o double: ");
    scanf("%lf",&d);
    printf("\nDigite um número para o int: ");
    scanf("%d",&i);
    printf("\nDigite um número para o char: ");
    scanf("%c",&c);
    c = getchar();

    printf("\n\n");
    printf("        10        20        30        40        50        60\n");
    printf("12345678901234567890123456789012345678901234567890123456789012345\n");


    printf("%9d%19d%19d\n",s,l,i);
    printf("%19.1f%21.1f%18c\n",f,d,c);
}
#endif // ex2

#ifdef ex3
/* Exercício 3 - Escreva um programa que determine o menor multiplo de um numero inteiro. Este
   múltiplo deve ser maior que o limite minimo recebido. Recebe os 2 numeros via teclado.
   Ex: menor multiplo de 13 maior que 100. Resultado: 104. */

int main()
{
    setlocale (LC_ALL,"portuguese");

    int limite, mult, x, menor_mult = 0;

    printf("Esse programa tem como objetivo encontrar o menor múltiplo de um número inteiro.\n");
    printf("\nDigite o limite: ");
    scanf("%d",&limite);
    printf("\nDigite o multiplo: ");
    scanf("%d",&mult);

    for(x=limite+mult+1; x>limite; x--)
    {
        if(x%mult==0)
        {
            if(x < menor_mult)
            {
                menor_mult = x;
            }
                else if(menor_mult == 0)
                {
                    menor_mult = x;
                }
        }
    }
    printf("\nO menor múltiplo de %d maior que o limite mínimo encontrado de %d é =  %d", mult, limite, menor_mult);
}

#endif // ex3

#ifdef ex4
/* Exercício 4 - Escreva um programa que permute o conteúdo de duas variáveis sem utilizar uma
   variável auxiliar. */

int main ()
{
    setlocale (LC_ALL,"portuguese");

    int x, y;

    printf("Esse programa tem como objetivo trocar o valor das variáveis sem o uso de um auxiliar.\n");

    printf("\nInsira o valor de x: ");
    scanf("%d", &x);

    printf("\nInsira o valor de y: ");
    scanf("%d", &y);

    printf("\nInvertendo os valores...   ");
    x = x + y;
    y = x - y;
    x = x - y;

    printf("\nValor de x: %d\tValor de y: %d\n", x, y);

    return 0;
}

#endif // ex4

#ifdef ex5
/*  Exercício 5 - Escreva um programa que lê um valor em reais e calcula qual o menor número
    possível de notas de $100, $50, $20, $10, $5, $2 e $1 em que o valor lido pode
    ser decomposto. Escrever o valor lido e a relação de notas necessárias. */
int main()
{
    setlocale (LC_ALL,"portuguese");

    int valor;
    int  cem=0, cinquenta=0, vinte=0, dez=0, cinco=0, dois=0, um=0;

    printf("Esse programa tem como objetivo receber um valor em reais e decompor em cédulas.\n");
    printf("\nDigite um valor R$: ");
    scanf("%d", &valor);

    if(valor>100)
    {
        cem=valor/100;
        valor=valor-(cem*100);
    }
    if(valor>50)
    {
        cinquenta=valor/50;
        valor=valor-(cinquenta*50);
    }
    if(valor>20)
    {
        vinte=valor/20;
        valor=valor-(vinte*20);
    }
    if(valor>10)
    {
        dez=valor/10;
        valor=valor-(dez*10);
    }
    if(valor>5)
    {
        cinco=valor/5;
        valor=valor-(cinco*5);
    }
    if(valor>2)
    {
        dois=valor/2;
        valor=valor-(dois*2);
    }
    if(valor>=1)
    {
        um=valor/1;
        valor=valor-(um*1);
    }


    if(cem>0)
    {
        printf("\nNotas de cem: %d", cem);
    }
    if(cinquenta>0)
    {
        printf("\nNotas de cinquenta: %d", cinquenta);
    }
    if(vinte>0)
    {
        printf("\nNotas de vinte: %d", vinte);
    }
    if(dez>0)
    {
        printf("\nNotas de dez: %d", dez);
    }
    if(cinco>0)
    {
        printf("\nNotas de cinco: %d", cinco);
    }
    if(dois>0)
    {
        printf("\nNotas de dois: %d", dois);
    }
    if(um>0)
    {
        printf("\nNotas de um: %d", um);
    }
}
#endif // ex5
