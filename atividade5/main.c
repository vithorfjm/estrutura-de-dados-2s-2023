#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "bubble_sort.h"

int main(int argc, char *argv[]) {
    if (argc != 2) {
        printf("ERRO: Formatacao invalida");
        exit(1);
    }

    char *nomeArquivoEntrada = argv[1];
    char *nomeArquivoSaida = "arq_palavras_ordenadas.txt";

    FILE *arquivoEntrada = fopen(nomeArquivoEntrada, "r");
    if (arquivoEntrada == NULL) {
        printf("ERRO: Nao foi possivel abrir o arquivo '%s'", nomeArquivoEntrada);
        exit(1);
    }
    
    int numLinhas = 0;
    char linha[100];
    while (fgets(linha, sizeof(linha), arquivoEntrada)) { // conta quantas linhas o arquivo tem
        numLinhas++;
    }

    fseek(arquivoEntrada, 0, SEEK_SET); // funcao que retorna o ponteiro novamente para o inicio do arquivo

    // 
    char **palavras = (char **)malloc(numLinhas * sizeof(char *)); // criação do vetor com o tamanho da qtd de linhas no arquivo de entrada
    for (int i = 0; i < numLinhas; i++) {
        palavras[i] = (char *)malloc(100 * sizeof(char));
        fgets(palavras[i], 100, arquivoEntrada);
        strtok(palavras[i], "\n");
    }

    fclose(arquivoEntrada);

    bubble_sort(palavras, numLinhas);

    FILE *arquivoSaida = fopen(nomeArquivoSaida, "w");

    // escreve as palavras, ja ordenadas, dentro do arquivo de saida
    for (int i = 0; i < numLinhas; i++) {
        fprintf(arquivoSaida, "%s\n", palavras[i]);
        free(palavras[i]);
    }

    fclose(arquivoSaida);
    free(palavras);

    printf("As palavras foram ordenadas no arquivo '%s'.\n", nomeArquivoSaida);

    exit(0);
}