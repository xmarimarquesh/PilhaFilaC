#ifndef PILHA_H
#define PILHA_H
#include <stdio.h>

int *dobrarArray(int *array, int *capacity) {
    *capacity *= 2;
    int *copia = (int *)malloc((*capacity) * sizeof(int));
    for (int i = 0; i < *capacity / 2; i++) {
        copia[i] = array[i];
    }

    return copia;
}

int push(int **array, int value, int qtd, int *capacity) {
    if (qtd == *capacity) {
        *array = dobrarArray(*array, capacity);
    }
    (*array)[qtd] = value;
    return qtd + 1;
}

int *pop(int *array, int *qtd){
    return array[*qtd--];
}

#endif 