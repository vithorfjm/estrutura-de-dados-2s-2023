#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include "tabela_hash.h"

unsigned int jenkins_hash(char* chave) { // Algoritmo mais sofisticado, para evitar repeticao de index, como quando estava havendo com as chaves 'nome' e 'time', no algoritmo comentado (21-26)
    unsigned int hash = 0;
    while (*chave) {
        hash += (unsigned int)(*chave++);
        hash += (hash << 10);
        hash ^= (hash >> 6);
    }
    hash += (hash << 3);
    hash ^= (hash >> 11);
    hash += (hash << 15);
    return hash;
}

int hash(char* chave) {
    // int hash = 0;
    // for (int i = 0; chave[i] != '\0'; i++) {
    //     hash = (hash + chave[i]) % 100;
    // }
    // printf("%d", hash);
    // return hash;
    return jenkins_hash(chave) % 100;
}

char* hash_table_get(char* chave) {
    if (hash_table_contains(chave)) {
        int index = hash(chave);
        return array_valores[index];
    } else {
        return NULL;
    }
}

void hash_table_put(char* chave, char* dado) {
    int index = hash(chave);
    array_valores[index] = strdup(dado);
}

int hash_table_contains(char* chave) {
    int index = hash(chave);
    return (array_valores[index] != NULL);
}

void hash_table_remove(char* chave) {
    int index = hash(chave);
    if (hash_table_contains(chave)) {
        array_valores[index] = NULL;
    }
}