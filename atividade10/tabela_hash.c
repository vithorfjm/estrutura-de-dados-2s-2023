#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include "tabela_hash.h"

int hash(char* chave) {
    char primeira_letra = tolower(chave[0]);
    int valor = 0;
    switch (primeira_letra) {
        case 'a': 
            valor = 1;
            break;
        case 'b':
            valor = 2;
            break;
        case 'c':
            valor = 3;
            break;
        case 'd':
            valor = 4;
            break;
        case 'e':
            valor = 5;
            break;
        case 'f':
            valor = 6;
            break;
        case 'g':
            valor = 7;
            break;
        case 'h':
            valor = 8;
            break;
        case 'i':
            valor = 9;
            break;
        case 'j':
            valor = 10;
            break;
        case 'k':
            valor = 11;
            break;
        case 'l':
            valor = 12;
            break;
        case 'm':
            valor = 13;
            break;
        case 'n':
            valor = 14;
            break;
        case 'o':
            valor = 15;
            break;
        case 'p':
            valor = 16;
            break;
        case 'q':
            valor = 17;
            break;
        case 'r':
            valor = 18;
            break;
        case 's':
            valor = 19;
            break;
        case 't':
            valor = 20;
            break;
        case 'u':
            valor = 21;
            break;
        case 'v':
            valor = 22;
            break;
        case 'w':
            valor = 23;
            break;
        case 'x':
            valor = 24;
            break;
        case 'y':
            valor = 25;
            break;
        case 'z':
            valor = 26;
            break;
        default:
            valor = 0;
    }
    return valor;
}


char* hash_table_get(char* chave) {
    printf("entrou no hash_table_get");
    int index = hash(chave);
    if (hash_table_contains(chave)) {
        return array_valores[index];
    }
    return "chave nao encontrada";
}

void hash_table_put(char* chave, char* dado) {
    int index = hash(chave);
    strcpy(dado, array_valores[index]);
    printf("saiu do hash_table_put");
}

int hash_table_contains(char* chave) {
    int index = hash(chave);
    int i;
    for (i = 0 ; i < 27 ; i++) {
        if (array_valores[i] != NULL) {
            return 1;
        }
    }
    return 0;
}

void hash_table_remove(char* chave) {
    int index = hash(chave);
    if (hash_table_contains(chave)) {
        array_valores[index] = NULL;
    }
}