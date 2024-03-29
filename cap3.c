/* Nome: Ana Vit�ria Fran�a da Silva e Lucas Henrique Padilha Frenhan
/* Semestre: Segundo Semestre de ADS - Manh�
/* Componente Curricular: Linguagem de Programa��o
/* Professor: Rui */

#define ex1

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

#ifdef ex1
/*  Exerc�cio 1 - Fa�a um programa que receba dois numeros inteiros e execute as seguintes
    fun�oes:
    - Verificar se o numero digitado � positivo ou negativo. Sendo que o valor de
      retorno sera' 1 se positivo, 0 se negativo ou -1 se for igual a 0.
    - Se os 2 numeros sao positivos, retorne a soma dos N numeros existentes entre
      eles.
    - Se os 2 numeros sao negativos, retorne a multiplicacao dos N numeros existente
      entre eles.
    - Se 1. numero for positivo e o 2. negativo faca a divisao entre eles.*/

int verifica1(int x)
{
    int z;

    if (x > 0)
    {
        z = 1;
    }
    else
    {
        if (x < 0)
        {
            z = 0;
        }
        else
        {
            z = -1;
        }
    }
    return z;
}

int soma(int x, int y)
{
    int i, s = 0;

    for (i = x + 1; i < y; i++)
    {
        s = s + i;
    }
    return s;
}

int mult(int x, int y)
{
    int i, s = 1;

    for (i = y + 1; i < x; i++)
    {
        s = s * (i);
    }
    return s;
}

float divide(int x, int y)
{
    float w;

    w = x / y;

    return w;
}

int main()
{
    setlocale (LC_ALL,"portuguese");

    int a, b, c, d, e, result;
    float f;

    do
    {
        system("cls");

        printf("Esse programa tem como objetivo receber dois n�meros inteiros e executar fun��es.\n");
        printf("\nDigite o primeiro valor: ");
        scanf("%d", &a);
        c = verifica1(a);
        printf("\nDigite o segundo valor: ");
        scanf("%d", &b);
        d = verifica1(b);

        if (c == 1 && d == 1)
        {
            if (a < b)
            {
                e = soma(a,b);
                printf("\nA soma dos n�meros entre %d e %d � igual a: %d\n", a,b,e);
            }
            if (a > b)
            {
                e = soma(b,a);
                printf("\nA soma dos n�meros entre %d e %d � igual a: %d\n", b,a,e);
            }
            if (a == b)
            {
                printf("\nN�o existe n�meros inteiros entre %d e %d\n", a,b);
            }
        }

        if (c == 0 && d == 0)
        {
            if (a > b)
            {
                e = mult(a,b);
            }
            if (a < b)
            {
                e = mult(b,a);
            }
            if (a == b)
            {
                printf("\nN�o existe n�meros inteiros entre %d e %d\n", a,b);
            }
            if(e!=1)
            {
                printf("\n%d", e);
            }

            if (e==1)
            {
                printf("-%d", e);
            }
        }

        if (c == 1 && d == 0)
        {
            f = divide(a,b);
            printf("\nA divis�o entre %d e %d �: %g", a,b,f);
        }
        printf("\nDigite 1 se quiser executar novamente.");
        printf("\nPara encerrar o programa digite qualquer n�mero.\n");
        scanf("%d", &result);
    }
    while (result == 1);
}
#endif // ex1

#ifdef ex2
/*  Exerc�cio 2 - Escreva um programa que receba um numero N via teclado. Escreva uma funcao
    que retorne a soma dos algarismos do resultado de N!. O resultado deve ser
    mostrado na funcao main().

    Ex: se N = 4, N! = 24. Logo, a soma de seus algarismos e� 2 + 4 = 6. */

int fatorial(int x)
{
    if (x == 0)
    {
        return 1;
    }
    else
    {
        return x * fatorial(x - 1);
    }
}

soma(int y)
{
    int soma = 0, digito;

    while (y > 0)
    {
        digito =  y % 10;
        soma = soma + digito;
        y = y / 10;
    }
    printf("\nA soma dos digitos � igual a: %d\n", soma);
}

int main()
{
    setlocale (LC_ALL,"portuguese");

    int a, b, c, result;

    do
    {
        system("cls");

        printf("Esse programa tem como objetivo retornar a soma dos algarismos.\n");
        printf("\nDigite um n�mero qualquer: ");
        scanf("%d", &a);

        b = fatorial(a);
        printf("\nO fatorial do n�mero digitado �: %d\n", b);
        c = soma(b);

        printf("\nDigite 1 se quiser executar novamente.");
        printf("\nPara encerrar o programa digite qualquer n�mero.\n");
        scanf("%d", &result);
    } while (result == 1);
}
#endif // ex2

#ifdef ex3
/*  Exerc�cio 3 - Escreva um programa que receba uma letra via teclado. Escreva uma funcao que
    pesquise esta letra dentro do vetor abaixo. Imprima o resultado da pesquisa
    no video na funcao main(). Passe como informacao para a funcao a letra
    digitada.(utilize o comando return). O vetor deve ser uma variavel global. */

// vetor -> b,d,f,h,j,k,m,o,q,s,u,w,y
char vetor[14] = {'b','d','f','h','j','k','m','o','q','s','u','w','y','\0'};

