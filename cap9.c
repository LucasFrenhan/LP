/* Nome: Ana Vitória França da Silva e Lucas Henrique Padilha Frenhan
/* Semestre: Segundo Semestre de ADS - Manhã
/* Componente Curricular: Linguagem de Programação
/* Professor: Rui */

#define ex1
#include<stdio.h>
#include<locale.h>

// EX. 1 TA RUIM E O EX. 3 PRECISA FINALIZAR

#ifdef ex1
/*  Exercício 1 - Escreva um programa que receba uma letra via teclado usando ponteiro. Escreva
    uma funcao que pesquise se esta letra existe no vetor abaixo usando ponteiros.
    Imprima o resultado da pesquisa no video na funcao main(). Passe como informacao
    para a funcao a letra digitada e o vetor usando ponteiros e faca a pesquisa
    usando ponteiros.(utilize o comando return).
    O vetor deve ser declarado como variavel LOCAL na funcao main().

    vetor -> b,d,f,h,j,k,m,o,q,s,u,w,y
*/

int comparaLetra(char *letra, char *pvetor)
{
    int i;

    for (i = 0; pvetor[i] != '\0'; i++)
    {
        if (letra == pvetor[i])
        {
            return 1;
        }
    }
    return 0;
}

int main()
{
    setlocale (LC_ALL,"");

    char vetor[14] = {'b','d','f','h','j','k','m','o','q','s','u','w','y'};
    char letra;

    char *pletra;
    char *pvetor[14];

    int i, resultado, result;

    pletra = &letra;
    for (i = 0; i < 14; i++)
    {
        pvetor[i] = &vetor[i];
    }

    do
    {
        system("cls");
        printf("Esse programa tem como objetivo pesquisar uma informação no vetor com ponteiros.\n");

        printf("\nDigite a letra desejada: ");
        scanf("%c",&letra);

        resultado = comparaLetra(letra,pvetor);

        if(resultado == 1)
        {
            printf("\nA letra existe no vetor.");
        }
        else
        {
            printf("\nA letra não existe no vetor.\n");
        }

    printf("\nDigite 1 se quiser executar novamente.");
    printf("\nPara encerrar o programa digite qualquer número.\n");
    scanf("%d", &result);
    getchar();
}
while (result == 1);
}
#endif // ex1


#ifdef ex2
/*  Exercício 2 - Escreva um programa que receba em uma funcao 2 strings de ate' 10 caracteres
    passando como parametro um ponteiro.
    Os vetores devem ser declarados como variaveis LOCAIS na função main().
    Escreva uma funcao para comparar as 2 strings. Passe como parametros para
    a funcao as 2 strings usando ponteiros e retorne como resultado se IGUAIS 1
    ou se DIFERENTES 0. Mostre o resultado no video na funcao main().
*/

int recebaStrings(char *string1, char *string2)
{
    printf("\nDigite o primeiro nome: ");
    gets(string1);
    printf("Digite o segundo nome: ");
    gets(string2);
}

int comparaStrings(char *string1, char *string2)
{
    int i;

    for(i = 0; *(string1 + i)!= '\0'; i++)
    {
        if(*(string1 + i) != *(string2 + i))
        {
            break;
        }
    }
    if(*(string1 + i) == '\0' && *(string2 + i) == '\0')
        return 1;
    else
        return 0;
}

int main()
{
    char nome1[10], nome2[10];

    setlocale (LC_ALL,"");

    char *string1, *string2;
    int resultado1, resultado2, result;

    string1 = &nome1[0];
    string2 = &nome2[0];

    do
    {
        system("cls");
        printf("Esse programa tem como objetivo comparar duas strings.\n");

        resultado1 = recebaStrings(string1, string2);
        resultado2 = comparaStrings(string1, string2);

        if(resultado2 == 1)
        {
            printf("\nO resultado da comparação entre strings: são iguais.");
        }
        else
        {
            printf("\nO resultado da comparação entre strings: são diferentes.\n");
        }

        printf("\n\nDigite 1 se quiser executar novamente.");
        printf("\nPara encerrar o programa digite qualquer número.\n");
        scanf("%d", &result);
        getchar();
    }
    while (result == 1);
}
#endif // ex2


