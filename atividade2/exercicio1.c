#include <stdio.h>

int soma_array(int array[], int tamanho) {
    int soma = 0;
    for (int i = 0 ; i < tamanho ; i++) {
        soma += array[i];
    }
    return soma;
}

int main() {
    int array[] = {5, 7, 9, 6};
    // Nao eh possivel calcular o tamanho do array dentro de uma funcao,
    // Portanto calculei o tamanho do array na funcao main e passei como
    // parametro para a funcao 'soma_array' 
    int tamanho_array = sizeof(array) / sizeof(int); 
    int resultado = soma_array(array, tamanho_array);
    printf("%d", resultado);
    return 0;
}