int verifica(char v)
{
    int i;

    for (i = 0; i < 14; i++)
    {
        if (v == vetor[i])
        {
            return 1;
        }
    }
    return 0;
}

int main()
{
    setlocale (LC_ALL,"portuguese");

    int result, a;
    char letra;

    do
    {
        system("cls");

        printf("Esse programa tem como objetivo receber uma letra e imprimir o resultado na fun��o.\n");
        printf("\nDigite uma letra qualquer: ");
        letra = getchar();
        getchar();

        a = verifica(letra);

        if (a == 0)
        {
            printf("A letra digitada n�o existe no vetor.\n");
        }
        else
        {
            printf("A letra digitada existe no vetor.\n");
        }

        printf("\nDigite 1 se quiser executar novamente.");
        printf("\nPara encerrar o programa digite qualquer n�mero.\n");
        scanf("%d", &result);
        getchar();
    }
    while (result == 1);
}
#endif // ex3

#ifdef ex4
/*  Exerc�cio 4 - Escreva um programa que receba na funcao main() 2 valores inteiro. Escreva
    uma funcao para cada operacoes aritmeticas e passe como parametro os 2
    valores recebidos na funcao main(). Retorne os resultados usando o comando
    return e imprima os 4 resultados no video na funcao main(). */

float soma(float x, float y)
{
    float s;

    s = x + y;
    return s;
}

float sub(float x, float y)
{
    float s;

    s = x - y;
    return s;
}

float mult(float x, float y)
{
    float m;

    m = x * y;
    return m;
}

float divisao(float x, float y)
{
    float d;

    d = x / y;
    return d;
}

int main()
{
    setlocale (LC_ALL,"portuguese");

    int result;
    float a, b, c, d, e, f;

    do
    {
        system("cls");

        printf("Esse programa tem como objetivo receber dois valores e realizar opera��es aritm�ticas.\n");
        printf("\nDigite o primeiro n�mero: ");
        scanf("%f", &a);

        printf("\nDigite o segundo n�mero: ");
        scanf("%f", &b);

        c = soma(a,b);
        printf("\nO resultado da soma �: %g\n", c);

        d = sub(a,b);
        printf("O resultado da subtra��o �: %g\n", d);

        e = mult(a,b);
        printf("O resultado da multiplica��o �: %g\n", e);

        f = divisao(a,b);
        printf("O resultado da divis�o �: %g\n", f);

        printf("\nDigite 1 se quiser executar novamente.");
        printf("\nPara encerrar o programa digite qualquer n�mero.\n");
        scanf("%d", &result);
    }
    while (result == 1);
}
#endif // ex4

#ifdef ex5
/*  Exerc�cio 5 - Aproveitando o programa anterior, inclua a selecao das operacoes aritmeticas
    para transforma esse programa em uma calculadora. (utilize o comando switch).
    As operacoes aritmeticas devem ser funcoes. O resultado deve ser mostrado na
    funcao main() */

float soma(float x, float y)
{
    float s;

    s = x + y;
    return s;
}

float sub(float x, float y)
{
    float s;

    s = x - y;
    return s;
}

float mult(float x, float y)
{
    float m;

    m = x * y;
    return m;
}

float divisao(float x, float y)
{
    float d;

    d = x / y;
    return d;
}

int main()
{
    setlocale (LC_ALL,"portuguese");

    int opc;
    float b, acumulador;

    printf("Esse programa tem como objetivo receber dois valores e realizar opera��es aritm�ticas.\n");
    printf("\nDigite o primeiro n�mero: ");
    scanf("%f",&acumulador);
    do
    {
        do
        {
            printf("\nQual opera��o desejar fazer? ( +, -, *, /) \n");
            printf("1 - para somar\n");
            printf("2 - para subtrair\n");
            printf("3 - para multiplicar\n");
            printf("4 - para dividir\n");
            printf("5 - para sair\n");
            scanf("%d",&opc);
            if(opc>5)
            {
                printf("Op��o inv�lida!\n");
            }
        }
        while(opc<1 || opc>5);

        switch(opc)
        {
        case 1:
        {
            printf("\nDigite o segundo n�mero: \n");
            scanf("%f",&b);
            system("cls");
            acumulador = soma(acumulador,b);
            printf("A resultado da soma foi de: %g\n", acumulador);
            break;
        }
        case 2:
        {
            printf("\nDigite o segundo n�mero: ");
            scanf("%f",&b);
            system("cls");
            acumulador = sub(acumulador,b);
            printf("A resultado da subtra��o foi de: %g\n", acumulador);
            break;
        }
        case 3:
        {
            printf("\nDigite o segundo n�mero: ");
            scanf("%f",&b);
            system("cls");
            acumulador = mult(acumulador,b);
            printf("A resultado da multiplica��o foi de: %g\n", acumulador);
            break;
        }
        case 4:
        {
            printf("\nDigite o segundo n�mero: ");
            scanf("%f",&b);
            system("cls");
            acumulador = divisao(acumulador,b);
            printf("A resultado da divis�o foi de: %g\n", acumulador);
            break;
        }
        case 5:
            printf("Saindo...");
            break;
        }
    }
    while(opc!=5);
}
#endif // ex5
