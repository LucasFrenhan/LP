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
            scanf("%s", &filme[i][0]);
            printf("\nDigite a produtora:");
            scanf("%s", &produtora[i][0]);
            fwrite(filme[i], 1, sizeof(filme), arquivo);
            fwrite(produtora[i], 1, sizeof(produtora), arquivo);
        }
        exit(0);
        fclose(arquivo);
    }

    if (arquivo == NULL)
    {
        printf("Arquivo não encontrado\n");
        exit(1);
    }
}

int main()
{
    setlocale(LC_ALL, "Portuguese");
    int opc, resultado;

    do
    {
        printf("1 - Entrada de dados\n");
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
            resultado = entradaDados();
            getchar();
            break;
        case 2:
            printf("opc 2\n");
            break;
        case 3:
            printf("opc 3\n");
            break;
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
            printf("Saindo\n");
            printf("Obrigado por utilizar nosso programa\n");
            exit(0);
            break;

        default:
            printf("Opção inválida\n");
            break;
        }
    } while (opc != 7);
}