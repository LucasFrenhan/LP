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
   printf("Digite o primeiro n�mero: ");
   scanf("%d", &n1);
   printf("Digite o segundo n�mero:  ");
   scanf("%d", &n2);

   soma = n1 + n2;
   sub = n1 - n2;
   mult = n1 * n2;
   div = n1 / n2;

   printf("\nO resultado da soma �: %d\n", soma);
   printf("O resultado da subtra��o a �: %d\n", sub);
   printf("O resultado da multiplica��o �: %d\n", mult);
   printf("O resultado da divis�o �: %g\n", div);

   printf("\nDigite 1 se quiser executar novamente.");
   printf("\nPara encerrar o programa digite qualquer n�mero.\n");
   scanf("%d", &result);
   } while (result == 1);
}


