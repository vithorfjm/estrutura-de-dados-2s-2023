#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "tabela_hash.h"

int main(int argc, char *argv[]) {

    printf("\n\t === INICIANDO PROGRAMA ===\n");

    printf("\n\t === ADICIONANDO VALORES ===\n");
    hash_table_put("nome", "Vithor Felix");
    hash_table_put("sobrenome", "Jales Miranda");
    hash_table_put("estado", "DF");
    hash_table_put("profissao", "Estagiario");
    hash_table_put("time", "FLUMINENSE FOOTBALL CLUB, Campeao da America");

    printf("\n\t === PRINTANDO  ===");
    printf("\n NOME: %s %s", hash_table_get("nome"), hash_table_get("sobrenome"));
    printf("\n ESTADO: %s", hash_table_get("estado"));
    printf("\n PROFISSAO: %s", hash_table_get("profissao"));
    printf("\n TIME: %s\n\n", hash_table_get("time"));

    return 1;
}