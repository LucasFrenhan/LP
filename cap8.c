/* Nome: Ana Vit�ria Fran�a da Silva e Lucas Henrique Padilha Frenhan
/* Semestre: Segundo Semestre de ADS - Manh�
/* Componente Curricular: Linguagem de Programa��o
/* Professor: Rui */

#define ex1
#include<stdio.h>
#include<locale.h>


#ifdef ex1
/*  Exerc�cio 1 - Receba 2 string de ate 10 caracteres via teclado na funcao main(). Fa�a uma
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
    setlocale (LC_ALL,"Portuguese");

    char *ponteiro1, *ponteiro2;
    int resultado, result;

    ponteiro1 = &nome1[0];
    ponteiro2 = &nome2[0];

    do
    {
        system("cls");
        printf("Esse programa tem como objetivo comparar duas strings.\n");

        printf("\nDigite o primeiro nome: ");
        gets(nome1);
        printf("Digite o segundo nome: ");
        gets(nome2);

        resultado = compara(ponteiro1, ponteiro2);
        if(resultado == 1)
        {
            printf("\nO resultado da compara��o entre strings: s�o iguais.");
        }
        else
        {
            printf("\nO resultado da compara��o entre strings: s�o diferentes.\n");
        }

        printf("\n\nDigite 1 se quiser executar novamente.");
        printf("\nPara encerrar o programa digite qualquer n�mero.\n");
        scanf("%d", &result);
        getchar();
    }
    while (result == 1);
}
#endif // ex1


#ifdef ex2
/*  Exerc�cio 2 - Escreva um programa que receba uma letra via teclado usando ponteiro. Escreva
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
    setlocale (LC_ALL,"Portuguese");

    int resultado, result;
    char *ponteiro;
    char a;

    ponteiro = &a;

    do
    {
        system("cls");
        printf("Esse programa tem como objetivo pesquisar uma informa��o no vetor com ponteiros.\n");

        printf("\nDigite uma letra qualquer: ");
        scanf("%c",&a);

        resultado = comparaLetra(ponteiro);

        if(resultado == 1)
        {
            printf("\nA letra existe no vetor.");
        }
        else
        {
            printf("\nA letra n�o existe no vetor.\n");
        }
        printf("\n\nDigite 1 se quiser executar novamente.");
        printf("\nPara encerrar o programa digite qualquer n�mero.\n");
        scanf("%d", &result);
        getchar();
    }
    while (result == 1);
}
#endif // ex2


#ifdef ex3
/*  Exerc�cio 3 - Escreva um programa que receba via teclado usando ponteiros um char,
    int, long, unsigned, float, double, unsigned long e unsigned char,
    e imprima-os no video utilizando ponteiros no seguinte formato:

            10        20        30        40        50        60
    123456789012345678901234567890123456789012345678901234567890
        int                 long                unsigned
                  float               double              char
             unsigned long       unsigned char
*/

struct dados {
    int inteiro;
    long longo;
    unsigned semSinal;
    float real;
    double numero;
    char nome;
    unsigned long longoSinal;
    unsigned char nomeSinal;
};

int main()
{
    setlocale (LC_ALL,"Portuguese");

    struct dados Estrutura;
    int result;

    do
    {
        system("cls");
        printf("Esse programa tem como objetivo receber uma estrutura de dados no formato desejado.\n\n");

        printf("Digite um n�mero int: ");
        scanf("%d",&Estrutura.inteiro);
        printf("Digite um n�mero long: ");
        scanf("%ld",&Estrutura.longo);
        printf("Digite um n�mero unsigned: ");
        scanf("%u",&Estrutura.semSinal);

        printf("Digite um n�mero float: ");
        scanf("%f",&Estrutura.real);
        printf("Digite um n�mero double: ");
        scanf("%lf",&Estrutura.numero);
        getchar();
        printf("Digite um n�mero char(7): ");
        scanf("%c",&Estrutura.nome);

        printf("Digite um n�mero long: ");
        scanf("%lu",&Estrutura.longoSinal);
        getchar();
        printf("Digite um n�mero unsigned char: ");
        scanf("%u",&Estrutura.nomeSinal);
        printf("\n");

        printf("        10        20        30        40        50        60\n");
        printf("123456789012345678901234567890123456789012345678901234567890\n");
        printf("    %d                   %ld                   %u\n",Estrutura.inteiro,Estrutura.longo,Estrutura.semSinal);
        printf("              %.2f                %.2lf                %c\n",Estrutura.real,Estrutura.numero,Estrutura.nome);
        printf("         %lu                   %u",Estrutura.longoSinal,Estrutura.nomeSinal);

        printf("\n");
        printf("\nDigite 1 se quiser executar novamente.");
        printf("\nPara encerrar o programa digite qualquer n�mero.\n");
        scanf("%d", &result);
        getchar();
    }
    while (result == 1);
}
#endif // ex3


#ifdef ex4
/*  Exerc�cio 4 - Escreva um programa que contenha uma estrutura representando uma data
    valida. Essa estrutura deve conter os campos dia, mes e ano. Em seguida,
    leia duas datas e armazene nessa estrutura usando ponteiros. Calcule e exiba
    o numero de dias que decorreram entre as duas datas usando ponteiros.
    Utilize um vetor de estruturas.
*/

