/* Nome: Ana Vitória França da Silva e Lucas Henrique Padilha Frenhan
/* Semestre: Segundo Semestre de ADS - Manhã
/* Componente Curricular: Linguagem de Programação
/* Professor: Rui */

#define ex3
#include<stdio.h>
#include<locale.h>


#ifdef ex1
/*  Exercício 1 - Escreva um programa que receba uma letra via teclado usando ponteiro. Escreva
    uma funcao que pesquise se esta letra existe no vetor abaixo usando ponteiros.
    Imprima o resultado da pesquisa no video na funcao main(). Passe como informacao
    para a funcao a letra digitada e o vetor usando ponteiros e faca a pesquisa
    usando ponteiros.(utilize o comando return).
    O vetor deve ser declarado como variavel LOCAL na funcao main().

    vetor -> b,d,f,h,j,k,m,o,q,s,u,w,y
*/

int comparaLetra(char *letra, char *pvetor)
{
    int i;

    for (i = 0; pvetor[i] != '\0'; i++)
    {
        if (letra == pvetor[i])
        {
            return 1;
        }
    }
    return 0;
}

int main()
{
    setlocale (LC_ALL,"portuguese");

    char vetor[14] = {'b','d','f','h','j','k','m','o','q','s','u','w','y'};
    char letra;

    char *pletra;
    char *pvetor[14];

    int i, resultado, result;

    pletra = &letra;
    for (i=0;i<14;i++)
    {
        pvetor[i] = &vetor[i];
    }

    do
    {
        system("cls");
        printf("Esse programa tem como objetivo pesquisar uma informação no vetor com ponteiros.\n");

        printf("\nDigite a letra desejada: ");
        scanf("%c",&letra);

        resultado = comparaLetra(letra,pvetor);

        if(resultado == 1)
        {
            printf("\nA letra existe no vetor.");
        }
        else
        {
            printf("\nA letra não existe no vetor.\n");
        }


    printf("\nDigite 1 se quiser executar novamente.");
    printf("\nPara encerrar o programa digite qualquer número.\n");
    scanf("%d", &result);
    getchar();
}
while (result == 1);
}
#endif // ex1


#ifdef ex2
/*  Exercício 2 - Escreva um programa que receba em uma funcao 2 strings de ate' 10 caracteres
    passando como parametro um ponteiro.
    Os vetores devem ser declarados como variaveis LOCAIS na função main().
    Escreva uma funcao para comparar as 2 strings. Passe como parametros para
    a funcao as 2 strings usando ponteiros e retorne como resultado se IGUAIS 1
    ou se DIFERENTES 0. Mostre o resultado no video na funcao main().
*/

int recebaStrings(char *string1, char *string2)
{
    printf("\nDigite o primeiro nome: ");
    gets(string1);
    printf("Digite o segundo nome: ");
    gets(string2);
}

int comparaStrings(char *string1, char *string2)
{
    int i;

    for(i = 0; *(string1 + i)!= '\0'; i++)
    {
        if(*(string1 + i) != *(string2 + i))
        {
            break;
        }
    }
    if(*(string1 + i) == '\0' && *(string2 + i) == '\0')
        return 1;
    else
        return 0;
}

int main()
{
    char nome1[10], nome2[10];

    setlocale (LC_ALL,"portuguese");

    char *string1, *string2;
    int resultado1, resultado2, result;

    string1 = &nome1[0];
    string2 = &nome2[0];

    do
    {
        system("cls");
        printf("Esse programa tem como objetivo comparar duas strings.\n");

        resultado1 = recebaStrings(string1, string2);
        resultado2 = comparaStrings(string1, string2);

        if(resultado2 == 1)
        {
            printf("\nO resultado da comparação entre strings: são iguais.");
        }
        else
        {
            printf("\nO resultado da comparação entre strings: são diferentes.\n");
        }

        printf("\nDigite 1 se quiser executar novamente.");
        printf("\nPara encerrar o programa digite qualquer número.\n");
        scanf("%d", &result);
        getchar();
    }
    while (result == 1);
}
#endif // ex2


#ifdef ex3
/*  Exercício 3 - Escreva um programa que receba n valores via teclado e receba tambem a
    operação a ser executada. Quando for digitado "=" o programa deve mostrar
    o resultado acumulado dos n valores. As operações aritmeticas e a entrada
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
        printf("\nPara encerrar o programa digite qualquer número.\n");
        scanf("%d", &result);
    }
    while (result == 1);
}
#endif // ex3


#ifdef ex4
/*  Exercício 4 - Escreva um programa que tem uma estrutura da dados com os membros abaixo.
    A estrutura e' uma variavel LOCAL na funcao main().Receba via teclado o
    conteudo de cada um dos membros numa funcao e imprima-os no video no
    seguinte formato(também numa função).

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
        printf("\nPara encerrar o programa digite qualquer número.\n");
        scanf("%d", &result);
    }
    while (result == 1);
}
#endif // ex4


#ifdef ex5
/*  Exercício 5 - Escreva um programa com a estrutura abaixo. Defina um vetor de estruturas
    de 4 elementos como variavel LOCAL na funcao main(). Receba os 4 registros
    sequencialmente pelo teclado numa função e imprima todos os registros no
    video em outra funcao. Faça um menu. Utilize ponteiros nas funcoes.
    Coloque no menu a opção de sair tambem. Utilize o comando switch.
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
        printf("\nPara encerrar o programa digite qualquer número.\n");
        scanf("%d", &result);
    }
    while (result == 1);
}
#endif // ex5


#ifdef ex6
/*  Exercício 6 - Acrescente ao menu do exercicio anterior as funcoes de procura, altera e
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
        printf("\nPara encerrar o programa digite qualquer número.\n");
        scanf("%d", &result);
    }
    while (result == 1);
}
#endif // ex6
