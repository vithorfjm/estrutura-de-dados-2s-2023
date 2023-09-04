#include <stdio.h>
#include <stdlib.h>
#include "estoque.h"

int main(int argc, char* argv[]) {
    int opcao = 0;
    int qtdProdutos = 0;
    Produto produtos[100];

    while (opcao != 5) {
        printf("\n");
        printf("[ 1 ] - adicionar produto\n");
        printf("[ 2 ] - listar produtos\n");
        printf("[ 3 ] - editar produto\n");
        printf("[ 4 ] - remover produto\n");
        printf("[ 5 ] - encerrar sistema\n");
        scanf("%d", &opcao);
        system("cls");

        switch (opcao) {
            case 1:
                adicionar_produto(produtos, qtdProdutos);
                qtdProdutos++;
                break;
            case 2:
                listar_produtos(produtos, qtdProdutos);
                break;
            case 3:
                editar_produto(produtos, qtdProdutos);
                break;
            case 4:
                break;
            case 5:
                break;
            default:
                printf("Opcao invalida");
        }
    }

    printf("encerrando sistema.");

    exit(0);
}