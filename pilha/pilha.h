typedef struct {
    char valor;
    struct Objeto* proximo_objeto;
} Objeto;

typedef struct {
    Objeto* topo;
    int qtd;
} Pilha;

Pilha* pilha();
void empilhar(Objeto* o, Pilha* P);
Objeto* desempilhar(Pilha* P);