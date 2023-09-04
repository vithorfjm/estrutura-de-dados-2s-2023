#include <stdio.h>
#include <stdlib.h>
#include "estoque.h"

void adicionar_produto(Produto *produtos, int qtdProdutos) {
    Produto p;
    printf("\n");
    printf("Digite o nome do produto: ");
    scanf("%s", &p.nome);
    printf("Digite o id do produto: ");
    scanf("%d", &p.id);
    printf("Digite a quantidade de produtos: ");
    scanf("%d", &p.qtd);

    produtos[qtdProdutos] = p;
}

void listar_produtos(Produto *produtos, int qtdProdutos) {
    printf("\n");
    for (int i = 0; i < qtdProdutos; i++) {
        printf("%d - %s - %d\n", produtos[i].id, produtos[i].nome, produtos[i].qtd);
    }
}

void editar_produto(Produto *produtos, int qtdProdutos) {
    int id;
    int produtoExiste = 1;
    listar_produtos(produtos, qtdProdutos);
    printf("\n");
    printf("Informe o id do produto: ");
    scanf("%d", &id);
    for (int i = 0; i < qtdProdutos; i++) {
        if (produtos[i].id == id) {
            produtoExiste = 0;
            printf("Informe a quantidade atual: ");
            scanf("%d", &produtos[i].qtd);
        }
    }
    if (produtoExiste == 1) {
        printf("Produto com id %d nao encontrado", id);
    }
}