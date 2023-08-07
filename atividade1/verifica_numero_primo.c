#include <stdio.h>

int main(int argc, char *argv[]) {
    int qntDivisores = 0;
    for (int i = argv[1] ; i != 1 ; i--) {
        if (argv[1] % i == 0) {
            qntDivisores++;
        }
    }
    if (qntDivisores > 2) {
        printf(0);
    } else {
        printf(1);
    }
    return 0;
}