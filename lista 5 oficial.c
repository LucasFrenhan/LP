/* Nome: Ana Vitória França da Silva e Lucas Henrique Padilha Frenhan
/* Semestre: Segundo Semestre de ADS - Manhã
/* Componente Curricular: Linguagem de Programação
/* Professor: Rui */

#define ex1

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

#ifdef ex1
/* Exercício 1 - Receba 2 string de ate 10 caracteres via teclado na funcao main().
   Faça uma funcao para compara-las e retorne como resultado se são IGUAIS 1 ou se
   DIFERENTES 0 para a funcao main(). Imprima o resultado na funcao main().
   (Declare os vetores como variavel global) */

char nome1[11], nome2[11];

int comparaStrings()
{
    int i;

    for(i=0; nome1[i]!='\0'; i++)
    {
       if(nome1[i] != nome2[i])
       {
            break;
       }
    }
    if(nome1[i] == '\0' && nome2[i] == '\0')
    return 1;
    else
        return 0;
}

int main()
{
    setlocale (LC_ALL,"portuguese");

    int resultado=0, result;

    do
    {
    system("cls");

    printf("Esse programa tem como objetivo comparar duas strings.\n");
    printf("\nDigite a primeira string (10): ");
    gets(nome1);
    printf("Digite a segunda string (10): ");
    gets(nome2);

    resultado = comparaStrings();
    printf("\nO resultado da comparação de string é: %d\n", resultado);

    printf("\nDigite 1 se quiser executar novamente.");
    printf("\nPara encerrar o programa digite qualquer número.\n");
    scanf("%d", &result);
    getchar();
    nome1[0] = '\0';
    nome2[0] = '\0';
    }
    while (result == 1);
}

#endif // ex1

#ifdef ex2
/* Exercício 2 - Escreva um programa para receber 5 nomes, com até 7 caracteres, via
   teclado e imprima-os no video no seguinte formato:(Declare os 5 vetores como
   variaveis globais)

            10        20        30        40        50
    12345678901234567890123456789012345678901234567890
      nome1                                   nome5
                nome2               nome4
                          nome3 */

char nome1[7], nome2[7], nome3[7],nome4[7],nome5[7];

void imprimeVetores()
{
    printf("        10        20        30        40        50\n");
    printf("12345678901234567890123456789012345678901234567890\n");
    printf("%7s",nome1);
    printf("%40s\n",nome5);
    printf("%17s",nome2);
    printf("%20s\n",nome4);
    printf("%27s\n",nome3);
}

int main()
{
    setlocale (LC_ALL,"portuguese");

    int result;

    do
    {
    system("cls");

    printf("Esse programa tem como objetivo receber strings e imprimir na tela.\n");
    printf("\nDigite o primeiro nome (7): ");
    scanf("%s", &nome1);
    printf("Digite o segundo nome (7): ");
    scanf("%s", &nome2);
    printf("Digite o terceiro nome (7): ");
    scanf("%s", &nome3);
    printf("Digite o quarto nome (7): ");
    scanf("%s", &nome4);
    printf("Digite o quinto nome (7): ");
    scanf("%s", &nome5);

    printf("\n\n");

    imprimeVetores();

    printf("\nDigite 1 se quiser executar novamente.");
    printf("\nPara encerrar o programa digite qualquer número.\n");
    scanf("%d", &result);
    getchar();
    }
    while (result == 1);
}

#endif // ex2

#ifdef ex3
/* Exercício 3 - Receba via teclado uma cadeia de caracteres (10) e converta
   todos os caracteres para letras maiusculas. */

int main()
{
    setlocale (LC_ALL,"portuguese");

    char nome[10];
    int resultado,i, result;

    do
    {
    system("cls");
    printf("Esse programa tem como objetivo converter uma string em maiúsculo.\n");
    printf("\nDigite a string (10): ");
    scanf("%s",&nome);

    printf("\n");
    for(i=0; i<11; i++)
    {
        resultado = nome[i];
        if(resultado>=97 && resultado<=122)
        {
            if(nome[i]!= NULL)
            {
              resultado = resultado - 32;
              printf("%c",resultado);
            }
        }
        else
        {
            printf("%c",resultado);
        }
    }
    printf("\nDigite 1 se quiser executar novamente.");
    printf("\nPara encerrar o programa digite qualquer número.\n");
    scanf("%d", &result);
    getchar();
    } while (result == 1);
}
#endif // ex3

#ifdef ex4
/* Exercício 4 - Receba via teclado uma cadeia de caracteres (10) e converta
   todos os caracteres para letras minusculas. */

int main()
{
    setlocale (LC_ALL,"portuguese");

    char nome[10];
    int resultado,i, result;

    do
    {
    system("cls");

    printf("Esse programa tem como objetivo converter uma string em minúsculo.\n");
    printf("\nDigite a string (10): ");
    scanf("%s",&nome);

    for(i=0; i<11; i++)
    {
        resultado = nome[i];
        if(resultado>=65 && resultado<=90)
        {
            resultado = resultado + 32;
            printf("%c\n",resultado);
        }
        else
        {
            printf("%c\n",resultado);
        }
    }
    printf("\nDigite 1 se quiser executar novamente.");
    printf("\nPara encerrar o programa digite qualquer número.\n");
    scanf("%d", &result);
    getchar();
    } while (result == 1);
}
#endif // ex4

#ifdef ex5
/* Exercício 5 - Faca um programa que receba uma string de no maximo 20 caracteres na funcao main().
   Faca uma funcao que some 2 no valor ASCII de cada um dos caractere recebidos.
   Mostre a string resultante na funcao main().
   (Declare o vetor como variavel global) */

char nome[20];

void somaDois()
{
    int resultado=0,i;

    for(i=0; i<21; i++)
    {
        resultado = nome[i];
        if(nome[i]!=NULL)
        {
            resultado = resultado + 2;
            printf("%c",resultado);
        }
    }
}
int main()
{
    setlocale (LC_ALL,"portuguese");

    int result;

    do
    {
    system("cls");

    printf("Esse programa criptografa uma mensagem.\n");
    printf("\nDigite a string (20): ");
    scanf("%s",&nome);
    printf("\n");

    somaDois();

    printf("\nDigite 1 se quiser executar novamente.");
    printf("\nPara encerrar o programa digite qualquer número.\n");
    scanf("%d", &result);
    getchar();
    } while (result == 1);
}
#endif // ex5


