#define ex4

#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

/*******************************************************************************
5 - Receba via teclado 10 valores inteiros e ordene por ordem crescente assim
    que sao digitados. Guarde-os em um vetor. Mostre ao final os valores ordenados.
*********************************************************************************/

#ifdef ex1
/* Exercício 1 - Escreva um programa que receba um vetor de tamanho 10 e o decomponha em dois
   outros vetores. Um contera' as componentes de ordem impar e o outro contera'
   as componentes de ordem par. Por exemplo, se o vetor dado for v = {3, 5, 6, 8, 1, 4, 2, 3, 7},
   o programa deve gerar os vetores u = {3, 6, 1, 2, 7} e w = {5, 8, 4, 3}. */

int vetorA[10];

void criaVetor()
{
    int c;

    for(c=0; c<10; c++)
    {
        printf("Digite o %d°:",c+1);
        scanf("%d",&vetorA[c]);
    }
}

void converteVetorPar()
{
    int vetorPar[5],p=0,c;

    for(c=0; c<10; c++)
    {
        if(c%2==0)
        {
            vetorPar[p]=vetorA[c];
            p++;
        }
    }


    printf("\nVetor dos indices pares[");
    for(p=0; p<5; p++)
    {
        if(p<4)
        {
            printf("%d, ",vetorPar[p]);
        }
        else
        {
            printf("%d",vetorPar[p]);
        }
    }
    printf("]\n");

}

void converteVetorImpar()
{
    int vetorImpar[5],i=0,c;

    for(c=0; c<10; c++)
    {
        if(c%2!=0)
        {
            vetorImpar[i]=vetorA[c];
            i++;
        }
    }


    printf("\nVetor dos indices impares[");
    for(i=0; i<5; i++)
    {
        if(i<4)
        {
            printf("%d, ",vetorImpar[i]);
        }
        else
        {
            printf("%d",vetorImpar[i]);
        }
    }
    printf("]\n");
}

int main()
{
    setlocale (LC_ALL,"portuguese");
    int result;

    do
    {
        system("cls");
        criaVetor();
        converteVetorPar();
        converteVetorImpar();
        printf("\nDigite 1 se quiser executar novamente.");
        printf("\nPara encerrar o programa digite qualquer número.\n");
        scanf("%d", &result);
    }
    while (result == 1);
    return 0;
}
#endif // ex1

#ifdef ex2
/* Exercício 2 - Receba via teclado valores do tipo int para uma vetor 5 x 5. Receba via
   teclado um valor x. O programa dever fazer a busca desse valor x no vetor
   e, ao final escrever a localizacao (linha e coluna) ou uma mensagem de
   ”nao encontrado”. */

int vetor[5][5];

void criaVetor()
{
    int i,j;

    for(i=0; i<5; i++)
    {
        for(j=0; j<5; j++)
        {
            vetor[i][j] = (i + 3) * (j + 4);
        }
    }
}

int verificaVetor(int x)
{
    int i,j,k=0;

    for(i=0; i<5; i++)
    {
        for(j=0; j<5; j++)
        {
            if (x==vetor[i][j])
            {
                printf("O número %d está na posição no vetor[%d] [%d]\n",x,i,j);
                k++;
            }
        }
    }
    return k;
}

void imprimiVetor()
{
    int i,j;

    for(i=0; i<5; i++)
    {
        for(j=0; j<5; j++)
        {
            vetor[i][j] = (i + 3) * (j + 4);
            printf(" [%d]",vetor[i][j]);
        }
        printf("\n");
    }
}


int main()
{
    setlocale (LC_ALL,"portuguese");

    int numero,kx, result;

    do
    {
        system("cls");
        printf("Digite um valor: ");
        scanf("%d",&numero);
        criaVetor();
        kx = verificaVetor(numero);

        if(kx==0)
        {
            printf("O número digitado não está no vetor\n");
        }

        imprimiVetor();
        printf("\nDigite 1 se quiser executar novamente.");
        printf("\nPara encerrar o programa digite qualquer número.\n");
        scanf("%d", &result);
    }
    while (result == 1);
}

#endif // ex2

#ifdef ex3
/*
3 - Defina 2 vetores bidimensionais do tipo inteiro de 2x3. Escreva um programa
    que recebe os dados via teclado para esses 2 vetores. Usando o operador
    adicao "+", some os elementos de mesmo indice dos 2 vetores e guarde o
    resultado em um 3. vetor. Imprima na tela o indice, os valores e o resultado
    dos 6 elementos dos vetores.
*/

int vetorA[2][3], vetorB[2][3], vetorC[2][3];

