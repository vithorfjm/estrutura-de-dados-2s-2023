#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int busca_string(char* array[], char* busca, int tamanho) {
    for (int i = 0 ; i < tamanho ; i++) {
        if (strcmp(busca, array[i]) == 0) {
            return 1;
        }
    }
    return 0;
}

int main() {
    char* array[] = {"texto", "J", "EDA"};
    int tamanho_array = sizeof(array) / sizeof(char*);
    int resultado = busca_string(array, "EDO", tamanho_array);
    printf("%d", resultado);
    
    return 0;
}