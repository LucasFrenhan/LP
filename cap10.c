/* Nome: Ana Vitória França da Silva e Lucas Henrique Padilha Frenhan
/* Semestre: Segundo Semestre de ADS - Manhã
/* Componente Curricular: Linguagem de Programação
/* Professor: Rui */

#define ex1
#include<stdio.h>
#include<locale.h>


#ifdef ex1
/*  Exercício 1 - Escreva um programa para criar e abrir um arquivo texto de nome "arq.txt".
    Receba via teclado diversos caracteres (um por vezes) e escreva-os
    nesse arquivo. O caracter '0' finaliza a entrada de dados. Abra o arquivo
    "arq.txt", leia e imprima na tela todos os caracteres armazenados no
    arquivo (um por vezes).
*/

int main()
{
    int result;

    do
    {
        FILE *arquivo;
        char c[1];

        system("cls");
        printf("Esse programa tem como objetivo ler e imprimir todos os caracteres armazenados no arquivo.\n");

        arquivo = fopen("arq.txt", "w");

        if (arquivo == NULL)
        {
            printf("\nArquivo não encontrado.");
            exit(0);
        }
        printf("\nPor favor, insira os caracteres: ");
        for(;;)
        {
            scanf("%c",&c[0]);
            if(c[0] == '0')
            {
                break;
            }
            fwrite(c,sizeof(c),1,arquivo);
        }
        fclose(arquivo);

        arquivo = fopen("arq.txt", "r");

        if (arquivo == NULL)
        {
            printf("\nArquivo não encontrado.");
            exit(0);
        }
        printf("\nExibindo os resultados...\n");
        int x;
        for(;;)
        {
            x = fread(c,sizeof(c),1,arquivo);
            printf("%s",c);

            if(x == 0)
            {
                break;
            }
        }
        fclose(arquivo);
        printf("\nDigite 1 se quiser executar novamente.");
        printf("\nPara encerrar o programa digite qualquer número.\n");
        scanf("%d", &result);
    }
    while (result == 1);
}
#endif // ex1


#ifdef ex2
/*  Exercício 2 - Escreva um programa para gerenciar uma agenda de contatos. Para cada contato
    armazene o nome, o telefone e o aniversario (dia e mes) em uma estrutura de
    dados. Utilize um vetor de estrutura de 4 elementos como variavel LOCAL na
    funcao main(). Utilize ponteiros para passar o vetor de estrutura para
    as funcoes. Sempre que o programa for encerrado, os contatos devem ser
    escritos no arquivo e quando o programa iniciar os contatos devem ser lidos
    do arquivo.
    O programa deve ter as seguintes opcoes:(cada opcao do menu e' um funcao)
    1 - inserir contato
    2 - altera contato
    3 - exclui contato
    4 - pesquisar um contato pelo nome
    5 - listar todos os contatos
    6 - listar os contatos cujo nome inicia com uma letra digitada
    7 - imprimir os aniversariantes do mês.
    8 - saida
*/


#endif // ex2

#ifdef ex3
/*  Exercício 3 - Escreva um programa para controle de um cadastro de clientes. Para cada
    registro sera' armazenado nome, end, cidade, estado, cep numa estrutura
    de dados. A unica estrutura de dados e' uma variavel LOCAL na funcao main().
    Escreva os registros direto no arquivo. (utilize a funcao fseek quando
    necessario). NAO pode usar vetor de estruturas. Utilize ponteiros para
    passar parametros para as funcoes.
    O programa deve ter as seguintes opcoes: (cada opcao do menu e' um funcao)
    1 - inclui registros
    2 - listar todos os registros
    3 - pesquisar registro pelo nome
    4 - altera registro
    5 - exclui registro
    6 - saida
*/

struct Cliente
{
    char cliente[20];
    char end[20];
    char cidade[20];
    char estado[3];
    char cep[10];
};

