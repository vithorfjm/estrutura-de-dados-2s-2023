#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    int num = atoi(argv[1]); // Transforma a String passada em um inteiro e aloca na variavel 'num'
    int qntDivisores = 0;
    
    for (int i = num ; i >= 1 ; i--) {
        if (num % i == 0) {
            qntDivisores++;
        }
    }
    if (qntDivisores > 2 || num <= 1) {
        printf("0");
    } else {
        printf("1");
    }

    return 0;
}
