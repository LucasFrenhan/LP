#define ex3

#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

/***************************

			EXERCICIOS

***************************
OBS.: Todos os programa devem ser finalizados pelo usuario.






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

5 - Receba via teclado 10 valores inteiros e ordene por ordem crescente assim
    que sao digitados. Guarde-os em um vetor. Mostre ao final os valores ordenados.
*/

#ifdef ex1
/* Exercício 1 - Escreva um programa que receba um vetor de tamanho 10 e o decomponha em dois
   outros vetores. Um contera' as componentes de ordem impar e o outro contera'
   as componentes de ordem par. Por exemplo, se o vetor dado for v = {3, 5, 6, 8, 1, 4, 2, 3, 7},
   o programa deve gerar os vetores u = {3, 6, 1, 2, 7} e w = {5, 8, 4, 3}. */

int v[] = {3, 5, 6, 8, 1, 4, 2, 3, 7};

int main()
{
    setlocale (LC_ALL,"portuguese");
    int i,vetorPar[5],vetorImpar[4],j=0,k=0;

    for (i=0;i<9;i++)
    {
        if(i%2==0)
        {
            vetorPar[j]=v[i];
            j++;
        }
        else
        {
            vetorImpar[k]=v[i];
            k++;
        }
    }

    printf("\nVetor dos indices que será convertido [");
    for (i=0;i<10;i++)
    {
        if(i<9)
        {
            printf("%d, ",v[i]);
        }
        else
        {
            printf("%d",v[i]);
        }

    }
    printf("]\n");

    printf("\nVetor dos indices pares[");
    for(j=0;j<5;j++)
    {
        if(j<4)
        {
            printf("%d, ",vetorPar[j]);
        }
        else
        {
            printf("%d",vetorPar[j]);
        }

    }
    printf("]\n");

     printf("\nVetor dos indices impares[");
     for(k=0;k<5;k++)
    {
        if(k<4)
        {
            printf("%d, ",vetorImpar[k]);
        }
        else
        {
            printf("%d",vetorImpar[k]);
        }
    }
    printf("]\n");
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


#endif // ex4
