#define ex3

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

#ifdef ex1

/* Exercício 1 -  As ligacoes telefonicas são cobradas pela sua duracao.
O sistema registra os instantes em que a ligacao foi iniciada e concluida.
Escreva um programa que recebe via teclado dois instantes dados em
horas, minutos e segundo e determina o intervalo de tempo
(em horas, minutos e segundos) decorrido entre eles. */

 int main ()
 {
    setlocale(LC_ALL, "Portuguese");
    int h_inicial, min_inicial, seg_inicial, h_final, min_final, seg_final;
    int total_h, total_min, total_seg, result;

    do
    {
        system("cls");
        printf("Esse programa tem como objetivo determinar o tempo de uma ligação telefônica.\n");

        printf("Digite o instante inicial da ligação em horas: ");
        scanf("%d", &h_inicial);
        printf("Digite os minutos: ");
        scanf("%d", &min_inicial);
        printf("Digite os segundos: ");
        scanf("%d", &seg_inicial);

        printf("\nDigite o instante final da ligação em horas: ");
        scanf("%d", &h_final);
        printf("Digite os minutos: ");
        scanf("%d", &min_final);
        printf("Digite os segundos: ");
        scanf("%d", &seg_final);

        if(h_inicial>h_final)
        {
            h_final = h_final + 24;
            total_h = h_final - h_inicial;
        }
        else
        {
            total_h = h_final - h_inicial;
        }
        if(min_inicial>min_final)
        {
            total_h = total_h - 1;
            total_min = (min_final + 60) - min_inicial;
        }
        else
        {
            total_min = min_final - min_inicial;
        }
        if(seg_inicial>seg_final)
        {
            total_min = total_min - 1;
            total_seg = (seg_final + 60) - seg_inicial;
        }
        else
        {
            total_seg = seg_final - seg_inicial;
        }

        printf ("\nA duração da ligação foi de %d:%d:%d", total_h, total_min, total_seg);
        printf("\nDigite 1 se quiser executar novamente.");
        printf("\nPara encerrar o programa digite qualquer número.\n");
        scanf("%d", &result);
    }
    while (result == 1);
}
#endif // ex1

#ifdef ex2

/* Exercício 2 - Escreva um programa para adivinhar um numero entre 1 e 99 que o usuario
pensou. Digite via teclado os simbolos =, > ou < a cada pergunta. Utilize o
comando if-else. */

int main ()
{
     setlocale(LC_ALL, "Portuguese");
     int minimo = 1, maximo = 99, n, result;
     char x;

    do
    {
        system("cls");
        printf("Seja bem-vindo ao programa!\n");
        printf("Você deve pensar em um número entre 1 e 99.\n");
        printf("Caso o seu número seja maior, use >\n");
        printf("Caso o seu número seja menor, use <\n");
        printf("Caso seja o número pensado, use =\n");

        do
        {
            printf("\nO número pensado é maior, menor ou igual a %d? ", n = (maximo + minimo)/2);
            scanf("%c", &x);

            if (x == '=')
            {
                printf("\nO número pensado é: %d",n);
                getchar();
            }
            else
            {
                if (x == '>')
                {
                    minimo = n;
                    n = (maximo + minimo)/2;
                    getchar();
                }
                else
                {
                    maximo = n;
                    n = (maximo + minimo)/2;
                    getchar();
                }
            }


        }
        while(x!='=');

        printf("\nDigite 1 se quiser executar novamente.");
        printf("\nPara encerrar o programa digite qualquer número.\n");
        scanf("%d", &result);
    }
    while (result == 1);
}

#endif // ex2

#ifdef ex3

/* Exercício 3 - Reescreva o programa do exercicio anterior
agora utilizando o comando switch. Conte o n. de tentativas
e imprima o resultado no video. */

int main ()
{
     setlocale(LC_ALL, "Portuguese"); // ARRUMAR O SYSTEM CLS

     int minimo = 1, maximo = 99, n, result;
     char x;

     do
     {
     system("cls");
     printf("Seja bem-vindo ao programa!\n");
     printf("Você deve pensar em um número entre 1 e 99.\n");
     printf("Caso o seu número seja maior, use >\n");
     printf("Caso o seu número seja menor, use <\n");
     printf("Caso seja o número pensado, use =\n");

    do
    {
        printf("\nO número pensado é maior, menor ou igual a %d? ", n =(maximo + minimo)/2);
        scanf("%c",&x);

        switch(x)
        {
        case '>':
        {
            minimo = n;
            n = maximo + minimo/2;
            getchar();
            break;
        }

        case '<':
        {
            maximo = n;
            n = maximo + minimo/2;
            getchar();
            break;
        }

        case '=':
        {
            printf("O número pensado é: %d",n);
            getchar();
            break;
        }
        }
    } while(x!='=');

        printf("\nDigite 1 se quiser executar novamente.");
        printf("\nPara encerrar o programa digite qualquer número.\n");
        scanf("%d", &result);
    }
    while (result == 1);
}

