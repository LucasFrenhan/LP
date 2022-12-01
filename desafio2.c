/* Nome: Ana Vitória França da Silva e Lucas Henrique Padilha Frenhan
/* Semestre: Segundo Semestre de ADS - Manhã
/* Componente Curricular: Linguagem de Programação
/* Professor: Rui */

#include "stdio.h"
#include "stdlib.h"

struct Show
{
    char musica[30];
    char autor[30];
    int quantidade;
    float preco;
};


void entraDados(struct Show *pShow)
{
    FILE *arquivo;

    arquivo = fopen("musica.txt", "a");

    if (arquivo != NULL)
    {
        system("cls");
        printf("\nDigite o nome da musica: ");
        gets(pShow->musica);
        printf("\nDigite o nome do autor: ");
        gets(pShow->autor);
        printf("\nDigite a quantidade: ");
        scanf("%d",&pShow->quantidade);
        printf("\nDigite o valor: ");
        scanf("%f",&pShow->preco);
        getchar();
        fwrite(pShow, sizeof(*pShow), 1, arquivo);
        system("pause");
        system("cls");
        fclose(arquivo);
    }
    else
    {
        printf("\nArquivo não encontrado.");
        exit(0);
    }
}

void listaMusica(struct Show *pShow)
{
    FILE *arquivo;

    int i,controle;

    arquivo = fopen("musica.txt", "r");

    if (arquivo != NULL)
    {
        system("cls");
        for (;;)
        {

            controle = fread(pShow, sizeof(*pShow), 1, arquivo);

            if(controle == 0)
            {
                break;
            }

            if(pShow->musica[0] != '#' && pShow->quantidade!=0)
            {
                printf("\nNome da musica: %s",pShow->musica);
                printf("\nAutor: %s",pShow->autor);
                printf("\nQuantidade: %d",pShow->quantidade);
                printf("\nPreco: %.2f\n",pShow->preco);
            }
        }
        system("pause");
        system("cls");
        fclose(arquivo);
    }
    else
    {
        printf("\nArquivo não encontrado.");
        exit(0);
    }
}

void pesquisaMusica(struct Show *pShow)
{
    char nome[30];
    FILE *arquivo;
    int i,controle;

    printf("\nDigite o nome da musica para pesquisar: ");
    gets(nome);

    arquivo = fopen("musica.txt", "r");

    if (arquivo != NULL)
    {
        system("cls");
        for (;;)
        {
            controle = fread(pShow, sizeof(*pShow), 1, arquivo);

            if(controle == 0)
            {
                break;
            }

            for(i = 0; nome[i] != '\0'; i++)
            {
                if(nome[i]!=pShow->musica[i])
                {
                    break;
                }
            }
            if(nome[i] == '\0' && pShow->musica[i] == '\0')
            {
                system("cls");
                printf("\nA musica: %s",pShow->musica);
                printf("\nO autor: %s",pShow->autor);
                printf("\nA quantidade: %d",pShow->quantidade);
                printf("\nO valor: %.2f\n",pShow->preco);
            }

        }
        system("pause");
        system("cls");
        fclose(arquivo);
    }
    else
    {
        printf("\nArquivo não encontrado.");
        exit(0);
    }
}

void pesquisaAutor(struct Show *pShow)
{
    char nome[30];
    FILE *arquivo;
    int i,controle;

    printf("\nDigite o nome do autor para pesquisar: ");
    gets(nome);

    arquivo = fopen("musica.txt", "r");

    if (arquivo != NULL)
    {
        system("cls");
        for (;;)
        {
            controle = fread(pShow, sizeof(*pShow), 1, arquivo);

            if(controle == 0)
            {
                break;
            }

            for(i = 0; nome[i] != '\0'; i++)
            {
                if(nome[i]!=pShow->autor[i])
                {
                    break;
                }
            }
            if(nome[i] == '\0' && pShow->autor[i] == '\0')
            {
                system("cls");
                printf("\nA musica: %s",pShow->musica);
                printf("\nO autor: %s",pShow->autor);
                printf("\nA quantidade: %d",pShow->quantidade);
                printf("\nO valor: %.2f\n",pShow->preco);
            }
        }
        system("pause");
        system("cls");
        fclose(arquivo);
    }
    else
    {
        printf("\nArquivo não encontrado.");
        exit(0);
    }
}