void incluiDados(struct Cliente *pR)
{
    FILE *arquivo;

    arquivo = fopen("registro.txt", "a");

    if (arquivo != NULL)
    {
        system("cls");
        printf("Digite o nome do cliente: ");
        gets(pR->cliente);
        printf("Digite o endereco do cliente: ");
        gets(pR->end);
        printf("Digite a cidade do cliente: ");
        gets(pR->cidade);
        printf("Digite o estado do cliente: ");
        gets(pR->estado);
        printf("Digite o CEP do cliente: ");
        gets(pR->cep);
        fwrite(pR, sizeof(*pR), 1, arquivo);
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

void listaDados(struct Cliente *pR)
{
    FILE *arquivo;

    int i, controle;

    arquivo = fopen("registro.txt", "r");

    if (arquivo != NULL)
    {
        system("cls");
        for (;;)
        {

            controle = fread(pR, sizeof(*pR), 1, arquivo);

            if(controle == 0)
            {
                break;
            }

            if(pR->cliente[0] != '#')
            {
                printf("\nNome do cliente: %s",pR->cliente);
                printf("\nEndereco: %s",pR->end);
                printf("\nCidade: %s",pR->cidade);
                printf("\nEstado: %s",pR->estado);
                printf("\nCEP: %s.",pR->cep);
                printf("\n");
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

void pesquisaDados(struct Cliente *pR)
{
    char nome[30];
    FILE *arquivo;
    int i, controle;

    printf("Digite o nome do cliente para pesquisar: ");
    gets(nome);

    arquivo = fopen("registro.txt", "r");

    if (arquivo != NULL)
    {
        system("cls");
        for (;;)
        {
            controle = fread(pR, sizeof(*pR), 1, arquivo);

            if(controle == 0)
            {
                break;
            }

            for(i = 0; nome[i] != '\0'; i++)
            {
                if(nome[i]!= pR->cliente[i])
                {
                    break;
                }
            }
            if(nome[i] == '\0' && pR->cliente[i] == '\0')
            {
                system("cls");
                printf("\nNome do cliente: %s",pR->cliente);
                printf("\nEndereco: %s",pR->end);
                printf("\nCidade: %s",pR->cidade);
                printf("\nEstado: %s",pR->estado);
                printf("\nCEP: %s.",pR->cep);
                printf("\n");
            }
        }
        printf("\n");
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

void alteraDados(struct Cliente *pR)
{
    char nome[30];
    FILE *arquivo;
    int i, controle, verifica = -1, posicao;

    printf("Digite o nome do cliente para pesquisar: ");
    gets(nome);

    arquivo = fopen("registro.txt", "r+");

    if (arquivo != NULL)
    {
        system("cls");
        for (;;)
        {
            controle = fread(pR, sizeof(*pR), 1, arquivo);

            if(controle == 0)
            {
                break;
            }

            for(i = 0; nome[i] != '\0'; i++)
            {
                if(nome[i] != pR->cliente[i])
                {
                    break;
                }
            }
            verifica++;
            if(nome[i] == '\0' && pR->cliente[i] == '\0')
            {
                break;
            }

        }
        if(verifica != -1)
        {
            posicao = verifica*sizeof(*pR);

            fseek(arquivo, posicao, 0);

            fread(pR, sizeof(*pR), 1, arquivo);

            system("cls");
            printf("Digite o nome do cliente: ");
            gets(pR->cliente);
            printf("Digite o endereco do cliente: ");
            gets(pR->end);
            printf("Digite a cidade do cliente: ");
            gets(pR->cidade);
            printf("Digite o estado do cliente: ");
            gets(pR->estado);
            printf("Digite o CEP do cliente: ");
            gets(pR->cep);

            fseek(arquivo, posicao, 0);
            fwrite(pR, sizeof(*pR), 1, arquivo);
        }
        system("cls");
        fclose(arquivo);
    }
    else
    {
        printf("\nArquivo não encontrado.");
        exit(0);
    }
}

void excluiDados(struct Cliente *pR)
{
    char nome[30];
    FILE *arquivo;
    int i, controle, verifica = -1,posicao;

    printf("Digite o nome do cliente para pesquisar: ");
    gets(nome);

    arquivo = fopen("registro.txt", "r+");

    if (arquivo != NULL)
    {
        system("cls");
        for (;;)
        {
            controle = fread(pR, sizeof(*pR), 1, arquivo);

            if(controle == 0)
            {
                break;
            }

            for(i = 0; nome[i] != '\0'; i++)
            {
                if(nome[i] != pR->cliente[i])
                {
                    break;
                }
            }
            verifica++;
            if(nome[i] == '\0' && pR->cliente[i] == '\0')
            {
                break;
            }
        }
        if(verifica != -1)
        {
            posicao = verifica*sizeof(*pR);

            fseek(arquivo, posicao, 0);

            fread(pR, sizeof(*pR), 1, arquivo);

            pR->cliente[0] = '#';

            fseek(arquivo, posicao, 0);
            fwrite(pR, sizeof(*pR), 1, arquivo);
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
    printf("\nSaindo...\n");
    printf("Obrigado por utilizar nosso programa!\n");
    exit(0);
}

int main()
{
    struct Cliente c;
    struct Cliente *pC = &c;

    int opc;

    do
    {
        printf("Esse programa tem como objetivo controlar o cadastro de clientes.\n\n");

        printf("1 - Incluir registros;\n");
        printf("2 - Listar todos os registros;\n");
        printf("3 - Pesquisar registro pelo nome;\n");
        printf("4 - Alterar registro;\n");
        printf("5 - Excluir registro;\n");
        printf("6 - Saida pelo usuario.\n");
        printf("\nDigite uma opcao: ");
        scanf("%d",&opc);
        getchar();

        switch (opc)
        {
        case 1:
        {
            system("cls");
            incluiDados(pC);
            break;
            case 2:
            {
                system("cls");
                listaDados(pC);
                break;
            }
            case 3:
            {
                system("cls");
                pesquisaDados(pC);
                break;

            }
            case 4:
            {
                system("cls");
                alteraDados(pC);
                break;
            }
            case 5:
            {
                system("cls");
                excluiDados(pC);
                break;
            }
            case 6:
                sair();
                break;
            default:
                printf("Opcao invalida.\n");
                break;
            }
        }
    }
    while (opc != 6);
}

#endif // ex3

#ifdef ex4
/*  Exercício 4 - Escreva um programa para o controle de mercadorias em uma despensa
    domestica. Para cada produto sera' armazenado um codigo numerico, nome
    do produto e quantidade atual numa estrutura de dados. A unica estrutura
    de dados deve ser declarada como variavel LOCAL na funcao main(). Escreva
    os itens das mercadorias direto no arquivo. (utilize a funcao fseek quando
    necessario). NAO pode usar vetor de estruturas. Utilize ponteiros.
    O programa deve ter as seguintes opcoes: (cada opcao do menu e' um funcao)
    1 - inclui produtos
    2 - altera produtos
    3 - exclui produtos
    4 - pesquisar uma mercadoria pela descrição
    5 - listar todos os produtos
    6 - listar os produtos não disponíveis.
    7 - alterar a quantidade atual
    8 - saida
*/
#endif // ex4
