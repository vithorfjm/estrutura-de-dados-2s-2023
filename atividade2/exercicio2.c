#include <stdio.h>

int menor_maior_array(int array[]) {
    // int tamanho = sizeof(array) / sizeof(int);
    int tamanho = 4;
    int maior = array[0];
    int menor = array[0];
    for (int i = 1 ; i < tamanho ; i++) {
        if (array[i] > maior) {
            maior = array[i];
        }
        if (array[i] < menor) {
            menor = array[i];
        }
    }
    int menor_e_maior[2] = {menor, maior};
    printf("\nMENOR: %d", menor );
    printf("\nMAIOR: %d", maior );
    return 1;
}

int main() {
    int array[] = {5, 7, 9, 6};
    menor_maior_array(array);
    return 0;
}