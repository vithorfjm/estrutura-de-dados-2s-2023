#include <stdio.h>

int soma_array(int array[]) {
    // int tamanho = sizeof(array) / sizeof(int);
    int tamanho = 4;
    int soma = 0;
    for (int i = 0 ; i < tamanho ; i++) {
        soma += array[i];
    }
    printf("%d", soma);
    return soma;
}

int main() {
    int array[] = {5, 7, 9, 6};
    soma_array(array);
    return 0;
}