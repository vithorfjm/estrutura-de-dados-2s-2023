#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "bubble_sort.h"

void swap(char *x, char *y) {
    char temp[100];
    strcpy(temp, x);
    strcpy(x, y);
    strcpy(y, temp);
}

void bubble_sort(char **arr, int n) {
    for (int i = 0 ; i < n-1 ; i++) {

        for (int j = 0 ; j < n-1-i ; j++) {

            if (strcmp(arr[j], arr[j + 1]) > 0) {
                swap(arr[j], arr[j+1]);
            }
        }
    }
}