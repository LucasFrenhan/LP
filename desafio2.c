#define ex1
#include "stdio.h"
#include "stdlib.h"

struct Show{
    char musica[30];
    char autor[30];
    int quantidade;
    float preco;
};


void sair()
{
    printf("Saindo...\n");
    printf("Obrigado por utilizar nosso programa\n");
    exit(0);
}

void entraDados(char *pMusica, char *pAutor, int *pQuantidade, float *pPreco)
{
    FILE *arquivo;

    arquivo = fopen("musica.txt", "w");

    if (arquivo != NULL)
    {
        printf("\nDigite o nome da musica: ");
        gets(pMusica);
        printf("\nDigite o nome do autor: ");
        gets(pAutor);
        printf("\nDigite a quantidade: ");
        scanf("%d",&pQuantidade);
        printf("\nDigite o valor: ");
        scanf("%f",&pPreco);
        fwrite(pMusica[0], sizeof(pMusica), 1, arquivo);
        fwrite(pAutor[0], sizeof(pAutor), 1, arquivo);
        fwrite(pQuantidade, sizeof(pQuantidade), 1, arquivo);
        fwrite(pPreco, sizeof(pPreco), 1, arquivo);
        fclose(arquivo);
    }

    else
    {
        printf("\nArquivo não encontrado");
    }
}

void listaMusica(char *pMusica, char *pAutor, int *pQuantidade, float *pPreco)
{
    FILE *arquivo;

    int i,controle;

    arquivo = fopen("musica.txt", "r");

    if (arquivo != NULL)
    {
        for (i=0;i<2;i++)
        {
            fread(pMusica, sizeof(pMusica), 1, arquivo);
            fread(pAutor, sizeof(pAutor), 1, arquivo);
            fread(pQuantidade, sizeof(pQuantidade), 1, arquivo);
            fread(pPreco, sizeof(pPreco), 1, arquivo);

            if(pMusica[0] != '#')
            {
                printf("\nNome: %s",pMusica);
                printf("\nAutor: %s",pAutor);
                printf("\nQuantidade: %d",pQuantidade);
                printf("\nPreco: %f",pPreco);
                controle++;
            }
        }

        if(controle == 0)
            printf("Nenhuma musica cadastrada\n");

        fclose(arquivo);
    }
}

void pesquisaMusica(char *pMusica, char *pAutor, int *pQuantidade, float *pPreco)
{
    char nome[30];
    FILE *arquivo;
    int i,controle=0;

    arquivo = fopen("musica.txt", "r");

    if (arquivo != NULL)
    {
        for (;;)
        {
            fread(pMusica, sizeof(pMusica), 1, arquivo);
            fread(pAutor, sizeof(pAutor), 1, arquivo);
            fread(pQuantidade, sizeof(pQuantidade), 1, arquivo);
            fread(pPreco, sizeof(pPreco), 1, arquivo);


            if(nome[i] == '\0' && pMusica[i] == '\0')
            {
                printf("\nA musica: %s", pMusica[i]);
                controle = 1;
                break;
            }
        }
    }
        if (controle == 0)
        {
            printf("\nNenhum musica foi encontrada\n");
        }
        fclose(arquivo);
}

void pesquisaAutor(char *pMusica, char *pAutor, int *pQuantidade, float *pPreco)
{


}

void pesquisPreco(char *pMusica, char *pAutor, int *pQuantidade, float *pPreco)
{


}

void alteraPreco(char *pMusica, char *pAutor, int *pQuantidade, float *pPreco)
{

}

void alteraDados(char *pMusica, char *pAutor, int *pQuantidade, float *pPreco)
{

}

void excluiDados(char *pMusica, char *pAutor, int *pQuantidade, float *pPreco)
{

}

void alteraQuantidade(char *pMusica, char *pAutor, int *pQuantidade, float *pPreco)
{

}



int main()
{

    struct Show shows;

    char *pMusica;
    char *pAutor;
    int *pQuantidade;
    float *pPreco;
    int opc;

    pMusica = &shows.musica[0];
    pAutor = &shows.autor[0];
    pQuantidade = &shows.quantidade;
    pPreco = &shows.preco;

    do
    {
        printf("\n1 - Entra dados da musica");
        printf("\n2 - Lista todos as musicas na tela");
        printf("\n3 - Pesquisar uma musica pelo nome completo");
        printf("\n4 - Pesquisar o autor pelo nome completo");
        printf("\n5 - Pesquisa musica por faixa de preco");
        printf("\n6 - Altera quantidade (entrada e saida) pesquisado pelo nome completo");
        printf("\n7 - Altera preco de uma música pesquisando pelo nome completo");
        printf("\n8 - Altera dados, pesquisando pelo nome completo");
        printf("\n9 - Exclui dados, pesquisando pelo nome completo");
        printf("\n10 - Saida pelo usuario");
        printf("\nDigite uma opcao:");
        scanf("%d",&opc);
        getchar();

         switch (opc)
        {
        case 1:
        {
            system("cls");
            entraDados(pMusica,pAutor,pQuantidade,pPreco);
            break;
        }
        case 2:
        {
            system("cls");
            listaMusica(pMusica,pAutor,pQuantidade,pPreco);
            break;
        }
        case 3:
        {
            system("cls");
            pesquisaMusica(pMusica,pAutor,pQuantidade,pPreco);
            break;
        }
        case 4:
        {
            system("cls");
            pesquisaAutor(pMusica,pAutor,pQuantidade,pPreco);
            break;
        }
        case 5:
        {
            system("cls");
            pesquisPreco(pMusica,pAutor,pQuantidade,pPreco);
            break;
        }

        case 6:
        {
            system("cls");
            alteraQuantidade(pMusica,pAutor,pQuantidade,pPreco);
            break;
        }
        case 7:
        {
            system("cls");
            alteraPreco(pMusica,pAutor,pQuantidade,pPreco);
            break;
        }

        case 8:
        {
            system("cls");
            alteraDados(pMusica,pAutor,pQuantidade,pPreco);
            break;
        }
        case 9:
        {
            system("cls");
            excluiDados(pMusica,pAutor,pQuantidade,pPreco);
            break;
        }
        case 10:
            sair();
            break;
        default:
            printf("Opcao invalida\n");
            break;
        }
    }
    while (opc != 10);
}
