#define ex5

#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

#ifdef ex1
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
#endif // ex1

#ifdef ex2
/* Exercício 2 - Reescreva o exercicio anterior utilizando operadores de atribuicao
   composta. */

#endif // ex2

#ifdef ex3
 /* Exercício 3 - Escreva um programa para determinar a idade de uma pessoa, em anos, meses e
    dias, recebendo via teclado a data (dia, mes e ano) do seu nascimento e a
    data (dia, mes e ano) atual. */

#endif // ex3

#ifdef ex4
/* Exercício 4 - Escreva um programa que receba via teclado 2 numeros inteiros e execute
   as operacoes logicas bit a bit AND, OU, OU EXCLUSIVO e imprima-os no
   video no formato decimal e hexadecimal. */

#endif // ex4

#ifdef ex5
/*  Exercício 5 - Escreva um programa que tem o menu abaixo na funcao main(). Receba via teclado
    a opcao do menu.
    Em cada opcao do menu receba o valor da temperatura e chama as funcoes de conversao
    e mostra resultado.
       1 - transforma graus Celsius em Fahrenheit e Kelvin
       2 - transforma graus Fahrenheit em Celsius e Kelvin
       3 - transforma graus Kelvin em Celsius e Fahrenheit */

float converteCelsius()
{
    float celsius, fahrenheit, kelvin;

    printf("\nDigite um valor em Celsius para ser convertido: \n");
    scanf("%d", &celsius);

    fahrenheit = (celsius * (9/5)) + 32;
    kelvin = celsius + 273,15;

    printf("\nO valor em Fahrenheit é: %.2f", fahrenheit);
    printf("\nO valor em Kelvin é: %.2f", kelvin);
}

float converteFahrenheit()
{
    float celsius, fahrenheit, kelvin;

    printf("\nDigite um valor em Fahrenheit para ser convertido: \n");
    scanf("%d", &fahrenheit);

    celsius = ((fahrenheit - 32) * (5/9));
    kelvin = ((fahrenheit - 32) * (5/9)+ 273,15);

    printf("\nO valor em Celsius é: %.2f", celsius);
    printf("\nO valor em Kelvin é: %.2f", kelvin);
}

float converteKelvin()
{
    float celsius, fahrenheit, kelvin;

    printf("\nDigite um valor em Kelvin para ser convertido: \n");
    scanf("%d", &kelvin);

    celsius = kelvin - 273,15;
    fahrenheit = ((kelvin - 273,15) * (9/5) + 32);

    printf("\nO valor em Celsius é: %.2f", celsius);
    printf("\nO valor em Fahrenheit é: %.2f", fahrenheit);
}

int main()
{
    setlocale (LC_ALL,"portuguese");

    int opc, result;

    do
    {
        do
        {
            system("cls");
            printf("1 - Transformar graus Celsius em Fahrenheit e Kelvin;\n");
            printf("2 - Transformar graus Fahrenheit em Celsius e Kelvin;\n");
            printf("3 - Transformar graus Kelvin em Celsius e Fahrenheit.\n");
            printf("Qual opção deseja realizar? ");
            scanf("%d",&opc);
            if(opc>3)
            {
                printf("Opção inválida!\n");
            }
        }
        while(opc<1 || opc>3);

        switch(opc)
        {
        case 1:
            converteCelsius();
            break;
        case 2:
            converteFahrenheit();
            break;
        case 3:
            converteKelvin();
            break;
        default:
            printf("Opção inválida");
            break;
        }
    printf("\nDigite 1 se quiser executar novamente.");
    printf("\nPara encerrar o programa digite qualquer número.\n");
    scanf("%d", &result);
} while (result == 1);
}
#endif // ex5
