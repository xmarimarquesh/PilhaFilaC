#ifndef FILA_H
#define FILA_H

#include <stdlib.h>

int *dobrarArray(int *array, int *size) {
    *size *= 2;
    int *copia = (int *)malloc((*size) * sizeof(int));
    for (int i = 0; i < *size / 2; i++) {
        copia[i] = array[i];
    }

    return copia;
}

int enqueue(int **array, int value, int qtd, int *size) {
    if (qtd == *size) {
        *array = dobrarArray(*array, size);
    }
    (*array)[qtd] = value;
    return qtd + 1;
}

int dequeue(int *array, int qtd) {
    for (int i = 0; i < qtd - 1; i++) {
        array[i] = array[i + 1];
    }
    return qtd - 1;
}

#endif
