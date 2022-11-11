// Nomes: Ana Vit�ria Fran�a da Silva e Lucas Henrique Padilha Frenhan
// Professor: Rui
// Componente: Linguagem de Programa��o
// Data: 03/11/2022

#define ex1
#include<stdio.h>
#include<locale.h>


#ifdef ex1
/*  Exerc�cio 1 - Escreva um programa que receba uma letra via teclado usando ponteiro. Escreva
    uma funcao que pesquise se esta letra existe no vetor abaixo usando ponteiros.
    Imprima o resultado da pesquisa no video na funcao main(). Passe como informacao
    para a funcao a letra digitada e o vetor usando ponteiros e faca a pesquisa
    usando ponteiros.(utilize o comando return).
    O vetor deve ser declarado como variavel LOCAL na funcao main().

    vetor -> b,d,f,h,j,k,m,o,q,s,u,w,y
*/

int main()
{
    setlocale (LC_ALL,"portuguese");

    int result;

    do
    {
        system("cls");

        printf("Esse programa tem como objetivo.......\n");

        printf("\nDigite 1 se quiser executar novamente.");
        printf("\nPara encerrar o programa digite qualquer n�mero.\n");
        scanf("%d", &result);
    }
    while (result == 1);
}
#endif // ex1


#ifdef ex2
/*  Exerc�cio 2 - Escreva um programa que receba em uma funcao 2 strings de ate' 10 caracteres
    passando como parametro um ponteiro.
    Os vetores devem ser declarados como variaveis LOCAIS na fun��o main().
    Escreva uma funcao para comparar as 2 strings. Passe como parametros para
    a funcao as 2 strings usando ponteiros e retorne como resultado se IGUAIS 1
    ou se DIFERENTES 0. Mostre o resultado no video na funcao main().
*/

int main()
{
    setlocale (LC_ALL,"portuguese");

    int result;

    do
    {
        system("cls");

        printf("Esse programa tem como objetivo.......\n");

        printf("\nDigite 1 se quiser executar novamente.");
        printf("\nPara encerrar o programa digite qualquer n�mero.\n");
        scanf("%d", &result);
    }
    while (result == 1);
}
#endif // ex2


#ifdef ex3
/*  Exerc�cio 3 - Escreva um programa que receba n valores via teclado e receba tambem a
    opera��o a ser executada. Quando for digitado "=" o programa deve mostrar
    o resultado acumulado dos n valores. As opera��es aritmeticas e a entrada
    de dados devem ser funcoes que recebe os valores usando ponteiros.
    As variaveis sao LOCAIS na funcao main().
*/

int main()
{
    setlocale (LC_ALL,"portuguese");

    int result;

    do
    {
        system("cls");

        printf("Esse programa tem como objetivo.......\n");

        printf("\nDigite 1 se quiser executar novamente.");
        printf("\nPara encerrar o programa digite qualquer n�mero.\n");
        scanf("%d", &result);
    }
    while (result == 1);
}
#endif // ex3


#ifdef ex4
/*  Exerc�cio 4 - Escreva um programa que tem uma estrutura da dados com os membros abaixo.
    A estrutura e' uma variavel LOCAL na funcao main().Receba via teclado o
    conteudo de cada um dos membros numa funcao e imprima-os no video no
    seguinte formato(tamb�m numa fun��o).

    estrutura: char, int, long, float, double, unsigned char, unsigned int,
    unsigned long

            10        20        30        40        50        60        70
    1234567890123456789012345678901234567890123456789012345678901234567890
        char      int       long                float               double
              unsigned char       unsigned int        unsigned long
*/

int main()
{
    setlocale (LC_ALL,"portuguese");

    int result;

    do
    {
        system("cls");

        printf("Esse programa tem como objetivo.......\n");

        printf("\nDigite 1 se quiser executar novamente.");
        printf("\nPara encerrar o programa digite qualquer n�mero.\n");
        scanf("%d", &result);
    }
    while (result == 1);
}
#endif // ex4


#ifdef ex5
/*  Exerc�cio 5 - Escreva um programa com a estrutura abaixo. Defina um vetor de estruturas
    de 4 elementos como variavel LOCAL na funcao main(). Receba os 4 registros
    sequencialmente pelo teclado numa fun��o e imprima todos os registros no
    video em outra funcao. Fa�a um menu. Utilize ponteiros nas funcoes.
    Coloque no menu a op��o de sair tambem. Utilize o comando switch.
    (vetor de estruturas)
    estutura: nome, end, cidade, estado, cep
*/

int main()
{
    setlocale (LC_ALL,"portuguese");

    int result;

    do
    {
        system("cls");

        printf("Esse programa tem como objetivo.......\n");

        printf("\nDigite 1 se quiser executar novamente.");
        printf("\nPara encerrar o programa digite qualquer n�mero.\n");
        scanf("%d", &result);
    }
    while (result == 1);
}
#endif // ex5


#ifdef ex6
/*  Exerc�cio 6 - Acrescente ao menu do exercicio anterior as funcoes de procura, altera e
    exclui um registro sempre usando ponteiros.
*/

int main()
{
    setlocale (LC_ALL,"portuguese");

    int result;

    do
    {
        system("cls");

        printf("Esse programa tem como objetivo.......\n");

        printf("\nDigite 1 se quiser executar novamente.");
        printf("\nPara encerrar o programa digite qualquer n�mero.\n");
        scanf("%d", &result);
    }
    while (result == 1);
}
#endif // ex6