#ifdef ex3
/*  Exercício 3 - Escreva um programa que receba n valores via teclado e receba tambem a
    operação a ser executada. Quando for digitado "=" o programa deve mostrar
    o resultado acumulado dos n valores. As operações aritmeticas e a entrada
    de dados devem ser funcoes que recebe os valores usando ponteiros.
    As variaveis sao LOCAIS na funcao main().
*/

float soma(float *pA, float *pB)
{
    float resposta;

    resposta = pA + pB;
    return resposta;
}

float sub(float *pA, float *pB)
{
    float resposta;

    resposta = pA - pB;
    return resposta;
}

float mult(float *pA, float *pB)
{
    float resposta;

    resposta = pA * pB;
    return resposta;
}

float div(float *pA, float *pB)
{
    float resposta;

    resposta = pA / pB;
    return resposta;
}

int main()
{
    setlocale (LC_ALL,"");

    char result;
    float a, b;
    float *pA, *pB;

    pA = &a;
    pB = &b;

    printf("Esse programa tem como objetivo receber dois valores e realizar operações aritméticas.\n");
    printf("\nDigite o primeiro número: ");
    scanf("%f",&a);

    do
    {
        printf("\nQual operação desejar fazer? ( +, -, *, /) \n");
        printf("(+) - para somar\n");
        printf("(-) - para subtrair\n");
        printf("(*) - para multiplicar\n");
        printf("(/) - para dividir\n");
        printf("(=)- para resultado\n");
        printf("Digite 0 para sair.\n");
        scanf("%c", &result);

        switch(result)
        {
        case '+':
        {
            printf("\nDigite o segundo número: \n");
            scanf("%f",&b);
            a = soma(&pA,&pB);
            break;
        }
        case '-':
        {
            printf("\nDigite o segundo número: \n");
            scanf("%f",&b);
            pA = sub(pA,pB);
            break;
        }
        case '*':
        {
            printf("\nDigite o segundo número: \n");
            scanf("%f",&pB);
            pA = mult(pA,pB);
            break;
        }
        case '/':
        {
            printf("\nDigite o segundo número: \n");
            scanf("%f",&pB);
            pA = div(pA,pB);
            break;
        }
        case '=':
        {
            printf("O resultado é: %.2f.", pA);

        }
        case '0':
        {
            printf("Saindo...");
            break;
        }
        default:
            printf("Opção inválida! Tente novamente");
            break;
        }
    }
    while(result == '=');
}
#endif // ex3


#ifdef ex4
/*  Exercício 4 - Escreva um programa que tem uma estrutura da dados com os membros abaixo.
    A estrutura e' uma variavel LOCAL na funcao main().Receba via teclado o
    conteudo de cada um dos membros numa funcao e imprima-os no video no
    seguinte formato(também numa função).

    estrutura: char, int, long, float, double, unsigned char, unsigned int,
    unsigned long

            10        20        30        40        50        60        70
    1234567890123456789012345678901234567890123456789012345678901234567890
        char      int       long                float               double
              unsigned char       unsigned int        unsigned long
*/

struct dados2 {
    char nome;
    int inteiro;
    long longo;
    float real;
    double numero;
    unsigned char nomeSinal;
    unsigned int inteiroSinal;
    unsigned long longoSinal;
};

void recebeDados(struct dados2 *pEstrutura)
{
    printf("Digite um número char: ");
    scanf("%c",&pEstrutura -> nome);
    printf("Digite um número int: ");
    scanf("%d",&pEstrutura -> inteiro);
    printf("Digite um número long: ");
    scanf("%ld",&pEstrutura -> longo);
    printf("Digite um número float: ");
    scanf("%f",&pEstrutura -> real);
    printf("Digite um número double: ");
    scanf("%lf",&pEstrutura -> numero);
    getchar();

    printf("Digite um número unsigned char: ");
    scanf("%u",&pEstrutura -> nomeSinal);
    printf("Digite um número unsigned int: ");
    scanf("%u",&pEstrutura -> inteiroSinal);
    printf("Digite um número unsigned long: ");
    scanf("%u",&pEstrutura -> longoSinal);
    printf("\n");
}

void printaDados(struct dados2 *pEstrutura)
{
    printf("        10        20        30        40        50        60        70\n");
    printf("1234567890123456789012345678901234567890123456789012345678901234567890\n");
    printf("    %c         %d         %d                   %.2f                %.2lf\n",pEstrutura->nome, pEstrutura->inteiro, pEstrutura->longo, pEstrutura->real, pEstrutura->numero);
    printf("          %u                   %u                   %lu",pEstrutura->nomeSinal, pEstrutura->inteiroSinal, pEstrutura->longoSinal);
}

