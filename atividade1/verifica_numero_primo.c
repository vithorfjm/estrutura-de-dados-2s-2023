#include <stdio.h>

int main(int argc, char *argv[]) {
    int num = (int) argv[1];
    int qntDivisores = 0;
    
    for (int i = num ; i >= 1 ; i--) {
        if (num % i == 0) {
            qntDivisores++;
        }
    }
    if (qntDivisores > 2 || num <= 1) {
        printf("%d", 0);
    } else {
        printf("%d", 1);
    }

    return 0;
}
