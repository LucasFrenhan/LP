// Nomes: Ana Vitória França da Silva e Lucas Henrique Padilha Frenhan
// Professor: Rui
// Componente: Linguagem de Programação
// Data: 20/10/2022

#define ex3
#include<stdio.h>
#include<locale.h>

// ARRUMAR EX. 2


#ifdef ex1
/*  Exercício 1 - Escreva um programa com a estrutura de dados abaixo. Defina um vetor de
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
    setlocale (LC_ALL,"");

    struct local X[4];
    int i, result;

    do
    {
        system("cls");
        printf("Esse programa tem como objetivo receber e exibir um vetor de estruturas na tela.\n");

        for (i = 0; i < 4; i++)
        {

            printf("\nInsira o nome do usuário: ");
            gets(X[i].nome);

            printf("Insira o nome do endereço: ");
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
        printf("\nDigite 1 se quiser executar novamente.");
        printf("\nPara encerrar o programa digite qualquer número.\n");
        scanf("%d", &result);
    }
    while (result == 1);
}
#endif // ex1


#ifdef ex2
/*  Exercício 2 - Escreva um programa que tem uma estrutura da dados com os membros abaixo.
    Receba dados via teclado em uma funcao e imprima estes conteudos no video,
    em outra funcao, no seguinte formato.
    estrutura: char, int, long, float, double, unsigned char, unsigned int,
    unsigned long
            10        20        30        40        50        60        70
    1234567890123456789012345678901234567890123456789012345678901234567890
        char      int       long                float               double
              unsigned char       unsigned int        unsigned long */

struct dados{
    char nome;
    int inteiro;
    long longo;
    float real;
    double numero;
    unsigned char nomeSinal;
    unsigned int inteiroSinal;
    unsigned long longoSinal;
};

int main()
{
    setlocale (LC_ALL,"");
    struct dados Estrutura;
    int result;

    do
    {
        system("cls");
        printf("Esse programa tem como objetivo receber uma estrutura de dados no formato desejado.\n\n");

        printf("Digite um nome (8): ");
        gets(&Estrutura.nome);
        printf("Digite um número inteiro: ");
        scanf("%d",&Estrutura.inteiro);
        printf("Digite um número Longo: ");
        scanf("%ld",&Estrutura.longo);
        printf("Digite um número Real: ");
        scanf("%f",&Estrutura.real);
        printf("Digite um número Double: ");
        scanf("%lf",&Estrutura.numero);
        getchar();
        printf("Digite um número nome (8): ");
        gets(&Estrutura.nomeSinal);
        printf("Digite um número inteiro: ");
        scanf("%u",&Estrutura.inteiroSinal);
        printf("Digite um número Longo: ");
        scanf("%u",&Estrutura.longoSinal);
        printf("\n");


        printf("        10        20        30        40        50        60        70\n");
        printf("1234567890123456789012345678901234567890123456789012345678901234567890\n");
        printf("    %-3c       %-11d    %-11ld              %-11f%-22f\n",Estrutura.nome, Estrutura.inteiro, Estrutura.longo, Estrutura.real, Estrutura.numero);
        printf("          %-3u          %-11u          %-11lu",Estrutura.nomeSinal, Estrutura.inteiroSinal, Estrutura.longoSinal);

        printf("\nDigite 1 se quiser executar novamente.");
        printf("\nPara encerrar o programa digite qualquer número.\n");
        scanf("%d", &result);
    }
    while (result == 1);
}
#endif // ex2


#ifdef ex3
/*  Exercício 3 - Escreva um programa com a estrutura de dados abaixo. Defina um vetor de
    estrutura de 4 elementos. Receba dados via teclado e imprima-os no video.
    Faça um menu com as seguintes opcoes:
       1 - receber todos os dados
       2 - imprime todos os dados
       3 - calcula o IMC de todas as pessoas.
       4 - sair
    Calculo do IMC = peso/(altura*altura).
    Estrutura: nome, peso, altura */

struct dados {
    char nome[20];
    float peso;
    float altura;
};

int main()
{
    struct dados X[4];
    int i, opc;
    float imc[4];

    for(i = 0; i < 4; i++)
    {
        imc[i] = 0;
    }

    do
    {
        system("cls");
        printf("1 - Recebe dados\n");
        printf("2 - Imprime todos os dados\n");
        printf("3 - Calcula os dados\n");
        printf("4 - Sair\n");
        printf("Qual opção deseja realizar? ");
        scanf("%d", &opc);
        getchar();

        if (opc > 4)
        {
            printf("Opção inválida!\n");
        }

        switch(opc)
        {
        case 1:
            {
                for(i=0; i < 4; i++)
                {
                    printf("\nInsira o nome do paciente: ");
                    gets(X[i].nome);

                    printf("Insira o peso do paciente: ");
                    scanf("%f", &X[i].peso);


                    printf("Insira a altura do paciente: ");
                    scanf("%f", &X[i].altura);
                    getchar();
                }
            }
            break;
        case 2:
            {
                for(i=0; i < 4; i++)
                {
                    if(imc[i] != 0)
                    {
                        printf("\nO paciente: \t%s\ncom o peso: \t%g kilos\ne altura \t%g metros\ntem o IMC de: \t%g IMC\n", X[i].nome, X[i].peso, X[i].altura, imc[i]);
                    }
                    else
                    {
                        printf("\nNenhum dado foi inserido!\n");
                    }
                }
                system("pause");
            }
            break;
        case 3:
            {
                for(i=0; i < 4; i++)
                {
                    imc[i] = X[i].peso / (X[i].altura * X[i].altura);
                }
            }
            break;
        case 4:
            printf("Saindo...");
            break;
        }
    }
    while(opc != 4);
}
#endif // ex3

#ifdef ex4
/*  Exercício - 4 - Escreva um programa com a estrutura de dados abaixo. Receba 2 datas via
    teclado e calculo, o numero de dias entre elas e mostre o resultado no
    video. (vetor de estruturas = dia, mes, ano)
*/

struct dados{
    int dia;
    int mes;
    int ano;
};

int main()
{
    setlocale (LC_ALL,"");

    struct dados Datas[2];
    int i, determinaIdade, result;

    do
    {
        system("cls");
        printf("Esse programa tem como objetivo calcular o número de dias entre duas datas.\n");
        printf("Primeiro insira a data atual, em seguida a data mais antiga.\n");

        for(i = 0; i < 2; i++)
        {
            printf("\nDigite o dia: ");
            scanf("%d",&Datas[i].dia);
            printf("Digite o mês: ");
            scanf("%d",&Datas[i].mes);
            printf("Digite o ano: ");
            scanf("%d",&Datas[i].ano);
        }

        determinaIdade = 365 * Datas[0].ano + 30 * Datas[0].mes + Datas[0].dia - 365 * Datas[1].ano - 30 * Datas[1].mes - Datas[1].dia;

        if(determinaIdade < 0)
        {
            determinaIdade = determinaIdade * (-1);
        }

        printf("\nA diferença entre as datas em dias é de : %d dias\n",determinaIdade);
        printf("\nDigite 1 se quiser executar novamente.");
        printf("\nPara encerrar o programa digite qualquer número.\n");
        scanf("%d", &result);
    }
    while (result == 1);
}
#endif // ex4
