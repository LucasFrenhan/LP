#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

char filme[3][30], produtora[3][20];

void entradaDados()
{
    int i;
    FILE *arquivo;

    arquivo = fopen("filme.txt", "w");

    if (arquivo != NULL)
    {
        for (i = 0; i < 3; i++)
        {
            getchar();
            printf("\nDigite um filme:");
            gets(filme[i]);
            printf("\nDigite a produtora:");
            gets(produtora[i]);
            fwrite(filme[i], sizeof(filme[i]), 1, arquivo);
            fwrite(produtora[i], sizeof(produtora[i]), 1, arquivo);
        }
        fclose(arquivo);
    }

    else
    {
        printf("\nArquivo não encontrado");
    }
}

void listaDados()
{
    int i;
    FILE *arquivo;

    arquivo = fopen("filme.txt", "r");

    if (arquivo != NULL)
    {
        for (i = 0; i < 3; i++)
        {
            fread(filme[i], sizeof(filme[i]), 1, arquivo);
            printf("\nO filme:%s", filme[i]);
            fread(produtora[i], sizeof(produtora[i]), 1, arquivo);
            printf("\nDa produtora:%s", produtora[i]);
        }
        fclose(arquivo);
    }

    else
    {
        printf("Arquivo não encontrado\n");
    }
    fclose(arquivo);
}

void pesquisaFilme()
{
    int i, c, contador = 0, controle = 0;
    FILE *arquivo;
    char nome[30];

    arquivo = fopen("filme.txt", "r");

    if (arquivo != NULL)
    {
        for (i = 0; i < 3; i++)
        {
            fread(filme[i], sizeof(filme[i]), 1, arquivo);
            fread(produtora[i], sizeof(produtora[i]), 1, arquivo);
        }

        printf("\nDigite o nome de um filme:");
        gets(nome);

        for(i=0; i < 3; i++)
        {
            if(controle != 0)
            {
                break;
            }

            for (c = 0; filme[i][c] != '\0'; c++)
            {
                if (filme[i][c] != nome[c])
                {
                    break;
                }
                else
                {
                    controle++;
                }
            }
        }

        if (controle == 0)
        {
            printf("\nNenhum filme foi encontrado\n");
        }
        else
        {
            printf("\nO filme:%s", filme[i - 1]);
            printf("\nDa produtora:%s", produtora[i - 1]);
            printf("\n");
        }
    }
    else
    {
        printf("Arquivo não encontrado\n");
    }
    fclose(arquivo);
}

void pesquisaProdutora()
{
    int i, contador = 0;
    FILE *arquivo;
    char nome;

    arquivo = fopen("filme.txt", "r");

    if (arquivo != NULL)
    {
        for (i = 0; i < 3; i++)
        {
            fread(filme[i], sizeof(filme[i]), 1, arquivo);
            fread(produtora[i], sizeof(produtora[i]), 1, arquivo);
        }

        printf("\nDigite a primeira letra da produtora:");
        scanf("%c", &nome);

        for (i = 0; i < 3; i++)
        {
            if (nome == produtora[i][0])
            {
                printf("\nO filme:%s", filme[i]);
                printf("\nDa produtora:%s", produtora[i]);
                contador++;
            }
        }
        if (contador == 0)
        {
            printf("\nNenhuma produtora foi encontrada");
        }
    }
    else
    {
        printf("\nArquivo não encontrado");
    }
}

void sair()
{
    printf("Saindo...\n");
    printf("Obrigado por utilizar nosso programa\n");
    exit(0);
}

int main()
{
    setlocale(LC_ALL, "Portuguese");
    int opc;

    do
    {
        printf("\n1 - Entrada de dados\n");
        printf("2 - Lista todos os dados na tela\n");
        printf("3 - Pesquisa um filme com o nome completo\n");
        printf("4 - Pesquisa produtora pela 1° letra\n");
        printf("5 - Altera dados (pesquisa pelo filme completo)\n");
        printf("6 - Exclui dados (pesquisa pelo filme completo)\n");
        printf("7 - Sair\n");
        printf("Escolha uma opção: ");
        scanf("%d", &opc);
        getchar();

        switch (opc)
        {
        case 1:
        {
            system("cls");
            entradaDados();
            break;
        }
        case 2:
        {
            system("cls");
            listaDados();
            break;
        }
        case 3:
        {
            system("cls");
            pesquisaFilme();
            break;
        }
        case 4:
        {
            system("cls");
            pesquisaProdutora();
            break;
        }
        case 5:
            printf("opc 5\n");
            break;
        case 6:
            printf("opc 6\n");
            break;
        case 7:
            sair();
        default:
            printf("Opção inválida\n");
            break;
        }
    } while (opc != 7);
}