void criaVetorA()
{
    int i,j,x;

    for(i=0; i<2; i++)
    {
        for(j=0; j<3; j++)
        {
            printf("\nDigite um número inteiro para o vetor A [%d][%d]:",i,j);
            scanf("%d",&x);
            vetorA[i][j] = x;
        }
    }
}
void criaVetorB()
{
    int i,j,x;

    for(i=0; i<2; i++)
    {
        for(j=0; j<3; j++)
        {
            printf("\nDigite um número inteiro para o vetor B [%d][%d]:",i,j);
            scanf("%d",&x);
            vetorB[i][j] = x;
        }
    }
}

void criaVetorC()
{
    int i,j;

     for(i=0; i<2; i++)
    {
        for(j=0; j<3; j++)
        {
                vetorC[i][j] = vetorB[i][j] + vetorA[i][j];
        }
    }
}


void imprimiVetorA()
{
    int i,j;

    printf("O conteúdo do vetor A\n");
    for(i=0; i<2; i++)
    {
        for(j=0; j<3; j++)
        {
            printf(" [%d]",vetorA[i][j]);
        }
        printf("\n");
    }
}

void imprimiVetorB()
{
    int i,j;

    printf("O conteúdo do vetor B\n");
    for(i=0; i<2; i++)
    {
        for(j=0; j<3; j++)
        {
            printf(" [%d]",vetorB[i][j]);
        }
        printf("\n");
    }
}

void imprimiVetorC()
{
    int i,j;

    printf("O conteúdo do vetor C\n");
    for(i=0; i<2; i++)
    {
        for(j=0; j<3; j++)
        {
            printf(" [%d]",vetorC[i][j]);
        }
        printf("\n");
    }
}

int main()
{
    setlocale (LC_ALL,"portuguese");

    int result;

    do
    {
        criaVetorA();
        criaVetorB();
        criaVetorC();
        imprimiVetorA();
        imprimiVetorB();
        imprimiVetorC();

        printf("\nDigite 1 se quiser executar novamente.");
        printf("\nPara encerrar o programa digite qualquer número.\n");
        scanf("%d", &result);
    }
    while (result == 1);
}

#endif // ex3

#ifdef ex4
/*
4 - Escreva um programa para receber via teclado em vetores 3 int, 3 long,
    3 unsigned, 3 float e 3 double e imprima-os no video no seguinte formato:

            10        20        30        40        50
    12345678901234567890123456789012345678901234567890
      int                 long                unsigned
                float               double
      int                 long                unsigned
                float               double
      int                 long                unsigned
                float               double
*/

int vetorInt[3][1];
float vetorFloat[3][1];
long vetorLong[3][1];
double vetorDouble[3][1];
unsigned vetorUnsigned[3][1];

int criaVetorInt()
{
    int i;

    printf("Primeiro serão valores do tipo inteiros\n");
    for(i=0; i<3; i++)
    {
        printf("\nDigite o %d° número: ",i+1);
        scanf("%d",&vetorInt[i][1]);
    }
}

float criaVetorFloat()
{
    int i;

    printf("Segundo serão valores do tipo ponto flutuante\n");
    for(i=0; i<3; i++)
    {
        printf("\nDigite o %d° número: ",i+1);
        scanf("%f",&vetorFloat[i][1]);
    }
}

long criaVetorLong()
{
    int i;

    printf("Terceiro serão valores do tipo long\n");
    for(i=0; i<3; i++)
    {
        printf("\nDigite o %d° número: ",i+1);
        scanf("%ld",&vetorLong[i][1]);
    }
}

double criaVetorDouble()
{
    int i;

    printf("Quarto serão valores do tipo double\n");
    for(i=0; i<3; i++)
    {
        printf("\nDigite o %d° número: ",i+1);
        scanf("%lf",&vetorDouble[i][1]);
    }
}

unsigned criaVetorUnsigned()
{
    int i;

    printf("Quinto serão valores do tipo unsingned\n");
    for(i=0; i<3; i++)
    {
        printf("\nDigite o %d° número: ",i+1);
        scanf("%u",&vetorUnsigned[i][1]);
    }
}

void imprimeVetores()
{
    int i,j=0,k=0;

    printf("        10        20        30        40        50\n");
    printf("12345678901234567890123456789012345678901234567890\n");

    for(i=0; i<6; i++)
    {
        if(i%2==0)
        {
            printf("%5d%21d%24u\n",vetorInt[j][1],vetorLong[j][1],vetorUnsigned[j][1]);
            j++;
        }
        else
        {
            printf("%17.1f%21.1lf\n",vetorFloat[k][1],vetorDouble[k][1]);
            k++;
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

        printf("Nosso programa recebera vários valores\n");
        criaVetorInt();
        criaVetorFloat();
        criaVetorLong();
        criaVetorDouble();
        criaVetorUnsigned();
        imprimeVetores();

        printf("\nDigite 1 se quiser executar novamente.");
        printf("\nPara encerrar o programa digite qualquer número.\n");
        scanf("%d", &result);
    }
    while (result == 1);
    return 0;
}
#endif // ex4
