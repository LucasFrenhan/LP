// Nomes: Ana Vitória França da Silva e Lucas Henrique Padilha Frenhan
// Professor: Rui
// Componente: Linguagem de Programação
// Data: 20/10/2020

#define ex3
#include<stdio.h>
#include<locale.h>

#ifdef ex1
/* 1 - Escreva um programa com a estrutura de dados abaixo. Defina um vetor de
       estruturas de 4 elementos. Receba os dados pelo teclado e imprima-os no
       video. Faça um menu. (vetor de estruturas)
       estrutura: nome, end, cidade, estado, cep */

struct local{
    char nome[20];
    char end[20];
    char cidade[20];
    char estado[3];
    char cep[10];
};

int main()
{
    struct local X[4];
    int i;

    for (i = 0; i < 4; i++)
    {

    printf("Insira o nome do usuário: ");
    gets(X[i].nome);

    printf("Insir o nome do endereço: ");
    gets(X[i].end);

    printf("Insira o nome da cidade: ");
    gets(X[i].cidade);

    printf("Insira o nome do estado: ");
    gets(X[i].estado);

    printf("Insira o nome do CEP: ");
    gets(X[i].cep);
    printf("\n");
    }

    printf("Recebendo os dados...\n");

    for (i = 0; i < 4; i++)
    {
    printf("%s, ", X[i].nome);
    printf("%s, ", X[i].end);
    printf("%s - ", X[i].cidade);
    printf("%s, ", X[i].estado);
    printf("%s.", X[i].cep);
    printf("\n");
    }
}
#endif // ex1

#ifdef ex2
/* 2 - Escreva um programa que tem uma estrutura da dados com os membros abaixo.
       Receba dados via teclado em uma funcao e imprima estes conteudos no video,
       em outra funcao, no seguinte formato.
       estrutura: char, int, long, float, double, unsigned char, unsigned int,
       unsigned long

            10        20        30        40        50        60        70
    1234567890123456789012345678901234567890123456789012345678901234567890
        char      int       long                float               double
              unsigned char       unsigned int        unsigned long */
#endif // ex2

#ifdef ex3
/* 3 - Escreva um programa com a estrutura de dados abaixo. Defina um vetor de
       estrutura de 4 elementos. Receba dados via teclado e imprima-os no video.
       Faça um menu com as seguintes opcoes:
        1 - receber todos os dados
        2 - imprime todos os dados
        3 - calcula o IMC de todas as pessoas.
        4 - sair
       Calculo do IMC = peso/(altura*altura).
       Estrutura: nome, peso, altura */

struct dados {


};

#endif // ex3
