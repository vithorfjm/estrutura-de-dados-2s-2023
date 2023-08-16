#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void multiplica_array(int array1[], int array2[], int *resultado, int tamanho) {
    for (int i = 0 ; i < tamanho ; i++) {
        resultado[i] = array1[i] * array2[i];
    }
}

int main() {
    int array1[] = {5, 7, 9, 6};
    int array2[] = {5, 7, 9, 6};
    int tamanho_arrays = sizeof(array1) / sizeof(int);
    int resultado[tamanho_arrays];
    multiplica_array(array1, array2, resultado, tamanho_arrays);
    printf("[");
    for (int i = 0 ; i < tamanho_arrays ; i++) {
        if (i == tamanho_arrays-1) {
            printf("%d]", resultado[i]);
            break;
        }
        printf("%d, ", resultado[i]);
    }
    
    return 0;
}