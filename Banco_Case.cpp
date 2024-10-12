#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <ctype.h>

#define numero_de_clientes 10  // número de clientes que podem ser cadastrados

struct banco
{
    char cliente[50];
    int agencia;
    int conta;
    float valor;
};

int clientes_cadastrados = 0;  // número de clientes que foram cadastrados

int main()
{
    struct banco lancamento[numero_de_clientes];

    int j = 0;
    while (j < 2)
    {
        system("cls");
        int operacao = 0;
        int cliente_desejado = 0;

        printf("\nDigite a operacao desejada: \n");
        printf("\n----------------------------\n");
        printf("\n0         -         cadastro");
        printf("\n1         -         consulta");
        printf("\n----------------------------\n");

        do
        {
            printf("\n\nOperacao Desejada: ");
            fflush(stdin);
            scanf("%d", &operacao);
        } while (operacao < 0 || operacao > 1);

        switch (operacao)
        {

        case 0:
            printf("Informe o nome do cliente: ");
            fflush(stdin);
            gets(lancamento[clientes_cadastrados].cliente);

            printf("Informe o numero da agencia: ");
            fflush(stdin);
            scanf("%d", &lancamento[clientes_cadastrados].agencia);

            printf("Informe o numero da conta: ");
            fflush(stdin);
            scanf("%d", &lancamento[clientes_cadastrados].conta);

            printf("Informe o valor: ");
            fflush(stdin);
            scanf("%f", &lancamento[clientes_cadastrados].valor);

            clientes_cadastrados++;

            break;

        case 1:
            printf("\n\n\n\t VOCE SELECIONOU CONSULTA\n");
            printf("Informe o NOME do cliente: ");
            fflush(stdin);
            scanf("%d", lancamento[clientes_cadastrados].cliente);

            if (cliente_desejado >= 0 && cliente_desejado < clientes_cadastrados)
            {
                printf("\n\n\tCliente.........: %s", lancamento[cliente_desejado].cliente);
                printf("\n\n\tAgencia.........: %d", lancamento[cliente_desejado].agencia);
                printf("\n\n\tConta..........: %d", lancamento[cliente_desejado].conta);
                printf("\n\n\tValor..........: %.2f", lancamento[cliente_desejado].valor);
                printf("\n\n\tTipo..........: %\n\n");
                getche();
            }
            else
            {
                printf("\nCliente nao encontrado.");
                fflush(stdin);
                getche();
            }

            break;

        default:
            printf("\n\n\n\t VOCE SELECIONOU NADA\n");
            fflush(stdin);
            getche();
            operacao = 0;
            break;
        }
    }

    return 0;
}