#endif // ex3

#ifdef ex4

/* Exercício 4 - Escreva um programa que receba via teclado numeros
inteiros positivos. Quando o numero digitado for negativo o programa
deve parar e calcula a media dos valores positivos digitados. */

int main ()
{
    setlocale(LC_ALL, "Portuguese");

    int n, soma = 0, cont = 0, result;
    float media;

    do
    {
        system("cls");
        printf("Esse programa tem como objetivo receber números via teclado e calcular a média dos valores digitados\n");
        printf("quando for digitado um número negativo.\n");

        do
        {
            printf("\nPor favor, digite um número: ");
            scanf("%d",&n);

            if(n > 0)
            {
                soma = soma + n;
                cont++;
            }
        }
        while (n > 0);
        media = soma / cont;
        printf("\nA média dos números inteiros positivos é: %.2f", media);

        printf("\nDigite 1 se quiser executar novamente.");
        printf("\nPara encerrar o programa digite qualquer número.\n");
        scanf("%d", &result);

        soma = 0;
        cont = 0;
        n = 0;
        getchar();

    }
    while (result == 1);
}

#endif // ex3

#ifdef ex5

/* Exercício 5 - Um posto está vendendo combustíveis com a seguinte tabela de descontos:
Álcool: até 20 litros, desconto de 3% por litro
        acima de 20 litros, desconto de 5% por litro
Gasolina: até 20 litros, desconto de 4% por litro
          acima de 20 litros, desconto de 6% por litro

Escreva um programa que leia o número de litros vendidos e o tipo de
combustível (codificado da seguinte forma: A-álcool, G-gasolina). Calcule e
imprima o valor a ser pago pelo cliente sabendo-se que o preço do litro da
gasolina é R$ 5,88 e o preço do litro do álcool é R$ 4,18. */

int main()
{
    setlocale(LC_ALL, "Portuguese");

    char combustivel;
    int litro, result;
    float preco, pagamento, desconto;

    do
    {
        system("cls");

        printf("------------------------------------\n");
        printf("SEJA BEM-VINDO AO POSTO DE GASOLINA!\n");
        printf("------------------------------------\n");
        printf("\nQuantos litros você deseja abastecer? ");
        scanf("%d",&litro);
        printf("\nDIGITE A PARA ÁLCOOL E G PARA GASOLINA.\n");
        printf("Agora informe o tipo de combustível desejado: ");
        getchar();
        combustivel = getchar();

        printf("\nO combustível escolhido foi: %c. Ótima escolha!\n",combustivel);

        switch(combustivel)
        {

        case 'A':
        {
            preco = litro * 4.18;
            if(litro < 20)
            {
                pagamento = preco - (preco * 0.03);
            }
            else
            {
                pagamento = preco - (preco * 0.05);
            }
            break;
        }
        case 'G':
        {
            preco = litro * 5.88;
            if(litro < 20)
            {
                pagamento = preco - (preco * 0.04);
            }
            else
            {
                pagamento = preco - (preco * 0.06);
            }
            break;
        }

        case 'a':
        {
            preco = litro * 4.18;
            if(litro < 20)
            {
                pagamento = preco - (preco * 0.03);
            }
            else
            {
                pagamento = preco - (preco * 0.05);
            }
            break;
        }

        case 'g':
        {
            preco = litro * 5.88;
            if(litro < 20)
            {
                pagamento = preco - (preco * 0.04);
            }
            else
            {
                pagamento = preco - (preco * 0.06);
            }
            break;
        }
        default:
        {
            printf ("\nA opção escolhida não existe.\n");
            printf("\nPor favor, tente novamente.\n");
        }
        }

        printf("\nO preço normal do pagamento é R$ %.2f\n",preco);
        printf("O total do desconto é R$ %.2f\n",desconto = preco - pagamento);
        printf("O valor com desconto é R$ %.2f\n",pagamento);

        printf("\nDigite 1 se quiser executar novamente.");
        printf("\nPara encerrar o programa digite qualquer número.\n");
        scanf("%d", &result);
    }
    while (result == 1);
}
#endif // ex5