void pesquisaPreco(struct Show *pShow)
{
    float valor;
    FILE *arquivo;
    int i,controle;

    printf("\nDigite o valor do show para pesquisar: ");
    scanf("%f",&valor);

    arquivo = fopen("musica.txt", "r");

    if (arquivo != NULL)
    {
        system("cls");
        for (;;)
        {
            controle = fread(pShow, sizeof(*pShow), 1, arquivo);

            if(controle == 0)
            {
                break;
            }

            if(valor==pShow->preco)
            {
                printf("\nA musica: %s",pShow->musica);
                printf("\nO autor: %s",pShow->autor);
                printf("\nA quantidade: %d",pShow->quantidade);
                printf("\nO valor: %.2f\n",pShow->preco);
            }
        }
        system("pause");
        system("cls");
        fclose(arquivo);
    }
    else
    {
        printf("\nArquivo não encontrado.");
        exit(0);
    }
}

void alteraQuantidade(struct Show *pShow)
{
    char nome[30];
    FILE *arquivo;
    int i,controle,verifica=-1,posicao;

    printf("\nDigite o nome da musica para pesquisar: ");
    gets(nome);

    arquivo = fopen("musica.txt", "r+");

    if (arquivo != NULL)
    {
        system("cls");
        for (;;)
        {
            controle = fread(pShow, sizeof(*pShow), 1, arquivo);

            if(controle == 0)
            {
                break;
            }

            for(i = 0; nome[i] != '\0'; i++)
            {
                if(nome[i]!=pShow->musica[i])
                {
                    break;
                }
            }
            verifica++;
            if(nome[i] == '\0' && pShow->musica[i] == '\0')
            {
                break;
            }
        }
        if(verifica != -1)
        {
            posicao = verifica*sizeof(*pShow);

            fseek(arquivo, posicao, 0);

            fread(pShow, sizeof(*pShow), 1, arquivo);

            printf("\nDigite a nova quantidade: ");
            scanf("%d",&pShow->quantidade);

            fseek(arquivo, posicao, 0);
            fwrite(pShow, sizeof(*pShow), 1, arquivo);
        }
        fclose(arquivo);
    }
    else
    {
        printf("\nArquivo não encontrado.");
        exit(0);
    }
}

void alteraPreco(struct Show *pShow)
{
    char nome[30];
    FILE *arquivo;
    int i,controle,verifica=-1,posicao;
    float preco;

    printf("\nDigite o nome da musica para pesquisar: ");
    gets(nome);

    arquivo = fopen("musica.txt", "r+");

    if (arquivo != NULL)
    {
        system("cls");
        for (;;)
        {
            controle = fread(pShow, sizeof(*pShow), 1, arquivo);

            if(controle == 0)
            {
                break;
            }
            for(i = 0; nome[i] != '\0'; i++)
            {
                if(nome[i]!=pShow->musica[i])
                {
                    break;
                }
            }
            verifica++;
            if(nome[i] == '\0' && pShow->musica[i] == '\0')
            {
                break;
            }
        }
        if(verifica != -1)
        {
            posicao = verifica*sizeof(*pShow);

            fseek(arquivo, posicao, 0);

            fread(pShow, sizeof(*pShow), 1, arquivo);

            printf("\nDigite a nova quantidade: ");
            scanf("%f",&pShow->preco);

            fseek(arquivo, posicao, 0);
            fwrite(pShow, sizeof(*pShow), 1, arquivo);
        }
        fclose(arquivo);
    }
    else
    {
        printf("\nArquivo não encontrado.");
        exit(0);
    }
}

