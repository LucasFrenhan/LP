#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

/* Exercicio 1 - Escreva um programa que receba via teclado 2 numeros inteiros e
   imprima-os no video com o resultado das 4 operacoes aritmeticas. */

int main()
{
    setlocale (LC_ALL,"portuguese");

   int n1, n2, soma, sub, mult, result;
   float div;

   do
   {
   system("cls");
   printf("Digite o primeiro número: ");
   scanf("%d", &n1);
   printf("Digite o segundo número:  ");
   scanf("%d", &n2);

   soma = n1 + n2;
   sub = n1 - n2;
   mult = n1 * n2;
   div = n1 / n2;

   printf("\nO resultado da soma é: %d\n", soma);
   printf("O resultado da subtração a é: %d\n", sub);
   printf("O resultado da multiplicação é: %d\n", mult);
   printf("O resultado da divisão é: %g\n", div);

   printf("\nDigite 1 se quiser executar novamente.");
   printf("\nPara encerrar o programa digite qualquer número.\n");
   scanf("%d", &result);
   } while (result == 1);
}


