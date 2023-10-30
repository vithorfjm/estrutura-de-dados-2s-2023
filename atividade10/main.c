#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "tabela_hash.h"

int main(int argc, char *argv[]) {

    printf("INICIANDO PROGRAMA");

    hash_table_put("Apple", "Fruit");
    hash_table_put("Coca", "Drink");

    printf("VALORES INCLUIDOS");

    printf("%s", hash_table_get("Drink"));
    printf("%s", hash_table_get("Fruit"));

    printf("VALORES PRINTADOS");
    return 1;
}