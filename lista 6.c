#define ex2

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

#ifdef ex1
/* Exercicio 1 - Escreva um programa que receba via teclado 2 numeros inteiros e
   imprima-os no video com o resultado das 4 operacoes aritmeticas. */

int main()
{
    setlocale(LC_ALL, "portuguese");

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
        div = (float)n1 / (float)n2;

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
   int soma(int x, int y)
   {
       int valor;
       valor = x;
       valor += y;
       return valor;
   }

   int sub(int x, int y)
   {
       int valor;
       valor = x;
       valor -= y;
       return valor;
   }

   int mult(int x, int y)
   {
       int valor;
       valor = x;
       valor *= y;
       return valor;
   }

   float divisao(int x, int y)
   {
       float valor;
       valor = x;
       valor /= y;
       return valor;
   }

int main()
{
    setlocale(LC_ALL, "portuguese");
    int n1,n2,result;
    float resultado;

    do
    {
        system("cls");

        printf("Digite o primeiro número: ");
        scanf("%d", &n1);
        printf("Digite o segundo número:  ");
        scanf("%d", &n2);

        resultado = soma(n1,n2);
        printf("\nO resultado da soma é: %g\n", resultado);
        resultado = sub(n1,n2);
        printf("\nO resultado da subtração é: %g\n", resultado);
        resultado = mult(n1,n2);
        printf("\nO resultado da multiplicação é: %g\n", resultado);
        resultado = divisao(n1,n2);
        printf("\nO resultado da divisão é: %g\n", resultado);

        printf("\nDigite 1 se quiser executar novamente.");
        printf("\nPara encerrar o programa digite qualquer número.\n");
        scanf("%d", &result);
        getchar();
    } while (result == 1);
}
#endif // ex2

#ifdef ex3
/* Exercício 3 - Escreva um programa para determinar a idade de uma pessoa, em anos, meses e
   dias, recebendo via teclado a data (dia, mes e ano) do seu nascimento e a
   data (dia, mes e ano) atual. */
   int main()
{
    setlocale(LC_ALL, "portuguese");
    int result;

    do
    {
        system("cls");


        printf("\nDigite 1 se quiser executar novamente.");
        printf("\nPara encerrar o programa digite qualquer número.\n");
        scanf("%d", &result);
    } while (result == 1);
}

#endif // ex3

#ifdef ex4
/* Exercício 4 - Escreva um programa que receba via teclado 2 numeros inteiros e execute
   as operacoes logicas bit a bit AND, OU, OU EXCLUSIVO e imprima-os no
   video no formato decimal e hexadecimal. */
   int main()
{
    setlocale(LC_ALL, "portuguese");
    int result;

    do
    {
        system("cls");


        printf("\nDigite 1 se quiser executar novamente.");
        printf("\nPara encerrar o programa digite qualquer número.\n");
        scanf("%d", &result);
    } while (result == 1);
}

#endif // ex4

#ifdef ex5
/*  Exercício 5 - Escreva um programa que tem o menu abaixo na funcao main(). Receba via teclado
    a opcao do menu.
    Em cada opcao do menu receba o valor da temperatura e chama as funcoes de conversao
    e mostra resultado.
       1 - transforma graus Celsius em Fahrenheit e Kelvin
       2 - transforma graus Fahrenheit em Celsius e Kelvin
       3 - transforma graus Kelvin em Celsius e Fahrenheit */

void converteCelsius()
{
    float celsius, fahrenheit, kelvin;

    printf("\nDigite um valor em Celsius para ser convertido: \n");
    scanf("%f", &celsius);

    fahrenheit = (celsius * 1.8) + 32;
    kelvin = celsius + 273.15;

    printf("\nO valor em Fahrenheit é: %.2f", fahrenheit);
    printf("\nO valor em Kelvin é: %.2f", kelvin);
}

void converteFahrenheit()
{
    float celsius, fahrenheit, kelvin;

    printf("\nDigite um valor em Fahrenheit para ser convertido: \n");
    scanf("%f", &fahrenheit);

    celsius = ((fahrenheit - 32) * 0.55556);
    kelvin = ((fahrenheit - 32) * 0.55556) + 273.15;

    printf("\nO valor em Celsius é: %.2f", celsius);
    printf("\nO valor em Kelvin é: %.2f", kelvin);
}

void converteKelvin()
{
    float celsius, fahrenheit, kelvin;

    printf("\nDigite um valor em Kelvin para ser convertido: \n");
    scanf("%f", &kelvin);

    celsius = kelvin - 273.15;
    fahrenheit = ((kelvin - 273.15) * 1.8) + 32;

    printf("\nO valor em Celsius é: %.2f", celsius);
    printf("\nO valor em Fahrenheit é: %.2f", fahrenheit);
}

void menu()
{
    int opc;
    do
    {
        system("cls");
        printf("1 - Transformar graus Celsius em Fahrenheit e Kelvin;\n");
        printf("2 - Transformar graus Fahrenheit em Celsius e Kelvin;\n");
        printf("3 - Transformar graus Kelvin em Celsius e Fahrenheit.\n");
        printf("Qual opção deseja realizar? ");
        scanf("%d", &opc);
        getchar();
        if (opc > 3)
        {
            printf("Opção inválida!\n");
            getchar();
        }

    } while (opc < 1 || opc > 3);
    switch (opc)
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
    }
}

int main()
{
    setlocale(LC_ALL, "portuguese");

    int result;

    do
    {
        menu();
        printf("\nDigite 1 se quiser executar novamente.");
        printf("\nPara encerrar o programa digite qualquer número.\n");
        scanf("%d", &result);
    } while (result == 1);
    printf("Obrigado por utilizar nosso programa, até a próxima!");
}
#endif // ex5
