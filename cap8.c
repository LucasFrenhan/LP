// Nomes: Ana Vitória França da Silva e Lucas Henrique Padilha Frenhan
// Professor: Rui
// Componente: Linguagem de Programação
// Data: 02/11/2022

#define ex6
#include<stdio.h>
#include<locale.h>

#ifdef ex1

/*
1 - Receba 2 string de ate 10 caracteres via teclado na funcao main(). Faça uma
    funcao para compara-las usando ponteiros e retorne como resultado se
    sao IGUAIS 1 ou se sao DIFERENTES 0 para a funcao main().
    Imprima o resultado na funcao main(). (Declare os vetores como variavel global) //
*/

int compara(char *ponteiro1, char *ponteiro2)
{
    int i;

    for(i = 0; *(ponteiro1 + i) != '\0' ; i++)
    {
        if(*(ponteiro1 + i) != *(ponteiro2 + i))
        {
            break;
        }
    }
    if(*(ponteiro1 + i) == '\0' && *(ponteiro2 + i) == '\0')
        return 1;
    else
        return 0;
}

char nome1[10], nome2[10];

int main()
{
    setlocale (LC_ALL,"");


    char *ponteiro1, *ponteiro2;
    int resultado;

    ponteiro1 = &nome1[0];
    ponteiro2 = &nome2[0];

    printf("Digite o primeiro nome: ");
    gets(nome1);
    printf("Digite o segundo nome: ");
    gets(nome2);

    resultado = compara(ponteiro1, ponteiro2);
    if(resultado == 1)
    {
        printf("\nO resultado da comparação entre strings: são iguais");
    }
    else
    {
        printf("\nO resultado da comparação entre strings: são diferentes");
    }
}
#endif // ex1


#ifdef ex2

/*
    2 - Escreva um programa que receba uma letra via teclado usando ponteiro. Escreva
    uma funcao que pesquise esta letra existe no vetor abaixo usando ponteiros.
    Imprima o resultado da pesquisa no video na funcao main(). Passe como informacao
    para a funcao a letra digitada usando ponteiros.(utilize o comando return).
    O vetor deve ser declarado como variavel global.

    vetor -> b,d,f,h,j,k,m,o,q,s,u,w,y
*/

char vetor[14] = {'b','d','f','h','j','k','m','o','q','s','u','w','y'};

int comparaLetra(char *ponteiro)
{
    int i;

    for (i = 0; vetor[i] != '\0'; i++)
    {
        if (*(ponteiro) == vetor[i])
        {
            return 1;
        }
    }
    return 0;
}

int main()
{
    setlocale (LC_ALL,"");

    int resultado;
    char *ponteiro;
    char a;

    ponteiro=&a;

    printf("Digite uma letra qualquer: ");
    scanf("%c",&a);

    resultado = comparaLetra(ponteiro);

    if(resultado == 1)
    {
        printf("\nA letra existe no vetor.");
    }
    else
    {
        printf("\nA letra não existe no vetor.");
    }
}
#endif // ex2

#ifdef ex3

/*
    3 - Escreva um programa que receba via teclado usando ponteiros um char,
    int, long, unsigned, float, double, unsigned long e unsigned char,
    e imprima-os no video utilizando ponteiros no seguinte formato:

            10        20        30        40        50        60
    123456789012345678901234567890123456789012345678901234567890
        int                 long                unsigned
                  float               double              char
             unsigned long       unsigned char
*/

int main()
{
    setlocale (LC_ALL,"");



}
#endif // ex3


#ifdef ex4

/*
    4 - Escreva um programa que contenha uma estrutura representando uma data
    valida. Essa estrutura deve conter os campos dia, mes e ano. Em seguida,
    leia duas datas e armazene nessa estrutura usando ponteiros. Calcule e exiba
    o numero de dias que decorreram entre as duas datas usando ponteiros.
    Utilize um vetor de estruturas.
*/


int main()
{
    setlocale (LC_ALL,"");



}
#endif // ex4


#ifdef ex5

/*
    5 - Com a estrutura abaixo, defina um vetor de estruturas de 4 elementos.
    Receba os dados via teclado numa funcao usando ponteiros. Imprima os dados
    recebidos no video numa usando ponteiros. Utilize um comando de loop.
    O vetor de estruturas de ser declarado como variavel global
       estrutura: nome, end, cidade, estado, cep
*/

struct dados{
    char nome[20];
    char end[20];
    char cidade[20];
    char estado[3];
    char cep[10];
};

struct dados Locais[4];

int main()
{
    setlocale (LC_ALL,"");

    int i = 0;

    struct dados *ponteiro;
    ponteiro = &Locais[i];

    for(i = 0; i < 4; i++)
    {
        printf("Digite um nome: ");
        gets(&(ponteiro + i) -> nome[0]);
        printf("Digite endereço: ");
        gets(&(ponteiro + i) -> end[0]);
        printf("Digite o nome da cidade: ");
        gets(&(ponteiro + i) -> cidade[0]);
        printf("Digite estado: ");
        gets(&(ponteiro + i) -> estado[0]);
        printf("Digite o CEP: ");
        gets(&(ponteiro + i) -> cep[0]);
        printf("------------------------------------\n");
    }

    for(i = 0; i < 4; i++)
    {
        printf("\n\tO nome: %s",(ponteiro + i) -> nome);
        printf("\n\tNo endereço: %s",(ponteiro + i) -> end);
        printf("\n\tNa cidade: %s",(ponteiro + i) -> cidade);
        printf("\n\tNo estado: %s",(ponteiro + i) -> estado);
        printf("\n\tNo CEP: %s",(ponteiro + i) -> cep);
        printf("\n\t------------------------------------");
    }
}
#endif // ex5


#ifdef ex6

/*
    6 - Escreva um programa que receba via teclado numeros inteiros positivos usando
    ponteiros. Quando o numero digitado for negativo o programa deve parar e calcula
    a media dos valores digitados e mostrar o resultado. Todos os calculos devem ser
    feitos usando ponteiro.
*/


int main()
{
    setlocale (LC_ALL,"");

    int numero, soma = 0;
    int *ponteiroNum, *ponteiroSoma;
    float media,  contador = 0;
    float *ponteiroMedia, *ponteiroContador;

    ponteiroNum = &numero;
    ponteiroSoma = &soma;
    ponteiroContador = &contador;
    ponteiroMedia = &media;

    do
        {
            printf("\nDigite um número: ");
            scanf("%d",ponteiroNum);

            if(*(ponteiroNum) > 0)
            {
                *(ponteiroSoma) = *(ponteiroSoma) + *(ponteiroNum);
                *(ponteiroContador) = *(ponteiroContador) + 1;
            }
        }
        while (*(ponteiroNum) > 0);

        *(ponteiroMedia) = *(ponteiroSoma) / *(ponteiroContador);

        printf("\nA média dos números inteiros positivos é: %.2f\n", *ponteiroMedia);

}
#endif // ex6
