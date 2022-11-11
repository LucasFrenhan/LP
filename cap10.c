// Nomes: Ana Vitória França da Silva e Lucas Henrique Padilha Frenhan
// Professor: Rui
// Componente: Linguagem de Programação
// Data: 10/11/2022

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
    setlocale (LC_ALL,"portuguese");

    int result;

    do
    {
        system("cls");

        printf("Esse programa tem como objetivo.......\n");

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

int main()
{
    setlocale (LC_ALL,"portuguese");

    int result;

    do
    {
        system("cls");

        printf("Esse programa tem como objetivo.......\n");

        printf("\nDigite 1 se quiser executar novamente.");
        printf("\nPara encerrar o programa digite qualquer número.\n");
        scanf("%d", &result);
    }
    while (result == 1);
}
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

int main()
{
    setlocale (LC_ALL,"portuguese");

    int result;

    do
    {
        system("cls");

        printf("Esse programa tem como objetivo.......\n");

        printf("\nDigite 1 se quiser executar novamente.");
        printf("\nPara encerrar o programa digite qualquer número.\n");
        scanf("%d", &result);
    }
    while (result == 1);
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

int main()
{
    setlocale (LC_ALL,"portuguese");

    int result;

    do
    {
        system("cls");

        printf("Esse programa tem como objetivo.......\n");

        printf("\nDigite 1 se quiser executar novamente.");
        printf("\nPara encerrar o programa digite qualquer número.\n");
        scanf("%d", &result);
    }
    while (result == 1);
}
#endif //ex4
