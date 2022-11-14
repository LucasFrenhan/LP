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
    printf("\nDigite o nome da musica: ");
    gets(pMusica);
    getchar();
    printf("\nDigite o nome do autor: ");
    gets(pAutor);
    getchar();
    printf("\nDigite a quantidade: ");
    scanf("%d",&pQuantidade);
    getchar();
    printf("\nDigite o valor: ");
    scanf("%f",&pPreco);
}

void listaMusica(char *pMusica, char *pAutor, int *pQuantidade, float *pPreco)
{
    printf("\nnome: %s",pMusica);
    printf("\nautor: %s",pAutor);
    printf("\nquantidae: %d",pQuantidade);
    printf("\npreco: %f",pPreco);

}

void pesquisaMusica()
{


}

void pesquisaAutor()
{


}

void pesquisPreco()
{


}

void alteraPreco()
{

}

void alteraDados()
{

}

void excluiDados()
{

}

void alteraQuantidade()
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
            pesquisaMusica();
            break;
        }
        case 4:
        {
            system("cls");
            pesquisaAutor();
            break;
        }
        case 5:
        {
            system("cls");
            pesquisPreco();
            break;
        }

        case 6:
        {
            system("cls");
            alteraQuantidade();
            break;
        }
        case 7:
        {
            system("cls");
            alteraPreco();
            break;
        }

        case 8:
        {
            system("cls");
            alteraDados();
            break;
        }
        case 9:
        {
            system("cls");
            excluiDados();
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
