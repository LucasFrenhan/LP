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
            printf("\nDigite o nome do  filme: ");
            gets(filme[i]);
            printf("Digite o nome da produtora: ");
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
    int i, controle = 0;
    FILE *arquivo;

    arquivo = fopen("filme.txt", "r");

    if (arquivo != NULL)
    {
        for (i = 0; i < 3; i++)
        {
            fread(filme[i], sizeof(filme[i]), 1, arquivo);
            fread(produtora[i], sizeof(produtora[i]), 1, arquivo);

            if(filme[i][0] != '#')
            {
                printf("\nO filme: %s", filme[i]);
                printf("\nDa produtora: %s\n", produtora[i]);
                controle++;
            }
        }

        if(controle == 0)
            printf("Nenhum filme cadastrado\n");

        fclose(arquivo);
    }

    else
    {
        printf("Arquivo não encontrado\n");
    }
}

void pesquisaFilme()
{
    int i, c, controle = 0;
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

        printf("\nDigite o nome de um filme: ");
        gets(nome);

        for(i=0; i < 3; i++)
        {
            for (c = 0; nome[c] != '\0'; c++)
            {
                if ( nome[c] != filme[i][c] )
                {
                    controle = 0;
                    break;
                }
            }
            if(nome[c] == '\0' && filme[i][c] == '\0')
            {
                printf("\nO filme: %s", filme[i]);
                printf("\nDa produtora: %s\n", produtora[i]);
                controle = 1;
                break;
            }
        }
        if (controle == 0)
        {
            printf("\nNenhum filme foi encontrado\n");
        }
        fclose(arquivo);
    }
    else
    {
        printf("Arquivo não encontrado\n");
    }
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
                printf("\nO filme: %s", filme[i]);
                printf("\nDa produtora: %s", produtora[i]);
                contador++;
            }
        }
        if (contador == 0)
        {
            printf("\nNenhuma produtora foi encontrada");
        }
        fclose(arquivo);
    }
    else
    {
        printf("\nArquivo não encontrado");
    }
}

void alteraDados()
{
    int i, c, j, controle = 0;
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

        printf("\nDigite o nome do filme que deseja alterar: ");
        gets(nome);

        for(i=0; i < 3; i++)
        {
            for (c = 0; nome[c] != '\0'; c++)
            {
                if ( nome[c] != filme[i][c] )
                {
                    controle = 0;
                    break;
                }
            }
            if(nome[c] == '\0' && filme[i][c] == '\0')
            {
                arquivo = fopen("filme.txt", "w");

                printf("\nO novo nome do filme: ");
                gets(nome);

                for(j=0; nome[j]!='\0'; j++)
                {
                    filme[i][j] = nome[j];
                }
                filme[i][j] = '\0';
                printf("\nO novo nome da produtora: ");
                gets(nome);
                for(j=0; nome[j]!='\0'; j++)
                {
                    produtora[i][j] = nome[j];
                }
                produtora[i][j] = '\0';

                fwrite(filme[0], sizeof(filme[0]), 1, arquivo);
                fwrite(produtora[0], sizeof(produtora[0]), 1, arquivo);
                fwrite(filme[1], sizeof(filme[1]), 1, arquivo);
                fwrite(produtora[1], sizeof(produtora[1]), 1, arquivo);
                fwrite(filme[2], sizeof(filme[2]), 1, arquivo);
                fwrite(produtora[2], sizeof(produtora[2]), 1, arquivo);
                controle = 1;
                break;
            }
        }
        if (controle == 0)
        {
            printf("\nNenhum filme foi encontrado\n");
        }
        fclose(arquivo);
    }
    else
    {
        printf("Arquivo não encontrado\n");
    }
}

void excluiDados()
{
    int i, c, controle = 0;
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

        printf("\nDigite o nome de um filme: ");
        gets(nome);

        for(i=0; i < 3; i++)
        {
            for (c = 0; nome[c] != '\0'; c++)
            {
                if ( nome[c] != filme[i][c] )
                {
                    controle = 0;
                    break;
                }
            }
            if(nome[c] == '\0' && filme[i][c] == '\0')
            {
                arquivo = fopen("filme.txt", "w");
                filme[i][0] = '#';

                fwrite(filme[0], sizeof(filme[0]), 1, arquivo);
                fwrite(produtora[0], sizeof(produtora[0]), 1, arquivo);
                fwrite(filme[1], sizeof(filme[1]), 1, arquivo);
                fwrite(produtora[1], sizeof(produtora[1]), 1, arquivo);
                fwrite(filme[2], sizeof(filme[2]), 1, arquivo);
                fwrite(produtora[2], sizeof(produtora[2]), 1, arquivo);
                controle = 1;
                break;
            }
        }
        if (controle == 0)
        {
            printf("\nNenhum filme foi encontrado\n");
        }
    }
    else
    {
        printf("Arquivo não encontrado\n");
    }
    fclose(arquivo);
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
        printf("\n****************************************************");
        printf("\n[1] - Entrada de dados\n");
        printf("[2] - Lista todos os dados na tela\n");
        printf("[3] - Pesquisa um filme com o nome completo\n");
        printf("[4] - Pesquisa produtora pela 1° letra\n");
        printf("[5] - Altera dados (pesquisa pelo filme completo)\n");
        printf("[6] - Exclui dados (pesquisa pelo filme completo)\n");
        printf("[7] - Sair\n");
        printf("****************************************************");
        printf("\nEscolha uma opção: ");
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
        {
            system("cls");
            alteraDados();
            break;
        }

        case 6:
        {
            system("cls");
            excluiDados();
            break;
        }
        case 7:
            sair();
        default:
            printf("Opção inválida\n");
            break;
        }
    }
    while (opc != 7);
}
