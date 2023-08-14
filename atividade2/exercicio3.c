#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int busca_string(char* array[], char* busca) {
    // int tamanho = sizeof(array) / sizeof(int);
    int tamanho = 3;
    for (int i = 0 ; i < tamanho ; i++) {
        if (strcmp(busca, array[i]) == 0) {
            return 1;
        }
    }
    return 0;
}

int main() {
    char* array[3] = {"texto", "J", "EDA"};
    int resultado = busca_string(array, "EDO");
    printf("\n%d", resultado);
    return 0;
}