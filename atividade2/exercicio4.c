#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int conta_int_array(int array[], int num, int tamanho) {
    int qnt_ocorrencias = 0;
    for (int i = 0 ; i < tamanho ; i++) {
        if(array[i] == num) {
            qnt_ocorrencias++;
        }
    }
    return qnt_ocorrencias;
}

int main() {
    int array[] = {5, 7, 9, 6, 7, 11, 6, 5};
    int tamanho_array = sizeof(array) / sizeof(int);
    int resultado = conta_int_array(array, 7, tamanho_array);
    printf("%d", resultado);
    
    return 0;
}