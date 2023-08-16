#include <stdio.h>

void menor_maior_array(int array[], int tamanho) {
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
    printf("%d, %d", menor, maior);
}

int main() {
    int array[] = {5, 7, 9, 6};
    int tamanho_array = sizeof(array) / sizeof(int);
    menor_maior_array(array, tamanho_array);
    return 0;
}