int main()
{
    setlocale (LC_ALL,"");

    int result;

    struct dados2 Estrutura;
    struct dados2 *pEstrutura = &Estrutura;

    do
    {
        system("cls");

        printf("Esse programa tem como objetivo receber uma estrutura de dados no formato desejado.\n");

        recebeDados(&pEstrutura);
        printaDados(&pEstrutura);

        printf("\n\nDigite 1 se quiser executar novamente.");
        printf("\nPara encerrar o programa digite qualquer número.\n");
        scanf("%d", &result);
    }
    while (result == 1);
}
#endif // ex4


#ifdef ex5
/*  Exercício 5 - Escreva um programa com a estrutura abaixo. Defina um vetor de estruturas
    de 4 elementos como variavel LOCAL na funcao main(). Receba os 4 registros
    sequencialmente pelo teclado numa função e imprima todos os registros no
    video em outra funcao. Faça um menu. Utilize ponteiros nas funcoes.
    Coloque no menu a opção de sair tambem. Utilize o comando switch.
    (vetor de estruturas)
    estutura: nome, end, cidade, estado, cep.
*/

struct local{
    char nome[20];
    char end[20];
    char cidade[20];
    char estado[3];
    char cep[10];
};

void recebeDados(struct local *pLocais)
{
    int i;

    for (i = 0; i < 4; i++)
    {
    printf("\nInsira o nome do usuário: ");
    gets((pLocais+i)->nome);

    printf("Insira o nome do endereço: ");
    gets((pLocais+i)->end);

    printf("Insira o nome da cidade: ");
    gets((pLocais+i)->cidade);

    printf("Insira o nome do estado: ");
    gets((pLocais+i)->estado);

    printf("Insira o nome do CEP: ");
    gets((pLocais+i)->cep);
    printf("\n");
    }
}

void printaDados(struct local *pLocais)
{
    int i;

    for (i = 0; i < 4; i++)
    {
    printf("%s, ", (pLocais+i)->nome);
    printf("%s, ", (pLocais+i)->end);
    printf("%s - ",(pLocais+i)->cidade);
    printf("%s, ", (pLocais+i)->estado);
    printf("%s.", (pLocais+i)->cep);
    printf("\n");
    }
}

int main()
{
    setlocale (LC_ALL,"");

    int i, result;

    struct local Locais[4];
    struct local *pLocais;
    pLocais = &Locais[0];

    do
    {
        printf("Esse programa tem como objetivo receber e imprimir 4 registros.\n");

        printf("1 - Entra dados;\n");
        printf("2 - Imprime dados;\n");
        printf("3 - Sair.\n");
        printf("\nEscolha uma opção: ");
        scanf("%d", &result);
        getchar();

        switch(result)
        {
        case 1:
            {
                system("cls");
                printf("Recebendo os dados...\n");
                recebeDados(pLocais);
                break;
            }
            case 2:
            {
                system("cls");
                printf("Imprimindo os dados...\n");
                printaDados(pLocais);
                break;
            }
            case 3:
            {
                system("cls");
                printf("Saindo...");
                break;
            }
            default:
                printf("Opção inválida! Tente novamente.");
                break;
        }
    }
    while (result != 3);
}
#endif // ex5


#ifdef ex6
/*  Exercício 6 - Acrescente ao menu do exercicio anterior as funcoes de procura, altera e
    exclui um registro sempre usando ponteiros.
*/

struct local
{
    char nome[20];
    char end[20];
    char cidade[20];
    char estado[3];
    char cep[10];
};

void recebeDados(struct local *pLocais)
{
    int i;

    for (i = 0; i < 4; i++)
    {
        printf("\nInsira o nome do usuário: ");
        gets((pLocais+i)->nome);

        printf("Insira o nome do endereço: ");
        gets((pLocais+i)->end);

        printf("Insira o nome da cidade: ");
        gets((pLocais+i)->cidade);

        printf("Insira o nome do estado: ");
        gets((pLocais+i)->estado);

        printf("Insira o nome do CEP: ");
        gets((pLocais+i)->cep);
        printf("\n");
    }
}