void alteraDados(struct Show *pShow)
{
    char nome[30];
    FILE *arquivo;
    int i,controle,verifica=-1,posicao;

    printf("\nDigite o nome da musica para pesquisar: ");
    gets(nome);

    arquivo = fopen("musica.txt", "r+");

    if (arquivo != NULL)
    {
        system("cls");
        for (;;)
        {
            controle = fread(pShow, sizeof(*pShow), 1, arquivo);

            if(controle == 0)
            {
                break;
            }

            for(i = 0; nome[i] != '\0'; i++)
            {
                if(nome[i]!=pShow->musica[i])
                {
                    break;
                }
            }
            verifica++;
            if(nome[i] == '\0' && pShow->musica[i] == '\0')
            {
                break;
            }

        }
        if(verifica != -1)
        {
            posicao = verifica*sizeof(*pShow);

            fseek(arquivo, posicao, 0);

            fread(pShow, sizeof(*pShow), 1, arquivo);

            system("cls");
            printf("\nDigite o nome da musica: ");
            gets(pShow->musica);
            printf("\nDigite o nome do autor: ");
            gets(pShow->autor);
            printf("\nDigite a quantidade: ");
            scanf("%d",&pShow->quantidade);
            printf("\nDigite o valor: ");
            scanf("%f",&pShow->preco);
            getchar();

            fseek(arquivo, posicao, 0);
            fwrite(pShow, sizeof(*pShow), 1, arquivo);
        }
        fclose(arquivo);
    }
    else
    {
        printf("\nArquivo não encontrado.");
        exit(0);
    }
}

void excluiDados(struct Show *pShow)
{
    char nome[30];
    FILE *arquivo;
    int i,controle,verifica=-1,posicao;

    printf("\nDigite o nome da musica para pesquisar: ");
    gets(nome);

    arquivo = fopen("musica.txt", "r+");

    if (arquivo != NULL)
    {
        system("cls");
        for (;;)
        {
            controle = fread(pShow, sizeof(*pShow), 1, arquivo);

            if(controle == 0)
            {
                break;
            }

            for(i = 0; nome[i] != '\0'; i++)
            {
                if(nome[i]!=pShow->musica[i])
                {
                    break;
                }
            }
            verifica++;
            if(nome[i] == '\0' && pShow->musica[i] == '\0')
            {
                break;
            }
        }
        if(verifica != -1)
        {
            posicao = verifica*sizeof(*pShow);

            fseek(arquivo, posicao, 0);

            fread(pShow, sizeof(*pShow), 1, arquivo);

            pShow->musica[0] = '#';

            fseek(arquivo, posicao, 0);
            fwrite(pShow, sizeof(*pShow), 1, arquivo);
        }
        fclose(arquivo);
    }
    else
    {
        printf("\nArquivo não encontrado.");
        exit(0);
    }
}


void sair()
{
    printf("\n        Saindo...\n");
    printf("        Obrigado por utilizar nosso programa!\n");
    exit(0);
}

int main()
{
    struct Show shows;

    struct Show *pShow=&shows;

    int opc;

    do
    {
        printf("         *** SEJA BEM VINDO AO DESAFIO!! ***\n");
        printf("\n");
        printf("\n\t1  - Entra dados da musica");
        printf("\n\t2  - Lista todos as musicas na tela");
        printf("\n\t3  - Pesquisar uma musica pelo nome completo");
        printf("\n\t4  - Pesquisar o autor pelo nome completo");
        printf("\n\t5  - Pesquisa musica por faixa de preco");
        printf("\n\t6  - Altera quantidade (entrada e saida) pesquisado pelo nome completo");
        printf("\n\t7  - Altera preco de uma musica pesquisando pelo nome completo");
        printf("\n\t8  - Altera dados, pesquisando pelo nome completo");
        printf("\n\t9  - Exclui dados, pesquisando pelo nome completo");
        printf("\n\t10 - Saida pelo usuario");
        printf("\n");
        printf("\n\tDigite uma opcao: ");
        scanf("%d",&opc);
        getchar();

        switch (opc)
        {
        case 1:
        {
            system("cls");
            entraDados(pShow);
            break;
        }
        case 2:
        {
            system("cls");
            listaMusica(pShow);
            break;
        }
        case 3:
        {
            system("cls");
            pesquisaMusica(pShow);
            break;
        }
        case 4:
        {
            system("cls");
            pesquisaAutor(pShow);
            break;
        }
        case 5:
        {
            system("cls");
            pesquisaPreco(pShow);
            break;
        }

        case 6:
        {
            system("cls");
            alteraQuantidade(pShow);
            break;
        }
        case 7:
        {
            system("cls");
            alteraPreco(pShow);
            break;
        }

        case 8:
        {
            system("cls");
            alteraDados(pShow);
            break;
        }
        case 9:
        {
            system("cls");
            excluiDados(pShow);
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
