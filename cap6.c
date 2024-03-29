/* Nome: Ana Vit�ria Fran�a da Silva e Lucas Henrique Padilha Frenhan
/* Semestre: Segundo Semestre de ADS - Manh�
/* Componente Curricular: Linguagem de Programa��o
/* Professor: Rui */

#define ex1

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

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

        printf("Esse programa tem como objetivo receber dois n�meros e imprimir o resultado das\nopera��es aritm�ticas.\n");
        printf("\nDigite o primeiro n�mero: ");
        scanf("%d", &n1);
        printf("Digite o segundo n�mero:  ");
        scanf("%d", &n2);

        soma = n1 + n2;
        sub = n1 - n2;
        mult = n1 * n2;
        div = (float)n1 / (float)n2;

        printf("\nO resultado da soma �: %d\n", soma);
        printf("O resultado da subtra��o a �: %d\n", sub);
        printf("O resultado da multiplica��o �: %d\n", mult);
        printf("O resultado da divis�o �: %g\n", div);

        printf("\nDigite 1 se quiser executar novamente.");
        printf("\nPara encerrar o programa digite qualquer n�mero.\n");
        scanf("%d", &result);
    }
    while (result == 1);
}
#endif // ex1

#ifdef ex2
/* Exerc�cio 2 - Reescreva o exercicio anterior utilizando operadores de atribuicao
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
    setlocale (LC_ALL,"portuguese");

    int n1,n2,result;
    float resultado;

    do
    {
        system("cls");

        printf("Esse programa tem como objetivo receber dois n�meros e imprimir o resultado das\nopera��es aritm�ticas.\n");
        printf("\nDigite o primeiro n�mero: ");
        scanf("%d", &n1);
        printf("Digite o segundo n�mero:  ");
        scanf("%d", &n2);

        resultado = soma(n1,n2);
        printf("\nO resultado da soma �: %g\n", resultado);
        resultado = sub(n1,n2);
        printf("O resultado da subtra��o �: %g\n", resultado);
        resultado = mult(n1,n2);
        printf("O resultado da multiplica��o �: %g\n", resultado);
        resultado = divisao(n1,n2);
        printf("O resultado da divis�o �: %g\n", resultado);

        printf("\nDigite 1 se quiser executar novamente.");
        printf("\nPara encerrar o programa digite qualquer n�mero.\n");
        scanf("%d", &result);
        getchar();
    }
    while (result == 1);
}
#endif // ex2

#ifdef ex3
/* Exerc�cio 3 - Escreva um programa para determinar a idade de uma pessoa, em anos, meses e
   dias, recebendo via teclado a data (dia, mes e ano) do seu nascimento e a
   data (dia, mes e ano) atual. */

int main()
{
    setlocale (LC_ALL,"portuguese");

    int anoNasc, anoAtual, mesNasc, mesAtual, diaNasc, diaAtual, result;
    int determinaAno, determinaMes, determinaDia;
    int determinaIdade;

    do
    {
        system("cls");

        printf("Esse programa tem como objetivo determinar a idade de uma pessoa.\n");
        printf("\nInforme o dia do nascimento: ");
        scanf("%d", &diaNasc);
        printf("Informe o m�s do nascimento: ");
        scanf("%d", &mesNasc);
        printf("Informe o ano do nascimento: ");
        scanf("%d", &anoNasc);

        printf("\nInforme o dia atual: ");
        scanf("%d", &diaAtual);
        printf("Informe o m�s atual: ");
        scanf("%d", &mesAtual);
        printf("Informe o ano atual: ");
        scanf("%d", &anoAtual);

        determinaIdade = 365 * anoAtual + 30 * mesAtual + diaAtual - 365 * anoNasc - 30 * mesNasc - diaNasc;

        determinaAno = determinaIdade / 365;
        determinaIdade = determinaIdade % 365;

        determinaMes = determinaIdade / 30;
        determinaIdade = determinaIdade % 30;

        determinaDia = determinaIdade;

        printf("\nVoc� tem %d anos, %d meses e %d dias de vida.\n", determinaAno, determinaMes, determinaDia);

        printf("\nDigite 1 se quiser executar novamente.");
        printf("\nPara encerrar o programa digite qualquer n�mero.\n");
        scanf("%d", &result);
        getchar();
    }
    while (result == 1);
}
#endif // ex3

