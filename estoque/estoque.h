typedef struct {
    int id;
    int qtd;
    char nome[50];
} Produto;

void adicionar_produto(Produto *produtos, int qtdProdutos);
void listar_produtos(Produto *produtos, int qtdProdutos);
void editar_produto(Produto *produtos, int qtdProdutos);