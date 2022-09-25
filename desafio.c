#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

char filme[3][30], produtora[3][20];

int entradaDados()
{
    int i, resultado;
    FILE *arquivo;

    arquivo = fopen("filme.txt", "w");

    if (arquivo != NULL)
    {
        for (i = 0; i < 3; i++)
        {
            printf("\nDigite um filme:");
            scanf("%s", &filme[i]);
            printf("\nDigite a produtora:");
            scanf("%s", &produtora[i]);
            fwrite(filme, sizeof(filme), 1, arquivo);
            fwrite(produtora, sizeof(produtora), 1, arquivo);
        }
        fclose(arquivo);
    }

    else
    {
        printf("Arquivo não encontrado\n");
    }
}

void listaDados()
{
    int i, resultado;
    FILE *arquivo;

    arquivo = fopen("filme.txt", "r");

    if (arquivo != NULL)
    {
        for (i = 0; i < 3; i++)
        {
            fread(filme, sizeof(filme), 1, arquivo);
            printf("\n%s", filme);
            fread(produtora, sizeof(produtora), 1, arquivo);
            printf("\n%s", produtora);
        }
        fclose(arquivo);
    }

    else
    {
        printf("Arquivo não encontrado\n");
    }
}

void pesquisaFilme()
{
    int i, resultado;
    FILE *arquivo;
    char nome[30];

    printf("\nDigite o nome de um filme:");
    scanf("%s", &nome);
    for (i = 0; i < 3; i++)
    {
        if (nome[i] == filme[i])
        {
            arquivo = fopen("filme.txt", "r");

            printf("\nFilme encontrado");
            fread(filme, sizeof(filme), 1, arquivo);
            printf("\n%s", filme);
            fread(produtora, sizeof(produtora), 1, arquivo);
            printf("\n%s", produtora);
        }
        else
        {
            printf("\nFilme não encontrado!");
        }
    }
}

int main()
{
    setlocale(LC_ALL, "Portuguese");
    int opc, resultado;

    do
    {
        printf("\n1 - Entrada de dados\n");
        printf("2 - Lista todos os dados na tela\n");
        printf("3 - Pesquisa um filme com o nome completo\n");
        printf("4 - Pesquisa produtora pela 1° letra\n");
        printf("5 - Altera dados (pesquisa pelo filme completo)\n");
        printf("6 - Exclui dados (pesquisa pelo filme completo\n");
        printf("7 - Sair\n");
        printf("Escolha uma opção: ");
        scanf("%d", &opc);

        switch (opc)
        {
        case 1:
        {
            entradaDados();
            getchar();
            break;
        }
        case 2:
        {
            listaDados();
            getchar();
            break;
        }
        case 3:
        {
            pesquisaFilme();
            getchar();
            break;
        }
        case 4:
            printf("opc 4\n");
            break;
        case 5:
            printf("opc 5\n");
            break;
        case 6:
            printf("opc 6\n");
            break;
        case 7:
            printf("Saindo...\n");
            printf("Obrigado por utilizar nosso programa\n");
            exit(0);
            break;
        default:
            printf("Opção inválida\n");
            break;
        }
    } while (opc != 7);
}