struct dados{
    int dia;
    int mes;
    int ano;
};

int main()
{
    setlocale (LC_ALL,"Portuguese");

    struct dados Datas[2];
    struct dados *ponteiroData[2];

    int i = 0;
    int determina, result;

    ponteiroData[0] = &Datas[0];
    ponteiroData[1] = &Datas[1];

    do
    {
        system("cls");
        printf("Esse programa tem como objetivo exibir o n�mero de dias entre duas datas usando ponteiros.\n");

        for(i=0;i<2;i++)
        {
            printf("\nDigite o dia: ");
            scanf("%d",&ponteiroData[i]->dia);
            printf("Digite o m�s: ");
            scanf("%d",&ponteiroData[i]->mes);
            printf("Digite o ano: ");
            scanf("%d",&ponteiroData[i]->ano);
        }

        determina = 365 * (*ponteiroData[0]).ano + 30 * (*ponteiroData[0]).mes + (*ponteiroData[0]).dia - 365 * (*ponteiroData[1]).ano - 30 * (*ponteiroData[1]).mes - (*ponteiroData[1]).dia;

        if(determina < 0)
        {
            determina = determina * (-1);
        }
        printf("\nA diferen�a entre as datas em dias � de: %d dias.\n",determina);

        printf("\nDigite 1 se quiser executar novamente.");
        printf("\nPara encerrar o programa digite qualquer n�mero.\n");
        scanf("%d", &result);
        getchar();
    }
    while (result == 1);
}
#endif // ex4


#ifdef ex5
/*  Exerc�cio 5 - Com a estrutura abaixo, defina um vetor de estruturas de 4 elementos.
    Receba os dados via teclado numa funcao usando ponteiros. Imprima os dados
    recebidos no video numa usando ponteiros. Utilize um comando de loop.
    O vetor de estruturas de ser declarado como variavel global
       estrutura: nome, end, cidade, estado, cep
*/

struct dados
{
    char nome[20];
    char end[20];
    char cidade[20];
    char estado[3];
    char cep[10];
};

struct dados Locais[4];

int main()
{
    setlocale (LC_ALL,"Portuguese");

    int i = 0;
    int result;

    struct dados *ponteiro;
    ponteiro = &Locais[i];

    do
    {
        system("cls");
        printf("Esse programa tem como objetivo receber dados e imprimi-los na tela com a ajuda de ponteiros.\n");

        for(i = 0; i < 4; i++)
        {
            printf("\nDigite um nome: ");
            gets(&(ponteiro + i) -> nome[0]);
            printf("Digite endere�o: ");
            gets(&(ponteiro + i) -> end[0]);
            printf("Digite o nome da cidade: ");
            gets(&(ponteiro + i) -> cidade[0]);
            printf("Digite estado: ");
            gets(&(ponteiro + i) -> estado[0]);
            printf("Digite o CEP: ");
            gets(&(ponteiro + i) -> cep[0]);
        }

        for(i = 0; i < 4; i++)
        {
            printf("\n\tO nome: %s",(ponteiro + i) -> nome);
            printf("\n\tNo endere�o: %s",(ponteiro + i) -> end);
            printf("\n\tNa cidade: %s",(ponteiro + i) -> cidade);
            printf("\n\tNo estado: %s",(ponteiro + i) -> estado);
            printf("\n\tNo CEP: %s",(ponteiro + i) -> cep);
            printf("\n\t------------------------------------");
        }
        printf("\nDigite 1 se quiser executar novamente.");
        printf("\nPara encerrar o programa digite qualquer n�mero.\n");
        scanf("%d", &result);
        getchar();
    }
    while (result == 1);
}
#endif // ex5


#ifdef ex6
/*  Exerc�cio 6 - Escreva um programa que receba via teclado numeros inteiros positivos usando
    ponteiros. Quando o numero digitado for negativo o programa deve parar e calcula
    a media dos valores digitados e mostrar o resultado. Todos os calculos devem ser
    feitos usando ponteiro.
*/

int main()
{
    setlocale (LC_ALL,"Portuguese");

    int numero, soma = 0, result;
    int *ponteiroNum, *ponteiroSoma;
    float media,  contador = 0;
    float *ponteiroMedia, *ponteiroContador;

    ponteiroNum = &numero;
    ponteiroSoma = &soma;
    ponteiroContador = &contador;
    ponteiroMedia = &media;

    do
    {
        system("cls");
        printf("Esse programa tem como objetivo calcular a m�dia dos valores digitados quando for inserido um negativo.\n");

        do
        {
            printf("\nDigite um n�mero: ");
            scanf("%d",ponteiroNum);

            if(*(ponteiroNum) > 0)
            {
                *(ponteiroSoma) = *(ponteiroSoma) + *(ponteiroNum);
                *(ponteiroContador) = *(ponteiroContador) + 1;
            }
        }
        while (*(ponteiroNum) > 0);

        *(ponteiroMedia) = *(ponteiroSoma) / *(ponteiroContador);

        printf("\nA m�dia dos n�meros inteiros positivos �: %.2f\n", *ponteiroMedia);

        printf("\nDigite 1 se quiser executar novamente.");
        printf("\nPara encerrar o programa digite qualquer n�mero.\n");
        scanf("%d", &result);
        getchar();
    }
    while (result == 1);
}
#endif // ex6