void printaDados(struct local *pLocais)
{
    int i;

    for (i = 0; i < 4; i++)
    {
        if ((pLocais+i) -> nome[0] != '#')
        {
            printf("%s, ", (pLocais+i)->nome);
            printf("%s, ", (pLocais+i)->end);
            printf("%s - ",(pLocais+i)->cidade);
            printf("%s, ", (pLocais+i)->estado);
            printf("%s.", (pLocais+i)->cep);
            printf("\n");
        }
    }
}

void procuraDados(struct local *pLocais)
{
    int i, j;
    char pessoa[20];

    printf("Digite o nome da pessoa: ");
    gets(pessoa);

    for (j = 0; j < 4; j++)
    {
        for (i = 0; pessoa[i] != '\0'; i++)
        {
            if (pessoa[i] != (pLocais+j)->nome[i])
            {
                break;
            }
        }
        if (pessoa[i] == '\0' && (pLocais+j)->nome[i] == '\0')
        {
            printf("%s, ", (pLocais+j)->nome);
            printf("%s, ", (pLocais+j)->end);
            printf("%s - ",(pLocais+j)->cidade);
            printf("%s, ", (pLocais+j)->estado);
            printf("%s.", (pLocais+j)->cep);
            printf("\n");
        }
    }
}

void alteraDados(struct local *pLocais)
{
    int i, j;
    char pessoa[20];

    printf("Digite o nome da pessoa: ");
    gets(pessoa);

    for (j = 0; j < 4; j++)
    {
        for (i = 0; pessoa[i] != '\0'; i++)
        {
            if (pessoa[i] != (pLocais+j)->nome[i])
            {
                break;
            }
        }
        if (pessoa[i] == '\0' && (pLocais+j)->nome[i] == '\0')
        {
            printf("\nInsira o nome do usuário: ");
            gets((pLocais+j)->nome);

            printf("Insira o nome do endereço: ");
            gets((pLocais+j)->end);

            printf("Insira o nome da cidade: ");
            gets((pLocais+j)->cidade);

            printf("Insira o nome do estado: ");
            gets((pLocais+j)->estado);

            printf("Insira o nome do CEP: ");
            gets((pLocais+j)->cep);
            printf("\n");
        }
    }
}

void excluiDados(struct local *pLocais)
{
    int i, j;
    char pessoa[20], resposta;

    printf("Digite o nome da pessoa: ");
    gets(pessoa);

    for (j = 0; j < 4; j++)
    {
        for (i = 0; pessoa[i] != '\0'; i++)
        {
            if (pessoa[i] != (pLocais+j)->nome[i])
            {
                break;
            }
        }
        if (pessoa[i] == '\0' && (pLocais+j)->nome[i] == '\0')
        {
            printf("Tem certeza que deseja excluir os dados? (s/n) ");
            scanf("%c", &resposta);
            if (resposta == 's')
            {
                (pLocais+j)->nome[0] = '#';
            }
            printf("\n");
        }
    }
}

int main()
{
    setlocale (LC_ALL,"");

    int i, result;

    struct local Locais[4];
    struct local *pLocais;
    pLocais = &Locais[0];

    printf("Esse programa tem como objetivo receber, imprimir, alterar e excluir 4 registros.\n");
    do
    {
        printf("\n1 - Entra dados;\n");
        printf("2 - Imprime dados;\n");
        printf("3 - Procura dados;\n");
        printf("4 - Altera dados;\n");
        printf("5 - Exclui dados;\n");
        printf("6 - Sair.\n");
        printf("\nEscolha uma opção: ");
        scanf("%d", &result);
        getchar();

        switch(result)
        {
        case 1:
            {
                system("cls");
                printf("Recebendo os dados...\n");
                recebeDados(pLocais);
                break;
            }
            case 2:
            {
                system("cls");
                printf("Imprimindo os dados...\n");
                printaDados(pLocais);
                break;
            }
            case 3:
            {
                system("cls");
                procuraDados(pLocais);
                break;
            }
            case 4:
            {
                system("cls");
                alteraDados(pLocais);
                break;
            }
            case 5:
            {
                system("cls");
                excluiDados(pLocais);
                break;
            }
            case 6:
            {
                system("cls");
                printf("Saindo...");
                break;
            }
            default:
                printf("Opção inválida! Tente novamente.");
                break;
        }
    }
    while (result != 6);
}
#endif // ex6