#ifdef ex4
/* Exerc�cio 4 - Escreva um programa que receba via teclado 2 numeros inteiros e execute
   as operacoes logicas bit a bit AND, OU, OU EXCLUSIVO e imprima-os no
   video no formato decimal e hexadecimal. */

int main()
{
    setlocale (LC_ALL,"portuguese");

    int x,y, result;

    do
    {
        system("cls");

        printf("Esse programa tem como objetivo executar opera��es l�gicas bit a bit.\n");
        printf("\nDigite o primeiro n�mero: ");
        scanf("%d", &x);
        printf("Digite o segundo n�mero: ");
        scanf("%d", &y);

        printf("\nOperadores bit-a-bit\n");
        printf(" AND = x & y --> %3d  0x%x\n",x & y,x & y);
        printf(" OU = x | y --> %3d  0x%x\n",x | y,x | y);
        printf(" OU EXCLUSIVO = x ^ y --> %3d  0x%x\n",x ^ y,x ^ y);

        printf("\nDigite 1 se quiser executar novamente.");
        printf("\nPara encerrar o programa digite qualquer n�mero.\n");
        scanf("%d", &result);
    }
    while (result == 1);
}
#endif // ex4

#ifdef ex5
/*  Exerc�cio 5 - Escreva um programa que tem o menu abaixo na funcao main(). Receba via teclado
    a opcao do menu.
    Em cada opcao do menu receba o valor da temperatura e chama as funcoes de conversao
    e mostra resultado.
       1 - transforma graus Celsius em Fahrenheit e Kelvin
       2 - transforma graus Fahrenheit em Celsius e Kelvin
       3 - transforma graus Kelvin em Celsius e Fahrenheit */

void converteCelsius()
{
    float celsius, fahrenheit, kelvin;

    printf("\nDigite um valor em Celsius para ser convertido: ");
    scanf("%f", &celsius);

    fahrenheit = (celsius * 1.8) + 32;
    kelvin = celsius + 273.15;

    printf("\nO valor em Fahrenheit �: %.2f", fahrenheit);
    printf("\nO valor em Kelvin �: %.2f", kelvin);
}

void converteFahrenheit()
{
    float celsius, fahrenheit, kelvin;

    printf("\nDigite um valor em Fahrenheit para ser convertido: ");
    scanf("%f", &fahrenheit);

    celsius = ((fahrenheit - 32) * 0.55556);
    kelvin = ((fahrenheit - 32) * 0.55556) + 273.15;

    printf("\nO valor em Celsius �: %.2f", celsius);
    printf("\nO valor em Kelvin �: %.2f", kelvin);
}

void converteKelvin()
{
    float celsius, fahrenheit, kelvin;

    printf("\nDigite um valor em Kelvin para ser convertido: ");
    scanf("%f", &kelvin);

    celsius = kelvin - 273.15;
    fahrenheit = ((kelvin - 273.15) * 1.8) + 32;

    printf("\nO valor em Celsius �: %.2f", celsius);
    printf("\nO valor em Fahrenheit �: %.2f", fahrenheit);
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
        printf("Qual op��o deseja realizar? ");
        scanf("%d", &opc);
        getchar();
        if (opc > 3)
        {
            printf("Op��o inv�lida!\n");
            getchar();
        }

    }
    while (opc < 1 || opc > 3);
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
    setlocale (LC_ALL,"portuguese");

    int result;

    do
    {
        menu();
        printf("\nDigite 1 se quiser executar novamente.");
        printf("\nPara encerrar o programa digite qualquer n�mero.\n");
        scanf("%d", &result);
    }
    while (result == 1);

    printf("Obrigado por utilizar nosso programa, at� a pr�xima!");
}
#endif // ex5
