#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int multiplica_array[](int array1[], int array2[]) {
    // int tamanho1 = sizeof(array) / sizeof(int);
    // int tamanho2 = sizeof(array) / sizeof(int);
    int tamanho1 = 4;
    int tamanho2 = 4;
    
    if (tamanho1 != tamanho2) {
        int array_vazia[1] = {0}; 
        return array_vazia;
    }
    
    int resultado[tamanho1];
    for (int i = 0 ; i < tamanho ; i++) {
        resultado[i] = array1[i] * array2[i];
        printf("\n%d", resultado[i]);
    }
    return resultado;
}

int main() {
    int array1[4] = {5, 7, 9, 6};
    int array2[4] = {5, 7, 9, 6};
    multiplica_array(array1, array2);
    return 0;
}