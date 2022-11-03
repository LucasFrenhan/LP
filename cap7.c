// Nomes: Ana Vitória França da Silva e Lucas Henrique Padilha Frenhan
// Professor: Rui
// Componente: Linguagem de Programação
// Data: 20/10/2022

#define ex2
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
    setlocale (LC_ALL,"");

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
struct dados{
    char nome[9];
    int inteiro;
    long longo;
    float real;
    double numero;
    unsigned char nomeSinal[9];
    unsigned int inteiroSinal;
    unsigned long longoSinal;
};
int main()
{
    setlocale (LC_ALL,"");
    struct dados Estrutura;

    printf("Digite um nome (8): \n");
    gets(Estrutura.nome);
    printf("Digite um número inteiro: \n");
    scanf("%d",&Estrutura.inteiro);
   /* printf("Digite um número Longo: \n");
    scanf("%d",&Estrutura.longo);
    printf("Digite um número Real: \n");
    scanf("%d",&Estrutura.real);
    printf("Digite um número Double: \n");
    scanf("%d",&Estrutura.numero);
    printf("Digite um número nome (8): \n");
    scanf("%d",&Estrutura.nomeSinal);
    printf("Digite um número inteiro: \n");
    scanf("%d",&Estrutura.inteiroSinal);
    printf("Digite um número Longo: \n");
    scanf("%d",&Estrutura.longoSinal);*/


    printf("        10        20        30        40        50        60        70\n");
    printf("1234567890123456789012345678901234567890123456789012345678901234567890\n");
    printf("%8s %8d",Estrutura.nome, Estrutura.inteiro);

}
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
                    printf("Insira o nome do paciente: ");
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
                        printf("O paciente: \t%s\ncom o peso: \t%g kilos\ne altura \t%g metros\ntem o IMC de: \t%g IMC\n", X[i].nome, X[i].peso, X[i].altura, imc[i]);
                    }
                    else
                    {
                        printf("\nNenhum dado foi inserido!");
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
/* Exercício - 4 - Escreva um programa com a estrutura de dados abaixo. Receba 2 datas via
    teclado e calculo, o numero de dias entre elas e mostre o resultado no
    video. (vetor de estruturas)
                dia, mes, ano
*/
int main()
{
    setlocale (LC_ALL,"");

}
#endif // ex4


